/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004d9118; end: 004d911b;  */

void FUN_004d9118(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x18,uVar3,uVar4);
  }
  uVar4 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x20,uVar4,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      func_0x004d927c(uVar2,*(undefined8 *)(param_2 + 0x28));
      *(ulong *)(param_1 + 0x28) = uVar2;
    }
    else {
      FUN_0051dfe4();
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004d911c; end: 004d921f;  */

void FUN_004d911c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x18,uVar3,uVar4);
  }
  uVar4 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x20,uVar4,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      func_0x004d927c(uVar2,*(undefined8 *)(param_2 + 0x28));
      *(ulong *)(param_1 + 0x28) = uVar2;
    }
    else {
      FUN_0051dfe4();
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004d9220; end: 004d9227;  */

void FUN_004d9220(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  
  if (param_2 == (char *)0x0) {
    pcVar1 = segment_command_00000020.segname + 8;
    __Znwm();
  }
  else {
    pcVar1 = param_2;
    func_0x005510c4(param_2,0x30);
  }
  *(undefined ***)pcVar1 = &PTR_FUN_009f1018;
  *(char **)(pcVar1 + 8) = param_2;
  *(qword *)(pcVar1 + 0x10) = 0;
  *(undefined **)(pcVar1 + 0x18) = &DAT_00b69408;
  *(undefined **)(pcVar1 + 0x20) = &DAT_00b69408;
  *(undefined8 *)(pcVar1 + 0x28) = 0;
  return;
}



/* Entry: 004d9228; end: 004d92bf;  */

void FUN_004d9228(char *param_1)

{
  char *pcVar1;
  
  if (param_1 == (char *)0x0) {
    pcVar1 = segment_command_00000020.segname + 8;
    __Znwm();
  }
  else {
    pcVar1 = param_1;
    func_0x005510c4(param_1,0x30);
  }
  *(undefined ***)pcVar1 = &PTR_FUN_009f1018;
  *(char **)(pcVar1 + 8) = param_1;
  *(qword *)(pcVar1 + 0x10) = 0;
  *(undefined **)(pcVar1 + 0x18) = &DAT_00b69408;
  *(undefined **)(pcVar1 + 0x20) = &DAT_00b69408;
  *(undefined8 *)(pcVar1 + 0x28) = 0;
  return;
}



/* Entry: 004d92c0; end: 004d92df;  */

void FUN_004d92c0(void)

{
  return;
}



/* Entry: 004d92e0; end: 004d9317;  */

void FUN_004d92e0(undefined8 param_1,int param_2,undefined8 param_3)

{
  ulong uVar1;
  segment_command *psVar2;
  
  func_0x00487c24(param_1,param_3);
  psVar2 = &segment_command_00000020;
  func_0x00487cbc(0x20,param_1);
  for (uVar1 = (ulong)param_2; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *(byte *)&psVar2->cmd = (byte)uVar1 | 0x80;
    psVar2 = (segment_command *)((long)&psVar2->cmd + 1);
  }
  *(byte *)&psVar2->cmd = (byte)uVar1;
  return;
}



/* Entry: 004d9318; end: 004d93b3;  */

undefined8 * FUN_004d9318(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009f1110;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_0054a3dc(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    FUN_004d9a84(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_004d9a84(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x30);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x31);
  *(undefined8 *)((long)param_1 + 0x39) = *(undefined8 *)(param_3 + 0x39);
  *(undefined8 *)((long)param_1 + 0x31) = uVar4;
  param_1[6] = uVar3;
  param_1[5] = uVar2;
  return param_1;
}



/* Entry: 004d93b4; end: 004d93e3;  */

long FUN_004d93b4(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_004d93e4(param_1);
  return param_1;
}



/* Entry: 004d93e4; end: 004d941b;  */

void FUN_004d93e4(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9888();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004d9888();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d941c; end: 004d941f;  */

long FUN_004d941c(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_004d93e4(param_1);
  return param_1;
}



/* Entry: 004d9420; end: 004d9433;  */

void FUN_004d9420(void)

{
  FUN_004d93b4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d9434; end: 004d943f;  */

undefined ** FUN_004d9434(void)

{
  return &PTR_DAT_009f1150;
}



/* Entry: 004d9440; end: 004d94a7;  */

void FUN_004d9440(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_004d94a8(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_004d94a8(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 004d94a8; end: 004d94bf;  */

void FUN_004d94a8(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 004d94c0; end: 004d9713;  */

segment_command *
FUN_004d94c0(segment_command *param_1,segment_command *param_2,segment_command *param_3)

{
  uint uVar1;
  qword *pqVar2;
  segment_command *psVar3;
  segment_command *psVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  
  psVar3 = param_1;
  if ((int)param_1->filesize != 0) {
    psVar4 = param_1;
    FUN_004d9af4();
    psVar3 = (segment_command *)&MACH_HEADER.cpusubtype;
    func_0x00487cbc(8,psVar4);
    func_0x004d9b0c();
    param_2 = psVar3;
  }
  psVar4 = psVar3;
  if (param_1->fileoff != 0) {
    FUN_004d9af4();
    psVar4 = (segment_command *)&MACH_HEADER.ncmds;
    func_0x00487cbc(0x10,psVar3);
    func_0x004d9b18();
    param_2 = psVar4;
  }
  psVar3 = psVar4;
  if (*(int *)((long)&param_1->filesize + 4) != 0) {
    FUN_004d9af4();
    psVar3 = (segment_command *)&MACH_HEADER.flags;
    func_0x00487cbc(0x18,psVar4);
    func_0x004d9b0c();
    param_2 = psVar3;
  }
  lVar5._0_4_ = param_1->maxprot;
  lVar5._4_4_ = param_1->initprot;
  psVar4 = psVar3;
  if (lVar5 != 0) {
    FUN_004d9af4();
    psVar4 = &segment_command_00000020;
    func_0x00487cbc(0x20,psVar3);
    func_0x004d9b18();
    param_2 = psVar4;
  }
  uVar1 = (uint)*(qword *)((long)param_1->segname + 8);
  if ((uVar1 & 1) != 0) {
    psVar4 = (segment_command *)((long)&MACH_HEADER.cputype + 1);
    func_0x0054dae0(5,param_1->vmaddr,*(undefined4 *)(param_1->vmaddr + 0x1c),param_2,param_3);
    param_2 = psVar4;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    psVar4 = (segment_command *)((long)&MACH_HEADER.cputype + 2);
    func_0x0054dae0(6,param_1->vmsize,*(undefined4 *)(param_1->vmsize + 0x1c),param_2,param_3);
    param_2 = psVar4;
  }
  if ((char)param_1->nsects == '\x01') {
    FUN_004d9af4();
    param_2 = (segment_command *)&segment_command_00000020.vmaddr;
    func_0x00487cbc(0x38,psVar4);
    func_0x004d9b0c();
  }
  if ((*(ulong *)param_1->segname & 1) != 0) {
    uVar8 = *(ulong *)param_1->segname & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar8 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar5 = *(long *)(uVar8 + 8);
      uVar6 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      lVar5 = uVar8 + 8;
    }
    if ((long)(*(qword *)param_3 - (long)param_2) < (long)(int)uVar6) {
      while( true ) {
        uVar7 = param_3->cmd;
        iVar10 = (uVar7 - (int)param_2) + 0x10;
        iVar9 = (int)uVar6;
        uVar6 = (ulong)(uint)(iVar9 - iVar10);
        if (iVar9 - iVar10 == 0 || iVar9 < iVar10) break;
        func_0x0054f690();
        pqVar2 = (qword *)param_2->segname;
        param_2 = param_3;
        func_0x0054ed58(param_3,(undefined1 *)((long)pqVar2 + (long)iVar10 + -8));
      }
      func_0x0054f690();
      return (segment_command *)((long)param_2->segname + (long)iVar9 + -8);
    }
    _memcpy(param_2,lVar5,uVar6 & 0xffffffff);
    return (segment_command *)((long)param_2->segname + (long)(int)uVar6 + -8);
  }
  return param_2;
}



/* Entry: 004d9714; end: 004d973f;  */

long FUN_004d9714(long param_1)

{
  FUN_004d9970();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 004d9740; end: 004d9743;  */

void FUN_004d9740(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        FUN_004d9a84(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_004d9854();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        FUN_004d9a84(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_004d9854();
      }
    }
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x34);
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x38);
  }
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004d9744; end: 004d9853;  */

void FUN_004d9744(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        FUN_004d9a84(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_004d9854();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        FUN_004d9a84(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_004d9854();
      }
    }
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x34);
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x38);
  }
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004d9854; end: 004d9887;  */

void FUN_004d9854(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004d9888; end: 004d98af;  */

long FUN_004d9888(long param_1)

{
  FUN_00487580(param_1 + 8);
  return param_1;
}



/* Entry: 004d98b0; end: 004d98b3;  */

long FUN_004d98b0(long param_1)

{
  FUN_00487580(param_1 + 8);
  return param_1;
}



/* Entry: 004d98b4; end: 004d98c7;  */

void FUN_004d98b4(void)

{
  FUN_004d9888();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d98c8; end: 004d98d3;  */

undefined ** FUN_004d98c8(void)

{
  return &PTR_DAT_009f1198;
}



/* Entry: 004d98d4; end: 004d996f;  */

dword * FUN_004d98d4(dword *param_1,dword *param_2,dword *param_3)

{
  dword *pdVar1;
  dword *pdVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  pdVar2 = param_1;
  if (param_1[6] != 0) {
    pdVar1 = param_1;
    FUN_004d9af4();
    pdVar2 = &MACH_HEADER.cpusubtype;
    func_0x00487cbc(8,pdVar1);
    func_0x004d9b0c();
    param_2 = pdVar2;
  }
  if (*(long *)(param_1 + 4) != 0) {
    FUN_004d9af4();
    param_2 = &MACH_HEADER.ncmds;
    func_0x00487cbc(0x10,pdVar2);
    func_0x004d9b18();
  }
  if ((*(ulong *)(param_1 + 2) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 2) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*(undefined8 *)param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x0054f690();
        lVar3 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x0054ed58(param_3,lVar3);
      }
      func_0x0054f690();
      return (dword *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (dword *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 004d9970; end: 004d99ef;  */

ulong FUN_004d9970(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x18)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)uVar1;
  return uVar1;
}



/* Entry: 004d99f0; end: 004d9a83;  */

void FUN_004d99f0(segment_command *param_1)

{
  segment_command *psVar1;
  
  if (param_1 == (segment_command *)0x0) {
    psVar1 = &segment_command_00000020;
    __Znwm();
  }
  else {
    psVar1 = param_1;
    func_0x005510c4(param_1,0x20);
  }
  *(undefined ***)psVar1 = &PTR_FUN_009f10c0;
  *(segment_command **)psVar1->segname = param_1;
  psVar1->segname[8] = '\0';
  psVar1->segname[9] = '\0';
  psVar1->segname[10] = '\0';
  psVar1->segname[0xb] = '\0';
  psVar1->segname[0xc] = '\0';
  psVar1->segname[0xd] = '\0';
  psVar1->segname[0xe] = '\0';
  psVar1->segname[0xf] = '\0';
  psVar1->vmaddr = 0;
  return;
}



/* Entry: 004d9a84; end: 004d9af3;  */

segment_command * FUN_004d9a84(segment_command *param_1)

{
  segment_command *psVar1;
  
  if (param_1 == (segment_command *)0x0) {
    psVar1 = &segment_command_00000020;
    __Znwm();
  }
  else {
    psVar1 = param_1;
    func_0x005510c4(param_1,0x20);
  }
  *(undefined ***)psVar1 = &PTR_FUN_009f10c0;
  *(segment_command **)psVar1->segname = param_1;
  psVar1->segname[8] = '\0';
  psVar1->segname[9] = '\0';
  psVar1->segname[10] = '\0';
  psVar1->segname[0xb] = '\0';
  psVar1->segname[0xc] = '\0';
  psVar1->segname[0xd] = '\0';
  psVar1->segname[0xe] = '\0';
  psVar1->segname[0xf] = '\0';
  psVar1->vmaddr = 0;
  FUN_004d9854();
  return psVar1;
}



/* Entry: 004d9af4; end: 004d9b37;  */

ulong * FUN_004d9af4(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *in_x3;
  ulong *unaff_x19;
  
  if (in_x3 < (ulong *)*unaff_x19) {
    return in_x3;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    FUN_0054ec3c();
    in_x3 = (ulong *)((long)puVar2 + (long)((int)in_x3 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= in_x3);
  return in_x3;
}



/* Entry: 004d9b38; end: 004d9b9f;  */

undefined8 * FUN_004d9b38(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009f1218;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_0054a3dc(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_3 = param_3 + 0x10;
  func_0x00487c6c(param_3,param_2);
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 004d9ba0; end: 004d9bcf;  */

long FUN_004d9ba0(long param_1)

{
  FUN_00487580(param_1 + 8);
  func_0x00532f74(param_1 + 0x10);
  return param_1;
}



/* Entry: 004d9bd0; end: 004d9bd3;  */

long FUN_004d9bd0(long param_1)

{
  FUN_00487580(param_1 + 8);
  func_0x00532f74(param_1 + 0x10);
  return param_1;
}



/* Entry: 004d9bd4; end: 004d9be7;  */

void FUN_004d9bd4(void)

{
  FUN_004d9ba0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d9be8; end: 004d9bf3;  */

undefined ** FUN_004d9be8(void)

{
  return &PTR_DAT_009f1258;
}



/* Entry: 004d9bf4; end: 004d9d13;  */

void FUN_004d9bf4(long param_1)

{
  ulong *puVar1;
  
  FUN_00532fa8(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 004d9d14; end: 004d9d17;  */

void FUN_004d9d14(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x10,uVar1,uVar2);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004d9d18; end: 004d9dbf;  */

void FUN_004d9d18(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x10,uVar1,uVar2);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004d9dc0; end: 004d9dcf;  */

void FUN_004d9dc0(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    func_0x004c60f8();
  }
  else {
    func_0x004c6118();
  }
  func_0x004c6050(&UNK_009f1208);
  *(undefined **)(param_2 + 0x10) = &DAT_00b69408;
  *(undefined4 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 004d9dd0; end: 004d9e13;  */

long FUN_004d9dd0(long param_1)

{
  func_0x004da8e8();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004d35b8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004d9e14; end: 004d9e17;  */

long FUN_004d9e14(long param_1)

{
  func_0x004da8e8();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004d35b8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004d9e18; end: 004d9e2b;  */

void FUN_004d9e18(void)

{
  FUN_004d9dd0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d9e2c; end: 004d9e37;  */

undefined ** FUN_004d9e2c(void)

{
  return &PTR_DAT_009f1348;
}



/* Entry: 004d9e38; end: 004d9e8b;  */

void FUN_004d9e38(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_004d9bf4(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x004d3650(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 004d9e8c; end: 004d9f83;  */

long * FUN_004d9e8c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004da890();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    func_0x004da838();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x20);
    param_4 = (long *)((long)&MACH_HEADER.magic + 2);
    func_0x004da844();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004da964();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004d9f84; end: 004d9f9f;  */

long FUN_004d9f84(long param_1)

{
  long extraout_x8;
  
  FUN_004d3710();
  func_0x004da7cc();
  return param_1 + extraout_x8;
}



/* Entry: 004d9fa0; end: 004da03b;  */

void FUN_004d9fa0(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x004da84c();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x004d3428();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_004da724();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x004d3584();
      }
    }
  }
  func_0x004da87c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x004da8ac();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004da03c; end: 004da073;  */

void FUN_004da03c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_009f1308;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = param_2;
  param_1[0xc] = &DAT_00b69408;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)((long)param_1 + 0x7f) = 0;
  return;
}



/* Entry: 004da074; end: 004da09f;  */

undefined8 FUN_004da074(undefined8 param_1)

{
  func_0x004da8e8();
  FUN_004da0a0(param_1);
  return param_1;
}



/* Entry: 004da0a0; end: 004da0d7;  */

long FUN_004da0a0(long param_1)

{
  func_0x00532f74(param_1 + 0x60);
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_004dad70();
  }
  __ZdlPv();
  FUN_004da5dc(param_1 + 0x48);
  FUN_004da608(param_1 + 0x30);
  FUN_004da634(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 004da0d8; end: 004da0db;  */

undefined8 FUN_004da0d8(undefined8 param_1)

{
  func_0x004da8e8();
  FUN_004da0a0(param_1);
  return param_1;
}



/* Entry: 004da0dc; end: 004da0ef;  */

void FUN_004da0dc(void)

{
  FUN_004da074();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004da0f0; end: 004da0fb;  */

undefined ** FUN_004da0f0(void)

{
  return &PTR_DAT_009f1390;
}



/* Entry: 004da0fc; end: 004da16f;  */

void FUN_004da0fc(long param_1)

{
  ulong *puVar1;
  
  FUN_004da710(param_1 + 0x18);
  FUN_004da760(param_1 + 0x30);
  if (0 < *(int *)(param_1 + 0x50)) {
    FUN_00437de0(param_1 + 0x48);
  }
  FUN_00532fa8(param_1 + 0x60);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x004daa58(*(undefined8 *)(param_1 + 0x68));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 004da170; end: 004da463;  */

segment_command *
FUN_004da170(segment_command *param_1,undefined8 param_2,undefined8 param_3,segment_command *param_4
            )

{
  uint uVar1;
  qword qVar2;
  segment_command *psVar3;
  segment_command *psVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  long extraout_x8;
  segment_command *unaff_x19;
  long unaff_x20;
  dword dVar8;
  int iVar9;
  int iVar10;
  
  func_0x004da890();
  qVar2 = param_1->vmsize;
  for (dVar8 = 0; (dword)qVar2 != dVar8; dVar8 = dVar8 + 1) {
    func_0x004da7e4();
    func_0x004da838();
    param_4 = param_1;
  }
  uVar5 = *(ulong *)(unaff_x20 + 0x60) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar5 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar5 + 8);
  }
  if (lVar7 != 0) {
    func_0x004da970();
    param_4 = param_1;
  }
  psVar3 = param_1;
  if (*(char *)(unaff_x20 + 0x80) == '\x01') {
    func_0x004da7b0();
    psVar3 = (segment_command *)&MACH_HEADER.flags;
    func_0x00487cbc(0x18,param_1);
    func_0x004da85c();
    param_4 = psVar3;
  }
  psVar4 = psVar3;
  if (*(long *)(unaff_x20 + 0x70) != 0) {
    func_0x004da7b0();
    psVar4 = &segment_command_00000020;
    func_0x00487cbc(0x20,psVar3);
    func_0x004da868();
    param_4 = psVar4;
  }
  psVar3 = psVar4;
  if (*(char *)(unaff_x20 + 0x81) == '\x01') {
    func_0x004da7b0();
    psVar3 = (segment_command *)segment_command_00000020.segname;
    func_0x00487cbc(0x28,psVar4);
    func_0x004da85c();
    param_4 = psVar3;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    uVar5 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x68) + 0x14);
    psVar3 = (segment_command *)((long)&MACH_HEADER.cputype + 2);
    func_0x004da844();
    param_4 = psVar3;
  }
  iVar10 = *(int *)(unaff_x20 + 0x38);
  for (iVar9 = 0; iVar10 != iVar9; iVar9 = iVar9 + 1) {
    func_0x004da7e4();
    psVar3 = (segment_command *)((long)&MACH_HEADER.cputype + 3);
    func_0x004da844();
    param_4 = psVar3;
  }
  psVar4 = psVar3;
  if (*(long *)(unaff_x20 + 0x78) != 0) {
    func_0x004da7b0();
    psVar4 = (segment_command *)&segment_command_00000020.vmsize;
    func_0x00487cbc(0x40,psVar3);
    func_0x004da868();
    param_4 = psVar4;
  }
  iVar10 = *(int *)(unaff_x20 + 0x50);
  for (iVar9 = 0; iVar10 != iVar9; iVar9 = iVar9 + 1) {
    func_0x004da7e4();
    psVar4 = (segment_command *)((long)&MACH_HEADER.cpusubtype + 1);
    func_0x004da844();
    param_4 = psVar4;
  }
  if ((*(byte *)(unaff_x20 + 0x82) & 1) != 0) {
    func_0x004da7b0();
    param_4 = (segment_command *)&section_000002e8.offset;
    func_0x00487cbc(0x318,psVar4);
    func_0x004da85c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004da964();
    if ((long)uVar5 < 0) {
      lVar7 = *(long *)(extraout_x8 + 8);
      uVar5 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar7 = extraout_x8 + 8;
    }
    if ((long)(*(qword *)unaff_x19 - (long)param_4) < (long)(int)uVar5) {
      while( true ) {
        uVar6 = unaff_x19->cmd;
        iVar10 = (uVar6 - (int)param_4) + 0x10;
        iVar9 = (int)uVar5;
        uVar1 = iVar9 - iVar10;
        uVar5 = (ulong)uVar1;
        if (uVar1 == 0 || iVar9 < iVar10) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (segment_command *)((long)param_4->segname + (long)iVar9 + -8);
    }
    _memcpy(param_4,lVar7,uVar5 & 0xffffffff);
    return (segment_command *)((long)param_4->segname + (long)(int)uVar5 + -8);
  }
  return param_4;
}



/* Entry: 004da464; end: 004da49b;  */

long FUN_004da464(long param_1)

{
  long extraout_x8;
  
  FUN_004db5f4();
  func_0x004da7cc();
  return param_1 + extraout_x8;
}



/* Entry: 004da49c; end: 004da5ab;  */

void FUN_004da49c(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar5;
  
  func_0x004da84c();
  puVar5 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
  }
  FUN_004da5ac(unaff_x21 + 0x18,unaff_x20 + 0x18);
  puVar1 = (ulong *)(unaff_x21 + 0x30);
  func_0x004da5bc(puVar1,unaff_x20 + 0x30);
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    puVar1 = (ulong *)(unaff_x21 + 0x48);
    func_0x0054d484(puVar1,unaff_x20 + 0x48);
  }
  uVar2 = *(ulong *)(unaff_x20 + 0x60) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(unaff_x21 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    puVar1 = (ulong *)(unaff_x21 + 0x60);
    func_0x00532e08(puVar1,uVar2,uVar3);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x68);
    if (puVar1 == (ulong *)0x0) {
      FUN_004da774();
      *(ulong **)(unaff_x21 + 0x68) = puVar5;
      puVar1 = puVar5;
    }
    else {
      FUN_004daca4();
    }
  }
  if (*(long *)(unaff_x20 + 0x70) != 0) {
    *(long *)(unaff_x21 + 0x70) = *(long *)(unaff_x20 + 0x70);
  }
  if (*(long *)(unaff_x20 + 0x78) != 0) {
    *(long *)(unaff_x21 + 0x78) = *(long *)(unaff_x20 + 0x78);
  }
  if (*(char *)(unaff_x20 + 0x80) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x80) = 1;
  }
  if (*(char *)(unaff_x20 + 0x81) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x81) = 1;
  }
  if (*(char *)(unaff_x20 + 0x82) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x82) = 1;
  }
  func_0x004da87c();
  if ((extraout_x8 & 1) != 0) {
    func_0x004da8ac();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004da5ac; end: 004da5db;  */

void FUN_004da5ac(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  FUN_0054d5a8();
  plVar2 = param_1;
  func_0x0054d67c();
  plVar3 = (long *)*unaff_x25;
  func_0x0054d6a8();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x0054d6b0();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x0054d694();
    param_1 = param_1 + 1;
  }
  func_0x0054d60c();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 004da5dc; end: 004da607;  */

long * FUN_004da5dc(long *param_1)

{
  if (*param_1 != 0) {
    func_0x004da97c();
  }
  return param_1;
}



/* Entry: 004da608; end: 004da633;  */

long * FUN_004da608(long *param_1)

{
  if (*param_1 != 0) {
    func_0x004da97c();
  }
  return param_1;
}



/* Entry: 004da634; end: 004da65f;  */

long * FUN_004da634(long *param_1)

{
  if (*param_1 != 0) {
    func_0x004da97c();
  }
  return param_1;
}



/* Entry: 004da660; end: 004da70f;  */

long FUN_004da660(long param_1)

{
  FUN_004da5dc(param_1 + 0x38);
  FUN_004da608(param_1 + 0x20);
  FUN_004da634(param_1 + 8);
  return param_1;
}



/* Entry: 004da710; end: 004da723;  */

void FUN_004da710(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (0 < (int)param_1[1]) {
    uVar1 = (uint)param_1[1];
    puVar2 = param_1;
    if ((*param_1 & 1) != 0) {
      puVar2 = (ulong *)(*param_1 + 7);
    }
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    uVar3 = (ulong)uVar1;
    do {
      (**(code **)(*(long *)*puVar2 + 0x18))();
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != 0);
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  return;
}



/* Entry: 004da724; end: 004da75f;  */

undefined8 * FUN_004da724(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x004da920();
  }
  else {
    func_0x004da928();
  }
  *puVar1 = &PTR_FUN_009effd8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  func_0x004d3584();
  return puVar1;
}



/* Entry: 004da760; end: 004da773;  */

void FUN_004da760(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (0 < (int)param_1[1]) {
    uVar1 = (uint)param_1[1];
    puVar2 = param_1;
    if ((*param_1 & 1) != 0) {
      puVar2 = (ulong *)(*param_1 + 7);
    }
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    uVar3 = (ulong)uVar1;
    do {
      (**(code **)(*(long *)*puVar2 + 0x18))();
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != 0);
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  return;
}



/* Entry: 004da774; end: 004da7af;  */

undefined8 * FUN_004da774(long param_1,long param_2)

{
  uint uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  if (param_1 == 0) {
    func_0x004da920();
  }
  else {
    func_0x004da928(param_1);
  }
  func_0x004debbc();
  *unaff_x19 = &PTR_FUN_009f1790;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x004de824();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x19 + 2) = uVar1;
  *(undefined4 *)((long)unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x004d3428();
  }
  unaff_x19[3] = unaff_x21;
  unaff_x19[4] = *(undefined8 *)(unaff_x20 + 0x20);
  return unaff_x19;
}



/* Entry: 004da7b0; end: 004da983;  */

ulong * FUN_004da7b0(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *in_x3;
  ulong *unaff_x19;
  
  if (in_x3 < (ulong *)*unaff_x19) {
    return in_x3;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    FUN_0054ec3c();
    in_x3 = (ulong *)((long)puVar2 + (long)((int)in_x3 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= in_x3);
  return in_x3;
}



/* Entry: 004da984; end: 004da9af;  */

undefined8 FUN_004da984(undefined8 param_1)

{
  func_0x004de90c();
  FUN_004da9b0(param_1);
  return param_1;
}



/* Entry: 004da9b0; end: 004da9df;  */

long * FUN_004da9b0(void)

{
  long unaff_x19;
  
  func_0x004deb44();
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    FUN_004dad70();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    func_0x004da97c();
  }
  return (long *)(unaff_x19 + 0x18);
}



/* Entry: 004da9e0; end: 004da9e3;  */

undefined8 FUN_004da9e0(undefined8 param_1)

{
  func_0x004de90c();
  FUN_004da9b0(param_1);
  return param_1;
}



/* Entry: 004da9e4; end: 004da9f7;  */

void FUN_004da9e4(void)

{
  FUN_004da984();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004da9f8; end: 004daa03;  */

undefined ** FUN_004da9f8(void)

{
  return &PTR_DAT_009f1a00;
}



/* Entry: 004daa04; end: 004daa8b;  */

void FUN_004daa04(long param_1)

{
  ulong *puVar1;
  
  FUN_004da710(param_1 + 0x18);
  FUN_00532fa8(param_1 + 0x30);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x004daa58(*(undefined8 *)(param_1 + 0x38));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 004daa8c; end: 004dab63;  */

dword * FUN_004daa8c(dword *param_1,undefined8 param_2,undefined8 param_3,dword *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  dword *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x004de78c();
  iVar4 = param_1[8];
  while (iVar4 != 0) {
    func_0x004de79c();
    func_0x004de8b8();
    func_0x004deb18();
  }
  if ((*(byte *)(unaff_x20 + 0x40) & 1) != 0) {
    func_0x004de780();
    func_0x004de9ec();
    func_0x004de7f8();
    param_4 = param_1;
  }
  uVar2 = *(ulong *)(unaff_x20 + 0x30) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    param_4 = unaff_x19;
    FUN_00435e9c();
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    uVar2 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x14);
    param_4 = &MACH_HEADER.cputype;
    func_0x004de8ec();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004de94c();
    if ((long)uVar2 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      uVar2 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*(long *)unaff_x19 - (long)param_4 < (long)(int)uVar2) {
      while( true ) {
        iVar5 = ((int)*(undefined8 *)unaff_x19 - (int)param_4) + 0x10;
        iVar4 = (int)uVar2;
        uVar1 = iVar4 - iVar5;
        uVar2 = (ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (dword *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,uVar2 & 0xffffffff);
    return (dword *)((long)param_4 + (long)(int)uVar2);
  }
  return param_4;
}



/* Entry: 004dab64; end: 004dabf3;  */

void FUN_004dab64(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  iVar1 = (int)unaff_x20;
  func_0x004de7b8();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar2 = *unaff_x21;
    FUN_004da464();
    unaff_x20 = lVar2 + unaff_x20;
    iVar1 = (int)unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  uVar3 = *(ulong *)(unaff_x19 + 0x30) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar3 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x00487c3c();
    func_0x004dea74();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x004da480(*(undefined8 *)(unaff_x19 + 0x38));
    func_0x004dea74();
  }
  iVar1 = iVar1 + (uint)*(byte *)(unaff_x19 + 0x40) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004de9c8();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 004dabf4; end: 004daca3;  */

void FUN_004dabf4(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x004de810();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004deaa4();
  }
  puVar1 = (ulong *)(unaff_x21 + 0x18);
  FUN_004da5ac(puVar1,unaff_x20 + 0x18);
  uVar2 = *(ulong *)(unaff_x20 + 0x30) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(unaff_x21 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    puVar1 = (ulong *)(unaff_x21 + 0x30);
    func_0x00532e08(puVar1,uVar2,uVar3);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x38);
    if (puVar1 == (ulong *)0x0) {
      FUN_004da774();
      *(ulong **)(unaff_x21 + 0x38) = unaff_x22;
      puVar1 = unaff_x22;
    }
    else {
      FUN_004daca4();
    }
  }
  if (*(char *)(unaff_x20 + 0x40) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x40) = 1;
  }
  func_0x004de86c();
  if ((extraout_x8 & 1) != 0) {
    func_0x004de84c();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004daca4; end: 004dad6f;  */

void FUN_004daca4(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004de83c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x004deb74();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004deb5c();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x004deab8();
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  func_0x004de930();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004de84c();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004dad70; end: 004dad9b;  */

undefined8 FUN_004dad70(undefined8 param_1)

{
  func_0x004de90c();
  FUN_004dad9c(param_1);
  return param_1;
}



/* Entry: 004dad9c; end: 004dadb7;  */

void FUN_004dad9c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004dadb8; end: 004dadbb;  */

undefined8 FUN_004dadb8(undefined8 param_1)

{
  func_0x004de90c();
  FUN_004dad9c(param_1);
  return param_1;
}



/* Entry: 004dadbc; end: 004dadcf;  */

void FUN_004dadbc(void)

{
  FUN_004dad70();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004dadd0; end: 004daddb;  */

undefined ** FUN_004dadd0(void)

{
  return &PTR_DAT_009f1a50;
}



/* Entry: 004daddc; end: 004dae57;  */

long * FUN_004daddc(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004de78c();
  if (param_1[4] != 0) {
    func_0x004de780();
    func_0x004dead8();
    func_0x004de804();
    param_4 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    param_4 = (long *)((long)&MACH_HEADER.magic + 2);
    func_0x004de8ec();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004de94c();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004dae58; end: 004daeaf;  */

void FUN_004dae58(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x004dea80();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x004dea9c();
    param_1 = param_1 + 1;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x004de914();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004de9c8();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 004daeb0; end: 004daeb3;  */

void FUN_004daeb0(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004de83c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x004deb74();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004deb5c();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x004deab8();
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  func_0x004de930();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004de84c();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004daeb4; end: 004db037;  */

void FUN_004daeb4(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x004debbc();
  *unaff_x19 = &PTR_FUN_009f1970;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x004de824();
  }
  *(undefined4 *)(unaff_x19 + 2) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined4 *)((long)unaff_x19 + 0x14) = 0;
  FUN_004dda88(unaff_x19 + 3);
  lVar2 = unaff_x20 + 0x30;
  func_0x00487c6c();
  unaff_x19[6] = lVar2;
  uVar1 = *(uint *)(unaff_x19 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x004ddfd0();
  }
  unaff_x19[7] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x004de040();
  }
  unaff_x19[8] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x004de0d0();
  }
  unaff_x19[9] = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_004de1cc();
  }
  unaff_x19[10] = uVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x004de228();
  }
  unaff_x19[0xb] = uVar3;
  if ((uVar1 >> 5 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x004d3428();
  }
  unaff_x19[0xc] = uVar3;
  if ((uVar1 >> 6 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x004de264();
  }
  unaff_x19[0xd] = uVar3;
  if ((uVar1 >> 7 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x004de294();
  }
  unaff_x19[0xe] = uVar3;
  if ((uVar1 >> 8 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x004de2c8();
  }
  unaff_x19[0xf] = unaff_x21;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined4 *)(unaff_x19 + 0x14) = *(undefined4 *)(unaff_x20 + 0xa0);
  unaff_x19[0x11] = uVar4;
  unaff_x19[0x10] = uVar3;
  unaff_x19[0x13] = uVar6;
  unaff_x19[0x12] = uVar5;
  return;
}



/* Entry: 004db038; end: 004db063;  */

undefined8 FUN_004db038(undefined8 param_1)

{
  func_0x004de90c();
  FUN_004db064(param_1);
  return param_1;
}



/* Entry: 004db064; end: 004db113;  */

long * FUN_004db064(void)

{
  long *plVar1;
  long unaff_x19;
  
  func_0x004deb44();
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    FUN_004dbdd4();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    FUN_004dbfc8();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    FUN_004dd1dc();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    FUN_004dd910();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x58) != 0) {
    FUN_004d93b4();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x68) != 0) {
    FUN_004d38d0();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x70) != 0) {
    FUN_004d74f4();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x78) != 0) {
    FUN_004d7d54();
  }
  __ZdlPv();
  plVar1 = (long *)(unaff_x19 + 0x18);
  if (*plVar1 != 0) {
    FUN_0054cf94(plVar1);
  }
  return plVar1;
}



/* Entry: 004db114; end: 004db117;  */

undefined8 FUN_004db114(undefined8 param_1)

{
  func_0x004de90c();
  FUN_004db064(param_1);
  return param_1;
}



/* Entry: 004db118; end: 004db12b;  */

void FUN_004db118(void)

{
  FUN_004db038();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004db12c; end: 004db137;  */

undefined ** FUN_004db12c(void)

{
  return &PTR_DAT_009f1aa0;
}



/* Entry: 004db138; end: 004db2cf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_004db138(void)

{
  uint uVar1;
  long unaff_x19;
  ulong *puVar2;
  
  func_0x004deb50();
  FUN_00532fa8(unaff_x19 + 0x30);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x004db218(*(undefined8 *)(unaff_x19 + 0x38));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x004db254(*(undefined8 *)(unaff_x19 + 0x40));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x004db284(*(undefined8 *)(unaff_x19 + 0x48));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_004db2d0(*(undefined8 *)(unaff_x19 + 0x50));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_004d9440(*(undefined8 *)(unaff_x19 + 0x58));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_004d9bf4(*(undefined8 *)(unaff_x19 + 0x60));
    }
    if ((uVar1 >> 6 & 1) != 0) {
      FUN_004d3988(*(undefined8 *)(unaff_x19 + 0x68));
    }
    if ((uVar1 >> 7 & 1) != 0) {
      FUN_004d7564(*(undefined8 *)(unaff_x19 + 0x70));
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    FUN_004d7e04(*(undefined8 *)(unaff_x19 + 0x78));
  }
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0xa0) = 0;
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 004db2d0; end: 004db2e3;  */

void FUN_004db2d0(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 004db2e4; end: 004db5f3;  */

section * FUN_004db2e4(section *param_1,undefined8 param_2,section *param_3)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  qword *pqVar4;
  segment_command *psVar5;
  section *psVar6;
  section *psVar7;
  qword qVar8;
  long lVar9;
  section *psVar10;
  ulong uVar11;
  long extraout_x8;
  long unaff_x20;
  section *unaff_x21;
  int iVar12;
  section *psVar13;
  int iVar14;
  
  psVar10 = param_3;
  func_0x004deba4();
  uVar2 = (uint)*(qword *)param_1->segname;
  if ((uVar2 & 1) != 0) {
    psVar10 = (section *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x14);
    param_1 = (section *)((long)&MACH_HEADER.magic + 1);
    func_0x004de830();
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    psVar10 = (section *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x40) + 0x18);
    param_1 = (section *)((long)&MACH_HEADER.magic + 2);
    func_0x004de830();
    unaff_x21 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x80) != 0) {
    func_0x004de88c();
    func_0x004dea8c();
    func_0x004de804();
    unaff_x21 = param_1;
  }
  psVar5 = (segment_command *)param_1;
  if (*(char *)(unaff_x20 + 0x88) == '\x01') {
    func_0x004de88c();
    psVar5 = &segment_command_00000020;
    func_0x00487cbc(0x20,param_1);
    func_0x004de7f8();
    unaff_x21 = (section *)psVar5;
  }
  psVar13 = (section *)psVar5;
  if (*(char *)(unaff_x20 + 0x89) == '\x01') {
    func_0x004de88c();
    psVar13 = (section *)segment_command_00000020.segname;
    func_0x00487cbc(0x28,psVar5);
    func_0x004de7f8();
    unaff_x21 = psVar13;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    psVar10 = (section *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x48) + 0x14);
    psVar13 = (section *)((long)&MACH_HEADER.cputype + 2);
    func_0x004de830();
    unaff_x21 = psVar13;
  }
  iVar14 = *(int *)(unaff_x20 + 0x20);
  for (iVar12 = 0; iVar14 != iVar12; iVar12 = iVar12 + 1) {
    uVar11 = *(ulong *)(unaff_x20 + 0x18);
    puVar1 = (ulong *)(unaff_x20 + 0x18);
    if ((uVar11 & 1) != 0) {
      puVar1 = (ulong *)(uVar11 + (long)iVar12 * 8 + 7);
    }
    psVar10 = (section *)(ulong)*(uint *)(*puVar1 + 0x18);
    psVar13 = (section *)((long)&MACH_HEADER.cputype + 3);
    func_0x004de830();
    unaff_x21 = psVar13;
  }
  psVar7 = psVar13;
  if (*(int *)(unaff_x20 + 0x8c) != 0) {
    func_0x004de88c();
    psVar7 = (section *)&segment_command_00000020.vmsize;
    func_0x00487cbc(0x40,psVar13);
    func_0x004de880();
    unaff_x21 = psVar7;
  }
  psVar13 = (section *)(*(ulong *)(unaff_x20 + 0x30) & 0xfffffffffffffffc);
  cVar3 = *(char *)((long)psVar13->segname + 7);
  qVar8 = (qword)cVar3;
  if ((long)qVar8 < 0) {
    qVar8 = *(qword *)((long)psVar13->sectname + 8);
    if (qVar8 == 0) goto LAB_004db478;
    psVar6 = *(section **)psVar13->sectname;
  }
  else {
    psVar6 = psVar13;
    if (cVar3 == '\0') goto LAB_004db478;
  }
  FUN_0054ddb8(psVar6,qVar8,1,"snapchat.messaging.ConversationEntry.conversation_title");
  psVar7 = param_3;
  FUN_00435e9c(param_3,9,psVar13,unaff_x21);
  psVar10 = psVar13;
  unaff_x21 = psVar7;
LAB_004db478:
  if ((uVar2 >> 3 & 1) != 0) {
    psVar10 = (section *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x50) + 0x14);
    psVar7 = (section *)((long)&MACH_HEADER.cpusubtype + 2);
    func_0x004de830();
    unaff_x21 = psVar7;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    psVar10 = (section *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x58) + 0x14);
    psVar7 = (section *)((long)&MACH_HEADER.cpusubtype + 3);
    func_0x004de830();
    unaff_x21 = psVar7;
  }
  psVar13 = psVar7;
  if (*(long *)(unaff_x20 + 0x90) != 0) {
    func_0x004de88c();
    psVar13 = (section *)&segment_command_00000020.nsects;
    func_0x00487cbc(0x60,psVar7);
    func_0x004de804();
    unaff_x21 = psVar13;
  }
  psVar7 = psVar13;
  if (*(char *)(unaff_x20 + 0x8a) == '\x01') {
    func_0x004de88c();
    psVar7 = &section_00000068;
    func_0x00487cbc(0x68,psVar13);
    func_0x004de7f8();
    unaff_x21 = psVar7;
  }
  if ((uVar2 >> 5 & 1) != 0) {
    psVar10 = (section *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x60) + 0x18);
    psVar7 = (section *)((long)&MACH_HEADER.filetype + 2);
    func_0x004de830();
    unaff_x21 = psVar7;
  }
  psVar13 = psVar7;
  if (*(int *)(unaff_x20 + 0xa0) != 0) {
    func_0x004de88c();
    psVar13 = (section *)section_00000068.segname;
    func_0x00487cbc(0x78,psVar7);
    func_0x004de880();
    unaff_x21 = psVar13;
  }
  if ((uVar2 >> 6 & 1) != 0) {
    psVar10 = (section *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x68) + 0x14);
    psVar13 = (section *)&MACH_HEADER.ncmds;
    func_0x004de830();
    unaff_x21 = psVar13;
  }
  if ((uVar2 >> 7 & 1) != 0) {
    psVar10 = (section *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x70) + 0x14);
    psVar13 = (section *)((long)&MACH_HEADER.ncmds + 1);
    func_0x004de830();
    unaff_x21 = psVar13;
  }
  if (*(long *)(unaff_x20 + 0x98) != 0) {
    func_0x004de88c();
    unaff_x21 = (section *)&section_00000068.size;
    func_0x00487cbc(0x90,psVar13);
    func_0x004de804();
  }
  if ((uVar2 >> 8 & 1) != 0) {
    psVar10 = (section *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x78) + 0x14);
    unaff_x21 = (section *)((long)&MACH_HEADER.ncmds + 3);
    func_0x004de830();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004de94c();
    if ((long)psVar10 < 0) {
      lVar9 = *(long *)(extraout_x8 + 8);
      psVar10 = *(section **)(extraout_x8 + 0x10);
    }
    else {
      lVar9 = extraout_x8 + 8;
    }
    if ((long)(*(qword *)param_3->sectname - (long)unaff_x21) < (long)(int)psVar10) {
      while( true ) {
        iVar14 = ((int)*(qword *)param_3->sectname - (int)unaff_x21) + 0x10;
        iVar12 = (int)psVar10;
        psVar10 = (section *)(ulong)(uint)(iVar12 - iVar14);
        if (iVar12 - iVar14 == 0 || iVar12 < iVar14) break;
        func_0x0054f690();
        pqVar4 = (qword *)unaff_x21->sectname;
        unaff_x21 = param_3;
        func_0x0054ed58(param_3,(undefined1 *)((long)pqVar4 + (long)iVar14));
      }
      func_0x0054f690();
      return (section *)((long)unaff_x21->sectname + (long)iVar12);
    }
    _memcpy(unaff_x21,lVar9,(ulong)psVar10 & 0xffffffff);
    return (section *)((long)unaff_x21->sectname + (long)(int)psVar10);
  }
  return unaff_x21;
}



/* Entry: 004db5f4; end: 004db7df;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_004db5f4(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x004de7b8();
  for (; iVar3 = (int)unaff_x20, unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar4 = *unaff_x21;
    FUN_004d2ec0();
    unaff_x20 = lVar4 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  uVar5 = *(ulong *)(unaff_x19 + 0x30) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar5 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar5 + 8);
  }
  if (lVar4 != 0) {
    FUN_0048910c();
    func_0x004dea74();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_004dbec8(*(undefined8 *)(unaff_x19 + 0x38));
      func_0x004de708();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x004dc08c(*(undefined8 *)(unaff_x19 + 0x40));
      func_0x004de708();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_004dd360(*(undefined8 *)(unaff_x19 + 0x48));
      func_0x004de708();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_004dd9b8(*(undefined8 *)(unaff_x19 + 0x50));
      func_0x004de708();
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x004db7e0(*(undefined8 *)(unaff_x19 + 0x58));
      func_0x004dea74();
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_004d2ec0(*(undefined8 *)(unaff_x19 + 0x60));
      func_0x004dea74();
    }
    if ((uVar1 >> 6 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(unaff_x19 + 0x68);
      func_0x004db7fc();
      iVar3 = iVar3 + iVar2 + 2;
    }
    if ((uVar1 >> 7 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(unaff_x19 + 0x70);
      func_0x004db818();
      iVar3 = iVar3 + iVar2 + 2;
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    iVar2 = (int)*(undefined8 *)(unaff_x19 + 0x78);
    func_0x004db834();
    iVar3 = iVar3 + iVar2 + 2;
  }
  if (*(long *)(unaff_x19 + 0x80) != 0) {
    iVar3 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x80)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  iVar3 = iVar3 + (uint)*(byte *)(unaff_x19 + 0x88) * 2 + (uint)*(byte *)(unaff_x19 + 0x89) * 2 +
          (uint)*(byte *)(unaff_x19 + 0x8a) * 2;
  if (*(int *)(unaff_x19 + 0x8c) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x8c)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(long *)(unaff_x19 + 0x90) != 0) {
    iVar3 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x90)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  if (*(long *)(unaff_x19 + 0x98) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT(*(long *)(unaff_x19 + 0x98)) * -9 + 0x280U >> 6) + 2;
  }
  if (*(int *)(unaff_x19 + 0xa0) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0xa0)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004de9c8();
    lVar4 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar4 = *(long *)(extraout_x9 + 0x10);
    }
    iVar3 = (int)lVar4 + iVar3;
  }
  *(int *)(unaff_x19 + 0x14) = iVar3;
  return;
}



/* Entry: 004db7e0; end: 004db84f;  */

long FUN_004db7e0(long param_1)

{
  long extraout_x8;
  
  func_0x004d9608();
  func_0x004de72c();
  return param_1 + extraout_x8;
}



/* Entry: 004db850; end: 004db853;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_004db850(ulong *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x004de810();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004deaa4();
  }
  func_0x004deb24();
  uVar2 = *(ulong *)(unaff_x20 + 0x30) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(unaff_x21 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x21 + 0x30);
    func_0x00532e08(param_1,uVar2,uVar3);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x004ddfd0();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        FUN_004dbacc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x004de040();
        *(ulong **)(unaff_x21 + 0x40) = param_1;
      }
      else {
        func_0x004dbb40();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x48);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x004de0d0();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        func_0x004dbc28();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x50);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_004de1cc();
        *(ulong **)(unaff_x21 + 0x50) = param_1;
      }
      else {
        FUN_004dbdb8();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x58);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x004de228();
        *(ulong **)(unaff_x21 + 0x58) = param_1;
      }
      else {
        FUN_004d9744();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x60);
      if (param_1 == (ulong *)0x0) {
        func_0x004deab0();
        *(ulong **)(unaff_x21 + 0x60) = param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x68);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x004de264();
        *(ulong **)(unaff_x21 + 0x68) = param_1;
      }
      else {
        FUN_004d3cd4();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x70);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x004de294();
        *(ulong **)(unaff_x21 + 0x70) = param_1;
      }
      else {
        FUN_004d767c();
      }
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x78);
    if (param_1 == (ulong *)0x0) {
      func_0x004de2c8();
      *(ulong **)(unaff_x21 + 0x78) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      FUN_004d81cc();
    }
  }
  if (*(long *)(unaff_x20 + 0x80) != 0) {
    *(long *)(unaff_x21 + 0x80) = *(long *)(unaff_x20 + 0x80);
  }
  if (*(char *)(unaff_x20 + 0x88) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x88) = 1;
  }
  if (*(char *)(unaff_x20 + 0x89) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x89) = 1;
  }
  if (*(char *)(unaff_x20 + 0x8a) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x8a) = 1;
  }
  if (*(int *)(unaff_x20 + 0x8c) != 0) {
    *(int *)(unaff_x21 + 0x8c) = *(int *)(unaff_x20 + 0x8c);
  }
  if (*(long *)(unaff_x20 + 0x90) != 0) {
    *(long *)(unaff_x21 + 0x90) = *(long *)(unaff_x20 + 0x90);
  }
  if (*(long *)(unaff_x20 + 0x98) != 0) {
    *(long *)(unaff_x21 + 0x98) = *(long *)(unaff_x20 + 0x98);
  }
  if (*(int *)(unaff_x20 + 0xa0) != 0) {
    *(int *)(unaff_x21 + 0xa0) = *(int *)(unaff_x20 + 0xa0);
  }
  func_0x004de86c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x004de84c();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004db854; end: 004dbabb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_004db854(ulong *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x004de810();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004deaa4();
  }
  func_0x004deb24();
  uVar2 = *(ulong *)(unaff_x20 + 0x30) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(unaff_x21 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x21 + 0x30);
    func_0x00532e08(param_1,uVar2,uVar3);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x004ddfd0();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        FUN_004dbacc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x004de040();
        *(ulong **)(unaff_x21 + 0x40) = param_1;
      }
      else {
        func_0x004dbb40();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x48);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x004de0d0();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        func_0x004dbc28();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x50);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_004de1cc();
        *(ulong **)(unaff_x21 + 0x50) = param_1;
      }
      else {
        FUN_004dbdb8();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x58);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x004de228();
        *(ulong **)(unaff_x21 + 0x58) = param_1;
      }
      else {
        FUN_004d9744();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x60);
      if (param_1 == (ulong *)0x0) {
        func_0x004deab0();
        *(ulong **)(unaff_x21 + 0x60) = param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x68);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x004de264();
        *(ulong **)(unaff_x21 + 0x68) = param_1;
      }
      else {
        FUN_004d3cd4();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x70);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x004de294();
        *(ulong **)(unaff_x21 + 0x70) = param_1;
      }
      else {
        FUN_004d767c();
      }
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x78);
    if (param_1 == (ulong *)0x0) {
      func_0x004de2c8();
      *(ulong **)(unaff_x21 + 0x78) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      FUN_004d81cc();
    }
  }
  if (*(long *)(unaff_x20 + 0x80) != 0) {
    *(long *)(unaff_x21 + 0x80) = *(long *)(unaff_x20 + 0x80);
  }
  if (*(char *)(unaff_x20 + 0x88) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x88) = 1;
  }
  if (*(char *)(unaff_x20 + 0x89) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x89) = 1;
  }
  if (*(char *)(unaff_x20 + 0x8a) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x8a) = 1;
  }
  if (*(int *)(unaff_x20 + 0x8c) != 0) {
    *(int *)(unaff_x21 + 0x8c) = *(int *)(unaff_x20 + 0x8c);
  }
  if (*(long *)(unaff_x20 + 0x90) != 0) {
    *(long *)(unaff_x21 + 0x90) = *(long *)(unaff_x20 + 0x90);
  }
  if (*(long *)(unaff_x20 + 0x98) != 0) {
    *(long *)(unaff_x21 + 0x98) = *(long *)(unaff_x20 + 0x98);
  }
  if (*(int *)(unaff_x20 + 0xa0) != 0) {
    *(int *)(unaff_x21 + 0xa0) = *(int *)(unaff_x20 + 0xa0);
  }
  func_0x004de86c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x004de84c();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004dbabc; end: 004dbacb;  */

void FUN_004dbabc(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  FUN_0054d5a8();
  plVar2 = param_1;
  func_0x0054d67c();
  plVar3 = (long *)*unaff_x25;
  func_0x0054d6a8();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x0054d6b0();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x0054d694();
    param_1 = param_1 + 1;
  }
  func_0x0054d60c();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 004dbacc; end: 004dbb3f;  */

void FUN_004dbacc(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004de83c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x004deb74();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004deb5c();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x004deab8();
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  func_0x004de930();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004de84c();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004dbb40; end: 004dbdb7;  */

void FUN_004dbb40(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x004de810();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004deaa4();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_004dbc0c;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_004dbf48();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (iVar2 == 2) {
      param_1 = (ulong *)unaff_x21[2];
      func_0x004dc180();
      goto LAB_004dbc0c;
    }
    FUN_004de3b0();
    param_1 = unaff_x22;
  }
  else {
    if (iVar1 != 1) goto LAB_004dbc0c;
    if (iVar2 == 1) {
      param_1 = (ulong *)unaff_x21[2];
      FUN_004dc104();
      goto LAB_004dbc0c;
    }
    FUN_004de2f8();
    param_1 = unaff_x22;
  }
  unaff_x21[2] = (ulong)param_1;
LAB_004dbc0c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004de84c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004dbdb8; end: 004dbdd3;  */

void FUN_004dbdb8(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}


