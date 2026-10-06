/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103eda31c; end: 103eda3d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eda31c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302c6f0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103eda3d4; end: 103eda45b; -[_TtC28CaptionStickerSuggestionsAPI33CaptionStickerSuggestionsServices initWithItemInstanceSourceFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eda3d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __Block_copy();
  puVar3 = &UNK_11071e388;
  _swift_allocObject(&UNK_11071e388,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_11302c6f0);
  *puVar1 = FUN_103eda51c;
  puVar1[1] = puVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103eda45c; end: 103eda487;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eda45c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + _DAT_11302c6f0))();
  return;
}



/* Entry: 103eda488; end: 103eda4d3; -[_TtC28CaptionStickerSuggestionsAPI33CaptionStickerSuggestionsServices makeItemInstanceSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eda488(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_11302c6f0);
  _objc_retain();
  lVar2 = param_1;
  (*pcVar1)();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103eda4d4; end: 103eda507;  */

void FUN_103eda4d4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103eda508; end: 103eda51b; -[_TtC28CaptionStickerSuggestionsAPI33CaptionStickerSuggestionsServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eda508(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11302c6f0 + 8));
  return;
}



/* Entry: 103eda51c; end: 103eda53b;  */

void FUN_103eda51c(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 103eda53c; end: 103eda54b; -[PreviewFeatureCustomojiServices customoji] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eda53c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302c720));
  return;
}



/* Entry: 103eda54c; end: 103eda593; -[PreviewFeatureCustomojiServices init] */

void FUN_103eda54c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "PreviewFeatureCustomojiAPI/PreviewFeatureCustomojiServices.swift",0x40,2,0xe,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103eda594);
  (*pcVar1)();
}



/* Entry: 103eda594; end: 103eda62b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eda594(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302c720) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103eda62c; end: 103eda683; -[PreviewFeatureCustomojiServices initWithCustomoji:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eda62c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11302c720) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 103eda684; end: 103eda6b7;  */

void FUN_103eda684(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103eda6b8; end: 103eda6c7; -[PreviewFeatureCustomojiServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eda6b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302c720));
  return;
}



/* Entry: 103eda6c8; end: 103eda6e7;  */

void FUN_103eda6c8(void)

{
  _objc_opt_self(&PTR_PTR_112961c08);
  return;
}



/* Entry: 103eda6e8; end: 103eda74f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eda6e8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001003713e8();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11302c758) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103eda750; end: 103eda79b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eda750(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302c758) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103eda79c; end: 103eda8db; -[_TtC22SCCaaSCameraScopeProxy32SCCaaSCameraScopeBuilderServices buildWithReplyConfiguration:uiContainer:cameraUsageTier:featureCategoryCollection:scopedCameraType:optionalConfiguration:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eda79c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *apuStack_78 [2];
  undefined8 uStack_68;
  
  puVar1 = PTR_PTR_1126a9ce8;
  _objc_allocWithZone();
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_6);
  _objc_retain(param_8);
  _swift_unknownObjectRetain(param_9);
  _objc_retain();
  func_0x000107c48318(puVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  apuStack_78[0] = puVar1;
  func_0x00010008a7c8(&uStack_68,apuStack_78);
  func_0x000100083b20(apuStack_78);
  _swift_release(uStack_68);
  _objc_release(param_3);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_6);
  _objc_release(param_8);
  _swift_unknownObjectRelease(param_9);
  _objc_release(param_1);
  _swift_unknownObjectRelease(apuStack_78[0]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103eda8dc; end: 103eda90b;  */

void FUN_103eda8dc(void)

{
  func_0x0001003713e8();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103eda90c; end: 103eda93b; -[_TtC22SCCaaSCameraScopeProxy32SCCaaSCameraScopeBuilderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eda90c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11302c758));
  return;
}



/* Entry: 103eda93c; end: 103edaa0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103eda93c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  lVar1 = _DAT_11302c7a0;
  lVar2 = unaff_x20;
  FUN_103edbda8();
  *(long *)(unaff_x20 + lVar1) = lVar2;
  *(undefined8 *)(unaff_x20 + _DAT_11302c7a8) = param_1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103edaa0c; end: 103edaa7f; -[SCFanPassSticker initWithItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103edaa0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  lVar1 = _DAT_11302c7a0;
  _objc_retain();
  uVar3 = param_3;
  FUN_103edbda8();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  *(undefined8 *)(param_1 + _DAT_11302c7a8) = param_3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103edaa80; end: 103edaaef; -[SCFanPassSticker initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103edaa80(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  
  lVar1 = _DAT_11302c7a0;
  lVar3 = param_1;
  FUN_103edbda8();
  *(long *)(param_1 + lVar1) = lVar3;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
             "SCFanPassSticker/FanPassSticker.swift",0x25,2,0x14,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103edaaf0);
  (*pcVar2)();
}



/* Entry: 103edaaf0; end: 103edabcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103edaaf0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar2 = &lStack_58;
    _swift_dynamicCast(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      func_0x000103edb0b8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11302c7a8);
      uVar3 = *(undefined8 *)(lStack_58 + _DAT_11302c7a8);
      _objc_retain(uVar3);
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar3);
      uVar4 = (uint)uVar5;
      _objc_release(lStack_58);
      _objc_release(uVar3);
      goto LAB_103edabb8;
    }
  }
  uVar4 = 0;
LAB_103edabb8:
  return uVar4 & 1;
}



/* Entry: 103edabd0; end: 103edac4f; -[SCFanPassSticker isEqual:] */

