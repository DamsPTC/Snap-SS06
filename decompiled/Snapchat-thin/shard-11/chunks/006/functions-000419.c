/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10879335c; end: 1087933a7;  */

void FUN_10879335c(void)

{
  long in_x3;
  
  if (in_x3 != 0) {
    func_0x000108796124();
    FUN_1087933a8();
    func_0x000108796244();
    FUN_1087933f4();
  }
  func_0x00010879647c();
  func_0x00010879358c();
  return;
}



/* Entry: 1087933a8; end: 1087933f3;  */

void FUN_1087933a8(long *param_1,ulong param_2)

{
  long *plVar1;
  long unaff_x19;
  
  if (param_2 < 0x492492492492493) {
    plVar1 = param_1 + 2;
    FUN_10879342c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 7);
  }
  else {
    FUN_108793420();
    func_0x0001087964ec();
    param_1 = param_1 + 2;
    func_0x00010879347c();
    *(long **)(unaff_x19 + 8) = param_1;
  }
  return;
}



/* Entry: 1087933f4; end: 10879341f;  */

void FUN_1087933f4(long param_1)

{
  long unaff_x19;
  
  func_0x0001087964ec();
  param_1 = param_1 + 0x10;
  func_0x00010879347c();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 108793420; end: 10879342b;  */

void FUN_108793420(void)

{
  func_0x000108795f64();
  FUN_10879344c();
  return;
}



/* Entry: 10879342c; end: 10879344b;  */

void FUN_10879342c(void)

{
  FUN_10879344c();
  return;
}



/* Entry: 10879344c; end: 10879348f;  */

void FUN_10879344c(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x492492492492493) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x38);
    return;
  }
  func_0x000104bd35f4();
  FUN_108793490();
  return;
}



/* Entry: 108793490; end: 1087934eb;  */

long FUN_108793490(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack_38;
  
  func_0x000108795f88();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x38) {
    func_0x000108796660();
    FUN_1087934ec();
    unaff_x20 = uStack_38 + 0x38;
    uStack_38 = unaff_x20;
  }
  func_0x00010879648c();
  FUN_108793520();
  return unaff_x20;
}



/* Entry: 1087934ec; end: 10879351f;  */

void FUN_1087934ec(void)

{
  func_0x0001087960cc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x000108796340();
  FUN_1086864ac();
  return;
}



/* Entry: 108793520; end: 10879354b;  */

void FUN_108793520(void)

{
  uint extraout_w8;
  
  func_0x000108796454();
  if ((extraout_w8 & 1) == 0) {
    FUN_10879354c();
  }
  return;
}



/* Entry: 10879354c; end: 10879355b;  */

void FUN_10879354c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x0001087962ec();
  while (param_3 != param_5) {
    param_3 = param_3 + -0x38;
    func_0x0001086a90b4();
  }
  return;
}



/* Entry: 10879355c; end: 1087935db;  */

void FUN_10879355c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x38;
    func_0x0001086a90b4();
  }
  return;
}



/* Entry: 1087935dc; end: 108793627;  */

void FUN_1087935dc(void)

{
  long in_x3;
  
  if (in_x3 != 0) {
    func_0x000108796124();
    FUN_108793628();
    func_0x000108796244();
    FUN_108793660();
  }
  func_0x00010879647c();
  func_0x0001087937dc();
  return;
}



/* Entry: 108793628; end: 10879365f;  */

void FUN_108793628(long *param_1,ulong param_2)

{
  long *plVar1;
  long unaff_x19;
  
  if (param_2 >> 0x3b == 0) {
    plVar1 = param_1 + 2;
    FUN_108793698();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 4);
  }
  else {
    FUN_10879368c();
    func_0x0001087964ec();
    param_1 = param_1 + 2;
    func_0x0001087936d4();
    *(long **)(unaff_x19 + 8) = param_1;
  }
  return;
}



/* Entry: 108793660; end: 10879368b;  */

void FUN_108793660(long param_1)

