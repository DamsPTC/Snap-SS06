/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 005225f8; end: 00522627;  */

long * FUN_005225f8(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0054cf94(param_1);
  }
  return param_1;
}



/* Entry: 00522628; end: 00522657;  */

long * FUN_00522628(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0054cf94(param_1);
  }
  return param_1;
}



/* Entry: 00522658; end: 005229bf;  */

long FUN_00522658(long param_1)

{
  FUN_00501018(param_1 + 0x20);
  FUN_00522628(param_1 + 8);
  return param_1;
}



/* Entry: 005229c0; end: 00522ac7;  */

undefined8 * FUN_005229c0(undefined8 *param_1)

{
  uint uVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x005232dc();
  if (param_1 == (undefined8 *)0x0) {
    func_0x005232b4();
  }
  else {
    func_0x00523478();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_FUN_00a00020;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x005231a4();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    FUN_00522d70();
  }
  param_1[3] = unaff_x20;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(unaff_x19 + 0x20);
  return param_1;
}



/* Entry: 00522ac8; end: 00522c33;  */

dword * FUN_00522ac8(dword *param_1,long param_2)

{
  uint uVar1;
  dword *pdVar2;
  dword *pdVar3;
  undefined8 uVar4;
  
  if (param_1 == (dword *)0x0) {
    pdVar2 = &section_00000068.offset;
    __Znwm();
  }
  else {
    pdVar2 = param_1;
    func_0x005510c4(param_1,0x98);
  }
  *(dword **)(pdVar2 + 2) = param_1;
  *(undefined ***)pdVar2 = &PTR_DAT_00a000c0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x005231a4();
  }
  pdVar2[4] = *(dword *)(param_2 + 0x10);
  pdVar2[5] = 0;
  FUN_0048ece4(pdVar2 + 6,param_1,param_2 + 0x18);
  *(undefined8 *)(pdVar2 + 0xc) = 0;
  pdVar2[10] = 0;
  *(undefined8 *)(pdVar2 + 0xe) = 0;
  *(dword **)(pdVar2 + 0x10) = param_1;
  FUN_0052096c(pdVar2 + 0xc,param_2 + 0x30);
  FUN_0048ece4(pdVar2 + 0x12,param_1,param_2 + 0x48);
  pdVar2[0x16] = 0;
  uVar1 = pdVar2[4];
  if ((uVar1 & 1) == 0) {
    pdVar3 = (dword *)0x0;
  }
  else {
    pdVar3 = param_1;
    FUN_00522da4(param_1,*(undefined8 *)(param_2 + 0x60));
  }
  *(dword **)(pdVar2 + 0x18) = pdVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    pdVar3 = (dword *)0x0;
  }
  else {
    pdVar3 = param_1;
    FUN_00522e0c(param_1,*(undefined8 *)(param_2 + 0x68));
  }
  *(dword **)(pdVar2 + 0x1a) = pdVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    pdVar3 = (dword *)0x0;
  }
  else {
    pdVar3 = param_1;
    func_0x0051edfc(param_1,*(undefined8 *)(param_2 + 0x70));
  }
  *(dword **)(pdVar2 + 0x1c) = pdVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    pdVar3 = (dword *)0x0;
  }
  else {
    pdVar3 = param_1;
    func_0x004d927c(param_1,*(undefined8 *)(param_2 + 0x78));
  }
  *(dword **)(pdVar2 + 0x1e) = pdVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    param_1 = (dword *)0x0;
  }
  else {
    FUN_00522eec(param_1,*(undefined8 *)(param_2 + 0x80));
  }
  *(dword **)(pdVar2 + 0x20) = param_1;
  uVar4 = *(undefined8 *)(param_2 + 0x88);
  *(undefined2 *)(pdVar2 + 0x24) = *(undefined2 *)(param_2 + 0x90);
  *(undefined8 *)(pdVar2 + 0x22) = uVar4;
  return pdVar2;
}



/* Entry: 00522c34; end: 00522d6f;  */

qword * FUN_00522c34(long param_1)

{
  qword *pqVar1;
  qword qVar2;
  qword *pqVar3;
  long unaff_x19;
  qword *unaff_x20;
  
  func_0x005232dc();
  if (param_1 == 0) {
    pqVar1 = &segment_command_00000020.vmaddr;
    __Znwm();
  }
  else {
    pqVar1 = unaff_x20;
    func_0x005510c4();
  }
  pqVar1[1] = (qword)unaff_x20;
  *pqVar1 = (qword)&PTR_DAT_009ffee0;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x005231a4();
  }
  *(undefined4 *)(pqVar1 + 2) = *(undefined4 *)(unaff_x19 + 0x10);
  *(undefined4 *)((long)pqVar1 + 0x14) = 0;
  qVar2 = unaff_x19 + 0x18;
  func_0x0052348c();
  pqVar1[3] = qVar2;
  qVar2 = pqVar1[2];
  if (((uint)qVar2 & 1) == 0) {
    pqVar3 = (qword *)0x0;
  }
  else {
    pqVar3 = unaff_x20;
    func_0x0051edfc();
  }
  pqVar1[4] = (qword)pqVar3;
  if (((uint)qVar2 >> 1 & 1) == 0) {
    unaff_x20 = (qword *)0x0;
  }
  else {
    FUN_00522d70();
  }
  pqVar1[5] = (qword)unaff_x20;
  *(undefined4 *)(pqVar1 + 6) = *(undefined4 *)(unaff_x19 + 0x30);
  return pqVar1;
}



/* Entry: 00522d70; end: 00522da3;  */

undefined8 * FUN_00522d70(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x005232dc();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0052349c();
  }
  else {
    func_0x005234a4();
    param_1 = unaff_x20;
  }
  func_0x00523378();
  *param_1 = &PTR_FUN_009ffd48;
  param_1[1] = param_2;
  param_1[2] = 0;
  func_0x0051f2c0();
  return param_1;
}



/* Entry: 00522da4; end: 00522e0b;  */

segment_command * FUN_00522da4(segment_command *param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x005233c8();
  if (param_1 == (segment_command *)0x0) {
    param_1 = &segment_command_00000020;
    __Znwm();
  }
  else {
    func_0x00523464();
  }
  *(undefined8 *)param_1->segname = unaff_x19;
  *(undefined ***)param_1 = &PTR_FUN_009ffdf0;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x005231a4();
  }
  lVar1 = unaff_x20 + 0x10;
  func_0x00487c6c();
  *(long *)(param_1->segname + 8) = lVar1;
  *(undefined4 *)&param_1->vmaddr = 0;
  return param_1;
}



/* Entry: 00522e0c; end: 00522eeb;  */

char * FUN_00522e0c(char *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == (char *)0x0) {
    pcVar1 = section_00000068.sectname + 8;
    __Znwm();
  }
  else {
    pcVar1 = param_1;
    func_0x005510c4(param_1,0x70);
  }
  *(char **)(pcVar1 + 8) = param_1;
  *(undefined ***)pcVar1 = &PTR_FUN_009fffd0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x005231a4();
  }
  *(undefined4 *)(pcVar1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  pcVar1[0x14] = '\0';
  pcVar1[0x15] = '\0';
  pcVar1[0x16] = '\0';
  pcVar1[0x17] = '\0';
  FUN_0048cf2c(pcVar1 + 0x18,param_1,param_2 + 0x18);
  lVar2 = param_2 + 0x30;
  func_0x005232c8();
  *(long *)(pcVar1 + 0x30) = lVar2;
  lVar2 = param_2 + 0x38;
  func_0x005232c8();
  *(long *)(pcVar1 + 0x38) = lVar2;
  lVar2 = param_2 + 0x40;
  func_0x005232c8();
  *(long *)(pcVar1 + 0x40) = lVar2;
  if ((pcVar1[0x10] & 1U) == 0) {
    param_1 = (char *)0x0;
  }
  else {
    func_0x005230dc(param_1,*(undefined8 *)(param_2 + 0x48));
  }
  *(char **)(pcVar1 + 0x48) = param_1;
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  uVar5 = *(undefined8 *)(param_2 + 0x59);
  *(undefined8 *)(pcVar1 + 0x61) = *(undefined8 *)(param_2 + 0x61);
  *(undefined8 *)(pcVar1 + 0x59) = uVar5;
  *(undefined8 *)(pcVar1 + 0x58) = uVar4;
  *(undefined8 *)(pcVar1 + 0x50) = uVar3;
  return pcVar1;
}



/* Entry: 00522eec; end: 00522f27;  */

char * FUN_00522eec(long param_1,qword param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  qword qVar3;
  char *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  func_0x005232dc();
  if (param_1 == 0) {
    unaff_x20 = section_000000b8.segname + 8;
    __Znwm();
  }
  else {
    param_2 = 0xd0;
    func_0x005510c4();
  }
  func_0x00523378();
  *(qword *)(unaff_x20 + 8) = param_2;
  *(undefined ***)unaff_x20 = &PTR_FUN_009ff750;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x0051d888();
  }
  *(undefined4 *)(unaff_x20 + 0x10) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x1c) = 0;
  *(undefined8 *)(unaff_x20 + 0x14) = 0;
  *(dword *)(unaff_x20 + 0x24) = 0;
  *(qword *)(unaff_x20 + 0x28) = param_2;
  FUN_0051d4f4(unaff_x20 + 0x18,param_3 + 0x18);
  FUN_0048cf2c(unaff_x20 + 0x30,param_2,param_3 + 0x30);
  FUN_0048ece4((long)unaff_x20 + 0x48,param_2,param_3 + 0x48);
  *(undefined4 *)(unaff_x20 + 0x58) = 0;
  lVar2 = param_3 + 0x60;
  func_0x0051d904();
  *(long *)(unaff_x20 + 0x60) = lVar2;
  lVar2 = param_3 + 0x68;
  func_0x0051d904();
  *(long *)(unaff_x20 + 0x68) = lVar2;
  lVar2 = param_3 + 0x70;
  func_0x0051d904();
  *(long *)(unaff_x20 + 0x70) = lVar2;
  lVar2 = param_3 + 0x78;
  func_0x0051d904();
  *(long *)(unaff_x20 + 0x78) = lVar2;
  uVar1 = (uint)*(qword *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    qVar3 = 0;
  }
  else {
    qVar3 = param_2;
    func_0x0051bbb0(param_2,*(undefined8 *)(param_3 + 0x80));
  }
  *(qword *)(unaff_x20 + 0x80) = qVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    qVar3 = 0;
  }
  else {
    qVar3 = param_2;
    func_0x0051d6b8(param_2,*(undefined8 *)(param_3 + 0x88));
  }
  *(qword *)(unaff_x20 + 0x88) = qVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x0051d734(param_2,*(undefined8 *)(param_3 + 0x90));
  }
  *(qword *)(unaff_x20 + 0x90) = param_2;
  uVar5 = *(undefined8 *)(param_3 + 0xa0);
  uVar4 = *(undefined8 *)(param_3 + 0x98);
  uVar7 = *(undefined8 *)(param_3 + 0xb0);
  uVar6 = *(undefined8 *)(param_3 + 0xa8);
  uVar9 = *(undefined8 *)(param_3 + 0xc0);
  uVar8 = *(undefined8 *)(param_3 + 0xb8);
  *(undefined4 *)(unaff_x20 + 200) = *(undefined4 *)(param_3 + 200);
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar9;
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar8;
  *(undefined8 *)(unaff_x20 + 0xb0) = uVar7;
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar6;
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x98) = uVar4;
  return unaff_x20;
}



/* Entry: 00522f28; end: 00522fa3;  */

undefined8 * FUN_00522f28(undefined8 *param_1)

{
  uint uVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x005232dc();
  if (param_1 == (undefined8 *)0x0) {
    func_0x005232b4();
  }
  else {
    func_0x00523478();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_FUN_009fff80;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x005231a4();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x005230ac();
  }
  param_1[3] = unaff_x20;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(unaff_x19 + 0x20);
  return param_1;
}



/* Entry: 00522fa4; end: 0052300f;  */

undefined8 * FUN_00522fa4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0052349c();
  }
  else {
    func_0x005234a4();
  }
  *puVar1 = &PTR_FUN_009ffe40;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  FUN_00521a80();
  return puVar1;
}



/* Entry: 00523010; end: 00523117;  */

undefined8 * FUN_00523010(undefined8 *param_1,undefined8 param_2)

{
  func_0x005232dc();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00523494();
  }
  else {
    func_0x00523318();
  }
  func_0x00523378();
  *param_1 = &PTR_FUN_00a006c8;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  func_0x00523770();
  return param_1;
}



