/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1077e263c; end: 1077e26b3;  */

undefined8 * FUN_1077e263c(void)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  
  func_0x0001077ef1b8();
  func_0x0001077e2660();
  puVar1 = unaff_x19;
  func_0x0001077ef0d4();
  *unaff_x19 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001077ee6cc();
  }
  return unaff_x19;
}



/* Entry: 1077e27bc; end: 1077e27bf;  */

void FUN_1077e27bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  *param_1 = uVar1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_1[3] = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}



/* Entry: 1077e2984; end: 1077e29bb;  */

void FUN_1077e2984(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001077efa58();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x18) {
    func_0x0001077efe94();
    func_0x0001077e29bc();
  }
  return;
}



/* Entry: 1077e2ee4; end: 1077e2f37;  */

void FUN_1077e2ee4(void)

{
  undefined1 in_ZR;
  undefined1 auStack_70 [64];
  
  func_0x0001077ee9f8();
  func_0x0001077ee374();
  func_0x0001077e37f4(auStack_70);
  func_0x0001077eeee0();
  func_0x0001077e3724();
  func_0x0001077ef230();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077eea08();
  func_0x0001077ef068();
  func_0x0001077f002c();
  func_0x0001077ee7c4();
  return;
}



/* Entry: 1077e3218; end: 1077e32d7;  */

undefined4 * FUN_1077e3218(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *in_x6;
  undefined4 *in_x7;
  undefined4 *extraout_x8;
  undefined4 *unaff_x22;
  undefined8 uVar3;
  undefined4 *puStack_238;
  undefined8 *puStack_230;
  undefined4 *puStack_1c0;
  undefined4 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined4 auStack_1a0 [6];
  undefined4 *apuStack_188 [43];
  
  func_0x0001077ee374();
  func_0x0001077e3548(auStack_1a0);
  _bzero(apuStack_188,0x150);
  func_0x0001077dde7c(&puStack_1b8,auStack_1a0,0xf);
  do {
    func_0x0001077efd08();
    func_0x0001077f05fc();
  } while (!(bool)in_ZR);
  func_0x0001077efcb8();
  puVar1 = puStack_1b8;
  func_0x0001077e3550(puStack_1b8,puStack_1b0,param_1);
  func_0x0001077ef650();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x0001077eebdc();
  func_0x0001077ef650();
  func_0x0001077ef0b0();
  func_0x0001077f16d0();
  puVar2 = puVar1;
  func_0x0001077ef9e8();
  func_0x00010726ccd4();
  func_0x000104c318bc(puVar2 + 0x18);
  func_0x000104c318bc(puVar1 + 0x26);
  puVar1[0x34] = *unaff_x22;
  puVar1[0x35] = auStack_1a0[0];
  *(undefined8 *)(puVar1 + 0x36) = *in_x6;
  puVar1[0x38] = *in_x7;
  puVar1[0x39] = *puStack_1c0;
  puVar1[0x3a] = *puStack_1b8;
  *(undefined1 *)(puVar1 + 0x3b) = *puStack_1b0;
  *(undefined1 *)((long)puVar1 + 0xed) = *puStack_1a8;
  puVar1[0x3c] = *extraout_x8;
  puVar1[0x3d] = *puStack_238;
  uVar3 = *puStack_230;
  *(undefined8 *)(puVar1 + 0x40) = puStack_230[1];
  *(undefined8 *)(puVar1 + 0x3e) = uVar3;
  puVar1[0x42] = *apuStack_188[0];
  return puVar1;
}



/* Entry: 1077e364c; end: 1077e366f;  */

void FUN_1077e364c(void)

{
  undefined8 extraout_x9;
  
  func_0x0001077ee270();
  func_0x0001077e3678(extraout_x9);
  return;
}



/* Entry: 1077e376c; end: 1077e37a3;  */

/* WARNING: Possible PIC construction at 0x0001077e37c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077e37c8) */
/* WARNING: Removing unreachable block (ram,0x0001077e37e8) */
/* WARNING: Removing unreachable block (ram,0x0001077ee7f4) */
/* WARNING: Removing unreachable block (ram,0x0001077e37e0) */
/* WARNING: Removing unreachable block (ram,0x0001077ee69c) */

void FUN_1077e376c(undefined1 *param_1,long param_2,long param_3)

{
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auStack_70 [64];
  
  if ((*(int *)(param_2 + 0x70) != 0) && (*(int *)(param_2 + 0x70) != 1)) {
    param_1 = auStack_70;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x0001077ee254(param_3 + 8,param_2 + 8);
    func_0x0001077f0980();
    unaff_x30 = &UNK_1077e37c8;
    register0x00000008 = (BADSPACEBASE *)auStack_70;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001000d03a8(param_1);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1077e38b8; end: 1077e38bb;  */

ulong FUN_1077e38b8(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x0001077e38dc();
    return CONCAT44(uVar2,uVar1);
  }
  return (ulong)*(uint *)*param_3;
}



/* Entry: 1077e3a6c; end: 1077e3ad3;  */

void FUN_1077e3a6c(void)

{
  func_0x0001077eef14();
  func_0x0001077e3ad4();
  func_0x0001077f0db4();
  func_0x0001077e3b30();
  func_0x0001077f1814();
  FUN_1077e27bc();
  func_0x0001077efec4();
  func_0x0001077e3afc();
  func_0x0001077f1000();
  func_0x0001077e3c94();
  return;
}



/* Entry: 1077e3c28; end: 1077e3c53;  */

void FUN_1077e3c28(void)

{
  uint extraout_w8;
  
  func_0x0001077f0c60();
  if ((extraout_w8 & 1) == 0) {
    func_0x0001077e3c54();
  }
  return;
}



/* Entry: 1077e3e78; end: 1077e3ec3;  */

void FUN_1077e3e78(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x0001077f0fb8();
  if (param_4 != 0) {
    func_0x0001077eead8();
    func_0x0001077e3ec4(param_1,param_4);
    func_0x0001077eeecc();
    func_0x0001077e3ef8();
  }
  func_0x0001077efac0();
  func_0x0001077e3f84();
  return;
}



/* Entry: 1077e4084; end: 1077e40eb;  */

long FUN_1077e4084(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001077e40ec();
  func_0x000104c2f64c(lVar1 + 0x60);
  func_0x000104c2f64c(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe6) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  return param_1;
}



/* Entry: 1077e4394; end: 1077e440f;  */

void FUN_1077e4394(void)

{
  undefined1 auStack_70 [48];
  
  func_0x0001077efea0();
  func_0x0001077f14a4();
  func_0x0001077f1394();
  func_0x0001077eff10(auStack_70);
  func_0x0001077ef464();
  func_0x0001077e44bc();
  func_0x0001077eefe8();
  func_0x0001077ef370();
  return;
}



/* Entry: 1077e453c; end: 1077e47b3;  */

void FUN_1077e453c(void)

{
  undefined1 auStack_478 [72];
  undefined1 auStack_430 [72];
  undefined1 auStack_3e8 [72];
  undefined1 auStack_3a0 [72];
  undefined1 auStack_358 [72];
  undefined1 auStack_310 [72];
  undefined1 auStack_2c8 [72];
  undefined1 auStack_280 [72];
  undefined1 auStack_238 [72];
  undefined1 auStack_1f0 [72];
  undefined1 auStack_1a8 [72];
  undefined1 auStack_160 [72];
  undefined1 auStack_118 [72];
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [72];
  
  func_0x0001077eea7c();
  func_0x0001077eea20(1);
  func_0x0001077e4bc4(auStack_88);
  func_0x0001077ef0e0(auStack_d0);
  func_0x0001077e4c28();
  func_0x0001077ef0e0(auStack_118);
  func_0x0001077e4c7c();
  func_0x0001077ef0e0(auStack_160);
  func_0x0001077e4cd0();
  func_0x0001077ef0e0(auStack_1a8);
  func_0x0001077e4cf0();
  func_0x0001077ef0e0(auStack_1f0);
  func_0x0001077e4d10();
  func_0x0001077ef0e0(auStack_238);
  func_0x0001077e4d3c();
  func_0x0001077ef0e0(auStack_280);
  func_0x0001077e4d5c();
  func_0x0001077ef0e0(auStack_2c8);
  func_0x0001077e4d7c();
  func_0x0001077ef0e0(auStack_310);
  func_0x0001077e4d9c();
  func_0x0001077ef0e0(auStack_358);
  func_0x0001077e4dc0();
  func_0x0001077ef0e0(auStack_3a0);
  func_0x0001077e4de4();
  func_0x0001077ef0e0(auStack_3e8);
  func_0x0001077e4e04();
  func_0x0001077ef0e0(auStack_430);
  func_0x0001077e4e24();
  func_0x0001077ef0e0(auStack_478);
  func_0x0001077e4e54();
  func_0x0001077e4a80();
  func_0x0001077efc00();
  func_0x0001077efc5c();
  func_0x0001077f02a0();
  func_0x0001077f0ba0();
  func_0x0001073ebef4(auStack_358);
  func_0x0001073ebef4(auStack_310);
  func_0x0001073ebef4(auStack_2c8);
  func_0x0001073ebef4(auStack_280);
  func_0x0001073ebef4(auStack_238);
  func_0x0001073ebef4(auStack_1f0);
  func_0x0001073ebef4(auStack_1a8);
  func_0x0001073ebef4(auStack_160);
  func_0x0001073ebef4(auStack_118);
  func_0x0001077f0dd0();
  func_0x0001077f0a88();
  return;
}



/* Entry: 1077e5054; end: 1077e506f;  */

void FUN_1077e5054(void)

{
  func_0x0001077ef51c();
  func_0x0001077e5070();
  return;
}



/* Entry: 1077e51a0; end: 1077e51d3;  */

void FUN_1077e51a0(void)

{
  undefined1 in_ZR;
  
  func_0x0001077ee1ec();
  func_0x0001077ee2d0();
  func_0x0001077ef1a8();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ef51c();
  func_0x0001077e51f0();
  return;
}



/* Entry: 1077e52f0; end: 1077e531f;  */

void FUN_1077e52f0(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  
  if ((*(int *)(param_2 + 0x40) != 0) && (uVar1 = *(int *)(param_2 + 0x40) == 1, !(bool)uVar1)) {
    func_0x0001077ee1ec(param_3,param_2);
    func_0x0001077ee2d0();
    func_0x0001077ef1a8();
    func_0x0001077ee28c();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x0001077e53bc(extraout_x8,param_3 + 8,param_3 + 0x68,param_3 + 0xa0,param_3 + 0xd8,
                          param_3 + 0xdc,param_3 + 0xe0,param_3 + 0xe8,param_3 + 0xec,param_3 + 0xf0
                          ,param_3 + 0xf4,param_3 + 0xf5,param_3 + 0xf8,param_3 + 0xfc,
                          param_3 + 0x100,param_3 + 0x110,&stack0xfffffffffffffff0,&UNK_1077e5354);
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1077e56b0; end: 1077e56d7;  */

long * FUN_1077e56b0(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0x2e8ba2e8ba2e8ba < param_2) {
    func_0x0001077e5700();
    func_0x0001077ef34c();
    func_0x0001077f068c();
    func_0x0001077e5788();
    func_0x0001077ee520();
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x58;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x1745d1745d1745c < uVar1) {
    plVar2 = (long *)0x2e8ba2e8ba2e8ba;
  }
  return plVar2;
}



/* Entry: 1077e5840; end: 1077e584f;  */

void FUN_1077e5840(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x0001077efce8();
  while (param_3 != param_5) {
    param_3 = param_3 + -0x58;
    func_0x0001077e24b8(param_3);
  }
  return;
}



/* Entry: 1077e59e0; end: 1077e5a3f;  */

void FUN_1077e59e0(void)

{
  func_0x0001077efe7c();
  func_0x0001077f14a4();
  func_0x0001077ef838();
  func_0x0001077ef864();
  func_0x0001077ef464();
  func_0x0001077e5a40();
  func_0x0001077eefe8();
  func_0x0001077ef370();
  return;
}



/* Entry: 1077e5ec4; end: 1077e5f07;  */

void FUN_1077e5ec4(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077ef424();
  func_0x0001077e5f08();
  iVar1 = *(int *)(unaff_x20 + 0x50);
  if (iVar1 != -1) {
    func_0x0001077eebf8(&PTR_DAT_1109de488);
    *(int *)(unaff_x19 + 0x50) = iVar1;
  }
  return;
}



/* Entry: 1077e608c; end: 1077e6103;  */

undefined8 * FUN_1077e608c(void)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  
  func_0x0001077ef1b8();
  func_0x0001077e60b0();
  puVar1 = unaff_x19;
  func_0x0001077ef0d4();
  *unaff_x19 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001077ee6cc();
  }
  return unaff_x19;
}



/* Entry: 1077e620c; end: 1077e620f;  */

void FUN_1077e620c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  *param_1 = uVar1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_1[3] = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}



/* Entry: 1077e63b0; end: 1077e63e7;  */

void FUN_1077e63b0(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001077efa58();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x18) {
    func_0x0001077efe94();
    func_0x0001077e63e8();
  }
  return;
}



/* Entry: 1077e713c; end: 1077e718f;  */

void FUN_1077e713c(void)

