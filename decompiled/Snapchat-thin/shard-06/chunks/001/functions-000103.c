/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1044eb498; end: 1044eb4d7;  */

void FUN_1044eb498(void)

{
  undefined *puVar1;
  
  if (puRam00000001130813e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0ea80;
  _swift_getWitnessTable(&UNK_10dd0ea80,&UNK_11077ec18);
  puRam00000001130813e8 = puVar1;
  return;
}



/* Entry: 1044eb4d8; end: 1044eb5db;  */

undefined1  [16] FUN_1044eb4d8(void)

{
  return ZEXT816(0x11077ebf8);
}



/* Entry: 1044eb5dc; end: 1044eb63f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044eb5dc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130813f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130813f8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044eb640; end: 1044eb69b; -[SCLensConfigurationServices init] */

void FUN_1044eb640(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensConfiguration.SCLensConfigurationServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044eb66c);
  (*pcVar1)();
}



/* Entry: 1044eb69c; end: 1044eb6d3; -[SCLensConfigurationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044eb69c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130813f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130813f8));
  return;
}



/* Entry: 1044eb6d4; end: 1044eb6e3; -[SCLensCarouselGradientSegment stop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1044eb6d4(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_113081428);
}



/* Entry: 1044eb6e4; end: 1044eb6f3; -[SCLensCarouselGradientSegment hexColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044eb6e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113081430);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113081430))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044eb6f4; end: 1044eb7e3; -[SCLensCarouselGradientSegment initWithStop:hexColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044eb6f4(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_2;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined4 *)(param_2 + _DAT_113081428) = param_1;
  puVar1 = (undefined8 *)(param_2 + _DAT_113081430);
  *puVar1 = param_4;
  puVar1[1] = param_3;
  lStack_50 = param_2;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044eb7e4; end: 1044eb7ff; -[SCLensCarouselGradientSegment description] */

void FUN_1044eb7e4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044eb800; end: 1044eb847; -[SCLensCarouselGradientSegment init] */

void FUN_1044eb800(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "LensConfiguration/LensCarouselCategoryThemeRulesConfigWrapper.swift",0x43,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044eb848);
  (*pcVar1)();
}



/* Entry: 1044eb848; end: 1044eb85b; -[SCLensCarouselGradientSegment .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044eb848(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113081430 + 8))
  ;
  return;
}



/* Entry: 1044eb85c; end: 1044eb86f; -[SCLensCarouselLinearGradient segments] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044eb85c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113081438);
  (*(code *)0x1044ecc3c)();
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044eb870; end: 1044eb87f; -[SCLensCarouselLinearGradient angleDeg] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1044eb870(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_113081440);
}



/* Entry: 1044eb880; end: 1044eb88b; -[SCLensCarouselLinearGradient fallbackHexColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044eb880(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113081448);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113081448))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044eb88c; end: 1044eb90f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044eb88c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113081438) = param_2;
  *(undefined4 *)(unaff_x20 + _DAT_113081440) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113081448);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044eb910; end: 1044eba07; -[SCLensCarouselLinearGradient initWithSegments:angleDeg:fallbackHexColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044eb910(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_2;
  _swift_getObjectType();
  lVar3 = lVar2;
  func_0x0001044ecc3c();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(param_2 + _DAT_113081438) = param_4;
  *(undefined4 *)(param_2 + _DAT_113081440) = param_1;
  puVar1 = (undefined8 *)(param_2 + _DAT_113081448);
  *puVar1 = param_5;
  puVar1[1] = lVar3;
  lStack_50 = param_2;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044eba08; end: 1044ebba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044eba08(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined4 uVar12;
  undefined1 auStack_98 [16];
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  
  _swift_getObjectType();
  lVar11 = *(long *)(param_2 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar11 != 0) {
    puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar6 = 0;
    FUN_1044ecc08(0,lVar11,0);
    puVar9 = puStack_78;
    func_0x0001044ecc3c();
    puVar10 = (undefined8 *)(param_2 + 0x30);
    do {
      uVar12 = *(undefined4 *)(puVar10 + -2);
      uVar2 = puVar10[-1];
      uVar4 = *puVar10;
      lVar7 = lVar6;
      _objc_allocWithZone();
      *(undefined4 *)(lVar7 + _DAT_113081428) = uVar12;
      puVar1 = (undefined8 *)(lVar7 + _DAT_113081430);
      *puVar1 = uVar2;
      puVar1[1] = uVar4;
      puVar5 = PTR_s_init_1125d9248;
      lStack_88 = lVar7;
      lStack_80 = lVar6;
      _swift_bridgeObjectRetain(uVar4);
      plVar8 = &lStack_88;
      _objc_msgSendSuper2(plVar8,puVar5);
      uVar3 = *(ulong *)(puVar9 + 0x10);
      puStack_78 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar3) {
        FUN_1044ecc08(1 < *(ulong *)(puVar9 + 0x18),uVar3 + 1,1);
      }
      puVar10 = puVar10 + 3;
      *(ulong *)(puStack_78 + 0x10) = uVar3 + 1;
      *(long **)(puStack_78 + uVar3 * 8 + 0x20) = plVar8;
      lVar11 = lVar11 + -1;
      puVar9 = puStack_78;
    } while (lVar11 != 0);
  }
  *(undefined **)(unaff_x20 + _DAT_113081438) = puVar9;
  *(undefined4 *)(unaff_x20 + _DAT_113081440) = param_1;
  puVar10 = (undefined8 *)(unaff_x20 + _DAT_113081448);
  *puVar10 = param_3;
  puVar10[1] = param_4;
  _swift_bridgeObjectRelease(param_2);
  _objc_msgSendSuper2(auStack_98,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044ebba4; end: 1044ebbfb; -[SCLensCarouselLinearGradient description] */

void FUN_1044ebba4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1044ed360();
  _objc_release(param_1);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(param_3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044ebbfc; end: 1044ebc43; -[SCLensCarouselLinearGradient init] */

void FUN_1044ebbfc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "LensConfiguration/LensCarouselCategoryThemeRulesConfigWrapper.swift",0x43,2,0x5b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044ebc44);
  (*pcVar1)();
}



