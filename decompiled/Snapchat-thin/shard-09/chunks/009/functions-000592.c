/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072c023c; end: 1072c0297;  */

undefined1 * FUN_1072c023c(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 auStack_98 [120];
  
  func_0x0001072ce1d0();
  FUN_10726933c(auStack_98);
  func_0x0001072ce9c4();
  FUN_1072c00d0();
  puVar1 = auStack_98;
  FUN_107269394(puVar1);
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x0001072ce934();
  FUN_107269394();
  func_0x0001072ce900();
  func_0x0001072cfc8c();
  FUN_1072c02b8();
  return param_1;
}



/* Entry: 1072c0298; end: 1072c02b7;  */

void FUN_1072c0298(void)

{
  func_0x0001072cfc8c();
  FUN_1072c02b8();
  return;
}



/* Entry: 1072c02b8; end: 1072c02fb;  */

void FUN_1072c02b8(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  lVar1 = param_3[1];
  uVar2 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10 != 0);
  }
  if (*param_2 != 0) {
    do {
      func_0x0001072cfb28(unaff_x30);
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1072c02fc; end: 1072c0367;  */

undefined1 * FUN_1072c02fc(undefined1 *param_1,ulong param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 auStack_48 [40];
  
  func_0x0001072ce464();
  func_0x0001072cf3ac();
  if ((bool)in_CY && !(bool)in_ZR) {
    if (0x1745d1745d1745d < param_2) {
      FUN_1072c03bc();
      func_0x0001072ce818();
      func_0x0001072ce900();
      func_0x000104c317ec();
      return param_1;
    }
    func_0x0001072ce808();
    func_0x0001072cf1ec();
    FUN_1072c03fc();
    func_0x0001072ce9c4();
    FUN_1072c03c8();
    param_1 = auStack_48;
    func_0x0001072c06e0(param_1);
  }
  return param_1;
}



/* Entry: 1072c0368; end: 1072c038b;  */

undefined8 FUN_1072c0368(undefined8 param_1)

{
  func_0x000104c317ec();
  return param_1;
}



/* Entry: 1072c038c; end: 1072c03bb;  */

void FUN_1072c038c(void)

{
  undefined1 in_CY;
  
  func_0x0001072ce4e8();
  if ((bool)in_CY) {
    FUN_1072c076c();
  }
  else {
    FUN_1072c0744();
  }
  func_0x0001072d0394();
  return;
}



/* Entry: 1072c03bc; end: 1072c03c7;  */

void FUN_1072c03bc(void)

{
  func_0x0001072ce494();
  func_0x0001072ce2cc();
  func_0x0001072cf398();
  FUN_1072c0480();
  func_0x0001072cdfc8();
  return;
}



/* Entry: 1072c03c8; end: 1072c03fb;  */

void FUN_1072c03c8(void)

{
  func_0x0001072ce2cc();
  func_0x0001072cf398();
  FUN_1072c0480();
  func_0x0001072cdfc8();
  return;
}



/* Entry: 1072c03fc; end: 1072c044f;  */

void FUN_1072c03fc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001072ce6ac();
  if (param_2 != 0) {
    func_0x0001072c0430(param_4);
  }
  func_0x0001072ce27c(0xb0);
  return;
}



/* Entry: 1072c0450; end: 1072c047f;  */

void FUN_1072c0450(undefined8 param_1,ulong param_2)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  if (param_2 < 0x1745d1745d1745e) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xb0);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001072ce134();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0xb0) {
    func_0x0001072cf5d0();
    func_0x0001072c0510();
    lStack_48 = lStack_48 + 0xb0;
  }
  func_0x0001072cebf4();
  func_0x0001072ce974();
  func_0x0001072c04e4();
  FUN_1072c0678(auStack_70);
  return;
}



/* Entry: 1072c0480; end: 1072c04e3;  */

void FUN_1072c0480(void)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x0001072ce134();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0xb0) {
    func_0x0001072cf5d0();
    func_0x0001072c0510();
    lStack_38 = lStack_38 + 0xb0;
  }
  func_0x0001072cebf4();
  func_0x0001072ce974();
  func_0x0001072c04e4();
  FUN_1072c0678(auStack_60);
  return;
}