{
  undefined1 in_ZR;
  undefined1 auStack_e0 [72];
  undefined1 auStack_70 [64];
  
  func_0x0001077ee9f8();
  func_0x0001077ee374();
  FUN_1077e8d1c(auStack_70);
  func_0x0001077eeee0();
  func_0x0001077e8cf8();
  func_0x0001077ef230();
  func_0x0001077ee28c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001077eea08();
    func_0x0001077ef068();
    func_0x0001077ee9f8();
    func_0x0001077ee374();
    func_0x0001077e8dc8(auStack_e0);
    func_0x0001077eeee0();
    func_0x0001077e8cf8();
    func_0x0001077ef230();
    func_0x0001077ee28c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001077eea08();
      func_0x0001077ef068();
      func_0x0001077f0020();
      func_0x0001077ee99c();
      func_0x0001077e8dd0();
      return;
    }
  }
  return;
}



/* Entry: 1077e7434; end: 1077e75cf;  */

void FUN_1077e7434(long param_1)

{
  func_0x0001077e7978(param_1 + 8,param_1 + 0xc,param_1 + 0x1c,param_1 + 0x20,param_1 + 0x24,
                      param_1 + 0x34,param_1 + 0x38,param_1 + 0x40,param_1 + 0x44,param_1 + 0x54,
                      param_1 + 0x55,param_1 + 0x56,param_1 + 0x57,param_1 + 0x58,param_1 + 0x59,
                      param_1 + 0x5c,param_1 + 0x70,param_1 + 0x84,param_1 + 0x98,param_1 + 0xac,
                      param_1 + 0xad,param_1 + 0xae,param_1 + 0xaf,param_1 + 0xb0,param_1 + 0xb8,
                      param_1 + 0xc0,param_1 + 200,param_1 + 0xd0,param_1 + 0xd8,param_1 + 0xe0,
                      param_1 + 0xe8,param_1 + 0xf0,param_1 + 0xf8,param_1 + 0x100,param_1 + 0x108,
                      param_1 + 0x168,param_1 + 0x1a0,param_1 + 0x1d8,param_1 + 0x1d9,
                      param_1 + 0x1dc,param_1 + 0x1ec,param_1 + 0x1f0,param_1 + 0x208,
                      param_1 + 0x20c,param_1 + 0x210,param_1 + 0x220);
  return;
}



/* Entry: 1077e7c44; end: 1077e7c8b;  */

void FUN_1077e7c44(ulong *param_1,float *param_2)

{
  long lVar1;
  int extraout_w8;
  long extraout_x9;
  ulong uVar2;
  long extraout_x10;
  float fVar3;
  
  fVar3 = *param_2;
  func_0x0001077f11bc(*(undefined1 *)(param_2 + 1));
  lVar1 = extraout_x10;
  if (fVar3 != 0.0) {
    lVar1 = extraout_x9 + extraout_x10;
  }
  if (extraout_w8 == 0) {
    lVar1 = extraout_x10;
  }
  uVar2 = *param_1;
  *param_1 = (uVar2 >> 4) + uVar2 * 0x1000 + lVar1 ^ uVar2;
  return;
}



/* Entry: 1077e7e38; end: 1077e7e77;  */

uint FUN_1077e7e38(byte *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    return (uint)*(byte *)*param_2;
  }
  uVar1 = *(int *)(param_1 + 0x30) == 1;
  if ((bool)uVar1) {
    return (uint)*param_1;
  }
  param_2 = param_2 + 1;
  func_0x0001077f06c8(param_2,param_1);
  uVar2 = (uint)param_2;
  func_0x0001077f00b8();
  func_0x0001077e7ea8();
  if (((uVar2 >> 8 & 1) == 0) && (func_0x0001077eed54(), (bool)uVar1)) {
    uVar2 = (uint)*(byte *)(unaff_x19 + 0x28);
  }
  return uVar2 & 0xff;
}



/* Entry: 1077e803c; end: 1077e803f;  */

void FUN_1077e803c(void)

{
  func_0x0001077ee234();
  func_0x0001077e8060();
  return;
}



/* Entry: 1077e8168; end: 1077e81d3;  */

void FUN_1077e8168(undefined8 *param_1)

{
  undefined1 in_ZR;
  
  func_0x0001077ee420();
  func_0x0001077ef734(*param_1);
  func_0x0001077efcac();
  if ((bool)in_ZR) {
    func_0x0001077ef72c();
    func_0x000107775ccc();
    func_0x0001077f00ac();
  }
  else {
    func_0x0001077f007c();
  }
  func_0x0001077ee79c();
  func_0x0001077ee2e4();
  if ((bool)in_ZR) {
    func_0x0001077f00a0();
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ee510();
  func_0x0001077ef068();
  func_0x0001077ee210();
  func_0x0001077e81f0();
  return;
}



/* Entry: 1077e8390; end: 1077e83fb;  */

void FUN_1077e8390(undefined8 *param_1)

{
  undefined1 in_ZR;
  
  func_0x0001077ee420();
  func_0x0001077ef734(*param_1);
  func_0x0001077efcac();
  if ((bool)in_ZR) {
    func_0x0001077ef72c();
    func_0x000107775d04();
    func_0x0001077f00ac();
  }
  else {
    func_0x0001077f007c();
  }
  func_0x0001077ee79c();
  func_0x0001077ee2e4();
  if ((bool)in_ZR) {
    func_0x0001077f00a0();
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ee510();
  func_0x0001077ef068();
  func_0x0001077ee210();
  func_0x0001077e8418();
  return;
}



/* Entry: 1077e85e0; end: 1077e863f;  */

void FUN_1077e85e0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 auStack_48 [2];
  char cStack_34;
  
  func_0x0001077e8640(auStack_48);
  puVar1 = (undefined8 *)(param_2 + 0x28);
  if (*(char *)(param_2 + 0x3c) == '\0') {
    puVar1 = param_5;
  }
  puVar2 = auStack_48;
  if (cStack_34 == '\0') {
    puVar2 = puVar1;
  }
  uVar3 = *puVar2;
  param_1[1] = puVar2[1];
  *param_1 = uVar3;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar2 + 2);
  return;
}



/* Entry: 1077e8840; end: 1077e886f;  */

uint FUN_1077e8840(uint param_1)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x0001077f00b8();
  func_0x0001077e8870();
  if (((param_1 >> 8 & 1) == 0) && (func_0x0001077eed54(), (bool)in_ZR)) {
    param_1 = (uint)*(byte *)(unaff_x19 + 0x28);
  }
  return param_1 & 0xff;
}



/* Entry: 1077e8a68; end: 1077e8a97;  */

uint FUN_1077e8a68(uint param_1)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x0001077f00b8();
  func_0x0001077e8a98();
  if (((param_1 >> 8 & 1) == 0) && (func_0x0001077eed54(), (bool)in_ZR)) {
    param_1 = (uint)*(byte *)(unaff_x19 + 0x28);
  }
  return param_1 & 0xff;
}



/* Entry: 1077e8d1c; end: 1077e8d23;  */

void FUN_1077e8d1c(undefined8 param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,0x1138369c0);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1077e8e74; end: 1077e8eb3;  */

uint FUN_1077e8e74(byte *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    return (uint)*(byte *)*param_2;
  }
  uVar1 = *(int *)(param_1 + 0x30) == 1;
  if ((bool)uVar1) {
    return (uint)*param_1;
  }
  param_2 = param_2 + 1;
  func_0x0001077f06c8(param_2,param_1);
  uVar2 = (uint)param_2;
  func_0x0001077f00b8();
  func_0x0001077e8ee4();
  if (((uVar2 >> 8 & 1) == 0) && (func_0x0001077eed54(), (bool)uVar1)) {
    uVar2 = (uint)*(byte *)(unaff_x19 + 0x28);
  }
  return uVar2 & 0xff;
}



/* Entry: 1077e9020; end: 1077e905f;  */

void FUN_1077e9020(void)

{
  undefined8 extraout_x9;
  
  func_0x0001077ee270();
  func_0x0001077e9044(extraout_x9);
  return;
}



/* Entry: 1077e9204; end: 1077e9253;  */

void FUN_1077e9204(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001077efa68();
  if (param_2 != 0) {
    func_0x0001077e9234(param_4);
  }
  func_0x0001077f0f58();
  return;
}



/* Entry: 1077e939c; end: 1077e93cb;  */

void FUN_1077e939c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001077ef34c();
  while (func_0x0001077f0fac(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x20;
    FUN_1077e608c();
  }
  return;
}



/* Entry: 1077e96f0; end: 1077e9717;  */

void FUN_1077e96f0(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001077f0638();
  func_0x0001077f0a90();
  func_0x0001077e9718();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1077e99a0; end: 1077e9a47;  */

/* WARNING: Possible PIC construction at 0x0001077e9a8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077e9a90) */
/* WARNING: Removing unreachable block (ram,0x0001077e9a98) */

ulong FUN_1077e99a0(ulong param_1)

{
  ulong *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 in_ZR;
  ulong uVar5;
  ulong uVar6;
  int extraout_w8;
  undefined8 unaff_x19;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined *puVar7;
  undefined1 auStack_1e0 [416];
  undefined1 *puVar4;
  
  func_0x0001077f184c();
  func_0x0001077ee3c0();
  func_0x0001077f1ab4();
  if (extraout_w8 == 0) {
    func_0x0001077f0548();
    puVar1 = (ulong *)(unaff_x22 + 8);
    unaff_x22 = *(ulong *)(unaff_x22 + 0x10);
    for (unaff_x21 = *puVar1; in_ZR = unaff_x21 == unaff_x22, !(bool)in_ZR;
        unaff_x21 = unaff_x21 + 0x58) {
      func_0x0001077f03c8();
      FUN_1077e99a0();
      func_0x0001077efeb8();
      func_0x0001077e41b8();
      func_0x0001077ef870();
    }
  }
  else {
    func_0x0001077efe74(auStack_1e0);
    param_1 = unaff_x22;
    func_0x0001077ef0c4();
    func_0x0001077ef1a8();
  }
  func_0x0001077ee314();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar7 = &UNK_1077e9a48;
    uVar5 = param_1;
    func_0x0001077ef0b0();
    puVar2 = auStack_1e0;
    puVar3 = (undefined1 *)register0x00000008;
    while( true ) {
      puVar4 = puVar2;
      *(ulong *)(puVar4 + -0x30) = unaff_x22;
      *(ulong *)(puVar4 + -0x28) = unaff_x21;
      *(ulong *)(puVar4 + -0x20) = param_1;
      *(undefined8 *)(puVar4 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar4 + -0x10) = puVar3 + -0x10;
      *(undefined **)(puVar4 + -8) = puVar7;
      if (*(int *)(uVar5 + 0x50) != 0) {
        return (ulong)(*(byte *)(uVar5 + 0x10) >> 1 & 1);
      }
      uVar6 = uVar5;
      func_0x0001077f0cc4();
      if ((int)uVar6 == 0) break;
      param_1 = *(ulong *)(uVar5 + 8);
      unaff_x21 = *(ulong *)(uVar5 + 0x10);
      if (param_1 == unaff_x21) {
        return 1;
      }
      puVar7 = &UNK_1077e9a90;
      unaff_x19 = 0;
      puVar2 = puVar4 + -0x30;
      uVar5 = param_1;
      puVar3 = puVar4;
    }
    return 0;
  }
  return param_1;
}



/* Entry: 1077e9d00; end: 1077e9d03;  */

long FUN_1077e9d00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001077ef118(&UNK_1109de968);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0xc98);
  func_0x0001077f12d0();
  func_0x0001077ea9b4();
  return param_1;
}



/* Entry: 1077eb45c; end: 1077eb4af;  */

void FUN_1077eb45c(void)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x20;
  undefined1 uStack_f1;
  undefined1 **ppuStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [64];
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [64];
  
  func_0x0001077ef34c();
  func_0x0001077ee374();
  FUN_1077e8d1c(auStack_70);
  func_0x0001077efae0(unaff_x20 + 0x960);
  func_0x0001077ec3dc();
  func_0x0001077ef230();
  func_0x0001077ee28c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001077eea08();
    func_0x0001077ef068();
    puStack_78 = &UNK_1077eb4b0;
    puStack_80 = &stack0xfffffffffffffff0;
    func_0x0001077ef34c();
    func_0x0001077ee374();
    func_0x0001077e8dc8(auStack_e0);
    lVar1 = unaff_x20 + 0x9d8;
    func_0x0001077efae0(lVar1);
    func_0x0001077ec3dc();
    func_0x0001077ef230();
    func_0x0001077ee28c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001077eea08();
      func_0x0001077ef068();
      puStack_e8 = &UNK_1077eb504;
      ppuStack_f0 = &puStack_80;
      func_0x0001077f0064();
      FUN_1077ec45c(lVar1 + 0xa50,&uStack_f1);
      return;
    }
  }
  return;
}



/* Entry: 1077ebc5c; end: 1077ebc77;  */

void FUN_1077ebc5c(void)

{
  func_0x0001077ef51c();
  func_0x0001077ebc78();
  return;
}



/* Entry: 1077ebda8; end: 1077ebddb;  */

void FUN_1077ebda8(void)

{
  undefined1 in_ZR;
  
  func_0x0001077ee1ec();
  func_0x0001077ee2d0();
  func_0x0001077ef1a8();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ef51c();
  func_0x0001077ebdf8();
  return;
}