uint FUN_103edabd0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_103edaaf0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103edac50; end: 103edac7b; -[SCFanPassSticker hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_103edac50(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11302c7a0);
  func_0x000107c44c3c(uVar1);
  return uVar1 ^ 0x5504763;
}



/* Entry: 103edac7c; end: 103edac83; -[SCFanPassSticker infoType] */

undefined8 FUN_103edac7c(void)

{
  return 0x15;
}



/* Entry: 103edac84; end: 103edac8f; -[SCFanPassSticker stickerId] */

void FUN_103edac84(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0x535341505f4e4146;
  uVar3 = 0xe800000000000000;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x535341505f4e4146,0xe800000000000000);
  lVar2 = lVar1;
  (*(code *)&UNK_108ebb990)();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103edac90; end: 103edac9b; -[SCFanPassSticker shortLoggingName] */

void FUN_103edac90(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0x535341505f4e4146;
  uVar3 = 0xe800000000000000;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x535341505f4e4146,0xe800000000000000);
  lVar2 = lVar1;
  (*(code *)&UNK_108ebb9cc)();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103edac9c; end: 103edad13;  */

void FUN_103edac9c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0x535341505f4e4146;
  uVar3 = 0xe800000000000000;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x535341505f4e4146,0xe800000000000000);
  lVar2 = lVar1;
  (*param_3)();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103edad14; end: 103edad23; -[SCFanPassSticker toCTPItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103edad14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302c7a0));
  return;
}



/* Entry: 103edad24; end: 103edad33; -[SCFanPassSticker toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103edad24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302c7a8));
  return;
}



/* Entry: 103edad34; end: 103edad3b; -[SCFanPassSticker supportedFlows] */

undefined8 FUN_103edad34(void)

{
  return 0;
}



/* Entry: 103edad3c; end: 103edad4b; -[SCFanPassSticker intrinsicSize] */

undefined1  [16] FUN_103edad3c(void)

{
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 103edad4c; end: 103edaefb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_103edad4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c5d0f0();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11302c7a0);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11302c7a8);
  puVar1 = PTR_PTR_1126ba898;
  _objc_allocWithZone(PTR_PTR_1126ba898);
  uVar2 = 0;
  func_0x000103edb0b8(0,0x112dc0158,&PTR_PTR_1126d91a8);
  _objc_retain(uVar3);
  _objc_retain(uVar4);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_7,uVar2);
  uVar2 = 0;
  func_0x000103edb0b8(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_10,uVar2);
  func_0x000107c48ec0(param_1,param_2,param_3,param_4,param_5,param_6,puVar1);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(param_7);
  _objc_release(param_10);
  return puVar1;
}



/* Entry: 103edaefc; end: 103edb01f; -[SCFanPassSticker stickerStateWithRelativeSize:center:rotation:scale:tappableElementBounds:isTracking:isTimed:trackingTrajectory:isFlipped:] */

void FUN_103edaefc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000103edb0b8(0,0x112dc0158,&PTR_PTR_1126d91a8);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_9,uVar1);
  uVar1 = 0;
  func_0x000103edb0b8(0,0x112d74ac8,&PTR_PTR_1126bb2a8);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_12,uVar1);
  _objc_retain(param_7);
  uVar1 = param_9;
  FUN_103edad4c(param_1,param_2,param_3,param_4,param_5,param_6,param_9,param_10,param_11,param_12,
                param_13);
  _objc_release(param_7);
  _swift_bridgeObjectRelease(param_9);
  _swift_bridgeObjectRelease(param_12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103edb020; end: 103edb07f; -[SCFanPassSticker init] */

void FUN_103edb020(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("SCFanPassSticker.FanPassSticker",0x1f,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103edb04c);
  (*pcVar1)();
}



/* Entry: 103edb080; end: 103edb0f7; -[SCFanPassSticker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103edb080(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302c7a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302c7a8));
  return;
}



/* Entry: 103edb0f8; end: 103edb117;  */

void FUN_103edb0f8(void)

{
  _objc_opt_self(&PTR_PTR_112961d88);
  return;
}



/* Entry: 103edb118; end: 103edb12f;  */

void FUN_103edb118(void)

{
  uRam00000001138122e8 = 0x406ea00000000000;
  uRam00000001138122e0 = 0x406ea00000000000;
  return;
}



/* Entry: 103edb130; end: 103edb19f;  */

void FUN_103edb130(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  uVar1 = 0;
  __sScMMa();
  uVar2 = uVar1;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
  func_0x000100eea164();
  __sScA15unownedExecutorScevgTj(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x103edd05c,uVar1,uVar2);
  return;
}



/* Entry: 103edb1a0; end: 103edb1e3;  */

void FUN_103edb1a0(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x000103edb1e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 103edb1e4; end: 103edb253;  */

void FUN_103edb1e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  uVar1 = 0;
  __sScMMa();
  uVar2 = uVar1;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
  func_0x000100eea164();
  __sScA15unownedExecutorScevgTj(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x103edd060,uVar1,uVar2);
  return;
}



/* Entry: 103edb254; end: 103edb337;  */

void FUN_103edb254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_11071e8d8;
  _swift_allocObject(&UNK_11071e8d8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  puVar2 = &UNK_11071e900;
  _swift_allocObject(&UNK_11071e900,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dca7b60;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  _objc_retain(param_1);
  _objc_retain(param_2);
  _swift_retain(param_4);
  uVar3 = 1;
  func_0x0001001ca524(1,0x100,0x60,4,0,0,&UNK_10dca7b70,puVar2,PTR___sytN_11034f1b0 + 8);
  _swift_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar3);
  return;
}



/* Entry: 103edb338; end: 103edb3a7;  */

void FUN_103edb338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  __sScMMa();
  uVar2 = uVar1;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  __sScA15unownedExecutorScevgTj(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103edb3a8,uVar1,uVar2);
  return;
}