/* Entry: 1044ebc44; end: 1044ebc7f; -[SCLensCarouselLinearGradient .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ebc44(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113081438));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113081448 + 8))
  ;
  return;
}



/* Entry: 1044ebc80; end: 1044ebcdb; -[SCLensCarouselColorTint hexColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ebc80(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113081450))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113081450);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044ebcdc; end: 1044ebcff; -[SCLensCarouselColorTint linearGradient] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ebcdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113081458));
  return;
}



/* Entry: 1044ebd00; end: 1044ebd8f; -[SCLensCarouselColorTint initWithHexColor:linearGradient:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ebd00(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113081450);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_113081458) = param_4;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 1044ebd90; end: 1044ebe77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ebd90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  uVar6 = *param_1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113081450);
  puVar2[1] = param_1[1];
  *puVar2 = uVar6;
  lVar4 = param_1[2];
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  else {
    uVar6 = param_1[4];
    uVar1 = param_1[5];
    uVar5 = param_1[3];
    FUN_1044ed4fc();
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(lVar4);
    _swift_bridgeObjectRetain(uVar1);
    lVar3 = lVar4;
    FUN_1044eba08(uVar5 & 0xffffffff,lVar4,uVar6,uVar1);
    FUN_1044ed51c(lVar4,uVar5,uVar6,uVar1);
  }
  *(long *)(unaff_x20 + _DAT_113081458) = lVar3;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044ebe78; end: 1044ebef3; -[SCLensCarouselColorTint description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ebe78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_113081458);
  if (lVar2 != 0) {
    _objc_retain();
    _objc_retain(lVar2);
    lVar1 = lVar2;
    FUN_1044ed360();
    _objc_release(param_1);
    _objc_release(lVar2);
    _swift_bridgeObjectRelease(lVar1);
    _swift_bridgeObjectRelease(param_3);
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044ebef4; end: 1044ebf3b; -[SCLensCarouselColorTint init] */

void FUN_1044ebef4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "LensConfiguration/LensCarouselCategoryThemeRulesConfigWrapper.swift",0x43,2,0x8d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044ebf3c);
  (*pcVar1)();
}



/* Entry: 1044ebf3c; end: 1044ebf3f;  */

void FUN_1044ebf3c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044ebf40; end: 1044ebf7b; -[SCLensCarouselColorTint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ebf40(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113081450 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113081458));
  return;
}



/* Entry: 1044ebf7c; end: 1044ebf8b; -[SCLensCarouselTabColorScheme activeIconTint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ebf7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113081460));
  return;
}



/* Entry: 1044ebf8c; end: 1044ebf9b; -[SCLensCarouselTabColorScheme activeTextTint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ebf8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113081468));
  return;
}



/* Entry: 1044ebf9c; end: 1044ebfab; -[SCLensCarouselTabColorScheme activeBorderTint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ebf9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113081470));
  return;
}



/* Entry: 1044ebfac; end: 1044ec01f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ebfac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113081460) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113081468) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113081470) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044ec020; end: 1044ec0af; -[SCLensCarouselTabColorScheme initWithActiveIconTint:activeTextTint:activeBorderTint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ec020(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113081460) = param_3;
  *(undefined8 *)(param_1 + _DAT_113081468) = param_4;
  *(undefined8 *)(param_1 + _DAT_113081470) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1044ec0b0; end: 1044ec0df;  */

void FUN_1044ec0b0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1044ec0e0(param_1);
  return;
}



/* Entry: 1044ec0e0; end: 1044ec3b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ec0e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 **ppuVar7;
  undefined1 *puVar8;
  undefined1 **ppuVar9;
  long unaff_x20;
  undefined1 ***pppuVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_b0 [16];
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 **ppuStack_90;
  undefined1 **ppuStack_88;
  
  lVar13 = unaff_x20;
  _swift_getObjectType();
  lVar12 = param_1[1];
  if (lVar12 == 1) {
    puVar5 = (undefined1 *)0x0;
  }
  else {
    lVar6 = param_1[2];
    uVar3 = param_1[3];
    uVar2 = param_1[4];
    uVar4 = param_1[5];
    uVar11 = *param_1;
    FUN_1044ed57c();
    _objc_allocWithZone();
    puVar1 = (undefined8 *)(lVar13 + _DAT_113081450);
    *puVar1 = uVar11;
    puVar1[1] = lVar12;
    if (lVar6 == 0) {
      _swift_bridgeObjectRetain(lVar12);
      lVar6 = 0;
    }
    else {
      FUN_1044ed4fc();
      _objc_allocWithZone();
      _swift_bridgeObjectRetain(lVar12);
      _swift_bridgeObjectRetain(lVar6);
      _swift_bridgeObjectRetain(uVar4);
      FUN_1044eba08(uVar3 & 0xffffffff,lVar6,uVar2,uVar4);
    }
    *(long *)(lVar13 + _DAT_113081458) = lVar6;
    puVar5 = auStack_b0;
    _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
  }
  *(undefined1 **)(unaff_x20 + _DAT_113081460) = puVar5;
  lVar13 = param_1[7];
  if (lVar13 == 1) {
    ppuVar7 = (undefined1 **)0x0;
  }
  else {
    lVar12 = param_1[8];
    uVar3 = param_1[9];
    uVar2 = param_1[10];
    uVar4 = param_1[0xb];
    uVar11 = param_1[6];
    FUN_1044ed57c();
    puVar8 = puVar5;
    _objc_allocWithZone();
    *(undefined8 *)(puVar8 + _DAT_113081450) = uVar11;
    *(long *)((long)(puVar8 + _DAT_113081450) + 8) = lVar13;
    if (lVar12 == 0) {
      _swift_bridgeObjectRetain(lVar13);
      lVar12 = 0;
    }
    else {
      FUN_1044ed4fc();
      _objc_allocWithZone();
      _swift_bridgeObjectRetain(lVar13);
      _swift_bridgeObjectRetain(lVar12);
      _swift_bridgeObjectRetain(uVar4);
      FUN_1044eba08(uVar3 & 0xffffffff,lVar12,uVar2,uVar4);
    }
    *(long *)(puVar8 + _DAT_113081458) = lVar12;
    ppuVar7 = &puStack_a0;
    puStack_a0 = puVar8;
    puStack_98 = puVar5;
    _objc_msgSendSuper2(ppuVar7,PTR_s_init_1125d9248);
  }
  *(undefined1 ***)(unaff_x20 + _DAT_113081468) = ppuVar7;
  lVar13 = param_1[0xd];
  if (lVar13 == 1) {
    func_0x0001044ed548(param_1);
    pppuVar10 = (undefined1 ***)0x0;
  }
  else {
    lVar12 = param_1[0xe];
    uVar3 = param_1[0xf];
    uVar2 = param_1[0x10];
    uVar4 = param_1[0x11];
    uVar11 = param_1[0xc];
    FUN_1044ed57c();
    ppuVar9 = ppuVar7;
    _objc_allocWithZone();
    *(undefined8 *)((long)ppuVar9 + _DAT_113081450) = uVar11;
    ((undefined8 *)((long)ppuVar9 + _DAT_113081450))[1] = lVar13;
    if (lVar12 == 0) {
      _swift_bridgeObjectRetain(lVar13);
      lVar12 = 0;
    }
    else {
      FUN_1044ed4fc();
      _objc_allocWithZone();
      _swift_bridgeObjectRetain(lVar13);
      _swift_bridgeObjectRetain(lVar12);
      _swift_bridgeObjectRetain(uVar4);
      FUN_1044eba08(uVar3 & 0xffffffff,lVar12,uVar2,uVar4);
    }
    *(long *)((long)ppuVar9 + _DAT_113081458) = lVar12;
    pppuVar10 = &ppuStack_90;
    ppuStack_90 = ppuVar9;
    ppuStack_88 = ppuVar7;
    _objc_msgSendSuper2(pppuVar10,PTR_s_init_1125d9248);
    func_0x0001044ed548(param_1);
  }
  *(undefined1 ****)(unaff_x20 + _DAT_113081470) = pppuVar10;
  _objc_msgSendSuper2(&stack0xffffffffffffff80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044ec3b4; end: 1044ec3ff; -[SCLensCarouselTabColorScheme description] */

