/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5d1128; end: 10b5d1153;  */

undefined8 * FUN_10b5d1128(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b5cf174(param_1,param_3);
  return param_1;
}



/* Entry: 10b5d1154; end: 10b5d1183;  */

long * FUN_10b5d1154(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b5d1184; end: 10b5d16d7;  */

void FUN_10b5d1184(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5d2404();
  }
  else {
    func_0x00010b5d2284();
  }
  *puVar1 = &PTR_FUN_110d22658;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b5d16d8; end: 10b5d16eb;  */

void FUN_10b5d16d8(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10b5d16ec; end: 10b5d174f;  */

undefined8 * FUN_10b5d16ec(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010b5d24d4();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5d2404();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b5d240c();
  }
  *param_1 = &PTR_FUN_110d22888;
  param_1[1] = unaff_x21;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  FUN_10b5ccda0();
  return param_1;
}



/* Entry: 10b5d1750; end: 10b5d17b7;  */

undefined8 * FUN_10b5d1750(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010b5d24d4();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5d24c4();
  }
  else {
    param_1 = unaff_x21;
    FUN_10b4d80e0();
  }
  *param_1 = &PTR_FUN_110d227e8;
  param_1[1] = unaff_x21;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  func_0x00010b5cc694();
  return param_1;
}



/* Entry: 10b5d17b8; end: 10b5d180b;  */

void FUN_10b5d17b8(long param_1)

{
  ulong extraout_x8;
  long unaff_x21;
  
  func_0x00010b5d2470();
  if (param_1 == 0) {
    func_0x00010b5d2404();
  }
  else {
    func_0x00010b5d2284();
  }
  func_0x00010b5d285c();
  func_0x00010b5d2874(&PTR_FUN_110d22928);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5d21e8();
  }
  func_0x00010b5d25c8();
  *(long *)(unaff_x21 + 0x10) = param_1;
  *(undefined4 *)(unaff_x21 + 0x18) = 0;
  return;
}



/* Entry: 10b5d180c; end: 10b5d1843;  */

undefined8 * FUN_10b5d180c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010b5d276c();
  if (param_1 == 0) {
    func_0x00010b5d2404();
  }
  else {
    param_1 = unaff_x20;
    func_0x00010b5d240c();
  }
  puVar1 = unaff_x19;
  func_0x00010b4e46b8();
  *(long *)(param_1 + 8) = unaff_x20;
  *unaff_x19 = &PTR_FUN_110cf2008;
  if ((puVar1[1] & 1) != 0) {
    func_0x00010b4e4410();
  }
  puVar1 = unaff_x19 + 2;
  func_0x00010b4e4540();
  unaff_x19[2] = puVar1;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  return unaff_x19;
}



/* Entry: 10b5d1844; end: 10b5d1a83;  */

undefined8 * FUN_10b5d1844(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  func_0x00010b5d24d4();
  if (param_1 == 0) {
    puVar2 = (undefined8 *)0x60;
    __Znwm();
  }
  else {
    puVar2 = unaff_x21;
    FUN_10b4d80e0();
  }
  puVar2[1] = unaff_x21;
  *puVar2 = &PTR_FUN_110d22ab8;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5d21e8();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x21 = (undefined8 *)0x0;
  }
  else {
    FUN_10b5d1750();
  }
  puVar2[3] = unaff_x21;
  uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x19 + 0x38);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x19 + 0x48);
  uVar7 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar9 = *(undefined8 *)(unaff_x19 + 0x4c);
  *(undefined8 *)((long)puVar2 + 0x54) = *(undefined8 *)(unaff_x19 + 0x54);
  *(undefined8 *)((long)puVar2 + 0x4c) = uVar9;
  puVar2[7] = uVar6;
  puVar2[6] = uVar5;
  puVar2[9] = uVar8;
  puVar2[8] = uVar7;
  puVar2[5] = uVar4;
  puVar2[4] = uVar3;
  return puVar2;
}



/* Entry: 10b5d1a84; end: 10b5d1adf;  */

undefined8 * FUN_10b5d1a84(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010b5d24d4();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5d2420();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b5d2428();
  }
  *param_1 = &PTR_FUN_110d22a18;
  param_1[1] = unaff_x21;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_10b5cd82c();
  return param_1;
}



/* Entry: 10b5d1ae0; end: 10b5d1b3b;  */

undefined8 * FUN_10b5d1ae0(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010b5d24d4();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5d2420();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b5d2428();
  }
  *param_1 = &PTR_FUN_110d226f8;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  func_0x00010b5ccfe8();
  return param_1;
}



/* Entry: 10b5d1b3c; end: 10b5d1baf;  */

void FUN_10b5d1b3c(long param_1)

{
  ulong extraout_x8;
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010b5d276c();
  if (param_1 == 0) {
    func_0x00010b5d24c4();
  }
  else {
    FUN_10b4d80e0();
  }
  func_0x00010b5d2850();
  func_0x00010b5d2880(&PTR_FUN_110d22b58);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5d21e8();
  }
  func_0x000108c6ef28(unaff_x21 + 0x10);
  *(undefined4 *)(unaff_x21 + 0x34) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined2 *)(unaff_x21 + 0x30) = *(undefined2 *)(unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x21 + 0x28) = uVar1;
  return;
}



/* Entry: 10b5d1bb0; end: 10b5d1c0b;  */

undefined8 * FUN_10b5d1bb0(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010b5d24d4();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5d2404();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b5d240c();
  }
  *param_1 = &PTR_FUN_110d22798;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10b5cf5d8();
  return param_1;
}



/* Entry: 10b5d1c0c; end: 10b5d1c73;  */

undefined8 * FUN_10b5d1c0c(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010b5d24d4();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5d24cc();
  }
  else {
    param_1 = unaff_x21;
    FUN_10b4d80e0();
  }
  *param_1 = &PTR_FUN_110d22978;
  param_1[1] = unaff_x21;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  func_0x00010b5cf740();
  return param_1;
}



/* Entry: 10b5d1c74; end: 10b5d1ce3;  */