/* Entry: 103edb3a8; end: 103edb423;  */

void FUN_103edb3a8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  pcVar2 = *(code **)(unaff_x22 + 0x20);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x30));
  FUN_103ede508(uVar1);
  puVar3 = PTR_PTR_1126af5d0;
  _objc_opt_self(PTR_PTR_1126af5d0);
  func_0x000107c5c3c8();
  _objc_retainAutoreleasedReturnValue();
  (*pcVar2)();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x000103edb420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103edb424; end: 103edb45f;  */

void FUN_103edb424(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103edb45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103edb460; end: 103edb4d7; +[SCFanPassStickerHelpers fanPassStickerViewFromItemInstance:runtime:completion:] */

void FUN_103edb460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  __Block_copy(param_5);
  __Block_copy();
  uVar1 = param_3;
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  FUN_103edbfb0(param_3,param_4,param_5);
  __Block_release(param_5);
  __Block_release(param_5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_4);
  return;
}



/* Entry: 103edb4d8; end: 103edb5e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103edb4d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_3 != 0) {
    puVar1 = (undefined8 *)(param_3 + _DAT_11302c818);
    _swift_beginAccess(puVar1,auStack_70,1,0);
    uVar2 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    _swift_bridgeObjectRelease(uVar2);
    puVar1 = (undefined8 *)(param_3 + _DAT_11302c820);
    _swift_beginAccess(puVar1,auStack_88,0,0);
    pcVar3 = (code *)*puVar1;
    if (pcVar3 == (code *)0x0) {
      _swift_bridgeObjectRetain(param_2);
      _objc_release(param_3);
    }
    else {
      uVar2 = puVar1[1];
      _swift_bridgeObjectRetain(param_2);
      func_0x000100d71a70(pcVar3,uVar2);
      (*pcVar3)(param_1,param_2);
      _objc_release(param_3);
      func_0x000100d71a80(pcVar3,uVar2);
    }
  }
  return;
}



/* Entry: 103edb5e4; end: 103edb693;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103edb5e4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + _DAT_11302c828);
    _swift_beginAccess(puVar1,auStack_60,0,0);
    pcVar3 = (code *)*puVar1;
    if (pcVar3 == (code *)0x0) {
      _objc_release(param_1);
    }
    else {
      uVar2 = puVar1[1];
      func_0x000100d71a70(pcVar3,uVar2);
      _objc_release(param_1);
      (*pcVar3)();
      func_0x000100d71a80(pcVar3,uVar2);
    }
  }
  return;
}



/* Entry: 103edb694; end: 103edb7bf;  */

void FUN_103edb694(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  
  puVar1 = &UNK_11071e6a8;
  _swift_allocObject(&UNK_11071e6a8,0x18,7);
  _swift_beginAccess(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong(param_3);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_3);
  _objc_release(param_3);
  _swift_allocObject(param_4,0x28,7);
  *(undefined **)(param_4 + 0x10) = puVar1;
  *(undefined8 *)(param_4 + 0x18) = param_1;
  *(undefined8 *)(param_4 + 0x20) = param_2;
  _swift_allocObject(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_6;
  *(long *)(param_5 + 0x18) = param_4;
  _swift_retain(param_2);
  uVar2 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar3 = 1;
  func_0x0001001ca524(1,0x100,0x60,4,0,0,param_7,param_5,uVar2);
  _swift_release(param_5);
  _swift_release(uVar3);
  return;
}



/* Entry: 103edb7c0; end: 103edb82f;  */

void FUN_103edb7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  uVar1 = 0;
  __sScMMa();
  uVar2 = uVar1;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
  func_0x000100eea164();
  __sScA15unownedExecutorScevgTj(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103edb830,uVar1,uVar2);
  return;
}