/* Entry: 1072c04e4; end: 1072c055f;  */

void FUN_1072c04e4(long param_1)

{
  long unaff_x19;
  
  func_0x0001072cf120();
  for (; param_1 != unaff_x19; param_1 = param_1 + 0xb0) {
    FUN_1072c0624();
  }
  return;
}



/* Entry: 1072c0560; end: 1072c0583;  */

void FUN_1072c0560(void)

{
  func_0x0001072cebc0();
  FUN_1072c0584();
  return;
}



/* Entry: 1072c0584; end: 1072c0623;  */

void FUN_1072c0584(int param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 == 7) {
    return;
  }
  if (param_1 == 6) {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_3[2] = param_2[2];
    param_3[1] = uVar2;
    *param_3 = uVar1;
    return;
  }
  if (param_1 == 5) {
    func_0x0001072cf2bc();
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    param_3[5] = param_2[5];
    param_3[4] = uVar2;
    param_3[3] = uVar1;
    return;
  }
  if ((((param_1 != 4) && (param_1 != 3)) && (param_1 != 2)) && ((param_1 != 1 && (param_1 != 0))))
  {
    return;
  }
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  uVar1 = *param_2;
  param_3[1] = param_2[1];
  *param_3 = uVar1;
  param_3[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 1072c0624; end: 1072c0677;  */

undefined4 * FUN_1072c0624(undefined4 *param_1)

{
  func_0x000104c319e0(param_1 + 0x12);
  func_0x0001072c0654(param_1 + 0xe);
  FUN_1072c30b8(*param_1,param_1 + 2);
  return param_1;
}



/* Entry: 1072c0678; end: 1072c06a3;  */

void FUN_1072c0678(void)

{
  uint extraout_w8;
  
  func_0x0001072cee54();
  if ((extraout_w8 & 1) == 0) {
    FUN_1072c06a4();
  }
  return;
}



/* Entry: 1072c06a4; end: 1072c06b3;  */

void FUN_1072c06a4(long param_1)

{
  long unaff_x19;
  
  func_0x0001072ce908();
  func_0x0001072ceeec();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0xb0;
    FUN_1072c0624();
  }
  return;
}



/* Entry: 1072c06b4; end: 1072c070b;  */

void FUN_1072c06b4(long param_1)

{
  long unaff_x19;
  
  func_0x0001072ceeec();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0xb0;
    FUN_1072c0624();
  }
  return;
}



/* Entry: 1072c070c; end: 1072c0713;  */