void FUN_10b5d1c74(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010b5d276c();
  if (param_1 == 0) {
    func_0x00010b5d2630();
  }
  else {
    func_0x00010b5d2638();
  }
  func_0x00010b5d2850();
  func_0x00010b5d2880(&PTR_FUN_110d226a8);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5d21e8();
  }
  lVar1 = unaff_x19 + 0x10;
  func_0x000107c2809c();
  *(long *)(unaff_x21 + 0x10) = lVar1;
  *(undefined4 *)(unaff_x21 + 0x38) = 0;
  uVar3 = *(undefined8 *)(unaff_x19 + 0x2d);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x25);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x21 + 0x20) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x21 + 0x18) = uVar4;
  *(undefined8 *)(unaff_x21 + 0x2d) = uVar3;
  *(undefined8 *)(unaff_x21 + 0x25) = uVar2;
  return;
}



/* Entry: 10b5d1ce4; end: 10b5d1d3f;  */

undefined8 * FUN_10b5d1ce4(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010b5d24d4();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5d2420();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b5d2428();
  }
  *param_1 = &PTR_FUN_110d229c8;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  func_0x00010b5ccdcc();
  return param_1;
}



/* Entry: 10b5d1d40; end: 10b5d1d9f;  */

undefined8 * FUN_10b5d1d40(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010b5d24d4();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5d2404();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b5d240c();
  }
  *param_1 = &PTR_FUN_110d22658;
  param_1[1] = unaff_x21;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  FUN_10b5d03d0();
  return param_1;
}



/* Entry: 10b5d1da0; end: 10b5d1df3;  */

void FUN_10b5d1da0(long param_1)

{
  ulong extraout_x8;
  long unaff_x21;
  
  func_0x00010b5d2470();
  if (param_1 == 0) {
    func_0x00010b5d2404();
  }
  else {
    func_0x00010b5d2284();
  }
  func_0x00010b5d285c();
  func_0x00010b5d2874(&PTR_FUN_110d228d8);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5d21e8();
  }
  func_0x00010b5d25c8();
  *(long *)(unaff_x21 + 0x10) = param_1;
  *(undefined4 *)(unaff_x21 + 0x18) = 0;
  return;
}



/* Entry: 10b5d1df4; end: 10b5d1f4f;  */

undefined8 * FUN_10b5d1df4(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010b5d23ec();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5d2718();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b5d2720();
  }
  param_1[1] = unaff_x21;
  *param_1 = &PTR_FUN_110d22d38;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d21e8();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = unaff_x21;
  FUN_10b5cef98(param_1 + 3,unaff_x20 + 0x18);
  func_0x00010598fd00(param_1 + 6);
  lVar2 = unaff_x20 + 0x48;
  func_0x000107c2809c();
  param_1[9] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = unaff_x21;
    func_0x000108c6f470();
  }
  param_1[10] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = unaff_x21;
    FUN_10b5d17b8();
  }
  param_1[0xb] = puVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = unaff_x21;
    FUN_10b5d17b8();
  }
  param_1[0xc] = puVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = unaff_x21;
    FUN_10b58849c();
  }
  param_1[0xd] = puVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    unaff_x21 = (undefined8 *)0x0;
  }
  else {
    FUN_10b5d180c();
  }
  param_1[0xe] = unaff_x21;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(unaff_x20 + 0x88);
  param_1[0x10] = uVar5;
  param_1[0xf] = uVar4;
  return param_1;
}



/* Entry: 10b5d1f50; end: 10b5d207b;  */

void FUN_10b5d1f50(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5d2470();
  if (param_1 == 0) {
    func_0x00010b5d24c4();
  }
  else {
    func_0x00010b5d2300();
  }
  func_0x00010b5d285c();
  func_0x00010b5d2874(&PTR_FUN_110d22c48);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5d21e8();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x21 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x19;
    FUN_10b5d1d40();
  }
  *(undefined8 *)(unaff_x21 + 0x18) = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x19;
    FUN_10b58849c();
  }
  *(undefined8 *)(unaff_x21 + 0x20) = uVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x19;
    FUN_10b58aa28();
  }
  *(undefined8 *)(unaff_x21 + 0x28) = uVar2;
  if ((uVar1 >> 3 & 1) == 0) {
    unaff_x19 = 0;
  }
  else {
    FUN_10b5d1da0();
  }
  *(undefined8 *)(unaff_x21 + 0x30) = unaff_x19;
  return;
}



/* Entry: 10b5d207c; end: 10b5d20d7;  */

undefined8 * FUN_10b5d207c(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x00010b5d24d4();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5d2420();
  }
  else {
    param_1 = unaff_x21;
    func_0x00010b5d2428();
  }
  *param_1 = &PTR_FUN_110d22748;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  FUN_10b5d0f24();
  return param_1;
}



/* Entry: 10b5d20d8; end: 10b5d28a3;  */

void FUN_10b5d20d8(void)

{
  return;
}



/* Entry: 10b5d28a4; end: 10b5d295b;  */

undefined * FUN_10b5d28a4(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((bRam00000001138465f8 & 1) == 0) {
    iVar2 = 0x138465f8;
    ___cxa_guard_acquire();
    param_1 = 0;
    if (iVar2 != 0) {
      FUN_10b5d29a8();
      uVar1 = (char)iVar2;
      FUN_10b4c5a3c();
      uRam00000001138465f0 = uVar1;
      param_1 = 0x138465f8;
      ___cxa_guard_release();
    }
  }
  FUN_10b5d29a8();
  FUN_10b4c59b8();
  if (param_1 == -1) {
    func_0x000107c280b4();
    puVar3 = &DAT_11383d918;
  }
  else {
    puVar3 = (undefined *)((long)param_1 * 0x18 + 0x113846600);
  }
  return puVar3;
}



/* Entry: 10b5d295c; end: 10b5d29a7;  */

void FUN_10b5d295c(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uStack_24;
  
  iVar1 = 0x10d236c0;
  FUN_10b4c58cc(&PTR_DAT_110d236c0,9,param_1,param_2,&uStack_24);
  if (iVar1 != 0) {
    *param_3 = uStack_24;
  }
  return;
}



/* Entry: 10b5d29a8; end: 10b5d29bb;  */

undefined1  [16] FUN_10b5d29a8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &UNK_10e5d0df8;
  auVar1._0_8_ = &PTR_DAT_110d236c0;
  return auVar1;
}