/* Entry: 00523118; end: 00523567;  */

void FUN_00523118(void)

{
  return;
}



/* Entry: 00523568; end: 0052358f;  */

long FUN_00523568(long param_1)

{
  FUN_00487580(param_1 + 8);
  return param_1;
}



/* Entry: 00523590; end: 005235db;  */

undefined8 * FUN_00523590(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_00a00628;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x00523534(param_1,param_3);
  return param_1;
}



/* Entry: 005235dc; end: 005235df;  */

long FUN_005235dc(long param_1)

{
  FUN_00487580(param_1 + 8);
  return param_1;
}



/* Entry: 005235e0; end: 005235f3;  */

void FUN_005235e0(void)

{
  FUN_00523568();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005235f4; end: 00523613;  */

undefined ** FUN_005235f4(void)

{
  return &PTR_DAT_00a00668;
}



/* Entry: 00523614; end: 005236bf;  */

long * FUN_00523614(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  
  puVar3 = param_1;
  if (param_1[2] != 0) {
    puVar2 = param_1;
    func_0x00523764();
    uVar7 = param_1[2];
    puVar3 = (undefined8 *)((long)&MACH_HEADER.cpusubtype + 1);
    func_0x00487cbc(9,puVar2);
    param_2 = puVar3 + 1;
    *puVar3 = uVar7;
  }
  if (param_1[3] != 0) {
    func_0x00523764();
    uVar7 = param_1[3];
    puVar2 = (undefined8 *)((long)&MACH_HEADER.ncmds + 1);
    func_0x00487cbc(0x11,puVar3);
    param_2 = puVar2 + 1;
    *puVar2 = uVar7;
  }
  if ((param_1[1] & 1) != 0) {
    uVar6 = param_1[1] & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      while( true ) {
        iVar9 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar8 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar8 - iVar9);
        if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
        func_0x0054f690();
        puVar1 = (undefined1 *)((long)param_2 + (long)iVar9);
        param_2 = param_3;
        func_0x0054ed58(param_3,puVar1);
      }
      func_0x0054f690();
      return (long *)((long)param_2 + (long)iVar8);
    }
    _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar5);
  }
  return param_2;
}



/* Entry: 005236c0; end: 00523713;  */

long FUN_005236c0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 9;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x20) = (int)lVar1;
  return lVar1;
}



/* Entry: 00523714; end: 0052375b;  */

void FUN_00523714(char *param_1)

{
  char *pcVar1;
  
  if (param_1 == (char *)0x0) {
    pcVar1 = segment_command_00000020.segname;
    __Znwm();
  }
  else {
    pcVar1 = param_1;
    func_0x005510c4(param_1,0x28);
  }
  *(undefined ***)pcVar1 = &PTR_FUN_00a00628;
  *(char **)(pcVar1 + 8) = param_1;
  *(qword *)(pcVar1 + 0x10) = 0;
  *(qword *)(pcVar1 + 0x18) = 0;
  *(undefined4 *)(pcVar1 + 0x20) = 0;
  return;
}



/* Entry: 0052375c; end: 005237db;  */

void FUN_0052375c(void)

{
  return;
}



/* Entry: 005237dc; end: 00523803;  */

long FUN_005237dc(long param_1)

{
  FUN_00487580(param_1 + 8);
  return param_1;
}



/* Entry: 00523804; end: 00523853;  */

undefined8 * FUN_00523804(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_00a006c8;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  func_0x00523770(param_1,param_3);
  return param_1;
}



/* Entry: 00523854; end: 00523857;  */

long FUN_00523854(long param_1)

{
  FUN_00487580(param_1 + 8);
  return param_1;
}



/* Entry: 00523858; end: 0052386b;  */

void FUN_00523858(void)

{
  FUN_005237dc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0052386c; end: 00523897;  */

undefined ** FUN_0052386c(void)

{
  return &PTR_DAT_00a00708;
}



/* Entry: 00523898; end: 0052399b;  */

long * FUN_00523898(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  lVar1 = param_1;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = param_1;
    FUN_00523a64();
    lVar1 = 9;
    func_0x00487cbc(9,lVar2);
    func_0x00523a70();
  }
  lVar2 = lVar1;
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00523a64();
    lVar2 = 0x11;
    func_0x00487cbc(0x11,lVar1);
    func_0x00523a70();
  }
  lVar1 = lVar2;
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_00523a64();
    lVar1 = 0x19;
    func_0x00487cbc(0x19,lVar2);
    func_0x00523a70();
  }
  lVar2 = lVar1;
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_00523a64();
    lVar2 = 0x21;
    func_0x00487cbc(0x21,lVar1);
    func_0x00523a70();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_00523a64();
    func_0x00487cbc(0x29,lVar2);
    func_0x00523a70();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar1 = *(long *)(uVar4 + 8);
      uVar3 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      lVar1 = uVar4 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      while( true ) {
        iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar5 = (int)uVar3;
        uVar3 = (ulong)(uint)(iVar5 - iVar6);
        if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
        func_0x0054f690();
        lVar1 = (long)param_2 + (long)iVar6;
        param_2 = param_3;
        func_0x0054ed58(param_3,lVar1);
      }
      func_0x0054f690();
      return (long *)((long)param_2 + (long)iVar5);
    }
    _memcpy(param_2,lVar1,uVar3 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar3);
  }
  return param_2;
}



/* Entry: 0052399c; end: 00523a17;  */

long FUN_0052399c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 9;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 9;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = lVar1 + 9;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar1 = lVar1 + 9;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar1 = lVar1 + 9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x38) = (int)lVar1;
  return lVar1;
}



/* Entry: 00523a18; end: 00523a63;  */

void FUN_00523a18(qword *param_1)

{
  qword *pqVar1;
  
  if (param_1 == (qword *)0x0) {
    pqVar1 = &segment_command_00000020.vmsize;
    __Znwm();
  }
  else {
    pqVar1 = param_1;
    func_0x005510c4(param_1,0x40);
  }
  *pqVar1 = (qword)&PTR_FUN_00a006c8;
  pqVar1[1] = (qword)param_1;
  pqVar1[3] = 0;
  pqVar1[2] = 0;
  pqVar1[5] = 0;
  pqVar1[4] = 0;
  *(undefined8 *)((long)pqVar1 + 0x34) = 0;
  *(undefined8 *)((long)pqVar1 + 0x2c) = 0;
  return;
}



/* Entry: 00523a64; end: 00523aab;  */

ulong * FUN_00523a64(void)

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



/* Entry: 00523aac; end: 00523ad3;  */

long FUN_00523aac(long param_1)

{
  FUN_00487580(param_1 + 8);
  return param_1;
}



/* Entry: 00523ad4; end: 00523b1f;  */

undefined8 * FUN_00523ad4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_00a00770;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  func_0x00523a84(param_1,param_3);
  return param_1;
}



/* Entry: 00523b20; end: 00523b23;  */

long FUN_00523b20(long param_1)

{
  FUN_00487580(param_1 + 8);
  return param_1;
}



/* Entry: 00523b24; end: 00523b37;  */

void FUN_00523b24(void)

{
  FUN_00523aac();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00523b38; end: 00523b57;  */

undefined ** FUN_00523b38(void)

{
  return &PTR_DAT_00a007b0;
}



/* Entry: 00523b58; end: 00523bc3;  */

long * FUN_00523b58(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    FUN_004363bc(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar1;
  }
  uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
  if ((long)uVar3 < 0) {
    lVar2 = *(long *)(uVar4 + 8);
    uVar3 = *(ulong *)(uVar4 + 0x10);
  }
  else {
    lVar2 = uVar4 + 8;
  }
  if (*param_3 - (long)plVar1 < (long)(int)uVar3) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)plVar1) + 0x10;
      iVar5 = (int)uVar3;
      uVar3 = (ulong)(uint)(iVar5 - iVar6);
      if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
      func_0x0054f690();
      lVar2 = (long)plVar1 + (long)iVar6;
      plVar1 = param_3;
      func_0x0054ed58(param_3,lVar2);
    }
    func_0x0054f690();
    return (long *)((long)plVar1 + (long)iVar5);
  }
  _memcpy(plVar1,lVar2,uVar3 & 0xffffffff);
  return (long *)((long)plVar1 + (long)(int)uVar3);
}



/* Entry: 00523bc4; end: 00523c17;  */

ulong FUN_00523bc4(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x18) = (int)uVar1;
  return uVar1;
}



/* Entry: 00523c18; end: 00523c5f;  */

void FUN_00523c18(segment_command *param_1)

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
  *(undefined ***)psVar1 = &PTR_FUN_00a00770;
  *(segment_command **)psVar1->segname = param_1;
  *(undefined4 *)&psVar1->vmaddr = 0;
  psVar1->segname[8] = '\0';
  psVar1->segname[9] = '\0';
  psVar1->segname[10] = '\0';
  psVar1->segname[0xb] = '\0';
  psVar1->segname[0xc] = '\0';
  psVar1->segname[0xd] = '\0';
  psVar1->segname[0xe] = '\0';
  psVar1->segname[0xf] = '\0';
  return;
}



/* Entry: 00523c60; end: 00523c67;  */

void FUN_00523c60(void)

{
  return;
}



/* Entry: 00523c68; end: 00523d1f;  */

