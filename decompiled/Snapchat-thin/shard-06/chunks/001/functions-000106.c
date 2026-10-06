/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1044f5400; end: 1044f5433; -[SCARBarSessionInfo hash] */

undefined8 FUN_1044f5400(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1044f5434();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1044f5434; end: 1044f550b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f5434(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_1130819d8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130819d8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_1130819e0))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130819e0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_1130819e8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1044f550c; end: 1044f5677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1044f550c(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long unaff_x20;
  ulong uVar10;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar6 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar3 = &lStack_68;
    _swift_dynamicCast(plVar3,auStack_60,PTR___sypN_11034f1a8 + 8,lVar6,6);
    if (((ulong)plVar3 & 1) != 0) {
      uVar5 = ((ulong *)(unaff_x20 + _DAT_1130819d8))[1];
      uVar7 = ((ulong *)(lStack_68 + _DAT_1130819d8))[1];
      uVar10 = (ulong)(uVar5 == 0 && uVar7 == 0);
      if (uVar5 != 0 && uVar7 != 0) {
        uVar10 = *(ulong *)(unaff_x20 + _DAT_1130819d8);
        if (uVar10 == *(ulong *)(lStack_68 + _DAT_1130819d8) && uVar5 == uVar7) {
          uVar10 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
        }
      }
      lVar6 = ((long *)(unaff_x20 + _DAT_1130819e0))[1];
      lVar8 = ((long *)(lStack_68 + _DAT_1130819e0))[1];
      uVar9 = (uint)(lVar6 == 0 && lVar8 == 0);
      if (lVar6 != 0 && lVar8 != 0) {
        lVar4 = *(long *)(unaff_x20 + _DAT_1130819e0);
        if (lVar4 == *(long *)(lStack_68 + _DAT_1130819e0) && lVar6 == lVar8) {
          uVar9 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar9 = (uint)lVar4;
        }
      }
      bVar1 = *(byte *)(unaff_x20 + _DAT_1130819e8);
      bVar2 = *(byte *)(lStack_68 + _DAT_1130819e8);
      _objc_release(lStack_68);
      if ((uVar10 & 1) != 0) {
        uVar9 = uVar9 & ((bVar1 ^ bVar2) ^ 1);
        goto LAB_1044f565c;
      }
    }
  }
  uVar9 = 0;
LAB_1044f565c:
  return uVar9 & 1;
}



/* Entry: 1044f5678; end: 1044f56f7; -[SCARBarSessionInfo isEqual:] */

uint FUN_1044f5678(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1044f550c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1044f56f8; end: 1044f56fb; -[SCARBarSessionInfo copyWithZone:] */

void FUN_1044f56f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044f56fc; end: 1044f5717; -[SCARBarSessionInfo description] */

void FUN_1044f56fc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044f5718; end: 1044f5793; -[SCARBarSessionInfo init] */

void FUN_1044f5718(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "LensCarouselSessionServices/ARBarSessionInfoWrapper.swift",0x39,2,0x3f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044f5760);
  (*pcVar1)();
}



/* Entry: 1044f5794; end: 1044f57d3; -[SCARBarSessionInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f5794(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130819d8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130819e0 + 8))
  ;
  return;
}



/* Entry: 1044f57d4; end: 1044f57e3; -[SCLensCarouselSessionAssociatedInfo arBarSessionInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f57d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113081a18));
  return;
}



/* Entry: 1044f57e4; end: 1044f57f3; -[SCLensCarouselSessionAssociatedInfo snapSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044f57e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113081a20);
}



/* Entry: 1044f57f4; end: 1044f5803; -[SCLensCarouselSessionAssociatedInfo sourceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044f57f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113081a28);
}



/* Entry: 1044f5804; end: 1044f5813; -[SCLensCarouselSessionAssociatedInfo entranceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1044f5804(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113081a30);
}



/* Entry: 1044f5814; end: 1044f592b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f5814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113081a18) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113081a20) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113081a28) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113081a30) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044f592c; end: 1044f59c3; -[SCLensCarouselSessionAssociatedInfo initWithArBarSessionInfo:snapSource:sourceType:entranceType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f592c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113081a18) = param_3;
  *(undefined8 *)(param_1 + _DAT_113081a20) = param_4;
  *(undefined8 *)(param_1 + _DAT_113081a28) = param_5;
  *(undefined8 *)(param_1 + _DAT_113081a30) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 1044f59c4; end: 1044f59f3;  */

void FUN_1044f59c4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1044f59f4(param_1);
  return;
}