/* Entry: 10b5d29bc; end: 10b5d2a97;  */

void FUN_10b5d29bc(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x38) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b5d2a18;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_10b5d338c();
    }
  }
  else {
    if (*(int *)(param_1 + 0x38) != 1) goto LAB_10b5d2a18;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b5d2a18;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_10b5d31e8();
    }
  }
  __ZdlPv();
LAB_10b5d2a18:
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 10b5d2a98; end: 10b5d2b67;  */

undefined8 * FUN_10b5d2a98(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d23898;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b5d3ab8();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  iVar3 = *(int *)(param_3 + 0x38);
  *(int *)(param_1 + 7) = iVar3;
  *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)(param_3 + 0x3c);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010b5d390c(param_2,*(undefined8 *)(param_3 + 0x18));
    iVar3 = *(int *)(param_1 + 7);
  }
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_3 + 0x20);
  uVar2 = param_2;
  if (iVar3 == 2) {
    func_0x00010b5d39f0(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  else {
    if (iVar3 != 1) goto LAB_10b5d2b40;
    func_0x00010b5d3980(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = uVar2;
LAB_10b5d2b40:
  if (*(int *)((long)param_1 + 0x3c) == 5) {
    FUN_10b5d3a60(param_2,*(undefined8 *)(param_3 + 0x30));
    param_1[6] = param_2;
  }
  return param_1;
}



/* Entry: 10b5d2b68; end: 10b5d2b93;  */

undefined8 FUN_10b5d2b68(undefined8 param_1)

{
  func_0x00010b5d3b04();
  FUN_10b5d2b94(param_1);
  return param_1;
}



/* Entry: 10b5d2b94; end: 10b5d2be3;  */

void FUN_10b5d2b94(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5d35e0();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_10b5d29bc(param_1);
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    if (*(int *)(param_1 + 0x3c) == 5) {
      uVar1 = *(ulong *)(param_1 + 8);
      if ((uVar1 & 1) != 0) {
        uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
      }
      if (uVar1 == 0) {
        if (*(long *)(param_1 + 0x30) != 0) {
          FUN_10b5d3cc4();
        }
        __ZdlPv();
      }
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}



/* Entry: 10b5d2be4; end: 10b5d2be7;  */

undefined8 FUN_10b5d2be4(undefined8 param_1)

{
  func_0x00010b5d3b04();
  FUN_10b5d2b94(param_1);
  return param_1;
}



/* Entry: 10b5d2be8; end: 10b5d2bfb;  */

void FUN_10b5d2be8(void)

{
  FUN_10b5d2b68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d2bfc; end: 10b5d2c0f;  */

long FUN_10b5d2bfc(long param_1)

{
  func_0x00010b5d3b04();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5d2c10; end: 10b5d2c63;  */

void FUN_10b5d2c10(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b5d2c64(*(undefined8 *)(param_1 + 0x18));
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_10b5d29bc(param_1);
  func_0x00010b5d2a44(param_1);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5d2c64; end: 10b5d2c7b;  */

void FUN_10b5d2c64(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5d2c7c; end: 10b5d2d67;  */

long * FUN_10b5d2c7c(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long extraout_x8;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  plVar2 = (long *)(ulong)uVar1;
  if (uVar1 == 1) {
    lVar5 = 0x1c;
  }
  else {
    plVar4 = param_3;
    if (uVar1 != 2) goto LAB_10b5d2cc8;
    lVar5 = 0x2c;
  }
  plVar4 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x28) + lVar5);
  func_0x00010b5d3b5c();
  param_2 = plVar2;
LAB_10b5d2cc8:
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x00010b5d3ad0();
    param_2 = (long *)(ulong)*(byte *)(param_1 + 0x20);
    uVar3 = 0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x000107c280a8(param_2,uVar3);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar4 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x18) + 0x28);
    param_2 = (long *)0x4;
    func_0x00010b5d3b5c();
  }
  if (*(int *)(param_1 + 0x3c) == 5) {
    plVar4 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x30) + 0x14);
    param_2 = (long *)0x5;
    func_0x00010b5d3b5c();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b5d3b8c();
    if ((long)plVar4 < 0) {
      lVar5 = *(long *)(extraout_x8 + 8);
      plVar4 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar5 = extraout_x8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)plVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)plVar4;
        plVar4 = (long *)(ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar5 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar5);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar5,(ulong)plVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar4);
  }
  return param_2;
}



/* Entry: 10b5d2d68; end: 10b5d2e2f;  */

long FUN_10b5d2d68(long param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x18);
    FUN_10b5d3720();
    func_0x00010b5d3ae4();
    lVar2 = lVar2 + extraout_x8 + 1;
  }
  lVar2 = lVar2 + (ulong)*(byte *)(param_1 + 0x20) * 2;
  if (*(int *)(param_1 + 0x38) == 2) {
    lVar1 = *(long *)(param_1 + 0x28);
    FUN_10b5d3550();
  }
  else {
    if (*(int *)(param_1 + 0x38) != 1) goto LAB_10b5d2ddc;
    lVar1 = *(long *)(param_1 + 0x28);
    FUN_10b5d3334();
  }
  func_0x00010b5d3ae4();
  lVar2 = lVar2 + lVar1 + extraout_x8_00 + 1;