void FUN_1044ec3b4(undefined8 param_1)

{
  undefined1 auStack_b0 [144];
  
  _objc_retain();
  FUN_1044ed59c(auStack_b0);
  _objc_release(param_1);
  func_0x0001044ed548(auStack_b0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044ec400; end: 1044ec447; -[SCLensCarouselTabColorScheme init] */

void FUN_1044ec400(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "LensConfiguration/LensCarouselCategoryThemeRulesConfigWrapper.swift",0x43,2,0xc0,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044ec448);
  (*pcVar1)();
}



/* Entry: 1044ec448; end: 1044ec48f; -[SCLensCarouselTabColorScheme .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ec448(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113081460));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113081468));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113081470));
  return;
}



/* Entry: 1044ec490; end: 1044ec49b; -[SCLensCarouselThemeRule feedId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ec490(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113081478);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113081478))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044ec49c; end: 1044ec4e3;  */

void FUN_1044ec49c(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044ec4e4; end: 1044ec507; -[SCLensCarouselThemeRule tabColorScheme] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ec4e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113081480));
  return;
}



/* Entry: 1044ec508; end: 1044ec57b;  */

void FUN_1044ec508(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  long *param_5)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  lVar1 = *param_4;
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  ((undefined8 *)(unaff_x20 + lVar1))[1] = param_2;
  *(undefined8 *)(unaff_x20 + *param_5) = param_3;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044ec57c; end: 1044ec5fb; -[SCLensCarouselThemeRule initWithFeedId:tabColorScheme:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ec57c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_113081478);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_113081480) = param_4;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 1044ec5fc; end: 1044ec6d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ec5fc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_180 [8];
  undefined1 auStack_170 [144];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_allocWithZone();
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113081478);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_78 = param_1[0xf];
  uStack_80 = param_1[0xe];
  uStack_68 = param_1[0x11];
  uStack_70 = param_1[0x10];
  uStack_58 = param_1[0x13];
  uStack_60 = param_1[0x12];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  FUN_1044ed7d0();
  _objc_allocWithZone();
  func_0x000100402194(&uStack_50,auStack_170);
  func_0x0001044e9ad0(&uStack_e0,auStack_170);
  puVar1 = &uStack_e0;
  FUN_1044ec0e0();
  func_0x00010388ad64(param_1);
  *(undefined8 **)(unaff_x20 + _DAT_113081480) = puVar1;
  _objc_msgSendSuper2(auStack_180,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044ec6d4; end: 1044ec74f; -[SCLensCarouselThemeRule description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ec6d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [144];
  
  uStack_c0 = *(undefined8 *)(param_1 + _DAT_113081478);
  uStack_b8 = ((undefined8 *)(param_1 + _DAT_113081478))[1];
  uVar1 = *(undefined8 *)(param_1 + _DAT_113081480);
  _swift_bridgeObjectRetain(uStack_b8);
  _objc_retain(uVar1);
  FUN_1044ed59c(auStack_b0);
  _objc_release(uVar1);
  func_0x00010388ad64(&uStack_c0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044ec750; end: 1044ec797; -[SCLensCarouselThemeRule init] */

void FUN_1044ec750(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "LensConfiguration/LensCarouselCategoryThemeRulesConfigWrapper.swift",0x43,2,0xf0,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044ec798);
  (*pcVar1)();
}



/* Entry: 1044ec798; end: 1044ec7d3; -[SCLensCarouselThemeRule .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ec798(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113081478 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113081480));
  return;
}



/* Entry: 1044ec7d4; end: 1044ec7e7; -[SCLensCarouselCategoryThemeRulesConfig rules] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ec7d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113081488);
  (*(code *)0x1044ed7f0)();
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044ec7e8; end: 1044ec87b;  */

void FUN_1044ec7e8(long param_1,undefined8 param_2,long *param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  (*param_4)();
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044ec87c; end: 1044ec8e3; -[SCLensCarouselCategoryThemeRulesConfig initWithRules:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ec87c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  lVar2 = lVar1;
  func_0x0001044ed7f0();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,lVar2);
  *(undefined8 *)(param_1 + _DAT_113081488) = param_3;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044ec8e4; end: 1044ec913;  */

void FUN_1044ec8e4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1044ec914(param_1);
  return;
}



/* Entry: 1044ec914; end: 1044ecad7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ec914(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long unaff_x20;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 auStack_1b8 [16];
  long lStack_1a8;
  long lStack_1a0;
  undefined1 auStack_198 [144];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _swift_getObjectType();
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == 0) {
    _swift_bridgeObjectRelease(param_1);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_108 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar4 = 0;
    func_0x0001044ecc78(0,lVar10,0);
    puVar8 = puStack_108;
    func_0x0001044ed7f0();
    puVar9 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar1 = puVar9[-2];
      uVar3 = puVar9[-1];
      uStack_98 = puVar9[0xd];
      uStack_a0 = puVar9[0xc];
      uStack_88 = puVar9[0xf];
      uStack_90 = puVar9[0xe];
      uStack_78 = puVar9[0x11];
      uStack_80 = puVar9[0x10];
      uStack_d8 = puVar9[5];
      uStack_e0 = puVar9[4];
      uStack_c8 = puVar9[7];
      uStack_d0 = puVar9[6];
      uStack_b8 = puVar9[9];
      uStack_c0 = puVar9[8];
      uStack_a8 = puVar9[0xb];
      uStack_b0 = puVar9[10];
      uStack_f8 = puVar9[1];
      uStack_100 = *puVar9;
      uStack_e8 = puVar9[3];
      uStack_f0 = puVar9[2];
      lVar5 = lVar4;
      _objc_allocWithZone();
      puVar6 = (undefined8 *)(lVar5 + _DAT_113081478);
      *puVar6 = uVar1;
      puVar6[1] = uVar3;
      func_0x0001044ed7d0();
      _objc_allocWithZone();
      _swift_bridgeObjectRetain(uVar3);
      func_0x0001044e9ad0(&uStack_100,auStack_198);
      puVar6 = &uStack_100;
      FUN_1044ec0e0();
      *(undefined8 **)(lVar5 + _DAT_113081480) = puVar6;
      plVar7 = &lStack_1a8;
      lStack_1a8 = lVar5;
      lStack_1a0 = lVar4;
      _objc_msgSendSuper2(plVar7,PTR_s_init_1125d9248);
      uVar2 = *(ulong *)(puVar8 + 0x10);
      puStack_108 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar2) {
        func_0x0001044ecc78(1 < *(ulong *)(puVar8 + 0x18),uVar2 + 1,1);
      }
      puVar8 = puStack_108;
      *(ulong *)(puStack_108 + 0x10) = uVar2 + 1;
      *(long **)(puStack_108 + uVar2 * 8 + 0x20) = plVar7;
      puVar9 = puVar9 + 0x14;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    _swift_bridgeObjectRelease(param_1);
  }
  *(undefined **)(unaff_x20 + _DAT_113081488) = puVar8;
  _objc_msgSendSuper2(auStack_1b8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044ecad8; end: 1044ecb13; -[SCLensCarouselCategoryThemeRulesConfig description] */

void FUN_1044ecad8(undefined8 param_1)

{
  _objc_retain();
  FUN_1044ed810();
  _swift_bridgeObjectRelease();
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1044ecb14; end: 1044ecb8f; -[SCLensCarouselCategoryThemeRulesConfig init] */

void FUN_1044ecb14(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "LensConfiguration/LensCarouselCategoryThemeRulesConfigWrapper.swift",0x43,2,0x11d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044ecb5c);
  (*pcVar1)();
}



/* Entry: 1044ecb90; end: 1044ecb9f; -[SCLensCarouselCategoryThemeRulesConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ecb90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113081488));
  return;
}



/* Entry: 1044ecba0; end: 1044ecc07;  */

void FUN_1044ecba0(code *param_1,ulong *param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (((int)lVar2 != 0) && ((*param_1)(), lVar2 != 0)) {
    param_2 = (ulong *)0x112d36e60;
    param_3 = (long *)&UNK_10d901170;
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar1 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar1,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar1;
  }
  return;
}



/* Entry: 1044ecc08; end: 1044eccc7;  */

void FUN_1044ecc08(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1044ecde4();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1044eccc8; end: 1044ecde3;  */

undefined * FUN_1044eccc8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1044ecde4);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112e1c590;
    func_0x0001000285a8(0x112e1c590,&UNK_10d9fdcf8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&UNK_11077e998);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 1044ecde4; end: 1044ecf1b;  */

code * FUN_1044ecde4(code *param_1,ulong param_2,ulong param_3,code *param_4,code *param_5,
                    undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1044ecf1c);
        (*pcVar3)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  pcVar4 = param_1;
  pcVar3 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    pcVar3 = param_5;
    FUN_1044ecba0(param_5,param_6,param_7);
    _swift_allocObject();
    pcVar4 = pcVar3;
    _malloc_size();
    pcVar1 = pcVar4 + -0x19;
    if (0x1f < (long)pcVar4) {
      pcVar1 = pcVar4 + -0x20;
    }
    *(ulong *)(pcVar3 + 0x10) = uVar6;
    *(ulong *)(pcVar3 + 0x18) = ((long)pcVar1 >> 3) << 1 | 1;
  }
  pcVar1 = pcVar3 + 0x20;
  pcVar2 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    (*param_5)();
    _swift_arrayInitWithCopy(pcVar1,pcVar2,uVar6,pcVar4);
  }
  else {
    if (pcVar3 != param_4 || pcVar2 + uVar6 * 8 <= pcVar1) {
      _memmove(pcVar1,pcVar2,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return pcVar3;
}



/* Entry: 1044ecf1c; end: 1044ed037;  */

undefined * FUN_1044ecf1c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1044ed038);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112e1c580;
    func_0x0001000285a8(0x112e1c580,&UNK_10d9fdcf0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0xa0) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&UNK_11077eba8);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0xa0 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0xa0);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 1044ed038; end: 1044ed35f;  */