/* Entry: 1044f59f4; end: 1044f5b27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f59f4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long lStack_80;
  long lStack_78;
  
  plVar6 = &lStack_80;
  _swift_getObjectType();
  lVar9 = param_1[1];
  if (lVar9 == 1) {
    plVar6 = (long *)0x0;
  }
  else {
    bVar4 = *(byte *)(param_1 + 4);
    uVar3 = param_1[2];
    uVar2 = param_1[3];
    uVar10 = *param_1;
    lVar7 = 0;
    func_0x00010073ec00();
    lVar8 = lVar7;
    _objc_allocWithZone();
    puVar1 = (undefined8 *)(lVar8 + _DAT_1130819d8);
    *puVar1 = uVar10;
    puVar1[1] = lVar9;
    puVar1 = (undefined8 *)(lVar8 + _DAT_1130819e0);
    *puVar1 = uVar3;
    puVar1[1] = uVar2;
    *(byte *)(lVar8 + _DAT_1130819e8) = bVar4 & 1;
    puVar5 = PTR_s_init_1125d9248;
    lStack_80 = lVar8;
    lStack_78 = lVar7;
    _swift_bridgeObjectRetain(lVar9);
    _swift_bridgeObjectRetain(uVar2);
    _objc_msgSendSuper2(&lStack_80,puVar5);
  }
  *(long **)(unaff_x20 + _DAT_113081a18) = plVar6;
  uVar3 = param_1[6];
  *(undefined8 *)(unaff_x20 + _DAT_113081a20) = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_113081a28) = uVar3;
  func_0x0001044f39b4(param_1);
  *(undefined8 *)(unaff_x20 + _DAT_113081a30) = param_1[7];
  _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044f5b28; end: 1044f5b5b; -[SCLensCarouselSessionAssociatedInfo hash] */

undefined8 FUN_1044f5b28(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1044f5b5c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1044f5b5c; end: 1044f5c13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f5b5c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (*(long *)(unaff_x20 + _DAT_113081a18) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1044f5434();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(param_1);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113081a20));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113081a28));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113081a30));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1044f5c14; end: 1044f5d5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1044f5c14(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lStack_78;
  long alStack_70 [4];
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,alStack_70);
  if (alStack_70[3] == 0) {
    func_0x00010006e7f4(alStack_70);
  }
  else {
    plVar1 = &lStack_78;
    _swift_dynamicCast(plVar1,alStack_70,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar1 & 1) != 0) {
      if (*(long *)(unaff_x20 + _DAT_113081a18) == 0) {
        uVar4 = (ulong)(*(long *)(lStack_78 + _DAT_113081a18) == 0);
      }
      else {
        lVar5 = *(long *)(lStack_78 + _DAT_113081a18);
        if (lVar5 == 0) {
          lVar2 = 0;
          alStack_70[1] = 0;
          alStack_70[2] = 0;
        }
        else {
          lVar2 = 0;
          func_0x00010073ec00();
        }
        alStack_70[0] = lVar5;
        alStack_70[3] = lVar2;
        _objc_retain(lVar5);
        uVar4 = 0;
        FUN_1044f550c();
        func_0x00010006e7f4(alStack_70);
      }
      lVar7 = *(long *)(unaff_x20 + _DAT_113081a20);
      lVar8 = *(long *)(lStack_78 + _DAT_113081a20);
      lVar5 = *(long *)(unaff_x20 + _DAT_113081a28);
      lVar2 = *(long *)(lStack_78 + _DAT_113081a28);
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113081a30);
      uVar6 = *(undefined8 *)(lStack_78 + _DAT_113081a30);
      _objc_release(lStack_78);
      if ((uVar4 & 1) == 0) {
        return false;
      }
      if (lVar7 != lVar8) {
        return false;
      }
      return lVar5 == lVar2 && (int)uVar3 == (int)uVar6;
    }
  }
  return false;
}



/* Entry: 1044f5d60; end: 1044f5ddf; -[SCLensCarouselSessionAssociatedInfo isEqual:] */

