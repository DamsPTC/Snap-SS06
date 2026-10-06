/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103c1dc94; end: 103c1dcb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1dc94(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + _DAT_112ff8680 + 8));
  return;
}



/* Entry: 103c1dcb4; end: 103c1dcd3;  */

void FUN_103c1dcb4(void)

{
  func_0x000107c61168(&PTR_PTR_1129470c8);
  return;
}



/* Entry: 103c1dcd4; end: 103c1dce7; -[SCTSizeAnimation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1dcd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff8680 + 8));
  return;
}



/* Entry: 103c1dce8; end: 103c1dd3f;  */

void FUN_103c1dce8(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000040,0x800000010f1afc80,
                      "SCTAnimation/SCTValueAnimation.swift",0x24,2,0x6d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c1dd40);
  (*pcVar1)();
}



/* Entry: 103c1dd40; end: 103c1ddef; -[SCTColorAnimation initWithCurve:fromInterval:toInterval:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1dd40(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ff8688;
  uVar3 = 0x112e93710;
  func_0x0001000285a8(0x112e93710,&UNK_10da9f330);
  uVar4 = uVar3;
  func_0x000107c61538();
  *(undefined8 *)(param_1 + lVar1) = uVar4;
  lVar1 = _DAT_112ff86d8;
  func_0x000107c61538(uVar3,0x112ff86e8);
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000040,0x800000010f1afc80,
                      "SCTAnimation/SCTValueAnimation.swift",0x24,2,0x6d,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103c1ddf0);
  (*pcVar2)();
}



/* Entry: 103c1ddf0; end: 103c1e72b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103c1ddf0(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c610f8();
  lVar8 = _DAT_112ff8688;
  lVar3 = 0x112e93710;
  func_0x0001000285a8(0x112e93710,&UNK_10da9f330);
  lVar4 = lVar3;
  func_0x000107c61538();
  *(long *)(unaff_x20 + lVar8) = lVar4;
  lVar8 = _DAT_112ff86d8;
  lVar4 = lVar3;
  func_0x000107c61538(lVar3,0x112ff8778);
  *(long *)(unaff_x20 + lVar8) = lVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff87b8);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  uVar7 = param_8;
  if ((long)param_3 < 3) {
    if (param_3 == (undefined1 *)0x0) {
      uVar5 = 0;
      FUN_103c1cbac(0);
      uVar6 = uVar5;
      func_0x000107c610f8();
      func_0x000107c610f8(uVar5);
      func_0x000107c6157c(param_7);
      func_0x000100b64c10(param_8,param_9);
      uVar5 = 0x3fdae147ae147ae1;
    }
    else {
      if (param_3 == (undefined1 *)0x1) {
        uVar5 = 0;
        FUN_103c1cbac(0);
        uVar6 = uVar5;
        func_0x000107c610f8();
        func_0x000107c610f8(uVar5);
        func_0x000107c6157c(param_7);
        func_0x000100b64c10(param_8,param_9);
        uVar5 = 0x3fdae147ae147ae1;
        goto LAB_103c1e080;
      }
      if (param_3 != (undefined1 *)0x2) goto LAB_103c1e25c;
      uVar5 = 0;
      FUN_103c1cbac(0);
      uVar6 = uVar5;
      func_0x000107c610f8();
      func_0x000107c610f8(uVar5);
      func_0x000107c6157c(param_7);
      func_0x000100b64c10(param_8,param_9);
      uVar5 = 0;
    }
    uVar10 = 0x3fe28f5c28f5c28f;
LAB_103c1e088:
    uVar9 = 0;
  }
  else {
    if (param_3 == (undefined1 *)0x3) {
      uVar5 = 0;
      FUN_103c1cbac(0);
      uVar6 = uVar5;
      func_0x000107c610f8();
      func_0x000107c610f8(uVar5);
      func_0x000107c6157c(param_7);
      func_0x000100b64c10(param_8,param_9);
      uVar5 = 0;
LAB_103c1e080:
      uVar10 = 0x3ff0000000000000;
      goto LAB_103c1e088;
    }
    if (param_3 != (undefined1 *)0x4) {
      if (param_3 != (undefined1 *)0x5) goto LAB_103c1e25c;
      uVar5 = 0;
      FUN_103c1cbac(0);
      uVar6 = uVar5;
      func_0x000107c610f8();
      func_0x000107c610f8(uVar5);
      func_0x000107c6157c(param_7);
      func_0x000100b64c10(param_8,param_9);
      uVar5 = 0x3fc47ae147ae147b;
      goto LAB_103c1e080;
    }
    uVar5 = 0;
    FUN_103c1cbac(0);
    uVar6 = uVar5;
    func_0x000107c610f8();
    func_0x000107c610f8(uVar5);
    func_0x000107c6157c(param_7);
    func_0x000100b64c10(param_8,param_9);
    uVar5 = 0x3fd51eb851eb851f;
    uVar10 = 0;
    uVar9 = uVar5;
  }
  FUN_103c1cc50(uVar5,uVar9,uVar10,0x3ff0000000000000,0x3ff0000000000000);
  uVar5 = uVar6;
  func_0x000107c614f0(uVar6);
  func_0x000107c61464(uVar6,uVar5,0x71,7);
  *(undefined8 *)(unaff_x20 + _DAT_112ff8530) = uVar7;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8538) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8540) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff8548);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  uVar7 = 0;
  FUN_103c1c3e8();
  param_3 = auStack_90;
  uStack_88 = uVar7;
  func_0x000107c61154(param_3,PTR_s_init_1125d9248);
  puStack_80 = (undefined1 *)0x0;
  func_0x000107c61174();
  func_0x000107c44248(param_4);
  lVar8 = lVar3;
  func_0x000107c613fc(lVar3,0x40,7);
  *(undefined8 *)(lVar8 + 0x18) = 8;
  *(undefined8 *)(lVar8 + 0x10) = 4;
  *(undefined1 **)(lVar8 + 0x20) = puStack_80;
  *(undefined8 *)(lVar8 + 0x28) = 0;
  *(undefined8 *)(lVar8 + 0x30) = 0;
  *(undefined8 *)(lVar8 + 0x38) = 0;
  uVar7 = *(undefined8 *)(param_3 + _DAT_112ff8688);
  *(long *)(param_3 + _DAT_112ff8688) = lVar8;
  func_0x000107c6142c(uVar7);
  func_0x000107c44248(param_5);
  func_0x000107c613fc(lVar3,0x40,7);
  *(undefined8 *)(lVar3 + 0x18) = 8;
  *(undefined8 *)(lVar3 + 0x10) = 4;
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x00010058d43c(param_8,param_9);
  func_0x000107c61574(param_7);
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  param_9 = *(undefined8 *)(param_3 + _DAT_112ff86d8);
  *(long *)(param_3 + _DAT_112ff86d8) = lVar3;
  func_0x000107c61170(param_3);
  func_0x000107c6142c(param_9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return param_3;
  }
  func_0x000107c60e78();
LAB_103c1e25c:
  puStack_80 = param_3;
  func_0x000107c6157c(param_7);
  func_0x000100b64c10(param_8,param_9);
  func_0x000107c60614(&UNK_1106eae28,&puStack_80,&UNK_1106eae28,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103c1e294);
  (*pcVar2)();
}



/* Entry: 103c1e72c; end: 103c1e823; -[SCTColorAnimation initWithCurve:fromInterval:toInterval:fromValue:toValue:callback:completion:] */

void FUN_103c1e72c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_1106eb5a8;
  func_0x000107c613fc(&UNK_1106eb5a8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_8;
  if (param_9 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_1106eb5d0;
    func_0x000107c613fc(&UNK_1106eb5d0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_9;
    uVar3 = 0x103c211ac;
  }
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000103c1e294(param_1,param_2,param_5,param_6,param_7,0x103c21178,puVar1,uVar3,puVar2);
  return;
}



/* Entry: 103c1e824; end: 103c1e9e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1e824(double param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar8 = (param_1 - *(double *)(unaff_x20 + _DAT_112ff8538)) /
          (*(double *)(unaff_x20 + _DAT_112ff8540) - *(double *)(unaff_x20 + _DAT_112ff8538));
  FUN_103c1cf28();
  lVar2 = 0x112e93710;
  func_0x0001000285a8(0x112e93710,&UNK_10da9f330);
  func_0x000107c61534();
  lVar4 = *(long *)(unaff_x20 + _DAT_112ff8688);
  uVar6 = *(ulong *)(lVar4 + 0x10);
  if (uVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103c1e9c8);
    (*pcVar1)();
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_112ff86d8);
  uVar7 = *(ulong *)(lVar5 + 0x10);
  if (uVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103c1e9cc);
    (*pcVar1)();
  }
  dVar9 = *(double *)(lVar4 + 0x20) +
          dVar8 * (*(double *)(lVar5 + 0x20) - *(double *)(lVar4 + 0x20));
  *(double *)(lVar2 + 0x20) = dVar9;
  if (uVar6 == 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103c1e9d0);
    (*pcVar1)();
  }
  if (uVar7 == 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103c1e9d4);
    (*pcVar1)();
  }
  dVar10 = *(double *)(lVar4 + 0x28) +
           dVar8 * (*(double *)(lVar5 + 0x28) - *(double *)(lVar4 + 0x28));
  *(double *)(lVar2 + 0x28) = dVar10;
  if (uVar6 < 3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103c1e9d8);
    (*pcVar1)();
  }
  if (uVar7 < 3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103c1e9dc);
    (*pcVar1)();
  }
  dVar11 = *(double *)(lVar4 + 0x30) +
           dVar8 * (*(double *)(lVar5 + 0x30) - *(double *)(lVar4 + 0x30));
  *(double *)(lVar2 + 0x30) = dVar11;
  if (uVar6 == 3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103c1e9e0);
    (*pcVar1)();
  }
  if (uVar7 != 3) {
    dVar8 = *(double *)(lVar4 + 0x38) +
            dVar8 * (*(double *)(lVar5 + 0x38) - *(double *)(lVar4 + 0x38));
    *(double *)(lVar2 + 0x38) = dVar8;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c482a8(dVar9,dVar10,dVar11,dVar8);
    (**(code **)(unaff_x20 + _DAT_112ff87b8))();
    func_0x000107c61170(puVar3);
    func_0x000107c61588(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c1e9e4);
  (*pcVar1)();
}



/* Entry: 103c1e9e4; end: 103c1ea1b; -[SCTColorAnimation updateForInterval:] */

void FUN_103c1e9e4(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_103c1e824(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103c1ea1c; end: 103c1ea5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1ea1c(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112ff8688));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112ff86d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + _DAT_112ff87b8 + 8));
  return;
}



/* Entry: 103c1ea5c; end: 103c1ea67;  */

void FUN_103c1ea5c(void)

{
  (*(code *)0x103c1ea98)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c1ea68; end: 103c1eab7;  */

void FUN_103c1ea68(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c1eab8; end: 103c1eb03; -[SCTColorAnimation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1eab8(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff8688));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff86d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff87b8 + 8));
  return;
}