LAB_10b5d2ddc:
  if (*(int *)(param_1 + 0x3c) == 5) {
    lVar1 = *(long *)(param_1 + 0x30);
    func_0x00010b5d4090();
    func_0x00010b5d3ae4();
    lVar2 = lVar2 + lVar1 + extraout_x8_01 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar3 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(param_1 + 0x14) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b5d2e30; end: 10b5d2e33;  */

void FUN_10b5d2e30(long param_1,long param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(param_1 + 8);
  if ((uVar6 & 1) != 0) {
    uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      uVar5 = uVar6;
      func_0x00010b5d390c(uVar6,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar5;
    }
    else {
      FUN_10b5d2fe4();
    }
  }
  if (*(char *)(param_2 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  iVar3 = *(int *)(param_2 + 0x38);
  if (iVar3 == 0) goto LAB_10b5d2f54;
  iVar4 = *(int *)(param_1 + 0x38);
  if (iVar4 != iVar3) {
    if (iVar4 != 0) {
      FUN_10b5d29bc(param_1);
    }
    *(int *)(param_1 + 0x38) = iVar3;
  }
  uVar5 = uVar6;
  if (iVar3 == 2) {
    if (iVar4 == 2) {
      ppuVar1 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x38) != 2) {
        ppuVar1 = &PTR_PTR_1133b57c8;
      }
      func_0x00010b5d3090(*(undefined8 *)(param_1 + 0x28),ppuVar1);
      goto LAB_10b5d2f54;
    }
    func_0x00010b5d39f0(uVar6,*(undefined8 *)(param_2 + 0x28));
  }
  else {
    if (iVar3 != 1) goto LAB_10b5d2f54;
    if (iVar4 == 1) {
      ppuVar1 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x38) != 1) {
        ppuVar1 = &PTR_PTR_1133b57a8;
      }
      func_0x00010b5d3030(*(undefined8 *)(param_1 + 0x28),ppuVar1);
      goto LAB_10b5d2f54;
    }
    func_0x00010b5d3980(uVar6,*(undefined8 *)(param_2 + 0x28));
  }
  *(ulong *)(param_1 + 0x28) = uVar5;