void FUN_1072c070c(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001072ce940(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x0001072cf020(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0xb0;
    FUN_1072c0624();
  }
  return;
}



/* Entry: 1072c0714; end: 1072c0743;  */

void FUN_1072c0714(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001072ce940();
  while (func_0x0001072cf020(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0xb0;
    FUN_1072c0624();
  }
  return;
}



/* Entry: 1072c0744; end: 1072c076b;  */

void FUN_1072c0744(void)

{
  func_0x0001072ceb2c();
  FUN_1072c07c4();
  func_0x0001072d0174();
  return;
}



/* Entry: 1072c076c; end: 1072c07c3;  */

void FUN_1072c076c(void)

{
  undefined8 in_stack_00000018;
  
  func_0x0001072d00ec();
  func_0x0001072ce118();
  func_0x0001072cecb8();
  func_0x0001072ce0fc();
  FUN_1072c03fc();
  func_0x0001072ce640(in_stack_00000018);
  FUN_1072c07c4();
  func_0x0001072cf1a4();
  func_0x0001072ce9c4();
  FUN_1072c03c8();
  func_0x0001072ceb54();
  func_0x0001072c06e0();
  return;
}



/* Entry: 1072c07c4; end: 1072c0873;  */

long FUN_1072c07c4(long param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001072cebd4();
  FUN_1072c08b0();
  FUN_1072c0874(&uStack_40);
  *(undefined8 *)(param_1 + 0x40) = uStack_38;
  *(undefined8 *)(param_1 + 0x38) = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_1072c163c(&uStack_40);
  func_0x000107269bac(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x90) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x88) = 0x4000000000000000;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0xbff0000000000000;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  func_0x0001072c0890(param_1);
  return param_1;
}



/* Entry: 1072c0874; end: 1072c08af;  */

void FUN_1072c0874(void)

{
  func_0x0001072cfc38();
  FUN_1072c1514();
  return;
}



/* Entry: 1072c08b0; end: 1072c08cf;  */

void FUN_1072c08b0(void)

{
  func_0x0001072cebc0();
  FUN_1072c08d0();
  return;
}



/* Entry: 1072c08d0; end: 1072c0917;  */

/* WARNING: Possible PIC construction at 0x0001072c0928: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001072c092c) */

void FUN_1072c08d0(int param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 == 7) {
    return;
  }
  if (param_1 == 6) {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_3[2] = param_2[2];
    param_3[1] = uVar2;
    *param_3 = uVar1;
    return;
  }
  if (param_1 == 5) {
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x1072c092c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_2;
  }
  else {
    if (param_1 == 4) {
      func_0x0001072ce208(param_3);
      FUN_1072c0ac4();
      return;
    }
    if (param_1 != 3) {
      if (param_1 == 2) {
        func_0x0001072ce208(param_3);
        func_0x0001072cf108();
        FUN_1072c0d9c();
        return;
      }
      if (param_1 == 1) {
        func_0x0001072ce208(param_3);
        func_0x0001072ceafc();
        FUN_1072c1034();
        return;
      }
      if (param_1 == 0) {
        func_0x0001072ce208(param_3);
        func_0x0001072cf108();
        FUN_1072c12c0();
        return;
      }
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001072ce208(param_3);
  func_0x0001072ceafc();
  FUN_1072c0968();
  return;
}



/* Entry: 1072c0918; end: 1072c0967;  */

void FUN_1072c0918(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001072c0944();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 1072c0968; end: 1072c09d3;  */

void FUN_1072c0968(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x0001072cee8c();
  if (param_4 != 0) {
    func_0x0001003ac1fc();
    FUN_1072c09d4();
    lVar1 = *(long *)(unaff_x19 + 8);
    if (param_3 - unaff_x20 != 0) {
      _memmove(lVar1);
    }
    *(long *)(unaff_x19 + 8) = lVar1 + (param_3 - unaff_x20);
  }
  func_0x0001072ce630();
  FUN_1072c0a4c();
  return;
}



/* Entry: 1072c09d4; end: 1072c09ff;  */

void FUN_1072c09d4(void)

{
  undefined1 in_CY;
  
  func_0x0001072cee6c();
  if (!(bool)in_CY) {
    func_0x0001072cef30();
    FUN_1072c0a0c();
    func_0x0001072ce7dc();
    return;
  }
  FUN_1072c0a00();
  func_0x0001072ce494();
  FUN_1072c0a2c();
  return;
}



/* Entry: 1072c0a00; end: 1072c0a0b;  */

void FUN_1072c0a00(void)

{
  func_0x0001072ce494();
  FUN_1072c0a2c();
  return;
}



/* Entry: 1072c0a0c; end: 1072c0a2b;  */

void FUN_1072c0a0c(void)

{
  FUN_1072c0a2c();
  return;
}



/* Entry: 1072c0a2c; end: 1072c0a4b;  */

void FUN_1072c0a2c(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  ulong extraout_x8;
  
  func_0x0001072cee6c();
  if (!(bool)in_CY) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001072cee98();
  if ((extraout_x8 & 1) == 0) {
    FUN_1072c0a74();
  }
  return;
}



/* Entry: 1072c0a4c; end: 1072c0a73;  */

void FUN_1072c0a4c(void)

{
  uint extraout_w8;
  
  func_0x0001072cee98();
  if ((extraout_w8 & 1) == 0) {
    FUN_1072c0a74();
  }
  return;
}



/* Entry: 1072c0a74; end: 1072c0a9b;  */

void FUN_1072c0a74(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072c0a9c; end: 1072c0ac3;  */

void FUN_1072c0a9c(void)

{
  func_0x0001072ce208();
  FUN_1072c0ac4();
  return;
}



/* Entry: 1072c0ac4; end: 1072c0b0b;  */

void FUN_1072c0ac4(void)

{
  long in_x3;
  
  func_0x0001072cee8c();
  if (in_x3 != 0) {
    func_0x0001072ce220();
    FUN_1072c0b0c();
    func_0x0001072ce35c();
    FUN_1072c0b40();
  }
  func_0x0001072ce630();
  func_0x0001072c0cc0();
  return;
}



/* Entry: 1072c0b0c; end: 1072c0b3f;  */

void FUN_1072c0b0c(long param_1,ulong param_2)

{
  long *unaff_x19;
  
  if (param_2 >> 0x3b == 0) {
    func_0x0001072cef30();
    FUN_1072c0b74();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 0x20;
  }
  else {
    FUN_1072c0b68();
    func_0x0001072ceb2c();
    func_0x0001072ceee0();
    func_0x0001072c0bac();
    unaff_x19[1] = param_1;
  }
  return;
}



/* Entry: 1072c0b40; end: 1072c0b67;  */

void FUN_1072c0b40(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001072ceb2c();
  func_0x0001072ceee0();
  func_0x0001072c0bac();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1072c0b68; end: 1072c0b73;  */

void FUN_1072c0b68(void)

{
  func_0x0001072ce494();
  FUN_1072c0b94();
  return;
}



/* Entry: 1072c0b74; end: 1072c0b93;  */

void FUN_1072c0b74(void)

{
  FUN_1072c0b94();
  return;
}



/* Entry: 1072c0b94; end: 1072c0bbf;  */

void FUN_1072c0b94(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  FUN_1072c0bc0();
  return;
}



/* Entry: 1072c0bc0; end: 1072c0c0f;  */

void FUN_1072c0bc0(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001072ce058();
  while (unaff_x21 != unaff_x19) {
    func_0x0001072cea6c();
    FUN_1072c0c10();
    func_0x0001072d024c();
  }
  func_0x0001072ce708();
  FUN_1072c0c34();
  return;
}



/* Entry: 1072c0c10; end: 1072c0c33;  */

void FUN_1072c0c10(long param_1,long param_2)

{
  func_0x0001072c0944();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return;
}



/* Entry: 1072c0c34; end: 1072c0c5f;  */

void FUN_1072c0c34(void)

{
  uint extraout_w8;
  
  func_0x0001072cee54();
  if ((extraout_w8 & 1) == 0) {
    FUN_1072c0c60();
  }
  return;
}



/* Entry: 1072c0c60; end: 1072c0c6f;  */

void FUN_1072c0c60(long param_1)

{
  long unaff_x19;
  
  func_0x0001072ce908();
  func_0x0001072ceeec();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x20;
    func_0x0001072c0c9c();
  }
  return;
}



/* Entry: 1072c0c70; end: 1072c0d13;  */

void FUN_1072c0c70(long param_1)

{
  long unaff_x19;
  
  func_0x0001072ceeec();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x20;
    func_0x0001072c0c9c();
  }
  return;
}



/* Entry: 1072c0d14; end: 1072c0d1b;  */

void FUN_1072c0d14(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -4;
    func_0x0001072c0c9c();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072c0d1c; end: 1072c0d4b;  */

void FUN_1072c0d1c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x20;
    func_0x0001072c0c9c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072c0d4c; end: 1072c0d73;  */

void FUN_1072c0d4c(int param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 == 2) {
    func_0x0001072ce208(param_3);
    func_0x0001072cf108();
    FUN_1072c0d9c();
  }
  else if (param_1 == 1) {
    func_0x0001072ce208(param_3);
    func_0x0001072ceafc();
    FUN_1072c1034();
  }
  else {
    if (param_1 != 0) {
      return;
    }
    func_0x0001072ce208(param_3);
    func_0x0001072cf108();
    FUN_1072c12c0();
  }
  return;
}



/* Entry: 1072c0d74; end: 1072c0d9b;  */

void FUN_1072c0d74(void)

{
  func_0x0001072ce208();
  func_0x0001072cf108();
  FUN_1072c0d9c();
  return;
}



/* Entry: 1072c0d9c; end: 1072c0de3;  */

void FUN_1072c0d9c(void)

{
  long in_x3;
  
  func_0x0001072cee8c();
  if (in_x3 != 0) {
    func_0x0001072ce220();
    FUN_1072c0de4();
    func_0x0001072ce35c();
    FUN_1072c0e24();
  }
  func_0x0001072ce630();
  func_0x0001072c0f74();
  return;
}



/* Entry: 1072c0de4; end: 1072c0e23;  */

void FUN_1072c0de4(undefined8 param_1,ulong param_2)

{
  undefined8 *unaff_x19;
  
  if (param_2 < 0x555555555555556) {
    func_0x0001072cef30();
    FUN_1072c0e58();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    func_0x0001072cf0b8(0x30);
  }
  else {
    FUN_1072c0e4c();
    func_0x0001072ceb2c();
    func_0x0001072ceee0();
    func_0x0001072c0e9c();
    unaff_x19[1] = param_1;
  }
  return;
}



/* Entry: 1072c0e24; end: 1072c0e4b;  */

void FUN_1072c0e24(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001072ceb2c();
  func_0x0001072ceee0();
  func_0x0001072c0e9c();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1072c0e4c; end: 1072c0e57;  */

void FUN_1072c0e4c(void)

{
  func_0x0001072ce494();
  FUN_1072c0e78();
  return;
}



/* Entry: 1072c0e58; end: 1072c0e77;  */

void FUN_1072c0e58(void)

{
  FUN_1072c0e78();
  return;
}



/* Entry: 1072c0e78; end: 1072c0eaf;  */

void FUN_1072c0e78(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x555555555555556) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x30);
    return;
  }
  func_0x000104bd35f4();
  FUN_1072c0eb0();
  return;
}



/* Entry: 1072c0eb0; end: 1072c0f0b;  */

long FUN_1072c0eb0(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack_38;
  
  func_0x0001072ce058();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x30) {
    func_0x0001072cea6c();
    FUN_1072c0918();
    unaff_x20 = uStack_38 + 0x30;
    uStack_38 = unaff_x20;
  }
  func_0x0001072ce708();
  FUN_1072c0f0c();
  return unaff_x20;
}



