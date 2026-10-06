#!/usr/bin/env python3
"""Validate and combine eight disjoint interleaved parts of the slow region."""
import json
from pathlib import Path

root = Path('.work/recovery/parts/part-01')
reports = []
addresses = set()
for number in range(8):
    part = root / f'subpart-{number:02}'
    report = json.loads((part / 'coverage.json').read_text())
    assert report['requested'] == report['decompiled'] + report['failed']
    indexed = 0
    for index in sorted((part / 'index').glob('*.tsv')):
        for line in index.read_text().splitlines()[1:]:
            address = line.split('\t', 1)[0]
            assert address not in addresses
            addresses.add(address)
            indexed += 1
    assert indexed == report['requested']
    (part / 'coverage.json').rename(part / 'report.json')
    reports.append(report)
assert len(addresses) == 15524
summary = {key: sum(r[key] for r in reports)
           for key in ('requested', 'prepared', 'decompiled', 'failed')}
summary.update(program='binary', tool='Ghidra 12.1.4',
               method='Eight interleaved disjoint subsets of main shard 10, part 1.',
               timeout_seconds_per_function=5, parts=reports)
(root / 'coverage.json').write_text(json.dumps(summary, indent=2) + '\n')
lines = ['# Dernière zone décompilée', '',
         f"{summary['decompiled']} fonctions récupérées sur {summary['requested']} entrées candidates ; {summary['failed']} échecs consignés.", '',
         'Les entrées ont été réparties alternativement entre huit traitements pour répartir les fonctions coûteuses. Le délai est de cinq secondes par fonction.', '']
for number, report in enumerate(reports):
    lines.append(f"- [Sous-partie {number + 1}](subpart-{number:02}/) : {report['decompiled']} réussites ; {report['failed']} échecs.")
(root / 'README.md').write_text('\n'.join(lines) + '\n')
print(json.dumps({k: v for k, v in summary.items() if k != 'parts'}, indent=2))
