/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0067f3fc; end: 0067f497;  */

qword * FUN_0067f3fc(qword *param_1,long param_2)

{
  qword *pqVar1;
  long lVar2;
  
  if (param_1 == (qword *)0x0) {
    pqVar1 = &segment_command_00000020.vmsize;
    __Znwm();
  }
  else {
    pqVar1 = param_1;
    func_0x006808b8();
  }
  pqVar1[1] = (qword)param_1;
  *pqVar1 = (qword)&PTR_FUN_00a0e868;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0067ff60();
  }
  func_0x00680604();
  FUN_0067a12c();
  lVar2 = param_2 + 0x30;
  func_0x00680348();
  pqVar1[6] = lVar2;
  if (((byte)pqVar1[2] >> 1 & 1) == 0) {
    param_1 = (qword *)0x0;
  }
  else {
    func_0x0067fa44(param_1,*(undefined8 *)(param_2 + 0x38));
  }
  pqVar1[7] = (qword)param_1;
  return pqVar1;
}



/* Entry: 0067f498; end: 0067f563;  */

undefined8 * FUN_0067f498(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0068070c();
  }
  else {
    func_0x00680714();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_00a0e778;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0067ff60();
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  lVar2 = param_2 + 0x18;
  func_0x00680340();
  puVar1[3] = lVar2;
  lVar2 = param_2 + 0x20;
  func_0x00680340();
  puVar1[4] = lVar2;
  lVar2 = param_2 + 0x28;
  func_0x00680340();
  puVar1[5] = lVar2;
  lVar2 = param_2 + 0x30;
  func_0x00680340();
  puVar1[6] = lVar2;
  lVar2 = param_2 + 0x38;
  func_0x00680340();
  puVar1[7] = lVar2;
  if ((*(byte *)(puVar1 + 2) >> 5 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_0067f898(param_1,*(undefined8 *)(param_2 + 0x40));
  }
  puVar1[8] = param_1;
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(puVar1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  puVar1[10] = uVar4;
  puVar1[9] = uVar3;
  return puVar1;
}



/* Entry: 0067f564; end: 0067f5c7;  */

long FUN_0067f564(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  func_0x0068031c();
  if (param_1 == 0) {
    __Znwm(0x70);
  }
  else {
    func_0x006808cc();
  }
  func_0x006804ac();
  func_0x0067ffd4();
  func_0x0068048c(&PTR_FUN_00a0e5e8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  func_0x0067feac();
  FUN_0067e9d0(unaff_x22 + 0x20);
  lVar1 = unaff_x19 + 0x48;
  func_0x0067e9f0();
  func_0x0067ffc4();
  if ((*(byte *)(unaff_x19 + 0x28) & 1) == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00680484();
  }
  *(long *)(unaff_x19 + 0x60) = lVar1;
  *(undefined4 *)(unaff_x19 + 0x68) = *(undefined4 *)(unaff_x20 + 0x68);
  return unaff_x19;
}



/* Entry: 0067f5c8; end: 0067f6c7;  */

void FUN_0067f5c8(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x0068031c();
  if (param_1 == 0) {
    func_0x006805f4();
  }
  else {
    func_0x006805fc();
  }
  func_0x006804f4();
  func_0x0068050c(&PTR_FUN_00a0e818);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(unaff_x21 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    FUN_0067f564();
  }
  *(undefined8 *)(unaff_x21 + 0x18) = unaff_x20;
  *(undefined8 *)(unaff_x21 + 0x20) = *(undefined8 *)(unaff_x19 + 0x20);
  return;
}



/* Entry: 0067f6c8; end: 0067f72b;  */

segment_command * FUN_0067f6c8(segment_command *param_1)

{
  segment_command *psVar1;
  
  if (param_1 == (segment_command *)0x0) {
    psVar1 = &segment_command_00000020;
    __Znwm();
  }
  else {
    psVar1 = param_1;
    func_0x00680868();
  }
  *(undefined ***)psVar1 = &PTR_FUN_00a0e228;
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
  func_0x00677df0();
  return psVar1;
}



/* Entry: 0067f72c; end: 0067f75f;  */

long FUN_0067f72c(long param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0068031c();
  if (param_1 == 0) {
    func_0x006808a0();
  }
  else {
    func_0x006808a8();
  }
  func_0x006804ac();
  func_0x0067ffd4();
  func_0x0068048c(&PTR_FUN_00a0e138);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  *(undefined8 *)(unaff_x19 + 0x10) = unaff_x21;
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x20 + 0x28);
  *(undefined4 *)(unaff_x19 + 0x2c) = 0;
  FUN_00534b28((undefined8 *)(unaff_x19 + 0x10),unaff_x19,unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
  return unaff_x19;
}



/* Entry: 0067f760; end: 0067f76b;  */

void FUN_0067f760(long *param_1)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  FUN_0054d5a8();
  plVar2 = param_1;
  func_0x0054d67c();
  func_0x0054d6a8();
  puVar4 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x0054d6b0();
    param_1 = param_1 + (int)plVar2;
    puVar4 = unaff_x25 + (int)plVar2;
  }
  lVar3 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, puVar4 < unaff_x25 + unaff_x26; puVar4 = puVar4 + 1) {
    plVar2 = (long *)lVar3;
    FUN_0067f76c(lVar3,*puVar4);
    *param_1 = (long)plVar2;
    param_1 = param_1 + 1;
  }
  func_0x0054d60c();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 0067f76c; end: 0067f7d7;  */

void FUN_0067f76c(long param_1)

{
  undefined2 uVar1;
  long lVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x0068031c();
  if (param_1 == 0) {
    func_0x006803c8();
  }
  else {
    func_0x00680310();
  }
  func_0x006804f4();
  func_0x0068050c(&PTR_FUN_00a0e188);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  func_0x00680050();
  *(long *)(unaff_x21 + 0x18) = param_1;
  lVar2 = unaff_x19 + 0x20;
  func_0x00680348();
  *(long *)(unaff_x21 + 0x20) = lVar2;
  uVar1 = *(undefined2 *)(unaff_x19 + 0x2c);
  *(undefined4 *)(unaff_x21 + 0x28) = *(undefined4 *)(unaff_x19 + 0x28);
  *(undefined2 *)(unaff_x21 + 0x2c) = uVar1;
  return;
}



/* Entry: 0067f7d8; end: 0067f7e3;  */

void FUN_0067f7d8(long *param_1)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  FUN_0054d5a8();
  plVar2 = param_1;
  func_0x0054d67c();
  func_0x0054d6a8();
  puVar4 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x0054d6b0();
    param_1 = param_1 + (int)plVar2;
    puVar4 = unaff_x25 + (int)plVar2;
  }
  lVar3 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, puVar4 < unaff_x25 + unaff_x26; puVar4 = puVar4 + 1) {
    plVar2 = (long *)lVar3;
    FUN_0067f7e4(lVar3,*puVar4);
    *param_1 = (long)plVar2;
    param_1 = param_1 + 1;
  }
  func_0x0054d60c();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 0067f7e4; end: 0067f897;  */

void FUN_0067f7e4(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0068031c();
  if (param_1 == 0) {
    func_0x0068070c();
  }
  else {
    func_0x00680714();
  }
  func_0x006804f4();
  func_0x0068050c(&PTR_FUN_00a0e278);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  *(undefined4 *)(unaff_x21 + 0x10) = *(undefined4 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x21 + 0x1c) = 0;
  *(undefined8 *)(unaff_x21 + 0x14) = 0;
  *(undefined4 *)(unaff_x21 + 0x24) = 0;
  *(undefined8 *)(unaff_x21 + 0x28) = unaff_x20;
  FUN_0067d3c8(unaff_x21 + 0x18,unaff_x19 + 0x18);
  lVar1 = unaff_x19 + 0x30;
  func_0x00680348();
  *(long *)(unaff_x21 + 0x30) = lVar1;
  lVar1 = unaff_x19 + 0x38;
  func_0x00680348();
  *(long *)(unaff_x21 + 0x38) = lVar1;
  lVar1 = unaff_x19 + 0x40;
  func_0x00680348();
  *(long *)(unaff_x21 + 0x40) = lVar1;
  uVar3 = *(undefined8 *)(unaff_x19 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x48);
  *(undefined8 *)(unaff_x21 + 0x58) = *(undefined8 *)(unaff_x19 + 0x58);
  *(undefined8 *)(unaff_x21 + 0x50) = uVar3;
  *(undefined8 *)(unaff_x21 + 0x48) = uVar2;
  return;
}



/* Entry: 0067f898; end: 0067f93f;  */

long FUN_0067f898(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x0068031c();
  if (param_1 == 0) {
    __Znwm(0x98);
  }
  else {
    func_0x005510c4();
  }
  func_0x006804ac();
  func_0x0067ffd4();
  func_0x0068048c(&PTR_FUN_00a0e548);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  func_0x0067feac();
  func_0x00680888(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(undefined8 *)(unaff_x19 + 0x50) = unaff_x21;
  FUN_0067beb0((undefined8 *)(unaff_x19 + 0x40),unaff_x20 + 0x40);
  lVar2 = unaff_x19 + 0x58;
  func_0x0067e9f0();
  func_0x0067ffc4();
  uVar1 = *(uint *)(unaff_x19 + 0x28);
  if ((uVar1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00680484();
  }
  *(long *)(unaff_x19 + 0x70) = lVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    FUN_0067fb38();
  }
  *(undefined8 *)(unaff_x19 + 0x78) = unaff_x21;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined4 *)(unaff_x19 + 0x90) = *(undefined4 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x19 + 0x88) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x80) = uVar3;
  return unaff_x19;
}



/* Entry: 0067f940; end: 0067f9ab;  */

void FUN_0067f940(long param_1)

{
  ulong extraout_x8;
  long unaff_x21;
  
  func_0x0068031c();
  if (param_1 == 0) {
    func_0x006803c8();
  }
  else {
    func_0x00680310();
  }
  func_0x006804f4();
  func_0x0068050c(&PTR_FUN_00a0e7c8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  func_0x00680050();
  *(long *)(unaff_x21 + 0x18) = param_1;
  if ((*(byte *)(unaff_x21 + 0x10) >> 1 & 1) != 0) {
    FUN_0067fa10();
  }
  func_0x006809bc();
  return;
}



/* Entry: 0067f9ac; end: 0067fa0f;  */

segment_command * FUN_0067f9ac(segment_command *param_1)

{
  segment_command *psVar1;
  
  if (param_1 == (segment_command *)0x0) {
    psVar1 = &segment_command_00000020;
    __Znwm();
  }
  else {
    psVar1 = param_1;
    func_0x00680868();
  }
  *(undefined ***)psVar1 = &PTR_FUN_00a0e1d8;
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
  func_0x00679660();
  return psVar1;
}



/* Entry: 0067fa10; end: 0067fa73;  */

long FUN_0067fa10(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x0068031c();
  if (param_1 == 0) {
    func_0x0068070c();
  }
  else {
    param_1 = unaff_x20;
    func_0x00680714();
  }
  func_0x006804ac();
  func_0x0067ffd4();
  func_0x0068048c(&PTR_FUN_00a0e638);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  func_0x0067feac();
  func_0x006800c0();
  func_0x0067ffc4();
  uVar1 = *(uint *)(unaff_x19 + 0x28);
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x006802f8();
  }
  *(long *)(unaff_x19 + 0x48) = param_1;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    FUN_0067fb38();
  }
  *(undefined8 *)(unaff_x19 + 0x50) = unaff_x21;
  *(undefined2 *)(unaff_x19 + 0x58) = *(undefined2 *)(unaff_x20 + 0x58);
  return unaff_x19;
}



/* Entry: 0067fa74; end: 0067fb07;  */

void FUN_0067fa74(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x0068031c();
  if (param_1 == 0) {
    param_1 = 0x40;
    __Znwm();
  }
  else {
    func_0x006808b8();
  }
  func_0x006804f4();
  func_0x0068050c(&PTR_FUN_00a0e728);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  func_0x00680050();
  *(long *)(unaff_x21 + 0x18) = param_1;
  lVar1 = unaff_x19 + 0x20;
  func_0x00680348();
  *(long *)(unaff_x21 + 0x20) = lVar1;
  lVar1 = unaff_x19 + 0x28;
  func_0x00680348();
  *(long *)(unaff_x21 + 0x28) = lVar1;
  if ((*(byte *)(unaff_x21 + 0x10) >> 3 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    FUN_0067fb08();
  }
  *(undefined8 *)(unaff_x21 + 0x30) = unaff_x20;
  *(undefined2 *)(unaff_x21 + 0x38) = *(undefined2 *)(unaff_x19 + 0x38);
  return;
}



/* Entry: 0067fb08; end: 0067fb37;  */

long FUN_0067fb08(long param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0068031c();
  if (param_1 == 0) {
    func_0x006806b8();
  }
  else {
    func_0x006803a0();
  }
  func_0x006804ac();
  func_0x0067ffd4();
  func_0x0068048c(&PTR_FUN_00a0e458);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  func_0x0067feac();
  func_0x006800c0();
  func_0x0067ffc4();
  if ((*(byte *)(unaff_x19 + 0x28) & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x006802f8();
  }
  *(long *)(unaff_x19 + 0x48) = param_1;
  *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(unaff_x20 + 0x50);
  return unaff_x19;
}



/* Entry: 0067fb38; end: 0067fb97;  */

void FUN_0067fb38(long param_1)

{
  undefined4 uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x0068031c();
  if (param_1 == 0) {
    func_0x006803c8();
  }
  else {
    func_0x00680310();
  }
  func_0x006804f4();
  func_0x0068050c(&PTR_FUN_00a0e098);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  func_0x00680050();
  *(long *)(unaff_x21 + 0x18) = param_1;
  uVar1 = *(undefined4 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x21 + 0x20) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined4 *)(unaff_x21 + 0x28) = uVar1;
  return;
}



/* Entry: 0067fb98; end: 0067fbcb;  */

long FUN_0067fb98(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0068031c();
  if (param_1 == 0) {
    func_0x006805f4();
  }
  else {
    func_0x006805fc();
  }
  func_0x006804ac();
  func_0x0067ffd4();
  func_0x0068048c(&PTR_FUN_00a0e0e8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  lVar1 = unaff_x20 + 0x18;
  func_0x00680340();
  *(long *)(unaff_x19 + 0x18) = lVar1;
  *(undefined4 *)(unaff_x19 + 0x20) = *(undefined4 *)(unaff_x20 + 0x20);
  return unaff_x19;
}



/* Entry: 0067fbcc; end: 0067fc27;  */

void FUN_0067fbcc(long param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0068031c();
  if (param_1 == 0) {
    func_0x006805f4();
  }
  else {
    func_0x006805fc();
    param_1 = unaff_x20;
  }
  func_0x006804f4();
  func_0x0068050c(&PTR_FUN_00a0dfa8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  func_0x00680050();
  *(long *)(unaff_x21 + 0x18) = param_1;
  *(undefined1 *)(unaff_x21 + 0x20) = *(undefined1 *)(unaff_x19 + 0x20);
  return;
}



/* Entry: 0067fc28; end: 0067fc33;  */

void FUN_0067fc28(long *param_1)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  FUN_0054d5a8();
  plVar2 = param_1;
  func_0x0054d67c();
  func_0x0054d6a8();
  puVar4 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x0054d6b0();
    param_1 = param_1 + (int)plVar2;
    puVar4 = unaff_x25 + (int)plVar2;
  }
  lVar3 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, puVar4 < unaff_x25 + unaff_x26; puVar4 = puVar4 + 1) {
    plVar2 = (long *)lVar3;
    FUN_0067fc34(lVar3,*puVar4);
    *param_1 = (long)plVar2;
    param_1 = param_1 + 1;
  }
  func_0x0054d60c();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 0067fc34; end: 0067fcaf;  */

void FUN_0067fc34(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x0068031c();
  if (param_1 == 0) {
    func_0x006803c8();
  }
  else {
    func_0x00680310();
  }
  func_0x006804f4();
  func_0x0068050c(&PTR_FUN_00a0e368);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(unaff_x21 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x006808c4();
  }
  *(long *)(unaff_x21 + 0x18) = param_1;
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x006808c4();
  }
  func_0x006809bc();
  return;
}