undefined1  [16] FUN_00523c68(long *param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long *plVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  ulong uVar11;
  long extraout_x8_02;
  undefined8 *extraout_x10;
  undefined8 *extraout_x10_00;
  long extraout_x11;
  long extraout_x11_00;
  long lVar12;
  long lVar13;
  char *pcVar14;
  char *pcVar15;
  long lVar16;
  long lVar17;
  char *pcVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 auStack_b8 [3];
  char acStack_a0 [24];
  undefined8 uStack_88;
  undefined6 uStack_48;
  byte bStack_42;
  undefined1 uStack_41;
  byte bStack_40;
  undefined7 uStack_3f;
  undefined8 uStack_38;
  
  plVar5 = param_1;
  func_0x00524720();
  uVar9 = *plVar5 + 8;
  uStack_38 = extraout_x8;
  func_0x00524248();
  iVar10 = 0;
  for (lVar13 = 0; bVar3 = lVar13 == 0x10, !bVar3; lVar13 = lVar13 + 1) {
    if (iVar10 == 8) {
      uVar9 = *param_1 + 8;
      func_0x00524248();
      iVar10 = 0;
    }
    *(char *)((long)&uStack_48 + lVar13) = (char)(uVar9 >> ((ulong)(uint)(iVar10 << 3) & 0x3f));
    iVar10 = iVar10 + 1;
  }
  pcVar15 = (char *)(CONCAT17(uStack_41,CONCAT16(bStack_42,uStack_48)) & 0xff0fffffffffffff |
                    0x40000000000000);
  pcVar6 = (char *)(CONCAT71(uStack_3f,bStack_40) & 0xffffffffffffff3f | 0x80);
  bStack_42 = bStack_42 & 0xf | 0x40;
  bStack_40 = bStack_40 & 0x3f | 0x80;
  func_0x0052470c(uStack_38);
  if (bVar3) {
    auVar19._8_8_ = pcVar6;
    auVar19._0_8_ = pcVar15;
    return auVar19;
  }
  ___stack_chk_fail();
  pcVar18 = pcVar15;
  func_0x00524720();
  iVar10 = (int)pcVar18;
  uStack_88 = extraout_x8_00;
  FUN_00523ea4();
  cVar2 = iVar10 < 0;
  uVar4 = iVar10 == 0;
  cVar1 = '\0';
  pcVar18 = pcVar6;
  if ((bool)uVar4) {
    pcVar18 = pcVar15;
    pcVar15 = pcVar6;
  }
  FUN_00523f14(auStack_b8,pcVar18,pcVar18 + 0x10);
  func_0x00524788();
  lVar13 = extraout_x11;
  puVar7 = extraout_x10;
  if (cVar2 == cVar1) {
    lVar13 = extraout_x8_01;
    puVar7 = auStack_b8;
  }
  pcVar6 = pcVar15 + 0x10;
  FUN_00523dfc(auStack_b8,(long)puVar7 + lVar13);
  acStack_a0[8] = -0x5e;
  acStack_a0[9] = -0x20;
  acStack_a0[10] = 'D';
  acStack_a0[0xb] = '\\';
  acStack_a0[0xc] = '?';
  acStack_a0[0xd] = -0xd;
  acStack_a0[0xe] = -0x33;
  acStack_a0[0xf] = ' ';
  acStack_a0[0] = '\a';
  acStack_a0[1] = -0x6c;
  acStack_a0[2] = '&';
  acStack_a0[3] = -0x5f;
  acStack_a0[4] = -0x6c;
  acStack_a0[5] = 'K';
  acStack_a0[6] = 'E';
  acStack_a0[7] = 'G';
  pcVar18 = acStack_a0;
  puVar7 = auStack_b8;
  FUN_00523e04();
  pcVar14 = pcVar18;
  puVar8 = puVar7;
  func_0x00524760();
  func_0x0052470c(uStack_88);
  if ((bool)uVar4) {
    auVar20._8_8_ = puVar7;
    auVar20._0_8_ = pcVar18;
    return auVar20;
  }
  ___stack_chk_fail();
  func_0x00524760();
  func_0x00524768();
  uVar9 = (long)pcVar6 - (long)pcVar15;
  lVar13 = (long)pcVar14[0x17];
  if (lVar13 < 0) {
    pcVar18 = *(char **)pcVar14;
    lVar12 = (long)puVar8 - (long)pcVar18;
    if (uVar9 != 0) {
      lVar13 = *(long *)(pcVar14 + 8);
      if (pcVar15 < pcVar18 || pcVar18 + lVar13 + 1 <= pcVar15) {
        puVar8 = (undefined8 *)((*(ulong *)(pcVar14 + 0x10) & 0x7fffffffffffffff) - 1);
        uVar11 = (long)puVar8 - lVar13;
        goto LAB_0052403c;
      }
      goto LAB_00524054;
    }
  }
  else {
    lVar12 = (long)puVar8 - (long)pcVar14;
    pcVar18 = pcVar14;
    if (uVar9 != 0) {
      if (pcVar15 < pcVar14 || pcVar14 + lVar13 + 1 <= pcVar15) {
        puVar8 = (undefined8 *)((long)&MACH_HEADER.sizeofcmds + 2);
        uVar11 = 0x16 - lVar13;
LAB_0052403c:
        if (uVar11 < uVar9) {
          func_0x00524738(uVar9 - (long)puVar8);
          pcVar18 = *(char **)pcVar14;
          lVar16 = lVar13;
        }
        else {
          lVar16 = lVar12;
          if (lVar13 != lVar12) {
            func_0x00524770();
            lVar16 = lVar13;
          }
        }
        lVar16 = lVar16 + uVar9;
        if (pcVar14[0x17] < '\0') {
          *(long *)(pcVar14 + 8) = lVar16;
        }
        else {
          pcVar14[0x17] = (byte)lVar16 & 0x7f;
        }
        pcVar18[lVar16] = '\0';
        pcVar18 = pcVar18 + lVar12;
        for (; pcVar15 != pcVar6; pcVar15 = pcVar15 + 1) {
          *pcVar18 = *pcVar15;
          pcVar18 = pcVar18 + 1;
        }
        if (pcVar14[0x17] < '\0') {
          pcVar14 = *(char **)pcVar14;
        }
        pcVar14 = pcVar14 + lVar12;
        goto LAB_0052419c;
      }
LAB_00524054:
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      while( true ) {
        cVar1 = SBORROW8((long)pcVar15,(long)pcVar6);
        cVar2 = (long)pcVar15 - (long)pcVar6 < 0;
        if (pcVar15 == pcVar6) break;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (&uStack_128,(long)*pcVar15);
        pcVar15 = pcVar15 + 1;
      }
      func_0x00524788();
      lVar13 = extraout_x11_00;
      puVar7 = extraout_x10_00;
      if (cVar2 == cVar1) {
        lVar13 = extraout_x8_02;
        puVar7 = &uStack_128;
      }
      lVar16 = (long)pcVar14[0x17];
      if (lVar16 < 0) {
        lVar16 = *(long *)(pcVar14 + 8);
        puVar8 = (undefined8 *)((*(ulong *)(pcVar14 + 0x10) & 0x7fffffffffffffff) - 1);
        if (uVar9 <= (ulong)((long)puVar8 - lVar16)) {
          pcVar15 = *(char **)pcVar14;
          goto LAB_00524140;
        }
LAB_005240dc:
        func_0x00524738(uVar9 - (long)puVar8);
        pcVar15 = *(char **)pcVar14;
        lVar17 = lVar16;
      }
      else {
        puVar8 = (undefined8 *)((long)&MACH_HEADER.sizeofcmds + 2);
        pcVar15 = pcVar14;
        if (0x16U - lVar16 < uVar9) goto LAB_005240dc;
LAB_00524140:
        lVar17 = lVar12;
        if (lVar16 != lVar12) {
          func_0x00524770();
          lVar17 = lVar16;
        }
      }
      lVar17 = lVar17 + uVar9;
      if (pcVar14[0x17] < '\0') {
        *(long *)(pcVar14 + 8) = lVar17;
      }
      else {
        pcVar14[0x17] = (byte)lVar17 & 0x7f;
      }
      pcVar15[lVar17] = '\0';
      if (lVar13 != 0) {
        _memmove(pcVar15 + lVar12,puVar7,lVar13);
        puVar8 = puVar7;
      }
      if (pcVar14[0x17] < '\0') {
        pcVar14 = *(char **)pcVar14;
      }
      pcVar14 = pcVar14 + lVar12;
      func_0x00524760();
      goto LAB_0052419c;
    }
  }
  pcVar14 = pcVar18 + lVar12;
LAB_0052419c:
  auVar21._8_8_ = puVar8;
  auVar21._0_8_ = pcVar14;
  return auVar21;
}



/* Entry: 00523d20; end: 00523dfb;  */

undefined1  [16] FUN_00523d20(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong uVar8;
  long extraout_x8_01;
  undefined8 *extraout_x10;
  undefined8 *extraout_x10_00;
  long extraout_x11;
  long extraout_x11_00;
  long lVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  char *pcVar14;
  char *pcVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 auStack_68 [3];
  char acStack_50 [24];
  undefined8 uStack_38;
  
  pcVar15 = param_1;
  func_0x00524720();
  iVar4 = (int)pcVar15;
  uStack_38 = extraout_x8;
  FUN_00523ea4();
  cVar2 = iVar4 < 0;
  uVar3 = iVar4 == 0;
  cVar1 = '\0';
  pcVar15 = param_2;
  if ((bool)uVar3) {
    pcVar15 = param_1;
    param_1 = param_2;
  }
  FUN_00523f14(auStack_68,pcVar15,pcVar15 + 0x10);
  func_0x00524788();
  lVar11 = extraout_x11;
  puVar5 = extraout_x10;
  if (cVar2 == cVar1) {
    lVar11 = extraout_x8_00;
    puVar5 = auStack_68;
  }
  pcVar15 = param_1 + 0x10;
  FUN_00523dfc(auStack_68,(long)puVar5 + lVar11);
  acStack_50[8] = -0x5e;
  acStack_50[9] = -0x20;
  acStack_50[10] = 'D';
  acStack_50[0xb] = '\\';
  acStack_50[0xc] = '?';
  acStack_50[0xd] = -0xd;
  acStack_50[0xe] = -0x33;
  acStack_50[0xf] = ' ';
  acStack_50[0] = '\a';
  acStack_50[1] = -0x6c;
  acStack_50[2] = '&';
  acStack_50[3] = -0x5f;
  acStack_50[4] = -0x6c;
  acStack_50[5] = 'K';
  acStack_50[6] = 'E';
  acStack_50[7] = 'G';
  pcVar14 = acStack_50;
  puVar5 = auStack_68;
  FUN_00523e04();
  pcVar10 = pcVar14;
  puVar6 = puVar5;
  func_0x00524760();
  func_0x0052470c(uStack_38);
  if ((bool)uVar3) {
    auVar16._8_8_ = puVar5;
    auVar16._0_8_ = pcVar14;
    return auVar16;
  }
  ___stack_chk_fail();
  func_0x00524760();
  func_0x00524768();
  uVar7 = (long)pcVar15 - (long)param_1;
  lVar11 = (long)pcVar10[0x17];
  if (lVar11 < 0) {
    pcVar14 = *(char **)pcVar10;
    lVar9 = (long)puVar6 - (long)pcVar14;
    if (uVar7 != 0) {
      lVar11 = *(long *)(pcVar10 + 8);
      if (param_1 < pcVar14 || pcVar14 + lVar11 + 1 <= param_1) {
        puVar6 = (undefined8 *)((*(ulong *)(pcVar10 + 0x10) & 0x7fffffffffffffff) - 1);
        uVar8 = (long)puVar6 - lVar11;
        goto LAB_0052403c;
      }
      goto LAB_00524054;
    }
  }
  else {
    lVar9 = (long)puVar6 - (long)pcVar10;
    pcVar14 = pcVar10;
    if (uVar7 != 0) {
      if (param_1 < pcVar10 || pcVar10 + lVar11 + 1 <= param_1) {
        puVar6 = (undefined8 *)((long)&MACH_HEADER.sizeofcmds + 2);
        uVar8 = 0x16 - lVar11;
LAB_0052403c:
        if (uVar8 < uVar7) {
          func_0x00524738(uVar7 - (long)puVar6);
          pcVar14 = *(char **)pcVar10;
          lVar12 = lVar11;
        }
        else {
          lVar12 = lVar9;
          if (lVar11 != lVar9) {
            func_0x00524770();
            lVar12 = lVar11;
          }
        }
        lVar12 = lVar12 + uVar7;
        if (pcVar10[0x17] < '\0') {
          *(long *)(pcVar10 + 8) = lVar12;
        }
        else {
          pcVar10[0x17] = (byte)lVar12 & 0x7f;
        }
        pcVar14[lVar12] = '\0';
        pcVar14 = pcVar14 + lVar9;
        for (; param_1 != pcVar15; param_1 = param_1 + 1) {
          *pcVar14 = *param_1;
          pcVar14 = pcVar14 + 1;
        }
        if (pcVar10[0x17] < '\0') {
          pcVar10 = *(char **)pcVar10;
        }
        pcVar10 = pcVar10 + lVar9;
        goto LAB_0052419c;
      }
LAB_00524054:
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      while( true ) {
        cVar1 = SBORROW8((long)param_1,(long)pcVar15);
        cVar2 = (long)param_1 - (long)pcVar15 < 0;
        if (param_1 == pcVar15) break;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (&uStack_d8,(long)*param_1);
        param_1 = param_1 + 1;
      }
      func_0x00524788();
      lVar11 = extraout_x11_00;
      puVar5 = extraout_x10_00;
      if (cVar2 == cVar1) {
        lVar11 = extraout_x8_01;
        puVar5 = &uStack_d8;
      }
      lVar12 = (long)pcVar10[0x17];
      if (lVar12 < 0) {
        lVar12 = *(long *)(pcVar10 + 8);
        puVar6 = (undefined8 *)((*(ulong *)(pcVar10 + 0x10) & 0x7fffffffffffffff) - 1);
        if (uVar7 <= (ulong)((long)puVar6 - lVar12)) {
          pcVar15 = *(char **)pcVar10;
          goto LAB_00524140;
        }
LAB_005240dc:
        func_0x00524738(uVar7 - (long)puVar6);
        pcVar15 = *(char **)pcVar10;
        lVar13 = lVar12;
      }
      else {
        puVar6 = (undefined8 *)((long)&MACH_HEADER.sizeofcmds + 2);
        pcVar15 = pcVar10;
        if (0x16U - lVar12 < uVar7) goto LAB_005240dc;
LAB_00524140:
        lVar13 = lVar9;
        if (lVar12 != lVar9) {
          func_0x00524770();
          lVar13 = lVar12;
        }
      }
      lVar13 = lVar13 + uVar7;
      if (pcVar10[0x17] < '\0') {
        *(long *)(pcVar10 + 8) = lVar13;
      }
      else {
        pcVar10[0x17] = (byte)lVar13 & 0x7f;
      }
      pcVar15[lVar13] = '\0';
      if (lVar11 != 0) {
        _memmove(pcVar15 + lVar9,puVar5,lVar11);
        puVar6 = puVar5;
      }
      if (pcVar10[0x17] < '\0') {
        pcVar10 = *(char **)pcVar10;
      }
      pcVar10 = pcVar10 + lVar9;
      func_0x00524760();
      goto LAB_0052419c;
    }
  }
  pcVar10 = pcVar14 + lVar9;
LAB_0052419c:
  auVar17._8_8_ = puVar6;
  auVar17._0_8_ = pcVar10;
  return auVar17;
}



/* Entry: 00523dfc; end: 00523e03;  */

