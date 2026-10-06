/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072a76b4; end: 1072a76e7;  */

void FUN_1072a76b4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  func_0x0001072a689c();
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(param_1 + 0x120) = uVar1;
  *(undefined4 *)(param_1 + 0x138) = 1;
  return;
}



/* Entry: 1072a76e8; end: 1072a7713;  */

void FUN_1072a76e8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072b02bc();
  FUN_1072a7768();
  *(long *)(unaff_x19 + 8) = unaff_x20 + 0x140;
  return;
}



/* Entry: 1072a7714; end: 1072a7767;  */

undefined8 FUN_1072a7714(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uStack_48;
  
  func_0x0001072af8a0();
  func_0x0001072af9c4();
  func_0x0001072b0284(uStack_48);
  FUN_1072a7768();
  func_0x0001072b02f0();
  func_0x0001072afc08();
  FUN_1072a673c();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001072afd68();
  return uVar1;
}



/* Entry: 1072a7768; end: 1072a7797;  */

long FUN_1072a7768(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001072a689c();
  FUN_1072a7798(lVar1 + 0x120,param_3);
  return param_1;
}



/* Entry: 1072a7798; end: 1072a77af;  */

void FUN_1072a7798(void)

{
  FUN_1072a77b0();
  return;
}



/* Entry: 1072a77b0; end: 1072a77db;  */

void FUN_1072a77b0(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined4 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 1072a77dc; end: 1072a780b;  */

void FUN_1072a77dc(void)

{
  func_0x0001072b0360();
  FUN_1072a780c();
  return;
}



/* Entry: 1072a780c; end: 1072a787f;  */

void FUN_1072a780c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x0001072afc24();
    FUN_1072a7880();
    lVar1 = *(long *)(unaff_x19 + 8);
    if (param_3 - unaff_x20 != 0) {
      _memmove(lVar1);
    }
    *(long *)(unaff_x19 + 8) = lVar1 + (param_3 - unaff_x20);
  }
  func_0x0001072b01dc();
  FUN_1072a78f8(&uStack_40);
  return;
}



/* Entry: 1072a7880; end: 1072a78b3;  */

void FUN_1072a7880(long param_1,ulong param_2)

{
  long *unaff_x19;
  
  if (param_2 >> 0x3d == 0) {
    func_0x0001072b0654();
    FUN_1072a78c0();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 8;
    return;
  }
  FUN_1072a78b4();
  func_0x0001072af800();
  FUN_1072a78e0();
  return;
}



/* Entry: 1072a78b4; end: 1072a78bf;  */

void FUN_1072a78b4(void)

{
  func_0x0001072af800();
  FUN_1072a78e0();
  return;
}



/* Entry: 1072a78c0; end: 1072a78df;  */

void FUN_1072a78c0(void)

{
  FUN_1072a78e0();
  return;
}



/* Entry: 1072a78e0; end: 1072a78f7;  */

void FUN_1072a78e0(undefined8 param_1,ulong param_2)

{
  ulong extraout_x8;
  
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001072b040c();
  if ((extraout_x8 & 1) == 0) {
    FUN_1072a7920();
  }
  return;
}



/* Entry: 1072a78f8; end: 1072a791f;  */

void FUN_1072a78f8(void)

{
  uint extraout_w8;
  
  func_0x0001072b040c();
  if ((extraout_w8 & 1) == 0) {
    FUN_1072a7920();
  }
  return;
}



/* Entry: 1072a7920; end: 1072a7937;  */

void FUN_1072a7920(undefined8 *param_1)

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



/* Entry: 1072a7938; end: 1072a795b;  */

void FUN_1072a7938(void)

{
  func_0x0001072af8f4();
  FUN_1072a7920();
  return;
}



/* Entry: 1072a795c; end: 1072a7967;  */

void FUN_1072a795c(void)

{
  func_0x0001072af800();
  func_0x0001072afa34();
  func_0x0001072b0394();
  FUN_1072a7a20();
  func_0x0001072af688();
  return;
}



/* Entry: 1072a7968; end: 1072a799b;  */

void FUN_1072a7968(void)

{
  func_0x0001072afa34();
  func_0x0001072b0394();
  FUN_1072a7a20();
  func_0x0001072af688();
  return;
}



/* Entry: 1072a799c; end: 1072a79ef;  */

void FUN_1072a799c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001072afbc4();
  if (param_2 != 0) {
    func_0x0001072a79d0(param_4);
  }
  func_0x0001072af888(0x120);
  return;
}



/* Entry: 1072a79f0; end: 1072a7a1f;  */

void FUN_1072a79f0(undefined8 param_1,ulong param_2)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  if (param_2 < 0xe38e38e38e38e4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x120);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001072af73c();
  func_0x0001072b03ac();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x120) {
    func_0x0001072b03a0();
    func_0x0001072a689c();
    lStack_48 = lStack_48 + 0x120;
  }
  func_0x0001072aff04();
  func_0x0001072afbd4();
  FUN_1072a7a88();
  FUN_1072a7ab4(auStack_70);
  return;
}