uint FUN_1044f5d60(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1044f5c14(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1044f5de0; end: 1044f5de3; -[SCLensCarouselSessionAssociatedInfo copyWithZone:] */

void FUN_1044f5de0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044f5de4; end: 1044f5e1b; -[SCLensCarouselSessionAssociatedInfo description] */

void FUN_1044f5de4(void)

{
  undefined1 auStack_50 [64];
  
  _objc_retain();
  FUN_1044f5ea8(auStack_50);
  func_0x0001044f39b4(auStack_50);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044f5e1c; end: 1044f5e97; -[SCLensCarouselSessionAssociatedInfo init] */

void FUN_1044f5e1c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "LensCarouselSessionServices/LensCarouselSessionAssociatedInfoWrapper.swift",0x4a,2,
             0x45,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044f5e64);
  (*pcVar1)();
}



/* Entry: 1044f5e98; end: 1044f5ea7; -[SCLensCarouselSessionAssociatedInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f5e98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113081a18));
  return;
}



/* Entry: 1044f5ea8; end: 1044f5fd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f5ea8(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_120 [64];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(param_2 + _DAT_113081a18);
  if (lVar1 == 0) {
    uVar6 = 0;
    uVar2 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 1;
  }
  else {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_1130819d8);
    uVar3 = ((undefined8 *)(lVar1 + _DAT_1130819d8))[1];
    uVar5 = *(undefined8 *)(lVar1 + _DAT_1130819e0);
    uVar2 = ((undefined8 *)(lVar1 + _DAT_1130819e0))[1];
    uVar6 = *(undefined1 *)(lVar1 + _DAT_1130819e8);
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRetain(uVar3);
  }
  uVar7 = *(undefined8 *)(param_2 + _DAT_113081a20);
  uVar8 = *(undefined8 *)(param_2 + _DAT_113081a28);
  uVar9 = *(undefined8 *)(param_2 + _DAT_113081a30);
  _objc_release();
  uStack_e0 = uVar4;
  uStack_d8 = uVar3;
  uStack_d0 = uVar5;
  uStack_c8 = uVar2;
  uStack_c0 = uVar6;
  uStack_b8 = uVar7;
  uStack_b0 = uVar8;
  uStack_a8 = uVar9;
  uStack_a0 = uVar4;
  uStack_98 = uVar3;
  uStack_90 = uVar5;
  uStack_88 = uVar2;
  uStack_80 = uVar6;
  uStack_78 = uVar7;
  uStack_70 = uVar8;
  uStack_68 = uVar9;
  FUN_1044f3980(&uStack_e0,auStack_120);
  func_0x0001044f39b4(&uStack_a0);
  param_1[1] = uStack_d8;
  *param_1 = uStack_e0;
  param_1[3] = uStack_c8;
  param_1[2] = uStack_d0;
  param_1[5] = uStack_b8;
  param_1[4] = CONCAT71(uStack_bf,uStack_c0);
  param_1[7] = uStack_a8;
  param_1[6] = uStack_b0;
  return;
}



/* Entry: 1044f5fd8; end: 1044f5ff7;  */

void FUN_1044f5fd8(void)

{
  _objc_opt_self(&PTR_PTR_1129c64e0);
  return;
}



/* Entry: 1044f5ff8; end: 1044f6007; -[SCLensCarouselSessionData activeLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f5ff8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113081a60));
  return;
}



/* Entry: 1044f6008; end: 1044f6073; -[SCLensCarouselSessionData lensOrder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f6008(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113081a68);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x0001044f7248(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1044f6074; end: 1044f6083; -[SCLensCarouselSessionData willShowCarouselTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f6074(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113081a70));
  return;
}



/* Entry: 1044f6084; end: 1044f6093; -[SCLensCarouselSessionData didShowCarouselTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f6084(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113081a78));
  return;
}



/* Entry: 1044f6094; end: 1044f60a3; -[SCLensCarouselSessionData didHideCarouselTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f6094(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113081a80));
  return;
}



/* Entry: 1044f60a4; end: 1044f61db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f60a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113081a60) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113081a68) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113081a70) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113081a78) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113081a80) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044f61dc; end: 1044f62d7; -[SCLensCarouselSessionData initWithActiveLens:lensOrder:willShowCarouselTimestamp:didShowCarouselTimestamp:didHideCarouselTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f61dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    uVar3 = 0;
    func_0x0001044f7248(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar3);
  }
  *(undefined8 *)(param_1 + _DAT_113081a60) = param_3;
  *(long *)(param_1 + _DAT_113081a68) = param_4;
  *(undefined8 *)(param_1 + _DAT_113081a70) = param_5;
  *(undefined8 *)(param_1 + _DAT_113081a78) = param_6;
  *(undefined8 *)(param_1 + _DAT_113081a80) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_msgSendSuper2(&lStack_60,puVar1);
  return;
}



/* Entry: 1044f62d8; end: 1044f63c7;  */

undefined8 * FUN_1044f62d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_allocWithZone();
  puVar1 = param_1;
  FUN_1044f7074(param_1);
  uStack_28 = *param_1;
  FUN_1044f7208(&uStack_28,0x112d3b7d8,&UNK_10d920690);
  uStack_30 = param_1[1];
  FUN_1044f7208(&uStack_30,0x113081a88,&UNK_10dd0f6d8);
  return puVar1;
}



/* Entry: 1044f63c8; end: 1044f63fb; -[SCLensCarouselSessionData hash] */