/* Entry: 103c1eb04; end: 103c1eeb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1eb04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  long alStack_98 [3];
  long lStack_80;
  undefined8 uStack_78;
  
  lVar4 = param_5;
  FUN_103c1d714();
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112ff8658) = param_3;
  *(undefined8 *)(lVar4 + _DAT_112ff8660) = param_4;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112ff8668);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  uVar7 = param_8;
  if (param_5 < 3) {
    if (param_5 == 0) {
      uVar5 = 0;
      FUN_103c1cbac(0);
      uVar6 = uVar5;
      func_0x000107c610f8();
      func_0x000107c610f8(uVar5);
      func_0x000107c6157c(param_7);
      func_0x000100b64c10(param_8,param_9);
      uVar5 = 0x3fdae147ae147ae1;
    }
    else {
      if (param_5 == 1) {
        uVar5 = 0;
        FUN_103c1cbac(0);
        uVar6 = uVar5;
        func_0x000107c610f8();
        func_0x000107c610f8(uVar5);
        func_0x000107c6157c(param_7);
        func_0x000100b64c10(param_8,param_9);
        uVar5 = 0x3fdae147ae147ae1;
        goto LAB_103c1ed50;
      }
      if (param_5 != 2) {
LAB_103c1ee80:
        alStack_98[0] = param_5;
        func_0x000107c6157c(param_7);
        func_0x000100b64c10(param_8,param_9);
        func_0x000107c60614(&UNK_1106eae28,alStack_98,&UNK_1106eae28,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103c1eeb8);
        (*pcVar3)();
      }
      uVar5 = 0;
      FUN_103c1cbac(0);
      uVar6 = uVar5;
      func_0x000107c610f8();
      func_0x000107c610f8(uVar5);
      func_0x000107c6157c(param_7);
      func_0x000100b64c10(param_8,param_9);
      uVar5 = 0;
    }
    uVar12 = 0x3fe28f5c28f5c28f;
  }
  else {
    if (param_5 == 3) {
      uVar5 = 0;
      FUN_103c1cbac(0);
      uVar6 = uVar5;
      func_0x000107c610f8();
      func_0x000107c610f8(uVar5);
      func_0x000107c6157c(param_7);
      func_0x000100b64c10(param_8,param_9);
      uVar5 = 0;
    }
    else {
      if (param_5 == 4) {
        uVar5 = 0;
        FUN_103c1cbac(0);
        uVar6 = uVar5;
        func_0x000107c610f8();
        func_0x000107c610f8(uVar5);
        func_0x000107c6157c(param_7);
        func_0x000100b64c10(param_8,param_9);
        uVar5 = 0x3fd51eb851eb851f;
        uVar12 = 0;
        uVar11 = uVar5;
        goto LAB_103c1ed60;
      }
      if (param_5 != 5) goto LAB_103c1ee80;
      uVar5 = 0;
      FUN_103c1cbac(0);
      uVar6 = uVar5;
      func_0x000107c610f8();
      func_0x000107c610f8(uVar5);
      func_0x000107c6157c(param_7);
      func_0x000100b64c10(param_8,param_9);
      uVar5 = 0x3fc47ae147ae147b;
    }
LAB_103c1ed50:
    uVar12 = 0x3ff0000000000000;
  }
  uVar11 = 0;
LAB_103c1ed60:
  FUN_103c1cc50(uVar5,uVar11,uVar12,0x3ff0000000000000,0x3ff0000000000000);
  uVar5 = uVar6;
  func_0x000107c614f0(uVar6);
  func_0x000107c61464(uVar6,uVar5,0x71,7);
  *(undefined8 *)(lVar4 + _DAT_112ff8530) = uVar7;
  *(undefined8 *)(lVar4 + _DAT_112ff8538) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112ff8540) = param_2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112ff8548);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  uVar7 = 0;
  FUN_103c1c3e8();
  plVar8 = &lStack_80;
  lStack_80 = lVar4;
  uStack_78 = uVar7;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  lVar4 = _DAT_112ff8558;
  func_0x000107c61428(unaff_x20 + _DAT_112ff8558,alStack_98,0x21,0);
  func_0x000103c1ba64();
  uVar9 = *(ulong *)(unaff_x20 + lVar4);
  uVar10 = uVar9 & 0xffffffffffffff8;
  uVar2 = *(ulong *)(uVar10 + 0x10);
  if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar2) {
    uVar9 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
    FUN_103c1bad4(uVar9,uVar2 + 1,1);
    uVar10 = uVar9 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar10 + 0x10) = uVar2 + 1;
  *(long **)(uVar10 + uVar2 * 8 + 0x20) = plVar8;
  *(ulong *)(unaff_x20 + lVar4) = uVar9;
  func_0x000107c614a8(alStack_98);
  return;
}



/* Entry: 103c1eeb8; end: 103c1efbf; -[SCTAnimator addFloatAnimationWithCurve:fromInterval:toInterval:fromValue:toValue:callback:completion:] */