char * FUN_00523dfc(char *param_1,long param_2,char *param_3,char *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long extraout_x8;
  undefined8 *extraout_x10;
  long extraout_x11;
  long lVar8;
  char *pcVar9;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar6 = (long)param_4 - (long)param_3;
  lVar8 = (long)param_1[0x17];
  if (lVar8 < 0) {
    pcVar9 = *(char **)param_1;
    param_2 = param_2 - (long)pcVar9;
    if (uVar6 == 0) goto LAB_005240ac;
    lVar8 = *(long *)(param_1 + 8);
    if (param_3 < pcVar9 || pcVar9 + lVar8 + 1 <= param_3) {
      lVar4 = (*(ulong *)(param_1 + 0x10) & 0x7fffffffffffffff) - 1;
      uVar7 = lVar4 - lVar8;
      goto LAB_0052403c;
    }
  }
  else {
    param_2 = param_2 - (long)param_1;
    pcVar9 = param_1;
    if (uVar6 == 0) {
LAB_005240ac:
      return pcVar9 + param_2;
    }
    if (param_3 < param_1 || param_1 + lVar8 + 1 <= param_3) {
      lVar4 = 0x16;
      uVar7 = 0x16 - lVar8;
LAB_0052403c:
      if (uVar7 < uVar6) {
        func_0x00524738(uVar6 - lVar4);
        pcVar9 = *(char **)param_1;
        lVar5 = lVar8;
      }
      else {
        lVar5 = param_2;
        if (lVar8 - param_2 != 0) {
          func_0x00524770(param_1,lVar4,lVar8 - param_2);
          lVar5 = lVar8;
        }
      }
      lVar5 = lVar5 + uVar6;
      if (param_1[0x17] < '\0') {
        *(long *)(param_1 + 8) = lVar5;
      }
      else {
        param_1[0x17] = (byte)lVar5 & 0x7f;
      }
      pcVar9[lVar5] = '\0';
      pcVar9 = pcVar9 + param_2;
      for (; param_3 != param_4; param_3 = param_3 + 1) {
        *pcVar9 = *param_3;
        pcVar9 = pcVar9 + 1;
      }
      if (param_1[0x17] < '\0') {
        param_1 = *(char **)param_1;
      }
      return param_1 + param_2;
    }
  }
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  while( true ) {
    cVar2 = SBORROW8((long)param_3,(long)param_4);
    cVar3 = (long)param_3 - (long)param_4 < 0;
    if (param_3 == param_4) break;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (&uStack_68,(long)*param_3);
    param_3 = param_3 + 1;
  }
  func_0x00524788();
  lVar8 = extraout_x11;
  puVar1 = extraout_x10;
  if (cVar3 == cVar2) {
    lVar8 = extraout_x8;
    puVar1 = &uStack_68;
  }
  lVar4 = (long)param_1[0x17];
  if (lVar4 < 0) {
    lVar4 = *(long *)(param_1 + 8);
    lVar5 = (*(ulong *)(param_1 + 0x10) & 0x7fffffffffffffff) - 1;
    if ((ulong)(lVar5 - lVar4) < uVar6) goto LAB_005240dc;
    pcVar9 = *(char **)param_1;
  }
  else {
    lVar5 = 0x16;
    pcVar9 = param_1;
    if (0x16U - lVar4 < uVar6) {
LAB_005240dc:
      func_0x00524738(uVar6 - lVar5);
      pcVar9 = *(char **)param_1;
      lVar5 = lVar4;
      goto LAB_00524154;
    }
  }
  lVar5 = param_2;
  if (lVar4 != param_2) {
    func_0x00524770();
    lVar5 = lVar4;
  }
LAB_00524154:
  lVar5 = lVar5 + uVar6;
  if (param_1[0x17] < '\0') {
    *(long *)(param_1 + 8) = lVar5;
  }
  else {
    param_1[0x17] = (byte)lVar5 & 0x7f;
  }
  pcVar9[lVar5] = '\0';
  if (lVar8 != 0) {
    _memmove(pcVar9 + param_2,puVar1,lVar8);
  }
  if (param_1[0x17] < '\0') {
    param_1 = *(char **)param_1;
  }
  func_0x00524760();
  return param_1 + param_2;
}



/* Entry: 00523e04; end: 00523ea3;  */

void FUN_00523e04(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined8 extraout_x8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  func_0x00524720();
  uStack_98 = 0x1032547698badcfe;
  uStack_a0 = 0xefcdab8967452301;
  uStack_90 = 0xc3d2e1f0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_28 = extraout_x8;
  FUN_0052438c(&uStack_a0,param_1,param_1 + 0x10);
  bVar2 = *(byte *)((long)param_2 + 0x17);
  uVar4 = bVar2 == 0;
  uVar1 = param_2[1];
  puVar3 = (undefined8 *)*param_2;
  if (-1 < (char)bVar2) {
    uVar1 = (ulong)bVar2;
    puVar3 = param_2;
  }
  FUN_0052438c(&uStack_a0,puVar3,(long)puVar3 + uVar1);
  FUN_005242fc(param_1,&uStack_a0);
  func_0x0052470c(uStack_28);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    FUN_00523ecc();
    return;
  }
  return;
}



/* Entry: 00523ea4; end: 00523ecb;  */

void FUN_00523ea4(void)

{
  FUN_00523ecc();
  return;
}



/* Entry: 00523ecc; end: 00523f13;  */

bool FUN_00523ecc(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  bool bVar2;
  
  param_2 = param_2 - param_1;
  param_4 = param_4 - param_3;
  lVar1 = param_4;
  if (param_2 <= param_4) {
    lVar1 = param_2;
  }
  _memcmp(param_1,param_3,lVar1);
  bVar2 = param_2 < param_4;
  if ((int)param_1 != 0) {
    bVar2 = (int)param_1 < 0;
  }
  return bVar2;
}



/* Entry: 00523f14; end: 00523f1b;  */

char * FUN_00523f14(char *param_1,char *param_2,char *param_3,undefined8 param_4,ulong param_5)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  long extraout_x8;
  undefined8 *extraout_x10;
  long extraout_x11;
  long lVar8;
  long lVar9;
  char *pcVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  pcVar6 = param_3 + -(long)param_2;
  if (pcVar6 < (char *)0x7ffffffffffffff7) {
    pcVar10 = param_1;
    if ((char *)((long)&MACH_HEADER.sizeofcmds + 2) < pcVar6) {
      uVar7 = 0x19;
      if (((ulong)pcVar6 | 7) != 0x17) {
        uVar7 = ((ulong)pcVar6 | 7) + 1;
      }
      FUN_0040d754();
      *(char **)(param_1 + 8) = pcVar6;
      *(ulong *)(param_1 + 0x10) = uVar7 | 0x8000000000000000;
      *(char **)param_1 = pcVar10;
      param_1 = pcVar10;
    }
    else {
      param_1[0x17] = (char)pcVar6;
    }
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *param_1 = *param_2;
      param_1 = param_1 + 1;
    }
    *param_1 = '\0';
    return pcVar10;
  }
  FUN_0040d740();
  lVar9 = (long)param_1[0x17];
  if (lVar9 < 0) {
    pcVar10 = *(char **)param_1;
    lVar8 = (long)param_2 - (long)pcVar10;
    if (param_5 == 0) goto LAB_005240ac;
    lVar9 = *(long *)(param_1 + 8);
    if (param_3 < pcVar10 || pcVar10 + lVar9 + 1 <= param_3) {
      lVar4 = (*(ulong *)(param_1 + 0x10) & 0x7fffffffffffffff) - 1;
      uVar7 = lVar4 - lVar9;
      goto LAB_0052403c;
    }
  }
  else {
    lVar8 = (long)param_2 - (long)param_1;
    pcVar10 = param_1;
    if (param_5 == 0) {
LAB_005240ac:
      return pcVar10 + lVar8;
    }
    if (param_3 < param_1 || param_1 + lVar9 + 1 <= param_3) {
      lVar4 = 0x16;
      uVar7 = 0x16 - lVar9;
LAB_0052403c:
      if (uVar7 < param_5) {
        func_0x00524738(param_5 - lVar4);
        pcVar10 = *(char **)param_1;
        lVar4 = lVar9;
      }
      else {
        lVar4 = lVar8;
        if (lVar9 != lVar8) {
          func_0x00524770();
          lVar4 = lVar9;
        }
      }
      lVar4 = lVar4 + param_5;
      if (param_1[0x17] < '\0') {
        *(long *)(param_1 + 8) = lVar4;
      }
      else {
        param_1[0x17] = (byte)lVar4 & 0x7f;
      }
      pcVar10[lVar4] = '\0';
      pcVar10 = pcVar10 + lVar8;
      for (; param_3 != pcVar6; param_3 = param_3 + 1) {
        *pcVar10 = *param_3;
        pcVar10 = pcVar10 + 1;
      }
      if (param_1[0x17] < '\0') {
        param_1 = *(char **)param_1;
      }
      return param_1 + lVar8;
    }
  }
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  while( true ) {
    cVar2 = SBORROW8((long)param_3,(long)pcVar6);
    cVar3 = (long)param_3 - (long)pcVar6 < 0;
    if (param_3 == pcVar6) break;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (&uStack_98,(long)*param_3);
    param_3 = param_3 + 1;
  }
  func_0x00524788();
  lVar9 = extraout_x11;
  puVar1 = extraout_x10;
  if (cVar3 == cVar2) {
    lVar9 = extraout_x8;
    puVar1 = &uStack_98;
  }
  lVar4 = (long)param_1[0x17];
  if (lVar4 < 0) {
    lVar4 = *(long *)(param_1 + 8);
    lVar5 = (*(ulong *)(param_1 + 0x10) & 0x7fffffffffffffff) - 1;
    if ((ulong)(lVar5 - lVar4) < param_5) goto LAB_005240dc;
    pcVar6 = *(char **)param_1;
  }
  else {
    lVar5 = 0x16;
    pcVar6 = param_1;
    if (0x16U - lVar4 < param_5) {
LAB_005240dc:
      func_0x00524738(param_5 - lVar5);
      pcVar6 = *(char **)param_1;
      lVar5 = lVar4;
      goto LAB_00524154;
    }
  }
  lVar5 = lVar8;
  if (lVar4 != lVar8) {
    func_0x00524770();
    lVar5 = lVar4;
  }
LAB_00524154:
  lVar5 = lVar5 + param_5;
  if (param_1[0x17] < '\0') {
    *(long *)(param_1 + 8) = lVar5;
  }
  else {
    param_1[0x17] = (byte)lVar5 & 0x7f;
  }
  pcVar6[lVar5] = '\0';
  if (lVar9 != 0) {
    _memmove(pcVar6 + lVar8,puVar1,lVar9);
  }
  if (param_1[0x17] < '\0') {
    param_1 = *(char **)param_1;
  }
  func_0x00524760();
  return param_1 + lVar8;
}



/* Entry: 00523f1c; end: 00523fa7;  */