/* Entry: 1077ebef8; end: 1077ebf27;  */

void FUN_1077ebef8(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  if ((*(int *)(param_2 + 0x30) != 0) && (uVar1 = *(int *)(param_2 + 0x30) == 1, !(bool)uVar1)) {
    func_0x0001077ee1ec(param_3,param_2);
    func_0x0001077ee2d0();
    func_0x0001077ef1a8();
    func_0x0001077ee28c();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x0001077ef51c();
      func_0x0001077ebf78();
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1077ec05c; end: 1077ec077;  */

void FUN_1077ec05c(void)

{
  func_0x0001077ef51c();
  func_0x0001077ec078();
  return;
}



/* Entry: 1077ec1a8; end: 1077ec1db;  */

void FUN_1077ec1a8(void)

{
  undefined1 in_ZR;
  
  func_0x0001077ee1ec();
  func_0x0001077ee2d0();
  func_0x0001077ef1a8();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ef51c();
  func_0x0001077ec1f8();
  return;
}



/* Entry: 1077ec2f8; end: 1077ec327;  */

void FUN_1077ec2f8(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  if ((*(int *)(param_2 + 0x40) != 0) && (uVar1 = *(int *)(param_2 + 0x40) == 1, !(bool)uVar1)) {
    func_0x0001077ee1ec(param_3,param_2 + 8);
    func_0x0001077ee2d0();
    func_0x0001077ef1a8();
    func_0x0001077ee28c();
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x0001077ef51c();
      func_0x0001077ec378();
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1077ec45c; end: 1077ec477;  */

void FUN_1077ec45c(void)

{
  func_0x0001077ef51c();
  func_0x0001077ec478();
  return;
}



/* Entry: 1077ec5a8; end: 1077ec5db;  */

void FUN_1077ec5a8(void)

{
  undefined1 in_ZR;
  
  func_0x0001077ee1ec();
  func_0x0001077ee2d0();
  func_0x0001077ef1a8();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ef51c();
  func_0x0001077ec5f8();
  return;
}



/* Entry: 1077ece44; end: 1077ecef3;  */

void FUN_1077ece44(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x0001077ee3c0();
  func_0x0001077f13a8();
  func_0x0001077efec4();
  func_0x000107561404();
  func_0x0001077ef564();
  func_0x0001077ee2e4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ee3c0();
  func_0x0001077ef844();
  func_0x0001077ef858();
  func_0x0001077ef230();
  func_0x0001077ee2e4();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001077ee3c0();
    func_0x0001077ef844();
    func_0x0001077ef858();
    func_0x0001077ef230();
    func_0x0001077ee2e4();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      uVar1 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar1;
      *(undefined4 *)(param_1 + 8) = 1;
      return;
    }
  }
  return;
}



/* Entry: 1077ed0f4; end: 1077ed11b;  */

void FUN_1077ed0f4(undefined8 param_1,ulong param_2)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [48];
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x58);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001077ee5cc();
  while (unaff_x22 != unaff_x19) {
    func_0x0001077f1758();
    func_0x0001077e5e9c();
    func_0x0001077f1858();
  }
  func_0x0001077efeac();
  func_0x0001077ef0e0();
  func_0x0001077ed178();
  func_0x0001077ed1a8(auStack_70);
  return;
}



/* Entry: 1077ed27c; end: 1077ed2cf;  */

void FUN_1077ed27c(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x19;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077efd70();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x0001077b0f58();
  func_0x0001072c9b9c(&uStack_30);
  func_0x0001077e61b0(unaff_x19 + 0x28);
  return;
}



/* Entry: 1077ed450; end: 1077ed6ef;  */

undefined1 * FUN_1077ed450(undefined4 param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  int extraout_w8;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong uVar6;
  long extraout_x9;
  long lVar7;
  long extraout_x9_00;
  long extraout_x10;
  long lVar8;
  long extraout_x10_00;
  int extraout_w11;
  int iVar9;
  int extraout_w11_00;
  uint extraout_w13;
  undefined4 extraout_w13_00;
  undefined4 extraout_var;
  undefined8 *unaff_x19;
  undefined1 *puVar10;
  undefined8 *unaff_x21;
  undefined4 unaff_w22;
  undefined4 uVar11;
  undefined1 uStack_4de;
  undefined1 uStack_4dd;
  undefined1 uStack_4dc;
  char cStack_4db;
  byte bStack_4da;
  char cStack_4d9;
  undefined1 auStack_4d8 [24];
  undefined1 *puStack_4c0;
  undefined1 *puStack_4b8;
  undefined1 **ppuStack_4b0;
  undefined *puStack_4a8;
  undefined1 auStack_4a0 [72];
  undefined1 auStack_458 [72];
  undefined1 auStack_410 [72];
  undefined1 auStack_3c8 [16];
  undefined4 uStack_3b8;
  undefined4 uStack_3a0;
  undefined4 uStack_388;
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [72];
  undefined1 auStack_320 [416];
  undefined1 *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [56];
  undefined1 auStack_e8 [56];
  ulong auStack_b0 [7];
  undefined8 uStack_78;
  
  func_0x0001077efea0();
  func_0x0001077ee3e4();
  uStack_78 = extraout_x8;
  FUN_1077edb84(auStack_e8);
  uVar4 = *(int *)(param_2 + 0x78) == 1;
  if ((bool)uVar4) {
    puVar10 = (undefined1 *)(param_2 + 0x10);
LAB_1077ed4b0:
    func_0x000104c2fe00(auStack_120,puVar10);
  }
  else {
    if (*(int *)(param_2 + 0x78) == 0) {
      puVar10 = auStack_e8;
      goto LAB_1077ed4b0;
    }
    func_0x000104c2fe00(auStack_b0,auStack_e8);
    func_0x0001077ef0b8(auStack_120,param_2 + 0x10);
    func_0x0001073393c0();
    func_0x000104c2f714(auStack_b0);
  }
  func_0x000104c2f714(auStack_e8);
  auStack_b0[0]._0_4_ = 0;
  func_0x0001077eef04();
  auStack_b0[0]._0_4_ = 0;
  func_0x0001077eef04();
  auStack_b0[0] = CONCAT44(auStack_b0[0]._4_4_,0x3f800000);
  func_0x0001077eef04();
  uVar11 = param_1;
  func_0x0001077edba4(auStack_e8);
  if (*(int *)(param_2 + 0x170) == 0) {
    puVar10 = auStack_e8;
  }
  else {
    puVar10 = (undefined1 *)(param_2 + 0x128);
    uVar4 = *(int *)(param_2 + 0x170) == 1;
    if (!(bool)uVar4) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_b0,auStack_e8);
      func_0x0001077ef0b8(&uStack_138,puVar10);
      func_0x00010727f9d8();
      func_0x0001077f0e74();
      goto LAB_1077ed570;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_138,puVar10);
LAB_1077ed570:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
  auStack_b0[0] = auStack_b0[0] & 0xffffffff00000000;
  func_0x0001077eef04();
  __Znwm(0xb0);
  func_0x0001077efcc4();
  func_0x000104c318bc();
  func_0x0001077f0398();
  *(undefined4 *)(unaff_x21 + 9) = param_1;
  unaff_x21[0xb] = uStack_130;
  unaff_x21[10] = uStack_138;
  unaff_x21[0xc] = uStack_128;
  func_0x0001077f0b1c();
  *(undefined4 *)(unaff_x21 + 0xd) = uVar11;
  *unaff_x21 = &PTR_DAT_1109de540;
  auStack_b0[0] = 0;
  func_0x0001073f26dc(auStack_b0,unaff_x21 + 1);
  func_0x0001077f0a0c(auStack_b0);
  func_0x0001077f07ac(auStack_b0);
  func_0x0001077f0748(auStack_b0);
  func_0x0001074b019c(auStack_b0,unaff_x21 + 10);
  func_0x0001073ca0ec(auStack_b0,unaff_x21 + 0xd);
  unaff_x21[0xe] = auStack_b0[0];
  func_0x0001077dd758(auStack_b0);
  func_0x0001077f0470();
  func_0x0001077effd4(unaff_x21 + 0xf);
  func_0x0001077f0e74();
  func_0x0001077ef60c();
  puVar10 = auStack_120;
  func_0x000104c2f714();
  *unaff_x19 = unaff_x21;
  func_0x0001077ee344(uStack_78);
  if ((bool)uVar4) {
    return puVar10;
  }
  ___stack_chk_fail();
  func_0x0001077f0e74();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
  func_0x000104c2f714(auStack_120);
  func_0x0001077ef068();
  puStack_148 = &DAT_1077ed6f0;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x0001077ee358();
  func_0x0001077efc18();
  FUN_1077edb84(auStack_368);
  uVar11 = unaff_w22;
  uVar2 = unaff_w22;
  uVar3 = unaff_w22;
  if (*(int *)(unaff_x21 + 0xf) != 0) {
    uVar4 = *(int *)(unaff_x21 + 0xf) == 1;
    if ((bool)uVar4) {
      uVar11 = 1;
      uVar2 = 1;
      uVar3 = 1;
    }
    else {
      func_0x0001077efe74(auStack_320);
      func_0x0001077ef0c4(auStack_3c8,unaff_x21 + 2,auStack_320);
      func_0x0001077f0af4();
      uVar11 = uStack_3b8;
      uVar2 = uStack_3a0;
      uVar3 = uStack_388;
    }
  }
  uStack_388 = uVar3;
  uStack_3a0 = uVar2;
  uStack_3b8 = uVar11;
  func_0x000104c2f714(auStack_368);
  func_0x0001077f0b14(auStack_368,unaff_x21 + 0x10);
  func_0x0001077f0b14(auStack_410,unaff_x21 + 0x17);
  func_0x0001077f0b14(auStack_458,unaff_x21 + 0x1e);
  func_0x0001077edba4(auStack_380);
  if ((*(int *)(unaff_x21 + 0x2e) == 0) || (uVar4 = *(int *)(unaff_x21 + 0x2e) == 1, (bool)uVar4)) {
    func_0x0001077f02c4(1);
  }
  else {
    func_0x0001077efe74(auStack_320);
    func_0x0001077ef0c4(auStack_4a0,unaff_x21 + 0x25,auStack_320);
    func_0x0001077f0af4();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_380);
  func_0x0001077f0b14(auStack_320,unaff_x21 + 0x2f);
  func_0x0001077ef1ec(auStack_3c8);
  func_0x0001077ee7b8();
  func_0x0001077ee8e4(auStack_3c8);
  func_0x0001077ef1ec(auStack_368);
  func_0x0001077ee7b8();
  func_0x0001077ee8e4(auStack_368);
  func_0x0001077ef1ec(auStack_410);
  func_0x0001077ee7b8();
  func_0x0001077ee8e4(auStack_410);
  func_0x0001077ef1ec(auStack_458);
  func_0x0001077ee7b8();
  func_0x0001077ee8e4(auStack_458);
  func_0x0001077ef1ec(auStack_4a0);
  func_0x0001077ee7b8();
  func_0x0001077ee8e4(auStack_4a0);
  func_0x0001077ef1ec(auStack_320);
  func_0x0001077ee7b8();
  func_0x0001077ee8e4(auStack_320);
  func_0x0001073ebef4(auStack_320);
  func_0x0001077ef870();
  func_0x0001077efc00();
  func_0x0001077efc5c();
  puVar5 = auStack_368;
  func_0x0001073ebef4();
  func_0x0001077f02a0();
  func_0x0001077ee314();
  if ((bool)uVar4) {
    return puVar5;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_380);
  func_0x0001077efc00();
  func_0x0001077efc5c();
  uStack_4de = SUB81(auStack_368,0);
  func_0x0001073ebef4();
  func_0x0001077f02a0();
  func_0x0001077ef998();
  func_0x0001077ef0b0();
  puStack_4a8 = &DAT_1077ed920;
  puStack_4c0 = puVar5;
  puStack_4b8 = puVar10;
  ppuStack_4b0 = &puStack_150;
  func_0x0001077ef1b8();
  FUN_1077df888();
  uStack_4dd = uStack_4de;
  func_0x0001077f1184();
  uStack_4dc = uStack_4dd;
  func_0x0001077f118c();
  cStack_4db = (char)puVar10 + -0x10;
  func_0x0001077df020();
  if (*(int *)(puVar10 + 0x170) == 0) {
    bStack_4da = 1;
  }
  else {
    bStack_4da = (byte)puVar10[0x138] >> 1 & 1;
    if (*(int *)(puVar10 + 0x170) == 1) {
      bStack_4da = 1;
    }
  }
  cStack_4d9 = (char)puVar10 + 'x';
  func_0x0001077df020();
  func_0x0001077df080(auStack_4d8,&uStack_4de,6);
  func_0x0001077ee5f4();
  uVar6 = extraout_x8_00;
  lVar7 = extraout_x9;
  lVar8 = extraout_x10;
  iVar9 = extraout_w11;
  while( true ) {
    uVar4 = lVar7 == lVar8 && (int)uVar6 == iVar9;
    puVar10 = (undefined1 *)(ulong)(byte)uVar4;
    if (((bool)uVar4) || (func_0x0001077f03b4(), (extraout_w13 & 1) == 0)) break;
    func_0x0001077f038c();
    lVar7 = extraout_x9_00 + CONCAT44(extraout_var,extraout_w13_00);
    uVar1 = 0;
    if (!(bool)uVar4) {
      uVar1 = extraout_w8 + 1;
    }
    uVar6 = (ulong)uVar1;
    lVar8 = extraout_x10_00;
    iVar9 = extraout_w11_00;
  }
  func_0x0001077eff98();
  return puVar10;
}



