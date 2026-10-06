#!/usr/bin/env python3
"""Analyse locale sans schéma : protoc --decode_raw + UnknownFieldSet Google.

Le rapport contient la structure et les différences, jamais les jetons/base64.
Les captures restent des entrées locales ; aucun appel réseau n'est effectué.
"""
import argparse
import base64
import binascii
import hashlib
import json
import os
from pathlib import Path
import re
import subprocess
import sys

from google.protobuf import descriptor_pb2, descriptor_pool, message_factory, unknown_fields
from google.protobuf.message import DecodeError

MAX_BYTES = 2 * 1024 * 1024
MAX_HISTORY_BYTES = 32 * 1024 * 1024
MAX_FIELDS = 20000
MAX_DEPTH = 8
WIRE = {0: 'varint', 1: 'fixed64', 2: 'length-delimited', 3: 'group', 5: 'fixed32'}
definition = descriptor_pb2.FileDescriptorProto(name='ss06_raw.proto', package='ss06diagnostic', syntax='proto2')
definition.message_type.add(name='UnknownMessage')
pool = descriptor_pool.DescriptorPool()
pool.Add(definition)
RawMessage = message_factory.GetMessageClass(pool.FindMessageTypeByName('ss06diagnostic.UnknownMessage'))


def raw_fields(data):
    message = RawMessage()
    consumed = message.ParseFromString(data)
    if consumed != len(data):
        raise DecodeError('input not fully consumed')
    return tuple(unknown_fields.UnknownFieldSet(message))