char * FUN_00523f1c(char *param_1,char *param_2,char *param_3,char *param_4,ulong param_5)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x8;
  undefined8 *extraout_x10;
  long extraout_x11;
  long lVar7;
  long lVar8;
  char *pcVar9;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if (param_4 < (char *)0x7ffffffffffffff7) {
    pcVar9 = param_1;
    if ((char *)((long)&MACH_HEADER.sizeofcmds + 2) < param_4) {
      uVar6 = 0x19;
      if (((ulong)param_4 | 7) != 0x17) {
        uVar6 = ((ulong)param_4 | 7) + 1;
      }
      FUN_0040d754();
      *(char **)(param_1 + 8) = param_4;
      *(ulong *)(param_1 + 0x10) = uVar6 | 0x8000000000000000;
      *(char **)param_1 = pcVar9;
      param_1 = pcVar9;
    }
    else {
      param_1[0x17] = (char)param_4;
    }
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *param_1 = *param_2;
      param_1 = param_1 + 1;
    }
    *param_1 = '\0';
    return pcVar9;
  }
  FUN_0040d740();
  lVar8 = (long)param_1[0x17];
  if (lVar8 < 0) {
    pcVar9 = *(char **)param_1;
    lVar7 = (long)param_2 - (long)pcVar9;
    if (param_5 == 0) goto LAB_005240ac;
    lVar8 = *(long *)(param_1 + 8);
    if (param_3 < pcVar9 || pcVar9 + lVar8 + 1 <= param_3) {
      lVar4 = (*(ulong *)(param_1 + 0x10) & 0x7fffffffffffffff) - 1;
      uVar6 = lVar4 - lVar8;
      goto LAB_0052403c;
    }
  }
  else {
    lVar7 = (long)param_2 - (long)param_1;
    pcVar9 = param_1;
    if (param_5 == 0) {
LAB_005240ac:
      return pcVar9 + lVar7;
    }
    if (param_3 < param_1 || param_1 + lVar8 + 1 <= param_3) {
      lVar4 = 0x16;
      uVar6 = 0x16 - lVar8;
LAB_0052403c:
      if (uVar6 < param_5) {
        func_0x00524738(param_5 - lVar4);
        pcVar9 = *(char **)param_1;
        lVar4 = lVar8;
      }
      else {
        lVar4 = lVar7;
        if (lVar8 != lVar7) {
          func_0x00524770();
          lVar4 = lVar8;
        }
      }
      lVar4 = lVar4 + param_5;
      if (param_1[0x17] < '\0') {
        *(long *)(param_1 + 8) = lVar4;
      }
      else {
        param_1[0x17] = (byte)lVar4 & 0x7f;
      }
      pcVar9[lVar4] = '\0';
      pcVar9 = pcVar9 + lVar7;
      for (; param_3 != param_4; param_3 = param_3 + 1) {
        *pcVar9 = *param_3;
        pcVar9 = pcVar9 + 1;
      }
      if (param_1[0x17] < '\0') {
        param_1 = *(char **)param_1;
      }
      return param_1 + lVar7;
    }
  }
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  while( true ) {
    cVar2 = SBORROW8((long)param_3,(long)param_4);
    cVar3 = (long)param_3 - (long)param_4 < 0;
    if (param_3 == param_4) break;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (&uStack_98,(long)*param_3);
    param_3 = param_3 + 1;
  }
  func_0x00524788();
  lVar8 = extraout_x11;
  puVar1 = extraout_x10;
  if (cVar3 == cVar2) {
    lVar8 = extraout_x8;
    puVar1 = &uStack_98;
  }
  lVar4 = (long)param_1[0x17];
  if (lVar4 < 0) {
    lVar4 = *(long *)(param_1 + 8);
    lVar5 = (*(ulong *)(param_1 + 0x10) & 0x7fffffffffffffff) - 1;
    if ((ulong)(lVar5 - lVar4) < param_5) goto LAB_005240dc;
    pcVar9 = *(char **)param_1;
  }
  else {
    lVar5 = 0x16;
    pcVar9 = param_1;
    if (0x16U - lVar4 < param_5) {
LAB_005240dc:
      func_0x00524738(param_5 - lVar5);
      pcVar9 = *(char **)param_1;
      lVar5 = lVar4;
      goto LAB_00524154;
    }
  }
  lVar5 = lVar7;
  if (lVar4 != lVar7) {
    func_0x00524770();
    lVar5 = lVar4;
  }
LAB_00524154:
  lVar5 = lVar5 + param_5;
  if (param_1[0x17] < '\0') {
    *(long *)(param_1 + 8) = lVar5;
  }
  else {
    param_1[0x17] = (byte)lVar5 & 0x7f;
  }
  pcVar9[lVar5] = '\0';
  if (lVar8 != 0) {
    _memmove(pcVar9 + lVar7,puVar1,lVar8);
  }
  if (param_1[0x17] < '\0') {
    param_1 = *(char **)param_1;
  }
  func_0x00524760();
  return param_1 + lVar7;
}



/* Entry: 00523fa8; end: 005241f3;  */

char * FUN_00523fa8(char *param_1,long param_2,char *param_3,char *param_4,ulong param_5)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x8;
  undefined8 *extraout_x10;
  long extraout_x11;
  long lVar7;
  char *pcVar8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar7 = (long)param_1[0x17];
  if (lVar7 < 0) {
    pcVar8 = *(char **)param_1;
    param_2 = param_2 - (long)pcVar8;
    if (param_5 == 0) goto LAB_005240ac;
    lVar7 = *(long *)(param_1 + 8);
    if (param_3 < pcVar8 || pcVar8 + lVar7 + 1 <= param_3) {
      lVar4 = (*(ulong *)(param_1 + 0x10) & 0x7fffffffffffffff) - 1;
      uVar6 = lVar4 - lVar7;
      goto LAB_0052403c;
    }
  }
  else {
    param_2 = param_2 - (long)param_1;
    pcVar8 = param_1;
    if (param_5 == 0) {
LAB_005240ac:
      return pcVar8 + param_2;
    }
    if (param_3 < param_1 || param_1 + lVar7 + 1 <= param_3) {
      lVar4 = 0x16;
      uVar6 = 0x16 - lVar7;
LAB_0052403c:
      if (uVar6 < param_5) {
        func_0x00524738(param_5 - lVar4);
        pcVar8 = *(char **)param_1;
        lVar5 = lVar7;
      }
      else {
        lVar5 = param_2;
        if (lVar7 - param_2 != 0) {
          func_0x00524770(param_1,lVar4,lVar7 - param_2);
          lVar5 = lVar7;
        }
      }
      lVar5 = lVar5 + param_5;
      if (param_1[0x17] < '\0') {
        *(long *)(param_1 + 8) = lVar5;
      }
      else {
        param_1[0x17] = (byte)lVar5 & 0x7f;
      }
      pcVar8[lVar5] = '\0';
      pcVar8 = pcVar8 + param_2;
      for (; param_3 != param_4; param_3 = param_3 + 1) {
        *pcVar8 = *param_3;
        pcVar8 = pcVar8 + 1;
      }
      if (param_1[0x17] < '\0') {
        param_1 = *(char **)param_1;
      }
      return param_1 + param_2;
    }
  }
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  while( true ) {
    cVar2 = SBORROW8((long)param_3,(long)param_4);
    cVar3 = (long)param_3 - (long)param_4 < 0;
    if (param_3 == param_4) break;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (&uStack_68,(long)*param_3);
    param_3 = param_3 + 1;
  }
  func_0x00524788();
  lVar7 = extraout_x11;
  puVar1 = extraout_x10;
  if (cVar3 == cVar2) {
    lVar7 = extraout_x8;
    puVar1 = &uStack_68;
  }
  lVar4 = (long)param_1[0x17];
  if (lVar4 < 0) {
    lVar4 = *(long *)(param_1 + 8);
    lVar5 = (*(ulong *)(param_1 + 0x10) & 0x7fffffffffffffff) - 1;
    if ((ulong)(lVar5 - lVar4) < param_5) goto LAB_005240dc;
    pcVar8 = *(char **)param_1;
  }
  else {
    lVar5 = 0x16;
    pcVar8 = param_1;
    if (0x16U - lVar4 < param_5) {
LAB_005240dc:
      func_0x00524738(param_5 - lVar5);
      pcVar8 = *(char **)param_1;
      lVar5 = lVar4;
      goto LAB_00524154;
    }
  }
  lVar5 = param_2;
  if (lVar4 != param_2) {
    func_0x00524770();
    lVar5 = lVar4;
  }
LAB_00524154:
  lVar5 = lVar5 + param_5;
  if (param_1[0x17] < '\0') {
    *(long *)(param_1 + 8) = lVar5;
  }
  else {
    param_1[0x17] = (byte)lVar5 & 0x7f;
  }
  pcVar8[lVar5] = '\0';
  if (lVar7 != 0) {
    _memmove(pcVar8 + param_2,puVar1,lVar7);
  }
  if (param_1[0x17] < '\0') {
    param_1 = *(char **)param_1;
  }
  func_0x00524760();
  return param_1 + param_2;
}



/* Entry: 005241f4; end: 0052423f;  */

undefined8 * FUN_005241f4(undefined8 *param_1,undefined8 param_2)

{
  segment_command *psVar1;
  
  psVar1 = &segment_command_00000020;
  __Znwm();
  *(undefined ***)psVar1 = &PTR_FUN_00a00818;
  *(undefined8 *)psVar1->segname = param_2;
  psVar1->vmaddr = 0xffffffffffffffff;
  psVar1->segname[8] = '\0';
  psVar1->segname[9] = '\0';
  psVar1->segname[10] = '\0';
  psVar1->segname[0xb] = '\0';
  psVar1->segname[0xc] = '\0';
  psVar1->segname[0xd] = '\0';
  psVar1->segname[0xe] = '\0';
  psVar1->segname[0xf] = '\0';
  *param_1 = psVar1;
  return param_1;
}



/* Entry: 00524240; end: 0052425f;  */

void FUN_00524240(void)

{
  return;
}



/* Entry: 00524260; end: 005242d3;  */

ulong FUN_00524260(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_3 - param_2;
  if (uVar2 != 0) {
    if (uVar2 == 0xffffffffffffffff) {
      FUN_005242d4();
      param_3 = param_3 + param_2;
    }
    else {
      uVar1 = uVar2 + 1;
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = 0xffffffffffffffff / uVar1;
      }
      if (~(uVar3 * uVar1) == uVar2) {
        uVar3 = uVar3 + 1;
      }
      do {
        FUN_005242d4();
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = param_3 / uVar3;
        }
      } while (uVar2 < uVar1);
      param_3 = uVar1 + param_2;
    }
  }
  return param_3;
}



/* Entry: 005242d4; end: 005242fb;  */

undefined8 FUN_005242d4(void)

{
  undefined8 uStack_18;
  
  FUN_006e92d4(&uStack_18,8);
  return uStack_18;
}



/* Entry: 005242fc; end: 0052438b;  */

void FUN_005242fc(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 extraout_x8;
  long lVar4;
  undefined1 *puVar5;
  uint auStack_4c [5];
  undefined6 uStack_38;
  byte bStack_32;
  undefined1 uStack_31;
  byte bStack_30;
  undefined7 uStack_2f;
  undefined8 uStack_28;
  
  func_0x00524720(param_2);
  uStack_28 = extraout_x8;
  FUN_00524634();
  for (lVar4 = 0; bVar2 = lVar4 == 0x10, !bVar2; lVar4 = lVar4 + 4) {
    uVar1 = (*(uint *)((long)auStack_4c + lVar4) & 0xff00ff00) >> 8 |
            (*(uint *)((long)auStack_4c + lVar4) & 0xff00ff) << 8;
    *(uint *)((long)&uStack_38 + lVar4) = uVar1 >> 0x10 | uVar1 << 0x10;
  }
  uVar3 = CONCAT17(uStack_31,CONCAT16(bStack_32,uStack_38)) & 0xff0fffffffffffff | 0x50000000000000;
  puVar5 = (undefined1 *)(CONCAT71(uStack_2f,bStack_30) & 0xffffffffffffff3f | 0x80);
  bStack_32 = bStack_32 & 0xf | 0x50;
  bStack_30 = bStack_30 & 0x3f | 0x80;
  func_0x0052470c(uStack_28,uVar3);
  if (bVar2) {
    return;
  }
  ___stack_chk_fail();
  for (; puVar5 != param_3; puVar5 = puVar5 + 1) {
    FUN_005243c8(uVar3,*puVar5);
  }
  return;
}



/* Entry: 0052438c; end: 005243c7;  */

void FUN_0052438c(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    FUN_005243c8(param_1,*param_2);
  }
  return;
}



/* Entry: 005243c8; end: 00524477;  */

void FUN_005243c8(long param_1)

{
  code *pcVar1;
  char *pcStack_48;
  char *pcStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  
  FUN_00524478();
  if (*(ulong *)(param_1 + 0x60) < 0xfffffff8) {
    *(ulong *)(param_1 + 0x60) = *(ulong *)(param_1 + 0x60) + 8;
  }
  else {
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (0xfffffffe < *(ulong *)(param_1 + 0x68)) {
      __ZNSt13runtime_errorC1EPKc(auStack_30,"sha1 too many bytes");
      pcStack_48 = 
      "external/snap_client++snap_dependencies_extension+boost/src/boost/uuid/detail/sha1.hpp";
      pcStack_40 = "void boost::uuids::detail::sha1::process_byte(unsigned char)";
      uStack_38 = 0x68;
      FUN_004c6b74(auStack_30,&pcStack_48);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x524468);
      (*pcVar1)();
    }
    *(ulong *)(param_1 + 0x68) = *(ulong *)(param_1 + 0x68) + 1;
  }
  return;
}



/* Entry: 00524478; end: 00524633;  */