/* Entry: 1072c0f0c; end: 1072c0f37;  */

void FUN_1072c0f0c(void)

{
  uint extraout_w8;
  
  func_0x0001072cee54();
  if ((extraout_w8 & 1) == 0) {
    FUN_1072c0f38();
  }
  return;
}



/* Entry: 1072c0f38; end: 1072c0f47;  */

void FUN_1072c0f38(long param_1)

{
  long unaff_x19;
  
  func_0x0001072ce908();
  func_0x0001072ceeec();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x30;
    func_0x0001072c0c9c();
  }
  return;
}



/* Entry: 1072c0f48; end: 1072c0fc7;  */

void FUN_1072c0f48(long param_1)

{
  long unaff_x19;
  
  func_0x0001072ceeec();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x30;
    func_0x0001072c0c9c();
  }
  return;
}



/* Entry: 1072c0fc8; end: 1072c0fcf;  */

void FUN_1072c0fc8(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -6;
    func_0x0001072c0c9c();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072c0fd0; end: 1072c0fff;  */

void FUN_1072c0fd0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x30;
    func_0x0001072c0c9c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072c1000; end: 1072c100f;  */

void FUN_1072c1000(int param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    return;
  }
  func_0x0001072ce208(param_3);
  func_0x0001072cf108();
  FUN_1072c12c0();
  return;
}



