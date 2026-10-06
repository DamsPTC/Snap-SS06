#!/usr/bin/env python3
import json
from pathlib import Path

root=Path('.')
reports=[]
for path in sorted((root/'decompiled').rglob('coverage.json')):
    report=json.loads(path.read_text())
    report['directory']=str(path.parent)
    assert report['requested']==report['decompiled']+report['failed']
    reports.append(report)
assert len(reports)==28, f'Expected 16 main shards and 12 other slices, got {len(reports)}'
summary={key:sum(r[key] for r in reports) for key in ('requested','prepared','decompiled','failed')}
summary.update(tool='Ghidra 12.1.4',shards=reports,limitations=['Approximate C pseudocode, not original Objective-C/Swift source.', 'Entry candidates come from compact unwind, function-start and Objective-C runtime metadata; unlisted or stripped routines may be absent.', 'Function ranges use the next candidate as their upper bound; types and prototypes are incomplete.', 'Every unsuccessful candidate is recorded in an index TSV.'])
(root/'analysis'/'decompilation').mkdir(parents=True,exist_ok=True)
(root/'analysis'/'decompilation'/'summary.json').write_text(json.dumps(summary,ensure_ascii=False,indent=2)+'\n')
lines=['# Code décompilé (pseudo-C)','','Export automatique Ghidra 12.1.4 à partir de l’IPA de référence.','','**'+str(summary['decompiled'])+' fonctions décompilées sur '+str(summary['requested'])+' entrées candidates ; '+str(summary['failed'])+' échecs consignés.**','','Ce pseudo-code n’est pas le code source original et ne constitue pas une application recompilable. Les signatures, types et limites de fonctions sont approximatifs. Les fonctions absentes des tables exploitées peuvent manquer.','','| Binaire / lot | Réussites | Échecs |','| --- | ---: | ---: |']
for r in reports:
    path=Path(r['directory'])
    rel=path.relative_to(root/'decompiled')
    lines.append(f'| [{rel}]({rel}/) | {r["decompiled"]} | {r["failed"]} |')
(root/'decompiled'/'README.md').write_text('\n'.join(lines)+'\n')
readme=root/'README.md'
body=readme.read_text()
old='La décompilation des implémentations en pseudo-C reste à effectuer avec un\ndécompilateur adapté. Aucun corps de fonction n’a été inventé. Les binaires\noriginaux sont tous présents dans `extracted/` pour poursuivre cette analyse.'
new='Les implémentations récupérées en **pseudo-C** sont disponibles dans [`decompiled/`](decompiled/). Ghidra a exporté **'+str(summary['decompiled'])+' fonctions** sur '+str(summary['requested'])+' entrées candidates. Les '+str(summary['failed'])+' échecs sont documentés. Les types et limites de fonctions restent approximatifs ; les fonctions non répertoriées dans les tables exploitées peuvent manquer.\n\nLes binaires originaux restent présents dans `extracted/` pour approfondir l’analyse.'
assert old in body
readme.write_text(body.replace(old,new))
notes=root/'docs/release-notes.md'
notes.write_text(notes.read_text().replace('Les corps de fonctions ne sont\npas encore décompilés ; ces exports ne sont pas les sources originales.','Le pseudo-code Ghidra est disponible sur la branche `main` dans `decompiled/` : '+str(summary['decompiled'])+' fonctions récupérées ; '+str(summary['failed'])+' échecs documentés. Ces exports ne sont pas les sources originales.'))
print(json.dumps({k:v for k,v in summary.items() if k!='shards'},indent=2))
