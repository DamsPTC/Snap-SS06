#!/usr/bin/env python3
"""Extract the exact IPA and export readable metadata; no source-code claims.

Uses Apple's published Mach-O chained-fixup and Objective-C runtime layouts.
Does not execute the application or alter the IPA.
"""
import argparse
import csv
import hashlib
import json
import plistlib
import re
import stat
import struct
import zipfile
from pathlib import Path, PurePosixPath

EXPECTED_SHA256 = '008086080f7e0e1a0c9dda4d5bfa092b20f9192d3b1897bae33dec0c5e0acef1'
SOURCE_URL = 'https://github.com/DamsPTC/sandbox-fictif-snapchat/releases/download/nouvelle-version-14.25.0.48/com.toyopagroup.picaboo_14.25.0.48_und3fined.ipa'


def write_json(path, data):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(data, ensure_ascii=False, indent=2) + '\n')


def safe_name(value):
    text = re.sub(r'[^A-Za-z0-9_.-]', '_', value)
    return text[:160] or 'unnamed'


class MachO:
    def __init__(self, data):
        self.data = data
        self.is64 = data[:4] == b'\xcf\xfa\xed\xfe'
        if data[:4] not in (b'\xcf\xfa\xed\xfe', b'\xce\xfa\xed\xfe'):
            raise ValueError('Unsupported Mach-O magic')
        self.ps = 8 if self.is64 else 4
        self.cpu, self.subtype, self.filetype, count = struct.unpack_from('<4I', data, 4)
        self.segments, self.sections, self.encryption, self.libraries = [], [], [], []
        self.fixup_command = None
        self.function_starts = None
        self.pointers, self.imports, self.errors = {}, [], []
        self._classes = {}
        pos = 32 if self.is64 else 28
        for _ in range(count):
            cmd, size = self.unpack('<II', pos)
            if size < 8 or pos + size > len(data):
                raise ValueError('Invalid load command')
            if cmd in (0x19, 1):
                is64 = cmd == 0x19
                name = data[pos+8:pos+24].split(b'\0')[0].decode()
                va, vs, fo, fs = self.unpack('<QQQQ' if is64 else '<IIII', pos+24)
                nsec = self.u32(pos + (64 if is64 else 48))
                self.segments.append(dict(name=name, vmaddr=va, vmsize=vs, offset=fo, size=fs))
                for j in range(nsec):
                    sp = pos + (72 if is64 else 56) + j*(80 if is64 else 68)
                    sn = data[sp:sp+16].split(b'\0')[0].decode()
                    sg = data[sp+16:sp+32].split(b'\0')[0].decode()
                    addr, ssize, soff = self.unpack('<QQI' if is64 else '<III', sp+32)
                    self.sections.append(dict(name=sn, segment=sg, address=addr, size=ssize, offset=soff))
            elif cmd in (0x21, 0x2c):
                off, sz, cryptid = self.unpack('<III', pos+8)
                self.encryption.append(dict(offset=off, size=sz, cryptid=cryptid))
            elif cmd == 0x80000034:
                self.fixup_command = self.unpack('<II', pos+8)
            elif cmd == 0x26:
                self.function_starts = self.unpack('<II', pos+8)
            elif cmd in (0xc, 0xd, 0x80000018, 0x8000001f, 0x20, 0x80000023):
                noff = self.u32(pos+8)
                self.libraries.append(data[pos+noff:pos+size].split(b'\0')[0].decode(errors='replace'))
            pos += size
        self.base = next(s['vmaddr'] for s in self.segments if s['offset'] == 0 and s['size'])

    def unpack(self, fmt, off):
        if off < 0:
            raise ValueError('Negative offset')
        return struct.unpack_from(fmt, self.data, off)

    def u32(self, off):
        return self.unpack('<I', off)[0]

    def offset(self, va):
        for s in self.segments:
            if s['vmaddr'] <= va < s['vmaddr'] + s['size']:
                return s['offset'] + va - s['vmaddr']
        raise ValueError(f'Unmapped virtual address {va:#x}')

    def cstring_at(self, off):
        if not 0 <= off < len(self.data):
            raise ValueError('String outside file')
        end = self.data.find(b'\0', off, min(off+65536, len(self.data)))
        if end < 0:
            raise ValueError('Unterminated string')
        return self.data[off:end].decode('utf-8', errors='replace')

    def cstring(self, va):
        return self.cstring_at(self.offset(va)) if va else ''

    def ptr(self, va):
        off = self.offset(va)
        return self.pointers.get(off, self.unpack('<Q' if self.is64 else '<I', off)[0])

    def fixups(self):
        if not self.fixup_command:
            return
        root = self.fixup_command[0]
        version, starts, imports, symbols, count, fmt, sfmt = self.unpack('<7I', root)
        if version or sfmt:
            raise ValueError('Unsupported chained-fixups version or compressed symbols')
        stride = {1:4, 2:8, 3:16}[fmt]
        for i in range(count):
            off = root+imports+i*stride
            word = self.unpack('<Q' if fmt == 3 else '<I', off)[0]
            noff = word >> (32 if fmt == 3 else 9)
            self.imports.append(self.cstring_at(root+symbols+noff))
        image = root + starts
        for i in range(self.u32(image)):
            rel = self.u32(image+4+i*4)
            if not rel:
                continue
            seg = image+rel
            size, page_size, pf, seg_off, max_valid, pages = self.unpack('<IHHQIH', seg)
            for page in range(pages):
                first = self.unpack('<H', seg+22+page*2)[0]
                if first == 0xffff:
                    continue
                chains = [first]
                if first & 0x8000:
                    chains = []
                    idx = first & 0x7fff
                    while True:
                        if 22+idx*2 >= size:
                            raise ValueError('Bad multi-start chain')
                        value = self.unpack('<H', seg+22+idx*2)[0]
                        chains.append(value & 0x7fff)
                        idx += 1
                        if value & 0x8000:
                            break
                for start in chains:
                    va = self.base + seg_off + page*page_size + start
                    for hop in range(page_size//4):
                        off = self.offset(va)
                        raw = self.unpack('<I' if pf == 3 else '<Q', off)[0]
                        if pf in (2, 6):
                            bound, nxt = raw >> 63, (raw >> 51) & 0xfff
                            target = (raw & ((1<<36)-1)) | (((raw>>36)&0xff)<<56)
                            if pf == 6:
                                target += self.base
                            ordinal, step = raw & 0xffffff, 4
                        elif pf in (1, 7, 9, 10, 12):
                            bound, nxt = (raw>>62)&1, (raw>>51)&0x7ff
                            auth = raw >> 63
                            target = (raw & 0xffffffff)+self.base if auth else (raw & ((1<<43)-1)) | (((raw>>43)&0xff)<<56)
                            if not auth and pf in (7, 9, 12):
                                target += self.base
                            ordinal, step = raw & (0xffffff if pf == 12 else 0xffff), (4 if pf in (7,10) else 8)
                        elif pf == 3:
                            bound, nxt = raw>>31, (raw>>26)&31
                            target, ordinal, step = raw & 0x3ffffff, raw & 0xfffff, 4
                            if not bound and target > max_valid:
                                target -= (0x4000000+max_valid)//2
                        else:
                            raise ValueError(f'Unsupported pointer format {pf}')
                        self.pointers[off] = self.imports[ordinal] if bound else target
                        if not nxt:
                            break
                        va += nxt*step
                    else:
                        raise ValueError('Fixup chain too long')

    def class_info(self, va):
        if isinstance(va, str):
            return dict(name=va.removeprefix('_OBJC_CLASS_$_'), external=True)
        if not va:
            return None
        if va in self._classes:
            return self._classes[va]
        ro = self.ptr(va+4*self.ps) & (~7 if self.is64 else ~3)
        name = self.cstring(self.ptr(ro+(24 if self.is64 else 16)))
        info = dict(name=name, address=hex(va), ro_address=hex(ro))
        self._classes[va] = info
        return info

    def methods(self, va, kind):
        if not va:
            return []
        off = self.offset(va)
        flags, count = self.unpack('<II', off)
        size = flags & 0xfffc
        small, direct = bool(flags & 0x80000000), bool(flags & 0x40000000)
        if count > 100000 or size not in (12, 24):
            raise ValueError(f'Invalid method list {hex(va)}: {count}/{size}')
        result = []
        for i in range(count):
            entry = va+8+i*size
            if small:
                a,b,c = self.unpack('<iii', self.offset(entry))
                name_ptr = entry+a
                if not direct:
                    name_ptr = self.ptr(name_ptr)
                type_ptr, imp = entry+4+b, entry+8+c
            else:
                name_ptr, type_ptr, imp = (self.ptr(entry+j*self.ps) for j in range(3))
            result.append(dict(kind=kind, selector=self.cstring(name_ptr), encoding=self.cstring(type_ptr), implementation=hex(imp) if isinstance(imp,int) else imp))
        return result

    def class_record(self, va):
        record = dict(self.class_info(va))
        super_info = self.class_info(self.ptr(va+self.ps))
        record['superclass'] = super_info['name'] if super_info else None
        ro = int(record['ro_address'],16)
        methods = self.methods(self.ptr(ro+(32 if self.is64 else 20)), '-')
        meta = self.ptr(va)
        if isinstance(meta, int) and meta:
            mro = self.ptr(meta+4*self.ps) & (~7 if self.is64 else ~3)
            methods += self.methods(self.ptr(mro+(32 if self.is64 else 20)), '+')
        record['methods'] = methods
        props = self.ptr(ro+(64 if self.is64 else 36))
        record['properties'] = []
        if props:
            size, count = self.unpack('<II', self.offset(props))
            if count > 100000 or size != 2*self.ps:
                raise ValueError('Invalid property list')
            for i in range(count):
                entry = props+8+i*size
                record['properties'].append(dict(name=self.cstring(self.ptr(entry)), attributes=self.cstring(self.ptr(entry+self.ps))))
        return record

    def summary(self):
        return dict(cpu=hex(self.cpu), subtype=hex(self.subtype), bits=64 if self.is64 else 32, filetype=self.filetype, base_address=hex(self.base), encryption=self.encryption, linked_libraries=self.libraries, segments=self.segments, sections=self.sections, recovered_classes=len(self._classes), errors=self.errors)


def declaration(record):
    """Human-readable runtime dump. Original encodings are kept verbatim."""
    lines = ['// Objective-C runtime metadata recovered from the supplied IPA.',
             '// Method bodies and original source files are NOT recovered here.',
             '// Selectors, type encodings and implementation addresses follow.',
             '#pragma once', '', '// Runtime class: '+record['name'],
             '// Superclass: '+str(record['superclass']),
             '// Address: '+record['address'], '']
    valid = re.fullmatch(r'[A-Za-z_][A-Za-z0-9_]*',record['name']) is not None
    if valid:
        lines.append('@interface '+record['name']+'\n')
    for prop in record['properties']:
        lines.append('// Property: '+prop['name']+'; attributes: '+prop['attributes'].replace('\n',' '))
    for m in record['methods']:
        lines.extend(['', '// '+m['kind']+'['+record['name']+' '+m['selector']+']',
                      '// Type encoding: '+m['encoding'].replace('\n',' '),
                      '// Implementation: '+m['implementation']])
    if valid:
        lines.append('\n@end')
    return '\n'.join(lines)+'\n'


def slices(data):
    magic = data[:4]
    if magic in (b'\xcf\xfa\xed\xfe',b'\xce\xfa\xed\xfe'):
        yield 'thin', data
    elif magic == b'\xca\xfe\xba\xbe':
        n = struct.unpack_from('>I',data,4)[0]
        for i in range(n):
            cpu, sub, off, size, align = struct.unpack_from('>5I',data,8+i*20)
            yield f'{cpu:08x}-{sub:08x}', data[off:off+size]


def main():
    p=argparse.ArgumentParser()
    p.add_argument('ipa', type=Path)
    p.add_argument('--output',type=Path,default=Path('.'))
    args=p.parse_args()
    ipa=args.ipa.read_bytes()
    digest=hashlib.sha256(ipa).hexdigest()
    if digest != EXPECTED_SHA256:
        raise SystemExit('IPA SHA-256 mismatch; refusing import')
    root=args.output.resolve()
    extracted=root/'extracted'
    extracted.mkdir(parents=True,exist_ok=True)
    manifest=[]
    all_binaries=[]
    total_classes=total_methods=0
    with zipfile.ZipFile(args.ipa) as z:
        for item in z.infolist():
            rel=PurePosixPath(item.filename)
            if rel.is_absolute() or '..' in rel.parts or '\\' in item.filename:
                raise ValueError('Unsafe ZIP entry')
            dst=extracted.joinpath(*rel.parts)
            if item.is_dir():
                dst.mkdir(parents=True,exist_ok=True)
                continue
            data=z.read(item) # CRC checked by zipfile
            mode=item.external_attr>>16
            if stat.S_ISLNK(mode):
                raise ValueError('Unexpected symlink; inspect before extracting')
            dst.parent.mkdir(parents=True,exist_ok=True)
            dst.write_bytes(data)
            dst.chmod(0o755 if mode & 0o111 else 0o644)
            manifest.append(dict(path=item.filename, size=len(data),sha256=hashlib.sha256(data).hexdigest(),zip_crc=f'{item.CRC:08x}',mode=oct(mode)))
            if data.startswith(b'bplist00') or item.filename.endswith(('.plist','.strings','.stringsdict')):
                try:
                    obj=plistlib.loads(data)
                    xml=root/'readable'/Path(item.filename+'.xml')
                    xml.parent.mkdir(parents=True,exist_ok=True)
                    xml.write_bytes(plistlib.dumps(obj,fmt=plistlib.FMT_XML,sort_keys=False))
                except (ValueError,plistlib.InvalidFileException,TypeError,OverflowError):
                    pass
            for arch, slice_data in slices(data):
                binary_id=safe_name(item.filename.rsplit('/',1)[-1])+'-'+arch
                out=root/'analysis'/'binaries'/binary_id
                out.mkdir(parents=True,exist_ok=True)
                macho=MachO(slice_data)
                info=dict(path=item.filename,architecture=arch,analysis_directory=str(out.relative_to(root)))
                if any(c['cryptid'] for c in macho.encryption):
                    info['status']='encrypted; no class extraction attempted'
                else:
                    try:
                        macho.fixups()
                        class_sections=[s for s in macho.sections if s['name']=='__objc_classlist']
                        clsdir=root/'objc'/binary_id
                        clsdir.mkdir(parents=True,exist_ok=True)
                        count=methods=0
                        buckets={}
                        with (out/'classes.jsonl').open('w') as cf, (out/'methods.tsv').open('w') as mf:
                            writer=csv.writer(mf,delimiter='\t',lineterminator='\n')
                            writer.writerow(['class','kind','selector','encoding','implementation'])
                            for section in class_sections:
                                for off in range(0,section['size'],macho.ps):
                                    pointer=macho.ptr(section['address']+off)
                                    try:
                                        record=macho.class_record(pointer)
                                        filename=safe_name(record['name'])+'-'+record['address'][2:]+'.h'
                                        bucket=hashlib.sha256(record['name'].encode()).hexdigest()[:2]
                                        (clsdir/bucket).mkdir(exist_ok=True)
                                        header=clsdir/bucket/filename
                                        header.write_text(declaration(record))
                                        record['header_path']=str(header.relative_to(root))
                                        buckets.setdefault(bucket,[]).append((record['name'],filename,record['address']))
                                        cf.write(json.dumps(record,ensure_ascii=False)+'\n')
                                        for m in record['methods']:
                                            writer.writerow([record['name'],m['kind'],m['selector'],m['encoding'],m['implementation']])
                                        count+=1
                                        methods+=len(record['methods'])
                                    except (ValueError,TypeError,struct.error,KeyError) as exc:
                                        macho.errors.append(dict(class_pointer=str(pointer),error=str(exc)))
                        index=['# Classes Objective-C : '+binary_id,'','Exports de métadonnées runtime ; les corps de méthodes ne figurent pas dans ces fichiers.','','| Groupe | Classes |','| --- | --- |']
                        for bucket, entries in sorted(buckets.items()):
                            index.append(f'| [{bucket}]({bucket}/) | {len(entries)} |')
                            (clsdir/bucket/'README.md').write_text('# Classes : '+bucket+'\n\n'+'\n'.join(f'- [{name}]({filename}) — `{addr}`' for name,filename,addr in sorted(entries))+'\n')
                        (clsdir/'README.md').write_text('\n'.join(index)+'\n')
                        info.update(status='runtime metadata exported',class_entries=sum(s['size']//macho.ps for s in class_sections),classes_exported=count,methods_exported=methods)
                        total_classes+=count
                        total_methods+=methods
                    except (ValueError,TypeError,struct.error,KeyError) as exc:
                        info.update(status='partial metadata',error=str(exc))
                for s in macho.sections:
                    if s['name'] in ('__objc_classname','__objc_methname','__objc_methtype'):
                        vals=slice_data[s['offset']:s['offset']+s['size']].split(b'\0')
                        (out/(s['name'].strip('_')+'.txt')).write_text('\n'.join(v.decode(errors='replace') for v in vals if v)+'\n')
                info.update(macho.summary())
                write_json(out/'macho.json',info)
                all_binaries.append(info)
                print(binary_id, info.get('classes_exported',0),'classes',info.get('methods_exported',0),'methods',len(macho.errors),'errors',flush=True)
    write_json(root/'analysis'/'files.json',manifest)
    summary=dict(source_url=SOURCE_URL,ipa_filename=args.ipa.name,ipa_sha256=digest,ipa_bytes=len(ipa),zip_entries=len(z.infolist()),extracted_files=len(manifest),uncompressed_bytes=sum(x['size'] for x in manifest),binaries=len(set(b['path'] for b in all_binaries)),binary_slices=len(all_binaries),classes_exported=total_classes,methods_exported=total_methods,decompilation_bodies='not produced; runtime metadata is not decompiled implementation code',binary_reports=[dict(path=b['path'],architecture=b['architecture'],analysis_directory=b['analysis_directory'],status=b['status'],class_entries=b.get('class_entries'),classes_exported=b.get('classes_exported'),methods_exported=b.get('methods_exported'),errors=len(b['errors'])) for b in all_binaries])
    write_json(root/'analysis'/'summary.json',summary)
    (root/'SHA256SUMS.txt').write_text(digest+'  '+args.ipa.name+'\n')
    print(json.dumps({k:v for k,v in summary.items() if k!='binary_reports'},indent=2),flush=True)


if __name__=='__main__':
    main()