void FUN_103c1eeb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_1106eb558;
  func_0x000107c613fc(&UNK_1106eb558,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_8;
  if (param_9 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_1106eb580;
    func_0x000107c613fc(&UNK_1106eb580,0x18,7);
    *(long *)(puVar2 + 0x10) = param_9;
    uVar3 = 0x103c211a8;
  }
  func_0x000107c61174(param_5);
  FUN_103c1eb04(param_1,param_2,param_3,param_4,param_7,0x103c21174,puVar1,uVar3,puVar2);
  func_0x00010058d43c(uVar3,puVar2);
  func_0x000107c61170(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103c1efc0; end: 103c1effb;  */

void FUN_103c1efc0(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 103c1effc; end: 103c1f11b; -[SCTAnimator addFloatAnimationWithCurve:fromInterval:toInterval:fromValue:toValue:callback:] */

void FUN_103c1effc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  func_0x000107c60bc4();
  puVar2 = &UNK_1106eb508;
  func_0x000107c613fc(&UNK_1106eb508,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_8;
  uStack_70 = 0x103c21170;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_103c1efc0;
  puStack_78 = &UNK_1106eb520;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c61174(param_5);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c3d6a8(param_1,param_2,param_3,param_4,param_5);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(param_5);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 103c1f11c; end: 103c1f247;  */

void FUN_103c1f11c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar3 = &puStack_a0;
  ppuVar4 = &puStack_a0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_103c1efc0;
  puStack_88 = &UNK_1106eaee0;
  lStack_80 = param_5;
  uStack_78 = param_6;
  func_0x000107c60bc4(&puStack_a0);
  uVar2 = uStack_78;
  func_0x000107c6157c(param_6);
  func_0x000107c61574(uVar2);
  puVar5 = (undefined1 *)0x0;
  if (param_7 != 0) {
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_1000f6b44;
    puStack_88 = &UNK_1106eaf08;
    lStack_80 = param_7;
    uStack_78 = param_8;
    func_0x000107c60bc4(&puStack_a0);
    uVar2 = uStack_78;
    func_0x000107c6157c(param_8);
    func_0x000107c61574(uVar2);
    puVar5 = (undefined1 *)ppuVar4;
  }
  func_0x000107c3d6a8(0,param_1,param_2,param_3);
  func_0x000107c60bd0(puVar5);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 103c1f248; end: 103c1f347; -[SCTAnimator addFloatAnimationWithCurve:duration:fromValue:toValue:callback:completion:] */

void FUN_103c1f248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_1106eb4b8;
  func_0x000107c613fc(&UNK_1106eb4b8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_7;
  if (param_8 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_1106eb4e0;
    func_0x000107c613fc(&UNK_1106eb4e0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_8;
    uVar3 = 0x103c211a4;
  }
  func_0x000107c61174(param_4);
  FUN_103c1f11c(param_1,param_2,param_3,param_6,0x103c2116c,puVar1,uVar3,puVar2);
  func_0x00010058d43c(uVar3,puVar2);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103c1f348; end: 103c1f45f; -[SCTAnimator addFloatAnimationWithCurve:duration:fromValue:toValue:callback:] */

void FUN_103c1f348(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  func_0x000107c60bc4();
  puVar2 = &UNK_1106eb468;
  func_0x000107c613fc(&UNK_1106eb468,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_7;
  uStack_70 = 0x103c21168;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_103c1efc0;
  puStack_78 = &UNK_1106eb480;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c61174(param_4);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c3d6a0(param_1,param_2,param_3,param_4);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(param_4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 103c1f460; end: 103c1f82b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c1f460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  long alStack_a8 [3];
  long lStack_90;
  undefined8 uStack_88;
  
  lVar4 = param_7;
  FUN_103c1dcb4();
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar4 + _DAT_112ff8670);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112ff8678);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112ff8680);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  uVar7 = param_10;
  if (param_7 < 3) {
    if (param_7 == 0) {
      uVar5 = 0;
      FUN_103c1cbac(0);
      uVar6 = uVar5;
      func_0x000107c610f8();
      func_0x000107c610f8(uVar5);
      func_0x000107c6157c(param_9);
      func_0x000100b64c10(param_10,param_11);
      uVar5 = 0x3fdae147ae147ae1;
    }
    else {
      if (param_7 == 1) {
        uVar5 = 0;
        FUN_103c1cbac(0);
        uVar6 = uVar5;
        func_0x000107c610f8();
        func_0x000107c610f8(uVar5);
        func_0x000107c6157c(param_9);
        func_0x000100b64c10(param_10,param_11);
        uVar5 = 0x3fdae147ae147ae1;
        goto LAB_103c1f6c0;
      }
      if (param_7 != 2) {
LAB_103c1f7f4:
        alStack_a8[0] = param_7;
        func_0x000107c6157c(param_9);
        func_0x000100b64c10(param_10,param_11);
        func_0x000107c60614(&UNK_1106eae28,alStack_a8,&UNK_1106eae28,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103c1f82c);
        (*pcVar3)();
      }
      uVar5 = 0;
      FUN_103c1cbac(0);
      uVar6 = uVar5;
      func_0x000107c610f8();
      func_0x000107c610f8(uVar5);
      func_0x000107c6157c(param_9);
      func_0x000100b64c10(param_10,param_11);
      uVar5 = 0;
    }
    uVar12 = 0x3fe28f5c28f5c28f;
  }
  else {
    if (param_7 == 3) {
      uVar5 = 0;
      FUN_103c1cbac(0);
      uVar6 = uVar5;
      func_0x000107c610f8();
      func_0x000107c610f8(uVar5);
      func_0x000107c6157c(param_9);
      func_0x000100b64c10(param_10,param_11);
      uVar5 = 0;
    }
    else {
      if (param_7 == 4) {
        uVar5 = 0;
        FUN_103c1cbac(0);
        uVar6 = uVar5;
        func_0x000107c610f8();
        func_0x000107c610f8(uVar5);
        func_0x000107c6157c(param_9);
        func_0x000100b64c10(param_10,param_11);
        uVar5 = 0x3fd51eb851eb851f;
        uVar12 = 0;
        uVar11 = uVar5;
        goto LAB_103c1f6d0;
      }
      if (param_7 != 5) goto LAB_103c1f7f4;
      uVar5 = 0;
      FUN_103c1cbac(0);
      uVar6 = uVar5;
      func_0x000107c610f8();
      func_0x000107c610f8(uVar5);
      func_0x000107c6157c(param_9);
      func_0x000100b64c10(param_10,param_11);
      uVar5 = 0x3fc47ae147ae147b;
    }
LAB_103c1f6c0:
    uVar12 = 0x3ff0000000000000;
  }
  uVar11 = 0;
LAB_103c1f6d0:
  FUN_103c1cc50(uVar5,uVar11,uVar12,0x3ff0000000000000,0x3ff0000000000000);
  uVar5 = uVar6;
  func_0x000107c614f0(uVar6);
  func_0x000107c61464(uVar6,uVar5,0x71,7);
  *(undefined8 *)(lVar4 + _DAT_112ff8530) = uVar7;
  *(undefined8 *)(lVar4 + _DAT_112ff8538) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112ff8540) = param_2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112ff8548);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  uVar7 = 0;
  FUN_103c1c3e8();
  plVar8 = &lStack_90;
  lStack_90 = lVar4;
  uStack_88 = uVar7;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  lVar4 = _DAT_112ff8558;
  func_0x000107c61428(unaff_x20 + _DAT_112ff8558,alStack_a8,0x21,0);
  func_0x000103c1ba64();
  uVar9 = *(ulong *)(unaff_x20 + lVar4);
  uVar10 = uVar9 & 0xffffffffffffff8;
  uVar2 = *(ulong *)(uVar10 + 0x10);
  if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar2) {
    uVar9 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
    FUN_103c1bad4(uVar9,uVar2 + 1,1);
    uVar10 = uVar9 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar10 + 0x10) = uVar2 + 1;
  *(long **)(uVar10 + uVar2 * 8 + 0x20) = plVar8;
  *(ulong *)(unaff_x20 + lVar4) = uVar9;
  func_0x000107c614a8(alStack_a8);
  return;
}



/* Entry: 103c1f82c; end: 103c1f94b; -[SCTAnimator addSizeAnimationWithCurve:fromInterval:toInterval:fromValue:toValue:callback:completion:] */

void FUN_103c1f82c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_1106eb418;
  func_0x000107c613fc(&UNK_1106eb418,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_10;
  if (param_11 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_1106eb440;
    func_0x000107c613fc(&UNK_1106eb440,0x18,7);
    *(long *)(puVar2 + 0x10) = param_11;
    uVar3 = 0x103c211a0;
  }
  func_0x000107c61174(param_7);
  FUN_103c1f460(param_1,param_2,param_3,param_4,param_5,param_6,param_9,0x103c21188,puVar1,uVar3,
                puVar2);
  func_0x00010058d43c(uVar3,puVar2);
  func_0x000107c61170(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103c1f94c; end: 103c1f98f;  */

void FUN_103c1f94c(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_3 + 0x20);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 103c1f990; end: 103c1fac7; -[SCTAnimator addSizeAnimationWithCurve:fromInterval:toInterval:fromValue:toValue:callback:] */

void FUN_103c1f990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  ppuVar3 = &puStack_a0;
  func_0x000107c60bc4();
  puVar2 = &UNK_1106eb3c8;
  func_0x000107c613fc(&UNK_1106eb3c8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_10;
  uStack_80 = 0x103c21184;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_103c1f94c;
  puStack_88 = &UNK_1106eb3e0;
  puStack_78 = puVar2;
  func_0x000107c60bc4(&puStack_a0);
  puVar1 = puStack_78;
  func_0x000107c61174(param_7);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c3d858(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(param_7);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 103c1fac8; end: 103c1fc0b;  */

void FUN_103c1fac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,long param_9
                  ,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar3 = &puStack_b0;
  ppuVar4 = &puStack_b0;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  pcStack_a0 = FUN_103c1f94c;
  puStack_98 = &UNK_1106eaf30;
  lStack_90 = param_7;
  uStack_88 = param_8;
  func_0x000107c60bc4(&puStack_b0);
  uVar2 = uStack_88;
  func_0x000107c6157c(param_8);
  func_0x000107c61574(uVar2);
  puVar5 = (undefined1 *)0x0;
  if (param_9 != 0) {
    puStack_b0 = puVar1;
    uStack_a8 = 0x42000000;
    pcStack_a0 = (code *)&UNK_1000f6b44;
    puStack_98 = &UNK_1106eaf58;
    lStack_90 = param_9;
    uStack_88 = param_10;
    func_0x000107c60bc4(&puStack_b0);
    uVar2 = uStack_88;
    func_0x000107c6157c(param_10);
    func_0x000107c61574(uVar2);
    puVar5 = (undefined1 *)ppuVar4;
  }
  func_0x000107c3d858(0,param_1,param_2,param_3,param_4,param_5);
  func_0x000107c60bd0(puVar5);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 103c1fc0c; end: 103c1fd23; -[SCTAnimator addSizeAnimationWithCurve:duration:fromValue:toValue:callback:completion:] */

void FUN_103c1fc0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_1106eb378;
  func_0x000107c613fc(&UNK_1106eb378,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_9;
  if (param_10 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_1106eb3a0;
    func_0x000107c613fc(&UNK_1106eb3a0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_10;
    uVar3 = 0x103c2119c;
  }
  func_0x000107c61174(param_6);
  FUN_103c1fac8(param_1,param_2,param_3,param_4,param_5,param_8,0x103c21180,puVar1,uVar3,puVar2);
  func_0x00010058d43c(uVar3,puVar2);
  func_0x000107c61170(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103c1fd24; end: 103c1fe53; -[SCTAnimator addSizeAnimationWithCurve:duration:fromValue:toValue:callback:] */

void FUN_103c1fd24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  ppuVar3 = &puStack_a0;
  func_0x000107c60bc4();
  puVar2 = &UNK_1106eb328;
  func_0x000107c613fc(&UNK_1106eb328,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_9;
  uStack_80 = 0x103c210ac;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_103c1f94c;
  puStack_88 = &UNK_1106eb340;
  puStack_78 = puVar2;
  func_0x000107c60bc4(&puStack_a0);
  puVar1 = puStack_78;
  func_0x000107c61174(param_6);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c3d854(param_1,param_2,param_3,param_4,param_5,param_6);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(param_6);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 103c1fe54; end: 103c1ff7f; -[SCTAnimator addColorAnimationWithCurve:fromInterval:toInterval:fromValue:toValue:callback:completion:] */

void FUN_103c1fe54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_1106eb2d8;
  func_0x000107c613fc(&UNK_1106eb2d8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_8;
  if (param_9 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_1106eb300;
    func_0x000107c613fc(&UNK_1106eb300,0x18,7);
    *(long *)(puVar2 + 0x10) = param_9;
    uVar3 = 0x103c21198;
  }
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_3);
  FUN_103c20bf4(param_1,param_2,param_5,param_6,param_7,0x103c21164,puVar1);
  func_0x00010058d43c(uVar3,puVar2);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103c1ff80; end: 103c1ffcb;  */

void FUN_103c1ff80(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103c1ffcc; end: 103c20113; -[SCTAnimator addColorAnimationWithCurve:fromInterval:toInterval:fromValue:toValue:callback:] */

void FUN_103c1ffcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  func_0x000107c60bc4();
  puVar2 = &UNK_1106eb288;
  func_0x000107c613fc(&UNK_1106eb288,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_8;
  uStack_70 = 0x103c21160;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_103c1ff80;
  puStack_78 = &UNK_1106eb2a0;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c3d620(param_1,param_2,param_3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 103c20114; end: 103c2023f;  */

void FUN_103c20114(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long in_x3;
  undefined8 in_x4;
  long in_x5;
  undefined8 in_x6;
  undefined1 *puVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar3 = &puStack_a0;
  ppuVar4 = &puStack_a0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_103c1ff80;
  puStack_88 = &UNK_1106eaf80;
  lStack_80 = in_x3;
  uStack_78 = in_x4;
  func_0x000107c60bc4(&puStack_a0);
  uVar2 = uStack_78;
  func_0x000107c6157c(in_x4);
  func_0x000107c61574(uVar2);
  puVar5 = (undefined1 *)0x0;
  if (in_x5 != 0) {
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_1000f6b44;
    puStack_88 = &UNK_1106eafa8;
    lStack_80 = in_x5;
    uStack_78 = in_x6;
    func_0x000107c60bc4(&puStack_a0);
    uVar2 = uStack_78;
    func_0x000107c6157c(in_x6);
    func_0x000107c61574(uVar2);
    puVar5 = (undefined1 *)ppuVar4;
  }
  func_0x000107c3d620(0,param_1);
  func_0x000107c60bd0(puVar5);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 103c20240; end: 103c2036b; -[SCTAnimator addColorAnimationWithCurve:duration:fromValue:toValue:callback:completion:] */

void FUN_103c20240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_1106eb238;
  func_0x000107c613fc(&UNK_1106eb238,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_7;
  if (param_8 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_1106eb260;
    func_0x000107c613fc(&UNK_1106eb260,0x18,7);
    *(long *)(puVar2 + 0x10) = param_8;
    uVar3 = 0x103c21194;
  }
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_2);
  FUN_103c20114(param_1,param_4,param_5,param_6,0x103c2115c,puVar1,uVar3,puVar2);
  func_0x00010058d43c(uVar3,puVar2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103c2036c; end: 103c204ab; -[SCTAnimator addColorAnimationWithCurve:duration:fromValue:toValue:callback:] */

void FUN_103c2036c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  func_0x000107c60bc4();
  puVar2 = &UNK_1106eb1e8;
  func_0x000107c613fc(&UNK_1106eb1e8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_7;
  uStack_70 = 0x103c2109c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_103c1ff80;
  puStack_78 = &UNK_1106eb200;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_2);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c3d61c(param_1,param_2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(param_2);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 103c204ac; end: 103c20673;  */

void FUN_103c204ac(double param_1,double param_2,double param_3,double param_4,double param_5,
                  long param_6,undefined8 param_7,long param_8,undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  double dVar7;
  double dVar8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar3 = &puStack_d0;
  ppuVar4 = &puStack_d0;
  ppuVar5 = &puStack_d0;
  dVar7 = param_2 + (param_3 - param_2) * 0.5825;
  dVar8 = param_5 + param_1 * (param_5 - param_4);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0x42000000;
  pcStack_c0 = FUN_103c1efc0;
  puStack_b8 = &UNK_1106eafd0;
  lStack_b0 = param_6;
  uStack_a8 = param_7;
  func_0x000107c60bc4(&puStack_d0);
  uVar2 = uStack_a8;
  func_0x000107c6157c(param_7);
  func_0x000107c61574(uVar2);
  func_0x000107c3d6a4(param_2,dVar7,param_4,dVar8);
  func_0x000107c60bd0(ppuVar3);
  puStack_d0 = puVar1;
  uStack_c8 = 0x42000000;
  pcStack_c0 = FUN_103c1efc0;
  puStack_b8 = &UNK_1106eaff8;
  lStack_b0 = param_6;
  uStack_a8 = param_7;
  func_0x000107c60bc4(&puStack_d0);
  uVar2 = uStack_a8;
  func_0x000107c6157c(param_7);
  func_0x000107c61574(uVar2);
  puVar6 = (undefined1 *)0x0;
  if (param_8 != 0) {
    puStack_d0 = puVar1;
    uStack_c8 = 0x42000000;
    pcStack_c0 = (code *)&UNK_1000f6b44;
    puStack_b8 = &UNK_1106eb020;
    lStack_b0 = param_8;
    uStack_a8 = param_9;
    func_0x000107c60bc4(&puStack_d0);
    uVar2 = uStack_a8;
    func_0x000107c6157c(param_9);
    func_0x000107c61574(uVar2);
    puVar6 = (undefined1 *)ppuVar5;
  }
  func_0x000107c3d6a8(dVar7,param_3,dVar8,param_5);
  func_0x000107c60bd0(puVar6);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 103c20674; end: 103c2077b; -[SCTAnimator addBounceAnimationWithFactor:fromInterval:toInterval:fromValue:toValue:callback:completion:] */

void FUN_103c20674(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_1106eb198;
  func_0x000107c613fc(&UNK_1106eb198,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_8;
  if (param_9 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_1106eb1c0;
    func_0x000107c613fc(&UNK_1106eb1c0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_9;
    uVar3 = 0x103c21190;
  }
  func_0x000107c61174(param_6);
  FUN_103c204ac(param_1,param_2,param_3,param_4,param_5,0x103c21158,puVar1,uVar3,puVar2);
  func_0x00010058d43c(uVar3,puVar2);
  func_0x000107c61170(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103c2077c; end: 103c2089b; -[SCTAnimator addBounceAnimationWithFactor:fromInterval:toInterval:fromValue:toValue:callback:] */

void FUN_103c2077c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  func_0x000107c60bc4();
  puVar2 = &UNK_1106eb148;
  func_0x000107c613fc(&UNK_1106eb148,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_8;
  uStack_70 = 0x103c21154;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_103c1efc0;
  puStack_78 = &UNK_1106eb160;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c61174(param_6);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c3d5f0(param_1,param_2,param_3,param_4,param_5,param_6);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(param_6);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 103c2089c; end: 103c209cf;  */

void FUN_103c2089c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar3 = &puStack_b0;
  ppuVar4 = &puStack_b0;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  pcStack_a0 = FUN_103c1efc0;
  puStack_98 = &UNK_1106eb048;
  lStack_90 = param_5;
  uStack_88 = param_6;
  func_0x000107c60bc4(&puStack_b0);
  uVar2 = uStack_88;
  func_0x000107c6157c(param_6);
  func_0x000107c61574(uVar2);
  puVar5 = (undefined1 *)0x0;
  if (param_7 != 0) {
    puStack_b0 = puVar1;
    uStack_a8 = 0x42000000;
    pcStack_a0 = (code *)&UNK_1000f6b44;
    puStack_98 = &UNK_1106eb070;
    lStack_90 = param_7;
    uStack_88 = param_8;
    func_0x000107c60bc4(&puStack_b0);
    uVar2 = uStack_88;
    func_0x000107c6157c(param_8);
    func_0x000107c61574(uVar2);
    puVar5 = (undefined1 *)ppuVar4;
  }
  func_0x000107c3d5f0(param_1,0,param_2,param_3,param_4);
  func_0x000107c60bd0(puVar5);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 103c209d0; end: 103c20ac7; -[SCTAnimator addBounceAnimationWithFactor:duration:fromValue:toValue:callback:completion:] */

void FUN_103c209d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_1106eb0f8;
  func_0x000107c613fc(&UNK_1106eb0f8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_7;
  if (param_8 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_1106eb120;
    func_0x000107c613fc(&UNK_1106eb120,0x18,7);
    *(long *)(puVar2 + 0x10) = param_8;
    uVar3 = 0x103c21090;
  }
  func_0x000107c61174(param_5);
  FUN_103c2089c(param_1,param_2,param_3,param_4,0x103c21150,puVar1,uVar3,puVar2);
  func_0x00010058d43c(uVar3,puVar2);
  func_0x000107c61170(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103c20ac8; end: 103c20bd7; -[SCTAnimator addBounceAnimationWithFactor:duration:fromValue:toValue:callback:] */

void FUN_103c20ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  func_0x000107c60bc4();
  puVar2 = &UNK_1106eb0a8;
  func_0x000107c613fc(&UNK_1106eb0a8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_7;
  pcStack_60 = FUN_103c21084;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_103c1efc0;
  puStack_68 = &UNK_1106eb0c0;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c61174(param_5);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c3d5ec(param_1,param_2,param_3,param_4,param_5);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(param_5);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 103c20bd8; end: 103c20bf3;  */

void FUN_103c20bd8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103c20bf4; end: 103c21083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c20bf4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lStack_a0;
  undefined8 uStack_98;
  long alStack_90 [3];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_3;
  func_0x000103c1ea98();
  func_0x000107c610f8();
  lVar7 = _DAT_112ff8688;
  lVar5 = 0x112e93710;
  func_0x0001000285a8(0x112e93710,&UNK_10da9f330);
  lVar6 = lVar5;
  func_0x000107c61538();
  *(long *)(lVar4 + lVar7) = lVar6;
  lVar7 = _DAT_112ff86d8;
  lVar6 = lVar5;
  func_0x000107c61538(lVar5,0x112ff8918);
  *(long *)(lVar4 + lVar7) = lVar6;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112ff87b8);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  if (param_3 < 3) {
    if (param_3 == 0) {
      lVar7 = 0;
      FUN_103c1cbac();
      param_3 = lVar7;
      func_0x000107c610f8();
      func_0x000107c610f8(lVar7);
      func_0x000107c6157c();
      uVar11 = 0x3fdae147ae147ae1;
    }
    else {
      if (param_3 == 1) {
        lVar7 = 0;
        FUN_103c1cbac();
        param_3 = lVar7;
        func_0x000107c610f8();
        func_0x000107c610f8(lVar7);
        func_0x000107c6157c();
        uVar11 = 0x3fdae147ae147ae1;
        goto LAB_103c20e34;
      }
      if (param_3 != 2) goto LAB_103c21058;
      lVar7 = 0;
      FUN_103c1cbac();
      param_3 = lVar7;
      func_0x000107c610f8();
      func_0x000107c610f8(lVar7);
      func_0x000107c6157c();
      uVar11 = 0;
    }
    uVar13 = 0x3fe28f5c28f5c28f;
LAB_103c20e3c:
    uVar12 = 0;
  }
  else {
    if (param_3 == 3) {
      lVar7 = 0;
      FUN_103c1cbac();
      param_3 = lVar7;
      func_0x000107c610f8();
      func_0x000107c610f8(lVar7);
      func_0x000107c6157c();
      uVar11 = 0;
LAB_103c20e34:
      uVar13 = 0x3ff0000000000000;
      goto LAB_103c20e3c;
    }
    if (param_3 != 4) {
      if (param_3 != 5) goto LAB_103c21058;
      lVar7 = 0;
      FUN_103c1cbac();
      param_3 = lVar7;
      func_0x000107c610f8();
      func_0x000107c610f8(lVar7);
      func_0x000107c6157c();
      uVar11 = 0x3fc47ae147ae147b;
      goto LAB_103c20e34;
    }
    lVar7 = 0;
    FUN_103c1cbac();
    param_3 = lVar7;
    func_0x000107c610f8();
    func_0x000107c610f8(lVar7);
    func_0x000107c6157c();
    uVar11 = 0x3fd51eb851eb851f;
    uVar13 = 0;
    uVar12 = uVar11;
  }
  FUN_103c1cc50(uVar11,uVar12,uVar13,0x3ff0000000000000,0x3ff0000000000000);
  lVar7 = param_3;
  func_0x000107c614f0(param_3);
  func_0x000107c61464(param_3,lVar7,0x71,7);
  *(long *)(lVar4 + _DAT_112ff8530) = param_7;
  *(undefined8 *)(lVar4 + _DAT_112ff8538) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112ff8540) = param_2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112ff8548);
  uVar11 = 0;
  FUN_103c1c3e8();
  *puVar1 = 0;
  puVar1[1] = 0;
  plVar8 = &lStack_a0;
  lStack_a0 = lVar4;
  uStack_98 = uVar11;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  alStack_90[0] = 0;
  func_0x000107c61174();
  func_0x000107c44248(param_4);
  lVar7 = lVar5;
  func_0x000107c613fc(lVar5,0x40,7);
  *(undefined8 *)(lVar7 + 0x18) = 8;
  *(undefined8 *)(lVar7 + 0x10) = 4;
  *(long *)(lVar7 + 0x20) = alStack_90[0];
  *(undefined8 *)(lVar7 + 0x28) = 0;
  *(undefined8 *)(lVar7 + 0x30) = 0;
  *(undefined8 *)(lVar7 + 0x38) = 0;
  uVar11 = *(undefined8 *)((long)plVar8 + _DAT_112ff8688);
  *(long *)((long)plVar8 + _DAT_112ff8688) = lVar7;
  func_0x000107c6142c(uVar11);
  func_0x000107c44248(param_5);
  func_0x000107c613fc(lVar5,0x40,7);
  *(undefined8 *)(lVar5 + 0x18) = 8;
  *(undefined8 *)(lVar5 + 0x10) = 4;
  *(undefined8 *)(lVar5 + 0x20) = 0;
  *(undefined8 *)(lVar5 + 0x28) = 0;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined8 *)(lVar5 + 0x38) = 0;
  uVar11 = *(undefined8 *)((long)plVar8 + _DAT_112ff86d8);
  *(long *)((long)plVar8 + _DAT_112ff86d8) = lVar5;
  func_0x000107c61170(plVar8);
  func_0x000107c6142c(uVar11);
  lVar5 = _DAT_112ff8558;
  func_0x000107c61428(unaff_x20 + _DAT_112ff8558,alStack_90,0x21,0);
  func_0x000103c1ba64();
  uVar9 = *(ulong *)(unaff_x20 + lVar5);
  uVar10 = uVar9 & 0xffffffffffffff8;
  uVar2 = *(ulong *)(uVar10 + 0x10);
  param_7 = uVar2 + 1;
  if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar2) {
    uVar9 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
    FUN_103c1bad4(uVar9,param_7,1);
    uVar10 = uVar9 & 0xffffffffffffff8;
  }
  *(long *)(uVar10 + 0x10) = param_7;
  *(long **)(uVar10 + uVar2 * 8 + 0x20) = plVar8;
  *(ulong *)(unaff_x20 + lVar5) = uVar9;
  func_0x000107c614a8(alStack_90);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  func_0x000107c60e78();
LAB_103c21058:
  alStack_90[0] = param_3;
  func_0x000107c6157c(param_7);
  func_0x000107c60614(&UNK_1106eae28,alStack_90,&UNK_1106eae28,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103c21084);
  (*pcVar3)();
}



/* Entry: 103c21084; end: 103c211b7;  */

void FUN_103c21084(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103c2108c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 103c211b8; end: 103c212db;  */

void FUN_103c211b8(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  double dVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  ppuVar3 = &puStack_a0;
  ppuVar4 = &puStack_a0;
  dVar6 = param_1;
  func_0x000108618fd4();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1106eb740;
  lStack_80 = param_2;
  uStack_78 = param_3;
  func_0x000107c60bc4(&puStack_a0);
  uVar2 = uStack_78;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(uVar2);
  puVar5 = (undefined1 *)0x0;
  if (param_4 != 0) {
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100288f10;
    puStack_88 = &UNK_1106eb768;
    lStack_80 = param_4;
    uStack_78 = param_5;
    func_0x000107c60bc4(&puStack_a0);
    uVar2 = uStack_78;
    func_0x000107c6157c(param_5);
    func_0x000107c61574(uVar2);
    puVar5 = (undefined1 *)ppuVar4;
  }
  func_0x000107c614e8();
  func_0x000107c3dcd0(param_1 * dVar6);
  func_0x000107c60bd0(puVar5);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 103c212dc; end: 103c212f7;  */

void FUN_103c212dc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103c212f8; end: 103c213d3;  */

void FUN_103c212f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_1106eb7f0;
  func_0x000107c613fc(&UNK_1106eb7f0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  if (param_5 == 0) {
    uVar3 = 0;
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_1106eb818;
    func_0x000107c613fc(&UNK_1106eb818,0x18,7);
    *(long *)(puVar2 + 0x10) = param_5;
    uVar3 = 0x103c214c0;
  }
  func_0x000107c614ec(param_2);
  FUN_103c211b8(param_1,0x103c21658,puVar1,uVar3,puVar2);
  func_0x000101237350(uVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103c213d4; end: 103c214b3;  */

void FUN_103c213d4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  double dVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  dVar4 = param_1;
  func_0x000107c60bc4();
  puVar2 = &UNK_1106eb7a0;
  func_0x000107c613fc(&UNK_1106eb7a0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  func_0x000108618fd4();
  pcStack_50 = FUN_103c214b4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1106eb7b8;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c3dccc(param_1 * dVar4,param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 103c214b4; end: 103c214d3;  */

void FUN_103c214b4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103c214bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 103c214d4; end: 103c2157f;  */

void FUN_103c214d4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c21580; end: 103c215af;  */

bool FUN_103c21580(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103c215b0; end: 103c215ff;  */

void FUN_103c215b0(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112ff8958 != 0) {
    return;
  }
  puVar1 = &UNK_1106eb840;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112ff8958 = param_1;
  return;
}



/* Entry: 103c21600; end: 103c21603;  */

void FUN_103c21600(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ff8960 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_103c215b0(0xff);
  puVar2 = &UNK_10dc67508;
  func_0x000107c61520(&UNK_10dc67508,uVar1);
  puRam0000000112ff8960 = puVar2;
  return;
}



/* Entry: 103c21604; end: 103c21647;  */

void FUN_103c21604(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ff8960 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_103c215b0(0xff);
  puVar2 = &UNK_10dc67508;
  func_0x000107c61520(&UNK_10dc67508,uVar1);
  puRam0000000112ff8960 = puVar2;
  return;
}



/* Entry: 103c21648; end: 103c2165b;  */

void FUN_103c21648(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103c2165c; end: 103c216a7; -[_TtC8SCTalkUIP33_9FA36C64DDED32FD5F958CCF691D56F122BitmojiAvatarContainer bitmojiId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c2165c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff8978);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ff8978))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103c216a8; end: 103c216b7; -[_TtC8SCTalkUIP33_9FA36C64DDED32FD5F958CCF691D56F122BitmojiAvatarContainer bitmojiBirthdayHead] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c216a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff8980));
  return;
}



/* Entry: 103c216b8; end: 103c216eb; -[_TtC8SCTalkUIP33_9FA36C64DDED32FD5F958CCF691D56F122BitmojiAvatarContainer setBitmojiBirthdayHead:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c216b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ff8980);
  *(undefined8 *)(param_1 + _DAT_112ff8980) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103c216ec; end: 103c21aa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103c216ec(undefined8 param_1,ulong param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar5 = param_2;
  func_0x000107c614f0();
  lVar3 = _DAT_112ff8980;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8980) = 0;
  if (*(long *)(param_3 + 0x10) != 0) {
    lVar2 = 0;
    FUN_103c23868();
    if (((uVar5 & 1) != 0) && (*(long *)(param_3 + 0x10) != 0)) {
      uVar10 = *(undefined8 *)(*(long *)(param_3 + 0x38) + lVar2 * 8);
      lVar2 = 1;
      FUN_103c23868();
      if (((uVar5 & 1) != 0) && (*(long *)(param_3 + 0x10) != 0)) {
        uVar11 = *(undefined8 *)(*(long *)(param_3 + 0x38) + lVar2 * 8);
        lVar2 = 2;
        FUN_103c23868();
        if (((uVar5 & 1) != 0) && (*(long *)(param_3 + 0x10) != 0)) {
          uVar12 = *(undefined8 *)(*(long *)(param_3 + 0x38) + lVar2 * 8);
          lVar2 = 4;
          FUN_103c23868();
          if (((uVar5 & 1) != 0) && (*(long *)(param_3 + 0x10) != 0)) {
            uVar6 = *(undefined8 *)(*(long *)(param_3 + 0x38) + lVar2 * 8);
            lVar2 = 5;
            FUN_103c23868();
            if (((uVar5 & 1) != 0) && (*(long *)(param_3 + 0x10) != 0)) {
              uVar7 = *(undefined8 *)(*(long *)(param_3 + 0x38) + lVar2 * 8);
              lVar2 = 6;
              FUN_103c23868();
              if (((uVar5 & 1) != 0) && (*(long *)(param_3 + 0x10) != 0)) {
                uVar8 = *(undefined8 *)(*(long *)(param_3 + 0x38) + lVar2 * 8);
                lVar2 = 7;
                FUN_103c23868();
                if (((uVar5 & 1) != 0) && (*(long *)(param_3 + 0x10) != 0)) {
                  uVar9 = *(undefined8 *)(*(long *)(param_3 + 0x38) + lVar2 * 8);
                  lVar2 = 8;
                  FUN_103c23868();
                  if ((uVar5 & 1) != 0) {
                    lVar2 = *(long *)(*(long *)(param_3 + 0x38) + lVar2 * 8);
                    func_0x000107c61174();
                    func_0x000107c61174();
                    func_0x000107c61174();
                    func_0x000107c61174();
                    func_0x000107c61174();
                    func_0x000107c61174();
                    func_0x000107c61174();
                    func_0x000107c61174();
                    func_0x000107c6142c(param_3);
                    if (param_4 != 0) {
                      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff8978);
                      *puVar1 = param_1;
                      puVar1[1] = param_2;
                      *(undefined8 *)(unaff_x20 + _DAT_112ff8988) = uVar10;
                      *(undefined8 *)(unaff_x20 + _DAT_112ff8990) = uVar11;
                      *(undefined8 *)(unaff_x20 + _DAT_112ff8998) = uVar12;
                      *(undefined8 *)(unaff_x20 + _DAT_112ff89a0) = uVar6;
                      *(undefined8 *)(unaff_x20 + _DAT_112ff89a8) = uVar7;
                      *(undefined8 *)(unaff_x20 + _DAT_112ff89b0) = uVar8;
                      *(undefined8 *)(unaff_x20 + _DAT_112ff89b8) = uVar9;
                      *(long *)(unaff_x20 + _DAT_112ff89c0) = lVar2;
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174(uVar6);
                      func_0x000107c61174(uVar7);
                      func_0x000107c61174(uVar8);
                      func_0x000107c61174(uVar9);
                      func_0x000107c61174(lVar2);
                      func_0x000107c61174();
                      lVar3 = param_4;
                      func_0x000107c4dfe8();
                      func_0x000107c61180();
                      *(long *)(unaff_x20 + _DAT_112ff89c8) = lVar3;
                      puVar4 = &stack0xffffffffffffff90;
                      func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
                      func_0x000107c61170(param_4);
                      func_0x000107c61170(param_4);
                      func_0x000107c61170(lVar2);
                      func_0x000107c61170(uVar9);
                      func_0x000107c61170(uVar8);
                      func_0x000107c61170(uVar7);
                      func_0x000107c61170(uVar6);
                      func_0x000107c61170(uVar12);
                      func_0x000107c61170(uVar11);
                      func_0x000107c61170(uVar10);
                      return puVar4;
                    }
                    func_0x000107c61170(uVar10);
                    func_0x000107c61170(uVar11);
                    func_0x000107c61170(uVar12);
                    func_0x000107c61170(uVar6);
                    func_0x000107c61170(uVar7);
                    func_0x000107c61170(uVar8);
                    func_0x000107c61170(uVar9);
                    param_4 = lVar2;
                    goto LAB_103c21a18;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_0x000107c6142c(param_3);
LAB_103c21a18:
  func_0x000107c61170(param_4);
  func_0x000107c6142c(param_2);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + lVar3));
  func_0x000107c61464();
  return (undefined1 *)0x0;
}



/* Entry: 103c21aa4; end: 103c21ab3; -[_TtC8SCTalkUIP33_9FA36C64DDED32FD5F958CCF691D56F122BitmojiAvatarContainer bitmojiHead] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c21aa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff8988));
  return;
}



/* Entry: 103c21ab4; end: 103c21ac3; -[_TtC8SCTalkUIP33_9FA36C64DDED32FD5F958CCF691D56F122BitmojiAvatarContainer bitmojiHands] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c21ab4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff8990));
  return;
}



/* Entry: 103c21ac4; end: 103c21ad3; -[_TtC8SCTalkUIP33_9FA36C64DDED32FD5F958CCF691D56F122BitmojiAvatarContainer bitmojiTypingBody] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c21ac4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff8998));
  return;
}



/* Entry: 103c21ad4; end: 103c21ae3; -[_TtC8SCTalkUIP33_9FA36C64DDED32FD5F958CCF691D56F122BitmojiAvatarContainer bitmojiTypingArm] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c21ad4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff89a0));
  return;
}



/* Entry: 103c21ae4; end: 103c21af3; -[_TtC8SCTalkUIP33_9FA36C64DDED32FD5F958CCF691D56F122BitmojiAvatarContainer bitmojiPeeking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c21ae4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff89a8));
  return;
}



/* Entry: 103c21af4; end: 103c21b03; -[_TtC8SCTalkUIP33_9FA36C64DDED32FD5F958CCF691D56F122BitmojiAvatarContainer bitmojiUsingReplyCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c21af4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff89b0));
  return;
}



/* Entry: 103c21b04; end: 103c21b13; -[_TtC8SCTalkUIP33_9FA36C64DDED32FD5F958CCF691D56F122BitmojiAvatarContainer bitmojiViewingChatMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c21b04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff89b8));
  return;
}



/* Entry: 103c21b14; end: 103c21b23; -[_TtC8SCTalkUIP33_9FA36C64DDED32FD5F958CCF691D56F122BitmojiAvatarContainer bitmojiInGame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c21b14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff89c0));
  return;
}



/* Entry: 103c21b24; end: 103c21b33; -[_TtC8SCTalkUIP33_9FA36C64DDED32FD5F958CCF691D56F122BitmojiAvatarContainer pet] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c21b24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff89c8));
  return;
}



/* Entry: 103c21b34; end: 103c21b5f; -[_TtC8SCTalkUIP33_9FA36C64DDED32FD5F958CCF691D56F122BitmojiAvatarContainer init] */

void FUN_103c21b34(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCTalkUI.BitmojiAvatarContainer",0x1f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c21b60);
  (*pcVar1)();
}



/* Entry: 103c21b60; end: 103c21c2b; -[_TtC8SCTalkUIP33_9FA36C64DDED32FD5F958CCF691D56F122BitmojiAvatarContainer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103c21b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c21bb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c21bd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c21bf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c21c10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c21bf4) */
/* WARNING: Removing unreachable block (ram,0x000103c21bd4) */
/* WARNING: Removing unreachable block (ram,0x000103c21bb4) */
/* WARNING: Removing unreachable block (ram,0x000103c21b94) */
/* WARNING: Removing unreachable block (ram,0x000103c21c14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c21b60(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff8978 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff8980));
  return;
}



/* Entry: 103c21c2c; end: 103c21c8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c21c2c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff8968) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff8970) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c21c90; end: 103c21d07; -[SCTAvatarServices initWithBitmoji3DContentFetcher:petImageFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c21c90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ff8968) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ff8970) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 103c21d08; end: 103c21f3b;  */

void FUN_103c21d08(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  ppuVar6 = &puStack_d0;
  ppuVar7 = &puStack_d0;
  ppuVar8 = &puStack_d0;
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  if (*(long *)(param_2 + 0x10) != 0) {
    func_0x000107c4218c();
  }
  func_0x000107c61428(param_2 + 0x10,auStack_a0,1,0);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  func_0x000107c61170(uVar2);
  puVar3 = &UNK_1106eb9f8;
  func_0x000107c613fc(&UNK_1106eb9f8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  puVar4 = &UNK_1106eba20;
  func_0x000107c613fc(&UNK_1106eba20,0x18,7);
  *(undefined **)(puVar4 + 0x10) = puVar3 + 0x10;
  puVar5 = &UNK_1106eba48;
  func_0x000107c613fc(&UNK_1106eba48,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_103c23830;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_b0 = (code *)0x103c24270;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0x42000000;
  puStack_c0 = &UNK_1010a45c8;
  puStack_b8 = &UNK_1106eba60;
  puStack_a8 = puVar5;
  func_0x000107c60bc4(&puStack_d0);
  func_0x000107c61574(puStack_a8);
  pcStack_b0 = FUN_103c21f3c;
  puStack_a8 = (undefined *)0x0;
  puStack_d0 = puVar1;
  uStack_c8 = 0x42000000;
  puStack_c0 = &UNK_100e27b38;
  puStack_b8 = &UNK_1106eba88;
  func_0x000107c60bc4(&puStack_d0);
  func_0x000107c61574(puStack_a8);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  puVar5 = &UNK_1106ebac0;
  func_0x000107c613fc(&UNK_1106ebac0,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = param_3;
  *(undefined8 *)(puVar5 + 0x18) = param_4;
  *(undefined **)(puVar5 + 0x20) = puVar3;
  *(undefined8 *)(puVar5 + 0x28) = param_5;
  pcStack_b0 = FUN_103c2385c;
  puStack_d0 = puVar1;
  uStack_c8 = 0x42000000;
  puStack_c0 = &UNK_1000f6b44;
  puStack_b8 = &UNK_1106ebad8;
  puStack_a8 = puVar5;
  func_0x000107c60bc4(&puStack_d0);
  puVar5 = puStack_a8;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar5);
  func_0x0001000d76cc("SCTAvatarServices",ppuVar8);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 103c21f3c; end: 103c21f3f;  */

void FUN_103c21f3c(void)

{
  return;
}



/* Entry: 103c21f40; end: 103c21fbb;  */

void FUN_103c21f40(code *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar1 = uVar2;
  func_0x000107c61174(uVar2);
  (*param_1)(uVar2,param_4);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 103c21fbc; end: 103c2284f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c21fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined1 *puVar15;
  long extraout_x8;
  undefined1 *puVar16;
  long lVar17;
  long extraout_x8_00;
  long lVar18;
  char *pcVar19;
  long lVar20;
  long unaff_x20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined1 auStack_170 [8];
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar25 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar25 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar16 = auStack_170 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar17 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar18 = (long)puVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &UNK_1106ebb10;
  func_0x000107c613fc(&UNK_1106ebb10,0x11,7);
  pcVar19 = puVar3 + 0x10;
  *pcVar19 = '\0';
  puVar4 = &UNK_1106ebb38;
  func_0x000107c613fc(&UNK_1106ebb38,0x18,7);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_103c23fc8();
  *(undefined **)(puVar4 + 0x10) = puVar5;
  puVar5 = &UNK_1106ebb60;
  func_0x000107c613fc(&UNK_1106ebb60,0x18,7);
  puStack_168 = (undefined8 *)(puVar5 + 0x10);
  *puStack_168 = 0;
  puVar6 = &UNK_1106ebb88;
  func_0x000107c613fc(&UNK_1106ebb88,0x40,7);
  *(undefined8 *)(puVar6 + 0x10) = param_1;
  *(undefined8 *)(puVar6 + 0x18) = param_2;
  *(undefined **)(puVar6 + 0x20) = puVar4;
  *(undefined **)(puVar6 + 0x28) = puVar5;
  *(undefined8 *)(puVar6 + 0x30) = param_4;
  *(undefined8 *)(puVar6 + 0x38) = param_5;
  puVar7 = &UNK_1106ebbb0;
  func_0x000107c613fc(&UNK_1106ebbb0,0x40,7);
  *(undefined **)(puVar7 + 0x10) = puVar3;
  *(undefined8 *)(puVar7 + 0x18) = param_4;
  *(undefined8 *)(puVar7 + 0x20) = param_5;
  *(undefined **)(puVar7 + 0x28) = puVar4;
  *(code **)(puVar7 + 0x30) = FUN_103c240cc;
  *(undefined **)(puVar7 + 0x38) = puVar6;
  puVar8 = &UNK_1106ebbd8;
  func_0x000107c613fc(&UNK_1106ebbd8,0x40,7);
  *(undefined **)(puVar8 + 0x10) = puVar3;
  *(undefined **)(puVar8 + 0x18) = puVar5;
  *(code **)(puVar8 + 0x20) = FUN_103c240cc;
  *(undefined **)(puVar8 + 0x28) = puVar6;
  *(undefined8 *)(puVar8 + 0x30) = param_4;
  *(undefined8 *)(puVar8 + 0x38) = param_5;
  lVar20 = *(long *)(unaff_x20 + _DAT_112ff8968);
  uStack_160 = param_4;
  uStack_158 = param_5;
  func_0x000107c61580(param_5,3);
  func_0x000107c61580(puVar4,2);
  func_0x000107c61580(puVar5,2);
  func_0x000107c61580(puVar3,2);
  puVar15 = (undefined1 *)0x2;
  func_0x000107c61580(puVar6,2);
  func_0x000107c61434(param_2);
  lVar25 = 0;
  do {
    lVar24 = *(long *)(lVar25 + 0x112ff8a48);
    lVar23 = lVar24;
    func_0x00010b0e4a34();
    func_0x000107c61180();
    if (lVar23 == 0) {
      lVar22 = 0;
      puVar15 = (undefined1 *)0xe000000000000000;
    }
    else {
      lVar22 = lVar23;
      func_0x000107c5faec();
      func_0x000107c61170(lVar23);
    }
    puVar9 = PTR_PTR_1126af5d8;
    func_0x000107c610f8(PTR_PTR_1126af5d8);
    uVar21 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5fadc(lVar22,puVar15);
    func_0x000107c458cc(puVar9);
    func_0x000107c61170(uVar21);
    func_0x000107c61170(lVar22);
    puVar10 = &UNK_1106eb980;
    func_0x000107c613fc(&UNK_1106eb980,0x18,7);
    *(undefined8 *)(puVar10 + 0x10) = 0;
    lVar23 = lVar20;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar23 == 0) {
      func_0x000107c61170(puVar9);
      func_0x000107c6142c(puVar15);
      lVar23 = 0;
    }
    else {
      lVar22 = lVar23;
      func_0x000107c43298();
      func_0x000107c61180();
      func_0x000107c615e8(lVar23);
      puVar11 = &UNK_1106ebd40;
      func_0x000107c613fc(&UNK_1106ebd40,0x30,7);
      *(undefined **)(puVar11 + 0x10) = puVar10;
      *(undefined8 *)(puVar11 + 0x18) = 0x103c240dc;
      *(undefined **)(puVar11 + 0x20) = puVar7;
      *(long *)(puVar11 + 0x28) = lVar24;
      pcStack_b8 = (code *)0x103c24264;
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0x42000000;
      puStack_c8 = &UNK_1010a3098;
      puStack_c0 = &UNK_1106ebd58;
      ppuVar12 = &puStack_d8;
      puStack_b0 = puVar11;
      func_0x000107c60bc4(ppuVar12);
      puVar11 = puStack_b0;
      func_0x000107c6157c(puVar10);
      func_0x000107c6157c(puVar7);
      func_0x000107c61574(puVar11);
      lVar23 = lVar22;
      func_0x000107c5c320();
      func_0x000107c61180();
      func_0x000107c61170(puVar9);
      func_0x000107c6142c(puVar15);
      func_0x000107c60bd0(ppuVar12);
      func_0x000107c61170(lVar22);
    }
    puVar15 = auStack_90;
    func_0x000107c61428(puVar10 + 0x10,puVar15,1,0);
    uVar21 = *(undefined8 *)(puVar10 + 0x10);
    *(long *)(puVar10 + 0x10) = lVar23;
    func_0x000107c61574(puVar10);
    func_0x000107c61170(uVar21);
    lVar25 = lVar25 + 8;
  } while (lVar25 != 0x40);
  func_0x000100029394(param_3,puVar16);
  puVar15 = puVar16;
  (**(code **)(lVar17 + 0x30))(puVar16,1,lVar2);
  if ((int)puVar15 == 1) {
    func_0x0001000293e4(puVar16);
    puVar10 = PTR_PTR_1126af5d0;
    func_0x000107c61168(PTR_PTR_1126af5d0);
    puVar9 = PTR_PTR_1126ae750;
    func_0x000107c61168(PTR_PTR_1126ae750);
    func_0x000107c4d73c();
    func_0x000107c61180();
    func_0x000107c5c3c8(puVar10);
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    func_0x000107c61428(pcVar19,auStack_a8,0,0);
    if (*pcVar19 == '\x01') {
      func_0x000107c61574(puVar3);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar5);
      func_0x000107c61574(puVar7);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(puVar8);
      func_0x000107c61170(puVar10);
      return;
    }
    puVar9 = &UNK_1106ebc00;
    func_0x000107c613fc(&UNK_1106ebc00,0x28,7);
    *(undefined8 **)(puVar9 + 0x10) = puStack_168;
    *(code **)(puVar9 + 0x18) = FUN_103c240cc;
    *(undefined **)(puVar9 + 0x20) = puVar6;
    puVar11 = &UNK_1106ebc28;
    func_0x000107c613fc(&UNK_1106ebc28,0x20,7);
    *(undefined8 *)(puVar11 + 0x10) = 0x103c240fc;
    *(undefined **)(puVar11 + 0x18) = puVar9;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_b8 = FUN_103c24108;
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0x42000000;
    puStack_c8 = (undefined *)0x103c24290;
    puStack_c0 = &UNK_1106ebc40;
    ppuVar12 = &puStack_d8;
    puStack_b0 = puVar11;
    func_0x000107c60bc4(ppuVar12);
    puVar11 = puStack_b0;
    func_0x000107c6157c(puVar6);
    func_0x000107c61574(puVar11);
    puVar11 = &UNK_1106ebc78;
    func_0x000107c613fc(&UNK_1106ebc78,0x28,7);
    uVar21 = uStack_158;
    *(char **)(puVar11 + 0x10) = pcVar19;
    *(undefined8 *)(puVar11 + 0x18) = uStack_160;
    *(undefined8 *)(puVar11 + 0x20) = uStack_158;
    puVar13 = &UNK_1106ebca0;
    func_0x000107c613fc(&UNK_1106ebca0,0x20,7);
    *(code **)(puVar13 + 0x10) = FUN_103c24128;
    *(undefined **)(puVar13 + 0x18) = puVar11;
    pcStack_b8 = (code *)0x103c24274;
    puStack_d8 = puVar1;
    uStack_d0 = 0x42000000;
    puStack_c8 = &UNK_100e27b38;
    puStack_c0 = &UNK_1106ebcb8;
    ppuVar14 = &puStack_d8;
    puStack_b0 = puVar13;
    func_0x000107c60bc4(ppuVar14);
    puVar13 = puStack_b0;
    func_0x000107c6157c(uVar21);
    func_0x000107c61574(puVar13);
    func_0x000107c4c754(puVar10);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar6);
    func_0x000107c61574(puVar8);
    func_0x000107c61170(puVar10);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar11);
    puVar6 = puVar9;
  }
  else {
    (**(code **)(lVar17 + 0x20))(lVar18,puVar16,lVar2);
    lVar25 = *(long *)(unaff_x20 + _DAT_112ff8970);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar25 == 0) {
      (**(code **)(lVar17 + 8))(lVar18,lVar2);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar5);
      func_0x000107c61574(puVar7);
      func_0x000107c61574(puVar8);
    }
    else {
      lVar20 = lVar25;
      func_0x000107c5ed90();
      puVar10 = &UNK_1106ebcf0;
      func_0x000107c613fc(&UNK_1106ebcf0,0x20,7);
      *(undefined8 *)(puVar10 + 0x10) = 0x103c240ec;
      *(undefined **)(puVar10 + 0x18) = puVar8;
      pcStack_b8 = FUN_103c24128;
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0x42000000;
      puStack_c8 = &UNK_102ebe918;
      puStack_c0 = &UNK_1106ebd08;
      ppuVar12 = &puStack_d8;
      puStack_b0 = puVar10;
      func_0x000107c60bc4(ppuVar12);
      puVar10 = puStack_b0;
      func_0x000107c6157c(puVar8);
      func_0x000107c61574(puVar10);
      func_0x000107c43120(lVar25);
      func_0x000107c60bd0(ppuVar12);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(puVar7);
      func_0x000107c61574(puVar8);
      func_0x000107c615e8(lVar25);
      func_0x000107c61170(lVar20);
      (**(code **)(lVar17 + 8))(lVar18,lVar2);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(puVar4);
      puVar6 = puVar5;
    }
  }
  func_0x000107c61574(puVar6);
  return;
}



/* Entry: 103c22850; end: 103c22a07;  */

void FUN_103c22850(long param_1,undefined8 param_2,long param_3,long param_4,code *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  func_0x000107c61428(param_4 + 0x10,auStack_80,0,0);
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  FUN_103c2371c(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  func_0x000107c61434(param_2);
  func_0x000107c61434(uVar2);
  FUN_103c216ec(param_1,param_2,uVar2,uVar1);
  if (param_1 != 0) {
    (*param_5)();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103c22a08; end: 103c22ac3;  */

void FUN_103c22a08(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  
  if (param_1 == 0) {
    uVar3 = param_2;
    FUN_103c23868();
    if ((uVar3 & 1) != 0) {
      iVar1 = (int)*unaff_x20;
      func_0x000107c61558();
      lVar2 = *unaff_x20;
      if (iVar1 == 0) {
        FUN_103c23a54();
      }
      func_0x000107c61170(*(undefined8 *)(*(long *)(lVar2 + 0x38) + param_2 * 8));
      func_0x000103c23e34(param_2,lVar2);
      *unaff_x20 = lVar2;
    }
  }
  else {
    lVar2 = *unaff_x20;
    func_0x000107c61558(lVar2);
    lVar4 = *unaff_x20;
    FUN_103c23924(param_1,param_2,lVar2);
    *unaff_x20 = lVar4;
  }
  return;
}



/* Entry: 103c22ac4; end: 103c22c9b;  */

void FUN_103c22ac4(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    puVar2 = &UNK_1106ebe30;
    func_0x000107c613fc(&UNK_1106ebe30,0x28,7);
    *(long *)(puVar2 + 0x10) = param_3 + 0x10;
    *(undefined8 *)(puVar2 + 0x18) = param_4;
    *(undefined8 *)(puVar2 + 0x20) = param_5;
    puVar3 = &UNK_1106ebe58;
    func_0x000107c613fc(&UNK_1106ebe58,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x103c24288;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x103c24278;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = (undefined *)0x103c24290;
    puStack_a0 = &UNK_1106ebe70;
    ppuVar4 = &puStack_b8;
    puStack_90 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_90;
    func_0x000107c6157c(param_5);
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_1106ebea8;
    func_0x000107c613fc(&UNK_1106ebea8,0x28,7);
    *(long *)(puVar3 + 0x10) = param_2 + 0x10;
    *(undefined8 *)(puVar3 + 0x18) = param_6;
    *(undefined8 *)(puVar3 + 0x20) = param_7;
    puVar5 = &UNK_1106ebed0;
    func_0x000107c613fc(&UNK_1106ebed0,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = 0x103c24284;
    *(undefined **)(puVar5 + 0x18) = puVar3;
    uStack_98 = 0x103c2427c;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_100e27b38;
    puStack_a0 = &UNK_1106ebee8;
    ppuVar6 = &puStack_b8;
    puStack_90 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_90;
    func_0x000107c6157c(param_7);
    func_0x000107c61574(puVar5);
    func_0x000107c4c754(param_1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar2);
  }
  return;
}



/* Entry: 103c22c9c; end: 103c22d0b;  */

void FUN_103c22c9c(undefined8 param_1,undefined8 *param_2,code *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2,auStack_58,1,0);
  uVar1 = *param_2;
  *param_2 = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61170(uVar1);
  (*param_3)();
  return;
}



/* Entry: 103c22d0c; end: 103c22dd3;  */

void FUN_103c22d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_1106ebd90;
  func_0x000107c613fc(&UNK_1106ebd90,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  pcStack_40 = FUN_103c2418c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1106ebda8;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar1);
  func_0x0001000d76cc("SCTAvatarServices",ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 103c22dd4; end: 103c22eff;  */

void FUN_103c22dd4(undefined8 param_1,code *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_1106ebde0;
  func_0x000107c613fc(&UNK_1106ebde0,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_103c22f00;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  pcStack_50 = FUN_103c24198;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_103c22f74;
  puStack_58 = &UNK_1106ebdf8;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4c280(param_1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0x38,0xe9,0x2d,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    func_0x000107c61174(param_1);
    (*param_2)();
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c22f00);
  (*pcVar1)();
}



/* Entry: 103c22f00; end: 103c22f73;  */

void FUN_103c22f00(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae750;
  if (param_2 == 0) {
    func_0x000107c61168();
    func_0x000107c4d73c();
  }
  else {
    func_0x000107c61168();
    func_0x000107c5b58c();
  }
  func_0x000107c61180();
  uVar2 = 0x112d38358;
  func_0x0001000285a8(0x112d38358,&UNK_10d902090);
  param_1[3] = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 103c22f74; end: 103c2305b;  */

void FUN_103c22f74(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_60,param_2);
  func_0x000107c61170(uVar2);
  if (lStack_48 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_60,lStack_48);
    lVar5 = *(long *)(lStack_48 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
    puVar4 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar5 + 0x10))(puVar4);
    puVar3 = puVar4;
    func_0x000107c605b0(puVar4,lStack_48);
    (**(code **)(lVar5 + 8))(puVar4,lStack_48);
    func_0x000100183ab8(auStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 103c2305c; end: 103c230bb;  */

void FUN_103c2305c(long param_1,code *param_2)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c61174();
    (*param_2)(1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  (*param_2)(0,0);
  return;
}



/* Entry: 103c230bc; end: 103c230c3;  */

void FUN_103c230bc(long param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c61174();
    (*pcVar1)(1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  (*pcVar1)(0,0,*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103c230c4; end: 103c23237; -[SCTAvatarServices fetchAvatarWithBitmojiId:petImageURL:completion:] */

void FUN_103c230c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  
  lVar1 = 0x112d36580;
  puVar4 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  if (param_4 == 0) {
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(puVar5,param_4);
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar5,param_4 == 0,1);
  puVar2 = &UNK_1106eb908;
  func_0x000107c613fc(&UNK_1106eb908,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  puVar3 = &UNK_1106eb930;
  func_0x000107c613fc(&UNK_1106eb930,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0x103c24268;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar2);
  FUN_103c21fbc(param_3,puVar4,puVar5,0x103c2426c,puVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(puVar4);
  func_0x000107c61574(puVar3);
  func_0x0001000293e4(puVar5);
  return;
}



/* Entry: 103c23238; end: 103c234f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c23238(long param_1,code *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  if (param_1 == 0) {
    (*param_2)(0,0);
  }
  else {
    pcVar7 = param_2;
    func_0x000107c61174();
    lVar1 = 0x11;
    func_0x00010b0e4a34();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar9 = 0;
      pcVar7 = (code *)0xe000000000000000;
    }
    else {
      lVar9 = lVar1;
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
    }
    puVar2 = &UNK_1106eb958;
    func_0x000107c613fc(&UNK_1106eb958,0x28,7);
    *(long *)(puVar2 + 0x10) = param_1;
    *(code **)(puVar2 + 0x18) = param_2;
    *(undefined8 *)(puVar2 + 0x20) = param_3;
    puVar3 = PTR_PTR_1126af5d8;
    func_0x000107c610f8(PTR_PTR_1126af5d8);
    func_0x000107c61174(param_1);
    func_0x000107c6157c(param_3);
    func_0x000107c5fadc(param_5,param_6);
    func_0x000107c5fadc(lVar9,pcVar7);
    func_0x000107c458cc(puVar3);
    func_0x000107c61170(param_5);
    func_0x000107c61170(lVar9);
    puVar4 = &UNK_1106eb980;
    func_0x000107c613fc(&UNK_1106eb980,0x18,7);
    *(undefined8 *)(puVar4 + 0x10) = 0;
    lVar1 = *(long *)(param_4 + _DAT_112ff8968);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c61170(puVar3);
      func_0x000107c61170(param_1);
      func_0x000107c61574(puVar2);
      func_0x000107c6142c(pcVar7);
      lVar1 = 0;
    }
    else {
      lVar9 = lVar1;
      func_0x000107c43298();
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      puVar5 = &UNK_1106eb9a8;
      func_0x000107c613fc(&UNK_1106eb9a8,0x30,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(code **)(puVar5 + 0x18) = FUN_103c237b8;
      *(undefined **)(puVar5 + 0x20) = puVar2;
      *(undefined8 *)(puVar5 + 0x28) = 0x11;
      pcStack_70 = FUN_103c23808;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1010a3098;
      puStack_78 = &UNK_1106eb9c0;
      puStack_68 = puVar5;
      func_0x000107c60bc4(&puStack_90);
      puVar5 = puStack_68;
      func_0x000107c6157c(puVar4);
      func_0x000107c6157c(puVar2);
      func_0x000107c61574(puVar5);
      lVar1 = lVar9;
      func_0x000107c5c320();
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(param_1);
      func_0x000107c61574(puVar2);
      func_0x000107c6142c(pcVar7);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(lVar9);
    }
    func_0x000107c61428(puVar4 + 0x10,&puStack_90,1,0);
    uVar8 = *(undefined8 *)(puVar4 + 0x10);
    *(long *)(puVar4 + 0x10) = lVar1;
    func_0x000107c61574(puVar4);
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 103c234f4; end: 103c234f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c234f4(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  long unaff_x20;
  long lVar13;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
  ppuVar9 = &puStack_90;
  if (param_1 == 0) {
    (*pcVar1)(0,0);
  }
  else {
    pcVar11 = pcVar1;
    func_0x000107c61174();
    lVar2 = 0x11;
    func_0x00010b0e4a34();
    func_0x000107c61180();
    if (lVar2 == 0) {
      lVar13 = 0;
      pcVar11 = (code *)0xe000000000000000;
    }
    else {
      lVar13 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
    }
    puVar3 = &UNK_1106eb958;
    func_0x000107c613fc(&UNK_1106eb958,0x28,7);
    *(long *)(puVar3 + 0x10) = param_1;
    *(code **)(puVar3 + 0x18) = pcVar1;
    *(undefined8 *)(puVar3 + 0x20) = uVar12;
    puVar4 = PTR_PTR_1126af5d8;
    func_0x000107c610f8(PTR_PTR_1126af5d8);
    func_0x000107c61174(param_1);
    func_0x000107c6157c(uVar12);
    func_0x000107c5fadc(uVar5,uVar10);
    func_0x000107c5fadc(lVar13,pcVar11);
    func_0x000107c458cc(puVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar13);
    puVar6 = &UNK_1106eb980;
    func_0x000107c613fc(&UNK_1106eb980,0x18,7);
    *(undefined8 *)(puVar6 + 0x10) = 0;
    lVar7 = *(long *)(lVar7 + _DAT_112ff8968);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar7 == 0) {
      func_0x000107c61170(puVar4);
      func_0x000107c61170(param_1);
      func_0x000107c61574(puVar3);
      func_0x000107c6142c(pcVar11);
      lVar7 = 0;
    }
    else {
      lVar2 = lVar7;
      func_0x000107c43298();
      func_0x000107c61180();
      func_0x000107c615e8(lVar7);
      puVar8 = &UNK_1106eb9a8;
      func_0x000107c613fc(&UNK_1106eb9a8,0x30,7);
      *(undefined **)(puVar8 + 0x10) = puVar6;
      *(code **)(puVar8 + 0x18) = FUN_103c237b8;
      *(undefined **)(puVar8 + 0x20) = puVar3;
      *(undefined8 *)(puVar8 + 0x28) = 0x11;
      pcStack_70 = FUN_103c23808;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1010a3098;
      puStack_78 = &UNK_1106eb9c0;
      puStack_68 = puVar8;
      func_0x000107c60bc4(&puStack_90);
      puVar8 = puStack_68;
      func_0x000107c6157c(puVar6);
      func_0x000107c6157c(puVar3);
      func_0x000107c61574(puVar8);
      lVar7 = lVar2;
      func_0x000107c5c320();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      func_0x000107c61170(param_1);
      func_0x000107c61574(puVar3);
      func_0x000107c6142c(pcVar11);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61428(puVar6 + 0x10,&puStack_90,1,0);
    uVar12 = *(undefined8 *)(puVar6 + 0x10);
    *(long *)(puVar6 + 0x10) = lVar7;
    func_0x000107c61574(puVar6);
    func_0x000107c61170(uVar12);
  }
  return;
}



/* Entry: 103c234f8; end: 103c2367f; -[SCTAvatarServices fetchBirthdayAvatarWithBitmojiId:petImageURL:completion:] */

void FUN_103c234f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  
  lVar1 = 0x112d36580;
  puVar4 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x000107c60bc4();
  func_0x000107c5faec();
  if (param_4 == 0) {
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(puVar5,param_4);
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar5,param_4 == 0,1);
  puVar2 = &UNK_1106eb8b8;
  func_0x000107c613fc(&UNK_1106eb8b8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  puVar3 = &UNK_1106eb8e0;
  func_0x000107c613fc(&UNK_1106eb8e0,0x38,7);
  *(code **)(puVar3 + 0x10) = FUN_103c2375c;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_3;
  *(undefined **)(puVar3 + 0x30) = puVar4;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c6157c(puVar2);
  func_0x000107c61434(puVar4);
  FUN_103c21fbc(param_3,puVar4,puVar5,0x103c24280,puVar3);
  func_0x000107c6142c(puVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar3);
  func_0x0001000293e4(puVar5);
  return;
}



/* Entry: 103c23680; end: 103c236ab; -[SCTAvatarServices init] */

void FUN_103c23680(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCTalkUI.AvatarServices",0x17,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c236ac);
  (*pcVar1)();
}



/* Entry: 103c236ac; end: 103c236af;  */

void FUN_103c236ac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c236b0; end: 103c236e3;  */

void FUN_103c236b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c236e4; end: 103c2371b; -[SCTAvatarServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103c23700: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c23704) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c236e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff8968));
  return;
}



/* Entry: 103c2371c; end: 103c2375b;  */

void FUN_103c2371c(void)

{
  func_0x000107c61168(&PTR_PTR_112947308);
  return;
}



/* Entry: 103c2375c; end: 103c23773;  */

void FUN_103c2375c(uint param_1,undefined8 param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103c23770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1,param_2)
  ;
  return;
}



/* Entry: 103c23774; end: 103c237a7;  */

void FUN_103c23774(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103c237a8; end: 103c237b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c237a8(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  long unaff_x20;
  long lVar13;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
  ppuVar9 = &puStack_90;
  if (param_1 == 0) {
    (*pcVar1)(0,0);
  }
  else {
    pcVar11 = pcVar1;
    func_0x000107c61174();
    lVar2 = 0x11;
    func_0x00010b0e4a34();
    func_0x000107c61180();
    if (lVar2 == 0) {
      lVar13 = 0;
      pcVar11 = (code *)0xe000000000000000;
    }
    else {
      lVar13 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
    }
    puVar3 = &UNK_1106eb958;
    func_0x000107c613fc(&UNK_1106eb958,0x28,7);
    *(long *)(puVar3 + 0x10) = param_1;
    *(code **)(puVar3 + 0x18) = pcVar1;
    *(undefined8 *)(puVar3 + 0x20) = uVar12;
    puVar4 = PTR_PTR_1126af5d8;
    func_0x000107c610f8(PTR_PTR_1126af5d8);
    func_0x000107c61174(param_1);
    func_0x000107c6157c(uVar12);
    func_0x000107c5fadc(uVar5,uVar10);
    func_0x000107c5fadc(lVar13,pcVar11);
    func_0x000107c458cc(puVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar13);
    puVar6 = &UNK_1106eb980;
    func_0x000107c613fc(&UNK_1106eb980,0x18,7);
    *(undefined8 *)(puVar6 + 0x10) = 0;
    lVar7 = *(long *)(lVar7 + _DAT_112ff8968);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar7 == 0) {
      func_0x000107c61170(puVar4);
      func_0x000107c61170(param_1);
      func_0x000107c61574(puVar3);
      func_0x000107c6142c(pcVar11);
      lVar7 = 0;
    }
    else {
      lVar2 = lVar7;
      func_0x000107c43298();
      func_0x000107c61180();
      func_0x000107c615e8(lVar7);
      puVar8 = &UNK_1106eb9a8;
      func_0x000107c613fc(&UNK_1106eb9a8,0x30,7);
      *(undefined **)(puVar8 + 0x10) = puVar6;
      *(code **)(puVar8 + 0x18) = FUN_103c237b8;
      *(undefined **)(puVar8 + 0x20) = puVar3;
      *(undefined8 *)(puVar8 + 0x28) = 0x11;
      pcStack_70 = FUN_103c23808;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1010a3098;
      puStack_78 = &UNK_1106eb9c0;
      puStack_68 = puVar8;
      func_0x000107c60bc4(&puStack_90);
      puVar8 = puStack_68;
      func_0x000107c6157c(puVar6);
      func_0x000107c6157c(puVar3);
      func_0x000107c61574(puVar8);
      lVar7 = lVar2;
      func_0x000107c5c320();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      func_0x000107c61170(param_1);
      func_0x000107c61574(puVar3);
      func_0x000107c6142c(pcVar11);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61428(puVar6 + 0x10,&puStack_90,1,0);
    uVar12 = *(undefined8 *)(puVar6 + 0x10);
    *(long *)(puVar6 + 0x10) = lVar7;
    func_0x000107c61574(puVar6);
    func_0x000107c61170(uVar12);
  }
  return;
}



/* Entry: 103c237b8; end: 103c23807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c237b8(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(lVar1 + _DAT_112ff8980);
  *(undefined8 *)(lVar1 + _DAT_112ff8980) = param_1;
  func_0x000107c61174();
  func_0x000107c61170(uVar3);
  (*pcVar2)(1,lVar1);
  return;
}



/* Entry: 103c23808; end: 103c2382f;  */

void FUN_103c23808(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long unaff_x20;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  ppuVar10 = &puStack_d0;
  ppuVar11 = &puStack_d0;
  ppuVar12 = &puStack_d0;
  func_0x000107c61428(lVar1 + 0x10,auStack_88,0,0);
  if (*(long *)(lVar1 + 0x10) != 0) {
    func_0x000107c4218c();
  }
  func_0x000107c61428(lVar1 + 0x10,auStack_a0,1,0);
  uVar6 = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  func_0x000107c61170(uVar6);
  puVar7 = &UNK_1106eb9f8;
  func_0x000107c613fc(&UNK_1106eb9f8,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = 0;
  puVar8 = &UNK_1106eba20;
  func_0x000107c613fc(&UNK_1106eba20,0x18,7);
  *(undefined **)(puVar8 + 0x10) = puVar7 + 0x10;
  puVar9 = &UNK_1106eba48;
  func_0x000107c613fc(&UNK_1106eba48,0x20,7);
  *(code **)(puVar9 + 0x10) = FUN_103c23830;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_b0 = (code *)0x103c24270;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0x42000000;
  puStack_c0 = &UNK_1010a45c8;
  puStack_b8 = &UNK_1106eba60;
  puStack_a8 = puVar9;
  func_0x000107c60bc4(&puStack_d0);
  func_0x000107c61574(puStack_a8);
  pcStack_b0 = FUN_103c21f3c;
  puStack_a8 = (undefined *)0x0;
  puStack_d0 = puVar5;
  uStack_c8 = 0x42000000;
  puStack_c0 = &UNK_100e27b38;
  puStack_b8 = &UNK_1106eba88;
  func_0x000107c60bc4(&puStack_d0);
  func_0x000107c61574(puStack_a8);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar10);
  puVar9 = &UNK_1106ebac0;
  func_0x000107c613fc(&UNK_1106ebac0,0x30,7);
  *(undefined8 *)(puVar9 + 0x10) = uVar3;
  *(undefined8 *)(puVar9 + 0x18) = uVar2;
  *(undefined **)(puVar9 + 0x20) = puVar7;
  *(undefined8 *)(puVar9 + 0x28) = uVar4;
  pcStack_b0 = FUN_103c2385c;
  puStack_d0 = puVar5;
  uStack_c8 = 0x42000000;
  puStack_c0 = &UNK_1000f6b44;
  puStack_b8 = &UNK_1106ebad8;
  puStack_a8 = puVar9;
  func_0x000107c60bc4(&puStack_d0);
  puVar9 = puStack_a8;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar9);
  func_0x0001000d76cc("SCTAvatarServices",ppuVar12);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar7);
  return;
}



/* Entry: 103c23830; end: 103c2385b;  */

void FUN_103c23830(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103c2385c; end: 103c23867;  */

void FUN_103c2385c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  uVar5 = *(undefined8 *)(lVar2 + 0x10);
  uVar4 = uVar5;
  func_0x000107c61174(uVar5);
  (*pcVar1)(uVar5,uVar3);
  func_0x000107c61170(uVar4);
  return;
}