/* Entry: 1072a7a20; end: 1072a7a87;  */

void FUN_1072a7a20(void)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x0001072af73c();
  func_0x0001072b03ac();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x120) {
    func_0x0001072b03a0();
    func_0x0001072a689c();
    lStack_38 = lStack_38 + 0x120;
  }
  func_0x0001072aff04();
  func_0x0001072afbd4();
  FUN_1072a7a88();
  FUN_1072a7ab4(auStack_60);
  return;
}



/* Entry: 1072a7a88; end: 1072a7ab3;  */

void FUN_1072a7a88(long param_1)

{
  long unaff_x19;
  
  func_0x0001072b02c8();
  for (; param_1 != unaff_x19; param_1 = param_1 + 0x120) {
    func_0x0001072a6b0c();
  }
  return;
}



/* Entry: 1072a7ab4; end: 1072a7adf;  */

void FUN_1072a7ab4(void)

{
  uint extraout_w8;
  
  func_0x0001072b012c();
  if ((extraout_w8 & 1) == 0) {
    FUN_1072a7ae0();
  }
  return;
}



/* Entry: 1072a7ae0; end: 1072a7aef;  */

void FUN_1072a7ae0(long param_1)

{
  long unaff_x19;
  
  func_0x0001072afc8c();
  func_0x0001072b0148();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x120;
    func_0x0001072a6b0c();
  }
  return;
}



/* Entry: 1072a7af0; end: 1072a7b47;  */

void FUN_1072a7af0(long param_1)

{
  long unaff_x19;
  
  func_0x0001072b0148();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x120;
    func_0x0001072a6b0c();
  }
  return;
}



/* Entry: 1072a7b48; end: 1072a7b4f;  */

void FUN_1072a7b48(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001072afba4(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x0001072b0194(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x120;
    func_0x0001072a6b0c();
  }
  return;
}



/* Entry: 1072a7b50; end: 1072a7bcf;  */

void FUN_1072a7b50(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001072afba4();
  while (func_0x0001072b0194(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x120;
    func_0x0001072a6b0c();
  }
  return;
}



/* Entry: 1072a7bd0; end: 1072a7bd7;  */

void FUN_1072a7bd0(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001072af9fc(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x24;
    func_0x0001072a6b0c();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072a7bd8; end: 1072a7c07;  */

void FUN_1072a7bd8(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072af9fc();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x120;
    func_0x0001072a6b0c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072a7c08; end: 1072a7c13;  */

void FUN_1072a7c08(void)

{
  func_0x0001072af800();
  func_0x0001072afa34();
  func_0x0001072b0394();
  FUN_1072a7ccc();
  func_0x0001072af688();
  return;
}



/* Entry: 1072a7c14; end: 1072a7c47;  */

void FUN_1072a7c14(void)

{
  func_0x0001072afa34();
  func_0x0001072b0394();
  FUN_1072a7ccc();
  func_0x0001072af688();
  return;
}



/* Entry: 1072a7c48; end: 1072a7c9b;  */

void FUN_1072a7c48(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001072afbc4();
  if (param_2 != 0) {
    func_0x0001072a7c7c(param_4);
  }
  func_0x0001072af888(0x130);
  return;
}



/* Entry: 1072a7c9c; end: 1072a7ccb;  */

void FUN_1072a7c9c(undefined8 param_1,ulong param_2)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  if (param_2 < 0xd79435e50d7944) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x130);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001072af73c();
  func_0x0001072b03ac();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x130) {
    func_0x0001072b03a0();
    func_0x0001072a7d60();
    lStack_48 = lStack_48 + 0x130;
  }
  func_0x0001072aff04();
  func_0x0001072afbd4();
  func_0x0001072a7d34();
  FUN_1072a7d84(auStack_70);
  return;
}



/* Entry: 1072a7ccc; end: 1072a7d33;  */

void FUN_1072a7ccc(void)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x0001072af73c();
  func_0x0001072b03ac();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x130) {
    func_0x0001072b03a0();
    func_0x0001072a7d60();
    lStack_38 = lStack_38 + 0x130;
  }
  func_0x0001072aff04();
  func_0x0001072afbd4();
  func_0x0001072a7d34();
  FUN_1072a7d84(auStack_60);
  return;
}



/* Entry: 1072a7d34; end: 1072a7d83;  */

void FUN_1072a7d34(long param_1)

{
  long unaff_x19;
  
  func_0x0001072b02c8();
  for (; param_1 != unaff_x19; param_1 = param_1 + 0x130) {
    func_0x0001072a6b0c();
  }
  return;
}



/* Entry: 1072a7d84; end: 1072a7daf;  */