undefined8 FUN_1044f63c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1044f63fc();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1044f63fc; end: 1044f65a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f63fc(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar1 = *(long *)(unaff_x20 + _DAT_113081a60);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_113081a68);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001044f7248(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar1,uVar2);
    lVar3 = lVar1;
    func_0x00010bfde980();
    _objc_release(lVar1);
  }
  __ss6HasherV8_combineyySuF(lVar3);
  lVar1 = *(long *)(unaff_x20 + _DAT_113081a70);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_113081a78);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_113081a80);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1044f65a8; end: 1044f6893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1044f65a8(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long unaff_x20;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  FUN_1044f7510(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    func_0x0001044f7208(auStack_80,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar2 = &lStack_88;
    _swift_dynamicCast(plVar2,auStack_80,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_113081a60);
      if (lVar3 == 0) {
        uVar1 = (uint)(*(long *)(lStack_88 + _DAT_113081a60) == 0);
      }
      else {
        func_0x00010c071ae0();
        uVar1 = (uint)lVar3;
      }
      lVar10 = *(long *)(unaff_x20 + _DAT_113081a68);
      lVar3 = *(long *)(lStack_88 + _DAT_113081a68);
      uVar8 = (uint)(lVar10 == 0 && lVar3 == 0);
      if (lVar10 != 0 && lVar3 != 0) {
        _swift_bridgeObjectRetain(lVar3);
        lVar4 = lVar10;
        _swift_bridgeObjectRetain();
        uVar8 = (uint)lVar4;
        func_0x000103472b90();
        _swift_bridgeObjectRelease(lVar10);
        _swift_bridgeObjectRelease(lVar3);
      }
      lVar10 = *(long *)(unaff_x20 + _DAT_113081a70);
      lVar3 = *(long *)(lStack_88 + _DAT_113081a70);
      uVar9 = (uint)(lVar10 == 0 && lVar3 == 0);
      if ((lVar10 != 0) && (lVar3 != 0)) {
        func_0x0001044f7248(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retain(lVar3);
        _objc_retain();
        lVar4 = lVar10;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar9 = (uint)lVar4;
        _objc_release(lVar10);
        _objc_release(lVar3);
      }
      lVar10 = *(long *)(unaff_x20 + _DAT_113081a78);
      lVar3 = *(long *)(lStack_88 + _DAT_113081a78);
      uVar6 = (uint)(lVar10 == 0 && lVar3 == 0);
      if ((lVar10 != 0) && (lVar3 != 0)) {
        func_0x0001044f7248(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retain(lVar3);
        _objc_retain(lVar10);
        lVar4 = lVar10;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar6 = (uint)lVar4;
        _objc_release(lVar10);
        _objc_release(lVar3);
      }
      lVar10 = *(long *)(unaff_x20 + _DAT_113081a80);
      lVar3 = *(long *)(lStack_88 + _DAT_113081a80);
      if (lVar10 == 0) {
        lVar4 = lVar3;
        _objc_retain(lVar3);
        _objc_release(lStack_88);
        if (lVar3 != 0) {
          uVar7 = 0;
          goto LAB_1044f6844;
        }
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
        lVar4 = lStack_88;
        if (lVar3 != 0) {
          func_0x0001044f7248(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retain(lVar3);
          _objc_retain(lVar10);
          lVar5 = lVar10;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar7 = (uint)lVar5;
          _objc_release(lVar10);
          _objc_release(lVar3);
        }
LAB_1044f6844:
        _objc_release(lVar4);
      }
      if ((uVar1 & uVar8 & uVar9) == 1) {
        uVar6 = uVar6 & uVar7;
        goto LAB_1044f6868;
      }
    }
  }
  uVar6 = 0;
LAB_1044f6868:
  return uVar6 & 1;
}



/* Entry: 1044f6894; end: 1044f6923; -[SCLensCarouselSessionData isEqual:] */

uint FUN_1044f6894(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1044f65a8(&uStack_40);
  _objc_release(param_1);
  FUN_1044f7208(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 1044f6924; end: 1044f6927; -[SCLensCarouselSessionData copyWithZone:] */

void FUN_1044f6924(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044f6928; end: 1044f69ab; -[SCLensCarouselSessionData description] */

void FUN_1044f6928(undefined8 param_1)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  FUN_1044f7288(&uStack_70);
  _objc_release(param_1);
  uStack_28 = uStack_70;
  FUN_1044f7208(&uStack_28,0x112d3b7d8,&UNK_10d920690);
  uStack_30 = uStack_68;
  FUN_1044f7208(&uStack_30,0x113081a88,&UNK_10dd0f6d8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044f69ac; end: 1044f69f3; -[SCLensCarouselSessionData init] */

void FUN_1044f69ac(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "LensCarouselSessionServices/LensCarouselSessionDataWrapper.swift",0x40,2,0x4a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044f69f4);
  (*pcVar1)();
}



/* Entry: 1044f69f4; end: 1044f6a0f; +[SCLensCarouselSessionDataBuilder lensCarouselSessionData] */

void FUN_1044f69f4(void)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044f6a10; end: 1044f6a13;  */

/* WARNING: Possible PIC construction at 0x0001044f73cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001044f73d0) */

void FUN_1044f6a10(long param_1)

{
  if (param_1 == 0) {
    func_0x0001044f74f0();
    _objc_allocWithZone();
  }
  else {
    func_0x0001044f74f0();
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1044f6a14; end: 1044f6b2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f6a14(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113081a90);
  *(undefined8 *)(unaff_x20 + _DAT_113081a90) = param_1;
  _objc_retain();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044f6b2c; end: 1044f6b6b; +[SCLensCarouselSessionDataBuilder lensCarouselSessionDataWithExistingLensCarouselSessionData:] */

void FUN_1044f6b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_1044f7398(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1044f6b6c; end: 1044f6bcb; -[SCLensCarouselSessionDataBuilder withActiveLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1044f6b6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113081a90);
  *(undefined8 *)(param_1 + _DAT_113081a90) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1044f6bcc; end: 1044f6c47; -[SCLensCarouselSessionDataBuilder withLensOrder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f6bcc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    func_0x0001044f7248(0,0x112d4d630,&PTR_PTR_1126ae6a8);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_113081a98);
  *(long *)(param_1 + _DAT_113081a98) = param_3;
  _objc_retain();
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1044f6c48; end: 1044f6ca7; -[SCLensCarouselSessionDataBuilder withWillShowCarouselTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1044f6c48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113081aa0);
  *(undefined8 *)(param_1 + _DAT_113081aa0) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1044f6ca8; end: 1044f6d07; -[SCLensCarouselSessionDataBuilder withDidShowCarouselTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1044f6ca8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113081aa8);
  *(undefined8 *)(param_1 + _DAT_113081aa8) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1044f6d08; end: 1044f6d67; -[SCLensCarouselSessionDataBuilder withDidHideCarouselTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1044f6d08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113081ab0);
  *(undefined8 *)(param_1 + _DAT_113081ab0) = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retainAutoreleaseReturnValue(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1044f6d68; end: 1044f6e6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f6d68(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_60;
  long lStack_58;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113081a90);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113081a98);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_113081aa0);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_113081aa8);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113081ab0);
  FUN_1044f74d0();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_113081a60) = uVar4;
  *(undefined8 *)(lVar2 + _DAT_113081a68) = uVar5;
  *(undefined8 *)(lVar2 + _DAT_113081a70) = uVar6;
  *(undefined8 *)(lVar2 + _DAT_113081a78) = uVar7;
  *(undefined8 *)(lVar2 + _DAT_113081a80) = uVar3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar2;
  lStack_58 = param_1;
  _objc_retain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _objc_retain(uVar6);
  _objc_retain(uVar7);
  _objc_retain(uVar3);
  _objc_msgSendSuper2(&lStack_60,puVar1);
  return;
}



/* Entry: 1044f6e6c; end: 1044f6eaf; -[SCLensCarouselSessionDataBuilder build] */

void FUN_1044f6e6c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1044f6d68();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044f6eb0; end: 1044f6ef3; -[SCLensCarouselSessionDataBuilder safeBuildAndReturnError:] */

void FUN_1044f6eb0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1044f6d68();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044f6ef4; end: 1044f6f6b; -[SCLensCarouselSessionDataBuilder init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f6ef4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113081a90) = 0;
  *(undefined8 *)(param_1 + _DAT_113081a98) = 0;
  *(undefined8 *)(param_1 + _DAT_113081aa0) = 0;
  *(undefined8 *)(param_1 + _DAT_113081aa8) = 0;
  *(undefined8 *)(param_1 + _DAT_113081ab0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044f6f6c; end: 1044f6f6f;  */

void FUN_1044f6f6c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044f6f70; end: 1044f6fd7; -[SCLensCarouselSessionDataBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f6f70(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113081a90));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113081a98));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113081aa0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113081aa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113081ab0));
  return;
}