/* Entry: 1077edb84; end: 1077edba7;  */

void FUN_1077edb84(undefined8 param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,0x1138369c0);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1077ee040; end: 1077ee053;  */

void FUN_1077ee040(void)

{
  func_0x0001077ee104();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077f0940; end: 1077f0953;  */

long FUN_1077f0940(void)

{
  long unaff_x29;
  
  FUN_1077e7c44();
  return unaff_x29 + -0x60;
}



/* Entry: 1077f22bc; end: 1077f23c7;  */

long * FUN_1077f22bc(long *param_1,long *param_2)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 auStack_148 [272];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_1;
  plVar3 = param_2;
  func_0x000100061de0();
  lVar4 = *param_1;
  if ((*(long *)(lVar4 + -8) == 0) && (*(char *)(lVar4 + (long)plVar6) != -2)) {
    uVar5 = param_1[2];
    if ((uVar5 < 9) || (uVar5 * 0x19 < (ulong)(param_1[3] << 5))) {
      func_0x0001073b0150(param_1,uVar5 << 1 | 1);
    }
    else {
      func_0x00010ae6c914(param_1,&UNK_1109deaa8,auStack_148);
    }
    plVar6 = param_1;
    plVar3 = param_2;
    func_0x000100061de0();
    lVar4 = *param_1;
  }
  param_1[3] = param_1[3] + 1;
  bVar2 = *(char *)(lVar4 + (long)plVar6) == -0x80;
  *(ulong *)(lVar4 + -8) = *(long *)(lVar4 + -8) - (ulong)bVar2;
  bVar1 = (byte)param_2 & 0x7f;
  uVar5 = param_1[2];
  *(byte *)(lVar4 + (long)plVar6) = bVar1;
  *(byte *)(lVar4 + (uVar5 & (long)plVar6 - 7U) + (uVar5 & 7)) = bVar1;
  func_0x0001077f2414(uStack_38);
  if (bVar2) {
    return plVar6;
  }
  ___stack_chk_fail();
  plVar6 = (long *)plVar3[6];
  if (plVar6 == (long *)0xffffffffffffffff) {
    plVar6 = plVar3;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(plVar3);
    func_0x0001001030f4(plVar6,(long)plVar6 + (long)plVar3);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return plVar6;
}



/* Entry: 1077f2664; end: 1077f2703;  */

uint FUN_1077f2664(undefined8 param_1)

{
  uint extraout_w8;
  uint extraout_w8_00;
  uint uVar1;
  int extraout_w9;
  int extraout_w9_00;
  int iVar2;
  long unaff_x23;
  
  func_0x0001077f35ec();
  func_0x0001077f362c(&UNK_1109deba8);
  do {
    if (unaff_x23 == 0) {
      func_0x0001077f35f8();
      iVar2 = extraout_w9_00;
      uVar1 = extraout_w8_00;
      goto LAB_1077f26a8;
    }
    func_0x0001077f35cc();
    func_0x0001077f35a8();
    func_0x0001077f35e0();
  } while ((int)param_1 == 0);
  func_0x0001077f3604();
  iVar2 = extraout_w9;
  uVar1 = extraout_w8;
LAB_1077f26a8:
  return uVar1 | iVar2 << 8;
}



/* Entry: 1077f2928; end: 1077f2977;  */

uint FUN_1077f2928(undefined8 param_1)

{
  uint extraout_w8;
  uint extraout_w8_00;
  uint uVar1;
  int extraout_w9;
  int extraout_w9_00;
  int iVar2;
  long unaff_x23;
  
  func_0x0001077f35ec();
  func_0x0001077f362c(&UNK_1109ded18);
  do {
    if (unaff_x23 == 0) {
      func_0x0001077f35f8();
      iVar2 = extraout_w9_00;
      uVar1 = extraout_w8_00;
      goto LAB_1077f296c;
    }
    func_0x0001077f35cc();
    func_0x0001077f35a8();
    func_0x0001077f35e0();
  } while ((int)param_1 == 0);
  func_0x0001077f3604();
  iVar2 = extraout_w9;
  uVar1 = extraout_w8;
LAB_1077f296c:
  return uVar1 | iVar2 << 8;
}



/* Entry: 1077f2b98; end: 1077f2c37;  */

uint FUN_1077f2b98(undefined8 param_1)

{
  uint extraout_w8;
  uint extraout_w8_00;
  uint uVar1;
  int extraout_w9;
  int extraout_w9_00;
  int iVar2;
  long unaff_x23;
  
  func_0x0001077f35ec();
  func_0x0001077f362c(&UNK_1109dee08);
  do {
    if (unaff_x23 == 0) {
      func_0x0001077f35f8();
      iVar2 = extraout_w9_00;
      uVar1 = extraout_w8_00;
      goto LAB_1077f2bdc;
    }
    func_0x0001077f35cc();
    func_0x0001077f35a8();
    func_0x0001077f35e0();
  } while ((int)param_1 == 0);
  func_0x0001077f3604();
  iVar2 = extraout_w9;
  uVar1 = extraout_w8;
LAB_1077f2bdc:
  return uVar1 | iVar2 << 8;
}



/* Entry: 1077f3504; end: 1077f35a7;  */

/* WARNING: Removing unreachable block (ram,0x0001077f3548) */

uint FUN_1077f3504(undefined8 param_1)

{
  uint extraout_w8;
  int extraout_w9;
  
  func_0x0001077f35ec();
  do {
    func_0x0001077f35cc();
    func_0x0001077f35a8();
    func_0x0001077f35e0();
  } while ((int)param_1 == 0);
  func_0x0001077f3604();
  return extraout_w8 | extraout_w9 << 8;
}



/* Entry: 1077f3888; end: 1077f38bf;  */

undefined8 * FUN_1077f3888(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x0001077f38c0(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 4);
  return param_1;
}



/* Entry: 1077f3aa4; end: 1077f3ad3;  */

long FUN_1077f3aa4(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    func_0x0001077f3ad4(param_1);
  }
  return param_1;
}



/* Entry: 1077f3cac; end: 1077f3d3f;  */

void FUN_1077f3cac(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_1077f3888(&uStack_38);
  }
  else {
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
  }
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_1109df710;
  FUN_1077f3888(puVar2,&uStack_38);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  func_0x00010743e2a8(&uStack_38);
  return;
}



/* Entry: 1077f3e44; end: 1077f3e47;  */

void FUN_1077f3e44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109df710;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077f4668; end: 1077f471b;  */

long * FUN_1077f4668(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)param_1[1];
  param_1[5] = 0;
  while( true ) {
    puVar4 = (undefined8 *)param_1[2];
    uVar1 = (long)puVar4 - (long)puVar3 >> 3;
    if (uVar1 < 3) break;
    __ZdlPv(*puVar3);
    puVar3 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar3;
  }
  if (uVar1 == 1) {
    lVar2 = 0x100;
  }
  else {
    if (uVar1 != 2) goto LAB_1077f46dc;
    lVar2 = 0x200;
  }
  param_1[4] = lVar2;