ulong FUN_1044ed038(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1044ed100);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1044ed104);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x0001044ecc3c();
    uVar3 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar5 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar3);
    uVar3 = param_1;
    func_0x0001044ecc3c();
    uVar4 = param_1;
    _swift_dynamicCastClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar5 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar5,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0xd00000000000001f,0x800000010dd0eba0);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar5 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar5);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1044ed1cc);
  (*pcVar2)();
}



/* Entry: 1044ed360; end: 1044ed4fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1044ed360(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 uVar9;
  
  uVar6 = *(ulong *)(param_1 + _DAT_113081438);
  if (uVar6 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar7 = uVar6;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    func_0x0001044ecc5c(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1044ed4fc);
      (*pcVar4)();
    }
    uVar8 = 0;
    do {
      if ((uVar6 & 0xc000000000000001) == 0) {
        uVar5 = *(ulong *)(uVar6 + uVar8 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar5 = uVar8;
        FUN_1044ed038(uVar8,uVar6);
      }
      uVar9 = *(undefined4 *)(uVar5 + _DAT_113081428);
      uVar1 = *(undefined8 *)(uVar5 + _DAT_113081430);
      uVar2 = ((undefined8 *)(uVar5 + _DAT_113081430))[1];
      _swift_bridgeObjectRetain(uVar2);
      _objc_release(uVar5);
      uVar5 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar5) {
        func_0x0001044ecc5c(1 < *(ulong *)(puVar3 + 0x18),uVar5 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar5 + 1;
      *(undefined4 *)(puVar3 + uVar5 * 0x18 + 0x20) = uVar9;
      uVar8 = uVar8 + 1;
      *(undefined8 *)(puVar3 + uVar5 * 0x18 + 0x28) = uVar1;
      *(undefined8 *)(puVar3 + uVar5 * 0x18 + 0x30) = uVar2;
    } while (uVar7 != uVar8);
  }
  _swift_bridgeObjectRetain(*(undefined8 *)(param_1 + _DAT_113081448 + 8));
  return puVar3;
}



/* Entry: 1044ed4fc; end: 1044ed51b;  */