/* Entry: 1044f6fd8; end: 1044f700b;  */

void FUN_1044f6fd8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044f700c; end: 1044f7073; -[SCLensCarouselSessionData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f700c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113081a60));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113081a68));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113081a70));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113081a78));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113081a80));
  return;
}



/* Entry: 1044f7074; end: 1044f7207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f7074(undefined8 *param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _swift_getObjectType();
  uStack_58 = *param_1;
  uStack_60 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_113081a60) = uStack_58;
  *(undefined8 *)(unaff_x20 + _DAT_113081a68) = uStack_60;
  if (*(char *)(param_1 + 3) == '\x01') {
    FUN_1044f7510(&uStack_58,auStack_68,0x112d3b7d8,&UNK_10d920690);
    FUN_1044f7510(&uStack_60,auStack_68,0x113081a88,&UNK_10dd0f6d8);
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1[2];
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    FUN_1044f7510(&uStack_58,auStack_68,0x112d3b7d8,&UNK_10d920690);
    FUN_1044f7510(&uStack_60,auStack_68,0x113081a88,&UNK_10dd0f6d8);
    func_0x00010c00e360(uVar2);
  }
  *(undefined **)(unaff_x20 + _DAT_113081a70) = puVar1;
  if (*(char *)(param_1 + 5) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1[4];
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar2);
  }
  *(undefined **)(unaff_x20 + _DAT_113081a78) = puVar1;
  if (*(char *)(param_1 + 7) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1[6];
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar2);
  }
  *(undefined **)(unaff_x20 + _DAT_113081a80) = puVar1;
  _objc_msgSendSuper2(&stack0xffffffffffffff88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044f7208; end: 1044f7287;  */