LAB_10b5d2f54:
  iVar3 = *(int *)(param_2 + 0x3c);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x3c) == iVar3) {
      if (iVar3 == 5) {
        FUN_10b5d4184(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x30));
      }
    }
    else {
      if (*(int *)(param_1 + 0x3c) != 0) {
        func_0x00010b5d2a44(param_1);
      }
      *(int *)(param_1 + 0x3c) = iVar3;
      if (iVar3 == 5) {
        FUN_10b5d3a60(uVar6,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar6;
      }
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5d2e34; end: 10b5d2fe3;  */

void FUN_10b5d2e34(long param_1,long param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(param_1 + 8);
  if ((uVar6 & 1) != 0) {
    uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      uVar5 = uVar6;
      func_0x00010b5d390c(uVar6,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar5;
    }
    else {
      FUN_10b5d2fe4();
    }
  }
  if (*(char *)(param_2 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  iVar3 = *(int *)(param_2 + 0x38);
  if (iVar3 == 0) goto LAB_10b5d2f54;
  iVar4 = *(int *)(param_1 + 0x38);
  if (iVar4 != iVar3) {
    if (iVar4 != 0) {
      FUN_10b5d29bc(param_1);
    }
    *(int *)(param_1 + 0x38) = iVar3;
  }
  uVar5 = uVar6;
  if (iVar3 == 2) {
    if (iVar4 == 2) {
      ppuVar1 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x38) != 2) {
        ppuVar1 = &PTR_PTR_1133b57c8;
      }
      func_0x00010b5d3090(*(undefined8 *)(param_1 + 0x28),ppuVar1);
      goto LAB_10b5d2f54;
    }
    func_0x00010b5d39f0(uVar6,*(undefined8 *)(param_2 + 0x28));
  }
  else {
    if (iVar3 != 1) goto LAB_10b5d2f54;
    if (iVar4 == 1) {
      ppuVar1 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x38) != 1) {
        ppuVar1 = &PTR_PTR_1133b57a8;
      }
      func_0x00010b5d3030(*(undefined8 *)(param_1 + 0x28),ppuVar1);
      goto LAB_10b5d2f54;
    }
    func_0x00010b5d3980(uVar6,*(undefined8 *)(param_2 + 0x28));
  }
  *(ulong *)(param_1 + 0x28) = uVar5;
LAB_10b5d2f54:
  iVar3 = *(int *)(param_2 + 0x3c);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x3c) == iVar3) {
      if (iVar3 == 5) {
        FUN_10b5d4184(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x30));
      }
    }
    else {
      if (*(int *)(param_1 + 0x3c) != 0) {
        func_0x00010b5d2a44(param_1);
      }
      *(int *)(param_1 + 0x3c) = iVar3;
      if (iVar3 == 5) {
        FUN_10b5d3a60(uVar6,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar6;
      }
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5d2fe4; end: 10b5d31e7;  */

void FUN_10b5d2fe4(long param_1,long param_2)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 0x10);
  func_0x000107c282d0();
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b5d3b28();
    if ((*puVar1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5d31e8; end: 10b5d3213;  */

long FUN_10b5d31e8(long param_1)

{
  func_0x00010b5d3b04();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5d3214; end: 10b5d3227;  */

void FUN_10b5d3214(void)

{
  FUN_10b5d31e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d3228; end: 10b5d3233;  */

undefined ** FUN_10b5d3228(void)

{
  return &PTR_DAT_110d23928;
}



/* Entry: 10b5d3234; end: 10b5d3263;  */

void FUN_10b5d3234(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5d3b80();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5d3264; end: 10b5d3333;  */

long * FUN_10b5d3264(long param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  int iVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  
  plVar7 = param_3;
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar6 = param_3;
    func_0x000107c28094(param_3,param_2);
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    puVar2 = (undefined4 *)0xd;
    func_0x000107c280a8(0xd,plVar6);
    param_2 = (long *)(puVar2 + 1);
    *puVar2 = uVar1;
  }
  plVar6 = (long *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)plVar6 + 0x17);
  if (lVar4 < 0) {
    lVar4 = plVar6[1];
    if (lVar4 == 0) goto LAB_10b5d32fc;
    plVar3 = (long *)*plVar6;
  }
  else {
    plVar3 = plVar6;
    if (*(char *)((long)plVar6 + 0x17) == '\0') goto LAB_10b5d32fc;
  }
  func_0x000107c303d4(plVar3,lVar4,1,&UNK_10f77f2bc);
  plVar3 = param_3;
  func_0x000107c280a0(param_3,2,plVar6,param_2);
  plVar7 = plVar6;
  param_2 = plVar3;
LAB_10b5d32fc:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b5d3b8c();
  if ((long)plVar7 < 0) {
    lVar4 = *(long *)(extraout_x8 + 8);
    plVar7 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar4 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar7) {
    while( true ) {
      iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar5 = (int)plVar7;
      plVar7 = (long *)(ulong)(uint)(iVar5 - iVar8);
      if (iVar5 - iVar8 == 0 || iVar5 < iVar8) break;
      func_0x00010b4d5738();
      lVar4 = (long)param_2 + (long)iVar8;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar4);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar5);
  }
  _memcpy(param_2,lVar4,(ulong)plVar7 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar7);
}



/* Entry: 10b5d3334; end: 10b5d3387;  */

void FUN_10b5d3334(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long unaff_x19;
  
  func_0x00010b5d3bac();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
  }
  iVar1 = (int)param_1;
  func_0x00010b5d3b98();
  if ((extraout_x8_00 & 1) != 0) {
    lVar2 = (long)*(char *)((extraout_x8_00 & 0xfffffffffffffffe) + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)((extraout_x8_00 & 0xfffffffffffffffe) + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  return;
}



/* Entry: 10b5d3388; end: 10b5d338b;  */

void FUN_10b5d3388(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5d3b44();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c30248();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d3b28();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5d338c; end: 10b5d33b7;  */

long FUN_10b5d338c(long param_1)

{
  func_0x00010b5d3b04();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5d33b8; end: 10b5d33cb;  */

void FUN_10b5d33b8(void)

{
  FUN_10b5d338c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d33cc; end: 10b5d33d7;  */

undefined ** FUN_10b5d33cc(void)

{
  return &PTR_DAT_110d23980;
}



/* Entry: 10b5d33d8; end: 10b5d340b;  */

void FUN_10b5d33d8(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5d3b80();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5d340c; end: 10b5d354f;  */

long * FUN_10b5d340c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  int iVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  
  plVar5 = (long *)(param_1[2] & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)plVar5 + 0x17);
  plVar2 = param_1;
  plVar6 = param_3;
  if (lVar3 < 0) {
    lVar3 = plVar5[1];
    if (lVar3 == 0) goto LAB_10b5d3478;
    plVar1 = (long *)*plVar5;
  }
  else {
    plVar1 = plVar5;
    if (*(char *)((long)plVar5 + 0x17) == '\0') goto LAB_10b5d3478;
  }
  func_0x000107c303d4(plVar1,lVar3,1,&UNK_10f77f2fc);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,plVar5,param_2);
  plVar6 = plVar5;
  param_2 = plVar2;
LAB_10b5d3478:
  plVar5 = plVar2;
  if ((int)param_1[3] != 0) {
    func_0x00010b5d3aac();
    plVar5 = (long *)0x15;
    func_0x000107c280a8(0x15,plVar2);
    func_0x00010b5d3b38();
  }
  plVar2 = plVar5;
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    func_0x00010b5d3aac();
    plVar2 = (long *)0x1d;
    func_0x000107c280a8(0x1d,plVar5);
    func_0x00010b5d3b38();
  }
  plVar5 = plVar2;
  if ((int)param_1[4] != 0) {
    func_0x00010b5d3aac();
    plVar5 = (long *)0x25;
    func_0x000107c280a8(0x25,plVar2);
    func_0x00010b5d3b38();
  }
  plVar2 = plVar5;
  if (*(int *)((long)param_1 + 0x24) != 0) {
    func_0x00010b5d3aac();
    plVar2 = (long *)0x2d;
    func_0x000107c280a8(0x2d,plVar5);
    func_0x00010b5d3b38();
  }
  if ((int)param_1[5] != 0) {
    func_0x00010b5d3aac();
    func_0x000107c280a8(0x35,plVar2);
    func_0x00010b5d3b38();
  }
  if ((param_1[1] & 1U) != 0) {
    func_0x00010b5d3b8c();
    if ((long)plVar6 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      plVar6 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)plVar6) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar4 = (int)plVar6;
        plVar6 = (long *)(ulong)(uint)(iVar4 - iVar7);
        if (iVar4 - iVar7 == 0 || iVar4 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar4);
    }
    _memcpy(param_2,lVar3,(ulong)plVar6 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar6);
  }
  return param_2;
}



/* Entry: 10b5d3550; end: 10b5d35db;  */

void FUN_10b5d3550(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long lVar3;
  ulong extraout_x8_00;
  long unaff_x19;
  
  func_0x00010b5d3bac();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  lVar3 = 0;
  if (lVar2 != 0) {
    func_0x000107c282a0();
    lVar3 = param_1 + 1;
  }
  iVar1 = (int)param_1;
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    lVar3 = lVar3 + 5;
  }
  if (*(int *)(unaff_x19 + 0x1c) != 0) {
    lVar3 = lVar3 + 5;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    lVar3 = lVar3 + 5;
  }
  if (*(int *)(unaff_x19 + 0x24) != 0) {
    lVar3 = lVar3 + 5;
  }
  func_0x00010b5d3b98(lVar3);
  if ((extraout_x8_00 & 1) != 0) {
    lVar2 = (long)*(char *)((extraout_x8_00 & 0xfffffffffffffffe) + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)((extraout_x8_00 & 0xfffffffffffffffe) + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x2c) = iVar1;
  return;
}



/* Entry: 10b5d35dc; end: 10b5d35df;  */

void FUN_10b5d35dc(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5d3b44();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c30248();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if (*(int *)(unaff_x20 + 0x1c) != 0) {
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x20 + 0x1c);
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d3b28();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5d35e0; end: 10b5d360b;  */

long FUN_10b5d35e0(long param_1)

{
  func_0x00010b5d3b04();
  func_0x000107c282dc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5d360c; end: 10b5d360f;  */

long FUN_10b5d360c(long param_1)

{
  func_0x00010b5d3b04();
  func_0x000107c282dc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5d3610; end: 10b5d3623;  */

void FUN_10b5d3610(void)

{
  FUN_10b5d35e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d3624; end: 10b5d362f;  */

undefined ** FUN_10b5d3624(void)

{
  return &PTR_DAT_110d239d8;
}



/* Entry: 10b5d3630; end: 10b5d371f;  */

byte * FUN_10b5d3630(byte *param_1,byte *param_2,byte *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  long extraout_x8;
  uint uVar8;
  int *piVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  
  uVar8 = *(uint *)(param_1 + 0x20);
  pbVar3 = param_1;
  pbVar11 = param_3;
  if (uVar8 != 0) {
    func_0x00010b5d3ad0();
    pbVar6 = pbVar3 + 2;
    *pbVar3 = 10;
    for (; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
      pbVar6[-1] = (byte)uVar8 | 0x80;
      pbVar6 = pbVar6 + 1;
    }
    pbVar6[-1] = (byte)uVar8;
    piVar9 = *(int **)(param_1 + 0x18);
    piVar1 = piVar9 + *(int *)(param_1 + 0x10);
    do {
      func_0x00010b5d3ad0();
      uVar7 = (ulong)*piVar9;
      pbVar6 = pbVar3;
      while( true ) {
        param_2 = pbVar6 + 1;
        if (uVar7 < 0x80) break;
        *pbVar6 = (byte)uVar7 | 0x80;
        uVar7 = uVar7 >> 7;
        pbVar6 = param_2;
      }
      piVar9 = piVar9 + 1;
      *pbVar6 = (byte)uVar7;
    } while (piVar9 < piVar1);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    func_0x00010b5d3ad0();
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    puVar4 = (undefined4 *)0x15;
    func_0x000107c280a8(0x15,pbVar3);
    param_2 = (byte *)(puVar4 + 1);
    *puVar4 = uVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b5d3b8c();
    if ((long)pbVar11 < 0) {
      lVar5 = *(long *)(extraout_x8 + 8);
      pbVar11 = *(byte **)(extraout_x8 + 0x10);
    }
    else {
      lVar5 = extraout_x8 + 8;
    }
    if (*(long *)param_3 - (long)param_2 < (long)(int)pbVar11) {
      while( true ) {
        iVar12 = ((int)*(undefined8 *)param_3 - (int)param_2) + 0x10;
        iVar10 = (int)pbVar11;
        pbVar11 = (byte *)(ulong)(uint)(iVar10 - iVar12);
        if (iVar10 - iVar12 == 0 || iVar10 < iVar12) break;
        func_0x00010b4d5738();
        pbVar3 = param_2 + iVar12;
        param_2 = param_3;
        func_0x000107c303e4(param_3,pbVar3);
      }
      func_0x00010b4d5738();
      return param_2 + iVar10;
    }
    _memcpy(param_2,lVar5,(ulong)pbVar11 & 0xffffffff);
    return param_2 + (int)pbVar11;
  }
  return param_2;
}



/* Entry: 10b5d3720; end: 10b5d37e7;  */

long FUN_10b5d3720(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = 0;
  lVar1 = 0;
  for (lVar4 = (long)*(int *)(param_1 + 0x10); lVar4 != 0; lVar4 = lVar4 + -1) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x18) + (lVar2 >> 0x1e))) * -9 +
                    0x280U >> 6) + lVar1;
    lVar2 = lVar2 + 0x100000000;
  }
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = lVar1 + (ulong)((int)LZCOUNT((long)(int)lVar1) * -9 + 0x280U >> 6) + 1;
  }
  *(int *)(param_1 + 0x20) = (int)lVar1;
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar2 = lVar2 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar3 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(param_1 + 0x28) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b5d37e8; end: 10b5d390b;  */

void FUN_10b5d37e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5d3b18();
  }
  else {
    func_0x00010b5d3b20();
  }
  *puVar1 = &PTR_FUN_110d237a8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b5d390c; end: 10b5d3a5f;  */