/* Entry: 1072c1010; end: 1072c1033;  */

void FUN_1072c1010(void)

{
  func_0x0001072ce208();
  func_0x0001072ceafc();
  FUN_1072c1034();
  return;
}



/* Entry: 1072c1034; end: 1072c107b;  */

void FUN_1072c1034(void)

{
  long in_x3;
  
  func_0x0001072cee8c();
  if (in_x3 != 0) {
    func_0x0001072ce220();
    FUN_1072c107c();
    func_0x0001072ce35c();
    FUN_1072c10a8();
  }
  func_0x0001072ce630();
  func_0x0001072c120c();
  return;
}



/* Entry: 1072c107c; end: 1072c10a7;  */

void FUN_1072c107c(undefined8 param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  
  func_0x0001072cee6c();
  if ((bool)in_CY) {
    FUN_1072c10d0();
    func_0x0001072ceb2c();
    func_0x0001072ceee0();
    func_0x0001072c111c();
    *(undefined8 *)(unaff_x19 + 8) = param_1;
  }
  else {
    func_0x0001072cef30();
    FUN_1072c10dc();
    func_0x0001072ce7dc();
  }
  return;
}



/* Entry: 1072c10a8; end: 1072c10cf;  */

void FUN_1072c10a8(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001072ceb2c();
  func_0x0001072ceee0();
  func_0x0001072c111c();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1072c10d0; end: 1072c10db;  */

void FUN_1072c10d0(void)

{
  func_0x0001072ce494();
  FUN_1072c10fc();
  return;
}



/* Entry: 1072c10dc; end: 1072c10fb;  */

void FUN_1072c10dc(void)

{
  FUN_1072c10fc();
  return;
}



/* Entry: 1072c10fc; end: 1072c112f;  */

void FUN_1072c10fc(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  
  func_0x0001072cee6c();
  if (!(bool)in_CY) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  FUN_1072c1130();
  return;
}



/* Entry: 1072c1130; end: 1072c117f;  */

void FUN_1072c1130(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001072ce058();
  while (unaff_x21 != unaff_x19) {
    func_0x0001072cea6c();
    FUN_1072c0a9c();
    func_0x0001072d0180();
  }
  func_0x0001072ce708();
  FUN_1072c1180();
  return;
}



/* Entry: 1072c1180; end: 1072c11ab;  */

void FUN_1072c1180(void)

{
  uint extraout_w8;
  
  func_0x0001072cee54();
  if ((extraout_w8 & 1) == 0) {
    FUN_1072c11ac();
  }
  return;
}



/* Entry: 1072c11ac; end: 1072c11bb;  */

void FUN_1072c11ac(long param_1)

{
  long unaff_x19;
  
  func_0x0001072ce908();
  func_0x0001072ceeec();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x18;
    func_0x0001072c11e8();
  }
  return;
}