undefined8 FUN_1044f7208(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1044f7288; end: 1044f7397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f7288(undefined8 *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar3 = *(undefined8 *)(param_3 + _DAT_113081a60);
  uVar4 = *(undefined8 *)(param_3 + _DAT_113081a68);
  lVar5 = *(long *)(param_3 + _DAT_113081a70);
  if (lVar5 == 0) {
    _swift_bridgeObjectRetain(uVar4);
    _objc_retain(uVar3);
    uVar6 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uVar4);
    _objc_retain(uVar3);
    func_0x00010bf885a0(lVar5);
    uVar6 = param_2;
  }
  uVar7 = 0;
  bVar1 = *(long *)(param_3 + _DAT_113081a78) == 0;
  if (bVar1) {
    uVar8 = 0;
  }
  else {
    func_0x00010bf885a0();
    uVar8 = param_2;
  }
  bVar2 = *(long *)(param_3 + _DAT_113081a80) == 0;
  if (!bVar2) {
    func_0x00010bf885a0();
    uVar7 = param_2;
  }
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar6;
  *(bool *)(param_1 + 3) = lVar5 == 0;
  param_1[4] = uVar8;
  *(bool *)(param_1 + 5) = bVar1;
  param_1[6] = uVar7;
  *(bool *)(param_1 + 7) = bVar2;
  return;
}



/* Entry: 1044f7398; end: 1044f74cf;  */

/* WARNING: Possible PIC construction at 0x0001044f73cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001044f73d0) */

void FUN_1044f7398(long param_1)

{
  if (param_1 == 0) {
    func_0x0001044f74f0();
    _objc_allocWithZone();
  }
  else {
    func_0x0001044f74f0();
    _objc_allocWithZone();
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1044f74d0; end: 1044f750f;  */

void FUN_1044f74d0(void)

{
  _objc_opt_self(&PTR_PTR_1129c65c0);
  return;
}



/* Entry: 1044f7510; end: 1044f7557;  */

undefined8 FUN_1044f7510(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1044f7558; end: 1044f755b;  */

void FUN_1044f7558(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044f755c; end: 1044f7607;  */

void FUN_1044f755c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044f7608; end: 1044f7647;  */

void FUN_1044f7608(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1044f7648; end: 1044f76a7; -[SCLensCarouselSessionEvent description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f7648(long param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_113081b08) == '\x01') {
    if (*(char *)(param_1 + _DAT_113081b18) == '\x02') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1044f7674);
      (*pcVar1)();
    }
  }
  else if (*(char *)(param_1 + _DAT_113081b10) == '\x02') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1044f76a8);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044f76a8; end: 1044f76ef; -[SCLensCarouselSessionEvent init] */

void FUN_1044f76a8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "LensCarouselSessionServices/LensCarouselSessionEventWrapper.swift",0x41,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044f76f0);
  (*pcVar1)();
}



/* Entry: 1044f76f0; end: 1044f76f3; -[SCLensCarouselSessionEvent copyWithZone:] */