/* Entry: 103edb830; end: 103edb8ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103edb830(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x40);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x58));
  _swift_beginAccess(lVar6 + 0x10,unaff_x22 + 0x10,0,0);
  lVar6 = lVar6 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar6 != 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
    puVar1 = (undefined8 *)(lVar6 + _DAT_11302c880);
    _swift_beginAccess(puVar1,unaff_x22 + 0x28,1,0);
    uVar3 = *puVar1;
    uVar5 = puVar1[1];
    *puVar1 = uVar2;
    puVar1[1] = uVar4;
    _swift_retain(uVar4);
    func_0x000100d71a80(uVar3,uVar5);
    _objc_release(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x000103edb8ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar6 == 0);
  return;
}



/* Entry: 103edb8f0; end: 103edba13;  */

void FUN_103edb8f0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  
  puVar1 = &UNK_11071e6a8;
  _swift_allocObject(&UNK_11071e6a8,0x18,7);
  _swift_beginAccess(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong(param_3);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_3);
  _objc_release(param_3);
  _swift_allocObject(param_4,0x28,7);
  *(undefined **)(param_4 + 0x10) = puVar1;
  *(undefined8 *)(param_4 + 0x18) = param_1;
  *(undefined8 *)(param_4 + 0x20) = param_2;
  _swift_allocObject(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_6;
  *(long *)(param_5 + 0x18) = param_4;
  uVar2 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar3 = 1;
  func_0x0001001ca524(1,0x100,0x60,4,0,0,param_7,param_5,uVar2);
  _swift_release(param_5);
  _swift_release(uVar3);
  return;
}



/* Entry: 103edba14; end: 103edba83;  */

void FUN_103edba14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  uVar1 = 0;
  __sScMMa();
  uVar2 = uVar1;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
  func_0x000100eea164();
  __sScA15unownedExecutorScevgTj(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103edba84,uVar1,uVar2);
  return;
}



/* Entry: 103edba84; end: 103edbb9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103edba84(void)

{
  double *pdVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  lVar5 = *(long *)(unaff_x22 + 0x40);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x58));
  _swift_beginAccess(lVar5 + 0x10,unaff_x22 + 0x10,0,0);
  lVar5 = lVar5 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar5 == 0) {
    uVar4 = 1;
  }
  else {
    dVar9 = *(double *)(unaff_x22 + 0x48);
    dVar8 = *(double *)(unaff_x22 + 0x50);
    pdVar1 = (double *)(lVar5 + _DAT_11302c858);
    _swift_beginAccess(pdVar1,unaff_x22 + 0x28,1,0);
    dVar6 = *pdVar1;
    dVar7 = pdVar1[1];
    bVar2 = false;
    if ((dVar9 == dVar6) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
      bVar2 = dVar8 == dVar7;
    }
    if (!bVar2) {
      dVar8 = *(double *)(unaff_x22 + 0x50);
      *pdVar1 = *(double *)(unaff_x22 + 0x48);
      pdVar1[1] = dVar8;
      func_0x000107c3f74c(lVar5);
      func_0x000107c3ec60(lVar5);
      func_0x000107c52e44(lVar5);
      func_0x000107c532b4(dVar6,dVar7,lVar5);
      lVar3 = lVar5;
      func_0x000107c5b07c();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        func_0x000107c4f1b4();
        _swift_unknownObjectRelease(lVar3);
      }
    }
    _objc_release(lVar5);
    uVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000103edbb9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4);
  return;
}



/* Entry: 103edbba0; end: 103edbc27; +[SCFanPassStickerHelpers editingFanPassStickerViewFromItemInstance:runtime:defaultSubtitleText:] */

void FUN_103edbba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  uVar1 = param_3;
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  func_0x000103edc514(param_3,param_4,param_5,param_2);
  _objc_release(uVar1);
  _swift_unknownObjectRelease(param_4);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103edbc28; end: 103edbc63; -[SCFanPassStickerHelpers init] */

void FUN_103edbc28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103edbc64; end: 103edbc97;  */

void FUN_103edbc64(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103edbc98; end: 103edbda7;  */

undefined8
FUN_103edbc98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 unaff_x20;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuVar3 = &puStack_c0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100c75f50;
  puStack_78 = &UNK_11071e878;
  ppuVar2 = &puStack_90;
  uStack_70 = param_3;
  uStack_68 = param_4;
  __Block_copy(ppuVar2);
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_1000f6b44;
  puStack_a8 = &UNK_11071e8a0;
  uStack_a0 = param_5;
  uStack_98 = param_6;
  __Block_copy(&puStack_c0);
  func_0x000107c46e98();
  __Block_release(ppuVar3);
  __Block_release(ppuVar2);
  _objc_release(param_1);
  _swift_release(uStack_98);
  _swift_release(uStack_68);
  return unaff_x20;
}



/* Entry: 103edbda8; end: 103edbf17;  */