{
  long unaff_x19;
  
  func_0x0001087964ec();
  param_1 = param_1 + 0x10;
  func_0x0001087936d4();
  *(long *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10879368c; end: 108793697;  */

void FUN_10879368c(void)

{
  func_0x000108795f64();
  FUN_1087936b8();
  return;
}



/* Entry: 108793698; end: 1087936b7;  */

void FUN_108793698(void)

{
  FUN_1087936b8();
  return;
}



/* Entry: 1087936b8; end: 1087936e7;  */

void FUN_1087936b8(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  FUN_1087936e8();
  return;
}



/* Entry: 1087936e8; end: 108793743;  */

long FUN_1087936e8(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack_38;
  
  func_0x000108795f88();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x20) {
    func_0x000108796660();
    FUN_108793744();
    unaff_x20 = uStack_38 + 0x20;
    uStack_38 = unaff_x20;
  }
  func_0x00010879648c();
  FUN_10879376c();
  return unaff_x20;
}



/* Entry: 108793744; end: 10879376b;  */

undefined4 * FUN_108793744(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c27994(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 10879376c; end: 108793797;  */

void FUN_10879376c(void)

{
  uint extraout_w8;
  
  func_0x000108796454();
  if ((extraout_w8 & 1) == 0) {
    FUN_108793798();
  }
  return;
}



/* Entry: 108793798; end: 1087937a7;  */

void FUN_108793798(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x0001087962ec();
  for (; param_3 != param_5; param_3 = param_3 + -0x20) {
    func_0x000107c27914(param_3 + -0x18);
  }
  return;
}



/* Entry: 1087937a8; end: 108793803;  */

void FUN_1087937a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  for (; param_3 != param_5; param_3 = param_3 + -0x20) {
    func_0x000107c27914(param_3 + -0x18);
  }
  return;
}



/* Entry: 108793804; end: 10879383b;  */

void FUN_108793804(void)

{
  func_0x000108795ee0();
  func_0x000108793870();
  func_0x000108796690();
  func_0x00010879383c();
  return;
}



/* Entry: 10879383c; end: 1087938eb;  */

void FUN_10879383c(void)

{
  long unaff_x19;
  long *unaff_x20;
  
  func_0x000108795fb0();
  for (; unaff_x20 != (long *)unaff_x19; unaff_x20 = (long *)*unaff_x20) {
    func_0x00010879663c();
    func_0x0001087939c8();
  }
  return;
}



/* Entry: 1087938ec; end: 108793997;  */

void FUN_1087938ec(long param_1,long param_2)

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
    FUN_108793998(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    func_0x0001087966bc();
    FUN_1087939b0();
    func_0x0001087966e0();
    FUN_108793998();
    func_0x0001087961b8();
    uVar3 = extraout_x9;
    while (uVar1 = unaff_x19 == uVar3, !(bool)uVar1) {
      func_0x000108796604();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x00010879605c();
      func_0x000108796048();
      plVar4 = extraout_x9_01;
      while (*plVar4 != 0) {
        func_0x0001087966b0();
        lVar2 = extraout_x8;
        plVar4 = extraout_x12;
        uVar3 = extraout_x11;
        if ((bool)uVar1) {
          uVar5 = extraout_x13 & extraout_x10;
        }
        else {
          uVar5 = extraout_x13;
          if (unaff_x19 <= extraout_x13) {
            func_0x000108796788();
            lVar2 = extraout_x8_00;
            uVar3 = extraout_x11_00;
            plVar4 = extraout_x12_00;
            uVar5 = extraout_x13_00;
          }
        }
        uVar1 = uVar5 == uVar3;
        if (!(bool)uVar1) {
          if (*(long *)(lVar2 + uVar5 * 8) == 0) {
            func_0x000108796770();
            plVar4 = extraout_x12_01;
          }
          else {
            func_0x000108795f00();
            plVar4 = extraout_x9_02;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 108793998; end: 1087939af;  */

void FUN_108793998(long *param_1,long param_2)

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



/* Entry: 1087939b0; end: 1087939fb;  */

void FUN_1087939b0(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001087939e0();
  return;
}



/* Entry: 1087939fc; end: 108793b3b;  */

undefined1  [16] FUN_1087939fc(ulong param_1)

{
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar2;
  long extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong uVar3;
  ulong extraout_x10;
  ulong unaff_x20;
  long *unaff_x21;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  undefined1 auVar4 [16];
  
  func_0x000108796794();
  func_0x000108795f20();
  func_0x000108796648();
  if (unaff_x24 != 0) {
    func_0x000108796728();
    if ((bool)in_ZR) {
      func_0x0001087962c0();
    }
    else {
      func_0x00010879671c();
      if ((bool)in_CY) {
        func_0x000108796710();
      }
    }
    func_0x00010879666c();
    if (unaff_x21 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*unaff_x21;
          if (unaff_x21 == (long *)0x0) goto LAB_108793a84;
          func_0x0001087964e0();
          if (!(bool)in_ZR) break;
          func_0x00010879610c();
          if ((param_1 & 1) != 0) {
            uVar1 = 0;
            goto LAB_108793b24;
          }
        }
        if ((unaff_x24 & unaff_x26) == 0) {
          uVar3 = extraout_x8 & unaff_x26;
        }
        else {
          uVar3 = extraout_x8;
          if (unaff_x24 <= extraout_x8) {
            func_0x000108796704();
            uVar3 = extraout_x8_00;
          }
        }
        in_NG = (long)(uVar3 - unaff_x25) < 0;
        in_ZR = uVar3 == unaff_x25;
      } while ((bool)in_ZR);
    }
  }
LAB_108793a84:
  func_0x0001087960b8();
  FUN_108793b3c();
  func_0x000108796084();
  if ((unaff_x24 == 0) || (func_0x000108796280(), (bool)in_NG)) {
    func_0x000108796010();
    in_ZR = unaff_x24 == 3;
    func_0x000108795ff8();
    func_0x000108793870();
    func_0x000108796290();
    if ((bool)in_ZR) {
      func_0x0001087962c0();
    }
    else {
      in_ZR = unaff_x20 == unaff_x24;
      if (unaff_x24 <= unaff_x20) {
        func_0x0001087966ec();
      }
    }
  }
  func_0x000108796684();
  if (extraout_x9 == 0) {
    func_0x000108795ec0();
    if (extraout_x9_00 != 0) {
      func_0x000108796270();
      lVar2 = extraout_x8_01;
      if ((bool)in_ZR) {
        uVar3 = extraout_x9_01 & extraout_x10;
      }
      else {
        uVar3 = extraout_x9_01;
        if (unaff_x24 <= extraout_x9_01) {
          func_0x0001087966d4();
          lVar2 = extraout_x8_02;
          uVar3 = extraout_x9_02;
        }
      }
      *(long **)(lVar2 + uVar3 * 8) = unaff_x21;
    }
  }
  else {
    func_0x0001087960a4();
  }
  func_0x000108795fc0();
  FUN_108793ba8();
  uVar1 = 1;
LAB_108793b24:
  auVar4._8_8_ = uVar1;
  auVar4._0_8_ = unaff_x21;
  return auVar4;
}



/* Entry: 108793b3c; end: 108793b7b;  */

void FUN_108793b3c(void)

{
  func_0x000108796070();
  __Znwm(0x80);
  func_0x000108796260();
  FUN_108793b7c();
  func_0x0001087966f8();
  return;
}



/* Entry: 108793b7c; end: 108793ba7;  */

void FUN_108793b7c(void)

{
  func_0x000108795f7c();
  func_0x000108796340();
  FUN_10871bf30();
  return;
}



/* Entry: 108793ba8; end: 108793bc7;  */

void FUN_108793ba8(void)

{
  func_0x00010879674c();
  FUN_108793bc8();
  return;
}



/* Entry: 108793bc8; end: 108793bdf;  */

void FUN_108793bc8(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x000108796214(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x0001086a8f3c(unaff_x19 + 0x10);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108793be0; end: 108793c17;  */

void FUN_108793be0(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x000108796214();
  if ((bool)in_ZR) {
    func_0x0001086a8f3c(unaff_x19 + 0x10);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108793c18; end: 108793c4f;  */

void FUN_108793c18(void)

{
  func_0x000108795ee0();
  func_0x000108793c84();
  func_0x000108796690();
  func_0x000108793c50();
  return;
}



/* Entry: 108793c50; end: 108793cff;  */

void FUN_108793c50(void)

{
  long unaff_x19;
  long *unaff_x20;
  
  func_0x000108795fb0();
  for (; unaff_x20 != (long *)unaff_x19; unaff_x20 = (long *)*unaff_x20) {
    func_0x00010879663c();
    func_0x000108793ddc();
  }
  return;
}



/* Entry: 108793d00; end: 108793dab;  */

void FUN_108793d00(long param_1,long param_2)

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
    FUN_108793dac(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    func_0x0001087966bc();
    FUN_108793dc4();
    func_0x0001087966e0();
    FUN_108793dac();
    func_0x0001087961b8();
    uVar3 = extraout_x9;
    while (uVar1 = unaff_x19 == uVar3, !(bool)uVar1) {
      func_0x000108796604();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x00010879605c();
      func_0x000108796048();
      plVar4 = extraout_x9_01;
      while (*plVar4 != 0) {
        func_0x0001087966b0();
        lVar2 = extraout_x8;
        plVar4 = extraout_x12;
        uVar3 = extraout_x11;
        if ((bool)uVar1) {
          uVar5 = extraout_x13 & extraout_x10;
        }
        else {
          uVar5 = extraout_x13;
          if (unaff_x19 <= extraout_x13) {
            func_0x000108796788();
            lVar2 = extraout_x8_00;
            uVar3 = extraout_x11_00;
            plVar4 = extraout_x12_00;
            uVar5 = extraout_x13_00;
          }
        }
        uVar1 = uVar5 == uVar3;
        if (!(bool)uVar1) {
          if (*(long *)(lVar2 + uVar5 * 8) == 0) {
            func_0x000108796770();
            plVar4 = extraout_x12_01;
          }
          else {
            func_0x000108795f00();
            plVar4 = extraout_x9_02;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 108793dac; end: 108793dc3;  */

void FUN_108793dac(long *param_1,long param_2)

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



/* Entry: 108793dc4; end: 108793e0f;  */

void FUN_108793dc4(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000108793df4();
  return;
}



/* Entry: 108793e10; end: 108793f4f;  */

undefined1  [16] FUN_108793e10(ulong param_1)

{
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar2;
  long extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong uVar3;
  ulong extraout_x10;
  ulong unaff_x20;
  long *unaff_x21;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  undefined1 auVar4 [16];
  
  func_0x000108796794();
  func_0x000108795f20();
  func_0x000108796648();
  if (unaff_x24 != 0) {
    func_0x000108796728();
    if ((bool)in_ZR) {
      func_0x0001087962c0();
    }
    else {
      func_0x00010879671c();
      if ((bool)in_CY) {
        func_0x000108796710();
      }
    }
    func_0x00010879666c();
    if (unaff_x21 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*unaff_x21;
          if (unaff_x21 == (long *)0x0) goto LAB_108793e98;
          func_0x0001087964e0();
          if (!(bool)in_ZR) break;
          func_0x00010879610c();
          if ((param_1 & 1) != 0) {
            uVar1 = 0;
            goto LAB_108793f38;
          }
        }
        if ((unaff_x24 & unaff_x26) == 0) {
          uVar3 = extraout_x8 & unaff_x26;
        }
        else {
          uVar3 = extraout_x8;
          if (unaff_x24 <= extraout_x8) {
            func_0x000108796704();
            uVar3 = extraout_x8_00;
          }
        }
        in_NG = (long)(uVar3 - unaff_x25) < 0;
        in_ZR = uVar3 == unaff_x25;
      } while ((bool)in_ZR);
    }
  }
LAB_108793e98:
  func_0x0001087960b8();
  FUN_108793f50();
  func_0x000108796084();
  if ((unaff_x24 == 0) || (func_0x000108796280(), (bool)in_NG)) {
    func_0x000108796010();
    in_ZR = unaff_x24 == 3;
    func_0x000108795ff8();
    func_0x000108793c84();
    func_0x000108796290();
    if ((bool)in_ZR) {
      func_0x0001087962c0();
    }
    else {
      in_ZR = unaff_x20 == unaff_x24;
      if (unaff_x24 <= unaff_x20) {
        func_0x0001087966ec();
      }
    }
  }
  func_0x000108796684();
  if (extraout_x9 == 0) {
    func_0x000108795ec0();
    if (extraout_x9_00 != 0) {
      func_0x000108796270();
      lVar2 = extraout_x8_01;
      if ((bool)in_ZR) {
        uVar3 = extraout_x9_01 & extraout_x10;
      }
      else {
        uVar3 = extraout_x9_01;
        if (unaff_x24 <= extraout_x9_01) {
          func_0x0001087966d4();
          lVar2 = extraout_x8_02;
          uVar3 = extraout_x9_02;
        }
      }
      *(long **)(lVar2 + uVar3 * 8) = unaff_x21;
    }
  }
  else {
    func_0x0001087960a4();
  }
  func_0x000108795fc0();
  FUN_108793fbc();
  uVar1 = 1;
LAB_108793f38:
  auVar4._8_8_ = uVar1;
  auVar4._0_8_ = unaff_x21;
  return auVar4;
}



/* Entry: 108793f50; end: 108793f8f;  */

void FUN_108793f50(void)

{
  func_0x000108796070();
  __Znwm(0x40);
  func_0x000108796260();
  FUN_108793f90();
  func_0x0001087966f8();
  return;
}



/* Entry: 108793f90; end: 108793fbb;  */

void FUN_108793f90(void)

{
  func_0x000108795f7c();
  func_0x000108796340();
  func_0x0001086cf8e0();
  return;
}



/* Entry: 108793fbc; end: 108793fdb;  */

void FUN_108793fbc(void)

{
  func_0x00010879674c();
  FUN_108793fdc();
  return;
}



/* Entry: 108793fdc; end: 108793ff3;  */

void FUN_108793fdc(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x000108796214(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x0001086a8e90(unaff_x19 + 0x10);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108793ff4; end: 10879402b;  */

void FUN_108793ff4(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x000108796214();
  if ((bool)in_ZR) {
    func_0x0001086a8e90(unaff_x19 + 0x10);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10879402c; end: 108794063;  */

void FUN_10879402c(void)

{
  func_0x000108795ee0();
  func_0x000108794098();
  func_0x000108796690();
  func_0x000108794064();
  return;
}



/* Entry: 108794064; end: 108794113;  */

void FUN_108794064(void)

{
  long unaff_x19;
  long *unaff_x20;
  
  func_0x000108795fb0();
  for (; unaff_x20 != (long *)unaff_x19; unaff_x20 = (long *)*unaff_x20) {
    func_0x00010879663c();
    func_0x0001087941f0();
  }
  return;
}



/* Entry: 108794114; end: 1087941bf;  */

void FUN_108794114(long param_1,long param_2)

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
    FUN_1087941c0(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    func_0x0001087966bc();
    FUN_1087941d8();
    func_0x0001087966e0();
    FUN_1087941c0();
    func_0x0001087961b8();
    uVar3 = extraout_x9;
    while (uVar1 = unaff_x19 == uVar3, !(bool)uVar1) {
      func_0x000108796604();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x00010879605c();
      func_0x000108796048();
      plVar4 = extraout_x9_01;
      while (*plVar4 != 0) {
        func_0x0001087966b0();
        lVar2 = extraout_x8;
        plVar4 = extraout_x12;
        uVar3 = extraout_x11;
        if ((bool)uVar1) {
          uVar5 = extraout_x13 & extraout_x10;
        }
        else {
          uVar5 = extraout_x13;
          if (unaff_x19 <= extraout_x13) {
            func_0x000108796788();
            lVar2 = extraout_x8_00;
            uVar3 = extraout_x11_00;
            plVar4 = extraout_x12_00;
            uVar5 = extraout_x13_00;
          }
        }
        uVar1 = uVar5 == uVar3;
        if (!(bool)uVar1) {
          if (*(long *)(lVar2 + uVar5 * 8) == 0) {
            func_0x000108796770();
            plVar4 = extraout_x12_01;
          }
          else {
            func_0x000108795f00();
            plVar4 = extraout_x9_02;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1087941c0; end: 1087941d7;  */

void FUN_1087941c0(long *param_1,long param_2)

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



/* Entry: 1087941d8; end: 108794223;  */

void FUN_1087941d8(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000108794208();
  return;
}



/* Entry: 108794224; end: 108794363;  */

undefined1  [16] FUN_108794224(ulong param_1)

{
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar2;
  long extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong uVar3;
  ulong extraout_x10;
  ulong unaff_x20;
  long *unaff_x21;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  undefined1 auVar4 [16];
  
  func_0x000108796794();
  func_0x000108795f20();
  func_0x000108796648();
  if (unaff_x24 != 0) {
    func_0x000108796728();
    if ((bool)in_ZR) {
      func_0x0001087962c0();
    }
    else {
      func_0x00010879671c();
      if ((bool)in_CY) {
        func_0x000108796710();
      }
    }
    func_0x00010879666c();
    if (unaff_x21 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*unaff_x21;
          if (unaff_x21 == (long *)0x0) goto LAB_1087942ac;
          func_0x0001087964e0();
          if (!(bool)in_ZR) break;
          func_0x00010879610c();
          if ((param_1 & 1) != 0) {
            uVar1 = 0;
            goto LAB_10879434c;
          }
        }
        if ((unaff_x24 & unaff_x26) == 0) {
          uVar3 = extraout_x8 & unaff_x26;
        }
        else {
          uVar3 = extraout_x8;
          if (unaff_x24 <= extraout_x8) {
            func_0x000108796704();
            uVar3 = extraout_x8_00;
          }
        }
        in_NG = (long)(uVar3 - unaff_x25) < 0;
        in_ZR = uVar3 == unaff_x25;
      } while ((bool)in_ZR);
    }
  }
LAB_1087942ac:
  func_0x0001087960b8();
  FUN_108794364();
  func_0x000108796084();
  if ((unaff_x24 == 0) || (func_0x000108796280(), (bool)in_NG)) {
    func_0x000108796010();
    in_ZR = unaff_x24 == 3;
    func_0x000108795ff8();
    func_0x000108794098();
    func_0x000108796290();
    if ((bool)in_ZR) {
      func_0x0001087962c0();
    }
    else {
      in_ZR = unaff_x20 == unaff_x24;
      if (unaff_x24 <= unaff_x20) {
        func_0x0001087966ec();
      }
    }
  }
  func_0x000108796684();
  if (extraout_x9 == 0) {
    func_0x000108795ec0();
    if (extraout_x9_00 != 0) {
      func_0x000108796270();
      lVar2 = extraout_x8_01;
      if ((bool)in_ZR) {
        uVar3 = extraout_x9_01 & extraout_x10;
      }
      else {
        uVar3 = extraout_x9_01;
        if (unaff_x24 <= extraout_x9_01) {
          func_0x0001087966d4();
          lVar2 = extraout_x8_02;
          uVar3 = extraout_x9_02;
        }
      }
      *(long **)(lVar2 + uVar3 * 8) = unaff_x21;
    }
  }
  else {
    func_0x0001087960a4();
  }
  func_0x000108795fc0();
  FUN_1087943d0();
  uVar1 = 1;
LAB_10879434c:
  auVar4._8_8_ = uVar1;
  auVar4._0_8_ = unaff_x21;
  return auVar4;
}



/* Entry: 108794364; end: 1087943a3;  */

void FUN_108794364(void)

{
  func_0x000108796070();
  __Znwm(0x40);
  func_0x000108796260();
  FUN_1087943a4();
  func_0x0001087966f8();
  return;
}



/* Entry: 1087943a4; end: 1087943cf;  */

void FUN_1087943a4(void)

{
  func_0x000108795f7c();
  func_0x000108796340();
  func_0x000108684e9c();
  return;
}



/* Entry: 1087943d0; end: 1087943ef;  */

void FUN_1087943d0(void)

{
  func_0x00010879674c();
  FUN_1087943f0();
  return;
}



/* Entry: 1087943f0; end: 108794407;  */

void FUN_1087943f0(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x000108796214(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x0001086a8de4(unaff_x19 + 0x10);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108794408; end: 10879443f;  */

void FUN_108794408(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x000108796214();
  if ((bool)in_ZR) {
    func_0x0001086a8de4(unaff_x19 + 0x10);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108794440; end: 10879446f;  */

void FUN_108794440(long param_1)

{
  func_0x000108796460();
  *(undefined1 *)(param_1 + 0x58) = 0;
  FUN_108794470();
  return;
}



/* Entry: 108794470; end: 108794483;  */

void FUN_108794470(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_1087944a0();
    *(undefined1 *)(param_1 + 0x58) = 1;
    return;
  }
  return;
}



/* Entry: 108794484; end: 10879449f;  */

void FUN_108794484(long param_1)

{
  FUN_1087944a0();
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}



/* Entry: 1087944a0; end: 10879465b;  */

void FUN_1087944a0(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c334e4();
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000107c279a0(param_1 + 3,param_2 + 3);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x44);
  *(undefined8 *)(unaff_x20 + 0x4c) = *(undefined8 *)(unaff_x19 + 0x4c);
  *(undefined8 *)(unaff_x20 + 0x44) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar1;
  return;
}



/* Entry: 10879465c; end: 108794673;  */

void FUN_10879465c(undefined8 *param_1)

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



/* Entry: 108794674; end: 108794793;  */

long FUN_108794674(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  func_0x000107c27940(param_1 + 8);
  func_0x000107c27950(param_1 + 8,&uStack_30);
  return param_1;
}



/* Entry: 108794794; end: 1087947b7;  */

undefined8 FUN_108794794(undefined8 param_1)

{
  FUN_1087947b8();
  return param_1;
}



/* Entry: 1087947b8; end: 1087947df;  */

void FUN_1087947b8(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 != *(char *)(param_2 + 3)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 3) == '\x01') {
        func_0x000104bee5a8();
        *(undefined1 *)(param_1 + 3) = 0;
      }
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c334e4();
    func_0x000108794824();
    func_0x000108796404();
    return;
  }
  return;
}



/* Entry: 1087947e0; end: 108794803;  */

void FUN_1087947e0(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000104bee5a8();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 108794804; end: 10879485b;  */

void FUN_108794804(void)

{
  func_0x000107c334e4();
  func_0x000108794824();
  func_0x000108796404();
  return;
}



/* Entry: 10879485c; end: 10879487f;  */

undefined8 FUN_10879485c(undefined8 param_1)

{
  FUN_108794880();
  return param_1;
}



/* Entry: 108794880; end: 1087948a7;  */

void FUN_108794880(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 != *(char *)(param_2 + 3)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 3) == '\x01') {
        func_0x000104bee478();
        *(undefined1 *)(param_1 + 3) = 0;
      }
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c334e4();
    func_0x0001087948ec();
    func_0x000108796404();
    return;
  }
  return;
}



/* Entry: 1087948a8; end: 1087948cb;  */

void FUN_1087948a8(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000104bee478();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 1087948cc; end: 108794923;  */

void FUN_1087948cc(void)

{
  func_0x000107c334e4();
  func_0x0001087948ec();
  func_0x000108796404();
  return;
}



/* Entry: 108794924; end: 1087949ab;  */

long * FUN_108794924(long *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if ((*(byte *)(param_1 + 0xb) & 1) == 0) {
    uVar1 = *(undefined8 *)(*param_1 + 8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_50,*param_1 + 0x58);
    func_0x000107c27f54(auStack_38,&UNK_10f4ba798,auStack_50);
    func_0x00010bcc7444(uVar1,0x65,auStack_38);
    func_0x000108796548();
    func_0x000108796170();
  }
  return param_1 + 1;
}



/* Entry: 1087949ac; end: 108794a1f;  */

void FUN_1087949ac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_60 = param_1[2];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uStack_50 = param_1[4];
  uStack_58 = param_1[3];
  uStack_40 = param_1[6];
  uStack_48 = param_1[5];
  uStack_30 = param_1[8];
  uStack_38 = param_1[7];
  uStack_28 = *(undefined4 *)(param_1 + 9);
  FUN_108791988();
  FUN_108791988(param_2,&uStack_70);
  func_0x000107c27914(&uStack_70);
  return;
}



/* Entry: 108794a20; end: 108794a3b;  */

void FUN_108794a20(long param_1)

{
  FUN_1087919e4();
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}



/* Entry: 108794a3c; end: 108794aa3;  */

void FUN_108794a3c(void)

{
  int iVar1;
  long extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  long unaff_x19;
  undefined1 auStack_30 [16];
  
  func_0x0001087960cc();
  func_0x000107c28150();
  iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x10);
  FUN_108794aa4();
  if (iVar1 != 0) {
    func_0x00010879661c();
    if (extraout_x8 != 0) {
      do {
        func_0x000108796160();
      } while (extraout_w10 != 0);
    }
    func_0x0001087962b4();
    (*extraout_x8_00)();
    func_0x000107c27e74(auStack_30);
  }
  return;
}



/* Entry: 108794aa4; end: 108794b43;  */

long * FUN_108794aa4(long param_1)

{
  undefined1 uVar1;
  int extraout_w10;
  long unaff_x19;
  long *plVar2;
  long unaff_x21;
  long lVar3;
  undefined8 uStack_38;
  
  func_0x00010879630c();
  func_0x000108796038();
  func_0x000108796570();
  lVar3 = *(long *)(unaff_x19 + 0x70);
  if (*(long *)(unaff_x21 + 8) != 0) {
    do {
      func_0x000108796160();
    } while (extraout_w10 != 0);
  }
  func_0x0001087965f0();
  uVar1 = lVar3 == 0;
  plVar2 = (long *)(ulong)(byte)uVar1;
  func_0x000108795fe8();
  func_0x00010879643c();
  func_0x000108795f50(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000108795fe8();
    func_0x00010879643c();
    func_0x000108796030();
    plVar2 = *(long **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000108794b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return plVar2;
  }
  return plVar2;
}



/* Entry: 108794b44; end: 108794b8f;  */

void FUN_108794b44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108794b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  return;
}



/* Entry: 108794b90; end: 108794bf7;  */

void FUN_108794b90(void)

{
  int iVar1;
  long extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  long unaff_x19;
  undefined1 auStack_30 [16];
  
  func_0x0001087960cc();
  func_0x000107c28150();
  iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x10);
  FUN_108794bf8();
  if (iVar1 != 0) {
    func_0x00010879661c();
    if (extraout_x8 != 0) {
      do {
        func_0x000108796160();
      } while (extraout_w10 != 0);
    }
    func_0x0001087962b4();
    (*extraout_x8_00)();
    func_0x000107c27e74(auStack_30);
  }
  return;
}



/* Entry: 108794bf8; end: 108794c7b;  */

undefined8 * FUN_108794bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 *puVar3;
  long lVar4;
  undefined8 auStack_70 [6];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = auStack_70;
  func_0x00010879630c();
  func_0x000108796038();
  func_0x000108796570();
  lVar4 = *(long *)(unaff_x19 + 0x70);
  FUN_108794c7c();
  uStack_40 = param_3;
  func_0x0001087965f0();
  uVar1 = lVar4 == 0;
  puVar3 = (undefined8 *)(ulong)(byte)uVar1;
  func_0x000108795fe8();
  func_0x00010879643c();
  func_0x000108795f50(uStack_38);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x000108795fe8();
  func_0x00010879643c();
  func_0x000108796030();
  *puVar2 = FUN_108794ca8;
  FUN_108794cc0(puVar2 + 1);
  return puVar2;
}



/* Entry: 108794c7c; end: 108794ca7;  */

undefined8 * FUN_108794c7c(undefined8 *param_1)

{
  *param_1 = FUN_108794ca8;
  FUN_108794cc0(param_1 + 1);
  return param_1;
}



/* Entry: 108794ca8; end: 108794cbf;  */

void FUN_108794ca8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108794cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
            (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20));
  return;
}



/* Entry: 108794cc0; end: 108794ceb;  */

undefined8 * FUN_108794cc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6fbc8;
  FUN_108794d10(param_1 + 1);
  return param_1;
}



/* Entry: 108794cec; end: 108794cf3;  */

void FUN_108794cec(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010054ffe4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 108794cf4; end: 108794d0f;  */

void FUN_108794cf4(undefined8 param_1,long param_2)

{
  FUN_108794cc0(param_1,param_2 + 8);
  return;
}



/* Entry: 108794d10; end: 108794d3f;  */

void FUN_108794d10(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000108796160();
    } while (extraout_w10 != 0);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return;
}



/* Entry: 108794d40; end: 108794d67;  */

long FUN_108794d40(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108794d68; end: 108794d77;  */

void FUN_108794d68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6fbf0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108794d78; end: 108794d8b;  */

void FUN_108794d78(void)

{
  FUN_108794d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108794d8c; end: 108794d9b;  */

void FUN_108794d8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108794d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108794d9c; end: 108794de7;  */

undefined8 * FUN_108794d9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6fc40;
  func_0x000107c298fc(param_1 + 0x8e);
  FUN_108791afc(param_1 + 6);
  func_0x000107c27914(param_1 + 3);
  func_0x000104be3970(param_1 + 1);
  return param_1;
}



/* Entry: 108794de8; end: 108794dfb;  */

void FUN_108794de8(void)

{
  FUN_108794d9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108794dfc; end: 108794e0b;  */

/* WARNING: Removing unreachable block (ram,0x000108791ee8) */
/* WARNING: Removing unreachable block (ram,0x000108791ef4) */

void FUN_108794dfc(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long lVar3;
  long *plStack_6a8;
  undefined1 uStack_6a0;
  long lStack_690;
  long lStack_688;
  long lStack_680;
  undefined1 auStack_678 [424];
  byte bStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  undefined1 auStack_4b8 [664];
  undefined1 auStack_220 [424];
  undefined1 uStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  undefined8 uStack_48;
  
  lVar3 = param_1;
  func_0x000108796038();
  lVar3 = *(long *)(lVar3 + 0x470);
  uStack_48 = extraout_x8;
  func_0x0001087962cc();
  FUN_108862cf0(auStack_4b8);
  func_0x000107c28998(auStack_678,auStack_4b8);
  func_0x000107c28948(auStack_4b8);
  if ((bStack_4d0 & 1) == 0) {
    FUN_10878f774(*(long *)(lVar3 + 0x10) + 0x10,param_1 + 8);
    auStack_4b8[0] = 0;
    uStack_78 = 0;
    FUN_10878f7cc(&plStack_70,auStack_4b8,1);
    func_0x0001087963fc();
    func_0x000108796764();
    func_0x0001087965cc();
    func_0x000108796678();
    func_0x00010879634c();
    func_0x0001087963f4();
    func_0x0001087963b0();
  }
  else {
    FUN_108791a9c(auStack_4b8,param_1 + 0x30);
    puVar2 = auStack_678;
    func_0x000107c28a9c(auStack_220);
    lStack_690 = 0;
    lStack_688 = 0;
    lStack_680 = 0;
    plStack_6a8 = &lStack_690;
    uStack_6a0 = 0;
    lVar1 = 1;
    FUN_108791b30();
    plStack_70 = &lStack_680;
    lStack_680 = lVar1 + (long)puVar2 * 0x440;
    plStack_68 = &lStack_4c8;
    plStack_60 = &lStack_4c0;
    uStack_58 = 0;
    lStack_690 = lVar1;
    lStack_688 = lVar1;
    lStack_4c8 = lVar1;
    lStack_4c0 = lVar1;
    FUN_108791b70();
    lVar1 = lStack_4c0 + 0x440;
    uStack_58 = 1;
    lStack_4c0 = lVar1;
    FUN_108791ba8(&plStack_70);
    uStack_6a0 = 1;
    lStack_688 = lVar1;
    func_0x000108791be8(&plStack_6a8);
    FUN_108791afc(auStack_4b8);
    func_0x000107c27994(&plStack_70,param_1 + 0x18);
    func_0x00010868c9c4(auStack_4b8,&plStack_70,1);
    func_0x0001087966c8();
    FUN_10878f930(lVar3,auStack_4b8,&lStack_690,&plStack_6a8);
    func_0x000108791c84(&plStack_6a8);
    func_0x000107c27a04(auStack_4b8);
    func_0x000107c27914(&plStack_70);
    in_ZR = 1;
    FUN_10878f97c(lVar3,0,1,param_1 + 8,0);
    FUN_108791b70(auStack_4b8,lStack_690);
    uStack_78 = 1;
    FUN_10878f7cc(&plStack_70,auStack_4b8,1);
    func_0x0001087963fc();
    func_0x000108796764();
    func_0x0001087965cc();
    func_0x000108796678();
    func_0x00010879634c();
    func_0x0001087963f4();
    func_0x0001087963b0();
    func_0x000108791d1c(&lStack_690);
  }
  func_0x000107c288dc(auStack_678);
  func_0x000108795f50(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001087963f4();
    func_0x0001087963b0();
    func_0x000108791d1c(&lStack_690);
    func_0x000107c288dc(auStack_678);
    do {
      func_0x000108796028();
      func_0x000107c28948(auStack_4b8);
    } while( true );
  }
  return;
}



/* Entry: 108794e0c; end: 108794ee3;  */

long FUN_108794e0c(long *param_1,ulong param_2)

{
  uint uVar1;
  undefined1 uVar2;
  long lVar3;
  ulong extraout_x8;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar7 = param_1[1];
  if ((uVar7 != 0) && (param_1[3] != 0)) {
    uVar9 = param_2;
    FUN_108848654();
    uVar8 = uVar7 - 1;
    if ((uVar7 & uVar8) == 0) {
      uVar9 = uVar9 & uVar8;
      uVar2 = true;
    }
    else {
      uVar2 = uVar9 == uVar7;
      if (uVar7 <= uVar9) {
        uVar1 = 0;
        uVar6 = (uint)uVar7;
        if (uVar6 != 0) {
          uVar1 = (uint)uVar9 / uVar6;
        }
        uVar9 = (ulong)((uint)uVar9 - uVar1 * uVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + uVar9 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        func_0x0001087964e0();
        if (!(bool)uVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x000107c28078(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if ((uVar7 & uVar8) == 0) {
        uVar4 = extraout_x8 & uVar8;
      }
      else {
        uVar4 = extraout_x8;
        if (uVar7 <= extraout_x8) {
          uVar4 = 0;
          if (uVar7 != 0) {
            uVar4 = extraout_x8 / uVar7;
          }
          uVar4 = extraout_x8 - uVar4 * uVar7;
        }
      }
      uVar2 = 1;
    } while (uVar4 == uVar9);
  }
  return 0;
}



/* Entry: 108794ee4; end: 108794f83;  */

void FUN_108794ee4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  code *extraout_x8;
  
  puVar1 = (undefined8 *)0x70;
  __Znwm();
  *puVar1 = FUN_108795cc0;
  puVar1[1] = FUN_108795e2c;
  FUN_10879571c(puVar1 + 4,param_2);
  func_0x000107c27f94(puVar1 + 2);
  func_0x000107c287c4(param_1,puVar1 + 2);
  puVar1[0xb] = param_3;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  func_0x0001087962b4(*param_3);
  (*extraout_x8)();
  return;
}



/* Entry: 108794f84; end: 108795497;  */

/* WARNING: Removing unreachable block (ram,0x0001087952b0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_108794f84(undefined8 param_1,undefined8 *****param_2)

{
  undefined8 ****ppppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 ******ppppppuVar4;
  undefined8 ******ppppppuVar5;
  undefined8 ******ppppppuVar6;
  undefined8 *******pppppppuVar7;
  undefined8 ****ppppuVar8;
  long **pplVar9;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  undefined8 *****pppppuVar10;
  long *plVar11;
  long extraout_x8;
  code *extraout_x8_00;
  ulong uVar12;
  ulong extraout_x8_01;
  undefined8 *****pppppuVar13;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 ****ppppuVar14;
  undefined8 ******ppppppuVar15;
  undefined8 *******pppppppuVar16;
  long lVar17;
  undefined8 ******ppppppuVar18;
  undefined8 *****pppppuVar19;
  undefined4 uStack_94;
  undefined8 *******pppppppuStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined8 *******pppppppuStack_78;
  undefined8 ******ppppppuStack_70;
  undefined8 *******pppppppuStack_68;
  
  pppppuVar19 = (undefined8 *****)*param_2;
  ppppppuVar4 = (undefined8 ******)0x60;
  __Znwm();
  *ppppppuVar4 = (undefined8 *****)FUN_108795b58;
  ppppppuVar4[1] = (undefined8 *****)FUN_108795c90;
  ppppppuVar4[9] = param_2;
  ppppppuVar4[10] = pppppuVar19;
  func_0x000107c27f94(ppppppuVar4 + 2);
  func_0x000107c287c4(param_1,ppppppuVar4 + 2);
  ppppppuVar15 = ppppppuVar4 + 4;
  *ppppppuVar15 = (undefined8 *****)0x0;
  ppppppuVar18 = ppppppuVar4 + 6;
  *ppppppuVar18 = (undefined8 *****)0x0;
  ppppppuVar4[5] = (undefined8 *****)0x0;
  ppppuVar1 = param_2[2];
  for (ppppuVar14 = param_2[1]; ppppuVar14 != ppppuVar1; ppppuVar14 = ppppuVar14 + 3) {
    ppppppuVar5 = (undefined8 ******)(pppppuVar19 + 3);
    ppppuVar8 = ppppuVar14;
    FUN_108794e0c();
    if (ppppppuVar5 == (undefined8 ******)0x0) {
      uStack_94 = 0;
      FUN_1087955c4(&pppppppuStack_90);
      pplVar9 = &plStack_88;
      FUN_108795610(plStack_88,pplVar9,&uStack_94);
      pppppppuStack_68 = pppppppuStack_90;
      pppppppuStack_90 = (undefined8 *******)0x0;
      pppppppuVar7 = &pppppppuStack_90;
      func_0x000107c27fec();
      pppppuVar10 = ppppppuVar4[5];
      if (pppppuVar10 < ppppppuVar4[6]) {
        pppppuVar13 = pppppuVar10 + 1;
        *pppppuVar10 = pppppppuStack_68;
        pppppppuStack_68 = (undefined8 *******)0x0;
      }
      else {
        func_0x000108796558((long)pppppuVar10 - (long)*ppppppuVar15 >> 3);
        pppppuVar10 = ppppppuVar4[4];
        pppppuVar13 = ppppppuVar4[5];
        if (pppppppuVar7 == (undefined8 *******)0x0) {
          pplVar9 = (long **)0x0;
          ppppppuStack_70 = ppppppuVar18;
        }
        else {
          ppppppuStack_70 = ppppppuVar18;
          FUN_108795550();
        }
        plStack_88 = (long *)((long)pppppppuVar7 + ((long)pppppuVar13 - (long)pppppuVar10));
        pppppppuStack_78 = pppppppuVar7 + (long)pplVar9;
        plVar11 = plStack_88 + 1;
        pppppppuStack_90 = pppppppuVar7;
        *plStack_88 = (long)pppppppuStack_68;
        pppppppuStack_68 = (undefined8 *******)0x0;
        func_0x000108796444(plVar11);
        pppppuVar13 = ppppppuVar4[5];
        func_0x000108795580(&pppppppuStack_90);
      }
      ppppppuVar4[5] = pppppuVar13;
      func_0x000107c27f9c(&pppppppuStack_68);
    }
    else {
      pppppuVar10 = ppppppuVar4[5];
      if (pppppuVar10 < ppppppuVar4[6]) {
        pppppuVar13 = ppppppuVar5[6];
        *pppppuVar10 = pppppuVar13;
        if (pppppuVar13 != (undefined8 *****)0x0) {
          pppppuVar13 = pppppuVar13 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppppuVar13,0x10);
            if (bVar3) {
              *pppppuVar13 = (undefined8 ****)((long)*pppppuVar13 + 4);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        pppppuVar10 = pppppuVar10 + 1;
      }
      else {
        ppppppuVar6 = ppppppuVar5;
        func_0x000108796558((long)pppppuVar10 - (long)*ppppppuVar15 >> 3);
        pppppuVar10 = ppppppuVar4[4];
        pppppuVar13 = ppppppuVar4[5];
        if (ppppppuVar6 == (undefined8 ******)0x0) {
          ppppuVar8 = (undefined8 ****)0x0;
          ppppppuStack_70 = ppppppuVar18;
        }
        else {
          ppppppuStack_70 = ppppppuVar18;
          FUN_108795550();
        }
        plStack_88 = (long *)((long)ppppppuVar6 + ((long)pppppuVar13 - (long)pppppuVar10));
        pppppppuStack_78 = (undefined8 *******)(ppppppuVar6 + (long)ppppuVar8);
        pppppuVar10 = ppppppuVar5[6];
        *plStack_88 = (long)pppppuVar10;
        pppppppuStack_90 = (undefined8 *******)ppppppuVar6;
        plStack_80 = plStack_88;
        if (pppppuVar10 != (undefined8 *****)0x0) {
          do {
            func_0x00010879649c();
          } while (extraout_w10 != 0);
        }
        func_0x000108796444(plStack_80 + 1);
        pppppuVar10 = ppppppuVar4[5];
        func_0x000108795580(&pppppppuStack_90);
      }
      ppppppuVar4[5] = pppppuVar10;
      pppppppuStack_90 = (undefined8 *******)ppppppuVar5[5];
      if (pppppppuStack_90 != (undefined8 *******)0x0) {
        pppppppuVar7 = pppppppuStack_90 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppppppuVar7,0x10);
          if (bVar3) {
            *pppppppuVar7 = *pppppppuVar7 + 0x40000000;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      pppppuVar10 = ppppppuVar5[7];
      *(undefined1 *)((long)pppppuVar10 + 0x3c) = 1;
      *(undefined4 *)(pppppuVar10 + 7) = 0;
      func_0x000107c28850(&pppppppuStack_90);
      func_0x000107c27f98(&pppppppuStack_90);
    }
  }
  pppppuVar19 = ppppppuVar4[4];
  pppppuVar10 = ppppppuVar4[5];
  if (pppppuVar19 == pppppuVar10) {
    bVar3 = false;
    pppppuVar10 = pppppuVar19;
  }
  else {
    lVar17 = (long)pppppuVar10 - (long)pppppuVar19 >> 3;
    FUN_10865b428(&pppppppuStack_90);
    FUN_10865b464(&pppppppuStack_68,lVar17);
    pppppppuVar7 = pppppppuStack_68;
    pppppppuStack_68 = (undefined8 *******)0x0;
    FUN_10865b56c(plStack_80 + 3,pppppppuVar7);
    func_0x00010865b5d0(&pppppppuStack_68);
    plStack_80[1] = lVar17;
    func_0x000107c2887c(plStack_80,&plStack_88);
    lVar17 = 0;
    for (; pppppuVar19 != pppppuVar10; pppppuVar19 = pppppuVar19 + 1) {
      FUN_10865b4a4(plStack_80,lVar17,pppppuVar19);
      lVar17 = lVar17 + 1;
    }
    ppppppuVar4[8] = pppppppuStack_90;
    pppppppuStack_90 = (undefined8 *******)0x0;
    pppppppuVar7 = &pppppppuStack_90;
    FUN_10865b628();
    ppppppuVar4[7] = ppppppuVar4[8];
    do {
      func_0x00010879649c();
    } while (extraout_w10_00 != 0);
    func_0x000108796364(ppppppuVar4[7]);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(ppppppuVar4 + 0xb) = 0;
      pppppuVar19 = ppppppuVar4[7];
      func_0x0001087963c0();
      ppppppuVar18 = *pppppppuVar7;
      if (ppppppuVar18 == (undefined8 ******)0x0) {
        func_0x000107c3a5c0();
        ppppppuVar18 = *pppppppuVar7;
      }
      pppppuVar10 = pppppuVar19 + 2;
      do {
        ppppuVar14 = *pppppuVar10;
        if (ppppuVar14 == (undefined8 ****)0x0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppppuVar10,0x10);
          if (bVar3) {
            *pppppuVar10 = (undefined8 ****)0x1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            pppppppuVar16 = (undefined8 *******)pppppuVar19[0x12];
            uVar12 = (ulong)*(byte *)((long)pppppppuVar16 + 1);
            if (*(byte *)((long)pppppppuVar16 + 1) == *(byte *)pppppppuVar16) {
              func_0x000108796354();
              func_0x00010879669c();
              pppppppuVar16[1] = pppppppuVar7;
              pppppuVar19[0x12] = pppppppuVar7;
              uVar12 = extraout_x8_01;
              pppppppuVar16 = pppppppuVar7;
            }
            uVar12 = uVar12 & 0xffffffff;
            pppppppuVar16[uVar12 * 3 + 2] = (undefined8 ******)0x0;
            pppppppuVar16[uVar12 * 3 + 3] = ppppppuVar4;
            pppppppuVar16[uVar12 * 3 + 4] = ppppppuVar18;
            *(char *)((long)pppppuVar19[0x12] + 1) = *(char *)((long)pppppuVar19[0x12] + 1) + '\x01'
            ;
            pppppuVar19[2] = (undefined8 ****)0x0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)ppppuVar14 >> 1 & 1) == 0);
    }
    func_0x000107c28834(ppppppuVar4 + 7);
    func_0x0001087963a8();
    func_0x0001087963a0();
    pppppuVar19 = ppppppuVar4[5];
    pppppuVar10 = ppppppuVar4[4];
    do {
      bVar3 = pppppuVar10 == pppppuVar19;
      if (((bVar3) || (func_0x000108796364(*pppppuVar10), (extraout_w8_00 >> 5 & 1) != 0)) ||
         (func_0x000108796364(*pppppuVar10), (extraout_w8_01 >> 1 & 1) == 0)) break;
      func_0x00010086e594(pppppuVar10);
      ppppuVar14 = *pppppuVar10;
      pppppuVar10 = pppppuVar10 + 1;
    } while (*(int *)(ppppuVar14 + 0x13) == 6);
    pppppuVar19 = ppppppuVar4[5];
    pppppuVar10 = ppppppuVar4[4];
  }
  func_0x0001087964bc(pppppuVar19);
  (**(code **)(**(long **)(extraout_x9 + 0x30) + 0x58))
            (*(long **)(extraout_x9 + 0x30),bVar3,(ulong)(extraout_x8 - (long)pppppuVar10) >> 3);
  pppppuVar19 = ppppppuVar4[9];
  if (bVar3 == false) {
    if (*(char *)(pppppuVar19 + 6) == '\0') {
      func_0x0001087964bc();
      func_0x000108796370();
    }
    else {
      (*(code *)(*pppppuVar19[4])[3])(pppppuVar19[4],4);
    }
  }
  else if (*(char *)(pppppuVar19 + 6) == '\0') {
    func_0x0001087964bc();
    func_0x00010879657c();
  }
  else {
    func_0x0001087962b4(pppppuVar19[4]);
    (*extraout_x8_00)();
  }
  func_0x000108796598();
  FUN_1087956dc(ppppppuVar15);
  func_0x0001087961b0();
  __ZdlPv(ppppppuVar4);
  return;
}



/* Entry: 108795498; end: 1087954d7;  */

undefined8 * FUN_108795498(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long *unaff_x20;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    puVar5 = (undefined8 *)(param_1[2] - *param_1 >> 2);
    if (puVar5 <= param_2) {
      puVar5 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      puVar5 = (undefined8 *)0x1fffffffffffffff;
    }
    return puVar5;
  }
  FUN_108795544();
  func_0x000107c334e4();
  puVar5 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar5 + (param_2[1] - (long)puVar2));
  puVar3 = puVar1;
  for (puVar6 = puVar5; puVar6 != puVar2; puVar6 = puVar6 + 1) {
    *puVar3 = *puVar6;
    *puVar6 = 0;
    puVar3 = puVar3 + 1;
  }
  for (; puVar5 != puVar2; puVar5 = puVar5 + 1) {
    func_0x000107c27f9c();
  }
  *(undefined8 **)(unaff_x19 + 8) = puVar1;
  lVar4 = *unaff_x20;
  *unaff_x20 = (long)puVar1;
  unaff_x20[1] = lVar4;
  func_0x000108796180();
  return puVar5;
}



/* Entry: 1087954d8; end: 108795543;  */

void FUN_1087954d8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long *unaff_x20;
  
  func_0x000107c334e4();
  puVar3 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar3 + (*(long *)(param_2 + 8) - (long)puVar2));
  puVar4 = puVar1;
  for (puVar6 = puVar3; puVar6 != puVar2; puVar6 = puVar6 + 1) {
    *puVar4 = *puVar6;
    *puVar6 = 0;
    puVar4 = puVar4 + 1;
  }
  for (; puVar3 != puVar2; puVar3 = puVar3 + 1) {
    func_0x000107c27f9c();
  }
  *(undefined8 **)(unaff_x19 + 8) = puVar1;
  lVar5 = *unaff_x20;
  *unaff_x20 = (long)puVar1;
  unaff_x20[1] = lVar5;
  func_0x000108796180();
  return;
}



/* Entry: 108795544; end: 10879554f;  */

void FUN_108795544(ulong param_1)

{
  long *unaff_x19;
  long unaff_x20;
  
  func_0x000108795f64();
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001087964ec();
  while (unaff_x20 != unaff_x19[2]) {
    unaff_x19[2] = unaff_x19[2] + -8;
    func_0x000107c27f9c();
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 108795550; end: 1087955c3;  */

void FUN_108795550(ulong param_1)

{
  long *unaff_x19;
  long unaff_x20;
  
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001087964ec();
  while (unaff_x20 != unaff_x19[2]) {
    unaff_x19[2] = unaff_x19[2] + -8;
    func_0x000107c27f9c();
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1087955c4; end: 10879560f;  */

void FUN_1087955c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0xa0;
  __Znwm();
  FUN_108795698();
  uStack_30 = 0;
  uStack_28 = 0;
  *param_1 = uVar1;
  param_1[1] = uVar1;
  func_0x000107c27f98(&uStack_30);
  func_0x000107c27f9c(&uStack_28);
  return;
}



/* Entry: 108795610; end: 108795697;  */

long FUN_108795610(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000107c334e4();
  do {
    uStack_38 = 0;
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c27ff0(lVar1,&uStack_38,1,2);
    if ((int)lVar1 != 0) {
      *(undefined4 *)(unaff_x20 + 0x98) = *param_3;
      *(undefined1 *)(unaff_x20 + 0x9c) = 1;
      *(undefined8 *)(unaff_x20 + 0x10) = 2;
      func_0x000107c31508();
      return lVar1;
    }
  } while (((uint)uStack_38 >> 1 & 1) == 0);
  return lVar1;
}



/* Entry: 108795698; end: 1087956c3;  */

void FUN_108795698(undefined8 *param_1)

{
  func_0x000107c31510();
  *param_1 = &PTR_FUN_110a6fc88;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  return;
}