/* Entry: 0067fcb0; end: 0067fd43;  */

void FUN_0067fcb0(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x21;
  
  func_0x0068031c();
  if (param_1 == 0) {
    func_0x006808a0();
  }
  else {
    func_0x006808a8();
  }
  func_0x006804f4();
  func_0x0068050c(&PTR_FUN_00a0e048);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  *(undefined4 *)(unaff_x21 + 0x10) = *(undefined4 *)(unaff_x19 + 0x10);
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  FUN_0048ece4(unaff_x21 + 0x18);
  *(undefined4 *)(unaff_x21 + 0x28) = 0;
  lVar1 = unaff_x19 + 0x30;
  func_0x00680348();
  *(long *)(unaff_x21 + 0x30) = lVar1;
  uVar2 = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined4 *)(unaff_x21 + 0x40) = *(undefined4 *)(unaff_x19 + 0x40);
  *(undefined8 *)(unaff_x21 + 0x38) = uVar2;
  return;
}



/* Entry: 0067fd44; end: 0068020b;  */

void FUN_0067fd44(void)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 unaff_x19;
  int unaff_w21;
  ulong *unaff_x23;
  
  if ((*unaff_x23 & 1) != 0) {
    unaff_x23 = (ulong *)(*unaff_x23 + (long)unaff_w21 * 8 + 7);
  }
  plVar2 = (long *)*unaff_x23;
  uVar3 = (ulong)*(uint *)((long)plVar2 + 0x14);
  func_0x00487c24();
  uVar1 = 0x1f3a;
  func_0x00487cbc(0x1f3a,unaff_x19);
  func_0x00487cbc(uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0054db48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,uVar3);
  return;
}



/* Entry: 0068020c; end: 00680227;  */

void FUN_0068020c(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x00678d10(unaff_x21 + 0x30,unaff_x20 + 0x30);
  return;
}



/* Entry: 00680228; end: 006809cf;  */

void FUN_00680228(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 unaff_x19;
  
  uVar2 = (ulong)*(uint *)((long)param_2 + 0x2c);
  func_0x00487c24();
  uVar1 = 0x1a;
  func_0x00487cbc(0x1a,unaff_x19);
  func_0x00487cbc(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0054db48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,uVar2);
  return;
}



/* Entry: 006809d0; end: 006809f3;  */

void FUN_006809d0(void)

{
  long unaff_x19;
  
  FUN_0067ef04(unaff_x19 + 0x30);
  func_0x0067ef18(unaff_x19 + 0x48);
  return;
}



/* Entry: 006809f4; end: 00680a17;  */

void FUN_006809f4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = param_2;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = param_2;
  return;
}



/* Entry: 00680a18; end: 00680adb;  */

undefined8 FUN_00680a18(long param_1,undefined8 param_2,ulong param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [224];
  
  FUN_006686d4(auStack_110);
  puVar1 = auStack_110;
  FUN_00549e84(puVar1,param_2,param_3);
  if ((int)puVar1 == 0) {
    func_0x00685354();
    func_0x007766a0(auStack_120);
    FUN_00681134(auStack_120,&UNK_00913399);
    FUN_007766a8(auStack_120);
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    FUN_00680adc(uVar2,auStack_110,param_2,param_3 & 0xffffffff);
  }
  FUN_0067709c(auStack_110);
  return uVar2;
}



/* Entry: 00680adc; end: 00681133;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_00680adc(long *param_1,long param_2,long *param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long **pplVar9;
  undefined4 extraout_w8;
  uint uVar10;
  long *extraout_x8;
  long *extraout_x8_00;
  uint uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  undefined8 *puVar14;
  long *plVar15;
  ulong *puVar16;
  long *plVar17;
  long *plVar18;
  undefined4 *puVar19;
  byte bVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long *plStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  
  pplVar9 = &plStack_b0;
  uStack_a8 = CONCAT44(uStack_a8._4_4_,param_4);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 0;
  puVar13 = (undefined8 *)param_1[1];
  plStack_b0 = param_3;
  if (puVar13 < (undefined8 *)param_1[2]) {
    *(undefined4 *)(puVar13 + 1) = param_4;
    *puVar13 = param_3;
    puVar13[3] = 0;
    puVar13[4] = 0;
    puVar13[2] = 0;
    puVar13 = puVar13 + 5;
  }
  else {
    uVar22 = ((long)puVar13 - *param_1) / 0x28 + 1;
    if (0x666666666666666 < uVar22) {
      FUN_00683560();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x681104);
      (*pcVar1)();
    }
    uVar23 = (param_1[2] - *param_1) / 0x28;
    uVar25 = uVar23 * 2;
    if (uVar25 < uVar22 || uVar25 - uVar22 == 0) {
      uVar25 = uVar22;
    }
    if (0x333333333333332 < uVar23) {
      uVar25 = 0x666666666666666;
    }
    FUN_00682970(&lStack_88,uVar25);
    *puStack_78 = plStack_b0;
    *(undefined4 *)(puStack_78 + 1) = (undefined4)uStack_a8;
    puStack_78[3] = uStack_98;
    puStack_78[2] = uStack_a0;
    puStack_78[4] = uStack_90;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    puStack_78 = puStack_78 + 5;
    FUN_00682898(param_1,&lStack_88);
    puVar13 = (undefined8 *)param_1[1];
    FUN_006829e0(&lStack_88);
  }
  param_1[1] = (long)puVar13;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_a0);
  puVar14 = (undefined8 *)(*(ulong *)(param_2 + 0xb8) & 0xfffffffffffffffc);
  cVar3 = *(char *)((long)puVar14 + 0x17);
  plVar17 = (long *)(long)cVar3;
  puVar13 = puVar14;
  plVar6 = plVar17;
  if ((long)plVar17 < 0) {
    puVar13 = (undefined8 *)*puVar14;
    plVar6 = (long *)puVar14[1];
  }
  FUN_00681cc0(puVar13,plVar6);
  if (((ulong)puVar13 & 1) != 0) {
    puVar13 = puVar14;
    if (cVar3 < '\0') {
      puVar13 = (undefined8 *)*puVar14;
      plVar17 = (long *)puVar14[1];
    }
    puVar19 = (undefined4 *)&lStack_88;
    FUN_00681be8(&lStack_88,puVar13);
    plVar6 = &lStack_88;
    FUN_004575b8(param_1[1] + -0x18);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_88);
    func_0x006852b0(param_1[1]);
    lStack_88._0_4_ = extraout_w8;
    func_0x0068539c(*(undefined8 *)(param_2 + 0xb0));
    plVar8 = plVar6;
    if ((long)plVar17 < 0) {
      plVar8 = (long *)*plVar6;
      plVar17 = (long *)plVar6[1];
    }
    plVar6 = &lStack_80;
    FUN_00681be8();
    if (param_1[6] == 0) {
      plVar6 = (long *)((long)&MACH_HEADER.magic + 1);
      FUN_0068356c();
      param_1[5] = (long)plVar6;
      param_1[3] = (long)plVar6;
    }
    plVar7 = param_1 + 3;
    plVar15 = plVar7;
    while( true ) {
      uVar22 = 0;
      plVar15 = (long *)*plVar15;
      uVar25 = (ulong)*(byte *)((long)plVar15 + 10);
      while (uVar23 = uVar25, uVar22 != uVar23) {
        uVar25 = uVar22 + uVar23 >> 1;
        plVar6 = plVar15 + uVar25 * 4 + 2;
        plVar8 = &lStack_88;
        func_0x006835ac();
        if ((int)plVar6 != 0) {
          uVar22 = uVar25 + 1;
          uVar25 = uVar23;
        }
      }
      bVar20 = *(byte *)((long)plVar15 + 0xb);
      if (bVar20 != 0) break;
      func_0x006851b0();
      plVar15 = plVar6 + (uVar23 & 0xff);
    }
    plVar12 = plVar15;
    uVar22 = uVar23;
    do {
      if ((uint)uVar22 != (uint)*(byte *)((long)plVar12 + 10)) {
        plVar6 = &lStack_88;
        plVar8 = (long *)((long)plVar12 + ((long)(uVar22 << 0x20) >> 0x1b) + 0x10);
        func_0x006835ac();
        if ((int)plVar6 == 0) {
          func_0x00685604();
          goto LAB_006810a4;
        }
        bVar20 = *(byte *)((long)plVar15 + 0xb);
        break;
      }
      uVar22 = (ulong)*(byte *)(plVar12 + 1);
      plVar12 = (long *)*plVar12;
    } while (*(char *)((long)plVar12 + 0xb) == '\0');
    uStack_a8 = uVar23 & 0xffffffff;
    if (bVar20 == 0) {
      plStack_b0 = plVar15;
      func_0x006851b0();
      plVar15 = plVar6 + (uVar23 & 0xff);
      while( true ) {
        plVar15 = (long *)*plVar15;
        bVar20 = *(byte *)((long)plVar15 + 0xb);
        uVar23 = (ulong)*(byte *)((long)plVar15 + 10);
        if (bVar20 != 0) break;
        plStack_b0 = plVar15;
        func_0x006851b0();
        plVar15 = plVar6 + uVar23;
      }
      uStack_a8 = CONCAT44(uStack_a8._4_4_,(uint)*(byte *)((long)plVar15 + 10));
      uVar22 = uVar23;
    }
    else {
      uVar22 = (ulong)*(byte *)((long)plVar15 + 10);
    }
    uVar21 = (uint)uVar23;
    uVar11 = (uint)uVar22;
    plStack_b0 = plVar15;
    if (uVar11 == bVar20) {
      if (uVar11 < 7) {
        uVar11 = (uVar11 & 0x7f) << 1;
        if (6 < uVar11) {
          uVar11 = 7;
        }
        plVar7 = (long *)(ulong)uVar11;
        FUN_0068356c();
        plVar8 = (long *)(ulong)*(byte *)((long)plVar15 + 10);
        plVar17 = (long *)0x0;
        plStack_b0 = plVar7;
        FUN_00683860();
        *(undefined1 *)((long)plVar7 + 10) = *(undefined1 *)((long)plVar15 + 10);
        *(undefined1 *)((long)plVar15 + 10) = 0;
        FUN_00682dd8();
        param_1[5] = (long)plVar7;
        param_1[3] = (long)plVar7;
        plVar6 = plVar15;
        plVar15 = plVar7;
      }
      else {
        FUN_006835f0();
        uVar21 = (uint)(byte)uStack_a8;
        plVar6 = plVar7;
        plVar8 = (long *)pplVar9;
        plVar15 = plStack_b0;
      }
    }
    uVar11 = uVar21 & 0xff;
    bVar20 = *(byte *)((long)plVar15 + 10);
    uVar21 = uVar21 & 0xff;
    cVar2 = SBORROW4((uint)bVar20,uVar21);
    uVar10 = (uint)bVar20;
    cVar3 = (int)(uVar10 - uVar21) < 0;
    if (uVar21 <= bVar20 && uVar10 != uVar21) {
      plVar8 = (long *)(ulong)(uVar10 - uVar11);
      plVar17 = (long *)(ulong)(uVar11 + 1);
      plVar6 = plVar15;
      FUN_00683a2c();
    }
    *(undefined4 *)(plVar15 + (ulong)uVar11 * 4 + 2) = (undefined4)lStack_88;
    plVar15[(ulong)uVar11 * 4 + 5] = lStack_70;
    plVar15[(ulong)uVar11 * 4 + 4] = (long)puStack_78;
    plVar15[(ulong)uVar11 * 4 + 3] = lStack_80;
    puStack_78 = (undefined8 *)0x0;
    lStack_70 = 0;
    lStack_80 = 0;
    bVar20 = *(char *)((long)plVar15 + 10) + 1;
    *(byte *)((long)plVar15 + 10) = bVar20;
    if (*(char *)((long)plVar15 + 0xb) == '\0') {
      uVar11 = uVar11 + 1;
      uVar21 = (uint)bVar20;
      cVar2 = SBORROW4(uVar11,uVar21);
      cVar3 = (int)(uVar11 - uVar21) < 0;
      if (uVar11 < uVar21) {
        while( true ) {
          uVar21 = (uint)bVar20;
          cVar2 = SBORROW4(uVar11,uVar21);
          cVar3 = (int)(uVar11 - uVar21) < 0;
          if (uVar21 <= uVar11) break;
          func_0x006851b0();
          lVar24 = plVar6[(byte)(bVar20 - 1)];
          plVar6 = plVar15;
          FUN_006839f4();
          plVar6[bVar20] = lVar24;
          *(byte *)(lVar24 + 8) = bVar20;
          bVar20 = bVar20 - 1;
        }
      }
    }
    param_1[6] = param_1[6] + 1;
    plVar12 = (long *)param_1[8];
    plVar7 = (long *)(*(ulong *)(param_2 + 0xb0) & 0xfffffffffffffffc);
    plVar15 = (long *)param_1[7];
    uVar22 = (long)plVar12 - param_1[7] >> 5;
    while (plVar18 = plVar15, uVar22 != 0) {
      uVar25 = uVar22 >> 1;
      func_0x006856fc();
      plVar8 = extraout_x10;
      plVar17 = extraout_x11;
      if (cVar3 == cVar2) {
        plVar8 = plVar7;
        plVar17 = extraout_x8;
      }
      plVar6 = plVar18 + uVar25 * 4;
      FUN_00682a28();
      cVar2 = '\0';
      cVar3 = (int)plVar6 < 0;
      plVar15 = plVar18 + uVar25 * 4 + 4;
      uVar22 = uVar22 + (uVar22 >> 1 ^ 0xffffffffffffffff);
      if ((int)plVar6 == 0) {
        plVar15 = plVar18;
        uVar22 = uVar25;
      }
    }
    cVar2 = SBORROW8((long)plVar12,(long)plVar18);
    cVar3 = (long)plVar12 - (long)plVar18 < 0;
    if (plVar12 == plVar18) {
      func_0x00685604();
    }
    else {
      func_0x006856fc();
      plVar15 = extraout_x10_00;
      plVar8 = extraout_x11_00;
      if (cVar3 == cVar2) {
        plVar15 = plVar7;
        plVar8 = extraout_x8_00;
      }
      plVar7 = plVar18 + 1;
      plVar17 = (long *)*plVar7;
      if (-1 < *(char *)((long)plVar18 + 0x1f)) {
        plVar17 = plVar7;
      }
      func_0x00466818();
      plVar6 = plVar15;
      func_0x00685604();
      plVar18 = plVar7;
      if (((uint)plVar15 >> 7 & 1) == 0) {
LAB_006810a4:
        func_0x00685354();
        func_0x007766a0(&lStack_88);
        func_0x00682f78(&lStack_88,&UNK_009133f8);
        func_0x0068541c(*(undefined8 *)(param_2 + 0xb0));
        goto LAB_006810cc;
      }
    }
    func_0x006855d0();
    while( true ) {
      iVar5 = (int)plVar6;
      if (puVar19 == (undefined4 *)0x0) {
        uVar22 = *(ulong *)(param_2 + 0x48);
        puVar16 = (ulong *)(param_2 + 0x48);
        if ((uVar22 & 1) != 0) {
          puVar16 = (ulong *)(uVar22 + 7);
        }
        lVar24 = (long)*(int *)(param_2 + 0x50) << 3;
        do {
          if (lVar24 == 0) {
            func_0x006855d0();
            lVar24 = 0;
            plVar15 = (long *)0x0;
            while( true ) {
              iVar5 = (int)plVar6;
              if (lVar24 == 0) {
                uVar22 = *(ulong *)(param_2 + 0x60);
                puVar16 = (ulong *)(param_2 + 0x60);
                if ((uVar22 & 1) != 0) {
                  puVar16 = (ulong *)(uVar22 + 7);
                }
                lVar24 = (long)*(int *)(param_2 + 0x68) << 3;
                do {
                  bVar4 = lVar24 == 0;
                  if (lVar24 == 0) {
                    return (bool)1;
                  }
                  func_0x0068539c(*(undefined8 *)(*puVar16 + 0x30));
                  if ((long)plVar17 < 0) {
                    plVar17 = (long *)plVar8[1];
                    plVar8 = (long *)*plVar8;
                  }
                  func_0x00685468();
                  puVar16 = puVar16 + 1;
                  lVar24 = lVar24 + -8;
                } while (((ulong)plVar6 & 1) != 0);
                return bVar4;
              }
              func_0x0068539c(*(undefined8 *)(*plVar15 + 0x18));
              plVar6 = plVar8;
              if ((long)plVar17 < 0) {
                plVar6 = (long *)*plVar8;
                plVar17 = (long *)plVar8[1];
              }
              func_0x00685468();
              if (iVar5 == 0) break;
              func_0x0068539c(*(undefined8 *)(param_2 + 0xb0));
              plVar8 = plVar6;
              if ((long)plVar17 < 0) {
                plVar8 = (long *)*plVar6;
                plVar17 = (long *)plVar6[1];
              }
              plVar6 = param_1;
              FUN_006830d4();
              plVar15 = plVar15 + 1;
              lVar24 = lVar24 + -8;
              if (((ulong)plVar6 & 1) == 0) {
                return false;
              }
            }
            return false;
          }
          func_0x0068539c(*(undefined8 *)(*puVar16 + 0x60));
          if ((long)plVar17 < 0) {
            plVar17 = (long *)plVar8[1];
            plVar8 = (long *)*plVar8;
          }
          func_0x00685468();
          puVar16 = puVar16 + 1;
          lVar24 = lVar24 + -8;
        } while (((ulong)plVar6 & 1) != 0);
        return false;
      }
      func_0x0068539c(*(undefined8 *)(*plVar18 + 0xd8));
      plVar6 = plVar8;
      if ((long)plVar17 < 0) {
        plVar6 = (long *)*plVar8;
        plVar17 = (long *)plVar8[1];
      }
      func_0x00685468();
      if (iVar5 == 0) break;
      func_0x0068539c(*(undefined8 *)(param_2 + 0xb0));
      plVar8 = plVar6;
      if ((long)plVar17 < 0) {
        plVar8 = (long *)*plVar6;
        plVar17 = (long *)plVar6[1];
      }
      plVar6 = param_1;
      FUN_0068302c();
      plVar18 = plVar18 + 1;
      puVar19 = puVar19 + 0xfffffffffffffffe;
      if (((ulong)plVar6 & 1) == 0) {
        return false;
      }
    }
    return false;
  }
  func_0x00685354();
  func_0x007766a0(&lStack_88);
  func_0x0068300c(&lStack_88,&UNK_0091349c);
  func_0x0068541c(*(undefined8 *)(param_2 + 0xb8));
LAB_006810cc:
  FUN_007766a8(&lStack_88);
  return false;
}



/* Entry: 00681134; end: 00681153;  */