void FUN_1072a7d84(void)

{
  uint extraout_w8;
  
  func_0x0001072b012c();
  if ((extraout_w8 & 1) == 0) {
    FUN_1072a7db0();
  }
  return;
}



/* Entry: 1072a7db0; end: 1072a7dbf;  */

void FUN_1072a7db0(long param_1)

{
  long unaff_x19;
  
  func_0x0001072afc8c();
  func_0x0001072b0148();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x130;
    func_0x0001072a6b0c();
  }
  return;
}



/* Entry: 1072a7dc0; end: 1072a7e17;  */

void FUN_1072a7dc0(long param_1)

{
  long unaff_x19;
  
  func_0x0001072b0148();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x130;
    func_0x0001072a6b0c();
  }
  return;
}



/* Entry: 1072a7e18; end: 1072a7e1f;  */

void FUN_1072a7e18(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001072afba4(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x0001072b0194(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x130;
    func_0x0001072a6b0c();
  }
  return;
}



/* Entry: 1072a7e20; end: 1072a7e9f;  */

void FUN_1072a7e20(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001072afba4();
  while (func_0x0001072b0194(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x130;
    func_0x0001072a6b0c();
  }
  return;
}



/* Entry: 1072a7ea0; end: 1072a7ea7;  */

void FUN_1072a7ea0(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001072af9fc(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x26;
    func_0x0001072a6b0c();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072a7ea8; end: 1072a7ed7;  */

void FUN_1072a7ea8(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072af9fc();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x130;
    func_0x0001072a6b0c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072a7ed8; end: 1072a7eef;  */

void FUN_1072a7ed8(void)

{
  FUN_1072a7f24();
  return;
}



/* Entry: 1072a7ef0; end: 1072a7f23;  */

void FUN_1072a7ef0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072af980();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 8) {
    func_0x0001072afd70();
    FUN_1072a839c();
  }
  return;
}



/* Entry: 1072a7f24; end: 1072a7f57;  */

void FUN_1072a7f24(void)

{
  func_0x0001072a7f3c();
  return;
}



/* Entry: 1072a7f58; end: 1072a80cb;  */

undefined1  [16] FUN_1072a7f58(undefined8 param_1,undefined8 param_2,long *param_3,ulong *param_4)

{
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar3;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar4;
  ulong uVar5;
  ulong extraout_x9;
  undefined8 extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x10;
  ulong uVar6;
  long *unaff_x21;
  long *plVar7;
  ulong uVar8;
  ulong unaff_x23;
  undefined1 auVar9 [16];
  
  uVar6 = *param_4;
  uVar8 = param_3[1];
  if (uVar8 != 0) {
    func_0x0001072b0180();
    if ((bool)in_ZR) {
      unaff_x23 = extraout_x8 & uVar6;
      in_ZR = true;
    }
    else {
      in_NG = (long)(uVar6 - uVar8) < 0;
      in_ZR = uVar6 == uVar8;
      unaff_x23 = uVar6;
      if (uVar8 <= uVar6) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar6 / uVar8;
        }
        unaff_x23 = uVar6 - uVar3 * uVar8;
      }
    }
    plVar7 = *(long **)(*param_3 + unaff_x23 * 8);
    unaff_x21 = (long *)0x0;
    uVar3 = extraout_x8;
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar7;
          if (unaff_x21 == (long *)0x0) goto LAB_1072a7ffc;
          uVar5 = unaff_x21[1];
          plVar7 = unaff_x21;
          if (uVar5 != uVar6) break;
          in_NG = (long)(unaff_x21[2] - uVar6) < 0;
          in_ZR = false;
          if (unaff_x21[2] == uVar6) {
            uVar2 = 0;
            goto LAB_1072a80b4;
          }
        }
        if ((uVar8 & uVar3) == 0) {
          uVar5 = uVar5 & uVar3;
        }
        else if (uVar8 <= uVar5) {
          func_0x0001072b016c();
          uVar3 = extraout_x8_00;
          uVar5 = extraout_x9;
        }
        in_NG = (long)(uVar5 - unaff_x23) < 0;
        in_ZR = uVar5 == unaff_x23;
      } while ((bool)in_ZR);
    }
  }