undefined8 * FUN_10b5d390c(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b5d3b0c();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5d3b18();
  }
  else {
    param_1 = unaff_x20;
    func_0x00010b5d3b20();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_FUN_110d237a8;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5d3ab8();
  }
  func_0x000107c282d4(param_1 + 2);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
  return param_1;
}



/* Entry: 10b5d3a60; end: 10b5d3a9f;  */

undefined8 * FUN_10b5d3a60(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010b5d3b0c();
  if (param_1 == 0) {
    lVar3 = 0x50;
    __Znwm();
  }
  else {
    lVar3 = unaff_x20;
    FUN_10b4d80e0();
  }
  lVar4 = unaff_x20;
  puVar2 = unaff_x19;
  func_0x00010b5d6c80();
  *(long *)(lVar3 + 8) = lVar4;
  *unaff_x19 = &PTR_FUN_110d23f50;
  if ((puVar2[1] & 1) != 0) {
    func_0x00010b5d6a48();
  }
  *(undefined4 *)(unaff_x19 + 2) = *(undefined4 *)(unaff_x19 + 2);
  *(undefined4 *)((long)unaff_x19 + 0x14) = 0;
  puVar2 = unaff_x19 + 3;
  func_0x000107c2809c(puVar2,unaff_x20);
  unaff_x19[3] = puVar2;
  uVar1 = *(uint *)(unaff_x19 + 2);
  if ((uVar1 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = unaff_x20;
    func_0x00010b5d62c8(unaff_x20,unaff_x19[4]);
  }
  unaff_x19[4] = lVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = unaff_x20;
    func_0x00010b5d6330(unaff_x20,unaff_x19[5]);
  }
  unaff_x19[5] = lVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = unaff_x20;
    func_0x00010b5d63cc(unaff_x20,unaff_x19[6]);
  }
  unaff_x19[6] = lVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = unaff_x20;
    FUN_10b5d6434(unaff_x20,unaff_x19[7]);
  }
  unaff_x19[7] = lVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = unaff_x20;
    FUN_10b5d6494(unaff_x20,unaff_x19[8]);
  }
  unaff_x19[8] = lVar3;
  if ((uVar1 >> 5 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    FUN_10b5d6514(unaff_x20,unaff_x19[9]);
  }
  unaff_x19[9] = unaff_x20;
  return unaff_x19;
}



/* Entry: 10b5d3aa0; end: 10b5d3bbf;  */

void FUN_10b5d3aa0(void)

{
  return;
}



/* Entry: 10b5d3bc0; end: 10b5d3cc3;  */