void FUN_00524478(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  undefined8 extraout_x8;
  long lVar13;
  ulong uVar14;
  uint auStack_178 [80];
  undefined8 uStack_38;
  
  func_0x00524720();
  uStack_38 = extraout_x8;
  lVar13 = *(long *)(param_1 + 0x16);
  *(long *)(param_1 + 0x16) = lVar13 + 1;
  *(char *)((long)param_1 + lVar13 + 0x14) = (char)param_2;
  bVar6 = false;
  if (*(long *)(param_1 + 0x16) == 0x40) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    for (lVar13 = 0; lVar13 != 0x40; lVar13 = lVar13 + 4) {
      uVar5 = *(uint *)((long)param_1 + lVar13 + 0x14);
      uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      *(uint *)((long)auStack_178 + lVar13) = uVar5 >> 0x10 | uVar5 << 0x10;
    }
    for (lVar13 = 0; lVar13 != 0x100; lVar13 = lVar13 + 4) {
      uVar5 = *(uint *)((long)auStack_178 + lVar13 + 0x20) ^
              *(uint *)((long)auStack_178 + lVar13 + 0x34) ^
              *(uint *)((long)auStack_178 + lVar13 + 8) ^ *(uint *)((long)auStack_178 + lVar13);
      *(uint *)((long)auStack_178 + lVar13 + 0x40) = uVar5 >> 0x1f | uVar5 << 1;
    }
    uVar14 = 0;
    param_2 = (uint *)(ulong)param_1[3];
    puVar11 = (uint *)(ulong)param_1[4];
    uVar9 = *param_1;
    uVar8 = param_1[1];
    uVar5 = param_1[2];
    while( true ) {
      uVar12 = uVar9;
      puVar7 = param_2;
      param_2 = (uint *)(ulong)uVar5;
      uVar9 = (uint)puVar7;
      iVar10 = (int)puVar11;
      if (uVar14 == 0x50) break;
      uVar4 = uVar5 ^ uVar8 ^ uVar9;
      iVar3 = -0x359d3e2a;
      uVar2 = uVar4;
      if (uVar14 < 0x3c) {
        iVar3 = -0x70e44324;
        uVar2 = (uVar9 | uVar5) & uVar8 | uVar9 & uVar5;
      }
      if (uVar14 < 0x28) {
        iVar3 = 0x6ed9eba1;
        uVar2 = uVar4;
      }
      if (uVar14 < 0x14) {
        uVar2 = uVar9 & (uVar8 ^ 0xffffffff) | uVar5 & uVar8;
      }
      if (uVar14 < 0x14) {
        iVar3 = 0x5a827999;
      }
      puVar1 = auStack_178 + uVar14;
      uVar5 = uVar8 >> 2 | uVar8 << 0x1e;
      uVar14 = uVar14 + 1;
      puVar11 = puVar7;
      uVar9 = iVar10 + (uVar12 >> 0x1b | uVar12 << 5) + uVar2 + iVar3 + *puVar1;
      uVar8 = uVar12;
    }
    *param_1 = uVar12 + *param_1;
    param_1[1] = uVar8 + param_1[1];
    param_1[2] = uVar5 + param_1[2];
    param_1[3] = uVar9 + param_1[3];
    param_1[4] = iVar10 + param_1[4];
    bVar6 = true;
  }
  func_0x0052470c(uStack_38);
  if (bVar6) {
    return;
  }
  ___stack_chk_fail();
  FUN_00524478();
  uVar14 = *(ulong *)(param_1 + 0x16);
  if (uVar14 < 0x39) {
    while (uVar14 < 0x38) {
      func_0x00524754();
      uVar14 = *(ulong *)(param_1 + 0x16);
    }
  }
  else {
    do {
      func_0x00524754();
    } while (*(long *)(param_1 + 0x16) != 0);
    uVar14 = 0;
    while (uVar14 < 0x38) {
      func_0x00524754();
      uVar14 = *(ulong *)(param_1 + 0x16);
    }
  }
  func_0x00524730();
  func_0x00524730();
  func_0x00524730();
  func_0x00524730();
  func_0x00524730();
  func_0x00524730();
  func_0x00524730();
  func_0x00524730();
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  param_2[3] = param_1[3];
  param_2[4] = param_1[4];
  return;
}



/* Entry: 00524634; end: 0052470b;  */

void FUN_00524634(undefined4 *param_1,undefined4 *param_2)

{
  ulong uVar1;
  
  FUN_00524478(param_1,0x80);
  uVar1 = *(ulong *)(param_1 + 0x16);
  if (uVar1 < 0x39) {
    while (uVar1 < 0x38) {
      func_0x00524754();
      uVar1 = *(ulong *)(param_1 + 0x16);
    }
  }
  else {
    do {
      func_0x00524754();
    } while (*(long *)(param_1 + 0x16) != 0);
    uVar1 = 0;
    while (uVar1 < 0x38) {
      func_0x00524754();
      uVar1 = *(ulong *)(param_1 + 0x16);
    }
  }
  func_0x00524730();
  func_0x00524730();
  func_0x00524730();
  func_0x00524730();
  func_0x00524730();
  func_0x00524730();
  func_0x00524730();
  func_0x00524730();
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  param_2[3] = param_1[3];
  param_2[4] = param_1[4];
  return;
}



/* Entry: 0052470c; end: 0052479b;  */

void FUN_0052470c(void)

{
  return;
}



/* Entry: 0052479c; end: 0052480b;  */

void FUN_0052479c(long param_1,code *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long *plVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  ulong uVar8;
  long extraout_x9;
  long lVar9;
  ulong uVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  code *pcStack_38;
  
  uVar2 = *(uint *)(param_1 + 0x5c) <= *(uint *)(param_2 + 0x30);
  uVar3 = *(uint *)(param_2 + 0x30) == *(uint *)(param_1 + 0x5c);
  if ((bool)uVar3) {
    func_0x00525798();
    FUN_0052be74();
    plVar4 = (long *)(unaff_x20 + 8);
    pcStack_38 = param_2;
    FUN_0052480c(plVar4,&pcStack_38);
    func_0x005256f0();
    if ((bool)uVar2 && !(bool)uVar3) {
      puVar5 = (ulong *)(plVar4 + 2);
      puVar11 = (undefined8 *)plVar4[1];
      if (puVar11 < (undefined8 *)*puVar5) {
        puVar13 = puVar11 + 1;
        *puVar11 = *(undefined8 *)(unaff_x19 + 0x18);
      }
      else {
        lVar6 = *plVar4;
        lVar12 = (long)puVar11 - lVar6;
        lVar9 = lVar12 >> 3;
        uVar1 = lVar9 + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_005250a4();
          pcStack_38 = FUN_005250a4;
          func_0x005257c8();
          FUN_005250d4();
          return;
        }
        uVar8 = (long)*puVar5 - lVar6;
        uVar10 = (long)uVar8 >> 2;
        if (uVar10 <= uVar1) {
          uVar10 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          uVar10 = 0x1fffffffffffffff;
        }
        if (uVar10 == 0) {
          puVar5 = (ulong *)0x0;
          lVar7 = lVar12;
        }
        else {
          FUN_005250b0();
          lVar6 = *plVar4;
          lVar9 = plVar4[1] - lVar6 >> 3;
          lVar7 = plVar4[1] - lVar6;
        }
        puVar11 = (undefined8 *)((long)puVar5 + lVar12);
        puVar13 = puVar11 + 1;
        *puVar11 = *(undefined8 *)(unaff_x19 + 0x18);
        _memcpy(puVar11 + -lVar9,lVar6,lVar7);
        lVar6 = *plVar4;
        *plVar4 = (long)(puVar11 + -lVar9);
        plVar4[1] = (long)puVar13;
        plVar4[2] = (long)(puVar5 + uVar10);
        if (lVar6 != 0) {
          __ZdlPv();
        }
      }
      plVar4[1] = (long)puVar13;
      return;
    }
    func_0x00525760();
    func_0x00525744();
    if (!(bool)uVar2) {
      *(undefined8 *)(extraout_x9 + extraout_x8 * 8) = *(undefined8 *)(unaff_x19 + 0x18);
    }
  }
  return;
}



/* Entry: 0052480c; end: 00524ba3;  */

qword * FUN_0052480c(long *param_1,ulong *param_2)

{
  qword *pqVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  qword *pqVar7;
  qword *pqVar8;
  ulong uVar9;
  ulong uVar10;
  qword *pqVar11;
  ulong unaff_x21;
  ulong uVar12;
  ulong uVar13;
  qword *pqStack_58;
  qword *pqStack_50;
  undefined8 uStack_48;
  
  uVar12 = *param_2;
  uVar13 = param_1[1];
  if (uVar13 != 0) {
    uVar4 = uVar13 - 1;
    if ((uVar13 & uVar4) == 0) {
      unaff_x21 = uVar4 & uVar12;
    }
    else {
      unaff_x21 = uVar12;
      if (uVar13 <= uVar12) {
        uVar5 = 0;
        if (uVar13 != 0) {
          uVar5 = uVar12 / uVar13;
        }
        unaff_x21 = uVar12 - uVar5 * uVar13;
      }
    }
    pqVar11 = *(qword **)(*param_1 + unaff_x21 * 8);
    if (pqVar11 != (qword *)0x0) {
      do {
        while( true ) {
          pqVar11 = (qword *)*pqVar11;
          if (pqVar11 == (qword *)0x0) goto LAB_005248b8;
          uVar5 = pqVar11[1];
          if (uVar5 != uVar12) break;
          if (pqVar11[2] == uVar12) goto LAB_00524b70;
        }
        if ((uVar13 & uVar4) == 0) {
          uVar5 = uVar5 & uVar4;
        }
        else if (uVar13 <= uVar5) {
          uVar6 = 0;
          if (uVar13 != 0) {
            uVar6 = uVar5 / uVar13;
          }
          uVar5 = uVar5 - uVar6 * uVar13;
        }
      } while (uVar5 == unaff_x21);
    }
  }
LAB_005248b8:
  pqVar1 = (qword *)(param_1 + 2);
  pqVar11 = &segment_command_00000020.vmaddr;
  __Znwm();
  uStack_48 = 1;
  *pqVar11 = 0;
  pqVar11[1] = uVar12;
  pqVar11[2] = uVar12;
  *(undefined4 *)(pqVar11 + 3) = 0;
  pqVar11[5] = 0;
  pqVar11[6] = 0;
  pqVar11[4] = 0;
  pqStack_50 = pqVar1;
  if ((uVar13 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar13))
  goto LAB_00524af8;
  uVar4 = 1;
  if (2 < uVar13) {
    uVar4 = (ulong)((uVar13 & uVar13 - 1) != 0);
  }
  uVar4 = uVar4 | uVar13 << 1;
  uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar4 <= uVar5) {
    uVar4 = uVar5;
  }
  pqStack_58 = pqVar11;
  if (uVar4 - 1 == 0) {
    uVar4 = 2;
  }
  else if ((uVar4 & uVar4 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar13 = param_1[1];
  }
  if (uVar13 < uVar4) {
LAB_0052496c:
    if (uVar4 >> 0x3d != 0) {
      FUN_0040cee8();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x524b94);
      (*pcVar2)();
    }
    lVar3 = uVar4 << 3;
    __Znwm(lVar3);
    FUN_0052562c(param_1,lVar3);
    param_1[1] = uVar4;
    lVar3 = *param_1;
    for (uVar13 = 0; uVar4 != uVar13; uVar13 = uVar13 + 1) {
      *(undefined8 *)(lVar3 + uVar13 * 8) = 0;
    }
    pqVar7 = (qword *)*pqVar1;
    uVar13 = uVar4;
    if (pqVar7 != (qword *)0x0) {
      uVar9 = pqVar7[1];
      uVar6 = uVar4 - 1;
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar9 / uVar4;
      }
      uVar10 = uVar9;
      if (uVar4 <= uVar9) {
        uVar10 = uVar9 - uVar5 * uVar4;
      }
      if ((uVar4 & uVar6) == 0) {
        uVar10 = uVar9 & uVar6;
      }
      *(qword **)(lVar3 + uVar10 * 8) = pqVar1;
      while (pqVar8 = pqVar7, pqVar7 = (qword *)*pqVar8, pqVar7 != (qword *)0x0) {
        uVar5 = pqVar7[1];
        if ((uVar4 & uVar6) == 0) {
          uVar5 = uVar5 & uVar6;
        }
        else if (uVar4 <= uVar5) {
          uVar9 = 0;
          if (uVar4 != 0) {
            uVar9 = uVar5 / uVar4;
          }
          uVar5 = uVar5 - uVar9 * uVar4;
        }
        if (uVar5 != uVar10) {
          if (*(long *)(lVar3 + uVar5 * 8) == 0) {
            *(qword **)(lVar3 + uVar5 * 8) = pqVar8;
            uVar10 = uVar5;
          }
          else {
            *pqVar8 = *pqVar7;
            *pqVar7 = **(qword **)(lVar3 + uVar5 * 8);
            **(qword **)(lVar3 + uVar5 * 8) = (qword)pqVar7;
            pqVar7 = pqVar8;
          }
        }
      }
    }
  }
  else if (uVar4 < uVar13) {
    uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar13 < 3) || ((uVar13 & uVar13 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar5) {
      uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
    }
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
    if (uVar4 < uVar13) {
      if (uVar4 != 0) goto LAB_0052496c;
      FUN_0052562c(param_1,0);
      param_1[1] = 0;
      uVar13 = 0;
    }
    else {
      uVar13 = param_1[1];
    }
  }
  if ((uVar13 & uVar13 - 1) == 0) {
    unaff_x21 = uVar13 - 1 & uVar12;
  }
  else {
    unaff_x21 = uVar12;
    if (uVar13 <= uVar12) {
      uVar4 = 0;
      if (uVar13 != 0) {
        uVar4 = uVar12 / uVar13;
      }
      unaff_x21 = uVar12 - uVar4 * uVar13;
    }
  }