/* Entry: 1072c11bc; end: 1072c125f;  */

void FUN_1072c11bc(long param_1)

{
  long unaff_x19;
  
  func_0x0001072ceeec();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x18;
    func_0x0001072c11e8();
  }
  return;
}



/* Entry: 1072c1260; end: 1072c1267;  */

void FUN_1072c1260(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -3;
    func_0x0001072c11e8();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072c1268; end: 1072c12bf;  */

void FUN_1072c1268(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x18;
    func_0x0001072c11e8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072c12c0; end: 1072c1307;  */

void FUN_1072c12c0(void)

{
  long in_x3;
  
  func_0x0001072cee8c();
  if (in_x3 != 0) {
    func_0x0001072ce220();
    FUN_1072c1308();
    func_0x0001072ce35c();
    FUN_1072c133c();
  }
  func_0x0001072ce630();
  func_0x0001072c1488();
  return;
}



/* Entry: 1072c1308; end: 1072c133b;  */

void FUN_1072c1308(undefined8 param_1)

{
  undefined1 in_CY;
  undefined8 *unaff_x19;
  
  func_0x0001072cfba8();
  if ((bool)in_CY) {
    FUN_1072c1364();
    func_0x0001072ceb2c();
    func_0x0001072ceee0();
    func_0x0001072c13b0();
    unaff_x19[1] = param_1;
  }
  else {
    func_0x0001072cef30();
    FUN_1072c1370();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    func_0x0001072cf0b8(0x38);
  }
  return;
}



/* Entry: 1072c133c; end: 1072c1363;  */

void FUN_1072c133c(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001072ceb2c();
  func_0x0001072ceee0();
  func_0x0001072c13b0();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1072c1364; end: 1072c136f;  */

void FUN_1072c1364(void)

{
  func_0x0001072ce494();
  FUN_1072c1390();
  return;
}



/* Entry: 1072c1370; end: 1072c138f;  */

void FUN_1072c1370(void)

{
  FUN_1072c1390();
  return;
}



/* Entry: 1072c1390; end: 1072c13c3;  */

void FUN_1072c1390(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  
  func_0x0001072cfba8();
  if (!(bool)in_CY) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x38);
    return;
  }
  func_0x000104bd35f4();
  FUN_1072c13c4();
  return;
}



/* Entry: 1072c13c4; end: 1072c141f;  */

long FUN_1072c13c4(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack_38;
  
  func_0x0001072ce058();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x38) {
    func_0x0001072cea6c();
    FUN_1072c08b0();
    unaff_x20 = uStack_38 + 0x38;
    uStack_38 = unaff_x20;
  }
  func_0x0001072ce708();
  FUN_1072c1420();
  return unaff_x20;
}