LAB_1072a7ffc:
  func_0x0001002a9e2c();
  FUN_1072a80cc();
  func_0x0001002a9edc();
  if ((uVar8 == 0) || (func_0x0001002ab830(param_1,param_2,(float)uVar8), (bool)in_NG)) {
    func_0x0001072afcac();
    uVar1 = uVar8 == 3;
    func_0x0001002a9ef0();
    FUN_1072a81d4(param_3);
    uVar8 = param_3[1];
    func_0x0001072b0180();
    if ((bool)uVar1) {
      in_ZR = 1;
      unaff_x23 = extraout_x8_01 & uVar6;
    }
    else {
      in_ZR = uVar6 == uVar8;
      unaff_x23 = uVar6;
      if (uVar8 <= uVar6) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar6 / uVar8;
        }
        unaff_x23 = uVar6 - uVar3 * uVar8;
      }
    }
  }
  if (*(long *)(*param_3 + unaff_x23 * 8) == 0) {
    func_0x0001002aa044();
    *(undefined8 *)(extraout_x8_02 + unaff_x23 * 8) = extraout_x9_00;
    if (*unaff_x21 != 0) {
      func_0x0001072b0330();
      lVar4 = extraout_x8_03;
      if ((bool)in_ZR) {
        uVar6 = extraout_x9_01 & extraout_x10;
      }
      else {
        uVar6 = extraout_x9_01;
        if (uVar8 <= extraout_x9_01) {
          func_0x0001072b016c();
          lVar4 = extraout_x8_04;
          uVar6 = extraout_x9_02;
        }
      }
      *(long **)(lVar4 + uVar6 * 8) = unaff_x21;
    }
  }
  else {
    func_0x0001002ab83c();
  }
  func_0x0001072afd30();
  FUN_1072a832c();
  uVar2 = 1;
LAB_1072a80b4:
  auVar9._8_8_ = uVar2;
  auVar9._0_8_ = unaff_x21;
  return auVar9;
}



/* Entry: 1072a80cc; end: 1072a8113;  */

undefined8 * FUN_1072a80cc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  
  func_0x0001072aff10();
  func_0x0001072b01f0();
  *unaff_x21 = param_1;
  unaff_x21[1] = unaff_x22;
  unaff_x21[2] = 1;
  *param_1 = 0;
  param_1[1] = unaff_x20;
  param_1[2] = *param_3;
  func_0x0001072a813c(param_1 + 3,param_3 + 1);
  return param_1 + 2;
}



/* Entry: 1072a8114; end: 1072a8163;  */