def field_structure(fields, depth=0, budget=None):
    if budget is None:
        budget = [MAX_FIELDS]
    result = []
    for item in fields:
        budget[0] -= 1
        if budget[0] < 0:
            raise ValueError('field analysis limit reached')
        row = {'number': item.field_number, 'wire_type': item.wire_type,
               'wire_name': WIRE.get(item.wire_type, 'unknown')}
        if item.wire_type == 0:
            row['value_bit_length'] = item.data.bit_length()
            # Le parseur standard ne conserve pas la longueur d'un varint
            # encodé de façon non minimale. Ne pas prétendre à un offset exact.
            row['minimum_varint_bytes'] = max(1, (item.data.bit_length() + 6) // 7)
        elif item.wire_type in (1, 5):
            row['value_bytes'] = 8 if item.wire_type == 1 else 4
        elif item.wire_type == 2:
            value = item.data
            row['payload_bytes'] = len(value)
            try:
                string = value.decode('utf-8')
                row['valid_utf8'] = True
                row['utf8_characters'] = len(string)
                row['printable_text_candidate'] = bool(string) and all(c.isprintable() or c in '\r\n\t' for c in string)
            except UnicodeDecodeError:
                row['valid_utf8'] = False
                row['printable_text_candidate'] = False
            row['embedded_message_candidate'] = False
            if value and depth < MAX_DEPTH:
                try:
                    nested = raw_fields(value)
                except DecodeError:
                    nested = ()
                if nested:
                    row['embedded_message_candidate'] = True
                    row['candidate_fields'] = field_structure(nested, depth + 1, budget)
            elif depth >= MAX_DEPTH:
                row['nested_analysis_limit'] = True
            row['appearance'] = 'text_candidate' if row['printable_text_candidate'] else 'binary_or_packed'
            row['interpretation_established'] = False  # LEN peut être bytes/string/message/packed.
        elif item.wire_type == 3:
            if depth >= MAX_DEPTH:
                row['nested_analysis_limit'] = True
            else:
                row['fields'] = field_structure(item.data, depth + 1, budget)
        result.append(row)
    return result


def analyze(data):
    if len(data) > MAX_BYTES:
        raise ValueError('capture exceeds 2 MiB')
    # Il s'agit bien du protoc Google fourni par grpcio-tools. La sortie raw
    # peut contenir des valeurs sensibles : capturée en mémoire puis éliminée.
    command = [sys.executable, '-m', 'grpc_tools.protoc']
    version = subprocess.run(command + ['--version'], capture_output=True, timeout=10, check=True).stdout.decode().strip()
    standard = subprocess.run(command + ['--decode_raw'], input=data, capture_output=True, timeout=10)
    report = {'bytes': len(data), 'sha256': hashlib.sha256(data).hexdigest(),
              'standard_parser': 'protoc --decode_raw', 'protoc_version': version,
              'protoc_accepted': standard.returncode == 0}
    try:
        fields = raw_fields(data)
        report['unknown_field_set_accepted'] = True
        report['fields'] = field_structure(fields)
        report['field_occurrences'] = len(fields)
    except DecodeError:
        report['unknown_field_set_accepted'] = False
        report['fields'] = []
    except ValueError:
        report['structure_status'] = 'analysis_limit_reached'
        report['fields'] = []
    report['parser_agreement'] = report['protoc_accepted'] == report['unknown_field_set_accepted']
    report['format_confirmed'] = False  # Être parsable ne prouve pas le format métier.
    return report


def compare(left, right):
    # Comparaison réelle de chaque position, pas une comparaison de hash seule.
    changed = 0
    first = None
    ranges = []
    start = None
    length = max(len(left), len(right))
    for offset in range(length):
        different = offset >= len(left) or offset >= len(right) or left[offset] != right[offset]
        if different:
            changed += 1
            if first is None:
                first = offset
            if start is None:
                start = offset
        elif start is not None:
            if len(ranges) < 4096:
                ranges.append([start, offset])
            start = None
    if start is not None and len(ranges) < 4096:
        ranges.append([start, length])
    return {'identical': left == right, 'login_bytes': len(left), 'registration_bytes': len(right),
            'different_positions_including_extra_bytes': changed, 'first_difference_offset': first,
            'difference_ranges_start_inclusive_end_exclusive': ranges,
            'ranges_may_be_truncated': len(ranges) == 4096,
            'scope': 'these two selected captures only; no semantic equivalence claim'}


def decode_base64(text):
    try:
        compact = ''.join(text.split()).encode('ascii')
        if len(compact) > (MAX_BYTES + 2) // 3 * 4:
            raise ValueError('capture exceeds 2 MiB')
        value = base64.b64decode(compact, validate=True)
        # Écarte aussi les bits de padding non canoniques et la troncature.
        if base64.b64encode(value) != compact:
            raise ValueError('non-canonical base64')
        return value
    except (UnicodeEncodeError, binascii.Error) as error:
        raise ValueError('invalid or truncated base64') from error


DUMP = re.compile(r'dump=attestation_payload call=(\d+) requestPath=(\S+) pathSource=argument requestType=(-?\d+) bytes=(\d+) base64=([A-Za-z0-9+/=]*)$')


def history_captures(path):
    if path.stat().st_size > MAX_HISTORY_BYTES:
        raise ValueError('history exceeds 32 MiB')
    captures = {'login': [], 'registration': []}
    for line_number, line in enumerate(path.read_text().splitlines(), 1):
        match = DUMP.search(line)
        if not match:
            continue
        call, request_path, request_type, size, encoded = match.groups()
        kind = 'login' if request_path.startswith('/snapchat.janus.api.LoginService/') else (
               'registration' if request_path.startswith('/snapchat.janus.api.RegistrationService/') else None)
        if kind is None:
            continue
        data = decode_base64(encoded)
        if len(data) != int(size):
            raise ValueError(f'capture length mismatch at history line {line_number}')
        captures[kind].append((data, {'line': line_number, 'call': int(call), 'requestPath': request_path,
                                     'requestType': int(request_type)}))
    return captures


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--history', type=Path, help='Historique copié depuis Notes ; dernière capture de chaque parcours par défaut')
    parser.add_argument('--login', type=Path, help='Fichier contenant seulement la base64 login')
    parser.add_argument('--registration', type=Path, help='Fichier contenant seulement la base64 inscription')
    parser.add_argument('--login-index', type=int, default=-1)
    parser.add_argument('--registration-index', type=int, default=-1)
    parser.add_argument('--output', required=True, type=Path, help='Rapport JSON structurel, sans valeurs brutes')
    args = parser.parse_args()
    try:
        selected = {}
        if args.history:
            if args.login or args.registration:
                raise ValueError('use --history OR the two base64 files')
            captures = history_captures(args.history)
            for name, index in [('login', args.login_index), ('registration', args.registration_index)]:
                if not captures[name]:
                    raise ValueError(f'missing {name} capture; comparison not performed')
                selected[name] = captures[name][index]
        else:
            if not args.login or not args.registration:
                raise ValueError('both --login and --registration are required')
            for name, path in [('login', args.login), ('registration', args.registration)]:
                if path.stat().st_size > MAX_BYTES * 2:
                    raise ValueError('base64 file too large')
                selected[name] = (decode_base64(path.read_text()), {'source': 'base64 file'})
        inputs = [p.resolve() for p in [args.history, args.login, args.registration] if p is not None]
        if args.output.resolve() in inputs:
            raise ValueError('output must not overwrite an input capture')
        report = {name: {**analyze(data), 'capture': metadata} for name, (data, metadata) in selected.items()}
        report['comparison'] = compare(selected['login'][0], selected['registration'][0])
        report['contains_raw_values'] = False
        # Fichier local privé ; pas de copie automatique dans docs/ ni d'upload.
        fd = os.open(args.output, os.O_WRONLY | os.O_CREAT | os.O_EXCL, 0o600)
        with os.fdopen(fd, 'w') as stream:
            json.dump(report, stream, indent=2, ensure_ascii=False)
            stream.write('\n')
        print(f"Report written. Identical bytes: {report['comparison']['identical']}")
    except (ValueError, OSError, IndexError, subprocess.SubprocessError) as error:
        parser.exit(2, f'Analysis incomplete: {error}\n')


if __name__ == '__main__':
    main()