void FUN_00681134(void)

{
  func_0x00684f3c();
  func_0x00684ed4();
  return;
}



/* Entry: 00681154; end: 0068121f;  */

void FUN_00681154(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  char in_NG;
  char in_OV;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  undefined8 extraout_x8;
  long lVar12;
  long extraout_x8_00;
  long extraout_x9;
  int extraout_w10;
  undefined8 extraout_x10;
  undefined8 extraout_x11;
  int extraout_w12;
  long unaff_x20;
  int unaff_w25;
  ulong uVar13;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [56];
  
  func_0x00684ebc();
  uVar1 = extraout_x11;
  uVar2 = extraout_x10;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
    uVar2 = param_2;
  }
  func_0x00685460();
  lVar12 = *(long *)(unaff_x20 + 0x38);
  uVar3 = *(long *)(unaff_x20 + 0x40) - *(long *)(unaff_x20 + 0x38) >> 5;
  while (lVar11 = lVar12, uVar3 != 0) {
    uVar13 = uVar3 >> 1;
    lVar12 = lVar11 + uVar13 * 0x20;
    lVar9 = lVar12;
    FUN_00682a28(lVar12,uVar2,uVar1);
    lVar12 = lVar12 + 0x20;
    uVar3 = uVar3 + (uVar3 >> 1 ^ 0xffffffffffffffff);
    if ((int)lVar9 == 0) {
      lVar12 = lVar11;
      uVar3 = uVar13;
    }
  }
  lVar12 = *(long *)(unaff_x20 + 0x40);
  cVar4 = SBORROW8(lVar12,lVar11);
  cVar5 = lVar12 - lVar11 < 0;
  uVar6 = lVar12 == lVar11;
  if (!(bool)uVar6) {
    func_0x006855a0(lVar11);
    lVar12 = extraout_x9;
    iVar10 = extraout_w12;
    if (cVar5 == cVar4) {
      lVar12 = extraout_x8_00;
      iVar10 = extraout_w10;
    }
    func_0x00685614();
    if ((int)lVar12 != 0) {
      func_0x00685424();
      goto LAB_00681200;
    }
  }
  lVar12 = 0;
  iVar10 = 0;
LAB_00681200:
  if (lVar12 == 0) {
    return;
  }
  lVar11 = (long)iVar10;
  plVar7 = param_3;
  func_0x0067414c();
  lStack_a8 = lVar12;
  lStack_a0 = lVar11;
  (**(code **)(*plVar7 + 0x18))(plVar7);
  FUN_0054ad28(auStack_98,uRam0000000000b1e638,0,&plStack_b0,&lStack_a8);
  plVar7 = param_3;
  FUN_00549a60(param_3,plStack_b0,auStack_98);
  plVar8 = (long *)0x0;
  plStack_b0 = plVar7;
  if ((plVar7 != (long *)0x0) && (unaff_w25 == 0)) {
    func_0x0054a528();
    plVar8 = param_3;
  }
  func_0x00673f78();
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    func_0x00659750();
    if ((((ulong)plVar8 & 1) == 0) && (func_0x00676854(), plVar8 != (long *)0x0)) {
      func_0x00676854();
      func_0x006760d8();
    }
    return;
  }
  return;
}



/* Entry: 00681220; end: 0068122f;  */

void FUN_00681220(long param_1,int param_2,long *param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [80];
  int iStack_48;
  
  if (param_1 == 0) {
    return;
  }
  lVar3 = (long)param_2;
  plVar1 = param_3;
  func_0x0067414c();
  lStack_a8 = param_1;
  lStack_a0 = lVar3;
  (**(code **)(*plVar1 + 0x18))(plVar1);
  FUN_0054ad28(auStack_98,uRam0000000000b1e638,0,&plStack_b0,&lStack_a8);
  plVar1 = param_3;
  FUN_00549a60(param_3,plStack_b0,auStack_98);
  plVar2 = (long *)0x0;
  plStack_b0 = plVar1;
  if ((plVar1 != (long *)0x0) && (iStack_48 == 0)) {
    func_0x0054a528();
    plVar2 = param_3;
  }
  func_0x00673f78();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00659750();
    if ((((ulong)plVar2 & 1) == 0) && (func_0x00676854(), plVar2 != (long *)0x0)) {
      func_0x00676854();
      func_0x006760d8();
    }
    return;
  }
  return;
}



/* Entry: 00681230; end: 00681417;  */