undefined8 * FUN_1072a8114(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x0001072a813c(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 1072a8164; end: 1072a81d3;  */

void FUN_1072a8164(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 1072a81d4; end: 1072a824f;  */

void FUN_1072a81d4(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar2;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar5;
  ulong unaff_x19;
  
  func_0x0001072b0120();
  if ((!(bool)in_ZR) && (func_0x0001072b00f0(), !(bool)in_ZR)) {
    func_0x0001072afe04();
  }
  func_0x0001072b0114();
  if ((bool)in_CY && !(bool)in_ZR) {
LAB_1072a820c:
    func_0x0001072afc30();
    if (param_2 == 0) {
      FUN_1072a82fc(param_1);
      *(undefined8 *)(param_1 + 8) = 0;
    }
    else {
      func_0x0001072b01a8();
      FUN_1072a8314();
      func_0x0001072afef8();
      FUN_1072a82fc();
      func_0x0001072afbe4();
      uVar3 = extraout_x9;
      while (uVar1 = unaff_x19 == uVar3, !(bool)uVar1) {
        func_0x0001072afffc();
        uVar3 = extraout_x9_00;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        func_0x0001072af95c();
        func_0x0001072af948();
        plVar4 = extraout_x9_01;
        while (*plVar4 != 0) {
          func_0x0001072b0210();
          lVar2 = extraout_x8_00;
          plVar4 = extraout_x12;
          uVar3 = extraout_x11;
          if ((bool)uVar1) {
            uVar5 = extraout_x13 & extraout_x10;
          }
          else {
            uVar5 = extraout_x13;
            if (unaff_x19 <= extraout_x13) {
              func_0x0001072b0250();
              lVar2 = extraout_x8_01;
              uVar3 = extraout_x11_00;
              plVar4 = extraout_x12_00;
              uVar5 = extraout_x13_00;
            }
          }
          uVar1 = uVar5 == uVar3;
          if (!(bool)uVar1) {
            if (*(long *)(lVar2 + uVar5 * 8) == 0) {
              func_0x0001072b022c();
              plVar4 = extraout_x12_01;
            }
            else {
              func_0x0001072af71c();
              plVar4 = extraout_x9_02;
            }
          }
        }
      }
    }
    return;
  }
  if (!(bool)in_CY) {
    func_0x0001072af700();
    if (((bool)in_CY) && (func_0x0001072b0108(), extraout_x8 == 0)) {
      func_0x0001072af6cc();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x0001072afafc();
    if (!(bool)in_CY) goto LAB_1072a820c;
  }
  return;
}



/* Entry: 1072a8250; end: 1072a82fb;  */

void FUN_1072a8250(long param_1,long param_2)

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar5;
  ulong unaff_x19;
  
  if (param_2 == 0) {
    FUN_1072a82fc(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    func_0x0001072b01a8();
    FUN_1072a8314();
    func_0x0001072afef8();
    FUN_1072a82fc();
    func_0x0001072afbe4();
    uVar3 = extraout_x9;
    while (uVar1 = unaff_x19 == uVar3, !(bool)uVar1) {
      func_0x0001072afffc();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x0001072af95c();
      func_0x0001072af948();
      plVar4 = extraout_x9_01;
      while (*plVar4 != 0) {
        func_0x0001072b0210();
        lVar2 = extraout_x8;
        plVar4 = extraout_x12;
        uVar3 = extraout_x11;
        if ((bool)uVar1) {
          uVar5 = extraout_x13 & extraout_x10;
        }
        else {
          uVar5 = extraout_x13;
          if (unaff_x19 <= extraout_x13) {
            func_0x0001072b0250();
            lVar2 = extraout_x8_00;
            uVar3 = extraout_x11_00;
            plVar4 = extraout_x12_00;
            uVar5 = extraout_x13_00;
          }
        }
        uVar1 = uVar5 == uVar3;
        if (!(bool)uVar1) {
          if (*(long *)(lVar2 + uVar5 * 8) == 0) {
            func_0x0001072b022c();
            plVar4 = extraout_x12_01;
          }
          else {
            func_0x0001072af71c();
            plVar4 = extraout_x9_02;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1072a82fc; end: 1072a8313;  */

void FUN_1072a82fc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072a8314; end: 1072a832b;  */

void FUN_1072a8314(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001072afd84();
  FUN_1072a834c();
  return;
}



/* Entry: 1072a832c; end: 1072a834b;  */

void FUN_1072a832c(void)

{
  func_0x0001072afd84();
  FUN_1072a834c();
  return;
}



/* Entry: 1072a834c; end: 1072a8363;  */

void FUN_1072a834c(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x0001072afcc4(param_1 + 1);
  if ((bool)in_ZR) {
    FUN_1072a8888(unaff_x19 + 0x28);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072a8364; end: 1072a839b;  */

void FUN_1072a8364(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x0001072afcc4();
  if ((bool)in_ZR) {
    FUN_1072a8888(unaff_x19 + 0x28);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072a839c; end: 1072a83cf;  */

void FUN_1072a839c(void)

{
  func_0x0001072a83b4();
  return;
}



/* Entry: 1072a83d0; end: 1072a8543;  */

undefined1  [16] FUN_1072a83d0(undefined8 param_1,undefined8 param_2,long *param_3,ulong *param_4)

{
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar3;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar4;
  ulong uVar5;
  ulong extraout_x9;
  undefined8 extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x10;
  ulong uVar6;
  long *unaff_x21;
  long *plVar7;
  ulong uVar8;
  ulong unaff_x23;
  undefined1 auVar9 [16];
  
  uVar6 = *param_4;
  uVar8 = param_3[1];
  if (uVar8 != 0) {
    func_0x0001072b0180();
    if ((bool)in_ZR) {
      unaff_x23 = extraout_x8 & uVar6;
      in_ZR = true;
    }
    else {
      in_NG = (long)(uVar6 - uVar8) < 0;
      in_ZR = uVar6 == uVar8;
      unaff_x23 = uVar6;
      if (uVar8 <= uVar6) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar6 / uVar8;
        }
        unaff_x23 = uVar6 - uVar3 * uVar8;
      }
    }
    plVar7 = *(long **)(*param_3 + unaff_x23 * 8);
    unaff_x21 = (long *)0x0;
    uVar3 = extraout_x8;
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar7;
          if (unaff_x21 == (long *)0x0) goto LAB_1072a8474;
          uVar5 = unaff_x21[1];
          plVar7 = unaff_x21;
          if (uVar5 != uVar6) break;
          in_NG = (long)(unaff_x21[2] - uVar6) < 0;
          in_ZR = false;
          if (unaff_x21[2] == uVar6) {
            uVar2 = 0;
            goto LAB_1072a852c;
          }
        }
        if ((uVar8 & uVar3) == 0) {
          uVar5 = uVar5 & uVar3;
        }
        else if (uVar8 <= uVar5) {
          func_0x0001072b016c();
          uVar3 = extraout_x8_00;
          uVar5 = extraout_x9;
        }
        in_NG = (long)(uVar5 - unaff_x23) < 0;
        in_ZR = uVar5 == unaff_x23;
      } while ((bool)in_ZR);
    }
  }
LAB_1072a8474:
  func_0x0001002a9e2c();
  FUN_1072a8544();
  func_0x0001002a9edc();
  if ((uVar8 == 0) || (func_0x0001002ab830(param_1,param_2,(float)uVar8), (bool)in_NG)) {
    func_0x0001072afcac();
    uVar1 = uVar8 == 3;
    func_0x0001002a9ef0();
    func_0x0001072a8578(param_3);
    uVar8 = param_3[1];
    func_0x0001072b0180();
    if ((bool)uVar1) {
      in_ZR = 1;
      unaff_x23 = extraout_x8_01 & uVar6;
    }
    else {
      in_ZR = uVar6 == uVar8;
      unaff_x23 = uVar6;
      if (uVar8 <= uVar6) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar6 / uVar8;
        }
        unaff_x23 = uVar6 - uVar3 * uVar8;
      }
    }
  }
  if (*(long *)(*param_3 + unaff_x23 * 8) == 0) {
    func_0x0001002aa044();
    *(undefined8 *)(extraout_x8_02 + unaff_x23 * 8) = extraout_x9_00;
    if (*unaff_x21 != 0) {
      func_0x0001072b0330();
      lVar4 = extraout_x8_03;
      if ((bool)in_ZR) {
        uVar6 = extraout_x9_01 & extraout_x10;
      }
      else {
        uVar6 = extraout_x9_01;
        if (uVar8 <= extraout_x9_01) {
          func_0x0001072b016c();
          lVar4 = extraout_x8_04;
          uVar6 = extraout_x9_02;
        }
      }
      *(long **)(lVar4 + uVar6 * 8) = unaff_x21;
    }
  }
  else {
    func_0x0001002ab83c();
  }
  func_0x0001072afd30();
  FUN_1072a86d0();
  uVar2 = 1;
LAB_1072a852c:
  auVar9._8_8_ = uVar2;
  auVar9._0_8_ = unaff_x21;
  return auVar9;
}



/* Entry: 1072a8544; end: 1072a85f3;  */

void FUN_1072a8544(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 unaff_x20;
  
  func_0x0001072aff10();
  func_0x0001072b0444();
  func_0x0001072b0300();
  *param_1 = 0;
  param_1[1] = unaff_x20;
  param_1[2] = *param_3;
  return;
}



/* Entry: 1072a85f4; end: 1072a869f;  */

void FUN_1072a85f4(long param_1,long param_2)

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar5;
  ulong unaff_x19;
  
  if (param_2 == 0) {
    FUN_1072a86a0(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    func_0x0001072b01a8();
    FUN_1072a86b8();
    func_0x0001072afef8();
    FUN_1072a86a0();
    func_0x0001072afbe4();
    uVar3 = extraout_x9;
    while (uVar1 = unaff_x19 == uVar3, !(bool)uVar1) {
      func_0x0001072afffc();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x0001072af95c();
      func_0x0001072af948();
      plVar4 = extraout_x9_01;
      while (*plVar4 != 0) {
        func_0x0001072b0210();
        lVar2 = extraout_x8;
        plVar4 = extraout_x12;
        uVar3 = extraout_x11;
        if ((bool)uVar1) {
          uVar5 = extraout_x13 & extraout_x10;
        }
        else {
          uVar5 = extraout_x13;
          if (unaff_x19 <= extraout_x13) {
            func_0x0001072b0250();
            lVar2 = extraout_x8_00;
            uVar3 = extraout_x11_00;
            plVar4 = extraout_x12_00;
            uVar5 = extraout_x13_00;
          }
        }
        uVar1 = uVar5 == uVar3;
        if (!(bool)uVar1) {
          if (*(long *)(lVar2 + uVar5 * 8) == 0) {
            func_0x0001072b022c();
            plVar4 = extraout_x12_01;
          }
          else {
            func_0x0001072af71c();
            plVar4 = extraout_x9_02;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1072a86a0; end: 1072a86b7;  */

void FUN_1072a86a0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072a86b8; end: 1072a86cf;  */

void FUN_1072a86b8(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001072afd84();
  FUN_1072a86f0();
  return;
}



/* Entry: 1072a86d0; end: 1072a86ef;  */

void FUN_1072a86d0(void)

{
  func_0x0001072afd84();
  FUN_1072a86f0();
  return;
}



/* Entry: 1072a86f0; end: 1072a8707;  */

void FUN_1072a86f0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072a8708; end: 1072a8733;  */

void FUN_1072a8708(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072b02bc();
  FUN_1072a87a0();
  *(long *)(unaff_x19 + 8) = unaff_x20 + 0x38;
  return;
}



/* Entry: 1072a8734; end: 1072a879f;  */

void FUN_1072a8734(void)

{
  undefined8 uStack_48;
  
  func_0x0001072af920();
  func_0x0001072b05a0();
  FUN_1072a88d8();
  func_0x0001072af904();
  FUN_1072a8970();
  FUN_1072a87a0(uStack_48);
  func_0x0001072afc08();
  FUN_1072a8930();
  func_0x0001072afeec();
  func_0x0001072a8b00();
  return;
}



/* Entry: 1072a87a0; end: 1072a87c7;  */

undefined8 * FUN_1072a87a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  FUN_1072a87c8(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 1072a87c8; end: 1072a8817;  */

void FUN_1072a87c8(undefined8 *param_1,long param_2)

{
  func_0x0001072afc24();
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  func_0x0001072a8578();
  FUN_1072a8818();
  return;
}



/* Entry: 1072a8818; end: 1072a884f;  */

void FUN_1072a8818(void)

{
  long unaff_x19;
  long *unaff_x20;
  
  func_0x0001072af980();
  for (; unaff_x20 != (long *)unaff_x19; unaff_x20 = (long *)*unaff_x20) {
    FUN_1072a839c();
  }
  return;
}



/* Entry: 1072a8850; end: 1072a886f;  */

void FUN_1072a8850(void)

{
  func_0x0001072afd84();
  FUN_1072a8870();
  return;
}



/* Entry: 1072a8870; end: 1072a8887;  */

void FUN_1072a8870(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072a8888; end: 1072a88d7;  */

undefined8 FUN_1072a8888(void)

{
  undefined8 unaff_x19;
  
  func_0x0001072b0400();
  func_0x0001072a88ac();
  func_0x0001072afd84();
  FUN_1072a8870();
  return unaff_x19;
}



/* Entry: 1072a88d8; end: 1072a892f;  */

long * FUN_1072a88d8(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0x492492492492493) {
    uVar1 = (param_1[2] - *param_1) / 0x38;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x249249249249248 < uVar1) {
      plVar2 = (long *)0x492492492492492;
    }
    return plVar2;
  }
  FUN_1072a8964();
  func_0x0001072afa34();
  func_0x0001072b0394();
  FUN_1072a89f4();
  func_0x0001072af688();
  return param_1;
}



/* Entry: 1072a8930; end: 1072a8963;  */

void FUN_1072a8930(void)

{
  func_0x0001072afa34();
  func_0x0001072b0394();
  FUN_1072a89f4();
  func_0x0001072af688();
  return;
}



/* Entry: 1072a8964; end: 1072a896f;  */

void FUN_1072a8964(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001072af800();
  func_0x0001072afbc4();
  if (param_2 != 0) {
    func_0x0001072a89a4(param_4);
  }
  func_0x0001072af888(0x38);
  return;
}



/* Entry: 1072a8970; end: 1072a89c3;  */

void FUN_1072a8970(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001072afbc4();
  if (param_2 != 0) {
    func_0x0001072a89a4(param_4);
  }
  func_0x0001072af888(0x38);
  return;
}



/* Entry: 1072a89c4; end: 1072a89f3;  */

void FUN_1072a89c4(undefined8 param_1,ulong param_2)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  if (param_2 < 0x492492492492493) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x38);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001072af73c();
  func_0x0001072b03ac();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x38) {
    func_0x0001072b03a0();
    func_0x0001072a813c();
    lStack_48 = lStack_48 + 0x38;
  }
  func_0x0001072aff04();
  func_0x0001072afbd4();
  FUN_1072a8a5c();
  FUN_1072a8a90(auStack_70);
  return;
}



/* Entry: 1072a89f4; end: 1072a8a5b;  */

void FUN_1072a89f4(void)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x0001072af73c();
  func_0x0001072b03ac();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x38) {
    func_0x0001072b03a0();
    func_0x0001072a813c();
    lStack_38 = lStack_38 + 0x38;
  }
  func_0x0001072aff04();
  func_0x0001072afbd4();
  FUN_1072a8a5c();
  FUN_1072a8a90(auStack_60);
  return;
}



/* Entry: 1072a8a5c; end: 1072a8a8f;  */

void FUN_1072a8a5c(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    FUN_1072a8888(param_2 + 0x10);
  }
  return;
}



/* Entry: 1072a8a90; end: 1072a8abb;  */

void FUN_1072a8a90(void)

{
  uint extraout_w8;
  
  func_0x0001072b012c();
  if ((extraout_w8 & 1) == 0) {
    FUN_1072a8abc();
  }
  return;
}



/* Entry: 1072a8abc; end: 1072a8acb;  */

void FUN_1072a8abc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x0001072afc8c();
  for (; param_3 != param_5; param_3 = param_3 + -0x38) {
    FUN_1072a8888(param_3 + -0x28);
  }
  return;
}



/* Entry: 1072a8acc; end: 1072a8b2b;  */

void FUN_1072a8acc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  for (; param_3 != param_5; param_3 = param_3 + -0x38) {
    FUN_1072a8888(param_3 + -0x28);
  }
  return;
}



/* Entry: 1072a8b2c; end: 1072a8b33;  */

void FUN_1072a8b2c(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001072afba4(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x0001072b0194(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x38;
    FUN_1072a8888(extraout_x8 + -0x28);
  }
  return;
}



/* Entry: 1072a8b34; end: 1072a8bb7;  */

void FUN_1072a8b34(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001072afba4();
  while (func_0x0001072b0194(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x38;
    FUN_1072a8888(extraout_x8 + -0x28);
  }
  return;
}



/* Entry: 1072a8bb8; end: 1072a8bbf;  */

void FUN_1072a8bb8(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072afba4(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x38) {
    FUN_1072a8888(lVar1 + -0x28);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072a8bc0; end: 1072a8bff;  */

void FUN_1072a8bc0(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072afba4();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x38) {
    FUN_1072a8888(lVar1 + -0x28);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072a8c00; end: 1072a8c13;  */

void FUN_1072a8c00(void)

{
  func_0x000104c03f28(&DAT_10f62a4d8);
  func_0x0001072b0360();
  FUN_1072a8c44();
  return;
}



/* Entry: 1072a8c14; end: 1072a8c43;  */

void FUN_1072a8c14(void)

{
  func_0x0001072b0360();
  FUN_1072a8c44();
  return;
}



/* Entry: 1072a8c44; end: 1072a8ca7;  */

void FUN_1072a8c44(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x0001002a9e3c();
    FUN_1072a8ca8();
    func_0x0001072b0284(param_1);
    FUN_1072a8cdc();
  }
  func_0x0001072b01dc();
  FUN_1072a8da4(&uStack_40);
  return;
}



/* Entry: 1072a8ca8; end: 1072a8cdb;  */

void FUN_1072a8ca8(long param_1,ulong param_2)

{
  long *unaff_x19;
  
  if (param_2 >> 0x3b == 0) {
    func_0x0001072b0654();
    FUN_107286940();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 0x20;
  }
  else {
    FUN_10728692c();
    func_0x0001072b02bc();
    param_1 = param_1 + 0x10;
    FUN_1072a8d08();
    unaff_x19[1] = param_1;
  }
  return;
}



/* Entry: 1072a8cdc; end: 1072a8d07;  */

void FUN_1072a8cdc(long param_1)

{
  long unaff_x19;
  
  func_0x0001072b02bc();
  param_1 = param_1 + 0x10;
  FUN_1072a8d08();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1072a8d08; end: 1072a8d1b;  */

void FUN_1072a8d08(void)

{
  FUN_1072a8d1c();
  return;
}



/* Entry: 1072a8d1c; end: 1072a8da3;  */

long FUN_1072a8d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_4;
  func_0x0001002a9e3c();
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  uStack_60 = param_1;
  lStack_40 = lVar1;
  lStack_38 = lVar1;
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x20) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_4,unaff_x21);
    *(undefined4 *)(param_4 + 0x18) = *(undefined4 *)(unaff_x21 + 0x18);
    param_4 = lStack_38 + 0x20;
    lStack_38 = param_4;
  }
  func_0x0001072aff04();
  FUN_107286980(&uStack_60);
  return param_4;
}



/* Entry: 1072a8da4; end: 1072a8dcb;  */

void FUN_1072a8da4(void)

{
  uint extraout_w8;
  
  func_0x0001072b040c();
  if ((extraout_w8 & 1) == 0) {
    func_0x000107286a6c();
  }
  return;
}



/* Entry: 1072a8dcc; end: 1072a8deb;  */

void FUN_1072a8dcc(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_1072a8dec();
  }
  return;
}



/* Entry: 1072a8dec; end: 1072a8edb;  */

void FUN_1072a8dec(long param_1)

{
  func_0x0001072afb28();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1072a8edc; end: 1072a8ef3;  */

void FUN_1072a8edc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072a8ef4; end: 1072a8f6b;  */

undefined8 FUN_1072a8ef4(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001078bd5d8(param_1 + 0x1c0);
  func_0x0001072a8f2c(param_1 + 0xd8);
  func_0x00010743f910(param_1 + 8);
  func_0x0001072afd84(param_1);
  FUN_1072a9868();
  return unaff_x19;
}



/* Entry: 1072a8f6c; end: 1072a8f6f;  */

undefined8 * FUN_1072a8f6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099a118;
  FUN_1072a9040(param_1 + 0x16);
  func_0x000107276ba4(param_1 + 1);
  return param_1;
}



/* Entry: 1072a8f70; end: 1072a8f83;  */

void FUN_1072a8f70(void)

{
  func_0x0001072a8f2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072a8f84; end: 1072a8feb;  */

int FUN_1072a8f84(long param_1)

{
  int iVar1;
  long unaff_x20;
  int iStack_34;
  long lStack_30;
  
  func_0x0001072afba4();
  lStack_30 = param_1 + 8;
  func_0x0001072aff04();
  FUN_107279a5c();
  iStack_34 = *(int *)(unaff_x20 + 0xd8);
  *(int *)(unaff_x20 + 0xd8) = iStack_34 + 1;
  FUN_1072a9104(unaff_x20 + 0xb0,&iStack_34);
  FUN_1072a9124();
  iVar1 = iStack_34;
  func_0x0001072b015c();
  return iVar1;
}


