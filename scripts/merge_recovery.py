#!/usr/bin/env python3
"""Combine four disjoint recovery parts into the existing shard-10 layout."""
import json
import shutil
from pathlib import Path

root = Path('.work/recovery/parts')
target = Path('decompiled/Snapchat-thin/shard-10')
if target.exists():
    # The canceled attempt may have uploaded an incomplete shard without coverage.
    shutil.rmtree(target)
target.mkdir(parents=True, exist_ok=True)
reports = []
addresses = set()
for part in range(4):
    source = root / f'part-{part:02}'
    report = json.loads((source / 'coverage.json').read_text())
    assert report['requested'] == report['decompiled'] + report['failed']
    indexed = 0
    for index in sorted(source.rglob('index/*.tsv')):
        for line in index.read_text().splitlines()[1:]:
            address = line.split('\t', 1)[0]
            assert address not in addresses, f'Duplicate candidate {address}'
            addresses.add(address)
            indexed += 1
    assert indexed == report['requested']
    dest = target / f'part-{part:02}'
    shutil.copytree(source, dest, dirs_exist_ok=True)
    (dest / 'coverage.json').rename(dest / 'report.json')
    reports.append(report)

assert len(addresses) == 62097
summary = {key: sum(r[key] for r in reports)
           for key in ('requested', 'prepared', 'decompiled', 'failed')}
summary.update(program='binary', tool='Ghidra 12.1.4',
               method='Four disjoint contiguous parts of original main shard 10.',
               timeout_seconds_per_function=5,
               parts=reports)
(target / 'coverage.json').write_text(json.dumps(summary, indent=2) + '\n')
lines = ['# Pseudo-code Ghidra — lot 10', '',
         f"{summary['decompiled']} fonctions décompilées sur {summary['requested']} entrées candidates ; {summary['failed']} échecs documentés.", '',
         'Ce lot a été repris en quatre parties avec un délai de 5 secondes par fonction pour isoler les fonctions coûteuses.', '',
         'Les index, pseudo-codes et rapports sont conservés dans chaque partie.', '']
for part, report in enumerate(reports):
    lines.append(f"- [Partie {part + 1}](part-{part:02}/) : {report['decompiled']} fonctions récupérées ; {report['failed']} échecs.")
(target / 'README.md').write_text('\n'.join(lines) + '\n')
print(json.dumps({k: v for k, v in summary.items() if k != 'parts'}, indent=2))