void FUN_1044ed4fc(void)

{
  _objc_opt_self(&PTR_PTR_1129c52f0);
  return;
}



/* Entry: 1044ed51c; end: 1044ed57b;  */

void FUN_1044ed51c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    _swift_bridgeObjectRelease();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
    return;
  }
  return;
}



/* Entry: 1044ed57c; end: 1044ed59b;  */

void FUN_1044ed57c(void)

{
  _objc_opt_self(&PTR_PTR_1129c53c8);
  return;
}



/* Entry: 1044ed59c; end: 1044ed7cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ed59c(undefined8 *param_1,ulong param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar12 = (uint)param_2;
  lVar1 = *(long *)(param_3 + _DAT_113081460);
  if (lVar1 == 0) {
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    lStack_90 = 0;
    uStack_78 = 0;
    uVar10 = 1;
    uVar9 = param_4;
    uVar6 = param_5;
  }
  else {
    uStack_78 = *(undefined8 *)(lVar1 + _DAT_113081450);
    uVar10 = ((undefined8 *)(lVar1 + _DAT_113081450))[1];
    lVar1 = *(long *)(lVar1 + _DAT_113081458);
    if (lVar1 == 0) {
      _swift_bridgeObjectRetain(uVar10);
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      lStack_90 = 0;
      uVar9 = param_4;
      uVar6 = param_5;
    }
    else {
      _swift_bridgeObjectRetain(uVar10);
      _objc_retain();
      lStack_90 = lVar1;
      FUN_1044ed360();
      uVar12 = (uint)param_2;
      uVar9 = param_4;
      uVar6 = param_5;
      _objc_release(lVar1);
      uStack_98 = param_2 & 0xffffffff;
      uStack_88 = param_4;
      uStack_80 = param_5;
    }
  }
  lVar1 = *(long *)(param_3 + _DAT_113081468);
  if (lVar1 == 0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
    uVar8 = 0;
    lStack_b8 = 0;
    uStack_a0 = 0;
    uVar7 = 1;
    uVar5 = uVar9;
    uVar4 = uVar6;
  }
  else {
    uStack_a0 = *(undefined8 *)(lVar1 + _DAT_113081450);
    uVar7 = ((undefined8 *)(lVar1 + _DAT_113081450))[1];
    lVar1 = *(long *)(lVar1 + _DAT_113081458);
    if (lVar1 == 0) {
      _swift_bridgeObjectRetain(uVar7);
      uStack_b0 = 0;
      uStack_a8 = 0;
      uVar8 = 0;
      lStack_b8 = 0;
      uVar5 = uVar9;
      uVar4 = uVar6;
    }
    else {
      uVar11 = uVar12;
      _swift_bridgeObjectRetain(uVar7);
      _objc_retain();
      lStack_b8 = lVar1;
      FUN_1044ed360();
      uVar5 = uVar9;
      uVar4 = uVar6;
      uVar12 = uVar11;
      _objc_release(lVar1);
      uVar8 = (ulong)uVar11;
      uStack_b0 = uVar9;
      uStack_a8 = uVar6;
    }
  }
  lVar1 = *(long *)(param_3 + _DAT_113081470);
  if (lVar1 == 0) {
    uVar4 = 0;
    uVar5 = 0;
    lVar1 = 0;
    uVar9 = 0;
    uVar6 = 1;
    uVar2 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar1 + _DAT_113081450);
    uVar6 = ((undefined8 *)(lVar1 + _DAT_113081450))[1];
    lVar3 = *(long *)(lVar1 + _DAT_113081458);
    if (lVar3 == 0) {
      _swift_bridgeObjectRetain(uVar6);
      uVar5 = 0;
      uVar2 = 0;
      lVar1 = 0;
      uVar4 = 0;
    }
    else {
      _swift_bridgeObjectRetain(uVar6);
      _objc_retain();
      lVar1 = lVar3;
      FUN_1044ed360();
      _objc_release(lVar3);
      uVar2 = (ulong)uVar12;
    }
  }
  *param_1 = uStack_78;
  param_1[1] = uVar10;
  param_1[2] = lStack_90;
  param_1[3] = uStack_98;
  param_1[4] = uStack_88;
  param_1[5] = uStack_80;
  param_1[6] = uStack_a0;
  param_1[7] = uVar7;
  param_1[8] = lStack_b8;
  param_1[9] = uVar8;
  param_1[10] = uStack_b0;
  param_1[0xb] = uStack_a8;
  param_1[0xc] = uVar9;
  param_1[0xd] = uVar6;
  param_1[0xe] = lVar1;
  param_1[0xf] = uVar2;
  param_1[0x10] = uVar5;
  param_1[0x11] = uVar4;
  return;
}



/* Entry: 1044ed7d0; end: 1044ed80f;  */