void FUN_00681230(undefined8 *****param_1,undefined8 *****param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *****pppppuVar3;
  ulong uVar4;
  char in_NG;
  char in_OV;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  long *plVar8;
  undefined8 *****pppppuVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong extraout_x8;
  undefined8 *****extraout_x10;
  ulong extraout_x11;
  ulong uVar15;
  undefined8 *unaff_x20;
  int unaff_w25;
  ulong *puVar16;
  uint uVar17;
  undefined8 ****ppppuStack_b8;
  long *plStack_b0;
  undefined8 ****ppppuStack_a8;
  long lStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 ****ppppuStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x00684ebc();
  uVar2 = extraout_x11;
  pppppuVar3 = extraout_x10;
  if (in_NG == in_OV) {
    uVar2 = extraout_x8;
    pppppuVar3 = param_2;
  }
  func_0x00685460();
  iVar10 = (int)param_2;
  puVar16 = (ulong *)unaff_x20[0xb];
  lVar11 = unaff_x20[0xe];
  uVar4 = (long)(unaff_x20[0xf] - unaff_x20[0xe]) >> 5;
  while (uVar4 != 0) {
    uVar15 = uVar4 >> 1;
    lVar1 = lVar11 + uVar15 * 0x20;
    uStack_70 = (undefined8 *****)0x0;
    uStack_68 = 0;
    plVar12 = (long *)*puVar16;
    ppppuStack_80 = pppppuVar3;
    uStack_78 = uVar2;
    FUN_00684328(&lStack_a0,plVar12,lVar1);
    pppppuVar9 = &ppppuStack_80;
    func_0x00685414();
    ppppuStack_b8 = pppppuVar9;
    plStack_b0 = plVar12;
    func_0x00685414(&lStack_a0);
    iVar10 = (int)plVar12;
    param_1 = &ppppuStack_b8;
    func_0x006855f0();
    if ((uint)param_1 == 0) {
      cVar5 = SBORROW8(uStack_78,uStack_98);
      cVar6 = (long)(uStack_78 - uStack_98) < 0;
      if (uStack_78 == uStack_98) {
        param_1 = uStack_70;
        uVar13 = uStack_68;
        func_0x00466818(uStack_70,uStack_68,uStack_90,uStack_88);
        iVar10 = (int)uVar13;
        func_0x00685698();
        uVar17 = (uint)(cVar6 != cVar5);
      }
      else {
        FUN_00681c0c(&ppppuStack_b8,lVar1,*puVar16);
        cVar6 = (long)ppppuStack_a8 < 0;
        cVar5 = '\0';
        plVar12 = plStack_b0;
        pppppuVar9 = (undefined8 *****)ppppuStack_b8;
        if (!(bool)cVar6) {
          plVar12 = (long *)((ulong)ppppuStack_a8 >> 0x38);
          pppppuVar9 = &ppppuStack_b8;
        }
        uVar14 = uVar2;
        func_0x00466818(pppppuVar3,uVar2,pppppuVar9,plVar12);
        iVar10 = (int)uVar14;
        func_0x00685698();
        uVar17 = (uint)(cVar6 != cVar5);
        param_1 = &ppppuStack_b8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
    }
    else {
      uVar17 = (uint)param_1 >> 0x1f;
    }
    uVar14 = uVar4 + ~uVar15;
    uVar4 = uVar15;
    if (uVar17 == 0) {
      lVar11 = lVar1 + 0x20;
      uVar4 = uVar14;
    }
  }
  lVar1 = 0;
  if (unaff_x20[0xe] != lVar11) {
    lVar1 = -0x20;
  }
  if (lVar11 + lVar1 == unaff_x20[0xf]) {
    uVar7 = 1;
  }
  else {
    FUN_00681c0c(&ppppuStack_80,lVar11 + lVar1,*unaff_x20);
    uVar7 = uStack_70._7_1_ == 0;
    pppppuVar9 = (undefined8 *****)ppppuStack_80;
    if (-1 < (long)uStack_70) {
      uStack_78 = (ulong)uStack_70._7_1_;
      pppppuVar9 = &ppppuStack_80;
    }
    FUN_006822fc(pppppuVar9,uStack_78,pppppuVar3,uVar2);
    iVar10 = (int)uStack_78;
    param_1 = &ppppuStack_80;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  func_0x006853a8();
  if (param_1 != (undefined8 *****)0x0) {
    lVar11 = (long)iVar10;
    plVar12 = param_3;
    func_0x0067414c();
    ppppuStack_a8 = param_1;
    lStack_a0 = lVar11;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    FUN_0054ad28(&uStack_98,uRam0000000000b1e638,0,&plStack_b0,&ppppuStack_a8);
    plVar12 = param_3;
    FUN_00549a60(param_3,plStack_b0,&uStack_98);
    plVar8 = (long *)0x0;
    plStack_b0 = plVar12;
    if ((plVar12 != (long *)0x0) && (unaff_w25 == 0)) {
      func_0x0054a528();
      plVar8 = param_3;
    }
    func_0x00673f78();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    ppppuStack_b8 = (undefined8 ****)0x66573c;
    func_0x00659750();
    if ((((ulong)plVar8 & 1) == 0) && (func_0x00676854(), plVar8 != (long *)0x0)) {
      func_0x00676854();
      func_0x006760d8();
    }
    return;
  }
  return;
}



/* Entry: 00681418; end: 0068154f;  */

void FUN_00681418(undefined8 param_1,undefined8 param_2,int param_3,long *param_4)

{
  char in_NG;
  char in_OV;
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 extraout_x10;
  long unaff_x20;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [64];
  undefined8 auStack_58 [2];
  int iStack_48;
  
  func_0x00684ebc();
  auStack_58[0] = extraout_x10;
  if (in_NG == in_OV) {
    auStack_58[0] = param_2;
  }
  func_0x00685460();
  lVar6 = *(long *)(unaff_x20 + 0xa8);
  uVar7 = *(undefined8 *)(unaff_x20 + 0xb0);
  iStack_48 = param_3;
  FUN_00682360(lVar6,uVar7,auStack_58);
  iVar5 = (int)uVar7;
  uVar1 = *(long *)(unaff_x20 + 0xb0) == lVar6;
  if (!(bool)uVar1) {
    lVar4 = lVar6;
    FUN_006823f0();
    func_0x00465a14();
    if (((int)lVar4 != 0) && (uVar1 = *(int *)(lVar6 + 0x20) == param_3, (bool)uVar1)) {
      func_0x00685424();
      goto FUN_00681220;
    }
  }
  lVar4 = 0;
  iVar5 = 0;
FUN_00681220:
  if (lVar4 == 0) {
    return;
  }
  lVar6 = (long)iVar5;
  plVar2 = param_4;
  func_0x0067414c();
  lStack_a8 = lVar4;
  lStack_a0 = lVar6;
  (**(code **)(*plVar2 + 0x18))(plVar2);
  FUN_0054ad28(auStack_98,uRam0000000000b1e638,0,&plStack_b0,&lStack_a8);
  plVar2 = param_4;
  FUN_00549a60(param_4,plStack_b0,auStack_98);
  plVar3 = (long *)0x0;
  plStack_b0 = plVar2;
  if ((plVar2 != (long *)0x0) && (iStack_48 == 0)) {
    func_0x0054a528();
    plVar3 = param_4;
  }
  func_0x00673f78();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00659750();
  if ((((ulong)plVar3 & 1) == 0) && (func_0x00676854(), plVar3 != (long *)0x0)) {
    func_0x00676854();
    func_0x006760d8();
  }
  return;
}



/* Entry: 00681550; end: 00681be7;  */

undefined8 FUN_00681550(undefined8 *param_1,ulong **param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  ulong **ppuVar11;
  ulong **ppuVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 extraout_x8;
  ulong *puVar15;
  undefined8 extraout_x8_00;
  ulong **ppuVar16;
  ulong **extraout_x10;
  ulong **extraout_x10_00;
  undefined8 extraout_x11;
  ulong *puVar17;
  undefined8 extraout_x11_00;
  undefined8 uVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  ulong *puStack_88;
  ulong uStack_80;
  ulong *puStack_70;
  ulong uStack_68;
  
  func_0x006852b0(param_1[1]);
  FUN_00681be8(auStack_a0);
  FUN_00681c0c(auStack_c0,auStack_a8,*param_1);
  FUN_00681cc0(param_2,param_3);
  if (((ulong)param_2 & 1) == 0) {
    func_0x00685354();
    func_0x007766a0(&puStack_88);
    FUN_0054060c(&puStack_88,&UNK_009133e2);
    FUN_00555478();
    ppuVar11 = &puStack_88;
  }
  else {
    ppuVar16 = (ulong **)(param_1 + 10);
    ppuVar11 = ppuVar16;
    while( true ) {
      uVar23 = 0;
      puVar19 = *ppuVar11;
      puStack_88 = (ulong *)param_1[0xb];
      uVar24 = (ulong)*(byte *)((long)puVar19 + 10);
      while (uVar14 = uVar24, uVar23 != uVar14) {
        uVar24 = uVar23 + uVar14 >> 1;
        param_2 = &puStack_88;
        FUN_00684218(param_2,auStack_a8,puVar19 + uVar24 * 4 + 2);
        if ((int)param_2 == 0) {
          uVar23 = uVar24 + 1;
          uVar24 = uVar14;
        }
      }
      if (*(char *)((long)puVar19 + 0xb) != '\0') break;
      func_0x006851a8();
      ppuVar11 = param_2 + (uVar14 & 0xff);
    }
    uVar14 = uVar14 & 0xffffffff;
    FUN_006841e4();
    if (puVar19 == (ulong *)0x0) {
      puVar19 = (ulong *)param_1[0xc];
      uVar14 = (ulong)*(byte *)((long)puVar19 + 10);
    }
    else {
      uVar14 = uVar14 & 0xffffffff;
    }
    puVar20 = puVar19;
    if ((ulong *)**ppuVar16 == puVar19 && uVar14 == 0) {
      uVar23 = 0;
    }
    else if (*(char *)((long)puVar19 + 0xb) == '\0') {
      FUN_00682cd4();
      puVar20 = puVar19 + (uVar14 & 0xff);
      while( true ) {
        puVar20 = (ulong *)*puVar20;
        bVar4 = *(byte *)((long)puVar20 + 10);
        if (*(char *)((long)puVar20 + 0xb) != '\0') break;
        func_0x006851a8();
        puVar20 = puVar19 + bVar4;
      }
      uVar23 = (ulong)(bVar4 - 1);
    }
    else {
      uVar22 = (int)uVar14 - 1;
      uVar24 = (ulong)uVar22;
      uVar23 = uVar24;
      puVar21 = puVar19;
      if ((int)uVar14 < 1) {
        while ((puVar20 = puVar21, (int)uVar22 < 0 &&
               (puVar20 = puVar19, uVar23 = uVar24, *(char *)((long)*puVar21 + 0xb) == '\0'))) {
          uVar22 = (byte)puVar21[1] - 1;
          uVar23 = (ulong)uVar22;
          puVar21 = (ulong *)*puVar21;
        }
      }
    }
    func_0x006855b8();
    puVar19 = (ulong *)param_1[0xc];
    bVar4 = *(byte *)((long)puVar19 + 10);
    cVar6 = false;
    bVar7 = false;
    cVar8 = false;
    uVar22 = (uint)uVar23;
    if (puVar20 == puVar19) {
      uVar26 = (uint)bVar4;
      cVar8 = SBORROW4(uVar22,uVar26);
      cVar6 = (int)(uVar22 - uVar26) < 0;
      bVar7 = uVar22 == uVar26;
    }
    puVar21 = puVar20;
    if (bVar7) {
LAB_006817ec:
      puStack_88 = (ulong *)param_1[0xb];
      lVar2 = param_1[0xe];
      uVar24 = (long)(param_1[0xf] - param_1[0xe]) >> 5;
      while (uVar24 != 0) {
        uVar25 = uVar24 >> 1;
        lVar1 = lVar2 + uVar25 * 0x20;
        ppuVar11 = &puStack_88;
        FUN_00684218(ppuVar11,auStack_a8,lVar1);
        uVar14 = uVar24 + ~uVar25;
        uVar24 = uVar25;
        if ((int)ppuVar11 == 0) {
          lVar2 = lVar1 + 0x20;
          uVar24 = uVar14;
        }
      }
      lVar3 = param_1[0xf];
      lVar1 = 0;
      if (param_1[0xe] != lVar2) {
        lVar1 = -0x20;
      }
      lVar2 = lVar2 + lVar1;
      func_0x006855b8();
      cVar8 = SBORROW8(lVar2,lVar3);
      cVar6 = lVar2 - lVar3 < 0;
      if (lVar2 != lVar3) {
        func_0x00685060();
        func_0x00685034();
        uVar18 = extraout_x11_00;
        ppuVar11 = extraout_x10_00;
        if (cVar6 == cVar8) {
          uVar18 = extraout_x8_00;
          ppuVar11 = &puStack_88;
        }
        func_0x0068564c(ppuVar11,uVar18);
        iVar9 = iVar10;
        func_0x0068534c();
        iVar10 = (int)ppuVar11;
        if (iVar10 != 0) {
          func_0x00685160();
          func_0x007766a0();
          func_0x00684e88();
          func_0x00684ee4();
          func_0x00684e78();
          func_0x006856bc();
          func_0x00685060();
          func_0x00685048();
          func_0x00684e68();
          goto LAB_00681b4c;
        }
        if (lVar2 + 0x20 != lVar3) {
          func_0x00685060();
          func_0x00685034();
          func_0x00685628();
          func_0x0068534c();
          if (iVar9 != 0) {
            func_0x00685160();
            func_0x007766a0();
            func_0x00684e88();
            func_0x00684ee4();
            func_0x00684e78();
            func_0x006856bc();
            func_0x00685060();
            func_0x00685048();
            func_0x00684e68();
            goto LAB_00681b4c;
          }
        }
      }
      puStack_70 = puVar21;
      uStack_68 = uVar23;
      if (param_1[0xd] == 0) {
LAB_00681940:
        ppuVar11 = (ulong **)((long)&MACH_HEADER.magic + 1);
        FUN_00684818();
        param_1[0xc] = ppuVar11;
        param_1[10] = ppuVar11;
LAB_00681954:
        while( true ) {
          uVar23 = 0;
          puVar19 = *ppuVar16;
          uVar24 = (ulong)*(byte *)((long)puVar19 + 10);
          while (uVar14 = uVar24, uVar23 != uVar14) {
            uVar24 = uVar23 + uVar14 >> 1;
            ppuVar11 = (ulong **)(param_1 + 0xb);
            func_0x0068560c(ppuVar11,puVar19 + uVar24 * 4 + 2);
            if ((int)ppuVar11 != 0) {
              uVar23 = uVar24 + 1;
              uVar24 = uVar14;
            }
          }
          if (*(char *)((long)puVar19 + 0xb) != '\0') break;
          func_0x006851a8();
          ppuVar16 = ppuVar11 + (uVar14 & 0xff);
        }
        uVar14 = uVar14 & 0xffffffff;
        FUN_006841e4(puVar19,uVar14);
        if ((puVar19 == (ulong *)0x0) ||
           (func_0x00685440((long)puVar19 + ((long)(uVar14 << 0x20) >> 0x1b)),
           ((ulong)puVar19 & 1) != 0)) goto LAB_00681a14;
      }
      else {
        if ((ulong *)param_1[0xc] == puVar21 && uVar23 == *(byte *)((long)param_1[0xc] + 10)) {
LAB_006818fc:
          if ((ulong *)**ppuVar16 != puVar21 || uVar23 != 0) {
            puStack_88 = puVar21;
            uStack_80 = uVar23;
            FUN_006844fc(&puStack_88);
            ppuVar11 = (ulong **)(param_1 + 0xb);
            func_0x0068560c(ppuVar11,(long)puStack_88 + ((long)(uStack_80 << 0x20) >> 0x1b) + 0x10);
            iVar10 = (int)ppuVar11;
joined_r0x00681934:
            if (iVar10 == 0) {
              if (param_1[0xd] == 0) goto LAB_00681940;
              goto LAB_00681954;
            }
          }
        }
        else {
          lVar2 = (long)(uVar23 << 0x20) >> 0x1b;
          puVar13 = param_1 + 0xb;
          FUN_00684218(puVar13,auStack_a8,(long)puVar21 + lVar2 + 0x10);
          if ((int)puVar13 != 0) goto LAB_006818fc;
          puVar13 = param_1 + 0xb;
          func_0x0068560c(puVar13,(long)puVar21 + lVar2 + 0x10);
          if ((int)puVar13 == 0) goto LAB_00681a24;
          ppuVar11 = &puStack_70;
          FUN_00684a5c();
          if (puStack_70 != (ulong *)param_1[0xc] ||
              (uint)uStack_68 != *(byte *)((long)param_1[0xc] + 10)) {
            func_0x00685440(puStack_70 + (long)(int)(uint)uStack_68 * 4);
            iVar10 = (int)ppuVar11;
            goto joined_r0x00681934;
          }
        }
LAB_00681a14:
        func_0x006853a8();
        FUN_00684378();
      }
LAB_00681a24:
      uVar18 = 1;
      goto LAB_00681a28;
    }
    FUN_00681c0c(&puStack_88,puVar20 + (uVar23 & 0xff) * 4 + 2,*param_1);
    func_0x00685034();
    uVar18 = extraout_x11;
    ppuVar11 = extraout_x10;
    if (cVar6 == cVar8) {
      uVar18 = extraout_x8;
      ppuVar11 = &puStack_88;
    }
    func_0x0068564c(ppuVar11,uVar18);
    ppuVar12 = ppuVar11;
    func_0x0068534c();
    if ((int)ppuVar11 == 0) {
      if (*(char *)((long)puVar20 + 0xb) == '\0') {
        func_0x006851a8();
        puVar21 = ppuVar12[(ulong)(uVar22 + 1) & 0xff];
        while (*(char *)((long)puVar21 + 0xb) == '\0') {
          func_0x00682c94();
        }
        uVar23 = 0;
      }
      else {
        uVar24 = (ulong)(uVar22 + 1);
        bVar5 = *(byte *)((long)puVar20 + 10);
        puVar15 = puVar20;
        uVar23 = uVar24;
        if ((int)(uint)bVar5 <= (int)(uVar22 + 1)) {
          while ((puVar21 = puVar15, (uint)uVar23 == (uint)bVar5 &&
                 (puVar17 = (ulong *)*puVar15, puVar21 = puVar20, uVar23 = uVar24,
                 *(char *)((long)puVar17 + 0xb) == '\0'))) {
            puVar21 = puVar15 + 1;
            bVar5 = *(byte *)((long)puVar17 + 10);
            puVar15 = puVar17;
            uVar23 = (ulong)(byte)*puVar21;
          }
        }
      }
      if (puVar21 != puVar19 || (uint)uVar23 != (uint)bVar4) {
        ppuVar11 = &puStack_88;
        FUN_00681c0c(ppuVar11,puVar21 + (uVar23 & 0xff) * 4 + 2,*param_1);
        iVar9 = (int)ppuVar11;
        func_0x00685034();
        func_0x00685628();
        func_0x0068534c();
        if (iVar9 != 0) {
          func_0x00685160();
          func_0x007766a0();
          func_0x00684e88();
          func_0x00684ee4();
          func_0x00684e78();
          func_0x006856bc();
          FUN_00681c0c(&puStack_88,puVar21 + (uVar23 & 0xff) * 4 + 2);
          func_0x00685048();
          func_0x00684e68();
          goto LAB_00681b4c;
        }
      }
      goto LAB_006817ec;
    }
    func_0x00685160();
    func_0x007766a0();
    func_0x00684e88();
    func_0x00684ee4();
    func_0x00684e78();
    func_0x006856bc();
    FUN_00681c0c(&puStack_88,puVar20 + (uVar23 & 0xff) * 4 + 2);
    func_0x00685048();
    func_0x00684e68();
LAB_00681b4c:
    func_0x0068534c();
    ppuVar11 = &puStack_70;
  }
  FUN_007766a8(ppuVar11);
  uVar18 = 0;
LAB_00681a28:
  func_0x00685668();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
  return uVar18;
}



/* Entry: 00681be8; end: 00681c0b;  */

void FUN_00681be8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_00456d78(param_1,&uStack_20);
  return;
}



/* Entry: 00681c0c; end: 00681cbf;  */

ulong * FUN_00681c0c(undefined8 param_1,uint *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong *puVar3;
  char **ppcVar4;
  long unaff_x19;
  undefined8 *puStack_b8;
  ulong uStack_b0;
  char *pcStack_88;
  long lStack_80;
  ulong uStack_58;
  long lStack_50;
  long lStack_28;
  
  func_0x006851c0();
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (ulong)*param_2;
  FUN_006827e4();
  pcStack_88 = "";
  if (param_3 != 0) {
    pcStack_88 = ".";
  }
  uStack_58 = uVar2;
  lStack_50 = param_3;
  FUN_00532c74();
  uStack_b0 = *(ulong *)(unaff_x19 + 0x10);
  puStack_b8 = *(undefined8 **)(unaff_x19 + 8);
  if (-1 < (char)*(byte *)(unaff_x19 + 0x1f)) {
    uStack_b0 = (ulong)*(byte *)(unaff_x19 + 0x1f);
    puStack_b8 = (undefined8 *)(unaff_x19 + 8);
  }
  puVar3 = &uStack_58;
  ppcVar4 = &pcStack_88;
  lStack_80 = param_3;
  FUN_00575ddc(puVar3,ppcVar4,&puStack_b8);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_28) {
    ___stack_chk_fail();
    while ((ppcVar4 != (char **)0x0 &&
           (((bVar1 = (byte)*puVar3, bVar1 == 0x2e || (bVar1 == 0x5f)) ||
            (0xfffffff5 < bVar1 - 0x3a || 0xffffffe5 < (bVar1 & 0xffffffdf) - 0x5b))))) {
      puVar3 = (ulong *)((long)puVar3 + 1);
      ppcVar4 = (char **)((long)ppcVar4 + -1);
    }
    return (ulong *)(ulong)(ppcVar4 == (char **)0x0);
  }
  return puVar3;
}



/* Entry: 00681cc0; end: 00681d07;  */

bool FUN_00681cc0(byte *param_1,long param_2)

