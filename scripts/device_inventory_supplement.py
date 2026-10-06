#!/usr/bin/env python3
"""Export additional static entry points without changing the original export."""
import argparse,hashlib,json,os,subprocess,tempfile,zipfile,shutil
from pathlib import Path
from extract_ipa import EXPECTED_SHA256
p=argparse.ArgumentParser();p.add_argument('ipa',type=Path);p.add_argument('ghidra',type=Path);p.add_argument('output',type=Path);args=p.parse_args()
assert hashlib.sha256(args.ipa.read_bytes()).hexdigest()==EXPECTED_SHA256,'IPA checksum mismatch'
root=Path(__file__).resolve().parent.parent
ranges=json.loads((root/'analysis/device-inventory/supplement-ranges.json').read_text())
paths={'Snapchat-thin':'Payload/Snapchat.app/Snapchat','SnapchatNotificationServiceExt-thin':'Payload/Snapchat.app/PlugIns/SnapchatNotificationServiceExt.appex/SnapchatNotificationServiceExt','ExtensionsSharedDependencies-thin':'Payload/Snapchat.app/Frameworks/ExtensionsSharedDependencies.framework/ExtensionsSharedDependencies'}
with zipfile.ZipFile(args.ipa) as z:
 for ident,rows in ranges.items():
  if not rows:continue
  target=(args.output/ident).resolve();target.mkdir(parents=True,exist_ok=True)
  with tempfile.TemporaryDirectory(prefix='device-inventory-') as tmp:
   tmp=Path(tmp);binary=tmp/'binary';binary.write_bytes(z.read(paths[ident]));tsv=tmp/'functions.tsv'
   tsv.write_text(''.join(f"{int(r['address'],16):x}\t{int(r['end_exclusive'],16):x}\t{r['runtime_label']}\n" for r in rows))
   cmd=[str(args.ghidra/'support/analyzeHeadless'),str(tmp),'inventory','-import',str(binary),'-noanalysis','-max-cpu','2','-scriptPath',str(root/'scripts'),'-postScript','ExportShard.java',str(tsv),str(target),'-deleteProject','-log',str(target/'ghidra.log')]
   subprocess.run(cmd,check=True,env=os.environ.copy())
   assert (target/'coverage.json').exists()