LAB_1077f46dc:
  for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
    __ZdlPv(*puVar3);
  }
  lVar2 = param_1[2];
  while (lVar2 != param_1[1]) {
    lVar2 = lVar2 + -8;
    param_1[2] = lVar2;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1077f4ec0; end: 1077f4eeb;  */

void FUN_1077f4ec0(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *param_3;
  uVar2 = *param_4;
  uVar3 = *param_5;
  uVar4 = *param_6;
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((long)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((long)param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 3) = uVar4;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  return;
}



/* Entry: 1077f50d0; end: 1077f51c7;  */

void FUN_1077f50d0(float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = param_1;
  if (param_1 != param_2) {
    while (pfVar2 = pfVar1, param_1 = param_1 + 1, param_1 != param_2) {
      pfVar1 = param_1;
      if (*param_1 <= *pfVar2) {
        pfVar1 = pfVar2;
      }
    }
  }
  return;
}



/* Entry: 1077f579c; end: 1077f5f0f;  */

/* WARNING: Possible PIC construction at 0x0001077f5d70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077f5b7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077f5d74) */
/* WARNING: Removing unreachable block (ram,0x0001077f5b80) */
/* WARNING: Removing unreachable block (ram,0x0001077f5e5c) */

ulong FUN_1077f579c(undefined4 param_1,double param_2,undefined4 *param_3,undefined8 param_4,
                   float param_5,float *param_6,double *param_7,long param_8,undefined8 *param_9,
                   uint param_10,ulong param_11,uint param_12,double *param_13,undefined8 param_14,
                   long *param_15)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  float *pfVar9;
  double *pdVar10;
  long extraout_x8;
  undefined4 *puVar11;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  long extraout_x10_02;
  ulong uVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  double dVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  uint uStack_194;
  uint uStack_190;
  uint uStack_18c;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  double dStack_160;
  double dStack_158;
  undefined8 uStack_150;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  char cStack_128;
  float fStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  float fStack_110;
  float afStack_108 [10];
  undefined8 uStack_e0;
  double dStack_d8;
  undefined8 uStack_d0;
  long lStack_b0;
  float *pfVar8;
  
  pfVar8 = param_6;
  pdVar10 = param_7;
  dVar20 = param_2;
  puVar11 = param_3;
  uVar23 = param_4;
  func_0x0001077f8548();
  iVar6 = (int)pfVar8;
  lStack_b0 = extraout_x8;
  func_0x000107417d68();
  uVar25 = (undefined4)uVar23;
  if (iVar6 != 0) {
    puVar1 = (undefined8 *)param_7[1];
    uVar12 = 6;
    puVar15 = (undefined8 *)*param_7;
    do {
      if (puVar15 == puVar1) {
        uVar18 = 0;
        param_13 = pdVar10;
        goto LAB_1077f5e64;
      }
      dVar19 = (double)(float)*puVar15;
      dStack_d8 = (double)(float)((ulong)*puVar15 >> 0x20);
      uStack_e0 = dVar19;
      func_0x0001074183c4(&uStack_e0,param_8 + 0x308);
      pdVar10 = &dStack_160;
      dStack_160 = dVar19;
      dStack_158 = dVar20;
      uStack_150 = puVar11;
      func_0x000107418560(param_6);
      uVar25 = (undefined4)uVar23;
      puVar15 = puVar15 + 4;
    } while (dVar19 <= 0.0);
  }
  if (((ulong)param_7[0x27] & 1) == 0) {
    func_0x0001077f572c(param_6,*param_7,param_8);
    uVar22 = SUB84(param_2,0);
    uStack_e0 = (double)CONCAT44(uVar22,param_1);
    uVar27 = SUB84(param_3,0);
    dStack_d8 = (double)CONCAT44(uVar25,uVar27);
    puVar11 = (undefined4 *)param_15[1];
    if (puVar11 < (undefined4 *)param_15[2]) {
      *puVar11 = param_1;
      puVar11[1] = uVar22;
      puVar11[2] = uVar27;
      puVar11[3] = uVar25;
      puVar13 = puVar11 + 5;
      *(undefined1 *)(puVar11 + 4) = 1;
    }
    else {
      func_0x0001077f8164(param_15,((long)puVar11 - *param_15) / 0x14 + 1);
      func_0x0001077f8688();
      func_0x0001077f81f0(&dStack_160);
      *uStack_150 = param_1;
      uStack_150[1] = uVar22;
      uStack_150[2] = uVar27;
      uStack_150[3] = uVar25;
      *(undefined1 *)(uStack_150 + 4) = 1;
      uStack_150 = uStack_150 + 5;
      FUN_1077f81b4(param_15,&dStack_160);
      puVar13 = (undefined4 *)param_15[1];
      func_0x0001077f823c(&dStack_160);
    }
    param_15[1] = (long)puVar13;
    if (*(char *)(param_13 + 2) == '\x01') {
      pfVar8 = (float *)&uStack_e0;
      goto code_r0x0001077f5f10;
    }
    param_13 = (double *)&uStack_e0;
    pfVar8 = param_6;
    func_0x0001077f5498();
    if ((int)pfVar8 == 0) {
      uVar18 = 0;
      uVar12 = 1;
    }
    else {
      if ((param_10 & 1) == 0) {
        FUN_1077f78f4(afStack_108,param_14);
        param_13 = (double *)(puVar13 + -5);
        param_6 = param_6 + 0x398;
        func_0x0001072a13d8(param_6,param_13,afStack_108);
        pfVar8 = afStack_108;
        func_0x0001077f79bc(pfVar8);
        if (((ulong)param_6 & 1) != 0) {
          uVar18 = 0;
          uVar12 = 4;
          goto LAB_1077f5e64;
        }
      }
      param_13 = (double *)&uStack_e0;
      func_0x0001077f8634();
      uVar12 = 0;
      uVar18 = (ulong)pfVar8 & 0xffffffff;
    }
  }
  else {
    fStack_110 = *(float *)(param_9 + 1);
    uStack_118 = *param_9;
    dVar20 = (double)(ulong)(uint)fStack_110;
    dVar19 = (double)(float)uStack_118;
    dVar24 = (double)(float)((ulong)uStack_118 >> 0x20);
    dVar28 = *(double *)(param_8 + 0x78) +
             *(double *)(param_8 + 0x38) * dVar24 + dVar19 * *(double *)(param_8 + 0x18) +
             (double)fStack_110 * *(double *)(param_8 + 0x58);
    fVar32 = (float)dVar28;
    fStack_124 = fStack_110;
    if ((*(char *)(param_6 + 0x2a5) == '\x01') && (fVar33 = param_6[0x2a4], 0.0 < fVar33)) {
      dStack_160 = dVar19;
      dStack_158 = dVar24;
      func_0x00010741848c(&dStack_160,param_8 + 0x308);
      dVar24 = dVar19 * *(double *)(param_8 + 0x1b8);
      dVar19 = *(double *)(param_8 + 0x1f8);
      fStack_124 = (float)(dVar19 + dVar24 + dVar20 * *(double *)(param_8 + 0x198) +
                                    dVar28 * *(double *)(param_8 + 0x1d8)) - fVar32;
      fVar32 = fVar32 + fVar33 * fStack_124;
    }
    uStack_120 = SUB84(dVar19,0);
    uVar25 = SUB84(dVar28,0);
    fVar34 = param_6[0x29];
    fVar33 = *(float *)(param_9 + 4);
    fVar35 = *(float *)((long)param_9 + 0x24);
    func_0x00010740b67c(&uStack_118,1,param_8);
    pdVar10 = (double *)&fStack_124;
    uStack_11c = uVar25;
    func_0x00010740bdc0(&dStack_160,param_5 / 24.0,param_5 * fVar33,param_5 * fVar35,0,pdVar10,
                        &uStack_118,param_9,param_8,1);
    fVar33 = 0.0;
    fVar35 = 0.0;
    if (cStack_128 == '\x01') {
      fVar30 = 0.0;
      fVar33 = (float)((ulong)dStack_158 >> 0x20);
      fVar21 = 0.0;
      fVar31 = 1.0 / (SUB84(param_3,0) * (float)param_4);
      if ((param_11 & 1) == 0) {
        fVar21 = fVar32 / param_6[0x432] + -1.0;
      }
      fVar26 = fVar31 * uStack_150._4_4_;
      fVar35 = (float)uStack_150 + fVar26;
      _sinf();
      if ((param_11 & 1) == 0) {
        fVar30 = fVar32 / param_6[0x432] + -1.0;
      }
      fVar35 = fVar35 + ABS(fVar33) * fVar21 * fVar26;
      fVar31 = fVar31 * fStack_130;
      _sinf();
      fVar33 = fStack_134 + fVar31 + ABS(fStack_138) * fVar30 * fVar31;
    }
    uVar18 = (long)param_7[1] - (long)*param_7 >> 5;
    uVar12 = (param_15[1] - *param_15) / 0x14;
    if (uVar12 < uVar18) {
      if ((ulong)((param_15[2] - param_15[1]) / 0x14) < uVar18 - uVar12) {
        func_0x0001077f8164(param_15,uVar18);
        func_0x0001077f8688();
        func_0x0001077f81f0(&uStack_e0);
        func_0x0001077f8728(uStack_d0);
        lVar17 = extraout_x10;
        while (lVar17 != 0) {
          func_0x0001077f8748();
          lVar17 = extraout_x10_00;
        }
        pdVar10 = (double *)&uStack_e0;
        FUN_1077f81b4();
        func_0x0001077f823c(&uStack_e0);
      }
      else {
        func_0x0001077f8728();
        lVar17 = extraout_x9;
        lVar16 = extraout_x10_01;
        while (lVar16 != 0) {
          func_0x0001077f8748();
          lVar17 = extraout_x9_00;
          lVar16 = extraout_x10_02;
        }
        param_15[1] = lVar17;
      }
    }
    else if (uVar18 < uVar12) {
      param_15[1] = *param_15 + uVar18 * 0x14;
    }
    lVar16 = 0;
    bVar3 = false;
    uStack_18c = 0;
    uVar23 = 0x3f000000;
    lVar17 = 0x3c;
    uStack_194 = 0;
    uStack_190 = 1;
    for (uVar12 = 1; dVar20 = *param_7, uVar12 - 1 < (ulong)((long)param_7[1] - (long)dVar20 >> 5);
        uVar12 = uVar12 + 1) {
      if (cStack_128 == '\0') {
LAB_1077f5c84:
        bVar3 = false;
      }
      else {
        fVar21 = *(float *)((long)dVar20 + lVar17 + -0x20);
        bVar2 = false;
        bVar4 = false;
        bVar5 = false;
        if (-fVar35 <= fVar21) {
          bVar2 = false;
          bVar4 = false;
          bVar5 = true;
          if (!NAN(fVar21) && !NAN(fVar33)) {
            bVar2 = fVar21 < fVar33;
            bVar4 = fVar21 == fVar33;
            bVar5 = false;
          }
        }
        if (!bVar4 && bVar2 == bVar5) goto LAB_1077f5c84;
        pdVar10 = (double *)((long)dVar20 + lVar17 + -0x3c);
        pfVar8 = param_6;
        func_0x0001077f5568(param_6,pdVar10,param_8);
        uVar7 = (uint)pfVar8;
        fVar30 = SUB84(param_3,0) * ((fVar34 / fVar32) * 0.5 + 0.5) *
                 (*(float *)((long)dVar20 + lVar17 + -0x28) -
                 *(float *)((long)dVar20 + lVar17 + -0x30)) * 0.5;
        fVar31 = (float)uVar23;
        if (((bVar3) &&
            (lVar14 = *param_15 + lVar16, fVar26 = fVar21 - *(float *)(lVar14 + -0x14),
            fVar29 = fVar31 - *(float *)(lVar14 + -0x10),
            fVar29 * fVar29 + fVar26 * fVar26 < fVar30 * fVar30 + fVar30 * fVar30)) &&
           (uVar12 < (ulong)((long)param_7[1] - (long)*param_7 >> 5))) {
          fVar26 = *(float *)((long)*param_7 + lVar17);
          bVar3 = false;
          if ((-fVar35 < fVar26) && (bVar3 = false, !NAN(fVar26) && !NAN(fVar33))) {
            bVar3 = fVar26 < fVar33;
          }
          if (bVar3) goto LAB_1077f5c84;
        }
        fStack_170 = fVar21 - fVar30;
        fStack_16c = fVar31 - fVar30;
        fStack_168 = fVar21 + fVar30;
        fStack_164 = fVar31 + fVar30;
        pfVar8 = (float *)(*param_15 + lVar16);
        *pfVar8 = fVar21;
        pfVar8[1] = fVar31;
        pfVar8[2] = fVar30;
        *(undefined1 *)(pfVar8 + 4) = 2;
        func_0x0001077f8634();
        pfVar8 = param_6;
        func_0x0001077f5498(param_6,&fStack_170);
        if (*(char *)(param_13 + 2) == '\x01') {
          pfVar8 = &fStack_170;
          goto code_r0x0001077f5f10;
        }
        pdVar10 = param_13;
        if ((param_10 & 1) == 0) {
          lVar14 = *param_15;
          FUN_1077f78f4(&uStack_e0,param_14);
          pfVar9 = param_6 + 0x398;
          pdVar10 = (double *)(lVar14 + lVar16);
          func_0x0001072a1454(pfVar9,pdVar10,&uStack_e0);
          uStack_194 = uStack_194 | (uint)pfVar9;
          func_0x0001077f79bc(&uStack_e0);
        }
        uStack_190 = uStack_190 & uVar7;
        uStack_18c = uStack_18c | (uint)pfVar8;
        bVar3 = true;
        if (((param_12 & 1) == 0) && ((uStack_194 & 1) != 0)) {
          uVar18 = 0;
          uVar12 = 4;
          goto LAB_1077f5e50;
        }
      }
      lVar17 = lVar17 + 0x20;
      lVar16 = lVar16 + 0x14;
    }
    uVar18 = (ulong)~uStack_18c & 1;
    if (cStack_128 == '\0') {
      uVar18 = 3;
    }
    uVar12 = 4;
    if ((uStack_194 & 1) == 0) {
      uVar12 = uVar18;
    }
    uVar18 = 0x100000000;
    if (uStack_190 == 0) {
      uVar18 = 0;
    }
LAB_1077f5e50:
    uVar18 = uVar18 >> 0x20;
    param_13 = pdVar10;
  }
LAB_1077f5e64:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return uVar12 | uVar18 << 0x20;
  }
  ___stack_chk_fail();
  pfVar8 = afStack_108;
  func_0x0001077f79bc();
  func_0x0001077f85e0();
code_r0x0001077f5f10:
  if (((*(float *)param_13 <= *pfVar8) && (*(float *)((long)param_13 + 4) <= pfVar8[1])) &&
     (pfVar8[2] < *(float *)(param_13 + 1))) {
    return (ulong)(pfVar8[3] < *(float *)((long)param_13 + 0xc));
  }
  return 0;
}