{
  byte bVar1;
  
  while ((param_2 != 0 &&
         (((bVar1 = *param_1, bVar1 == 0x2e || (bVar1 == 0x5f)) ||
          (0xfffffff5 < bVar1 - 0x3a || 0xffffffe5 < (bVar1 & 0xffffffdf) - 0x5b))))) {
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
  return param_2 == 0;
}



/* Entry: 00681d08; end: 006822fb;  */

void FUN_00681d08(long param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  long in_register_00005008;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_88;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined1 *puStack_70;
  ulong uStack_68;
  
  plVar4 = &lStack_b0;
  plVar6 = &lStack_b0;
  plVar7 = &lStack_b0;
  uVar9 = param_2[1] - *param_2;
  plVar5 = param_2;
  if (uVar9 < (ulong)(param_2[2] - *param_2)) {
    lVar10 = (long)uVar9 / 0x28;
    FUN_00682970(&lStack_b0,lVar10,lVar10);
    if ((ulong)(lStack_98 - lStack_b0) < (ulong)(param_2[2] - *param_2)) {
      FUN_00682898(param_2,&lStack_b0);
    }
    FUN_006829e0();
    plVar5 = plVar4;
  }
  if (param_2[6] != 0) {
    uVar9 = param_2[6] + (param_2[8] - param_2[7] >> 5);
    lStack_a8 = 0;
    lStack_a0 = 0;
    lStack_b0 = 0;
    uStack_68 = uStack_68 & 0xffffffffffffff00;
    puStack_70 = (undefined1 *)&lStack_b0;
    if (uVar9 != 0) {
      if (uVar9 >> 0x3b != 0) {
        puStack_70 = (undefined1 *)&lStack_b0;
        FUN_00684ad4();
        goto LAB_0068227c;
      }
      puStack_70 = (undefined1 *)&lStack_b0;
      func_0x00685644();
      func_0x006854bc(plVar5 + uVar9 * 4);
      for (lVar10 = uVar9 * 0x20; lStack_a8 = extraout_x8, lVar10 != 0; lVar10 = lVar10 + -0x20) {
        plVar5[1] = in_register_00005008;
        *plVar5 = param_1;
        plVar5[3] = in_register_00005008;
        plVar5[2] = param_1;
        plVar5 = plVar5 + 4;
      }
    }
    func_0x0068555c();
    FUN_00684ae0();
    uVar14 = 0;
    puVar13 = *(undefined1 **)param_2[3];
    puVar12 = (undefined1 *)param_2[5];
    bVar2 = puVar12[10];
    lVar10 = param_2[7];
    lVar1 = param_2[8];
    uStack_78 = 0;
    lVar11 = lStack_b0;
    puStack_80 = puVar13;
    while (puVar13 != puVar12 || uVar14 != bVar2) {
      if (lVar10 == lVar1) {
        uStack_68 = uStack_78 & 0xffffffff;
        uVar9 = uStack_78;
        puStack_70 = puVar13;
        while (puStack_70 != puVar12 || (uint)uVar9 != (uint)bVar2) {
          func_0x00684b0c(lVar11,puStack_70 + (ulong)((uint)uVar9 & 0xff) * 0x20 + 0x10);
          func_0x00684b2c(&puStack_70);
          lVar11 = lVar11 + 0x20;
          uVar9 = uStack_68 & 0xffffffff;
        }
        goto LAB_00681e88;
      }
      lVar8 = lVar10;
      func_0x006835ac(lVar10,puVar13 + (ulong)(uVar14 & 0xff) * 0x20 + 0x10);
      if ((int)lVar8 == 0) {
        func_0x00684b0c(lVar11,puVar13 + (ulong)(uVar14 & 0xff) * 0x20 + 0x10);
        func_0x00684b2c(&puStack_80);
        puVar13 = puStack_80;
        uVar14 = (uint)uStack_78;
      }
      else {
        func_0x006853a8();
        func_0x00684b0c();
        lVar10 = lVar10 + 0x20;
      }
      lVar11 = lVar11 + 0x20;
    }
    for (; lVar10 != lVar1; lVar10 = lVar10 + 0x20) {
      func_0x006853a8();
      func_0x00684b0c();
    }
LAB_00681e88:
    if (param_2[7] != 0) {
      FUN_00682d64(param_2 + 7);
      __ZdlPv(param_2[7]);
      param_2[7] = 0;
      param_2[8] = 0;
      param_2[9] = 0;
    }
    in_register_00005008 = lStack_a8;
    param_1 = lStack_b0;
    param_2[8] = lStack_a8;
    param_2[7] = lStack_b0;
    param_2[9] = lStack_a0;
    lStack_a8 = 0;
    lStack_a0 = 0;
    lStack_b0 = 0;
    FUN_00682da0(param_2 + 3);
    func_0x00682d0c();
    plVar5 = plVar6;
  }
  if (param_2[0xd] != 0) {
    uVar9 = param_2[0xd] + (param_2[0xf] - param_2[0xe] >> 5);
    lStack_a8 = 0;
    lStack_a0 = 0;
    lStack_b0 = 0;
    uStack_68 = uStack_68 & 0xffffffffffffff00;
    puStack_70 = (undefined1 *)&lStack_b0;
    if (uVar9 != 0) {
      if (uVar9 >> 0x3b != 0) {
        puStack_70 = (undefined1 *)&lStack_b0;
        FUN_00684ba4();
        goto LAB_0068227c;
      }
      puStack_70 = (undefined1 *)&lStack_b0;
      func_0x00685644();
      func_0x006854bc(plVar5 + uVar9 * 4);
      for (lVar10 = uVar9 * 0x20; lStack_a8 = extraout_x8_00, lVar10 != 0; lVar10 = lVar10 + -0x20)
      {
        plVar5[1] = in_register_00005008;
        *plVar5 = param_1;
        plVar5[3] = in_register_00005008;
        plVar5[2] = param_1;
        plVar5 = plVar5 + 4;
      }
    }
    func_0x0068555c();
    FUN_00684bb0();
    uVar14 = 0;
    lStack_88 = param_2[0xb];
    puVar13 = *(undefined1 **)param_2[10];
    puVar12 = (undefined1 *)param_2[0xc];
    bVar2 = puVar12[10];
    lVar10 = param_2[0xe];
    lVar1 = param_2[0xf];
    uStack_78 = 0;
    lVar11 = lStack_b0;
    puStack_80 = puVar13;
    while (puVar13 != puVar12 || uVar14 != bVar2) {
      if (lVar10 == lVar1) {
        uStack_68 = uStack_78 & 0xffffffff;
        uVar9 = uStack_78;
        puStack_70 = puVar13;
        while (puStack_70 != puVar12 || (uint)uVar9 != (uint)bVar2) {
          func_0x00684bdc(lVar11,puStack_70 + (ulong)((uint)uVar9 & 0xff) * 0x20 + 0x10);
          FUN_00684a5c(&puStack_70);
          lVar11 = lVar11 + 0x20;
          uVar9 = uStack_68 & 0xffffffff;
        }
        goto LAB_00681fd0;
      }
      plVar5 = &lStack_88;
      FUN_00684218(plVar5,lVar10,puVar13 + (ulong)(uVar14 & 0xff) * 0x20 + 0x10);
      if ((int)plVar5 == 0) {
        func_0x00684bdc(lVar11,puVar13 + (ulong)(uVar14 & 0xff) * 0x20 + 0x10);
        FUN_00684a5c(&puStack_80);
        puVar13 = puStack_80;
        uVar14 = (uint)uStack_78;
      }
      else {
        func_0x006853a8();
        func_0x00684bdc();
        lVar10 = lVar10 + 0x20;
      }
      lVar11 = lVar11 + 0x20;
    }
    for (; lVar10 != lVar1; lVar10 = lVar10 + 0x20) {
      func_0x006853a8();
      func_0x00684bdc();
    }
LAB_00681fd0:
    if (param_2[0xe] != 0) {
      FUN_00682af8(param_2 + 0xe);
      __ZdlPv(param_2[0xe]);
      param_2[0xe] = 0;
      param_2[0xf] = 0;
      param_2[0x10] = 0;
    }
    in_register_00005008 = lStack_a8;
    param_1 = lStack_b0;
    param_2[0xf] = lStack_a8;
    param_2[0xe] = lStack_b0;
    param_2[0x10] = lStack_a0;
    lStack_a8 = 0;
    lStack_a0 = 0;
    lStack_b0 = 0;
    FUN_00682b34(param_2 + 10);
    FUN_00682aa0();
    plVar5 = plVar7;
  }
  if (param_2[0x14] != 0) {
    lStack_a8 = 0;
    lStack_a0 = 0;
    lStack_b0 = 0;
    uStack_68 = uStack_68 & 0xffffffffffffff00;
    uVar9 = (param_2[0x16] - param_2[0x15]) / 0x28 + param_2[0x14];
    puStack_70 = (undefined1 *)&lStack_b0;
    if (uVar9 != 0) {
      if (0x666666666666666 < uVar9) {
        puStack_70 = (undefined1 *)&lStack_b0;
        FUN_00684bfc();
LAB_0068227c:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x682280);
        (*pcVar3)();
      }
      puStack_70 = (undefined1 *)&lStack_b0;
      func_0x00685644();
      func_0x006854bc(plVar5 + uVar9 * 5);
      for (lVar10 = uVar9 * 0x28; lStack_a8 = extraout_x8_01, lVar10 != 0; lVar10 = lVar10 + -0x28)
      {
        plVar5[4] = 0;
        plVar5[1] = in_register_00005008;
        *plVar5 = param_1;
        plVar5[3] = in_register_00005008;
        plVar5[2] = param_1;
        plVar5 = plVar5 + 5;
      }
    }
    func_0x0068555c();
    FUN_00684c08();
    uVar14 = 0;
    puVar13 = *(undefined1 **)param_2[0x11];
    puVar12 = (undefined1 *)param_2[0x13];
    bVar2 = puVar12[10];
    lVar10 = param_2[0x15];
    lVar1 = param_2[0x16];
    uStack_78 = 0;
    lVar11 = lStack_b0;
    puStack_80 = puVar13;
    while (puVar13 != puVar12 || uVar14 != bVar2) {
      if (lVar10 == lVar1) {
        uStack_68 = uStack_78 & 0xffffffff;
        uVar9 = uStack_78;
        puStack_70 = puVar13;
        while (puStack_70 != puVar12 || (uint)uVar9 != (uint)bVar2) {
          FUN_00684ca8(lVar11,puStack_70 + (ulong)((uint)uVar9 & 0xff) * 0x28 + 0x10);
          func_0x00684cd0(&puStack_70);
          lVar11 = lVar11 + 0x28;
          uVar9 = uStack_68 & 0xffffffff;
        }
        goto LAB_00682130;
      }
      lVar8 = lVar10;
      FUN_00683b14(lVar10,puVar13 + (ulong)(uVar14 & 0xff) * 0x28 + 0x10);
      if ((int)lVar8 == 0) {
        FUN_00684ca8(lVar11,puVar13 + (ulong)(uVar14 & 0xff) * 0x28 + 0x10);
        func_0x00684cd0(&puStack_80);
        puVar13 = puStack_80;
        uVar14 = (uint)uStack_78;
      }
      else {
        func_0x006853a8();
        FUN_00684ca8();
        lVar10 = lVar10 + 0x28;
      }
      lVar11 = lVar11 + 0x28;
    }
    for (; lVar10 != lVar1; lVar10 = lVar10 + 0x28) {
      func_0x006853a8();
      FUN_00684ca8();
    }
LAB_00682130:
    if (param_2[0x15] != 0) {
      FUN_00684c68(param_2 + 0x15);
      __ZdlPv(param_2[0x15]);
      param_2[0x15] = 0;
      param_2[0x16] = 0;
      param_2[0x17] = 0;
    }
    param_2[0x16] = lStack_a8;
    param_2[0x15] = lStack_b0;
    param_2[0x17] = lStack_a0;
    lStack_a8 = 0;
    lStack_a0 = 0;
    lStack_b0 = 0;
    func_0x00684d48(param_2 + 0x11);
    func_0x00684d80(&lStack_b0);
  }
  return;
}



/* Entry: 006822fc; end: 0068235f;  */

void FUN_006822fc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00465a14();
  if ((uVar1 & 1) == 0) {
    FUN_0065b0c4(param_3,param_4,param_1,param_2);
  }
  return;
}



/* Entry: 00682360; end: 006823ef;  */

long FUN_00682360(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  
  func_0x006856b0();
  uVar1 = (param_2 - param_1) / 0x28;
  while (lVar2 = unaff_x20, uVar1 != 0) {
    uVar5 = uVar1 >> 1;
    lVar4 = lVar2 + uVar5 * 0x28;
    func_0x0068557c();
    uStack_60 = *(undefined8 *)(unaff_x19 + 0x10);
    lVar3 = lVar4;
    FUN_0068280c(lVar4,auStack_70);
    uVar1 = uVar1 + (uVar1 >> 1 ^ 0xffffffffffffffff);
    unaff_x20 = lVar4 + 0x28;
    if ((int)lVar3 == 0) {
      uVar1 = uVar5;
      unaff_x20 = lVar2;
    }
  }
  return lVar2;
}



/* Entry: 006823f0; end: 00682427;  */

void FUN_006823f0(undefined8 param_1)

{
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  undefined8 auStack_20 [2];
  
  func_0x006850a0();
  auStack_20[0] = extraout_x8;
  if (in_NG == in_OV) {
    auStack_20[0] = param_1;
  }
  FUN_00485b24(auStack_20,1,0xffffffffffffffff);
  return;
}



/* Entry: 00682428; end: 0068254f;  */