LAB_00524af8:
  lVar3 = *param_1;
  pqVar7 = *(qword **)(lVar3 + unaff_x21 * 8);
  if (pqVar7 == (qword *)0x0) {
    *pqVar11 = *pqVar1;
    *pqVar1 = (qword)pqVar11;
    *(qword **)(lVar3 + unaff_x21 * 8) = pqVar1;
    if (*pqVar11 != 0) {
      uVar12 = *(ulong *)(*pqVar11 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar12 = uVar12 & uVar13 - 1;
      }
      else if (uVar13 <= uVar12) {
        uVar4 = 0;
        if (uVar13 != 0) {
          uVar4 = uVar12 / uVar13;
        }
        uVar12 = uVar12 - uVar4 * uVar13;
      }
      *(qword **)(lVar3 + uVar12 * 8) = pqVar11;
    }
  }
  else {
    *pqVar11 = *pqVar7;
    *pqVar7 = (qword)pqVar11;
  }
  pqStack_58 = (qword *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_00525644(&pqStack_58);
LAB_00524b70:
  return pqVar11 + 3;
}



/* Entry: 00524ba4; end: 00524c17;  */

void FUN_00524ba4(long param_1,code *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long *plVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  ulong uVar8;
  long extraout_x9;
  long lVar9;
  ulong uVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  code *pcStack_38;
  
  uVar2 = *(uint *)(param_1 + 0x5c) <= **(uint **)param_2;
  uVar3 = **(uint **)param_2 == *(uint *)(param_1 + 0x5c);
  if ((bool)uVar3) {
    func_0x00525798();
    FUN_0052ac00();
    plVar4 = (long *)(unaff_x20 + 0x30);
    pcStack_38 = param_2;
    FUN_0052480c(plVar4,&pcStack_38);
    func_0x005256f0();
    if ((bool)uVar2 && !(bool)uVar3) {
      puVar5 = (ulong *)(plVar4 + 2);
      puVar11 = (undefined8 *)plVar4[1];
      if (puVar11 < (undefined8 *)*puVar5) {
        puVar13 = puVar11 + 1;
        *puVar11 = *(undefined8 *)(unaff_x19 + 0x20);
      }
      else {
        lVar6 = *plVar4;
        lVar12 = (long)puVar11 - lVar6;
        lVar9 = lVar12 >> 3;
        uVar1 = lVar9 + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_005250a4();
          pcStack_38 = FUN_005250a4;
          func_0x005257c8();
          FUN_005250d4();
          return;
        }
        uVar8 = (long)*puVar5 - lVar6;
        uVar10 = (long)uVar8 >> 2;
        if (uVar10 <= uVar1) {
          uVar10 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar8) {
          uVar10 = 0x1fffffffffffffff;
        }
        if (uVar10 == 0) {
          puVar5 = (ulong *)0x0;
          lVar7 = lVar12;
        }
        else {
          FUN_005250b0();
          lVar6 = *plVar4;
          lVar9 = plVar4[1] - lVar6 >> 3;
          lVar7 = plVar4[1] - lVar6;
        }
        puVar11 = (undefined8 *)((long)puVar5 + lVar12);
        puVar13 = puVar11 + 1;
        *puVar11 = *(undefined8 *)(unaff_x19 + 0x20);
        _memcpy(puVar11 + -lVar9,lVar6,lVar7);
        lVar6 = *plVar4;
        *plVar4 = (long)(puVar11 + -lVar9);
        plVar4[1] = (long)puVar13;
        plVar4[2] = (long)(puVar5 + uVar10);
        if (lVar6 != 0) {
          __ZdlPv();
        }
      }
      plVar4[1] = (long)puVar13;
      return;
    }
    func_0x00525760();
    func_0x00525744();
    if (!(bool)uVar2) {
      *(undefined8 *)(extraout_x9 + extraout_x8 * 8) = *(undefined8 *)(unaff_x19 + 0x20);
    }
  }
  return;
}



/* Entry: 00524c18; end: 00524c67;  */

void FUN_00524c18(long param_1)

{
  undefined8 extraout_x8;
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  long *plVar3;
  
  func_0x005257f8();
  FUN_00524c68(extraout_x8,*(undefined8 *)(param_1 + 0x20));
  plVar3 = (long *)(unaff_x20 + 0x18);
  while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
    func_0x00525730();
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x005257ec();
    unaff_x19[2] = 0;
    lVar2 = unaff_x19[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*unaff_x19 + lVar1 * 8) = 0;
    }
    unaff_x19[3] = 0;
  }
  return;
}



/* Entry: 00524c68; end: 00524cef;  */

void FUN_00524c68(long *param_1,ulong param_2)

{
  long *plVar1;
  long extraout_x8;
  long lVar2;
  undefined1 auStack_b8 [16];
  long lStack_a8;
  undefined1 auStack_48 [40];
  
  if ((ulong)((param_1[2] - *param_1) / 0x28) < param_2) {
    if (0x666666666666666 < param_2) {
      func_0x005250f0();
      func_0x00525790();
      func_0x00525718();
      if ((ulong)param_1[1] < (ulong)param_1[2]) {
        func_0x005256bc();
        lVar2 = extraout_x8 + 0x28;
        param_1[1] = lVar2;
      }
      else {
        plVar1 = param_1;
        FUN_0052544c(param_1,(param_1[1] - *param_1) / 0x28 + 1);
        FUN_0052517c(auStack_b8,plVar1,(param_1[1] - *param_1) / 0x28,param_1 + 2);
        func_0x005256bc(lStack_a8);
        lStack_a8 = lStack_a8 + 0x28;
        func_0x005257d4();
        lVar2 = param_1[1];
        func_0x00525790();
      }
      param_1[1] = lVar2;
      return;
    }
    FUN_0052517c(auStack_48,param_2,(param_1[1] - *param_1) / 0x28);
    func_0x005257d4();
    func_0x00525790();
  }
  return;
}



/* Entry: 00524cf0; end: 00524dbb;  */

void FUN_00524cf0(long *param_1)

{
  long *plVar1;
  long extraout_x8;
  long lVar2;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    func_0x005256bc();
    lVar2 = extraout_x8 + 0x28;
    param_1[1] = lVar2;
  }
  else {
    plVar1 = param_1;
    FUN_0052544c(param_1,(param_1[1] - *param_1) / 0x28 + 1);
    FUN_0052517c(auStack_68,plVar1,(param_1[1] - *param_1) / 0x28,param_1 + 2);
    func_0x005256bc(lStack_58);
    lStack_58 = lStack_58 + 0x28;
    func_0x005257d4();
    lVar2 = param_1[1];
    func_0x00525790();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 00524dbc; end: 00524e0b;  */

void FUN_00524dbc(long param_1)

{
  undefined8 extraout_x8;
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  long *plVar3;
  
  func_0x005257f8();
  FUN_00524c68(extraout_x8,*(undefined8 *)(param_1 + 0x48));
  plVar3 = (long *)(unaff_x20 + 0x40);
  while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
    func_0x00525730();
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    func_0x005257ec();
    unaff_x19[2] = 0;
    lVar2 = unaff_x19[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*unaff_x19 + lVar1 * 8) = 0;
    }
    unaff_x19[3] = 0;
  }
  return;
}



/* Entry: 00524e0c; end: 00524eb3;  */

void FUN_00524e0c(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_24 [4];
  
  if ((bRam0000000000b61c20 & 1) == 0) {
    iVar1 = 0xb61c20;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_00524eb4(auStack_24);
      puVar2 = auStack_24;
      __ZNSt3__113random_deviceclEv(puVar2);
      FUN_00525688(0xb61c28,puVar2);
      __ZNSt3__113random_deviceD1Ev(auStack_24);
      ___cxa_guard_release(0xb61c20);
    }
  }
  FUN_00524f10(0xb61c28);
  return;
}



/* Entry: 00524eb4; end: 00524f0f;  */

undefined8 FUN_00524eb4(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  FUN_00425cb4(auStack_38,"/dev/urandom");
  __ZNSt3__113random_deviceC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
            (param_1,auStack_38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return param_1;
}



/* Entry: 00524f10; end: 00524f8f;  */

uint FUN_00524f10(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(param_1 + 0x9c0);
  uVar4 = (lVar3 + 1U) % 0x270;
  uVar1 = *(uint *)(param_1 + uVar4 * 4);
  uVar2 = 0x9908b0df;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  uVar2 = uVar2 ^ *(uint *)(param_1 + ((lVar3 + 0x18dU) % 0x270) * 4) ^
          (uVar1 & 0x7ffffffe | *(uint *)(param_1 + lVar3 * 4) & 0x80000000) >> 1;
  *(uint *)(param_1 + lVar3 * 4) = uVar2;
  uVar2 = uVar2 ^ uVar2 >> 0xb;
  *(ulong *)(param_1 + 0x9c0) = uVar4;
  uVar2 = (uVar2 & 0x13a58ad) << 7 ^ uVar2;
  uVar2 = (uVar2 & 0x1df8c) << 0xf ^ uVar2;
  return uVar2 ^ uVar2 >> 0x12;
}



/* Entry: 00524f90; end: 00524fb7;  */

/* WARNING: Possible PIC construction at 0x00524fa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00524fa8) */

void FUN_00524f90(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[4] != 0) {
    func_0x005257ec();
    param_1[2] = 0;
    lVar2 = param_1[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 00524fb8; end: 00524fbb;  */

undefined8 * FUN_00524fb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a00848;
  func_0x0052557c(param_1 + 6);
  func_0x0052557c(param_1 + 1);
  return param_1;
}



/* Entry: 00524fbc; end: 00524fcf;  */

void FUN_00524fbc(void)

{
  func_0x00525540();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00524fd0; end: 005250a3;  */

void FUN_00524fd0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  
  puVar2 = (ulong *)(param_1 + 2);
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 < (undefined8 *)*puVar2) {
    puVar10 = puVar8 + 1;
    *puVar8 = *param_2;
  }
  else {
    lVar3 = *param_1;
    lVar9 = (long)puVar8 - lVar3;
    lVar6 = lVar9 >> 3;
    uVar1 = lVar6 + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_005250a4();
      func_0x005257c8();
      FUN_005250d4();
      return;
    }
    uVar5 = (long)*puVar2 - lVar3;
    uVar7 = (long)uVar5 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      puVar2 = (ulong *)0x0;
      lVar4 = lVar9;
    }
    else {
      FUN_005250b0();
      lVar3 = *param_1;
      lVar6 = param_1[1] - lVar3 >> 3;
      lVar4 = param_1[1] - lVar3;
    }
    puVar8 = (undefined8 *)((long)puVar2 + lVar9);
    puVar10 = puVar8 + 1;
    *puVar8 = *param_2;
    _memcpy(puVar8 + -lVar6,lVar3,lVar4);
    lVar3 = *param_1;
    *param_1 = (long)(puVar8 + -lVar6);
    param_1[1] = (long)puVar10;
    param_1[2] = (long)(puVar2 + uVar7);
    if (lVar3 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar10;
  return;
}



/* Entry: 005250a4; end: 005250af;  */

void FUN_005250a4(void)

{
  func_0x005257c8();
  FUN_005250d4();
  return;
}



/* Entry: 005250b0; end: 005250d3;  */

void FUN_005250b0(void)

{
  FUN_005250d4();
  return;
}



/* Entry: 005250d4; end: 005250fb;  */

void FUN_005250d4(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  if (param_2 >> 0x3d != 0) {
    FUN_0040cee8();
    func_0x005257c8();
    func_0x00525798();
    lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x28) * 0x28;
    FUN_00525218(param_1 + 2,*param_1,param_1[1],lVar2);
    unaff_x19[1] = lVar2;
    uVar1 = *unaff_x20;
    unaff_x20[1] = uVar1;
    *unaff_x20 = unaff_x19[1];
    unaff_x19[1] = uVar1;
    uVar1 = unaff_x20[1];
    unaff_x20[1] = unaff_x19[2];
    unaff_x19[2] = uVar1;
    uVar1 = unaff_x20[2];
    unaff_x20[2] = unaff_x19[3];
    unaff_x19[3] = uVar1;
    *unaff_x19 = unaff_x19[1];
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_0099c630)(param_2 << 3);
  return;
}