/* Entry: 1077f67c0; end: 1077f702b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1077f67c0(undefined8 *param_1,double *****param_2,double *****param_3,double *****param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  undefined1 uVar6;
  double *****pppppdVar7;
  long lVar8;
  double *****pppppdVar9;
  double *****pppppdVar10;
  ulong uVar11;
  double *****pppppdVar12;
  ulong uVar13;
  double ****ppppdVar14;
  double *****pppppdVar15;
  double *****pppppdVar16;
  uint uVar17;
  double *****pppppdVar18;
  double *****pppppdVar19;
  double *****unaff_x24;
  float fVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined2 uVar29;
  undefined2 uVar30;
  short sVar31;
  undefined2 uVar32;
  undefined2 uVar33;
  short sVar34;
  short sVar35;
  undefined8 in_d3;
  short sVar36;
  short sVar37;
  float fVar38;
  double ****ppppdVar39;
  undefined4 uVar40;
  float fVar41;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  double dStack_208;
  double dStack_200;
  double dStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  double ****ppppdStack_150;
  double ****ppppdStack_148;
  double ****ppppdStack_138;
  double ****ppppdStack_130;
  double ****ppppdStack_128;
  double ***pppdStack_120;
  undefined8 uStack_118;
  double ****ppppdStack_108;
  double ****ppppdStack_100;
  double ****ppppdStack_f8;
  double ****ppppdStack_f0;
  double ****ppppdStack_e8;
  double ****ppppdStack_e0;
  double ****ppppdStack_d8;
  double ****ppppdStack_d0;
  double ****appppdStack_c0 [3];
  double ****ppppdStack_a8;
  double ****ppppdStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  sVar37 = (short)((ulong)in_d3 >> 0x30);
  sVar36 = (short)((ulong)in_d3 >> 0x20);
  sVar35 = (short)((ulong)in_d3 >> 0x10);
  sVar34 = (short)in_d3;
  uStack_80 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  pppppdVar18 = (double *****)*param_3;
  pppppdVar10 = (double *****)param_3[1];
  uVar6 = pppppdVar18 == pppppdVar10;
  if ((!(bool)uVar6) &&
     ((param_2[0x1da] != param_2[0x1db] || (uVar6 = param_2[0x1fe] == param_2[0x1ff], !(bool)uVar6))
     )) {
    ppppdStack_108 = (double ****)0x0;
    ppppdStack_100 = (double ****)0x0;
    ppppdStack_f8 = (double ****)0x0;
    for (; pppppdVar9 = (double *****)ppppdStack_108, auVar23 = _UNK_10dea5e90,
        pppppdVar18 != pppppdVar10; pppppdVar18 = pppppdVar18 + 2) {
      ppppdVar39 = (double ****)
                   CONCAT44((float)((double)pppppdVar18[1] + (double)*(float *)(param_2 + 0x1cb)),
                            (float)((double)*pppppdVar18 + (double)*(float *)(param_2 + 0x1cb)));
      if (ppppdStack_100 < ppppdStack_f8) {
        pppppdVar9 = (double *****)(ppppdStack_100 + 1);
        *ppppdStack_100 = (double ***)ppppdVar39;
      }
      else {
        pppppdVar9 = &ppppdStack_108;
        func_0x000107389488(pppppdVar9,((long)ppppdStack_100 - (long)ppppdStack_108 >> 3) + 1);
        pppppdVar19 = (double *****)((long)ppppdStack_100 - (long)ppppdStack_108);
        ppppdStack_d0 = (double ****)&ppppdStack_f8;
        if (pppppdVar9 == (double *****)0x0) {
          pppppdVar7 = (double *****)0x0;
          param_4 = pppppdVar19;
        }
        else {
          pppppdVar7 = &ppppdStack_f8;
          func_0x0001072a78c0();
          param_4 = (double *****)((long)ppppdStack_100 - (long)ppppdStack_108);
        }
        ppppdStack_e8 = (double ****)((long)pppppdVar7 + (long)pppppdVar19);
        ppppdStack_d8 = (double ****)(pppppdVar7 + (long)pppppdVar9);
        pppppdVar19 = (double *****)((long)ppppdStack_e8 - (long)param_4);
        pppppdVar9 = (double *****)(ppppdStack_e8 + 1);
        ppppdStack_f0 = (double ****)pppppdVar7;
        *ppppdStack_e8 = (double ***)ppppdVar39;
        ppppdStack_e0 = (double ****)pppppdVar9;
        _memcpy(pppppdVar19);
        pppppdVar9 = (double *****)ppppdStack_e0;
        ppppdVar39 = ppppdStack_f8;
        ppppdStack_f8 = ppppdStack_d8;
        ppppdStack_100 = ppppdStack_e0;
        ppppdStack_e0 = ppppdStack_108;
        ppppdStack_d8 = ppppdVar39;
        ppppdStack_f0 = ppppdStack_108;
        ppppdStack_e8 = ppppdStack_108;
        ppppdStack_108 = (double ****)pppppdVar19;
        func_0x000107388ffc(&ppppdStack_f0);
      }
      ppppdStack_100 = (double ****)pppppdVar9;
    }
    for (; pppppdVar9 != (double *****)ppppdStack_100; pppppdVar9 = pppppdVar9 + 1) {
      ppppdVar39 = *pppppdVar9;
      fVar24 = SUB84(ppppdVar39,0);
      fVar27 = (float)((ulong)ppppdVar39 >> 0x20);
      sVar31 = -(ushort)(fVar27 < auVar23._4_4_);
      sVar34 = -(ushort)(auVar23._0_4_ < fVar24);
      sVar35 = -(ushort)(auVar23._4_4_ < fVar27);
      sVar36 = -(ushort)(auVar23._8_4_ < fVar24);
      sVar37 = -(ushort)(auVar23._12_4_ < fVar27);
      auVar3._8_4_ = fVar24;
      auVar3._0_8_ = ppppdVar39;
      auVar3._12_4_ = fVar27;
      auVar4._4_2_ = sVar31;
      auVar4._0_4_ = (int)(short)-(ushort)(fVar24 < auVar23._0_4_);
      auVar4._6_2_ = sVar31 >> 0xf;
      auVar4._8_2_ = sVar36;
      auVar4._10_2_ = sVar36 >> 0xf;
      auVar4._12_2_ = sVar37;
      auVar4._14_2_ = sVar37 >> 0xf;
      auVar23 = auVar23 ^ (auVar23 ^ auVar3) & auVar4;
    }
    uStack_118 = auVar23._8_8_;
    pppdStack_120 = auVar23._0_8_;
    func_0x0001072a12c8(&ppppdStack_138,param_2 + 0x1cc,&pppdStack_120);
    param_3 = (double *****)&pppdStack_120;
    func_0x0001072a12c8(&ppppdStack_150,param_2 + 0x1f0);
    pppppdVar10 = (double *****)ppppdStack_130;
    pppppdVar18 = (double *****)((long)ppppdStack_148 - (long)ppppdStack_150);
    if (0 < (long)pppppdVar18) {
      if ((long)ppppdStack_128 - (long)ppppdStack_130 < (long)pppppdVar18) {
        pppppdVar9 = &ppppdStack_138;
        func_0x0001072abcd4(pppppdVar9,
                            ((long)ppppdStack_130 - (long)ppppdStack_138) / 0x130 +
                            (long)pppppdVar18 / 0x130);
        func_0x0001072a7c48(&ppppdStack_f0,pppppdVar9,
                            ((long)pppppdVar10 - (long)ppppdStack_138) / 0x130,&ppppdStack_128);
        ppppdVar39 = (double ****)((long)ppppdStack_e0 + (long)pppppdVar18);
        unaff_x24 = (double *****)ppppdStack_e0;
        for (; pppppdVar18 != (double *****)0x0; pppppdVar18 = pppppdVar18 + -0x26) {
                    /* WARNING: Read-only address (ram,0x00010dea5e90) is written */
          func_0x0001077f7b14(unaff_x24,ppppdStack_150);
          unaff_x24 = unaff_x24 + 0x26;
          ppppdStack_150 = ppppdStack_150 + 0x26;
        }
        ppppdStack_e0 = ppppdVar39;
                    /* WARNING: Read-only address (ram,0x00010dea5e90) is written */
        func_0x0001072a7ccc(&ppppdStack_128,pppppdVar10,ppppdStack_130,ppppdVar39);
        ppppdStack_e0 =
             (double ****)((long)ppppdStack_130 + ((long)ppppdStack_e0 - (long)pppppdVar10));
        pppppdVar18 = (double *****)
                      (ppppdStack_e8 + (((long)pppppdVar10 - (long)ppppdStack_138) / -0x130) * 0x26)
        ;
        param_3 = (double *****)ppppdStack_138;
        func_0x0001072a7ccc(&ppppdStack_128,ppppdStack_138,pppppdVar10,pppppdVar18);
        ppppdVar39 = ppppdStack_128;
        ppppdStack_128 = ppppdStack_d8;
        ppppdStack_130 = ppppdStack_e0;
        ppppdStack_e0 = ppppdStack_138;
        ppppdStack_d8 = ppppdVar39;
        ppppdStack_f0 = ppppdStack_138;
        ppppdStack_e8 = ppppdStack_138;
        ppppdStack_138 = (double ****)pppppdVar18;
        func_0x0001072a7dec(&ppppdStack_f0);
        pppppdVar18 = (double *****)0x0;
        param_4 = pppppdVar10;
      }
      else {
        appppdStack_c0[0] = ppppdStack_130;
        ppppdStack_e8 = (double ****)appppdStack_c0;
        ppppdStack_e0 = (double ****)&ppppdStack_a8;
        ppppdStack_d8 = (double ****)((ulong)ppppdStack_d8 & 0xffffffffffffff00);
        ppppdStack_f0 = (double ****)&ppppdStack_128;
        for (pppppdVar10 = (double *****)ppppdStack_150; ppppdStack_a8 = ppppdStack_130,
            pppppdVar10 != (double *****)ppppdStack_148; pppppdVar10 = pppppdVar10 + 0x26) {
          param_3 = pppppdVar10;
          func_0x0001077f7b14(ppppdStack_130);
          ppppdStack_130 = ppppdStack_a8 + 0x26;
        }
        ppppdStack_d8 = (double ****)CONCAT71(ppppdStack_d8._1_7_,1);
        func_0x0001072a7d84(&ppppdStack_f0);
      }
    }
    ppppdVar39 = ppppdStack_130;
    ppppdStack_e8 = (double ****)0x0;
    ppppdStack_f0 = (double ****)0x0;
    ppppdStack_d8 = (double ****)0x0;
    ppppdStack_e0 = (double ****)0x0;
    ppppdStack_d0 = (double ****)CONCAT44(ppppdStack_d0._4_4_,0x3f800000);
    for (pppppdVar10 = (double *****)ppppdStack_138; pppppdVar9 = (double *****)ppppdStack_e8,
        uVar6 = pppppdVar10 == (double *****)ppppdVar39, !(bool)uVar6;
        pppppdVar10 = pppppdVar10 + 0x26) {
      uVar1 = *(uint *)(pppppdVar10 + 0x14);
      pppppdVar18 = (double *****)(ulong)uVar1;
      if ((double *****)ppppdStack_e8 != (double *****)0x0) {
        uVar11 = (long)ppppdStack_e8 - 1;
        uVar17 = (uint)ppppdStack_e8;
        if (((ulong)ppppdStack_e8 & uVar11) == 0) {
          unaff_x24 = (double *****)(ulong)(uVar17 - 1 & uVar1);
        }
        else {
          unaff_x24 = pppppdVar18;
          if (ppppdStack_e8 <= pppppdVar18) {
            uVar2 = 0;
            if (uVar17 != 0) {
              uVar2 = uVar1 / uVar17;
            }
            unaff_x24 = (double *****)(ulong)(uVar1 - uVar2 * uVar17);
          }
        }
        pppppdVar19 = (double *****)ppppdStack_f0[(long)unaff_x24];
        if (pppppdVar19 != (double *****)0x0) {
          do {
            while( true ) {
              pppppdVar19 = (double *****)*pppppdVar19;
              if (pppppdVar19 == (double *****)0x0) goto LAB_1077f6bd0;
              pppppdVar7 = (double *****)pppppdVar19[1];
              if (pppppdVar7 != pppppdVar18) break;
              if (*(uint *)(pppppdVar19 + 2) == uVar1) goto LAB_1077f6e80;
            }
            if (((ulong)ppppdStack_e8 & uVar11) == 0) {
              pppppdVar7 = (double *****)((ulong)pppppdVar7 & uVar11);
            }
            else if (ppppdStack_e8 <= pppppdVar7) {
              uVar13 = 0;
              if ((double *****)ppppdStack_e8 != (double *****)0x0) {
                uVar13 = (ulong)pppppdVar7 / (ulong)ppppdStack_e8;
              }
              pppppdVar7 = (double *****)((long)pppppdVar7 - uVar13 * (long)ppppdStack_e8);
            }
          } while (pppppdVar7 == unaff_x24);
        }
      }
LAB_1077f6bd0:
      pppppdVar19 = (double *****)0x40;
      __Znwm();
      uStack_98 = 1;
      *pppppdVar19 = (double ****)0x0;
      pppppdVar19[1] = (double ****)pppppdVar18;
      *(uint *)(pppppdVar19 + 2) = uVar1;
      pppppdVar19[4] = (double ****)0x0;
      pppppdVar19[3] = (double ****)0x0;
      pppppdVar19[6] = (double ****)0x0;
      pppppdVar19[5] = (double ****)0x0;
      *(undefined4 *)(pppppdVar19 + 7) = 0x3f800000;
      ppppdStack_a0 = (double ****)&ppppdStack_e0;
      if ((pppppdVar9 == (double *****)0x0) ||
         (ppppdStack_d0._0_4_ * (float)pppppdVar9 < (float)((long)ppppdStack_d8 + 1))) {
        uVar11 = 1;
        if ((double *****)0x2 < pppppdVar9) {
          uVar11 = (ulong)(((ulong)pppppdVar9 & (long)pppppdVar9 - 1U) != 0);
        }
        pppppdVar7 = (double *****)(uVar11 | (long)pppppdVar9 << 1);
        pppppdVar12 = (double *****)(long)((float)((long)ppppdStack_d8 + 1) / ppppdStack_d0._0_4_);
        if (pppppdVar7 <= pppppdVar12) {
          pppppdVar7 = pppppdVar12;
        }
        pppppdVar12 = pppppdVar9;
        ppppdStack_a8 = (double ****)pppppdVar19;
        if ((long)pppppdVar7 - 1U == 0) {
          pppppdVar7 = (double *****)0x2;
        }
        else if (((ulong)pppppdVar7 & (long)pppppdVar7 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
          pppppdVar12 = (double *****)ppppdStack_e8;
        }
        pppppdVar9 = pppppdVar7;
        if (pppppdVar12 < pppppdVar7) {
LAB_1077f6c84:
          if ((ulong)pppppdVar9 >> 0x3d != 0) {
            func_0x000104bd35f4();
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1077f6f80);
            (*pcVar5)();
          }
          lVar8 = (long)pppppdVar9 << 3;
          __Znwm(lVar8);
          func_0x0001077f84bc(&ppppdStack_f0,lVar8);
          for (pppppdVar7 = (double *****)0x0; pppppdVar9 != pppppdVar7;
              pppppdVar7 = (double *****)((long)pppppdVar7 + 1)) {
            ppppdStack_f0[(long)pppppdVar7] = (double ***)0x0;
          }
          ppppdStack_e8 = (double ****)pppppdVar9;
          if ((double *****)ppppdStack_e0 != (double *****)0x0) {
            pppppdVar7 = (double *****)ppppdStack_e0[1];
            uVar13 = (long)pppppdVar9 - 1;
            uVar11 = 0;
            if (pppppdVar9 != (double *****)0x0) {
              uVar11 = (ulong)pppppdVar7 / (ulong)pppppdVar9;
            }
            pppppdVar12 = pppppdVar7;
            if (pppppdVar9 <= pppppdVar7) {
              pppppdVar12 = (double *****)((long)pppppdVar7 - uVar11 * (long)pppppdVar9);
            }
            if (((ulong)pppppdVar9 & uVar13) == 0) {
              pppppdVar12 = (double *****)((ulong)pppppdVar7 & uVar13);
            }
            ppppdStack_f0[(long)pppppdVar12] = (double ***)&ppppdStack_e0;
            pppppdVar7 = (double *****)ppppdStack_e0;
            while (pppppdVar15 = pppppdVar7, pppppdVar7 = (double *****)*pppppdVar15,
                  pppppdVar7 != (double *****)0x0) {
              pppppdVar16 = (double *****)pppppdVar7[1];
              if (((ulong)pppppdVar9 & uVar13) == 0) {
                pppppdVar16 = (double *****)((ulong)pppppdVar16 & uVar13);
              }
              else if (pppppdVar9 <= pppppdVar16) {
                uVar11 = 0;
                if (pppppdVar9 != (double *****)0x0) {
                  uVar11 = (ulong)pppppdVar16 / (ulong)pppppdVar9;
                }
                pppppdVar16 = (double *****)((long)pppppdVar16 - uVar11 * (long)pppppdVar9);
              }
              if (pppppdVar16 != pppppdVar12) {
                if ((double ****)ppppdStack_f0[(long)pppppdVar16] == (double ****)0x0) {
                  ppppdStack_f0[(long)pppppdVar16] = (double ***)pppppdVar15;
                  pppppdVar12 = pppppdVar16;
                }
                else {
                  *pppppdVar15 = *pppppdVar7;
                  *pppppdVar7 = (double ****)*ppppdStack_f0[(long)pppppdVar16];
                  *ppppdStack_f0[(long)pppppdVar16] = (double **)pppppdVar7;
                  pppppdVar7 = pppppdVar15;
                }
              }
            }
          }
        }
        else {
          pppppdVar9 = pppppdVar12;
          if (pppppdVar7 < pppppdVar12) {
            pppppdVar9 = (double *****)(long)((float)ppppdStack_d8 / ppppdStack_d0._0_4_);
            if ((pppppdVar12 < (double *****)0x3) ||
               (((ulong)pppppdVar12 & (long)pppppdVar12 - 1U) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if ((double *****)0x1 < pppppdVar9) {
              pppppdVar9 = (double *****)(1L << (-LZCOUNT((long)pppppdVar9 + -1) & 0x3fU));
            }
            if (pppppdVar7 <= pppppdVar9) {
              pppppdVar7 = pppppdVar9;
            }
            pppppdVar9 = (double *****)ppppdStack_e8;
            if (pppppdVar7 < pppppdVar12) {
              pppppdVar9 = pppppdVar7;
              if (pppppdVar7 != (double *****)0x0) goto LAB_1077f6c84;
              func_0x0001077f84bc(&ppppdStack_f0,0);
              ppppdStack_e8 = (double ****)0x0;
              pppppdVar9 = (double *****)0x0;
            }
          }
        }
        if (((ulong)pppppdVar9 & (long)pppppdVar9 - 1U) == 0) {
          unaff_x24 = (double *****)(ulong)((int)pppppdVar9 - 1U & uVar1);
        }
        else {
          unaff_x24 = pppppdVar18;
          if (pppppdVar9 <= pppppdVar18) {
            uVar11 = 0;
            if (pppppdVar9 != (double *****)0x0) {
              uVar11 = (ulong)pppppdVar18 / (ulong)pppppdVar9;
            }
            unaff_x24 = (double *****)((long)pppppdVar18 - uVar11 * (long)pppppdVar9);
          }
        }
      }
      ppppdVar14 = (double ****)ppppdStack_f0[(long)unaff_x24];
      if (ppppdVar14 == (double ****)0x0) {
        *pppppdVar19 = ppppdStack_e0;
        ppppdStack_f0[(long)unaff_x24] = (double ***)&ppppdStack_e0;
        ppppdStack_e0 = (double ****)pppppdVar19;
        if (*pppppdVar19 != (double ****)0x0) {
          pppppdVar18 = (double *****)(*pppppdVar19)[1];
          if (((ulong)pppppdVar9 & (long)pppppdVar9 - 1U) == 0) {
            pppppdVar18 = (double *****)((ulong)pppppdVar18 & (long)pppppdVar9 - 1U);
          }
          else if (pppppdVar9 <= pppppdVar18) {
            uVar11 = 0;
            if (pppppdVar9 != (double *****)0x0) {
              uVar11 = (ulong)pppppdVar18 / (ulong)pppppdVar9;
            }
            pppppdVar18 = (double *****)((long)pppppdVar18 - uVar11 * (long)pppppdVar9);
          }
          ppppdStack_f0[(long)pppppdVar18] = (double ***)pppppdVar19;
        }
      }
      else {
        *pppppdVar19 = (double ****)*ppppdVar14;
        *ppppdVar14 = (double ***)pppppdVar19;
      }
      ppppdStack_a8 = (double ****)0x0;
      ppppdStack_d8 = (double ****)((long)ppppdStack_d8 + 1);
      func_0x0001077f84d4(&ppppdStack_a8);
LAB_1077f6e80:
      pppppdVar18 = (double *****)ppppdStack_100;
      ppppdStack_a8 = (double ****)0x0;
      ppppdStack_a0 = (double ****)0x0;
      uStack_98 = 0;
      for (pppppdVar9 = (double *****)ppppdStack_108; pppppdVar9 != pppppdVar18;
          pppppdVar9 = pppppdVar9 + 1) {
        pppppdVar7 = pppppdVar9;
        func_0x0001077f4410();
        appppdStack_c0[0] = (double ****)CONCAT44(appppdStack_c0[0]._4_4_,(int)pppppdVar7);
        func_0x0001072c7768(&ppppdStack_a8,appppdStack_c0);
      }
      auVar22._0_2_ = (undefined2)(int)*(float *)(pppppdVar10 + 0x24);
      auVar22._2_2_ = (short)(int)*(float *)((long)pppppdVar10 + 0x124);
      auVar22._4_2_ = (short)(int)*(float *)(pppppdVar10 + 0x25);
      auVar22._6_2_ = (short)(int)*(float *)((long)pppppdVar10 + 300);
      auVar22._8_8_ = 0;
      auVar23._8_4_ = 0x7060504;
      auVar23._0_8_ = 0x302050403020100;
      auVar23._12_4_ = 0x7060100;
      auVar23 = a64_TBL(ZEXT816(0),auVar22,auVar23);
      uStack_88 = auVar23._8_8_;
      uStack_90 = auVar23._0_8_;
      param_4 = (double *****)0x4;
      func_0x00010737c664(appppdStack_c0,&uStack_90);
      unaff_x24 = &ppppdStack_a8;
      param_3 = appppdStack_c0;
      func_0x00010787554c();
      func_0x000104c336c8(appppdStack_c0);
      func_0x000104c336c8(&ppppdStack_a8);
      if (((ulong)unaff_x24 & 1) != 0) {
        func_0x0001072a1b80(pppppdVar19 + 3,pppppdVar10);
        func_0x0001074f2a9c(param_1,pppppdVar10 + 0x14);
        param_3 = pppppdVar10;
        func_0x0001072ab794();
      }
    }
    func_0x0001077f846c(&ppppdStack_f0);
    func_0x0001072a7e50(&ppppdStack_150);
    func_0x0001072a7e50(&ppppdStack_138);
    param_2 = &ppppdStack_108;
    func_0x0001072a7938();
  }
  func_0x0001077f8514(uStack_80);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072a7dec(&ppppdStack_f0);
  func_0x0001072a7e50(&ppppdStack_150);
  func_0x0001072a7e50(&ppppdStack_138);
  func_0x0001072a7938(&ppppdStack_108);
  func_0x0001074fc0dc(param_1);
  pppppdVar10 = param_2;
  __Unwind_Resume();
  pppppdVar9 = param_4;
  func_0x0001077f873c();
  uVar40 = *(undefined4 *)param_3;
  fVar41 = *(float *)((long)param_3 + 4);
  fVar38 = *(float *)(param_3 + 1);
  uVar28 = 0;
  uVar29 = SUB42(fVar38,0);
  uVar30 = (undefined2)((uint)fVar38 >> 0x10);
  uVar32 = 0;
  uVar33 = 0;
  fVar25 = fVar41;
  fVar20 = (float)func_0x0001077f7194(uVar40,pppppdVar9,*(undefined8 *)((long)pppppdVar10 + 0x4c));
  fVar24 = (float)CONCAT22(uVar30,uVar29);
  fVar27 = (float)CONCAT22(sVar35,sVar34);
  uStack_1f0 = CONCAT44(fVar25,fVar20);
  uStack_1e8 = CONCAT44(CONCAT22(sVar35,sVar34),CONCAT22(uVar30,uVar29));
  fVar26 = fVar25;
  if (fVar38 != 0.0) {
    uVar29 = 0;
    uVar30 = 0;
    uVar32 = 0;
    uVar33 = 0;
    uVar28 = 0;
    func_0x00010740b850(uVar40,param_4);
    fVar26 = fVar41;
  }
  if ((*(char *)((long)pppppdVar18 + 0xa94) == '\x01') &&
     (fVar41 = *(float *)(pppppdVar18 + 0x152), 0.0 < fVar41)) {
    uStack_210 = (double)SUB84(*param_2,0);
    dStack_208 = (double)(float)((ulong)*param_2 >> 0x20);
    func_0x00010741848c(&uStack_210,param_4 + 0x61);
    uStack_230 = func_0x0001074185bc(param_4 + 0x30,*(undefined8 *)((long)pppppdVar18 + 0x4c),1);
    uStack_210 = (double)fVar20;
    dStack_208 = (double)fVar25;
    dStack_200 = (double)fVar24;
    dStack_1f8 = (double)fVar27;
    uStack_228 = CONCAT44(uVar28,fVar26);
    uStack_220 = CONCAT26(uVar33,CONCAT24(uVar32,CONCAT22(uVar30,uVar29)));
    uStack_218 = CONCAT26(sVar37,CONCAT24(sVar36,CONCAT22(sVar35,sVar34)));
    dVar21 = (double)func_0x00010740b8e0((double)fVar41,&uStack_210,&uStack_230);
    uStack_1f0 = CONCAT44((float)(double)CONCAT44(uVar28,fVar26),(float)dVar21);
    uStack_1e8 = CONCAT44((float)(double)CONCAT26(sVar37,CONCAT24(sVar36,CONCAT22(sVar35,sVar34))),
                          (float)(double)CONCAT26(uVar33,CONCAT24(uVar32,CONCAT22(uVar30,uVar29))));
  }
  uStack_210 = (double)CONCAT44(*(undefined4 *)(pppppdVar18 + 0x1cb),
                                *(undefined4 *)(pppppdVar18 + 0x1cb));
  dStack_208 = 0.0;
  func_0x0001073b5da0(&uStack_1f0,&uStack_210);
  return;
}