void FUN_00682428(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long extraout_x9;
  long extraout_x9_00;
  long lVar4;
  long extraout_x10;
  long lVar5;
  long extraout_x10_00;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  lVar4 = param_1[1];
  uVar1 = (lVar4 - *param_1) / 0x18;
  uVar2 = param_2 - uVar1;
  if (param_2 < uVar1 || uVar2 == 0) {
    if (param_2 < uVar1) {
      func_0x0045ae2c(param_1,*param_1 + param_2 * 0x18);
      lVar4 = param_1[1];
      while (lVar4 != unaff_x19) {
        lVar4 = lVar4 + -0x18;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
  }
  else if ((ulong)((param_1[2] - lVar4) / 0x18) < uVar2) {
    plVar3 = param_1;
    FUN_0045a5ac(param_1,param_2);
    FUN_0045a67c(auStack_68,plVar3,(param_1[1] - *param_1) / 0x18,param_1 + 2);
    lStack_58 = lStack_58 + uVar2 * 0x18;
    lVar4 = param_2 * 0x18 + uVar1 * -0x18;
    while (lVar4 != 0) {
      func_0x00685670();
      lStack_58 = extraout_x9;
      lVar4 = extraout_x10;
    }
    FUN_0045a5fc(param_1,auStack_68);
    func_0x00427834(auStack_68);
  }
  else {
    lVar4 = lVar4 + uVar2 * 0x18;
    lVar5 = param_2 * 0x18 + uVar1 * -0x18;
    while (lVar5 != 0) {
      func_0x00685670();
      lVar4 = extraout_x9_00;
      lVar5 = extraout_x10_00;
    }
    param_1[1] = lVar4;
  }
  return;
}



/* Entry: 00682550; end: 006826c7;  */

undefined8 FUN_00682550(long param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  char cVar8;
  long *plVar9;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  uint uVar17;
  
  lVar14 = *(long *)(param_1 + 8);
  FUN_00682428(param_2,*(long *)(lVar14 + 0x30) +
                       (*(long *)(lVar14 + 0x40) - *(long *)(lVar14 + 0x38) >> 5));
  plVar15 = *(long **)(lVar14 + 0x28);
  bVar2 = *(byte *)((long)plVar15 + 10);
  uVar17 = 0;
  plVar12 = (long *)**(undefined8 **)(lVar14 + 0x18);
  while( true ) {
    plVar9 = plVar12;
    cVar6 = false;
    bVar7 = false;
    cVar8 = false;
    if (plVar9 == plVar15) {
      uVar16 = (uint)bVar2;
      cVar8 = SBORROW4(uVar16,uVar17);
      cVar6 = (int)(uVar16 - uVar17) < 0;
      bVar7 = uVar16 == uVar17;
    }
    if (bVar7) break;
    func_0x006855a0(plVar9 + (ulong)(uVar17 & 0xff) * 4 + 2);
    uVar5 = extraout_x9;
    if (cVar6 == cVar8) {
      uVar5 = extraout_x8;
    }
    func_0x006853e8(uVar5);
    func_0x0068547c();
    func_0x006851b8();
    if (*(char *)((long)plVar9 + 0xb) == '\0') {
      FUN_00682f40();
      plVar12 = (long *)plVar9[uVar17 + 1 & 0xff];
      while (*(char *)((long)plVar12 + 0xb) == '\0') {
        func_0x00682f00();
      }
      uVar17 = 0;
    }
    else {
      uVar16 = uVar17 + 1;
      bVar3 = *(byte *)((long)plVar9 + 10);
      plVar10 = plVar9;
      uVar17 = uVar16;
      plVar12 = plVar9;
      if ((int)(uint)bVar3 <= (int)uVar16) {
        while ((plVar12 = plVar10, uVar17 == bVar3 &&
               (plVar11 = (long *)*plVar10, uVar17 = uVar16, plVar12 = plVar9,
               *(char *)((long)plVar11 + 0xb) == '\0'))) {
          pbVar1 = (byte *)(plVar10 + 1);
          bVar3 = *(byte *)((long)plVar11 + 10);
          plVar10 = plVar11;
          uVar17 = (uint)*pbVar1;
        }
      }
    }
  }
  lVar13 = *(long *)(lVar14 + 0x38);
  lVar14 = *(long *)(lVar14 + 0x40);
  while( true ) {
    cVar8 = SBORROW8(lVar13,lVar14);
    cVar6 = lVar13 - lVar14 < 0;
    if (lVar13 == lVar14) break;
    func_0x00685148();
    lVar4 = extraout_x8_00;
    if (cVar6 == cVar8) {
      lVar4 = lVar13;
    }
    func_0x006853e8(lVar4);
    func_0x0068547c();
    func_0x006851b8();
    lVar13 = lVar13 + 0x18;
  }
  return 1;
}



/* Entry: 006826c8; end: 00682713;  */

void FUN_006826c8(void)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x006856dc();
  uVar1 = 0xc0;
  __Znwm();
  _bzero();
  FUN_00682a54(uVar1);
  *(undefined8 *)(unaff_x19 + 8) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  return;
}



/* Entry: 00682714; end: 006827cb;  */

void FUN_00682714(long param_1)

{
  long lVar1;
  long unaff_x19;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  func_0x006856dc();
  puVar5 = *(undefined8 **)(param_1 + 0x18);
  for (puVar3 = *(undefined8 **)(param_1 + 0x10); puVar3 != puVar5; puVar3 = puVar3 + 1) {
    __ZdlPv(*puVar3);
  }
  FUN_0055111c((undefined8 *)(param_1 + 0x10));
  plVar2 = *(long **)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 8) = 0;
  if (plVar2 != (long *)0x0) {
    func_0x00684d80(plVar2 + 0x15);
    func_0x00684d48(plVar2 + 0x11);
    FUN_00682aa0(plVar2 + 0xe);
    FUN_00682b34(plVar2 + 10);
    func_0x00682d0c(plVar2 + 7);
    FUN_00682da0(plVar2 + 3);
    lVar4 = *plVar2;
    if (lVar4 != 0) {
      for (lVar1 = plVar2[1]; lVar1 != lVar4; lVar1 = lVar1 + -0x28) {
        func_0x00685450();
      }
      plVar2[1] = lVar4;
      __ZdlPv(*plVar2);
    }
    func_0x006853b4();
  }
  return;
}



/* Entry: 006827cc; end: 006827cf;  */

void FUN_006827cc(long param_1)

{
  long lVar1;
  long unaff_x19;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  func_0x006856dc();
  puVar5 = *(undefined8 **)(param_1 + 0x18);
  for (puVar3 = *(undefined8 **)(param_1 + 0x10); puVar3 != puVar5; puVar3 = puVar3 + 1) {
    __ZdlPv(*puVar3);
  }
  FUN_0055111c((undefined8 *)(param_1 + 0x10));
  plVar2 = *(long **)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 8) = 0;
  if (plVar2 != (long *)0x0) {
    func_0x00684d80(plVar2 + 0x15);
    func_0x00684d48(plVar2 + 0x11);
    FUN_00682aa0(plVar2 + 0xe);
    FUN_00682b34(plVar2 + 10);
    func_0x00682d0c(plVar2 + 7);
    FUN_00682da0(plVar2 + 3);
    lVar4 = *plVar2;
    if (lVar4 != 0) {
      for (lVar1 = plVar2[1]; lVar1 != lVar4; lVar1 = lVar1 + -0x28) {
        func_0x00685450();
      }
      plVar2[1] = lVar4;
      __ZdlPv(*plVar2);
    }
    func_0x006853b4();
  }
  return;
}



/* Entry: 006827d0; end: 006827e3;  */

void FUN_006827d0(void)

{
  FUN_00682714();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 006827e4; end: 0068280b;  */

undefined1  [16] FUN_006827e4(int param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  
  param_2 = param_2 + (long)param_1 * 0x28;
  uVar1 = *(ulong *)(param_2 + 0x18);
  plVar2 = (long *)*(long *)(param_2 + 0x10);
  if (-1 < (char)*(byte *)(param_2 + 0x27)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x27);
    plVar2 = (long *)(param_2 + 0x10);
  }
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = plVar2;
  return auVar3;
}



/* Entry: 0068280c; end: 00682897;  */

uint FUN_0068280c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  func_0x006851c0();
  FUN_006823f0();
  uStack_28 = *(undefined4 *)(unaff_x20 + 0x20);
  puVar1 = &uStack_38;
  uStack_38 = param_1;
  uStack_30 = param_2;
  func_0x00682850(puVar1);
  return (uint)puVar1 >> 7 & 1;
}



/* Entry: 00682898; end: 0068296f;  */

void FUN_00682898(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  func_0x006851c0();
  puVar5 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar6 = (undefined8 *)(*(long *)(param_2 + 8) + (((long)puVar1 - (long)puVar5) / -0x28) * 0x28);
  puVar2 = puVar6;
  for (puVar3 = puVar5; puVar3 != puVar1; puVar3 = puVar3 + 5) {
    uVar4 = *puVar3;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
    *puVar2 = uVar4;
    uVar7 = puVar3[3];
    uVar4 = puVar3[2];
    puVar2[4] = puVar3[4];
    puVar2[3] = uVar7;
    puVar2[2] = uVar4;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[2] = 0;
    puVar2 = puVar2 + 5;
  }
  for (; puVar5 != puVar1; puVar5 = puVar5 + 5) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar5 + 2);
  }
  unaff_x19[1] = puVar6;
  uVar4 = *unaff_x20;
  *unaff_x20 = puVar6;
  unaff_x20[1] = uVar4;
  unaff_x19[1] = uVar4;
  uVar4 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar4;
  uVar4 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar4;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 00682970; end: 006829df;  */

long * FUN_00682970(long *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x666666666666666 < param_2) {
      FUN_0040cee8();
      lVar1 = param_1[1];
      while (lVar1 != param_1[2]) {
        param_1[2] = param_1[2] + -0x28;
        func_0x00685450();
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar1 = param_2 * 0x28;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x28;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar1 + param_2 * 0x28;
  return param_1;
}



/* Entry: 006829e0; end: 00682a27;  */

long * FUN_006829e0(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x28;
    func_0x00685450();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 00682a28; end: 00682a53;  */

uint FUN_00682a28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char in_NG;
  char in_OV;
  undefined8 uVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x11;
  
  func_0x006850a0(param_1,param_2,param_2,param_3);
  uVar1 = extraout_x11;
  uVar2 = extraout_x8;
  if (in_NG == in_OV) {
    uVar1 = extraout_x9;
    uVar2 = param_1;
  }
  func_0x00466818(uVar2,uVar1);
  return (uint)uVar2 >> 7 & 1;
}



/* Entry: 00682a54; end: 00682a9f;  */

void FUN_00682a54(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_LOOP_00a0ee78;
  param_1[4] = param_1;
  param_1[5] = &PTR_LOOP_00a0ee78;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = &PTR_LOOP_00a0ee88;
  param_1[0xb] = param_1;
  param_1[0xc] = &PTR_LOOP_00a0ee88;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = &PTR_LOOP_00a0ee98;
  param_1[0x12] = param_1;
  param_1[0x13] = &PTR_LOOP_00a0ee98;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  return;
}



/* Entry: 00682aa0; end: 00682af7;  */

void FUN_00682aa0(void)

{
  func_0x0068553c();
  func_0x00682ac4();
  return;
}



/* Entry: 00682af8; end: 00682b33;  */

void FUN_00682af8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x20) {
    func_0x00685450();
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 00682b34; end: 00682b6b;  */

void FUN_00682b34(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    FUN_00682b6c(*param_1);
  }
  *param_1 = &PTR_LOOP_00a0ee88;
  param_1[2] = &PTR_LOOP_00a0ee88;
  param_1[3] = 0;
  return;
}



/* Entry: 00682b6c; end: 00682c3f;  */

void FUN_00682b6c(long param_1)

{
  bool bVar1;
  long lVar2;
  char cVar3;
  int extraout_w8;
  int extraout_w8_00;
  long *unaff_x19;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  
  func_0x00685470();
  if (extraout_w8 == 0) {
    if (*(char *)(param_1 + 10) != '\0') {
      plVar6 = (long *)*unaff_x19;
      do {
        func_0x00682c94();
        func_0x00685470();
      } while (extraout_w8_00 == 0);
      uVar7 = (ulong)*(byte *)(unaff_x19 + 1);
      lVar4 = *unaff_x19;
      do {
        lVar2 = lVar4;
        FUN_00682cd4();
        plVar5 = *(long **)(lVar2 + uVar7 * 8);
        cVar3 = '\0';
        if (*(char *)((long)plVar5 + 0xb) == '\0') {
          while (cVar3 == '\0') {
            func_0x00682c94();
            cVar3 = *(char *)((long)plVar5 + 0xb);
          }
          uVar7 = (ulong)*(byte *)(plVar5 + 1);
          lVar4 = *plVar5;
        }
        FUN_00682c40(plVar5,*(undefined1 *)((long)plVar5 + 10));
        func_0x006853b4();
        if (*(byte *)(lVar4 + 10) <= uVar7) {
          do {
            func_0x00685230();
            FUN_00682c40();
            func_0x00685658();
            bVar1 = plVar6 <= plVar5;
            if (plVar5 == plVar6) {
              return;
            }
            func_0x0068549c();
          } while (bVar1);
        }
        uVar7 = uVar7 + 1;
      } while( true );
    }
  }
  else {
    FUN_00682c40();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00682c40; end: 00682c6f;  */

void FUN_00682c40(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  param_1 = param_1 + 0x18;
  uVar2 = (param_2 & 0xffffffff) << 5;
  uVar1 = param_2 & 0xffffffff;
  while (uVar1 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1);
    param_1 = param_1 + 0x20;
    uVar2 = uVar2 - 0x20;
    uVar1 = uVar2;
  }
  return;
}



/* Entry: 00682c70; end: 00682cab;  */

void FUN_00682c70(void)

{
  func_0x006850b8(1);
  FUN_00682cac();
  return;
}



/* Entry: 00682cac; end: 00682ccf;  */

long FUN_00682cac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_00682cd0();
  return lVar1 + *(long *)(param_1 + 0x20) * 8;
}



/* Entry: 00682cd0; end: 00682cd3;  */

ulong FUN_00682cd0(long *param_1)

{
  return param_1[1] * 4 + *param_1 * 8 + param_1[2] + param_1[3] * 0x20 + 7U & 0xfffffffffffffff8;
}



/* Entry: 00682cd4; end: 00682d63;  */

long FUN_00682cd4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00684e08(1,4);
  FUN_00682cd0();
  return param_1 + lVar1;
}



/* Entry: 00682d64; end: 00682d9f;  */

void FUN_00682d64(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x20) {
    func_0x00685450();
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 00682da0; end: 00682dd7;  */

void FUN_00682da0(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    FUN_00682dd8(*param_1);
  }
  *param_1 = &PTR_LOOP_00a0ee78;
  param_1[2] = &PTR_LOOP_00a0ee78;
  param_1[3] = 0;
  return;
}



/* Entry: 00682dd8; end: 00682eab;  */

void FUN_00682dd8(long param_1)

{
  bool bVar1;
  long lVar2;
  char cVar3;
  int extraout_w8;
  int extraout_w8_00;
  long *unaff_x19;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  
  func_0x00685470();
  if (extraout_w8 == 0) {
    if (*(char *)(param_1 + 10) != '\0') {
      plVar6 = (long *)*unaff_x19;
      do {
        func_0x00682f00();
        func_0x00685470();
      } while (extraout_w8_00 == 0);
      uVar7 = (ulong)*(byte *)(unaff_x19 + 1);
      lVar4 = *unaff_x19;
      do {
        lVar2 = lVar4;
        FUN_00682f40();
        plVar5 = *(long **)(lVar2 + uVar7 * 8);
        cVar3 = '\0';
        if (*(char *)((long)plVar5 + 0xb) == '\0') {
          while (cVar3 == '\0') {
            func_0x00682f00();
            cVar3 = *(char *)((long)plVar5 + 0xb);
          }
          uVar7 = (ulong)*(byte *)(plVar5 + 1);
          lVar4 = *plVar5;
        }
        FUN_00682eac(plVar5,*(undefined1 *)((long)plVar5 + 10));
        func_0x006853b4();
        if (*(byte *)(lVar4 + 10) <= uVar7) {
          do {
            func_0x00685230();
            FUN_00682eac();
            func_0x00685658();
            bVar1 = plVar6 <= plVar5;
            if (plVar5 == plVar6) {
              return;
            }
            func_0x0068549c();
          } while (bVar1);
        }
        uVar7 = uVar7 + 1;
      } while( true );
    }
  }
  else {
    FUN_00682eac();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00682eac; end: 00682edb;  */

void FUN_00682eac(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  param_1 = param_1 + 0x18;
  uVar2 = (param_2 & 0xffffffff) << 5;
  uVar1 = param_2 & 0xffffffff;
  while (uVar1 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1);
    param_1 = param_1 + 0x20;
    uVar2 = uVar2 - 0x20;
    uVar1 = uVar2;
  }
  return;
}



/* Entry: 00682edc; end: 00682f17;  */

void FUN_00682edc(void)

{
  func_0x006850b8(1);
  FUN_00682f18();
  return;
}



/* Entry: 00682f18; end: 00682f3b;  */

long FUN_00682f18(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_00682f3c();
  return lVar1 + *(long *)(param_1 + 0x20) * 8;
}



/* Entry: 00682f3c; end: 00682f3f;  */

ulong FUN_00682f3c(long *param_1)

{
  return param_1[1] * 4 + *param_1 * 8 + param_1[2] + param_1[3] * 0x20 + 7U & 0xfffffffffffffff8;
}



/* Entry: 00682f40; end: 00682f97;  */

long FUN_00682f40(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00684e08(1,4);
  FUN_00682f3c();
  return param_1 + lVar1;
}



/* Entry: 00682f98; end: 00682feb;  */

void FUN_00682f98(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 uStack_11;
  
  uVar1 = param_1[1];
  puVar3 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar3 = param_1;
  }
  uVar2 = param_2[1];
  puVar4 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar4 = param_2;
  }
  FUN_00475178(&uStack_11,puVar3,uVar1,puVar4,uVar2);
  return;
}



/* Entry: 00682fec; end: 0068302b;  */