undefined * FUN_103edbda8(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar2 = PTR_PTR_1126ba8d8;
  _objc_allocWithZone();
  func_0x000107c46e80();
  if (puVar2 == (undefined *)0x0) {
    lVar3 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
  }
  else {
    lVar3 = 0;
    func_0x00010197cbdc();
  }
  puStack_70 = puVar2;
  lStack_58 = lVar3;
  _objc_retain();
  uVar4 = 0x535341505f4e4146;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x535341505f4e4146,0xe800000000000000);
  if (lVar3 == 0) {
    lVar6 = 0;
  }
  else {
    func_0x0001006732c8(&puStack_70,lVar3);
    lVar8 = *(long *)(lVar3 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
    lVar7 = (long)&puStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar8 + 0x10))(lVar7);
    lVar6 = lVar7;
    __ss27_bridgeAnythingToObjectiveCyyXlxlF(lVar7,lVar3);
    (**(code **)(lVar8 + 8))(lVar7,lVar3);
    func_0x000100183ab8(&puStack_70);
  }
  puVar5 = PTR_PTR_1126baa60;
  _objc_allocWithZone();
  func_0x000107c46fcc();
  _objc_release(uVar4);
  _swift_unknownObjectRelease(lVar6);
  if (puVar5 != (undefined *)0x0) {
    _objc_release(puVar2);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103edbf18);
  (*pcVar1)();
}



/* Entry: 103edbf18; end: 103edbf4f;  */

void FUN_103edbf18(void)

{
  FUN_103edb694();
  return;
}



/* Entry: 103edbf50; end: 103edbf6b;  */

void FUN_103edbf50(long param_1,long param_2)

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



/* Entry: 103edbf6c; end: 103edbfa3;  */

void FUN_103edbf6c(void)

{
  FUN_103edb8f0();
  return;
}



/* Entry: 103edbfa4; end: 103edbfaf;  */

void FUN_103edbfa4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar4 = &UNK_11071e8d8;
  _swift_allocObject(&UNK_11071e8d8,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar6;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar1;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  puVar5 = &UNK_11071e900;
  _swift_allocObject(&UNK_11071e900,0x20,7);
  *(undefined **)(puVar5 + 0x10) = &UNK_10dca7b60;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  _objc_retain(uVar6);
  _objc_retain(uVar2);
  _swift_retain(uVar3);
  uVar6 = 1;
  func_0x0001001ca524(1,0x100,0x60,4,0,0,&UNK_10dca7b70,puVar5,PTR___sytN_11034f1b0 + 8);
  _swift_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar6);
  return;
}



/* Entry: 103edbfb0; end: 103edca7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103edbfb0(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  puVar5 = &UNK_11071e6d0;
  uVar17 = 0x18;
  _swift_allocObject(&UNK_11071e6d0,0x18,7);
  *(long *)(puVar5 + 0x10) = param_3;
  if ((param_1 == 0) || (param_2 == 0)) {
    __Block_copy(param_3);
  }
  else {
    __Block_copy(param_3);
    _objc_retain();
    _swift_unknownObjectRetain(param_2);
    lVar6 = param_1;
    func_0x000107c41214();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 != 0) {
      lVar7 = lVar6;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      _objc_release(lVar6);
      _objc_retain();
      lVar6 = param_1;
      FUN_103edbda8();
      uVar8 = 0;
      FUN_103eddc90(0);
      _objc_allocWithZone();
      lVar9 = param_1;
      FUN_103edd5d4(param_1,lVar6,0,0xe000000000000000,uVar8);
      lVar6 = lRam000000011302c7d8;
      _objc_retain();
      if (lVar6 != -1) {
        _swift_once(0x11302c7d8,FUN_103edb118);
      }
      uVar3 = uRam00000001138122e8;
      uVar8 = uRam00000001138122e0;
      puVar1 = (undefined8 *)(lVar9 + _DAT_11302c858);
      _swift_beginAccess(puVar1,auStack_88,1,0);
      *puVar1 = uVar8;
      puVar1[1] = uVar3;
      _objc_release(lVar9);
      puVar10 = PTR_PTR_1126b3800;
      _objc_allocWithZone();
      func_0x00010006c00c(lVar7,uVar17);
      lVar6 = lVar7;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(lVar7,uVar17);
      func_0x000107c45ae0();
      _objc_release(lVar6);
      func_0x00010006c090(lVar7,uVar17);
      puVar11 = PTR_PTR_1126adac8;
      _objc_allocWithZone();
      func_0x000107c47930();
      puVar12 = PTR_PTR_1126adad0;
      _objc_allocWithZone(PTR_PTR_1126adad0);
      func_0x000107c453e4();
      puVar16 = &UNK_11071e6a8;
      _swift_allocObject(&UNK_11071e6a8,0x18,7);
      _swift_unknownObjectWeakInit(puVar16 + 0x10,lVar9);
      uStack_98 = 0x103edd064;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_1016b32e4;
      puStack_a0 = &UNK_11071e6e8;
      ppuVar13 = &puStack_b8;
      puStack_90 = puVar16;
      __Block_copy(ppuVar13);
      puVar16 = puStack_90;
      _objc_retain();
      _swift_release(puVar16);
      func_0x000107c579b8(puVar12);
      __Block_release(ppuVar13);
      uVar8 = *(undefined8 *)(lVar9 + _DAT_11302c808);
      func_0x000107c5cb24(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107c59a98(puVar12);
      _objc_release(uVar8);
      lVar6 = param_1;
      func_0x000107c4ce20();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 == 0) {
        __Block_release(param_3);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103edc4fc);
        (*pcVar4)();
      }
      lVar14 = lVar6;
      func_0x000107c453bc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      if (lVar14 == 0) {
        __Block_release(param_3);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103edc508);
        (*pcVar4)();
      }
      lVar6 = lVar14;
      func_0x000107c42dd8();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar14);
      if (lVar6 != 0) {
        lVar14 = lVar6;
        func_0x000107c3ee88(lVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
        func_0x000107c53d68(puVar12);
        _objc_release(lVar14);
        puVar16 = &UNK_11071e6a8;
        _swift_allocObject(&UNK_11071e6a8,0x18,7);
        _swift_unknownObjectWeakInit(puVar16 + 0x10,lVar9);
        _objc_release(lVar9);
        puVar2 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x103edd068;
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0x42000000;
        puStack_a8 = &UNK_100f70bd8;
        puStack_a0 = &UNK_11071e710;
        ppuVar13 = &puStack_b8;
        puStack_90 = puVar16;
        __Block_copy(ppuVar13);
        _swift_release(puStack_90);
        func_0x000107c56cc4(puVar12);
        __Block_release(ppuVar13);
        puVar15 = PTR_PTR_1126adad8;
        _objc_allocWithZone();
        func_0x000107c49520();
        puVar16 = &UNK_11071e748;
        _swift_allocObject(&UNK_11071e748,0x30,7);
        *(long *)(puVar16 + 0x10) = lVar9;
        *(undefined **)(puVar16 + 0x18) = puVar15;
        *(code **)(puVar16 + 0x20) = FUN_103edca9c;
        *(undefined **)(puVar16 + 0x28) = puVar5;
        uStack_98 = 0x103edd03c;
        puStack_b8 = puVar2;
        uStack_b0 = 0x42000000;
        puStack_a8 = &UNK_1000f6b44;
        puStack_a0 = &UNK_11071e760;
        ppuVar13 = &puStack_b8;
        puStack_90 = puVar16;
        __Block_copy(ppuVar13);
        puVar16 = puStack_90;
        _objc_retain(lVar9);
        _objc_retain(puVar15);
        _swift_retain(puVar5);
        _swift_release(puVar16);
        func_0x000107c5e078(puVar15);
        __Block_release(ppuVar13);
        _objc_release(lVar9);
        _objc_release(puVar10);
        _objc_release(puVar11);
        _objc_release(puVar12);
        _objc_release(puVar15);
        func_0x00010006c090(lVar7,uVar17);
        _swift_release(puVar5);
        _objc_release(param_1);
        _swift_unknownObjectRelease(param_2);
        return;
      }
      __Block_release(param_3);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103edc514);
      (*pcVar4)();
    }
    _objc_release(param_1);
    _swift_unknownObjectRelease(param_2);
  }
  puVar16 = PTR_PTR_1126af5d0;
  _objc_opt_self(PTR_PTR_1126af5d0);
  func_0x000107c42d78();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_3 + 0x10))(param_3,puVar16);
  _swift_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar16);
  return;
}



/* Entry: 103edca7c; end: 103edca9b;  */