void FUN_1044f76f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044f76f4; end: 1044f775b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f76f4(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113081b08) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_113081b10) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_113081b18) = 2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044f775c; end: 1044f7833; +[SCLensCarouselSessionEvent swipeWithDummyLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f775c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113081b08) = 0;
  *(undefined1 *)(lVar1 + _DAT_113081b10) = param_3;
  *(undefined1 *)(lVar1 + _DAT_113081b18) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044f7834; end: 1044f791f; +[SCLensCarouselSessionEvent spinWithDummyLens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f7834(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113081b08) = 1;
  *(undefined1 *)(lVar1 + _DAT_113081b10) = 2;
  *(undefined1 *)(lVar1 + _DAT_113081b18) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044f7920; end: 1044f7977; -[SCLensCarouselSessionEvent matchSwipe:spin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f7920(long param_1,undefined8 param_2,long param_3,long param_4)

{
  byte bVar1;
  code *pcVar2;
  
  if (*(char *)(param_1 + _DAT_113081b08) == '\x01') {
    bVar1 = *(byte *)(param_1 + _DAT_113081b18);
    param_3 = param_4;
    if (bVar1 == 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1044f7950);
      (*pcVar2)();
    }
  }
  else {
    bVar1 = *(byte *)(param_1 + _DAT_113081b10);
    if (bVar1 == 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1044f7978);
      (*pcVar2)();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001044f7970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3,bVar1 & 1);
  return;
}



/* Entry: 1044f7978; end: 1044f79ab;  */

void FUN_1044f7978(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044f79ac; end: 1044f7b13;  */

int FUN_1044f79ac(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1044f7a28;
        goto LAB_1044f7a0c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1044f7a0c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1044f7a28:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1044f7b14; end: 1044f7b53;  */

void FUN_1044f7b14(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081b48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0f760;
  _swift_getWitnessTable(&UNK_10dd0f760,&UNK_11077fa38);
  puRam0000000113081b48 = puVar1;
  return;
}



/* Entry: 1044f7b54; end: 1044f7c27;  */

void FUN_1044f7b54(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044f7c28; end: 1044f7c47;  */

void FUN_1044f7c28(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1044f7c48; end: 1044f7d63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f7c48(ulong param_1)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 uVar8;
  long *plVar9;
  long unaff_x20;
  ulong uVar10;
  ulong uVar11;
  undefined1 uVar12;
  long alStack_a0 [2];
  long alStack_90 [2];
  long alStack_80 [2];
  long alStack_70 [2];
  long alStack_60 [2];
  
  uVar6 = param_1 >> 0x3d;
  uVar2 = (uint)(param_1 >> 0x20);
  uVar5 = uVar2 >> 0x1d;
  if (uVar2 >> 0x1d < 2) {
    uVar7 = param_1 & 0x1fffffffffffffff;
    uVar12 = 1;
    plVar9 = alStack_90;
    uVar10 = uVar6;
    uVar11 = uVar6;
    if (uVar5 != 0) {
      uVar12 = 2;
      param_1 = 0;
      uVar6 = 0;
      plVar9 = alStack_80;
      uVar10 = uVar6;
      uVar11 = uVar7;
    }
  }
  else {
    uVar6 = param_1 & 0x1fffffffffffffff;
    uVar8 = 4;
    plVar1 = alStack_60;
    uVar7 = uVar6;
    if (uVar5 != 3) {
      uVar8 = 0;
      uVar7 = 0;
      plVar1 = alStack_a0;
    }
    bVar3 = uVar5 != 2;
    uVar12 = 3;
    if (bVar3) {
      uVar12 = uVar8;
    }
    param_1 = 0;
    uVar11 = 0;
    if (bVar3) {
      uVar6 = 0;
    }
    plVar9 = alStack_70;
    uVar10 = 0;
    if (bVar3) {
      plVar9 = plVar1;
      uVar10 = uVar7;
    }
  }
  lVar4 = unaff_x20;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_113081b50) = uVar12;
  *(ulong *)(lVar4 + _DAT_113081b58) = param_1;
  *(ulong *)(lVar4 + _DAT_113081b60) = uVar11;
  *(ulong *)(lVar4 + _DAT_113081b68) = uVar6;
  *(ulong *)(lVar4 + _DAT_113081b70) = uVar10;
  *plVar9 = lVar4;
  plVar9[1] = unaff_x20;
  _objc_msgSendSuper2(plVar9,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044f7d64; end: 1044f7d8b; -[SCLensCarouselSessionFlowState description] */

void FUN_1044f7d64(void)

{
  _objc_retain();
  FUN_1044f8614();
  func_0x0001044f4778();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044f7d8c; end: 1044f7dd3; -[SCLensCarouselSessionFlowState init] */

void FUN_1044f7d8c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "LensCarouselSessionServices/LensCarouselSessionFlowStateWrapper.swift",0x45,2,0x40,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044f7dd4);
  (*pcVar1)();
}



/* Entry: 1044f7dd4; end: 1044f7e07; -[SCLensCarouselSessionFlowState hash] */

undefined8 FUN_1044f7dd4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1044f7e08();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1044f7e08; end: 1044f80e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f7e08(void)

{
  ulong uVar1;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = (ulong)*(byte *)(unaff_x20 + _DAT_113081b50);
  __ss6HasherV8_combineyySuF(uVar1);
  if (*(long *)(unaff_x20 + _DAT_113081b58) == 0) {
    uVar1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1044f8b6c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_113081b60) == 0) {
    uVar1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1044f8b6c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_113081b68) == 0) {
    uVar1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1044f8b6c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_113081b70) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1044f8b6c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1044f80e8; end: 1044f8167; -[SCLensCarouselSessionFlowState isEqual:] */

uint FUN_1044f80e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  func_0x0001044f7f58(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1044f8168; end: 1044f816b; -[SCLensCarouselSessionFlowState copyWithZone:] */

void FUN_1044f8168(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044f816c; end: 1044f81e7; +[SCLensCarouselSessionFlowState notStarted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f816c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113081b50) = 0;
  *(undefined8 *)(lVar1 + _DAT_113081b58) = 0;
  *(undefined8 *)(lVar1 + _DAT_113081b60) = 0;
  *(undefined8 *)(lVar1 + _DAT_113081b68) = 0;
  *(undefined8 *)(lVar1 + _DAT_113081b70) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044f81e8; end: 1044f8277; +[SCLensCarouselSessionFlowState startedWithSessionInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f81e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113081b50) = 1;
  *(undefined8 *)(lVar2 + _DAT_113081b58) = param_3;
  *(undefined8 *)(lVar2 + _DAT_113081b60) = 0;
  *(undefined8 *)(lVar2 + _DAT_113081b68) = 0;
  *(undefined8 *)(lVar2 + _DAT_113081b70) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044f8278; end: 1044f8307; +[SCLensCarouselSessionFlowState resumedWithSessionInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f8278(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113081b50) = 2;
  *(undefined8 *)(lVar2 + _DAT_113081b58) = 0;
  *(undefined8 *)(lVar2 + _DAT_113081b60) = param_3;
  *(undefined8 *)(lVar2 + _DAT_113081b68) = 0;
  *(undefined8 *)(lVar2 + _DAT_113081b70) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044f8308; end: 1044f8397; +[SCLensCarouselSessionFlowState pausedWithSessionInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f8308(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113081b50) = 3;
  *(undefined8 *)(lVar2 + _DAT_113081b58) = 0;
  *(undefined8 *)(lVar2 + _DAT_113081b60) = 0;
  *(undefined8 *)(lVar2 + _DAT_113081b68) = param_3;
  *(undefined8 *)(lVar2 + _DAT_113081b70) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044f8398; end: 1044f84ef; +[SCLensCarouselSessionFlowState stoppedWithSessionInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f8398(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113081b50) = 4;
  *(undefined8 *)(lVar2 + _DAT_113081b58) = 0;
  *(undefined8 *)(lVar2 + _DAT_113081b60) = 0;
  *(undefined8 *)(lVar2 + _DAT_113081b68) = 0;
  *(undefined8 *)(lVar2 + _DAT_113081b70) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044f84f0; end: 1044f8577; -[SCLensCarouselSessionFlowState matchNotStarted:started:resumed:paused:stopped:] */

void FUN_1044f84f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x0001044f8428(FUN_1044f88a4,auStack_40,0x1044f88b0,auStack_60,0x1044f88c0,auStack_80,
                      0x1044f88c4,auStack_a0,0x1044f88c8,auStack_c0);
  _objc_release(param_1);
  return;
}



/* Entry: 1044f8578; end: 1044f85ab;  */

void FUN_1044f8578(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044f85ac; end: 1044f8603; -[SCLensCarouselSessionFlowState .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044f85ac(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113081b58));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113081b60));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113081b68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113081b70));
  return;
}



/* Entry: 1044f8604; end: 1044f8613;  */

ulong FUN_1044f8604(ulong param_1)

{
  if (4 < param_1) {
    param_1 = 5;
  }
  return param_1;
}



/* Entry: 1044f8614; end: 1044f86db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1044f8614(long param_1)

{
  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  
  bVar1 = *(byte *)(param_1 + _DAT_113081b50);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      uVar3 = 0x8000000000000000;
      goto LAB_1044f86b4;
    }
    uVar3 = *(ulong *)(param_1 + _DAT_113081b58);
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1044f86dc);
      (*pcVar2)();
    }
  }
  else if (bVar1 == 2) {
    if (*(ulong *)(param_1 + _DAT_113081b60) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1044f86d0);
      (*pcVar2)();
    }
    uVar3 = *(ulong *)(param_1 + _DAT_113081b60) | 0x2000000000000000;
  }
  else if (bVar1 == 3) {
    if (*(ulong *)(param_1 + _DAT_113081b68) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1044f86d4);
      (*pcVar2)();
    }
    uVar3 = *(ulong *)(param_1 + _DAT_113081b68) | 0x4000000000000000;
  }
  else {
    if (*(ulong *)(param_1 + _DAT_113081b70) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1044f86d8);
      (*pcVar2)();
    }
    uVar3 = *(ulong *)(param_1 + _DAT_113081b70) | 0x6000000000000000;
  }
  _objc_retain();
LAB_1044f86b4:
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 1044f86dc; end: 1044f86fb;  */

void FUN_1044f86dc(void)

{
  _objc_opt_self(&PTR_PTR_1129c6850);
  return;
}



/* Entry: 1044f86fc; end: 1044f8863;  */

int FUN_1044f86fc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1044f8778;
        goto LAB_1044f875c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1044f875c:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_1044f8778:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1044f8864; end: 1044f88a3;  */

void FUN_1044f8864(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081ba0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0f854;
  _swift_getWitnessTable(&UNK_10dd0f854,&UNK_11077fb20);
  puRam0000000113081ba0 = puVar1;
  return;
}



/* Entry: 1044f88a4; end: 1044f88cb;  */

void FUN_1044f88a4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001044f88ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}