void FUN_1044ed7d0(void)

{
  _objc_opt_self(&PTR_PTR_1129c5498);
  return;
}



/* Entry: 1044ed810; end: 1044ed9a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1044ed810(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  uVar6 = *(ulong *)(param_1 + _DAT_113081488);
  if (uVar6 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar7 = uVar6;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    func_0x0001044eccac(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1044ed9a8);
      (*pcVar4)();
    }
    uVar8 = 0;
    do {
      puVar3 = puStack_70;
      if ((uVar6 & 0xc000000000000001) == 0) {
        uVar5 = *(ulong *)(uVar6 + uVar8 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar5 = uVar8;
        func_0x0001044ed1cc(uVar8,uVar6);
      }
      uVar1 = *(undefined8 *)(uVar5 + _DAT_113081478);
      uVar2 = ((undefined8 *)(uVar5 + _DAT_113081478))[1];
      uVar9 = *(undefined8 *)(uVar5 + _DAT_113081480);
      _swift_bridgeObjectRetain(uVar2);
      _objc_retain(uVar9);
      FUN_1044ed59c(&uStack_100);
      _objc_release(uVar5);
      _objc_release(uVar9);
      uVar5 = *(ulong *)(puVar3 + 0x10);
      puStack_70 = puVar3;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar5) {
        func_0x0001044eccac(1 < *(ulong *)(puVar3 + 0x18),uVar5 + 1,1);
      }
      uVar8 = uVar8 + 1;
      *(ulong *)(puStack_70 + 0x10) = uVar5 + 1;
      *(undefined8 *)(puStack_70 + uVar5 * 0xa0 + 0x20) = uVar1;
      *(undefined8 *)(puStack_70 + uVar5 * 0xa0 + 0x28) = uVar2;
      *(undefined8 *)(puStack_70 + uVar5 * 0xa0 + 0x38) = uStack_f8;
      *(undefined8 *)(puStack_70 + uVar5 * 0xa0 + 0x30) = uStack_100;
      *(undefined8 *)(puStack_70 + uVar5 * 0xa0 + 0x68) = uStack_c8;
      *(undefined8 *)(puStack_70 + uVar5 * 0xa0 + 0x60) = uStack_d0;
      *(undefined8 *)(puStack_70 + uVar5 * 0xa0 + 0x78) = uStack_b8;
      *(undefined8 *)(puStack_70 + uVar5 * 0xa0 + 0x70) = uStack_c0;
      *(undefined8 *)(puStack_70 + uVar5 * 0xa0 + 0x48) = uStack_e8;
      *(undefined8 *)(puStack_70 + uVar5 * 0xa0 + 0x40) = uStack_f0;
      *(undefined8 *)(puStack_70 + uVar5 * 0xa0 + 0x58) = uStack_d8;
      *(undefined8 *)(puStack_70 + uVar5 * 0xa0 + 0x50) = uStack_e0;
      *(undefined8 *)(puStack_70 + uVar5 * 0xa0 + 0xa8) = uStack_88;
      *(undefined8 *)(puStack_70 + uVar5 * 0xa0 + 0xa0) = uStack_90;
      *(undefined8 *)(puStack_70 + uVar5 * 0xa0 + 0xb8) = uStack_78;
      *(undefined8 *)(puStack_70 + uVar5 * 0xa0 + 0xb0) = uStack_80;
      *(undefined8 *)(puStack_70 + uVar5 * 0xa0 + 0x88) = uStack_a8;
      *(undefined8 *)(puStack_70 + uVar5 * 0xa0 + 0x80) = uStack_b0;
      *(undefined8 *)(puStack_70 + uVar5 * 0xa0 + 0x98) = uStack_98;
      *(undefined8 *)(puStack_70 + uVar5 * 0xa0 + 0x90) = uStack_a0;
    } while (uVar7 != uVar8);
  }
  return puStack_70;
}



/* Entry: 1044ed9a8; end: 1044ed9c7;  */

void FUN_1044ed9a8(void)

{
  _objc_opt_self(&PTR_PTR_1129c5640);
  return;
}



/* Entry: 1044ed9c8; end: 1044ed9cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ed9c8(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined4 *)(unaff_x20 + _DAT_113081428) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113081430);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044ed9cc; end: 1044ed9cf; -[SCLensCarouselGradientSegment copyWithZone:] */

void FUN_1044ed9cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044ed9d0; end: 1044ed9d3; -[SCLensCarouselLinearGradient copyWithZone:] */

void FUN_1044ed9d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044ed9d4; end: 1044ed9d7; -[SCLensCarouselColorTint copyWithZone:] */

void FUN_1044ed9d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044ed9d8; end: 1044ed9db; -[SCLensCarouselTabColorScheme copyWithZone:] */

void FUN_1044ed9d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044ed9dc; end: 1044ed9df; -[SCLensCarouselThemeRule copyWithZone:] */

void FUN_1044ed9dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044ed9e0; end: 1044eda0f; -[SCLensCarouselCategoryThemeRulesConfig copyWithZone:] */

void FUN_1044ed9e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1044eda10; end: 1044eda4f;  */