void FUN_103edca7c(void)

{
  _objc_opt_self(&PTR_PTR_112961e50);
  return;
}



/* Entry: 103edca9c; end: 103edcabb;  */

void FUN_103edca9c(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103edcaa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 103edcabc; end: 103edcb2b;  */

void FUN_103edcabc(void)

{
  FUN_103edb694();
  return;
}



/* Entry: 103edcb2c; end: 103edcb8b;  */

void FUN_103edcb2c(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x22;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar1 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_103edcb8c;
  plVar1[9] = lVar3;
  plVar1[10] = lVar4;
  plVar1[8] = lVar2;
  lVar3 = 0;
  __sScMMa();
  lVar2 = lVar3;
  __sScM6sharedScMvgZ();
  plVar1[0xb] = lVar2;
  func_0x000100eea164();
  __sScA15unownedExecutorScevgTj(lVar3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103edba84,lVar3,lVar2);
  return;
}



/* Entry: 103edcb8c; end: 103edcbcf;  */

void FUN_103edcb8c(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103edcbcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 103edcbd0; end: 103edcc3f;  */

void FUN_103edcbd0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x103edd078;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 103edcc40; end: 103edcc9f;  */

void FUN_103edcc40(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x103edd06c;
  plVar3[9] = lVar1;
  plVar3[10] = lVar4;
  plVar3[8] = lVar2;
  lVar1 = 0;
  __sScMMa();
  lVar2 = lVar1;
  __sScM6sharedScMvgZ();
  plVar3[0xb] = lVar2;
  func_0x000100eea164();
  __sScA15unownedExecutorScevgTj(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103edb830,lVar1,lVar2);
  return;
}



/* Entry: 103edcca0; end: 103edcd0f;  */

void FUN_103edcca0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x103edd07c;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 103edcd10; end: 103edcd43;  */

void FUN_103edcd10(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103edcd44; end: 103edcda7;  */

void FUN_103edcd44(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103edcda8;
  plVar5[4] = lVar3;
  plVar5[5] = lVar2;
  plVar5[2] = lVar4;
  plVar5[3] = lVar1;
  lVar3 = 0;
  __sScMMa();
  lVar4 = lVar3;
  __sScM6sharedScMvgZ();
  plVar5[6] = lVar4;
  func_0x000100eea164();
  __sScA15unownedExecutorScevgTj(lVar3,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103edb3a8,lVar3,lVar4);
  return;
}



/* Entry: 103edcda8; end: 103edcde3;  */

void FUN_103edcda8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103edcde0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103edcde4; end: 103edce53;  */

void FUN_103edcde4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x103edd080;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 103edce54; end: 103edceb3;  */

void FUN_103edce54(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x22;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar1 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x103edd070;
  plVar1[9] = lVar3;
  plVar1[10] = lVar4;
  plVar1[8] = lVar2;
  lVar3 = 0;
  __sScMMa();
  lVar2 = lVar3;
  __sScM6sharedScMvgZ();
  plVar1[0xb] = lVar2;
  func_0x000100eea164();
  __sScA15unownedExecutorScevgTj(lVar3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x103edd060,lVar3,lVar2);
  return;
}



/* Entry: 103edceb4; end: 103edcf23;  */

void FUN_103edceb4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x103edd084;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 103edcf24; end: 103edcf4f;  */

void FUN_103edcf24(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103edcf50; end: 103edcfaf;  */

void FUN_103edcf50(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x103edd074;
  plVar3[9] = lVar1;
  plVar3[10] = lVar4;
  plVar3[8] = lVar2;
  lVar1 = 0;
  __sScMMa();
  lVar2 = lVar1;
  __sScM6sharedScMvgZ();
  plVar3[0xb] = lVar2;
  func_0x000100eea164();
  __sScA15unownedExecutorScevgTj(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x103edd05c,lVar1,lVar2);
  return;
}



/* Entry: 103edcfb0; end: 103edd01f;  */

void FUN_103edcfb0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x103edd088;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 103edd020; end: 103edd08b;  */

void FUN_103edd020(long param_1,long param_2)

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



/* Entry: 103edd08c; end: 103edd0e3;  */

void FUN_103edd08c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_allocWithZone();
  FUN_103edd5d4(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 103edd0e4; end: 103edd1f7; -[_TtC16SCFanPassSticker18FanPassStickerView text] */

void FUN_103edd0e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103edd13c();
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,param_2);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103edd1f8; end: 103edd253; -[_TtC16SCFanPassSticker18FanPassStickerView setText:] */

void FUN_103edd1f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _objc_retain(param_1);
  FUN_103edd254(param_3,param_2);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103edd254; end: 103edd37f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103edd254(ulong param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar4 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar4 = param_2 >> 0x38 & 0xf;
  }
  if (uVar4 == 0) {
    param_1 = *(ulong *)(unaff_x20 + _DAT_11302c810);
    param_2 = ((ulong *)(unaff_x20 + _DAT_11302c810))[1];
  }
  _swift_bridgeObjectRetain(param_2);
  lVar2 = *(long *)(unaff_x20 + _DAT_11302c868);
  if (lVar2 != 0) {
    func_0x000107c4ce20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103edd378);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c453bc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103edd37c);
      (*pcVar1)();
    }
    lVar2 = lVar3;
    func_0x000107c42dd8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103edd380);
      (*pcVar1)();
    }
    uVar4 = param_1;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
    func_0x000107c59a94(lVar2);
    _objc_release(lVar2);
    _objc_release(uVar4);
  }
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11302c808);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  func_0x000107c4d664(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103edd380; end: 103edd39b; -[_TtC16SCFanPassSticker18FanPassStickerView textInputDidChangeBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103edd380(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_11302c820);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_100c75f50;
    puStack_60 = &UNK_11071ea30;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    __Block_copy(ppuVar3);
    lVar2 = lStack_50;
    _swift_retain(lVar4);
    _swift_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 103edd39c; end: 103edd457; -[_TtC16SCFanPassSticker18FanPassStickerView setTextInputDidChangeBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103edd39c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_58 [24];
  
  __Block_copy();
  if (param_3 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_11071ea18;
    _swift_allocObject(&UNK_11071ea18,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    pcVar5 = FUN_103eddd1c;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_11302c820);
  _swift_beginAccess(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = pcVar5;
  puVar1[1] = puVar4;
  _objc_retain(param_1);
  func_0x000100d71ad4(uVar2,uVar3);
  _objc_release(param_1);
  return;
}



/* Entry: 103edd458; end: 103edd473; -[_TtC16SCFanPassSticker18FanPassStickerView textInputDidReturnBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103edd458(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_11302c828);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_11071e9e0;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    __Block_copy(ppuVar3);
    lVar2 = lStack_50;
    _swift_retain(lVar4);
    _swift_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 103edd474; end: 103edd517;  */

void FUN_103edd474(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + *param_3);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    ppuVar3 = &puStack_78;
    uStack_68 = param_4;
    uStack_60 = param_5;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    __Block_copy(ppuVar3);
    lVar2 = lStack_50;
    _swift_retain(lVar4);
    _swift_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 103edd518; end: 103edd5d3; -[_TtC16SCFanPassSticker18FanPassStickerView setTextInputDidReturnBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103edd518(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_58 [24];
  
  __Block_copy();
  if (param_3 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_11071e9c8;
    _swift_allocObject(&UNK_11071e9c8,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    pcVar5 = FUN_103eddcf4;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_11302c828);
  _swift_beginAccess(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = pcVar5;
  puVar1[1] = puVar4;
  _objc_retain(param_1);
  func_0x000100d71ad4(uVar2,uVar3);
  _objc_release(param_1);
  return;
}



/* Entry: 103edd5d4; end: 103edd70f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103edd5d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302c818);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302c820);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302c828);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar3 = param_1;
  func_0x000107c4ce20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103edd704);
    (*pcVar2)();
  }
  lVar4 = lVar3;
  func_0x000107c453bc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103edd708);
    (*pcVar2)();
  }
  lVar3 = lVar4;
  func_0x000107c42dd8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103edd70c);
    (*pcVar2)();
  }
  lVar4 = lVar3;
  func_0x000107c5c394();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    puVar5 = PTR_PTR_1126ae820;
    _objc_allocWithZone();
    func_0x000107c49470();
    *(undefined **)(unaff_x20 + _DAT_11302c808) = puVar5;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302c810);
    *puVar1 = param_3;
    puVar1[1] = param_4;
    func_0x000103ede3d8(param_1,param_2);
    _objc_release(lVar4);
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103edd710);
  (*pcVar2)();
}



/* Entry: 103edd710; end: 103edd767;  */

void FUN_103edd710(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
             "SCFanPassSticker/FanPassStickerView.swift",0x29,2,0x3b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103edd768);
  (*pcVar1)();
}



/* Entry: 103edd768; end: 103edd847;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103edd768(void)

{
  double *pdVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  double dVar4;
  double dVar5;
  undefined1 auStack_58 [24];
  
  pdVar1 = (double *)(unaff_x20 + _DAT_11302c858);
  _swift_beginAccess(pdVar1,auStack_58,0,0);
  dVar5 = *pdVar1;
  dVar4 = pdVar1[1];
  puVar2 = PTR_PTR_1126d91a8;
  _objc_allocWithZone();
  func_0x000107c461f0(0x3fe0000000000000,(dVar5 + -32.0) / dVar5,44.0 / dVar4,0x3fe0000000000000,
                      (dVar4 + -16.0 + -22.0) / dVar4);
  puVar3 = puVar2;
  func_0x0001016b4864();
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x18) = 3;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  *(undefined **)(puVar3 + 0x20) = puVar2;
  return;
}



/* Entry: 103edd848; end: 103edd8a7; -[_TtC16SCFanPassSticker18FanPassStickerView tappableElementBounds] */

void FUN_103edd848(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain();
  lVar1 = param_1;
  FUN_103edd768();
  _objc_release(param_1);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = 0;
    func_0x000103eddcb0(0);
    lVar3 = lVar1;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar1,uVar2);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 103edd8a8; end: 103edd8af; -[_TtC16SCFanPassSticker18FanPassStickerView shouldReceiveTapsViaStickerContainer] */

undefined8 FUN_103edd8a8(void)

{
  return 0;
}



/* Entry: 103edd8b0; end: 103edd9bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103edd8b0(long param_1)

{
  ulong *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 unaff_x20;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_58 [24];
  
  _swift_getObjectType();
  lVar2 = param_1;
  _swift_dynamicCastClass(param_1,unaff_x20);
  if (lVar2 != 0) {
    puVar1 = (ulong *)(lVar2 + _DAT_11302c818);
    puVar3 = auStack_58;
    _swift_beginAccess(puVar1,puVar3,0,0);
    puVar4 = (undefined1 *)puVar1[1];
    if (puVar4 == (undefined1 *)0x0) {
      uVar5 = *(ulong *)(lVar2 + _DAT_11302c808);
      _objc_retain(param_1);
      func_0x000107c5dc0c(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(uVar5);
    }
    else {
      uVar6 = *puVar1;
      uVar5 = uVar6 & 0xffffffffffff;
      if (((ulong)puVar4 & 0x2000000000000000) != 0) {
        uVar5 = (ulong)puVar4 >> 0x38 & 0xf;
      }
      if (uVar5 == 0) {
        uVar6 = *(ulong *)(lVar2 + _DAT_11302c810);
        puVar4 = (undefined1 *)((ulong *)(lVar2 + _DAT_11302c810))[1];
      }
      _objc_retain(param_1);
      _swift_bridgeObjectRetain(puVar4);
      puVar3 = puVar4;
    }
    FUN_103edd254(uVar6,puVar3);
    _objc_release(param_1);
    _swift_bridgeObjectRelease(puVar3);
  }
  return;
}



/* Entry: 103edd9bc; end: 103edda0b; -[_TtC16SCFanPassSticker18FanPassStickerView updateWithInfoFromStickerView:] */

void FUN_103edd9bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103edd8b0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103edda0c; end: 103edda13; -[_TtC16SCFanPassSticker18FanPassStickerView infoType] */

undefined8 FUN_103edda0c(void)

{
  return 0x15;
}


