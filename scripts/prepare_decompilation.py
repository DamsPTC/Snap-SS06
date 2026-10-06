#!/usr/bin/env python3
"""Prepare exact Mach-O slices and function candidates for Ghidra."""
import argparse
import hashlib
import json
import struct
import zipfile
from pathlib import Path
from extract_ipa import MachO, slices, safe_name, EXPECTED_SHA256, write_json


def candidates(m):
    values=set()
    for section in m.sections:
        if section['name']!='__unwind_info':
            continue
        root=section['offset']
        version,co,cc,po,pc,io,ic=m.unpack('<7I',root)
        if version!=1:
            raise ValueError('Unknown compact-unwind version')
        for i in range(ic-1):
            base,page,lsda=m.unpack('<3I',root+io+i*12)
            if not page:
                continue
            kind=m.u32(root+page)
            eo,ec=m.unpack('<HH',root+page+4)
            for j in range(ec):
                if kind==2:
                    value=m.u32(root+page+eo+j*8)
                elif kind==3:
                    value=base+(m.u32(root+page+eo+j*4)&0xffffff)
                else:
                    raise ValueError('Unknown compact-unwind page')
                values.add(m.base+value)
    if m.function_starts:
        off,sz=m.function_starts
        current=m.base
        value=shift=0
        for byte in m.data[off:off+sz]:
            value|=(byte&127)<<shift
            if byte&128:
                shift+=7
            else:
                if not value:
                    break
                current+=value
                values.add(current)
                value=shift=0
    return values


def main():
    ap=argparse.ArgumentParser()
    ap.add_argument('ipa',type=Path)
    ap.add_argument('output',type=Path)
    ap.add_argument('--task',default='all')
    args=ap.parse_args()
    assert hashlib.sha256(args.ipa.read_bytes()).hexdigest()==EXPECTED_SHA256
    args.output.mkdir(parents=True,exist_ok=True)
    catalog=[]
    with zipfile.ZipFile(args.ipa) as z:
        for item in z.infolist():
            if item.is_dir():
                continue
            with z.open(item) as f:
                magic=f.read(4)
            if magic not in (b'\xcf\xfa\xed\xfe',b'\xce\xfa\xed\xfe',b'\xca\xfe\xba\xbe'):
                continue
            for arch,data in slices(z.read(item)):
                ident=safe_name(item.filename.rsplit('/',1)[-1])+'-'+arch
                if args.task=='smoke' and ident!='SnapchatLocationPushExtension-thin':
                    continue
                if args.task.startswith('main-') and ident!='Snapchat-thin':
                    continue
                if args.task=='extensions' and ident=='Snapchat-thin':
                    continue
                m=MachO(data)
                if any(c['cryptid'] for c in m.encryption):
                    catalog.append(dict(id=ident,path=item.filename,status='encrypted'))
                    continue
                text=next(s for s in m.sections if s['name']=='__text')
                start,end=text['address'],text['address']+text['size']
                addresses=candidates(m)
                names={}
                errors=[]
                m.fixups()
                for section in m.sections:
                    if section['name']!='__objc_classlist':
                        continue
                    for off in range(0,section['size'],m.ps):
                        try:
                            rec=m.class_record(m.ptr(section['address']+off))
                            for method in rec['methods']:
                                va=int(method['implementation'],16)
                                addresses.add(va)
                                names.setdefault(va,method['kind']+'['+rec['name']+' '+method['selector']+']')
                        except Exception as exc:
                            errors.append(str(exc))
                addresses=sorted(a for a in addresses if start<=a<end and a%4==0)
                ends=addresses[1:]+[end]
                folder=args.output/ident
                folder.mkdir(exist_ok=True)
                (folder/'binary').write_bytes(data)
                shards=16 if ident=='Snapchat-thin' else 1
                for shard in range(shards):
                    lo=len(addresses)*shard//shards
                    hi=len(addresses)*(shard+1)//shards
                    with (folder/f'functions-{shard:02}.tsv').open('w') as out:
                        for idx in range(lo,hi):
                            address=addresses[idx]
                            name=names.get(address,'').replace('\t',' ').replace('\n',' ')
                            out.write(f'{address:x}\t{ends[idx]:x}\t{name}\n')
                report=dict(id=ident,path=item.filename,architecture=arch,status='ready',functions=len(addresses),objc_labels=len(names),shards=shards,errors=errors,sha256=hashlib.sha256(data).hexdigest())
                write_json(folder/'input.json',report)
                catalog.append(report)
                print(ident,len(addresses),'function candidates',flush=True)
    write_json(args.output/'catalog.json',dict(ipa_sha256=EXPECTED_SHA256,binaries=catalog))


if __name__=='__main__':
    main()