void FUN_1044eda10(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081590 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0ecb0;
  _swift_getWitnessTable(&UNK_10dd0ecb0,&UNK_11077edd8);
  puRam0000000113081590 = puVar1;
  return;
}



/* Entry: 1044eda50; end: 1044edafb;  */

void FUN_1044eda50(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044edafc; end: 1044edb4b;  */

void FUN_1044edafc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 1044edb4c; end: 1044edb8b;  */

void FUN_1044edb4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113081598 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0eda0;
  _swift_getWitnessTable(&UNK_10dd0eda0,&UNK_11077ee50);
  puRam0000000113081598 = puVar1;
  return;
}



/* Entry: 1044edb8c; end: 1044edc37;  */

void FUN_1044edb8c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044edc38; end: 1044edc87;  */

void FUN_1044edc38(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 1044edc88; end: 1044edcc7;  */

void FUN_1044edc88(void)

{
  undefined *puVar1;
  
  if (puRam00000001130815a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd0ee60;
  _swift_getWitnessTable(&UNK_10dd0ee60,&UNK_11077eec8);
  puRam00000001130815a0 = puVar1;
  return;
}



/* Entry: 1044edcc8; end: 1044edd73;  */

void FUN_1044edcc8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044edd74; end: 1044eddab;  */

void FUN_1044edd74(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 1044eddac; end: 1044eddf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044eddac(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130815a8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1044eddf8; end: 1044ede4f; -[_TtC29SCSystemConfigurationServices29SCSystemConfigurationServices initWithStartupConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044eddf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130815a8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 1044ede50; end: 1044edeaf; -[_TtC29SCSystemConfigurationServices29SCSystemConfigurationServices init] */

void FUN_1044ede50(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCSystemConfigurationServices.SCSystemConfigurationServices",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1044ede7c);
  (*pcVar1)();
}



/* Entry: 1044edeb0; end: 1044edebf; -[_TtC29SCSystemConfigurationServices29SCSystemConfigurationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044edeb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130815a8));
  return;
}



/* Entry: 1044edec0; end: 1044edf4b;  */

void FUN_1044edec0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000028;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000028,0x800000010f205060);
  uRam0000000113813b98 = uVar1;
  return;
}



/* Entry: 1044edf4c; end: 1044edf8b; +[_TtC24ScreenRecordingDetection23ScreenRecordingDetector shared] */

void FUN_1044edf4c(void)

{
  if (lRam0000000113644870 != -1) {
    _swift_once(0x113644870,0x1044edf28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113813ba8);
  return;
}



/* Entry: 1044edf8c; end: 1044ee1bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044edf8c(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long extraout_x8;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  double dVar12;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar4 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar2 = _DAT_1130815e8;
  puVar9 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = *(long *)(unaff_x20 + _DAT_1130815e8);
  if (lVar10 != 0) {
    _swift_retain(lVar10);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar10);
  }
  puVar5 = &UNK_11077efc0;
  _swift_allocObject(&UNK_11077efc0,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1044f00d8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_11077f190;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar5;
  __Block_copy(ppuVar6);
  puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  ppuVar7 = ppuVar6;
  func_0x0001001c7eec();
  _swift_retain(puVar5);
  uVar11 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar8 = uVar11;
  func_0x0001001c7f30();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar9,&puStack_a8,uVar11,uVar8,lVar4,ppuVar7);
  __s8Dispatch0A8WorkItemCMa();
  _swift_allocObject();
  __s8Dispatch0A8WorkItemC5flags5blockAcA0abC5FlagsV_yyXBtcfc(puVar9,ppuVar6);
  puVar3 = puStack_78;
  _swift_release(puVar5);
  _swift_release(puVar3);
  uVar11 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined1 **)(unaff_x20 + lVar2) = puVar9;
  _swift_retain(puVar9);
  _swift_release(uVar11);
  dVar12 = *(double *)(unaff_x20 + _DAT_1130815f0);
  pcStack_80 = FUN_1044f0130;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_11077f1b8;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar9;
  __Block_copy(ppuVar7);
  puVar5 = puStack_78;
  _swift_retain(puVar9);
  _swift_release(puVar5);
  func_0x000100c749e0((float)dVar12,&UNK_10dd0ef70,ppuVar7);
  __Block_release(ppuVar7);
  _swift_release(puVar9);
  return;
}



/* Entry: 1044ee1bc; end: 1044ee263; -[_TtC24ScreenRecordingDetection23ScreenRecordingDetector checkForScreenRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ee1bc(ulong param_1)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = *(char *)(param_1 + _DAT_1130815d8);
  _objc_retain();
  if (cVar1 == '\x01') {
    FUN_1044edf8c();
  }
  else {
    uVar2 = param_1;
    func_0x0001044ef438();
    if ((uVar2 & 1) != 0) {
      FUN_1044ef830();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1044ee264; end: 1044ee34f; -[_TtC24ScreenRecordingDetection23ScreenRecordingDetector setDebounceRoutingEnabled:] */

void FUN_1044ee264(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = &UNK_11077efc0;
  _swift_allocObject(&UNK_11077efc0,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  puVar2 = &UNK_11077f150;
  _swift_allocObject(&UNK_11077f150,0x19,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  puVar2[0x18] = param_3;
  uStack_40 = 0x1044f01c8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11077f168;
  puStack_38 = puVar2;
  __Block_copy(&puStack_60);
  puVar1 = puStack_38;
  _objc_retain(param_1);
  _swift_release(puVar1);
  func_0x0001000d76cc("ScreenRecordingDetector setDebounceRoutingEnabled",ppuVar3);
  __Block_release(ppuVar3);
  _objc_release(param_1);
  return;
}



/* Entry: 1044ee350; end: 1044ee433;  */

void FUN_1044ee350(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = &UNK_11077efc0;
  _swift_allocObject(&UNK_11077efc0,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  puVar2 = &UNK_11077efe8;
  _swift_allocObject(&UNK_11077efe8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(double *)(puVar2 + 0x18) = (double)(param_1 & ((int)param_1 >> 0x1f ^ 0xffffffffU)) / 1000.0;
  pcStack_40 = FUN_1044ef938;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11077f000;
  puStack_38 = puVar2;
  __Block_copy(&puStack_60);
  _swift_release(puStack_38);
  func_0x0001000d76cc("ScreenRecordingDetector setDebounceInterval",ppuVar3);
  __Block_release(ppuVar3);
  return;
}



/* Entry: 1044ee434; end: 1044ee463; -[_TtC24ScreenRecordingDetection23ScreenRecordingDetector setDebounceIntervalMillis:] */

void FUN_1044ee434(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_1044ee350(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1044ee464; end: 1044ee47b; -[_TtC24ScreenRecordingDetection23ScreenRecordingDetector isUserRecordingScreen] */

uint FUN_1044ee464(uint param_1)

{
  func_0x0001044ef438();
  return param_1 & 1;
}



/* Entry: 1044ee47c; end: 1044ee5af;  */

void FUN_1044ee47c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  _objc_opt_self(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  puVar2 = puVar1;
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar2);
  func_0x00010bf68fa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = &UNK_11077efc0;
  _swift_allocObject(&UNK_11077efc0,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  pcStack_40 = FUN_1044efe68;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11077f118;
  puStack_38 = puVar1;
  __Block_copy(&puStack_60);
  _swift_release(puStack_38);
  func_0x0001000d76cc("ScreenRecordingDetector Setup",ppuVar3);
  __Block_release(ppuVar3);
  return;
}



/* Entry: 1044ee5b0; end: 1044ee65b; -[_TtC24ScreenRecordingDetection23ScreenRecordingDetector init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1044ee5b0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_1;
  _swift_getObjectType();
  lVar1 = _DAT_1130815e0;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1044ef998();
  *(undefined **)(param_1 + lVar1) = puVar3;
  *(undefined8 *)(param_1 + _DAT_1130815e8) = 0;
  *(undefined1 *)(param_1 + _DAT_1130815d8) = 0;
  *(undefined8 *)(param_1 + _DAT_1130815f0) = 0x3fc999999999999a;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  _objc_retainAutoreleasedReturnValue();
  FUN_1044ee47c();
  _objc_release(plVar4);
  return (undefined1 *)plVar4;
}



/* Entry: 1044ee65c; end: 1044ee913;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044ee65c(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 *puVar11;
  long unaff_x20;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_1130815e0;
  puVar11 = auStack_68;
  _swift_beginAccess(unaff_x20 + _DAT_1130815e0,puVar11,0x20,0);
  if ((*(long *)(*(long *)(unaff_x20 + lVar1) + 0x10) == 0) ||
     (func_0x0001000a7158(param_1), ((ulong)puVar11 & 1) == 0)) {
    _swift_endAccess(auStack_68);
    uVar5 = param_1;
    func_0x00010c086b80();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 == 0) {
      uVar5 = param_1;
      func_0x00010c2a7380();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = 0;
      FUN_1044f0150(0,0x112d36e50,&PTR__OBJC_CLASS___UIWindow_1126c3e70);
      uVar4 = uVar5;
      __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar5,uVar3);
      _objc_release(uVar5);
      if (uVar4 >> 0x3e == 0) {
        uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar5 = uVar4 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar4) {
          uVar5 = uVar4;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (uVar5 == 0) {
        _swift_bridgeObjectRelease(uVar4);
        return;
      }
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1044ee914);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(uVar4 + 0x20);
        _objc_retain(uVar5);
      }
      else {
        uVar5 = 0;
        func_0x000100de9de8(0,uVar4);
      }
      _swift_bridgeObjectRelease(uVar4);
    }
    lVar6 = 0x113081628;
    func_0x0001000285a8(0x113081628,&UNK_10dd21ca0);
    _swift_allocObject();
    *(undefined8 *)(lVar6 + 0x18) = 2;
    *(undefined8 *)(lVar6 + 0x10) = 1;
    uVar3 = 0;
    __s5UIKit24UITraitSceneCaptureStateVMa();
    puVar7 = PTR___s5UIKit24UITraitSceneCaptureStateVAA0B10DefinitionAAWP_110345718;
    *(undefined8 *)(lVar6 + 0x20) = uVar3;
    *(undefined **)(lVar6 + 0x28) = puVar7;
    puVar7 = &UNK_11077efc0;
    _swift_allocObject(&UNK_11077efc0,0x18,7);
    _swift_unknownObjectWeakInit(puVar7 + 0x10);
    puVar8 = &UNK_11077f038;
    _swift_allocObject(&UNK_11077f038,0x18,7);
    _swift_unknownObjectWeakInit(puVar8 + 0x10,param_1);
    puVar9 = &UNK_11077f100;
    _swift_allocObject(&UNK_11077f100,0x20,7);
    *(undefined **)(puVar9 + 0x10) = puVar7;
    *(undefined **)(puVar9 + 0x18) = puVar8;
    uVar3 = 0;
    FUN_1044f0150(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    lVar10 = lVar6;
    __sSo6UIViewC5UIKitE23registerForTraitChanges_7handlerSo25UITraitChangeRegistration_pSayAC0H10Definition_pXpG_yx_So0H10CollectionCtctSo0H11EnvironmentRzlF
              (lVar6,0x1044efc48,puVar9,uVar3);
    _swift_release(lVar6);
    _swift_release(puVar9);
    lVar6 = lVar10;
    _swift_getObjectType(lVar10);
    _swift_beginAccess(unaff_x20 + lVar1,auStack_68,0x21,0);
    _swift_unknownObjectRetain(lVar10);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    _swift_isUniquelyReferenced_nonNull_native(uVar3);
    uStack_70 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0x8000000000000000;
    func_0x0001044efd38(lVar10,param_1,uVar3,&uStack_70,lVar6);
    *(undefined8 *)(unaff_x20 + lVar1) = uStack_70;
    _swift_endAccess(auStack_68);
    _objc_release(uVar5);
    _swift_unknownObjectRelease(lVar10);
  }
  else {
    _swift_endAccess(auStack_68);
  }
  return;
}