void FUN_10b5d3bc0(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  lVar3 = param_3;
  func_0x00010b5d6c80();
  *(undefined8 *)(param_1 + 8) = param_2;
  *unaff_x19 = &PTR_FUN_110d23f50;
  if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
    func_0x00010b5d6a48();
  }
  *(undefined4 *)(unaff_x19 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)unaff_x19 + 0x14) = 0;
  param_3 = param_3 + 0x18;
  func_0x000107c2809c();
  unaff_x19[3] = param_3;
  uVar1 = *(uint *)(unaff_x19 + 2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x20;
    func_0x00010b5d62c8();
  }
  unaff_x19[4] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x20;
    func_0x00010b5d6330();
  }
  unaff_x19[5] = uVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x20;
    func_0x00010b5d63cc();
  }
  unaff_x19[6] = uVar2;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x20;
    FUN_10b5d6434();
  }
  unaff_x19[7] = uVar2;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x20;
    FUN_10b5d6494();
  }
  unaff_x19[8] = uVar2;
  if ((uVar1 >> 5 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    FUN_10b5d6514();
  }
  unaff_x19[9] = unaff_x20;
  return;
}



/* Entry: 10b5d3cc4; end: 10b5d3cef;  */

undefined8 FUN_10b5d3cc4(undefined8 param_1)

{
  func_0x00010b5d6ab8();
  FUN_10b5d3cf0(param_1);
  return param_1;
}



/* Entry: 10b5d3cf0; end: 10b5d3d6f;  */

void FUN_10b5d3cf0(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5d467c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b5d4ec8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b5d57d0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b5d5a00();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b5d5c1c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b5d5ad8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d3d70; end: 10b5d3d73;  */

undefined8 FUN_10b5d3d70(undefined8 param_1)

{
  func_0x00010b5d6ab8();
  FUN_10b5d3cf0(param_1);
  return param_1;
}



/* Entry: 10b5d3d74; end: 10b5d3d87;  */

void FUN_10b5d3d74(void)

{
  FUN_10b5d3cc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d3d88; end: 10b5d3d93;  */

undefined ** FUN_10b5d3d88(void)

{
  return &PTR_DAT_110d23f90;
}



/* Entry: 10b5d3d94; end: 10b5d3ed3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5d3d94(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c3025c(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b5d3e38(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b5d3e6c(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b5d3ea0(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_10b5d3ed4(*(undefined8 *)(param_1 + 0x38));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_10b5d3ee8(*(undefined8 *)(param_1 + 0x40));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_10b5d3f28(*(undefined8 *)(param_1 + 0x48));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5d3ed4; end: 10b5d3ee7;  */

void FUN_10b5d3ed4(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5d3ee8; end: 10b5d3f27;  */

void FUN_10b5d3ee8(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5d6bd4();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5d5c88(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5d3f28; end: 10b5d3f3f;  */

void FUN_10b5d3f28(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5d3f40; end: 10b5d417f;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b5d3f40(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  int iVar5;
  long *plVar6;
  int iVar7;
  
  plVar6 = (long *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)plVar6 + 0x17);
  plVar4 = param_3;
  if (lVar3 < 0) {
    lVar3 = plVar6[1];
    if (lVar3 == 0) goto LAB_10b5d3fac;
    plVar2 = (long *)*plVar6;
  }
  else {
    plVar2 = plVar6;
    if (*(char *)((long)plVar6 + 0x17) == '\0') goto LAB_10b5d3fac;
  }
  func_0x000107c303d4(plVar2,lVar3,1,&UNK_10f77f33d);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,plVar6,param_2);
  plVar4 = plVar6;
  param_2 = plVar2;
LAB_10b5d3fac:
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    plVar4 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x20);
    param_2 = (long *)0x2;
    func_0x00010b5d6a84();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar4 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x28) + 0x20);
    param_2 = (long *)0x3;
    func_0x00010b5d6a84();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    plVar4 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x30) + 0x20);
    param_2 = (long *)0x4;
    func_0x00010b5d6a84();
  }
  if ((uVar1 >> 3 & 1) != 0) {
    plVar4 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x38) + 0x14);
    param_2 = (long *)0x5;
    func_0x00010b5d6a84();
  }
  if ((uVar1 >> 4 & 1) != 0) {
    plVar4 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x40) + 0x14);
    param_2 = (long *)0x6;
    func_0x00010b5d6a84();
  }
  if ((uVar1 >> 5 & 1) != 0) {
    plVar4 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x48) + 0x24);
    param_2 = (long *)0x7;
    func_0x00010b5d6a84();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b5d6b28();
    if ((long)plVar4 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      plVar4 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)plVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar5 = (int)plVar4;
        plVar4 = (long *)(ulong)(uint)(iVar5 - iVar7);
        if (iVar5 - iVar7 == 0 || iVar5 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar5);
    }
    _memcpy(param_2,lVar3,(ulong)plVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar4);
  }
  return param_2;
}



/* Entry: 10b5d4180; end: 10b5d4183;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5d4180(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5d6a74();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar4;
  if (((ulong)puVar4 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if (((ulong)puVar4 & 1) != 0) {
      puVar4 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248(param_1,uVar3,puVar4);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b5d62c8();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010b5d4310();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b5d6330();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        func_0x00010b5d43ac();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b5d63cc();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        func_0x00010b5d44a0();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b5d6434();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        FUN_10b5d453c();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b5d6494();
        *(ulong **)(unaff_x21 + 0x40) = param_1;
      }
      else {
        FUN_10b5d455c();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x48);
      if (param_1 == (ulong *)0x0) {
        FUN_10b5d6514();
        *(ulong **)(unaff_x21 + 0x48) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_10b5d45d0();
      }
    }
  }
  func_0x00010b5d6bf0();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010b5d6a64();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5d4184; end: 10b5d453b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5d4184(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5d6a74();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar4;
  if (((ulong)puVar4 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if (((ulong)puVar4 & 1) != 0) {
      puVar4 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248(param_1,uVar3,puVar4);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b5d62c8();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010b5d4310();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b5d6330();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        func_0x00010b5d43ac();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b5d63cc();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        func_0x00010b5d44a0();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b5d6434();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        FUN_10b5d453c();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b5d6494();
        *(ulong **)(unaff_x21 + 0x40) = param_1;
      }
      else {
        FUN_10b5d455c();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x48);
      if (param_1 == (ulong *)0x0) {
        FUN_10b5d6514();
        *(ulong **)(unaff_x21 + 0x48) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_10b5d45d0();
      }
    }
  }
  func_0x00010b5d6bf0();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010b5d6a64();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5d453c; end: 10b5d455b;  */