/* Entry: 1077f78f4; end: 1077f792b;  */

undefined1 * FUN_1077f78f4(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x20] = 0;
  func_0x0001077f792c();
  return param_1;
}



/* Entry: 1077f7bb4; end: 1077f7bf3;  */

void FUN_1077f7bb4(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077f8664();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x18) {
    func_0x0001072792b8(lVar1 + -0x10);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1077f7f70; end: 1077f804f;  */

void FUN_1077f7f70(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined4 auStack_90 [6];
  undefined4 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  ppuStack_70 = &PTR_DAT_110996720;
  uStack_68 = 0;
  uStack_48 = 0;
  uStack_44 = 1;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  auStack_90[0] = param_2;
  uStack_50 = param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_a8,param_3);
  func_0x00010726e300(auStack_90,&UNK_10f42acba,auStack_a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
  uStack_b0 = 3;
  uStack_c8 = *param_1;
  uStack_c0 = 3;
  uStack_b8 = param_4;
  func_0x00010743fa44(param_1,auStack_90,&uStack_b8,&uStack_c8,7);
  func_0x000107262330(auStack_90);
  return;
}



/* Entry: 1077f81b4; end: 1077f81ef;  */

void FUN_1077f81b4(undefined8 param_1,long param_2)

{
  func_0x0001077f8664();
  func_0x0001077f86c4(*(undefined8 *)(param_2 + 8));
  func_0x0001077f858c();
  return;
}



/* Entry: 1077f8428; end: 1077f845f;  */

long FUN_1077f8428(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109df870);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1077f8a70; end: 1077f8bf7;  */

void FUN_1077f8a70(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined4 *puVar12;
  long lVar13;
  long *plVar14;
  double dVar15;
  float fVar16;
  
  fVar16 = 1.0;
  if ((uint)*(byte *)(param_3 + 4) <= (uint)*(byte *)(param_1 + 4)) {
    dVar15 = 1.0;
    _ldexp((uint)*(byte *)(param_1 + 4) - (uint)*(byte *)(param_3 + 4));
    fVar16 = (float)dVar15;
  }
  uVar8 = param_2 + 0x38;
  func_0x000107262f24(uVar8,param_1 + 0x18);
  if ((uVar8 & 1) == 0) {
    lVar3 = *(long *)(param_2 + 0x80);
    plVar1 = (long *)(param_1 + 0x58);
    for (lVar13 = *(long *)(param_2 + 0x78); lVar13 != lVar3; lVar13 = lVar13 + 0x670) {
      plVar10 = plVar1;
      plVar14 = plVar1;
      if (*(int *)(lVar13 + 0x658) == 0) {
        while (plVar11 = (long *)*plVar10, plVar11 != (long *)0x0) {
          lVar7 = (long)(plVar11 + 4);
          func_0x0001074099a8(lVar7,lVar13 + 0x5a0);
          bVar6 = -1 < (char)lVar7;
          lVar7 = 8;
          if (bVar6) {
            lVar7 = 0;
          }
          plVar10 = (long *)((long)plVar11 + lVar7);
          if (bVar6) {
            plVar14 = plVar11;
          }
        }
        if (plVar1 != plVar14) {
          lVar7 = lVar13 + 0x5a0;
          func_0x0001074099a8(lVar7,plVar14 + 4);
          if (((uint)lVar7 >> 7 & 1) == 0) {
            uVar8 = (ulong)*(byte *)(param_1 + 4);
            lVar7 = param_3;
            func_0x0001077f8a04(*(undefined4 *)(lVar13 + 0x10),*(undefined4 *)(lVar13 + 0x14));
            puVar4 = (undefined4 *)plVar14[8];
            for (puVar12 = (undefined4 *)plVar14[7]; puVar12 != puVar4; puVar12 = puVar12 + 6) {
              uVar5 = *(long *)(puVar12 + 2) - uVar8;
              uVar2 = -uVar5;
              if (-1 < (long)uVar5) {
                uVar2 = uVar5;
              }
              if ((float)uVar2 <= fVar16) {
                uVar5 = *(long *)(puVar12 + 4) - lVar7;
                uVar2 = -uVar5;
                if (-1 < (long)uVar5) {
                  uVar2 = uVar5;
                }
                if (((float)uVar2 <= fVar16) &&
                   (lVar9 = param_4, func_0x0001077f95c4(param_4,puVar12), param_4 + 8 == lVar9)) {
                  func_0x000107426444(param_4,puVar12);
                  *(undefined4 *)(lVar13 + 0x658) = *puVar12;
                  break;
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1077f9270; end: 1077f9287;  */

void FUN_1077f9270(void)

{
  func_0x0001077f9d70();
  return;
}



/* Entry: 1077f95fc; end: 1077f9627;  */

long FUN_1077f95fc(undefined8 param_1,uint *param_2,long param_3,long param_4)

{
  long lVar1;
  
  for (; param_3 != 0; param_3 = *(long *)(param_3 + lVar1)) {
    lVar1 = 8;
    if (*param_2 <= *(uint *)(param_3 + 0x1c)) {
      lVar1 = 0;
      param_4 = param_3;
    }
  }
  return param_4;
}



/* Entry: 1077f9904; end: 1077f9953;  */

long * FUN_1077f9904(long param_1,long *param_2,byte *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar2 = plVar1;
  if ((long *)*plVar1 != (long *)0x0) {
    plVar3 = (long *)*plVar1;
    do {
      while (plVar2 = plVar3, *param_3 < *(byte *)(plVar3 + 4)) {
        plVar4 = (long *)*plVar3;
        plVar1 = plVar3;
        plVar3 = plVar4;
        if (plVar4 == (long *)0x0) goto LAB_1077f994c;
      }
      if (*param_3 <= *(byte *)(plVar3 + 4)) break;
      plVar1 = plVar3 + 1;
      plVar3 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
  }
LAB_1077f994c:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 1077f9ba0; end: 1077f9bbf;  */

void FUN_1077f9ba0(void)

{
  func_0x0001077fa538();
  func_0x0001077fa4c0();
  return;
}



/* Entry: 1077f9e50; end: 1077f9e9b;  */

void FUN_1077f9e50(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_4[1];
  uStack_30 = *param_4;
  uStack_18 = param_4[3];
  uStack_20 = param_4[2];
  func_0x0001077f9e7c(param_1,*param_3,&uStack_30);
  return;
}



/* Entry: 1077fa110; end: 1077fa15f;  */

void FUN_1077fa110(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 unaff_x23;
  
  func_0x0001077fa5d8();
  uVar1 = 0xa0;
  __Znwm();
  *unaff_x19 = uVar1;
  unaff_x19[1] = unaff_x23;
  unaff_x19[2] = 0;
  func_0x0001077fa630();
  func_0x0001077fa200();
  *(undefined1 *)(unaff_x19 + 2) = 1;
  return;
}



/* Entry: 1077fa2cc; end: 1077fa303;  */

void FUN_1077fa2cc(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x0001077fa4fc();
  if ((bool)in_ZR) {
    func_0x0001074f4fe0(unaff_x19 + 0x20);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077fa858; end: 1077fa8c3;  */

undefined8 * FUN_1077fa858(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  func_0x000105c3d468(param_1 + 2,param_2 + 2);
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  return param_1;
}



/* Entry: 1077fb1f0; end: 1077fb24b;  */

undefined8 FUN_1077fb1f0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_2 + 0x18);
  if (*plVar1 != *(long *)(param_2 + 0x20)) {
    func_0x0001077fb134(plVar1);
    func_0x000107809cf8();
    func_0x0001077fe270();
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_2 + 0x18);
  }
  func_0x000107809714(*param_1);
  func_0x0001077fb24c(plVar1);
  return 0;
}



/* Entry: 1077fb660; end: 1077fb663;  */

undefined1 **
FUN_1077fb660(undefined8 *param_1,undefined1 **param_2,long param_3,undefined1 *param_4,long param_5
             )

{
  long lVar1;
  undefined *puVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  int extraout_w11;
  long unaff_x20;
  long lVar7;
  undefined1 *puVar8;
  undefined1 auStack_f8 [8];
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined1 *apuStack_c8 [12];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == 1) {
    uVar3 = 0;
    if (*param_2 != (undefined1 *)0x0) {
      do {
        func_0x000107c3a308();
        uVar3 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_1 = uVar3;
    param_5 = unaff_x20;
  }
  else {
    lVar7 = 0;
    for (lVar4 = 0; param_3 != lVar4; lVar4 = lVar4 + 1) {
      lVar1 = 0;
      if (lVar4 != 0) {
        lVar1 = param_5;
      }
      uVar6 = 0;
      if (param_2[lVar4] != (undefined1 *)0x0) {
        uVar6 = (ulong)*(uint *)(param_2[lVar4] + 0xc);
      }
      lVar7 = lVar1 + lVar7 + uVar6;
    }
    func_0x00010b9a6a8c(apuStack_c8,lVar7);
    for (lVar4 = 0; lVar4 != param_3; lVar4 = lVar4 + 1) {
      puVar8 = apuStack_c8[0];
      lVar7 = param_5;
      puVar5 = param_4;
      if (lVar4 != 0) {
        for (; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar8 = *puVar5;
          puVar8 = puVar8 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      puVar5 = param_2[lVar4];
      puVar2 = puVar5 + 0x18;
      if (puVar5 == (undefined1 *)0x0) {
        uVar6 = 0;
        puVar2 = &UNK_10f7d0ef0;
      }
      else {
        uVar6 = (ulong)*(uint *)(puVar5 + 0xc);
      }
      _memcpy(puVar8,puVar2,uVar6);
      apuStack_c8[0] = puVar8 + uVar6;
    }
    func_0x000107c31084();
    func_0x00010b9a6bac(param_1);
    param_2 = apuStack_c8;
    func_0x00010b9a6a50(param_2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    __Unwind_Resume();
    puStack_d8 = &UNK_10b9a66e4;
    lStack_f0 = param_5;
    puStack_e8 = param_1;
    puStack_e0 = &stack0xfffffffffffffff0;
    func_0x00010b9a6368(auStack_f8);
    func_0x000107c31060(param_2,auStack_f8);
    func_0x00010b9a6b44();
    return param_2;
  }
  return param_2;
}



/* Entry: 1077fc110; end: 1077fc197;  */

bool FUN_1077fc110(long param_1,undefined8 param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar1 = (long *)(param_1 + 8);
  plVar4 = plVar1;
  plVar5 = plVar1;
  while (plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
    lVar3 = (long)(plVar6 + 4);
    func_0x000104c2fc44(lVar3,param_2);
    bVar2 = (int)lVar3 == 0;
    lVar3 = 8;
    if (bVar2) {
      lVar3 = 0;
    }
    plVar4 = (long *)((long)plVar6 + lVar3);
    if (bVar2) {
      plVar5 = plVar6;
    }
  }
  if ((plVar1 == plVar5) || (func_0x000104c2fc44(param_2,plVar5 + 4), (int)param_2 != 0)) {
    plVar5 = plVar1;
  }
  return plVar1 != plVar5;
}



/* Entry: 1077fc768; end: 1077fc7a3;  */

undefined8 * FUN_1077fc768(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    *param_2 = 0;
    uVar1 = *param_1;
    *param_1 = uVar2;
    func_0x000107475618(uVar1);
  }
  return param_1;
}



/* Entry: 1077fe034; end: 1077fe15f;  */

void FUN_1077fe034(long param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 auStack_a0 [6];
  undefined4 uStack_88;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x0001072ab574(param_1 + 0x7c8);
  if (*(int *)(param_1 + 0x814) != *(int *)(param_1 + 0x810)) {
    uVar4 = *(undefined8 *)(param_1 + 0x808);
    uVar3 = *(undefined8 *)(param_1 + 0x658);
    auStack_a0[0] = 0x131;
    uStack_88 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    func_0x000107809774();
    puVar1 = auStack_a0;
    func_0x0001072a0318(puVar1,&UNK_10f42ade4);
    uStack_a8 = 3;
    uStack_c0 = **(undefined8 **)(param_1 + 0x658);
    uStack_b8 = 3;
    uStack_b0 = uVar4;
    func_0x00010743fa44(uVar3,puVar1,&uStack_b0,&uStack_c0,7);
    func_0x000107809eac();
    puVar2 = *(undefined8 **)(param_1 + 0x658);
    auStack_a0[0] = 0x132;
    uStack_88 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    func_0x000107809774();
    uStack_b0 = CONCAT44(uStack_b0._4_4_,*(int *)(param_1 + 0x810) - *(int *)(param_1 + 0x814));
    uStack_a8 = 0;
    uStack_c0 = *puVar2;
    uStack_b8 = 3;
    func_0x00010743fa9c();
    func_0x000107809eac();
    *(undefined4 *)(param_1 + 0x814) = *(undefined4 *)(param_1 + 0x810);
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x7c8);
  return;
}



/* Entry: 1077fe450; end: 1077fe47b;  */

undefined8 * FUN_1077fe450(undefined8 *param_1)

{
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    func_0x0001077fe47c(*param_1);
  }
  return param_1;
}



/* Entry: 1077fe7d4; end: 1077fe8ef;  */

void FUN_1077fe7d4(ulong *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 *unaff_x19;
  ulong *unaff_x20;
  ulong *puVar3;
  
  func_0x000107808f04();
  *param_1 = *param_1 & 0xfffffffffffffffe;
  while( true ) {
    puVar2 = (ulong *)(*(ulong *)*unaff_x19 & 0xfffffffffffffffe);
    if (unaff_x20 == puVar2) break;
    puVar3 = (ulong *)(*unaff_x20 & 0xfffffffffffffffe);
    uVar1 = *puVar3;
    if ((uVar1 & 1) != 0) break;
    puVar2 = *(ulong **)(uVar1 + 8);
    if (puVar2 == puVar3) {
      puVar2 = *(ulong **)(uVar1 + 0x10);
      if ((puVar2 != (ulong *)0x0) && ((*puVar2 & 1) == 0)) goto LAB_1077fe868;
      if (unaff_x20 == (ulong *)puVar3[2]) {
        func_0x00010780a1cc();
        func_0x0001077fe8f0();
        func_0x00010780a1e0();
      }
      func_0x0001078091a8();
      func_0x0001077fe95c();
    }
    else if ((puVar2 == (ulong *)0x0) || ((*puVar2 & 1) != 0)) {
      if (unaff_x20 == (ulong *)puVar3[1]) {
        func_0x00010780a1cc();
        func_0x0001077fe95c();
        func_0x00010780a1e0();
      }
      func_0x0001078091a8();
      func_0x0001077fe8f0();
    }
    else {
LAB_1077fe868:
      *puVar3 = uVar1 | 1;
      *puVar2 = *puVar2 | 1;
      puVar2 = (ulong *)(*(ulong *)(*unaff_x20 & 0xfffffffffffffffe) & 0xfffffffffffffffe);
      *puVar2 = *puVar2 & 0xfffffffffffffffe;
      unaff_x20 = (ulong *)(*(ulong *)(*unaff_x20 & 0xfffffffffffffffe) & 0xfffffffffffffffe);
    }
  }
  *puVar2 = *puVar2 | 1;
  return;
}



/* Entry: 1077feb4c; end: 1077feb7f;  */

long FUN_1077feb4c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001077feb80(param_1,param_1);
  }
  return param_1;
}



/* Entry: 1077fedcc; end: 1077fee1f;  */

void FUN_1077fedcc(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107808f04();
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  func_0x0001072649c8(param_1 + 5,param_2 + 5);
  func_0x0001077fee20(unaff_x20 + 0x68,unaff_x19 + 0x68);
  return;
}



/* Entry: 1077fefb4; end: 1077ff053;  */

void FUN_1077fefb4(undefined8 param_1,long param_2,long param_3,long param_4)

{
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
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x88) {
    FUN_1077fedcc(param_4,param_2);
    param_4 = lStack_38 + 0x88;
  }
  uStack_48 = 1;
  func_0x00010780918c();
  func_0x0001077ff054();
  func_0x0001077ff084(&uStack_60);
  return;
}



/* Entry: 1077ff1cc; end: 1077ff1f7;  */

long FUN_1077ff1cc(long param_1)

{
  func_0x0001003adc18(param_1 + 0x38);
  func_0x000104c2f714(param_1);
  return param_1;
}



/* Entry: 1077ff558; end: 1077ff56b;  */

void FUN_1077ff558(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    func_0x00010002c78c();
    *(undefined1 *)(param_1 + 0x18) = 1;
    return;
  }
  return;
}



/* Entry: 1077ff6f4; end: 1077ff70b;  */

void FUN_1077ff6f4(long param_1)

{
  func_0x0001077ff70c();
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 1077ffae0; end: 1077ffb2b;  */

void FUN_1077ffae0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x38;
  ___cxa_allocate_exception(0x38);
  func_0x0001077ffb80();
  ___cxa_throw(uVar1,&PTR_DAT_1109df9f8,&DAT_1077ffa80);
  ___cxa_free_exception(uVar1);
  func_0x000107809184();
  func_0x0001077ffbf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