void FUN_00682fec(void)

{
  func_0x00684f3c();
  func_0x00684ed4();
  return;
}



/* Entry: 0068302c; end: 006830d3;  */

bool FUN_0068302c(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = (long)*(int *)(param_4 + 0x38) << 3;
  do {
    if (lVar2 == 0) {
      lVar2 = (long)*(int *)(param_4 + 0x80) << 3;
      do {
        bVar1 = lVar2 == 0;
        if (lVar2 == 0) {
          return true;
        }
        func_0x006856c8();
        FUN_006830d4();
        lVar2 = lVar2 + -8;
      } while ((param_1 & 1) != 0);
      return bVar1;
    }
    func_0x006856c8();
    FUN_0068302c();
    lVar2 = lVar2 + -8;
  } while ((param_1 & 1) != 0);
  return false;
}



/* Entry: 006830d4; end: 0068355f;  */

undefined8 FUN_006830d4(long param_1,char *param_2,long param_3,long param_4)

{
  undefined8 **ppuVar1;
  char cVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 ***pppuVar8;
  undefined8 ***pppuVar9;
  undefined4 extraout_w8;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 **extraout_x10;
  undefined8 **extraout_x10_00;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 **ppuVar16;
  byte bVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  ulong uStack_d8;
  undefined4 uStack_c8;
  undefined4 auStack_c0 [2];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 **appuStack_98 [2];
  undefined4 uStack_88;
  undefined8 **ppuStack_80;
  undefined8 ***pppuStack_78;
  undefined4 uStack_70;
  
  func_0x0068539c(*(undefined8 *)(param_4 + 0x20));
  if (param_3 < 0) {
    if (*(long *)(param_2 + 8) == 0) {
      return 1;
    }
    param_2 = *(char **)param_2;
  }
  else if ((int)param_3 == 0) {
    return 1;
  }
  if (*param_2 == '.') {
    func_0x006852b0(*(undefined8 *)(param_1 + 8));
    puVar4 = &uStack_b8;
    auStack_c0[0] = extraout_w8;
    FUN_00681be8();
    uStack_a0 = *(undefined4 *)(param_4 + 0x48);
    if (*(long *)(param_1 + 0xa0) == 0) {
      puVar4 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
      FUN_00683a64();
      *(undefined8 **)(param_1 + 0x98) = puVar4;
      *(undefined8 **)(param_1 + 0x88) = puVar4;
    }
    puVar5 = (undefined8 *)(param_1 + 0x88);
    puVar14 = puVar5;
    while( true ) {
      uVar20 = 0;
      puVar14 = (undefined8 *)*puVar14;
      uVar13 = (ulong)*(byte *)((long)puVar14 + 10);
      while (uVar19 = uVar13, uVar20 != uVar19) {
        uVar13 = uVar20 + uVar19 >> 1;
        puVar4 = puVar14 + uVar13 * 5 + 2;
        FUN_00683b14(puVar4,auStack_c0);
        if ((int)puVar4 != 0) {
          uVar20 = uVar13 + 1;
          uVar13 = uVar19;
        }
      }
      bVar17 = *(byte *)((long)puVar14 + 0xb);
      if (bVar17 != 0) break;
      func_0x006852d8();
      puVar14 = puVar4 + (uVar19 & 0xff);
    }
    puVar12 = puVar14;
    uVar20 = uVar19;
    do {
      if ((uint)uVar20 != (uint)*(byte *)((long)puVar12 + 10)) {
        puVar4 = (undefined8 *)auStack_c0;
        FUN_00683b14(puVar4,puVar12 + (long)(int)(uint)uVar20 * 5 + 2);
        if ((int)puVar4 == 0) {
          func_0x00685458();
          goto LAB_006834b4;
        }
        bVar17 = *(byte *)((long)puVar14 + 0xb);
        break;
      }
      uVar20 = (ulong)*(byte *)(puVar12 + 1);
      puVar12 = (undefined8 *)*puVar12;
    } while (*(char *)((long)puVar12 + 0xb) == '\0');
    uStack_d8 = uVar19 & 0xffffffff;
    if (bVar17 == 0) {
      puStack_e0 = puVar14;
      func_0x006852d8();
      puVar14 = puVar4 + (uVar19 & 0xff);
      while( true ) {
        puVar14 = (undefined8 *)*puVar14;
        bVar17 = *(byte *)((long)puVar14 + 0xb);
        uVar19 = (ulong)*(byte *)((long)puVar14 + 10);
        if (bVar17 != 0) break;
        puStack_e0 = puVar14;
        func_0x006852d8();
        puVar14 = puVar4 + uVar19;
      }
      uStack_d8 = CONCAT44(uStack_d8._4_4_,(uint)*(byte *)((long)puVar14 + 10));
      uVar20 = uVar19;
    }
    else {
      uVar20 = (ulong)*(byte *)((long)puVar14 + 10);
    }
    uVar18 = (uint)uVar19;
    uVar11 = (uint)uVar20;
    puStack_e0 = puVar14;
    if (uVar11 == bVar17) {
      if (uVar11 < 6) {
        uVar11 = (uVar11 & 0x7f) << 1;
        if (5 < uVar11) {
          uVar11 = 6;
        }
        puVar5 = (undefined8 *)(ulong)uVar11;
        FUN_00683a64();
        puStack_e0 = puVar5;
        FUN_00683e30();
        *(undefined1 *)((long)puVar5 + 10) = *(undefined1 *)((long)puVar14 + 10);
        *(undefined1 *)((long)puVar14 + 10) = 0;
        func_0x00683e80();
        *(undefined8 **)(param_1 + 0x98) = puVar5;
        *(undefined8 **)(param_1 + 0x88) = puVar5;
        puVar4 = puVar14;
        puVar14 = puVar5;
      }
      else {
        FUN_00683ba4(puVar5,&puStack_e0);
        uVar18 = (uint)(byte)uStack_d8;
        puVar4 = puVar5;
        puVar14 = puStack_e0;
      }
    }
    uVar11 = uVar18 & 0xff;
    uVar20 = (ulong)uVar11;
    bVar17 = *(byte *)((long)puVar14 + 10);
    uVar18 = uVar18 & 0xff;
    cVar2 = SBORROW4((uint)bVar17,uVar18);
    uVar10 = (uint)bVar17;
    cVar3 = (int)(uVar10 - uVar18) < 0;
    if (uVar18 <= bVar17 && uVar10 != uVar18) {
      puVar4 = puVar14;
      FUN_00684180(puVar14,uVar10 - uVar11,uVar11 + 1,uVar20,puVar14);
    }
    *(undefined4 *)(puVar14 + uVar20 * 5 + 2) = auStack_c0[0];
    puVar14[uVar20 * 5 + 5] = uStack_a8;
    puVar14[uVar20 * 5 + 4] = uStack_b0;
    puVar14[uVar20 * 5 + 3] = uStack_b8;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_b8 = 0;
    *(undefined4 *)(puVar14 + uVar20 * 5 + 6) = uStack_a0;
    bVar17 = *(char *)((long)puVar14 + 10) + 1;
    *(byte *)((long)puVar14 + 10) = bVar17;
    if (*(char *)((long)puVar14 + 0xb) == '\0') {
      uVar11 = uVar11 + 1;
      uVar18 = (uint)bVar17;
      cVar2 = SBORROW4(uVar11,uVar18);
      cVar3 = (int)(uVar11 - uVar18) < 0;
      if (uVar11 < uVar18) {
        while( true ) {
          uVar18 = (uint)bVar17;
          cVar2 = SBORROW4(uVar11,uVar18);
          cVar3 = (int)(uVar11 - uVar18) < 0;
          if (uVar18 <= uVar11) break;
          func_0x006852d8();
          lVar15 = puVar4[(byte)(bVar17 - 1)];
          puVar4 = puVar14;
          FUN_00684148();
          puVar4[bVar17] = lVar15;
          *(byte *)(lVar15 + 8) = bVar17;
          bVar17 = bVar17 - 1;
        }
      }
    }
    ppuVar7 = *(undefined8 ***)(param_1 + 0xa8);
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
    ppuVar16 = *(undefined8 ***)(param_1 + 0xb0);
    pppuVar9 = (undefined8 ***)((long)&MACH_HEADER.magic + 1);
    FUN_00479db4(&uStack_f8,*(ulong *)(param_4 + 0x20) & 0xfffffffffffffffc,1,0xffffffffffffffff);
    uStack_c8 = *(undefined4 *)(param_4 + 0x48);
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uVar20 = ((long)ppuVar16 - (long)ppuVar7) / 0x28;
    while (ppuVar1 = ppuVar7, uVar20 != 0) {
      uVar13 = uVar20 >> 1;
      func_0x00685684();
      ppuStack_80 = extraout_x10;
      if (cVar3 == cVar2) {
        ppuStack_80 = &puStack_e0;
      }
      uStack_70 = uStack_c8;
      pppuVar9 = &ppuStack_80;
      ppuVar6 = ppuVar1 + uVar13 * 5;
      FUN_0068280c();
      cVar2 = '\0';
      cVar3 = (int)ppuVar6 < 0;
      ppuVar7 = ppuVar1 + uVar13 * 5 + 5;
      uVar20 = uVar20 + ~uVar13;
      if ((int)ppuVar6 == 0) {
        ppuVar7 = ppuVar1;
        uVar20 = uVar13;
      }
    }
    cVar2 = SBORROW8((long)ppuVar16,(long)ppuVar1);
    cVar3 = (long)ppuVar16 - (long)ppuVar1 < 0;
    if (ppuVar16 == ppuVar1) {
      func_0x00685660();
      func_0x006851b8();
      func_0x00685458();
    }
    else {
      func_0x00685684();
      appuStack_98[0] = extraout_x10_00;
      if (cVar3 == cVar2) {
        appuStack_98[0] = &puStack_e0;
      }
      uStack_88 = uStack_c8;
      ppuVar7 = ppuVar1;
      FUN_006823f0();
      uStack_70 = *(undefined4 *)(ppuVar1 + 4);
      pppuVar8 = appuStack_98;
      ppuStack_80 = ppuVar7;
      pppuStack_78 = pppuVar9;
      func_0x00682850(pppuVar8,&ppuStack_80);
      func_0x00685660();
      func_0x006851b8();
      func_0x00685458();
      if (((uint)pppuVar8 >> 7 & 1) == 0) {
LAB_006834b4:
        func_0x00685160();
        func_0x007766a0();
        FUN_00554ab4(auStack_c0,&UNK_0091344f,0x3f);
        func_0x0068541c(*(undefined8 *)(param_4 + 0x20),auStack_c0);
        FUN_00551380(auStack_c0,&UNK_0091348f);
        func_0x0068541c(*(undefined8 *)(param_4 + 0x18));
        FUN_00551380();
        FUN_00537a7c();
        FUN_00682fec();
        func_0x00554c74();
        func_0x006855fc();
        return 0;
      }
    }
  }
  return 1;
}



/* Entry: 00683560; end: 0068356b;  */

void FUN_00683560(ulong param_1)

{
  func_0x0068507c();
  FUN_00682edc(param_1 & 0xffffffff);
  FUN_00683594();
  func_0x00685374();
  return;
}



/* Entry: 0068356c; end: 00683593;  */

void FUN_0068356c(undefined4 param_1)

{
  FUN_00682edc(param_1);
  FUN_00683594();
  func_0x00685374();
  return;
}



/* Entry: 00683594; end: 006835ef;  */

void FUN_00683594(void)

{
  func_0x0068506c();
  return;
}



/* Entry: 006835f0; end: 0068385f;  */

void FUN_006835f0(void)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar5;
  char cVar6;
  ulong uVar7;
  undefined4 extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int iVar8;
  long extraout_x8;
  long lVar9;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w10;
  uint extraout_w10_00;
  ulong *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  uint uVar10;
  long unaff_x23;
  uint uVar11;
  long unaff_x24;
  
  func_0x00685710();
  func_0x00685018();
  if ((bool)in_ZR) {
    FUN_0068389c(0);
    func_0x0068556c();
    FUN_006838dc();
    *unaff_x22 = unaff_x23;
    unaff_x21 = (long *)*unaff_x19;
LAB_00683774:
    func_0x006854ec();
    if (extraout_w8_01 == 0) {
      unaff_x20 = (long *)(ulong)((uint)unaff_x21 & 0xff);
      FUN_0068389c(unaff_x20,unaff_x23);
      func_0x00684f90();
      FUN_00683900();
    }
    else {
      FUN_00682edc(7);
      FUN_00683594();
      func_0x00684ef4();
      FUN_00683900();
      func_0x0068550c();
      if ((bool)in_ZR) {
        unaff_x22[2] = (long)unaff_x20;
      }
    }
  }
  else {
    bVar3 = *(byte *)(unaff_x21 + 1);
    uVar11 = (uint)unaff_x24;
    if (bVar3 != 0) {
      unaff_x20 = (long *)(ulong)(bVar3 - 1);
      FUN_00682f40();
      func_0x00685408();
      if (*(byte *)((long)unaff_x20 + 10) < 7) {
        func_0x00685130();
        cVar6 = uVar11 > extraout_w10 && (int)((extraout_w9 & 0xff) - 6) < 0;
        if (uVar11 <= extraout_w10 || (extraout_w9 & 0xff) < 7) {
          func_0x0068532c(unaff_x20 + extraout_x8 * 4);
          FUN_00683898();
          func_0x00684f4c();
          FUN_00683860();
          func_0x0068532c(*unaff_x20 + (ulong)*(byte *)(unaff_x20 + 1) * 0x20);
          FUN_00683898();
          func_0x00684fe0();
          FUN_00683860();
          if (*(char *)((long)unaff_x20 + 0xb) == '\0') {
            func_0x006851b0();
            lVar9 = 0;
            while( true ) {
              cVar5 = SBORROW8(unaff_x24,lVar9);
              cVar6 = unaff_x24 - lVar9 < 0;
              if (unaff_x24 == lVar9) break;
              func_0x00684fa8();
              FUN_006838dc();
              lVar9 = unaff_x23;
            }
            while (func_0x006854ac(), cVar6 == cVar5) {
              func_0x00685110();
              FUN_006838dc();
            }
          }
          func_0x00684f18();
          *(undefined4 *)(unaff_x19 + 1) = extraout_w8;
          if (!(bool)cVar6) {
            return;
          }
          func_0x0068552c();
          iVar8 = extraout_w8_00;
          goto LAB_006837cc;
        }
      }
    }
    bVar4 = *(byte *)(unaff_x23 + 10);
    if ((uint)bVar4 <= (uint)bVar3) {
LAB_0068373c:
      in_OV = SBORROW4((uint)bVar4,7);
      in_NG = (int)(bVar4 - 7) < 0;
      in_ZR = bVar4 == 7;
      if ((bool)in_ZR) {
        func_0x006852e0();
        FUN_006835f0();
        unaff_x21 = (long *)*unaff_x19;
        unaff_x23 = *unaff_x21;
      }
      goto LAB_00683774;
    }
    unaff_x20 = (long *)(ulong)(bVar3 + 1);
    FUN_00682f40();
    func_0x00685408();
    uVar7 = (ulong)*(byte *)((long)unaff_x20 + 10);
    cVar5 = SBORROW8(uVar7,6);
    cVar6 = (long)(uVar7 - 6) < 0;
    if (6 < uVar7) goto LAB_0068373c;
    func_0x00684dc8(7);
    uVar10 = extraout_w10_00 & 0xff;
    bVar1 = cVar6 != cVar5;
    in_OV = bVar1 && SBORROW4(uVar10,6);
    in_ZR = bVar1 && uVar10 == 6;
    in_NG = bVar1 && (int)(uVar10 - 6) < 0;
    if ((bVar1 && 5 < uVar10) && (!bVar1 || uVar10 != 6)) goto LAB_0068373c;
    func_0x006852f4();
    FUN_00683a2c();
    func_0x006853bc();
    FUN_00683898();
    func_0x00684fc4();
    FUN_00683860();
    func_0x0068532c(*unaff_x21 + (ulong)*(byte *)(unaff_x21 + 1) * 0x20);
    FUN_00683898();
    if (*(char *)((long)unaff_x21 + 0xb) == '\0') {
      func_0x00685360();
      if (unaff_x23 != 0) {
        do {
          func_0x006854fc();
          FUN_00682f40();
          func_0x0068529c();
          FUN_006838dc();
        } while (bVar3 != 0);
      }
      func_0x006851b0();
      uVar10 = 1;
      while( true ) {
        uVar2 = uVar10 & 0xff;
        in_OV = SBORROW4(uVar11,uVar2);
        in_NG = (int)(uVar11 - uVar2) < 0;
        in_ZR = uVar11 == uVar2;
        if (uVar11 < uVar2) break;
        func_0x00684e98();
        FUN_006838dc();
        uVar10 = uVar10 + 1;
      }
    }
    func_0x00684f80();
    func_0x0068554c();
  }
  func_0x006852c4();
  if ((bool)in_ZR || in_NG != in_OV) {
    return;
  }
  iVar8 = extraout_w8_02 + ~extraout_w9_00;