void FUN_10b5d453c(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5d455c; end: 10b5d45cf;  */

void FUN_10b5d455c(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5d6a74();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      FUN_10b5d691c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      FUN_10b5d5d84();
      puVar1 = puVar2;
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x00010b5d6c6c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5d6a64();
    if ((*puVar1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5d45d0; end: 10b5d462f;  */

void FUN_10b5d45d0(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 0x1c);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5d4630; end: 10b5d467b;  */

void FUN_10b5d4630(long param_1)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  
  func_0x00010b5d6c60();
  if ((bool)in_ZR) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5d6c24();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_10b5d484c();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b5d467c; end: 10b5d46a7;  */

undefined8 FUN_10b5d467c(undefined8 param_1)

{
  func_0x00010b5d6ab8();
  FUN_10b5d46a8(param_1);
  return param_1;
}



/* Entry: 10b5d46a8; end: 10b5d46bb;  */

void FUN_10b5d46a8(long param_1)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong extraout_x8;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  func_0x00010b5d6c60();
  if ((bool)in_ZR) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5d6c24();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_10b5d484c();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b5d46bc; end: 10b5d46cf;  */

void FUN_10b5d46bc(void)

{
  FUN_10b5d467c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d46d0; end: 10b5d46df;  */

long FUN_10b5d46d0(long param_1)

{
  func_0x00010b5d6ab8();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5d4b50();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5d4c94();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5d46e0; end: 10b5d474b;  */

long * FUN_10b5d46e0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5d69c4();
  if (extraout_w8 != 0) {
    func_0x00010b5d69e4();
    func_0x00010b5d69b4();
    func_0x00010b5d6aac();
  }
  if (*(int *)(unaff_x20 + 0x24) == 2) {
    func_0x00010b5d6a98();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d6b28();
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
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b5d474c; end: 10b5d479f;  */

long FUN_10b5d474c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x00010b5d6b6c();
  lVar2 = 0;
  if (!(bool)in_ZR) {
    lVar2 = extraout_x8;
  }
  func_0x00010b5d6c60();
  if ((bool)in_ZR) {
    func_0x00010b5d49d8(*(undefined8 *)(unaff_x19 + 0x18));
    func_0x00010b5d6978();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5d6b80();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b5d47a0; end: 10b5d47a3;  */

void FUN_10b5d47a0(ulong *param_1)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010b5d6a74();
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5d6c00();
  }
  if (*(int *)(unaff_x20 + 0x10) != 0) {
    *(int *)(unaff_x21 + 2) = *(int *)(unaff_x20 + 0x10);
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x24) == iVar1) {
      if (iVar1 == 2) {
        func_0x00010b5d6c98();
        FUN_10b5d47a4();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x24) != 0) {
        param_1 = unaff_x21;
        FUN_10b5d4630();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
      if (iVar1 == 2) {
        func_0x00010b5d6c8c();
        FUN_10b5d6574();
        unaff_x21[3] = (ulong)param_1;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d6a64();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5d47a4; end: 10b5d484b;  */

void FUN_10b5d47a4(ulong *param_1)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x00010b5d6a74();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00010b5d6c00();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b5d6c98();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b5d6610();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b5d4a6c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_10b5d6670();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x00010b5d4ad0();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  func_0x00010b5d6bf0();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010b5d6a64();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5d484c; end: 10b5d488f;  */

long FUN_10b5d484c(long param_1)

{
  func_0x00010b5d6ab8();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5d4b50();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5d4c94();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5d4890; end: 10b5d48a3;  */

void FUN_10b5d4890(void)

{
  FUN_10b5d484c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d48a4; end: 10b5d48af;  */

undefined ** FUN_10b5d48a4(void)

{
  return &PTR_DAT_110d24038;
}



/* Entry: 10b5d48b0; end: 10b5d4907;  */

void FUN_10b5d48b0(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b5d4908(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b5d4920(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5d4908; end: 10b5d493b;  */

void FUN_10b5d4908(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5d493c; end: 10b5d4a6b;  */

long * FUN_10b5d493c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5d6a2c();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x24);
    param_1 = (long *)0x1;
    func_0x00010b5d6ac0();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
    param_1 = (long *)0x2;
    func_0x00010b5d6ac0();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b5d69e4();
    func_0x000107c280a8(0x1d,param_1);
    func_0x00010b5d6aac();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d6b28();
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
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b5d4a6c; end: 10b5d4b4f;  */

void FUN_10b5d4a6c(ulong *param_1)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x00010b5d6a74();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00010b5d6c00();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b5d6c98();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b5d6610();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b5d4a6c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_10b5d6670();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x00010b5d4ad0();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  func_0x00010b5d6bf0();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010b5d6a64();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5d4b50; end: 10b5d4b73;  */

undefined8 FUN_10b5d4b50(undefined8 param_1)

{
  func_0x00010b5d6ab8();
  return param_1;
}



/* Entry: 10b5d4b74; end: 10b5d4b77;  */

undefined8 FUN_10b5d4b74(undefined8 param_1)

{
  func_0x00010b5d6ab8();
  return param_1;
}



/* Entry: 10b5d4b78; end: 10b5d4b8b;  */

void FUN_10b5d4b78(void)

{
  FUN_10b5d4b50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d4b8c; end: 10b5d4b97;  */

undefined ** FUN_10b5d4b8c(void)

{
  return &PTR_DAT_110d24088;
}



/* Entry: 10b5d4b98; end: 10b5d4c3f;  */

long * FUN_10b5d4b98(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5d69c4();
  if (extraout_w8 != 0) {
    func_0x00010b5d69e4();
    func_0x00010b5d69b4();
    func_0x00010b5d6aac();
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b5d69e4();
    func_0x00010b5d6a54();
    func_0x00010b5d6aac();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    func_0x00010b5d69e4();
    func_0x00010b5d6b04();
    func_0x00010b5d6aac();
  }
  if (*(int *)(unaff_x20 + 0x1c) != 0) {
    func_0x00010b5d69e4();
    func_0x00010b5d6af4();
    func_0x00010b5d6aac();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x00010b5d69e4();
    func_0x00010b5d6ae4();
    func_0x00010b5d6aac();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d6b28();
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
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}


