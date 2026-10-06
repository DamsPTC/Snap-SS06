#!/usr/bin/env python3
import argparse
import json
import os
import subprocess
import tempfile
import shutil
from pathlib import Path

p=argparse.ArgumentParser()
p.add_argument('task')
p.add_argument('ghidra',type=Path)
p.add_argument('inputs',type=Path)
p.add_argument('output',type=Path)
args=p.parse_args()
catalog=json.loads((args.inputs/'catalog.json').read_text())
if args.task in ('extensions','smoke'):
    work=[(b['id'],0) for b in catalog['binaries'] if b['status']=='ready' and b['id']!='Snapchat-thin']
else:
    work=[('Snapchat-thin',int(args.task.split('-')[1]))]
args.output.mkdir(parents=True,exist_ok=True)
for ident,shard in work:
    source=args.inputs/ident
    target=args.output/'decompiled'/ident/f'shard-{shard:02}'
    target.mkdir(parents=True,exist_ok=True)
    project=Path(tempfile.mkdtemp(prefix='snap-ss06-ghidra-'))
    cmd=[str(args.ghidra/'support/analyzeHeadless'),str(project),'analysis','-import',str(source/'binary'),'-noanalysis','-max-cpu','2','-scriptPath',str(Path(__file__).resolve().parent),'-postScript','ExportShard.java',str(source/f'functions-{shard:02}.tsv'),str(target.resolve()),'-deleteProject','-log',str(target.resolve()/'ghidra.log')]
    print('Decompiling',ident,'shard',shard,flush=True)
    result=subprocess.run(cmd,env=os.environ.copy())
    report=target/'coverage.json'
    if result.returncode or not report.exists():
        raise SystemExit(f'Ghidra failed for {ident}/{shard}: exit={result.returncode}; coverage={report.exists()}')
    if json.loads(report.read_text())['decompiled']==0:
        raise SystemExit('No pseudocode generated')
    shutil.rmtree(project)
print('All selected slices exported',flush=True)