/* Entry: 005250fc; end: 0052517b;  */

void FUN_005250fc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00525798();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x28) * 0x28;
  FUN_00525218(param_1 + 2,*param_1,param_1[1],lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 0052517c; end: 005251eb;  */

long * FUN_0052517c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x005251c8();
  }
  lVar1 = param_4 + param_3 * 0x28;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x28;
  return param_1;
}



/* Entry: 005251ec; end: 00525217;  */

void FUN_005251ec(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x666666666666667) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(param_2 * 0x28);
    return;
  }
  FUN_0040cee8();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x28) {
    FUN_005252ec(param_4,uVar1);
    param_4 = lStack_48 + 0x28;
  }
  uStack_58 = 1;
  FUN_005252bc(param_1,param_2,param_3);
  FUN_00525364(&uStack_70);
  return;
}



/* Entry: 00525218; end: 005252bb;  */

void FUN_00525218(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x28) {
    FUN_005252ec(param_4,lVar1);
    param_4 = lStack_38 + 0x28;
  }
  uStack_48 = 1;
  FUN_005252bc(param_1,param_2,param_3);
  FUN_00525364(&uStack_60);
  return;
}



/* Entry: 005252bc; end: 005252eb;  */

void FUN_005252bc(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x28) {
    FUN_00525320();
  }
  return;
}



/* Entry: 005252ec; end: 0052531f;  */

void FUN_005252ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar1 = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[3] = uVar1;
  return;
}



/* Entry: 00525320; end: 0052534b;  */

undefined8 FUN_00525320(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_0052534c(&uStack_28);
  return param_1;
}



/* Entry: 0052534c; end: 00525363;  */

void FUN_0052534c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00525364; end: 00525393;  */

long FUN_00525364(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_00525394(param_1);
  }
  return param_1;
}



/* Entry: 00525394; end: 005253b3;  */

void FUN_00525394(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x28;
    FUN_00525320();
  }
  return;
}



/* Entry: 005253b4; end: 0052540f;  */

void FUN_005253b4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5
                 )

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x28;
    FUN_00525320();
  }
  return;
}



/* Entry: 00525410; end: 00525417;  */

void FUN_00525410(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00525798(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x28;
    FUN_00525320();
  }
  return;
}



/* Entry: 00525418; end: 0052544b;  */

void FUN_00525418(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00525798();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x28;
    FUN_00525320();
  }
  return;
}



/* Entry: 0052544c; end: 0052549b;  */

long * FUN_0052544c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plStack_38;
  
  if ((long *)0x666666666666666 < param_2) {
    func_0x005250f0();
    plStack_38 = param_1;
    func_0x005254c8(&plStack_38);
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x28;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x333333333333332 < uVar1) {
    plVar2 = (long *)0x666666666666666;
  }
  return plVar2;
}



/* Entry: 0052549c; end: 00525503;  */

undefined8 FUN_0052549c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x005254c8(&uStack_28);
  return param_1;
}



/* Entry: 00525504; end: 0052550b;  */

void FUN_00525504(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00525798(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x28;
    FUN_00525320();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 0052550c; end: 0052562b;  */

void FUN_0052550c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00525798();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x28;
    FUN_00525320();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 0052562c; end: 00525643;  */

void FUN_0052562c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00525644; end: 00525687;  */

long * FUN_00525644(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_00525320(lVar1 + 0x20);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 00525688; end: 0052580b;  */

void FUN_00525688(uint *param_1,uint param_2)

{
  long lVar1;
  
  *param_1 = param_2;
  for (lVar1 = 1; lVar1 != 0x270; lVar1 = lVar1 + 1) {
    param_2 = (int)lVar1 + (param_2 ^ param_2 >> 0x1e) * 0x6c078965;
    param_1[lVar1] = param_2;
  }
  param_1[0x270] = 0;
  param_1[0x271] = 0;
  return;
}



/* Entry: 0052580c; end: 0052585b;  */

void FUN_0052580c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  if (*(int *)(param_2 + 0x30) != 0) {
    return;
  }
  lVar2 = *(long *)(param_2 + 0x18);
  FUN_0052be74();
  plVar1 = (long *)(param_1 + 8);
  lStack_28 = param_2;
  FUN_0052585c(plVar1,&lStack_28);
  *plVar1 = *plVar1 + lVar2;
  return;
}



/* Entry: 0052585c; end: 00525be7;  */

qword * FUN_0052585c(long *param_1,ulong *param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  segment_command *psVar14;
  ulong unaff_x21;
  ulong uVar15;
  ulong uVar16;
  segment_command *psStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  uVar15 = *param_2;
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    uVar4 = uVar16 - 1;
    if ((uVar16 & uVar4) == 0) {
      unaff_x21 = uVar4 & uVar15;
    }
    else {
      unaff_x21 = uVar15;
      if (uVar16 <= uVar15) {
        uVar6 = 0;
        if (uVar16 != 0) {
          uVar6 = uVar15 / uVar16;
        }
        unaff_x21 = uVar15 - uVar6 * uVar16;
      }
    }
    psVar14 = *(segment_command **)(*param_1 + unaff_x21 * 8);
    if (psVar14 != (segment_command *)0x0) {
      do {
        while( true ) {
          psVar14 = *(segment_command **)psVar14;
          if (psVar14 == (segment_command *)0x0) goto LAB_00525908;
          uVar6 = *(ulong *)psVar14->segname;
          if (uVar6 != uVar15) break;
          if (*(ulong *)(psVar14->segname + 8) == uVar15) goto LAB_00525bb4;
        }
        if ((uVar16 & uVar4) == 0) {
          uVar6 = uVar6 & uVar4;
        }
        else if (uVar16 <= uVar6) {
          uVar7 = 0;
          if (uVar16 != 0) {
            uVar7 = uVar6 / uVar16;
          }
          uVar6 = uVar6 - uVar7 * uVar16;
        }
      } while (uVar6 == unaff_x21);
    }
  }
LAB_00525908:
  plVar1 = param_1 + 2;
  psVar14 = &segment_command_00000020;
  __Znwm();
  uStack_48 = 1;
  psVar14->cmd = 0;
  psVar14->cmdsize = 0;
  *(ulong *)psVar14->segname = uVar15;
  *(ulong *)(psVar14->segname + 8) = uVar15;
  psVar14->vmaddr = 0;
  plStack_50 = plVar1;
  if ((uVar16 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar16))
  goto LAB_00525b3c;
  uVar4 = 1;
  if (2 < uVar16) {
    uVar4 = (ulong)((uVar16 & uVar16 - 1) != 0);
  }
  uVar4 = uVar4 | uVar16 << 1;
  uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar4 <= uVar6) {
    uVar4 = uVar6;
  }
  psStack_58 = psVar14;
  if (uVar4 - 1 == 0) {
    uVar4 = 2;
  }
  else if ((uVar4 & uVar4 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar16 = param_1[1];
  }
  if (uVar16 < uVar4) {
LAB_005259b0:
    if (uVar4 >> 0x3d != 0) {
      FUN_0040cee8();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x525bd8);
      (*pcVar2)();
    }
    lVar3 = uVar4 << 3;
    __Znwm(lVar3);
    FUN_00526080(param_1,lVar3);
    param_1[1] = uVar4;
    lVar3 = *param_1;
    for (uVar16 = 0; uVar4 != uVar16; uVar16 = uVar16 + 1) {
      *(undefined8 *)(lVar3 + uVar16 * 8) = 0;
    }
    plVar10 = (long *)*plVar1;
    uVar16 = uVar4;
    if (plVar10 != (long *)0x0) {
      uVar12 = plVar10[1];
      uVar7 = uVar4 - 1;
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = uVar12 / uVar4;
      }
      uVar13 = uVar12;
      if (uVar4 <= uVar12) {
        uVar13 = uVar12 - uVar6 * uVar4;
      }
      if ((uVar4 & uVar7) == 0) {
        uVar13 = uVar12 & uVar7;
      }
      *(long **)(lVar3 + uVar13 * 8) = plVar1;
      while (plVar11 = plVar10, plVar10 = (long *)*plVar11, plVar10 != (long *)0x0) {
        uVar6 = plVar10[1];
        if ((uVar4 & uVar7) == 0) {
          uVar6 = uVar6 & uVar7;
        }
        else if (uVar4 <= uVar6) {
          uVar12 = 0;
          if (uVar4 != 0) {
            uVar12 = uVar6 / uVar4;
          }
          uVar6 = uVar6 - uVar12 * uVar4;
        }
        if (uVar6 != uVar13) {
          if (*(long *)(lVar3 + uVar6 * 8) == 0) {
            *(long **)(lVar3 + uVar6 * 8) = plVar11;
            uVar13 = uVar6;
          }
          else {
            *plVar11 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + uVar6 * 8);
            **(long **)(lVar3 + uVar6 * 8) = (long)plVar10;
            plVar10 = plVar11;
          }
        }
      }
    }
  }
  else if (uVar4 < uVar16) {
    uVar6 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar6) {
      uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
    }
    if (uVar4 <= uVar6) {
      uVar4 = uVar6;
    }
    if (uVar4 < uVar16) {
      if (uVar4 != 0) goto LAB_005259b0;
      FUN_00526080(param_1,0);
      param_1[1] = 0;
      uVar16 = 0;
    }
    else {
      uVar16 = param_1[1];
    }
  }
  if ((uVar16 & uVar16 - 1) == 0) {
    unaff_x21 = uVar16 - 1 & uVar15;
  }
  else {
    unaff_x21 = uVar15;
    if (uVar16 <= uVar15) {
      uVar4 = 0;
      if (uVar16 != 0) {
        uVar4 = uVar15 / uVar16;
      }
      unaff_x21 = uVar15 - uVar4 * uVar16;
    }
  }
LAB_00525b3c:
  lVar3 = *param_1;
  puVar8 = *(undefined8 **)(lVar3 + unaff_x21 * 8);
  if (puVar8 == (undefined8 *)0x0) {
    lVar9 = *plVar1;
    psVar14->cmd = (int)lVar9;
    psVar14->cmdsize = (int)((ulong)lVar9 >> 0x20);
    *plVar1 = (long)psVar14;
    *(long **)(lVar3 + unaff_x21 * 8) = plVar1;
    if (*(long *)psVar14 != 0) {
      uVar15 = *(ulong *)(*(long *)psVar14 + 8);
      if ((uVar16 & uVar16 - 1) == 0) {
        uVar15 = uVar15 & uVar16 - 1;
      }
      else if (uVar16 <= uVar15) {
        uVar4 = 0;
        if (uVar16 != 0) {
          uVar4 = uVar15 / uVar16;
        }
        uVar15 = uVar15 - uVar4 * uVar16;
      }
      *(segment_command **)(lVar3 + uVar15 * 8) = psVar14;
    }
  }
  else {
    uVar5 = *puVar8;
    psVar14->cmd = (int)uVar5;
    psVar14->cmdsize = (int)((ulong)uVar5 >> 0x20);
    *puVar8 = psVar14;
  }
  psStack_58 = (segment_command *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_00526098(&psStack_58);
LAB_00525bb4:
  return &psVar14->vmaddr;
}



/* Entry: 00525be8; end: 00525c3b;  */

void FUN_00525be8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  if (*(int *)*param_2 != 0) {
    return;
  }
  lVar2 = param_2[4];
  FUN_0052ac00();
  plVar1 = (long *)(param_1 + 0x30);
  puStack_28 = param_2;
  FUN_0052585c(plVar1,&puStack_28);
  *plVar1 = *plVar1 + lVar2;
  return;
}