/* Entry: 1072c1420; end: 1072c144b;  */

void FUN_1072c1420(void)

{
  uint extraout_w8;
  
  func_0x0001072cee54();
  if ((extraout_w8 & 1) == 0) {
    FUN_1072c144c();
  }
  return;
}



/* Entry: 1072c144c; end: 1072c145b;  */

void FUN_1072c144c(long param_1)

{
  long unaff_x19;
  
  func_0x0001072ce908();
  func_0x0001072ceeec();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x38;
    FUN_1072c308c();
  }
  return;
}



/* Entry: 1072c145c; end: 1072c14db;  */

void FUN_1072c145c(long param_1)

{
  long unaff_x19;
  
  func_0x0001072ceeec();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x38;
    FUN_1072c308c();
  }
  return;
}



/* Entry: 1072c14dc; end: 1072c14e3;  */

void FUN_1072c14dc(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -7;
    FUN_1072c308c();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072c14e4; end: 1072c1513;  */

void FUN_1072c14e4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x38;
    FUN_1072c308c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072c1514; end: 1072c1577;  */

void FUN_1072c1514(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uStack_30;
  
  func_0x0001072ce294();
  func_0x0001072cf450();
  FUN_1072c1578();
  FUN_1072c15bc(uStack_30,param_2);
  func_0x0001072ce344();
  func_0x0001072c162c();
  func_0x0001072ce0cc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce928();
  func_0x0001072c162c();
  func_0x0001072ce900();
  func_0x0001072cfca4();
  FUN_1072c1598();
  func_0x0001072cfbc0();
  return;
}



/* Entry: 1072c1578; end: 1072c1597;  */

void FUN_1072c1578(void)

{
  func_0x0001072cfca4();
  FUN_1072c1598();
  func_0x0001072cfbc0();
  return;
}



/* Entry: 1072c1598; end: 1072c15bb;  */

undefined8 * FUN_1072c1598(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 *unaff_x30;
  
  func_0x0001072d03d4();
  if (!(bool)in_CY) {
    puVar1 = (undefined8 *)(param_2 * 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  unaff_x30[2] = 0;
  *unaff_x30 = &PTR_FUN_11099bda8;
  unaff_x30[1] = 0;
  FUN_107268400(unaff_x30 + 3);
  return unaff_x30;
}



/* Entry: 1072c15bc; end: 1072c15fb;  */

undefined8 * FUN_1072c15bc(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_11099bda8;
  param_1[1] = 0;
  FUN_107268400(param_1 + 3);
  return param_1;
}



/* Entry: 1072c15fc; end: 1072c15ff;  */

void FUN_1072c15fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099bda8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072c1600; end: 1072c1613;  */

void FUN_1072c1600(void)

{
  func_0x0001072c1620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072c1614; end: 1072c163b;  */

void FUN_1072c1614(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  puVar3 = puVar1;
  func_0x000104c33620();
  pcVar2 = pcRam00000001138369a8;
  if ((puVar3 == (undefined8 *)0x1) && (pcRam00000001138369a8 != (code *)0x0)) {
    uStack_28 = *(undefined8 *)(param_1 + 0x20);
    uStack_30 = *puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    (*pcVar2)(&uStack_30);
    func_0x0001000df524(&uStack_30);
  }
  func_0x000104c33428(puVar1);
  return;
}



/* Entry: 1072c163c; end: 1072c165f;  */

void FUN_1072c163c(long param_1)

{
  func_0x0001072cea78();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1072c1660; end: 1072c167b;  */

void FUN_1072c1660(void)

{
  func_0x0001072d0148();
  FUN_1072c167c();
  return;
}



/* Entry: 1072c167c; end: 1072c1763;  */

/* WARNING: Possible PIC construction at 0x0001072c1784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001072c1870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001072c18f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001072c1874) */
/* WARNING: Removing unreachable block (ram,0x0001072c1788) */
/* WARNING: Removing unreachable block (ram,0x0001072c18fc) */

void FUN_1072c167c(int *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  double *pdVar3;
  long lVar4;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  double dVar5;
  
  if (*param_1 == 7) {
    return;
  }
  if (*param_1 == 6) {
    pdVar3 = (double *)(param_1 + 2);
    plVar2 = (long *)*param_2;
  }
  else {
    if (*param_1 != 5) {
      if (*param_1 != 4) {
        if (*param_1 == 3) {
          plVar2 = (long *)(param_1 + 2);
          pdVar3 = (double *)*param_2;
          func_0x0001072cefd8();
          if (unaff_x20 == unaff_x21) {
            return;
          }
          func_0x0001072cef80();
          goto SUB_1072c16e0;
        }
        bVar1 = *param_1 == 2;
        if (bVar1) {
          func_0x0001072cefd8(param_1 + 2,*param_2);
          for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x30) {
            func_0x0001072cee80();
            FUN_1072c1764();
          }
          return;
        }
        func_0x0001072cf5e8(param_1,param_2);
        if (!bVar1) {
          func_0x0001072cefd8(param_2,*(undefined8 *)param_1);
          for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x38) {
            func_0x0001072cee80();
            FUN_1072c1944();
          }
          return;
        }
        unaff_x29 = &stack0xfffffffffffffff0;
        func_0x0001072cefd8(param_2,*(undefined8 *)param_1);
        if (unaff_x20 == unaff_x21) {
          return;
        }
        func_0x0001072cee80();
        unaff_x30 = 0x1072c18fc;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      }
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      func_0x0001072cefd8();
      for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x20) {
        func_0x0001072cee80();
        func_0x0001072c17f4();
      }
      return;
    }
    plVar2 = (long *)(param_1 + 2);
    pdVar3 = (double *)*param_2;
    func_0x0001072cefd8();
    if (unaff_x20 == unaff_x21) {
      return;
    }
    func_0x0001072cef80();
  }
SUB_1072c16e0:
  lVar4 = *plVar2;
  dVar5 = *(double *)(lVar4 + 0x88);
  if (*pdVar3 <= *(double *)(lVar4 + 0x88)) {
    dVar5 = *pdVar3;
  }
  *(double *)(lVar4 + 0x88) = dVar5;
  dVar5 = *(double *)(lVar4 + 0x90);
  if (pdVar3[1] <= *(double *)(lVar4 + 0x90)) {
    dVar5 = pdVar3[1];
  }
  *(double *)(lVar4 + 0x90) = dVar5;
  dVar5 = *(double *)(lVar4 + 0x98);
  if (*(double *)(lVar4 + 0x98) <= *pdVar3) {
    dVar5 = *pdVar3;
  }
  *(double *)(lVar4 + 0x98) = dVar5;
  dVar5 = *(double *)(lVar4 + 0xa0);
  if (*(double *)(lVar4 + 0xa0) <= pdVar3[1]) {
    dVar5 = pdVar3[1];
  }
  *(double *)(lVar4 + 0xa0) = dVar5;
  *(int *)(lVar4 + 0xa8) = *(int *)(lVar4 + 0xa8) + 1;
  return;
}



/* Entry: 1072c1764; end: 1072c1797;  */

void FUN_1072c1764(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001072cefd8();
  for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x18) {
    func_0x0001072cef80();
    func_0x0001072c16e0();
  }
  return;
}



/* Entry: 1072c1798; end: 1072c17bf;  */

void FUN_1072c1798(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001072cefd8(param_2,*param_1);
  for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x20) {
    func_0x0001072cee80();
    func_0x0001072c17f4();
  }
  return;
}