LAB_006837cc:
  *(int *)(unaff_x19 + 1) = iVar8;
  *unaff_x19 = (ulong)unaff_x20;
  return;
}



/* Entry: 00683860; end: 00683897;  */

void FUN_00683860(void)

{
  long unaff_x21;
  
  func_0x00685588();
  for (; unaff_x21 != 0; unaff_x21 = unaff_x21 + -0x20) {
    func_0x0068519c();
    FUN_00683898();
  }
  return;
}



/* Entry: 00683898; end: 0068389b;  */

void FUN_00683898(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 4);
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = uVar2;
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (param_2 + 2);
  return;
}



/* Entry: 0068389c; end: 006838db;  */

void FUN_0068389c(void)

{
  func_0x00684e08(1,4);
  FUN_00682f18();
  FUN_00683594();
  func_0x00685244();
  return;
}



/* Entry: 006838dc; end: 006838ff;  */

void FUN_006838dc(void)

{
  func_0x0068551c();
  FUN_006839f4();
  func_0x006854cc();
  return;
}



/* Entry: 00683900; end: 006839f3;  */

void FUN_00683900(long param_1,int param_2)

{
  uint uVar1;
  int extraout_w8;
  int extraout_w8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  byte bVar2;
  long unaff_x22;
  uint uVar3;
  
  func_0x006856b0();
  if (param_2 == 7) {
    uVar3 = 0;
  }
  else if (param_2 == 0) {
    uVar3 = *(byte *)(unaff_x20 + 10) - 1;
  }
  else {
    uVar3 = (uint)(*(byte *)(unaff_x20 + 10) >> 1);
  }
  func_0x00684e1c(uVar3);
  FUN_00683860();
  func_0x00684ffc();
  uVar3 = (int)unaff_x20 + extraout_w8 * 0x20;
  if ((uint)unaff_x22 < (uint)*(byte *)(unaff_x21 + 10)) {
    func_0x00685208();
    FUN_00683a2c();
  }
  func_0x00684e44(unaff_x21 + unaff_x22 * 0x20);
  func_0x0068521c();
  if ((extraout_w8_00 == 0) && (uVar1 = (uint)unaff_x22 + 1, uVar1 < (uVar3 & 0xff))) {
    while (uVar1 < (uVar3 & 0xff)) {
      func_0x006851b0();
      func_0x006851f4();
      FUN_006839f4();
      func_0x0068548c();
    }
  }
  func_0x006853f8();
  func_0x00685308();
  FUN_006839f4();
  *(long *)(param_1 + unaff_x21 * 8) = unaff_x19;
  if (*(char *)(unaff_x20 + 0xb) == '\0') {
    FUN_00682f40();
    for (bVar2 = 0; bVar2 <= *(byte *)(unaff_x19 + 10); bVar2 = bVar2 + 1) {
      func_0x00685088();
      FUN_006838dc();
    }
  }
  return;
}



/* Entry: 006839f4; end: 00683a2b;  */

long FUN_006839f4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00684e08(1,4);
  FUN_00682f3c();
  return param_1 + lVar1;
}



/* Entry: 00683a2c; end: 00683a63;  */

void FUN_00683a2c(void)

{
  long unaff_x21;
  
  func_0x006851cc();
  for (; unaff_x21 != 0; unaff_x21 = unaff_x21 + 0x20) {
    func_0x0068519c();
    FUN_00683898();
  }
  return;
}



/* Entry: 00683a64; end: 00683a8b;  */

void FUN_00683a64(undefined4 param_1)

{
  FUN_00683a8c(param_1);
  func_0x00683ab0();
  func_0x00685374();
  return;
}



/* Entry: 00683a8c; end: 00683ac7;  */

void FUN_00683a8c(void)

{
  func_0x006850b8(1);
  FUN_00683ac8();
  return;
}



/* Entry: 00683ac8; end: 00683aeb;  */

long FUN_00683ac8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_00683aec();
  return lVar1 + *(long *)(param_1 + 0x20) * 8;
}



/* Entry: 00683aec; end: 00683b13;  */

ulong FUN_00683aec(long *param_1)

{
  return param_1[1] * 4 + *param_1 * 8 + param_1[2] + param_1[3] * 0x28 + 7U & 0xfffffffffffffff8;
}



/* Entry: 00683b14; end: 00683ba3;  */

uint FUN_00683b14(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  func_0x006851c0();
  FUN_006823f0();
  uStack_28 = *(undefined4 *)(unaff_x20 + 0x20);
  uStack_38 = param_1;
  uStack_30 = param_2;
  FUN_006823f0();
  uStack_40 = *(undefined4 *)(unaff_x19 + 0x20);
  puVar1 = &uStack_38;
  uStack_48 = param_2;
  func_0x00682850(puVar1,auStack_50);
  return (uint)puVar1 >> 7 & 1;
}



/* Entry: 00683ba4; end: 00683e2f;  */

void FUN_00683ba4(void)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar5;
  char cVar6;
  ulong uVar7;
  undefined4 extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int iVar8;
  ulong extraout_x8;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w10;
  uint extraout_w10_00;
  ulong *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  uint uVar9;
  long unaff_x23;
  uint uVar10;
  ulong unaff_x24;
  
  func_0x00685710();
  func_0x00685018();
  if ((bool)in_ZR) {
    FUN_00683fd0(0);
    func_0x0068556c();
    FUN_00684010();
    *unaff_x22 = unaff_x23;
    unaff_x21 = (long *)*unaff_x19;
LAB_00683d44:
    func_0x006854ec();
    if (extraout_w8_01 == 0) {
      unaff_x20 = (long *)(ulong)((uint)unaff_x21 & 0xff);
      FUN_00683fd0(unaff_x20,unaff_x23);
      func_0x00684f90();
      FUN_00684034();
    }
    else {
      FUN_00683a8c(6);
      func_0x00683ab0();
      func_0x00684ef4();
      FUN_00684034();
      func_0x0068550c();
      if ((bool)in_ZR) {
        unaff_x22[2] = (long)unaff_x20;
      }
    }
  }
  else {
    bVar3 = *(byte *)(unaff_x21 + 1);
    uVar10 = (uint)unaff_x24;
    if (bVar3 != 0) {
      unaff_x20 = (long *)(ulong)(bVar3 - 1);
      func_0x006852d8();
      func_0x00685408();
      if (*(byte *)((long)unaff_x20 + 10) < 6) {
        func_0x00685130();
        bVar1 = uVar10 <= (extraout_w10 & 0xff);
        cVar6 = !bVar1 && (int)((extraout_w9 & 0xff) - 5) < 0;
        if (bVar1 || (extraout_w9 & 0xff) < 6) {
          func_0x0068532c(unaff_x20 + (extraout_x8 & 0xffffffff) * 5);
          FUN_00683f54();
          func_0x00684f4c();
          FUN_00683e30();
          func_0x0068532c(*unaff_x20 + (ulong)*(byte *)(unaff_x20 + 1) * 0x28);
          FUN_00683f54();
          func_0x00684fe0();
          FUN_00683e30();
          if (*(char *)((long)unaff_x20 + 0xb) == '\0') {
            func_0x00685620();
            uVar7 = 0;
            while( true ) {
              cVar5 = SBORROW8(unaff_x24,uVar7);
              cVar6 = (long)(unaff_x24 - uVar7) < 0;
              if (unaff_x24 == uVar7) break;
              func_0x00684fa8();
              FUN_00684010();
              uVar7 = 0x28;
            }
            while (func_0x006854ac(), cVar6 == cVar5) {
              func_0x00685110();
              FUN_00684010();
            }
          }
          func_0x00684f18();
          *(undefined4 *)(unaff_x19 + 1) = extraout_w8;
          if (!(bool)cVar6) {
            return;
          }
          func_0x0068552c();
          iVar8 = extraout_w8_00;
          goto LAB_00683d9c;
        }
      }
    }
    bVar4 = *(byte *)(unaff_x23 + 10);
    if ((uint)bVar4 <= (uint)bVar3) {
LAB_00683d0c:
      in_OV = SBORROW4((uint)bVar4,6);
      in_NG = (int)(bVar4 - 6) < 0;
      in_ZR = bVar4 == 6;
      if ((bool)in_ZR) {
        func_0x006852e0();
        FUN_00683ba4();
        unaff_x21 = (long *)*unaff_x19;
        unaff_x23 = *unaff_x21;
      }
      goto LAB_00683d44;
    }
    unaff_x20 = (long *)(ulong)(bVar3 + 1);
    func_0x006852d8();
    func_0x00685408();
    uVar7 = (ulong)*(byte *)((long)unaff_x20 + 10);
    cVar5 = SBORROW8(uVar7,5);
    cVar6 = (long)(uVar7 - 5) < 0;
    if (5 < uVar7) goto LAB_00683d0c;
    func_0x00684dc8(6);
    uVar9 = extraout_w10_00 & 0xff;
    bVar1 = cVar6 != cVar5;
    in_OV = bVar1 && SBORROW4(uVar9,5);
    in_ZR = bVar1 && uVar9 == 5;
    in_NG = bVar1 && (int)(uVar9 - 5) < 0;
    if ((bVar1 && 4 < uVar9) && (!bVar1 || uVar9 != 5)) goto LAB_00683d0c;
    func_0x006852f4();
    FUN_00684180();
    FUN_00683f54(unaff_x20 + (unaff_x24 & 0xffffffff) * 5 + -3,
                 *unaff_x21 + (ulong)*(byte *)(unaff_x21 + 1) * 0x28 + 0x10);
    func_0x00684fc4();
    FUN_00683e30();
    func_0x0068532c(*unaff_x21 + (ulong)*(byte *)(unaff_x21 + 1) * 0x28);
    FUN_00683f54();
    if (*(char *)((long)unaff_x21 + 0xb) == '\0') {
      func_0x00685360();
      do {
        func_0x006854fc();
        func_0x00683b6c();
        func_0x0068529c();
        FUN_00684010();
      } while (bVar3 != 0);
      func_0x00685620();
      uVar9 = 1;
      while( true ) {
        uVar2 = uVar9 & 0xff;
        in_OV = SBORROW4(uVar10,uVar2);
        in_NG = (int)(uVar10 - uVar2) < 0;
        in_ZR = uVar10 == uVar2;
        if (uVar10 < uVar2) break;
        func_0x00684e98();
        FUN_00684010();
        uVar9 = uVar9 + 1;
      }
    }
    func_0x00684f80();
    func_0x0068554c();
  }
  func_0x006852c4();
  if ((bool)in_ZR || in_NG != in_OV) {
    return;
  }
  iVar8 = extraout_w8_02 + ~extraout_w9_00;
LAB_00683d9c:
  *(int *)(unaff_x19 + 1) = iVar8;
  *unaff_x19 = (ulong)unaff_x20;
  return;
}



/* Entry: 00683e30; end: 00683f53;  */

void FUN_00683e30(undefined8 param_1,long param_2)

{
  for (param_2 = param_2 * 0x28; param_2 != 0; param_2 = param_2 + -0x28) {
    func_0x0068519c();
    FUN_00683f54();
  }
  return;
}



/* Entry: 00683f54; end: 00683f83;  */

void FUN_00683f54(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 4);
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = uVar2;
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  param_1[8] = param_2[8];
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (param_2 + 2);
  return;
}



/* Entry: 00683f84; end: 00683fb7;  */

void FUN_00683f84(long param_1,uint param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x18;
  for (lVar1 = (ulong)param_2 * 0x28; lVar1 != 0; lVar1 = lVar1 + -0x28) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



/* Entry: 00683fb8; end: 00683fcf;  */

undefined8 FUN_00683fb8(undefined8 *param_1)

{
  func_0x00683b6c();
  return *param_1;
}



/* Entry: 00683fd0; end: 0068400f;  */

void FUN_00683fd0(void)

{
  func_0x00685388(1,4);
  FUN_00683ac8();
  func_0x00683ab0();
  func_0x00685244();
  return;
}



/* Entry: 00684010; end: 00684033;  */

void FUN_00684010(void)

{
  func_0x0068551c();
  FUN_00684148();
  func_0x006854cc();
  return;
}



/* Entry: 00684034; end: 00684147;  */

void FUN_00684034(undefined8 param_1,int param_2)

{
  int extraout_w8;
  ulong extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  byte bVar1;
  uint unaff_w22;
  uint uVar2;
  long lVar3;
  
  func_0x006856b0();
  if (param_2 == 6) {
    uVar2 = 0;
  }
  else if (param_2 == 0) {
    uVar2 = *(byte *)(unaff_x20 + 10) - 1;
  }
  else {
    uVar2 = (uint)(*(byte *)(unaff_x20 + 10) >> 1);
  }
  func_0x00684e1c(uVar2);
  FUN_00683e30();
  func_0x00684ffc();
  lVar3 = unaff_x20 + (extraout_x8 & 0xffffffff) * 0x28;
  if (unaff_w22 < *(byte *)(unaff_x21 + 10)) {
    func_0x00685208();
    FUN_00684180();
  }
  func_0x00684e44(unaff_x21 + (ulong)unaff_w22 * 0x28);
  *(undefined4 *)(extraout_x8_00 + 0x30) = *(undefined4 *)(lVar3 + 0x30);
  func_0x0068521c();
  if (extraout_w8 == 0) {
    uVar2 = (uint)lVar3;
    if (unaff_w22 + 1 < (uVar2 & 0xff)) {
      while (unaff_w22 + 1 < (uVar2 & 0xff)) {
        func_0x00685620();
        func_0x006851f4();
        FUN_00684148();
        func_0x0068548c();
      }
    }
  }
  lVar3 = unaff_x20 + (ulong)*(byte *)(unaff_x20 + 10) * 0x28 + 0x18;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00685308();
  FUN_00684148();
  *(long *)(lVar3 + unaff_x21 * 8) = unaff_x19;
  if (*(char *)(unaff_x20 + 0xb) == '\0') {
    func_0x00683b6c();
    for (bVar1 = 0; bVar1 <= *(byte *)(unaff_x19 + 10); bVar1 = bVar1 + 1) {
      func_0x00685088();
      FUN_00684010();
    }
  }
  return;
}


