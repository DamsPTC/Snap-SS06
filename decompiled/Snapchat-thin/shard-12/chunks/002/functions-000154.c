/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ebb5c0; end: 108ebb5c7; -[SCCameraRollStickerView scaleLimit] */

undefined8 FUN_108ebb5c0(void)

{
  return 0;
}



/* Entry: 108ebb5c8; end: 108ebb67f; -[SCCameraRollStickerView cycleStickerToNextStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ebb5c8(double param_1,double param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277d318;
  lVar1 = *(long *)(param_3 + lVar3);
  func_0x00010c22a600();
  uVar2 = 1;
  if (lVar1 < 4) {
    if (lVar1 == 1) {
      uVar2 = 2;
    }
    else if (lVar1 == 2) {
      uVar2 = 3;
    }
    else if (lVar1 == 3) {
      uVar2 = *(undefined8 *)(param_3 + lVar3);
      func_0x00010bfe6ac0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      _objc_release(uVar2);
      uVar2 = 4;
      if (param_1 <= param_2) {
        uVar2 = 5;
      }
    }
  }
  else if (lVar1 - 4U < 2) {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bedfcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__updateShapeTo__1125958e0,uVar2);
  return;
}



/* Entry: 108ebb680; end: 108ebb717; -[SCCameraRollStickerView imageView] */

void FUN_108ebb680(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010bfe7ca0(puVar2,param_2,param_1,0,1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c01bf60();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ebb718; end: 108ebb71b; -[SCCameraRollStickerView didEndDisplay] */

void FUN_108ebb718(void)

{
  return;
}



/* Entry: 108ebb71c; end: 108ebb71f; -[SCCameraRollStickerView willDisplay] */

void FUN_108ebb71c(void)

{
  return;
}



/* Entry: 108ebb720; end: 108ebb8e3; -[SCCameraRollStickerView _updateShapeTo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ebb720(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  lVar6 = (long)_DAT_11277d318;
  uVar1 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010bfe6ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ba978;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010bfe9020(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01c180(puVar2,param_6,uVar1,uVar3,param_7);
  uVar5 = *(undefined8 *)(param_5 + lVar6);
  *(undefined **)(param_5 + lVar6) = puVar2;
  _objc_release(uVar5);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126dc5e0;
  func_0x00010c23d0a0(uVar1);
  func_0x00010c23d340(puVar2,param_6,param_7);
  func_0x000107c308a4();
  dVar7 = param_1;
  uVar3 = param_2;
  func_0x00010bf345e0(param_5);
  func_0x00010c1739e0(param_1,param_2,param_3,param_4,param_5);
  func_0x00010c17a6a0(dVar7,uVar3,param_5);
  if (param_7 == 2) {
    dVar8 = 0.0;
  }
  else {
    dVar8 = 8.0;
    if (param_7 == 1) {
      func_0x00010c23d320(PTR_PTR_1126dc5e0,param_6,1);
      dVar8 = dVar7 * 0.5;
    }
  }
  lVar4 = param_5;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar8);
  _objc_release(lVar4);
  uVar3 = *(undefined8 *)(param_5 + lVar6);
  FUN_108eb9100();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_5 + _DAT_11277d31c);
  *(undefined8 *)(param_5 + _DAT_11277d31c) = uVar3;
  _objc_release(uVar5);
  func_0x00010c0cc2a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c111e60();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ebb8e4; end: 108ebb8f3; -[SCCameraRollStickerView loadedFromCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108ebb8e4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277d314);
}



/* Entry: 108ebb8f4; end: 108ebb903; -[SCCameraRollStickerView setLoadedFromCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ebb8f4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277d314) = param_3;
  return;
}



/* Entry: 108ebb904; end: 108ebb913; -[SCCameraRollStickerView item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ebb904(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d320);
}



/* Entry: 108ebb914; end: 108ebb923; -[SCCameraRollStickerView itemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ebb914(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d31c);
}



/* Entry: 108ebb924; end: 108ebb933; -[SCCameraRollStickerView entity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ebb924(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d318);
}



/* Entry: 108ebb934; end: 108ebb983; -[SCCameraRollStickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ebb934(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277d318,0);
  _objc_storeStrong(param_1 + _DAT_11277d31c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277d320,0);
  return;
}



/* Entry: 108ebb984; end: 108ebb98f;  */

undefined ** FUN_108ebb984(void)

{
  return &PTR__OBJC_CLASS___NSConstantDictionary_1111750f8;
}



/* Entry: 108ebb990; end: 108ebba07;  */

void FUN_108ebb990(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dae518);
  return;
}



/* Entry: 108ebba08; end: 108ebba3b; -[SCInjectedInfoSticker initWithCoder:] */

void FUN_108ebba08(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ff0a0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 108ebba3c; end: 108ebba3f; -[SCInjectedInfoSticker encodeWithCoder:] */

void FUN_108ebba3c(void)

{
  return;
}



/* Entry: 108ebba40; end: 108ebba63; -[SCInjectedInfoSticker copyWithZone:] */

undefined8 FUN_108ebba40(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ebba64; end: 108ebba6b; -[SCInjectedInfoSticker isEqual:] */

undefined8 FUN_108ebba64(void)

{
  return 0;
}



/* Entry: 108ebba6c; end: 108ebba73; -[SCInjectedInfoSticker hash] */

undefined8 FUN_108ebba6c(void)

{
  return 0;
}



/* Entry: 108ebba74; end: 108ebba7b; -[SCInjectedInfoSticker type] */

undefined8 FUN_108ebba74(void)

{
  return 6;
}



/* Entry: 108ebba7c; end: 108ebbaab; -[SCInjectedInfoSticker packId] */

void FUN_108ebba7c(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110efe418);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110efe418);
  return;
}



/* Entry: 108ebbaac; end: 108ebbab3; -[SCInjectedInfoSticker stickerId] */

undefined8 FUN_108ebbaac(void)

{
  return 0;
}



/* Entry: 108ebbab4; end: 108ebbab7; -[SCInjectedInfoSticker loggingParameters] */

undefined ** FUN_108ebbab4(void)

{
  return &PTR__OBJC_CLASS___NSConstantDictionary_1111750f8;
}



/* Entry: 108ebbab8; end: 108ebbabf; -[SCInjectedInfoSticker shortLoggingName] */

undefined8 FUN_108ebbab8(void)

{
  return 0;
}



/* Entry: 108ebbac0; end: 108ebbac7; -[SCInjectedInfoSticker toCTPItem] */

undefined8 FUN_108ebbac0(void)

{
  return 0;
}



/* Entry: 108ebbac8; end: 108ebbacf; -[SCInjectedInfoSticker toCTItemInstance] */

undefined8 FUN_108ebbac8(void)

{
  return 0;
}



/* Entry: 108ebbad0; end: 108ebbad7; -[SCInjectedInfoSticker infoType] */

undefined8 FUN_108ebbad0(void)

{
  return 0x19;
}



/* Entry: 108ebbad8; end: 108ebbae7; -[SCInjectedInfoSticker intrinsicSize] */

undefined1  [16] FUN_108ebbad8(void)

{
  return *(undefined1 (*) [16])PTR__CGSizeZero_110347620;
}



/* Entry: 108ebbae8; end: 108ebbb8f; -[SCMemoriesPhotoLibraryFetcher initDynamicMultiFetcherWithPhotoPermissionCoordinator:coreConfigProvider:changeHandler:grapheneRegistry:applicationLifecycleEvents:fetchLimit:] */

long FUN_108ebbae8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  func_0x00010c035d40(param_1,param_2,param_3,param_4,param_6,param_7,param_8);
  if ((param_1 != 0) && (*(undefined8 *)(param_1 + 0x48) = 1, param_5 != 0)) {
    lVar1 = param_5;
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar1;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  return param_1;
}



/* Entry: 108ebbb90; end: 108ebbecb; -[SCMemoriesPhotoLibraryFetcher initWithPhotoPermissionCoordinator:coreConfigProvider:grapheneRegistry:applicationLifecycleEvents:fetchLimit:] */

undefined8 *
FUN_108ebbb90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_78 = PTR_PTR_1126ff0a8;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_5;
    _objc_release(uVar2);
    puVar1[9] = 0;
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    uVar4 = puVar1[0xe];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf1f440();
    _objc_release(uVar4);
    if ((int)uVar2 == 0) {
      puVar3 = PTR_PTR_1126ae790;
      _objc_alloc();
      func_0x00010c021520();
    }
    else {
      if (lRam000000011372eb20 != -1) {
        func_0x000107c27d9c(0x11372eb20,&PTR___NSConcreteGlobalBlock_110ac9bb8);
      }
      puVar3 = puRam000000011372eb18;
      _objc_retain(puRam000000011372eb18);
    }
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_88,puVar1);
    uVar2 = param_6;
    func_0x00010c2522c0(param_6);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_108ebbecc;
    puStack_98 = &UNK_110857468;
    _objc_copyWeak(auStack_90,auStack_88);
    uVar4 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010bf75dc0(param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b8,auStack_88);
    uVar4 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108ebbecc; end: 108ebbf23;  */

void FUN_108ebbecc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec23e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ebbf24; end: 108ebbfc3; -[SCMemoriesPhotoLibraryFetcher dealloc] */

void FUN_108ebbf24(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x50));
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0xa8));
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0xa2) = 0;
  if (*(char *)(param_1 + 0x31) == '\x01') {
    puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010c22be00(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c281fa0();
    _objc_release(puVar2);
  }
  puStack_28 = PTR_PTR_1126ff0a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108ebbfc4; end: 108ebc16b; -[SCMemoriesPhotoLibraryFetcher _parseFetchParams:] */

void FUN_108ebbfc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c124e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  _objc_release(uVar2);
  uVar3 = param_3;
  func_0x00010c0e1400();
  *(char *)(param_1 + 0x30) = (char)uVar3;
  uVar3 = param_3;
  func_0x00010bfa8040();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c067ec0();
  _objc_release(uVar3);
  if ((int)uVar2 != 0) {
    lStack_38 = (long)(int)uVar2;
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc0000000;
    pcStack_48 = FUN_108ebc16c;
    puStack_40 = &UNK_110969c00;
    puVar1 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar1;
    _objc_release(uVar3);
  }
  uVar3 = param_3;
  func_0x00010c106400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  _objc_release(uVar2);
  uVar3 = param_3;
  func_0x00010bf0b000();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  _objc_release(uVar2);
  uVar3 = param_3;
  func_0x00010bf5a720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  _objc_release(uVar2);
  uVar3 = param_3;
  func_0x00010c0c6c20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c071ae0();
  *(char *)(param_1 + 0xa0) = (char)uVar2;
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c0c6c20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c071ae0();
  *(char *)(param_1 + 0xa1) = (char)uVar2;
  _objc_release(uVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 108ebc16c; end: 108ebc17f;  */

void FUN_108ebc16c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithUnsignedInteger__112615828,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108ebc180; end: 108ebc243; -[SCMemoriesPhotoLibraryFetcher fetchWithSingleResultType:fetchParams:resultHandler:] */

void FUN_108ebc180(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108ebc244;
  puStack_68 = &UNK_110845188;
  lStack_60 = param_1;
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_48 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f88c0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_58);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_5);
  return;
}



/* Entry: 108ebc244; end: 108ebc2ab;  */

void FUN_108ebc244(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x32) & 1) != 0) {
    return;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x32) = 1;
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = uVar1;
  _objc_release(uVar2);
  func_0x00010be701a0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdde010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__checkPermissionStatusAndFetchAs_1125551a0);
  return;
}



/* Entry: 108ebc2ac; end: 108ebc36f; -[SCMemoriesPhotoLibraryFetcher fetchWithMultipleResultsType:fetchParams:resultHandler:] */

void FUN_108ebc2ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108ebc370;
  puStack_68 = &UNK_110845188;
  lStack_60 = param_1;
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_48 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f88c0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_58);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_5);
  return;
}



/* Entry: 108ebc370; end: 108ebc3d7;  */

void FUN_108ebc370(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x32) & 1) != 0) {
    return;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x32) = 1;
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20) = uVar1;
  _objc_release(uVar2);
  func_0x00010be701a0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdde010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__checkPermissionStatusAndFetchAs_1125551a0);
  return;
}



/* Entry: 108ebc3d8; end: 108ebc3e3; -[SCMemoriesPhotoLibraryFetcher fetchWithAssetCollection:observesChange:resultHandler:] */

void FUN_108ebc3d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfab690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_fetchWithAssetCollection_observe_1125c8748,param_3,param_4,0,param_5);
  return;
}



/* Entry: 108ebc3e4; end: 108ebc513; -[SCMemoriesPhotoLibraryFetcher fetchWithAssetCollection:observesChange:allowPreviousFetchResult:resultHandler:] */

void FUN_108ebc3e4(long param_1,undefined8 param_2,long param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0();
    if (puVar1 == (undefined *)0x3) {
      _objc_initWeak(auStack_48,param_1);
      uVar2 = *(undefined8 *)(param_1 + 8);
      _objc_copyWeak(auStack_58,auStack_48);
      uStack_50 = param_5;
      _objc_retain(param_3);
      _objc_retain(param_6);
      uStack_4f = param_4;
      func_0x00010c0f88c0(uVar2);
      _objc_release(param_6);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_58);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 108ebc514; end: 108ebc60b;  */

void FUN_108ebc514(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 == 0) goto LAB_108ebc5f8;
  if (*(char *)(param_1 + 0x38) == '\x01') {
    uVar3 = *(undefined8 *)(lVar2 + 0x60);
    func_0x00010c071ae0(uVar3,param_2,*(undefined8 *)(param_1 + 0x20));
    if ((int)uVar3 == 0) goto LAB_108ebc568;
    lVar4 = *(long *)(lVar2 + 0x58);
    func_0x00010bf529e0();
    bVar1 = lVar4 != 0;
  }
  else {
LAB_108ebc568:
    bVar1 = false;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  *(undefined8 *)(lVar2 + 0x60) = uVar5;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retainBlock();
  uVar5 = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x18) = uVar3;
  _objc_release(uVar5);
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined1 *)(lVar2 + 0x30) = *(undefined1 *)(param_1 + 0x39);
  if ((*(byte *)(lVar2 + 0x33) & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x33) = 1;
    func_0x00010be89c40(lVar2);
  }
  if (!bVar1) {
    func_0x00010be13080(lVar2);
  }
  lVar4 = lVar2;
  func_0x00010be1f0c0(lVar2,param_2,*(undefined8 *)(lVar2 + 0x58));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be65300(lVar2,param_2,lVar4);
  _objc_release(lVar4);
LAB_108ebc5f8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108ebc60c; end: 108ebc743; -[SCMemoriesPhotoLibraryFetcher fetchOnceWithResultType:fetchParams:resultHandler:] */

void FUN_108ebc60c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fa0();
  if (puVar1 == (undefined *)0x3) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_5);
    uStack_50 = param_3;
    _objc_retain(param_4);
    func_0x00010c0f88c0(uVar2);
    _objc_release(param_4);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  else {
    (**(code **)(param_5 + 0x10))(param_5,0);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108ebc744; end: 108ebc8df;  */

void FUN_108ebc744(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_a8 [8];
  long lStack_a0;
  undefined1 auStack_98 [8];
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar1 == 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,0);
  }
  else {
    _objc_retainBlock();
    uVar7 = *(undefined8 *)(lVar1 + 0x18);
    *(long *)(lVar1 + 0x18) = lVar2;
    _objc_release(uVar7);
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + 0x38);
    func_0x00010be701a0(lVar1);
    puVar3 = *(undefined **)(lVar1 + 0x98);
    func_0x00010c0d3c80();
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
    }
    if (*(long *)(lVar1 + 0x10) == 0x1c) {
      uVar7 = *(undefined8 *)(lVar1 + 0x88);
      FUN_108ebecc4(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar3);
      _objc_release(uVar7);
    }
    param_5 = (ulong)*(byte *)(lVar1 + 0xa0);
    lVar2 = lVar1;
    func_0x00010be0fa40();
    _objc_retainAutoreleasedReturnValue();
    param_4 = 1;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010be1f0c0();
    _objc_retainAutoreleasedReturnValue();
    param_3 = lVar5;
    func_0x00010be65300(lVar1);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release(lVar2);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fa0();
  if (puVar3 == (undefined *)0x3) {
    _objc_initWeak(auStack_98,lVar1);
    uVar7 = *(undefined8 *)(lVar1 + 8);
    _objc_copyWeak(auStack_a8,auStack_98);
    _objc_retain(param_5);
    lStack_a0 = param_3;
    _objc_retain(param_4);
    func_0x00010c0f88c0(uVar7);
    _objc_release(param_4);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_98);
  }
  else {
    (**(code **)(param_5 + 0x10))(param_5,0);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108ebc8e0; end: 108ebca17; -[SCMemoriesPhotoLibraryFetcher dynamicFetchWithResultsType:fetchParams:resultHandler:] */

void FUN_108ebc8e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fa0();
  if (puVar1 == (undefined *)0x3) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_5);
    uStack_50 = param_3;
    _objc_retain(param_4);
    func_0x00010c0f88c0(uVar2);
    _objc_release(param_4);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  else {
    (**(code **)(param_5 + 0x10))(param_5,0);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108ebca18; end: 108ebcbef;  */

void FUN_108ebca18(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *unaff_x20;
  long unaff_x22;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  long lStack_80;
  long lStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
  }
  else {
    if (*(long *)(lVar1 + 0x28) != 0) {
      func_0x00010be89c40(lVar1);
    }
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + 0x38);
    func_0x00010be701a0(lVar1);
    unaff_x20 = *(undefined **)(lVar1 + 0x98);
    func_0x00010c0d3c80();
    if (unaff_x20 == (undefined *)0x0) {
      unaff_x20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
    }
    if (*(long *)(lVar1 + 0x10) == 0x1c) {
      uVar2 = *(undefined8 *)(lVar1 + 0x88);
      FUN_108ebecc4(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(unaff_x20);
      _objc_release(uVar2);
    }
    param_3 = *(undefined **)(lVar1 + 0x60);
    unaff_x22 = lVar1;
    if (param_3 == (undefined *)0x0) {
      param_3 = unaff_x20;
      func_0x00010be13060();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010be0fa40();
      _objc_retainAutoreleasedReturnValue();
    }
    param_1 = *(long *)(param_1 + 0x28);
    if (unaff_x22 == 0) {
      (**(code **)(param_1 + 0x10))(param_1,0);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_50 = unaff_x22;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      param_3 = puVar3;
      func_0x00010be1f0c0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_1 + 0x10))(param_1,lVar4);
      _objc_release(lVar4);
      _objc_release(puVar3);
    }
    _objc_release(unaff_x22);
    _objc_release(unaff_x20);
  }
  lVar4 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_108ebcbf0;
  lStack_80 = unaff_x22;
  lStack_78 = param_1;
  puStack_70 = unaff_x20;
  lStack_68 = lVar1;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_88,lVar4);
  uVar2 = *(undefined8 *)(lVar4 + 8);
  _objc_copyWeak(auStack_90,auStack_88);
  _objc_retain(param_3);
  func_0x00010c0f88c0(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(param_3);
  return;
}



/* Entry: 108ebcbf0; end: 108ebccc7; -[SCMemoriesPhotoLibraryFetcher photoLibraryDidChange:] */

void FUN_108ebcbf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f88c0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108ebccc8; end: 108ebcd7b;  */

void FUN_108ebccc8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0xb0) == 0) {
      *(undefined1 *)(lVar1 + 0xa2) = 0;
      func_0x00010be80940(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    }
    else {
      *(undefined1 *)(lVar1 + 0xa2) = 1;
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar4);
      uVar2 = *(undefined8 *)(lVar1 + 0xb0);
      *(undefined8 *)(lVar1 + 0xb0) = uVar4;
      _objc_release(uVar2);
      func_0x00010c069d00(*(undefined8 *)(lVar1 + 0xa8));
      puVar3 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
      func_0x00010c1503c0(0x3fd3333333333333,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,lVar1,
                          PTR_s__processDebouncedChange_11253df50,0,0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(lVar1 + 0xa8);
      *(undefined **)(lVar1 + 0xa8) = puVar3;
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108ebcd7c; end: 108ebcee3; -[SCMemoriesPhotoLibraryFetcher _processChangeImmediately:] */

void FUN_108ebcd7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x48) == 1) {
    if (*(char *)(param_1 + 0x34) != '\x01') {
      lVar1 = *(long *)(param_1 + 0x28);
      if (lVar1 != 0) {
        (**(code **)(lVar1 + 0x10))(lVar1,param_3,0);
      }
      goto LAB_108ebcecc;
    }
LAB_108ebcdf8:
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = param_3;
  }
  else {
    lVar1 = param_1;
    func_0x00010be38bc0();
    if (lVar1 == 0x7fffffffffffffff) goto LAB_108ebcecc;
    if (*(char *)(param_1 + 0x34) == '\x01') goto LAB_108ebcdf8;
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c0dfd40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf34e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfa9d60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c0d3c80();
    func_0x00010c130f40();
    uVar3 = uVar5;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = uVar3;
    _objc_release(uVar6);
    lVar1 = param_1;
    func_0x00010be1f0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be65300(param_1);
    _objc_release(lVar1);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
LAB_108ebcecc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ebcee4; end: 108ebcf47; -[SCMemoriesPhotoLibraryFetcher _processDebouncedChange] */

void FUN_108ebcee4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xb0);
  if (lVar2 != 0) {
    *(undefined8 *)(param_1 + 0xb0) = 0;
    _objc_retain(lVar2);
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + 0xa2) = 0;
    func_0x00010be80940(param_1,param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 108ebcf48; end: 108ebd13f; -[SCMemoriesPhotoLibraryFetcher _checkPermissionStatusAndFetchAssets] */

void FUN_108ebcf48(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fa0();
  if (puVar1 == (undefined *)0x0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_108ebd140;
    puStack_50 = &UNK_110842e18;
    lStack_48 = param_1;
    func_0x00010c0f88c0(*(undefined8 *)(param_1 + 8));
    if (*(char *)(param_1 + 0x30) == '\x01') {
      _objc_initWeak(auStack_70,param_1);
      func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x50));
      uVar2 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0fb4e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_78,auStack_70);
      uVar4 = uVar3;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x50) = uVar4;
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar2);
      func_0x00010bf1a3e0(*(undefined8 *)(param_1 + 0x50));
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_70);
    }
  }
  else {
    puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0();
    if ((puVar1 != (undefined *)0x2) &&
       (puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30, func_0x00010bf10fa0(),
       puVar1 != (undefined *)0x1)) {
      puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
      func_0x00010bf10fa0();
      if (puVar1 != (undefined *)0x3) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010beac9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupFetch_112588c18);
      return;
    }
    func_0x00010c0f88c0(*(undefined8 *)(param_1 + 8));
  }
  return;
}



/* Entry: 108ebd140; end: 108ebd14b;  */

void FUN_108ebd140(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be65310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__notifyWithFetchResults__112576e60,0);
  return;
}



/* Entry: 108ebd14c; end: 108ebd213;  */

void FUN_108ebd14c(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010c0f9d60();
    if ((lVar1 == 2) || (lVar1 = param_2, func_0x00010c0f9d60(), lVar1 == 1)) {
      func_0x00010c0f88c0(*(undefined8 *)(param_1 + 8));
    }
    else {
      lVar1 = param_2;
      func_0x00010c0f9d60();
      if (lVar1 == 3) {
        func_0x00010beac9c0(param_1);
      }
    }
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 108ebd214; end: 108ebd22b;  */

void FUN_108ebd214(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be65310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__notifyWithFetchResults__112576e60,0);
  return;
}



/* Entry: 108ebd22c; end: 108ebd283; -[SCMemoriesPhotoLibraryFetcher _setupFetch] */

void FUN_108ebd22c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108ebd284;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f88c0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 108ebd284; end: 108ebd307;  */

void FUN_108ebd284(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x33) & 1) == 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x33) = 1;
    func_0x00010be13080(*(undefined8 *)(param_1 + 0x20));
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = uVar2;
    func_0x00010be1f0c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be65300(uVar2);
    _objc_release(uVar1);
    if (*(char *)(*(long *)(param_1 + 0x20) + 0x30) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be89c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(long *)(param_1 + 0x20),PTR_s__registerPhotoLibraryChangeObser_1125800b0);
      return;
    }
  }
  return;
}



/* Entry: 108ebd308; end: 108ebd3b3; -[SCMemoriesPhotoLibraryFetcher _indexOfChangedFetchResult:] */

ulong FUN_108ebd308(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar4 = 0;
    do {
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c0dfd40(uVar2,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010bf34e60(param_3,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar2);
      if (lVar1 != 0) goto LAB_108ebd394;
      uVar4 = uVar4 + 1;
      uVar3 = *(ulong *)(param_1 + 0x58);
      func_0x00010bf529e0();
    } while (uVar4 < uVar3);
  }
  uVar4 = 0x7fffffffffffffff;
LAB_108ebd394:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 108ebd3b4; end: 108ebd76f; -[SCMemoriesPhotoLibraryFetcher _fetchPhotoAssets] */

void FUN_108ebd3b4(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _CACurrentMediaTime();
  puVar1 = *(undefined **)(param_2 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2827c0();
  _objc_release();
  puVar3 = param_2;
  switch(*(undefined8 *)(param_2 + 0x10)) {
  case 0:
  case 1:
  case 0x11:
    puVar2 = *(undefined **)(param_2 + 0x88);
    FUN_108ebecc4(puVar2);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_2 + 0x60) == 0) {
      func_0x00010be13060();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010be0fb80();
      _objc_retainAutoreleasedReturnValue();
    }
    if (puVar3 != (undefined *)0x0) {
code_r0x000108ebd630:
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      goto code_r0x000108ebd640;
    }
    puVar6 = *(undefined **)(param_2 + 0x58);
    *(undefined8 *)(param_2 + 0x58) = 0;
    goto code_r0x000108ebd718;
  case 2:
    FUN_108ebee20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    FUN_108ebef00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_2;
    func_0x00010be13060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (puVar6 == (undefined *)0x0) {
      puVar2 = (undefined *)0x0;
    }
    else {
code_r0x000108ebd6d8:
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar4 = *(undefined8 *)(param_2 + 0x58);
    *(undefined **)(param_2 + 0x58) = puVar2;
    puVar2 = puVar1;
    goto code_r0x000108ebd710;
  case 3:
    FUN_108ebef00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be13060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar1;
    if (puVar3 != (undefined *)0x0) goto code_r0x000108ebd630;
    puVar1 = (undefined *)0x0;
code_r0x000108ebd640:
    puVar6 = *(undefined **)(param_2 + 0x58);
    *(undefined **)(param_2 + 0x58) = puVar1;
    goto code_r0x000108ebd718;
  case 4:
    func_0x000108ebf264(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
    _objc_opt_new(PTR__OBJC_CLASS___PHFetchOptions_1126cb260);
    puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dfc80(puVar3);
    _objc_release(puVar1);
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    func_0x000108ebf324(uVar4,*(undefined8 *)(param_2 + 0x88));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206840(puVar3);
    _objc_release(uVar4);
    func_0x00010c19b420(puVar3);
    puVar6 = PTR__OBJC_CLASS___PHAsset_1126bd898;
    func_0x00010bfa50c0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    if (puVar6 != (undefined *)0x0) goto code_r0x000108ebd6d8;
    uVar4 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_2 + 0x58) = 0;
code_r0x000108ebd710:
    _objc_release(uVar4);
code_r0x000108ebd718:
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
    break;
  case 5:
  case 6:
  case 7:
  case 8:
  case 0xb:
  case 0xd:
  case 0x10:
    func_0x00010be0fae0(param_2);
    break;
  case 9:
    func_0x00010be0fb40(param_2);
    break;
  case 10:
    func_0x00010be0fb60(param_2);
    break;
  case 0xc:
  case 0xe:
    func_0x00010be0f3e0(param_2);
    break;
  case 0xf:
    func_0x00010be0fb20(param_2);
    break;
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
    func_0x00010be0fb00(param_2);
  }
  func_0x00010be512e0(param_1,param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be0fa50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 108ebd770; end: 108ebd77b; -[SCMemoriesPhotoLibraryFetcher _fetchAssetsFromAlbum:subpredicates:] */

void FUN_108ebd770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0fa50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__fetchAssetFromAlbum_subpredicat_112561830,param_3,param_4,0,0);
  return;
}



/* Entry: 108ebd77c; end: 108ebd88b; -[SCMemoriesPhotoLibraryFetcher _fetchAssetFromAlbum:subpredicates:imageOnly:videoOnly:] */

void FUN_108ebd77c(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4,
                  uint param_5,int param_6)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    param_1 = 0;
  }
  else {
    if (((param_5 & 1) != 0) || (param_6 != 0)) {
      lVar1 = 1;
      if (param_5 == 0) {
        lVar1 = 2;
      }
      FUN_108ebee90();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 != 0) {
        if (param_4 == (undefined *)0x0) {
          puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar2 = param_4;
          func_0x00010c0d3c80(param_4);
        }
        func_0x00010befa120();
        func_0x00010be0fa20(param_1,param_2,param_3,puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        _objc_release(lVar1);
        goto LAB_108ebd864;
      }
    }
    func_0x00010be0fa20(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_108ebd864:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108ebd88c; end: 108ebd9a7; -[SCMemoriesPhotoLibraryFetcher _fetchAssetFromAlbum:subpredicates:] */

void FUN_108ebd88c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  func_0x00010bf02a20(PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1dfc80(puVar1);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x000108ebf324(uVar3,*(undefined8 *)(param_1 + 0x88));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2827c0();
  func_0x00010c19b420(puVar1);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  func_0x00010bfa50c0(PTR__OBJC_CLASS___PHAsset_1126bd898);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ebd9a8; end: 108ebdadb; -[SCMemoriesPhotoLibraryFetcher _fetchPhotoAssetWithPredicates:imageOnly:videoOnly:] */

void FUN_108ebd9a8(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  func_0x00010bf02a20(PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1dfc80(puVar1);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x000108ebf324(uVar3,*(undefined8 *)(param_1 + 0x88));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2827c0();
  func_0x00010c19b420(puVar1);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  if ((param_4 == 0) && (param_5 == 0)) {
    func_0x00010bfa5120(PTR__OBJC_CLASS___PHAsset_1126bd898);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa5100();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ebdadc; end: 108ebdaeb; -[SCMemoriesPhotoLibraryFetcher _getFetchResultFromPHFetchResult:] */

void FUN_108ebdadc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_map__11260bb98,&PTR___NSConcreteGlobalBlock_110ac9b98);
  return;
}



/* Entry: 108ebdaec; end: 108ebdb5b;  */

void FUN_108ebdaec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d22a8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bf51e00(param_2);
  _objc_release(param_2);
  func_0x00010c063320(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ebdb5c; end: 108ebdc33; -[SCMemoriesPhotoLibraryFetcher _notifyWithFetchResults:] */

void FUN_108ebdb5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retainBlock();
  uVar4 = uVar3;
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108ebdc34;
  puStack_68 = &UNK_11084dfe0;
  uStack_60 = param_3;
  uStack_58 = uVar2;
  uStack_50 = uVar3;
  uStack_48 = uVar1;
  _objc_retain(param_3);
  func_0x00010c0f88c0(uVar4,param_2,&puStack_80);
  _objc_release(uVar4);
  _objc_release(uStack_60);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 108ebdc34; end: 108ebdcc3;  */

void FUN_108ebdc34(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x38) - 0x12U < 0xb) {
    if ((1 < *(long *)(param_1 + 0x38) - 0x1bU) && (lVar2 = *(long *)(param_1 + 0x30), lVar2 != 0))
    {
                    /* WARNING: Could not recover jumptable at 0x000108ebdc78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x10))(lVar2,*(undefined8 *)(param_1 + 0x20));
      return;
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bfb1920(uVar1);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 108ebdcc4; end: 108ebdd27; -[SCMemoriesPhotoLibraryFetcher _startupComplete] */

void FUN_108ebdcc4(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  *(undefined1 *)(param_1 + 0x34) = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_108ebdd28;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x00010c0f88c0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  }
  return;
}



/* Entry: 108ebdd28; end: 108ebddb7;  */

void FUN_108ebdd28(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar1 + 0x48) == 0) {
    func_0x00010be13080();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = uVar4;
    func_0x00010be1f0c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be65300(uVar4);
    _objc_release(uVar2);
  }
  else {
    lVar3 = *(long *)(lVar1 + 0x28);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,*(undefined8 *)(lVar1 + 0x40),1);
    }
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108ebddb8; end: 108ebddff; -[SCMemoriesPhotoLibraryFetcher _didEnterBackground] */

void FUN_108ebddb8(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x34) = 1;
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0xa8));
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0xa2) = 0;
  return;
}



/* Entry: 108ebde00; end: 108ebdf03; -[SCMemoriesPhotoLibraryFetcher _fetchAssetsForCRFeaturedStoryFromAllAlbums] */

void FUN_108ebde00(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_108ebf470(lVar13,uVar1,*(undefined8 *)(param_1 + 0x80));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar11 = param_1;
  func_0x00010be13060();
  _objc_retainAutoreleasedReturnValue();
  if (lVar11 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    *(undefined **)(param_1 + 0x58) = puVar2;
  }
  _objc_release(uVar1);
  _objc_release(lVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(lVar13 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2827c0();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_108ebefe8();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
  _objc_opt_new();
  uVar15 = *(undefined8 *)(lVar13 + 0x10);
  uVar1 = *(undefined8 *)(lVar13 + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_108ebf470(uVar15,uVar1,*(undefined8 *)(lVar13 + 0x80));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  func_0x00010bf02a20(PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfc80(puVar5);
  _objc_release(puVar2);
  uVar1 = *(undefined8 *)(lVar13 + 0x10);
  func_0x000108ebf324(uVar1,*(undefined8 *)(lVar13 + 0x88));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar5);
  _objc_release(uVar1);
  func_0x00010c19b420(puVar5);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar4);
  puVar2 = puVar4;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  while (puVar2 != (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(puVar4);
      }
      puVar7 = PTR__OBJC_CLASS___PHAsset_1126bd898;
      func_0x00010bfa50c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa140(puVar6);
      _objc_release(puVar7);
      puVar14 = puVar14 + 1;
    } while (puVar2 != puVar14);
    puVar2 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  puVar2 = puVar6;
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(lVar13 + 0x58);
  *(undefined **)(lVar13 + 0x58) = puVar2;
  _objc_release(uVar1);
  _objc_release(puVar6);
  _objc_release(uVar15);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(puVar3 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar13;
  func_0x00010c2827c0();
  _objc_release(lVar13);
  func_0x000108ebf144();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
  _objc_opt_new();
  uVar15 = *(undefined8 *)(puVar3 + 0x10);
  uVar1 = *(undefined8 *)(puVar3 + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_108ebf470(uVar15,uVar1,*(undefined8 *)(puVar3 + 0x80));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  func_0x00010bf02a20(PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfc80(puVar2);
  _objc_release(puVar4);
  uVar1 = *(undefined8 *)(puVar3 + 0x10);
  func_0x000108ebf324(uVar1,*(undefined8 *)(puVar3 + 0x88));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar2);
  _objc_release(uVar1);
  func_0x00010c19b420(puVar2);
  puVar4 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  func_0x00010bfa50c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    uVar1 = *(undefined8 *)(puVar3 + 0x58);
    *(undefined8 *)(puVar3 + 0x58) = 0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(puVar3 + 0x58);
    *(undefined **)(puVar3 + 0x58) = puVar5;
  }
  _objc_release(uVar1);
  _objc_release(puVar4);
  _objc_release(uVar15);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(lVar11 + 0x88);
  FUN_108ebecc4();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar11;
  func_0x00010be13060();
  _objc_retainAutoreleasedReturnValue();
  if (lVar13 == 0) {
    uVar1 = *(undefined8 *)(lVar11 + 0x58);
    *(undefined8 *)(lVar11 + 0x58) = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(lVar11 + 0x58);
    *(undefined **)(lVar11 + 0x58) = puVar2;
  }
  _objc_release(uVar1);
  _objc_release(lVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = lVar8;
  FUN_108ebec30();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
  _objc_alloc_init();
  func_0x00010c189d40();
  lVar13 = lVar11;
  func_0x00010bf64e20();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar13;
  FUN_108ebef14();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf09f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar9);
  _objc_release(lVar13);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar11);
  lVar11 = lVar8;
  func_0x00010be13060();
  _objc_retainAutoreleasedReturnValue();
  if (lVar11 == 0) {
    uVar1 = *(undefined8 *)(lVar8 + 0x58);
    *(undefined8 *)(lVar8 + 0x58) = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(lVar8 + 0x58);
    *(undefined **)(lVar8 + 0x58) = puVar2;
  }
  _objc_release(uVar1);
  _objc_release(lVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar6;
  if (*(long *)(puVar6 + 0x60) == 0) {
    func_0x00010be13060();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be0fa20();
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar2 == (undefined *)0x0) {
    uVar1 = *(undefined8 *)(puVar6 + 0x58);
    *(undefined8 *)(puVar6 + 0x58) = 0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(puVar6 + 0x58);
    *(undefined **)(puVar6 + 0x58) = puVar3;
  }
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _CACurrentMediaTime();
  uVar15 = *(undefined8 *)(puVar2 + 0x78);
  func_0x00010c269d40(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar15;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar2 + 0x10);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bf2a840(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  FUN_108ebfd18(uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar12);
  func_0x00010befbfe0(uVar1);
  _objc_release(puVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar15);
  return;
}



/* Entry: 108ebdf04; end: 108ebe1b7; -[SCMemoriesPhotoLibraryFetcher _fetchAssetsForCRFeaturedStoryFromExcludedAlbums] */

void FUN_108ebdf04(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2827c0();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_108ebefe8();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
  _objc_opt_new();
  uVar15 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_108ebf470(uVar15,uVar1,*(undefined8 *)(param_1 + 0x80));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar5 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  func_0x00010bf02a20(PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfc80(puVar4);
  _objc_release(puVar5);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000108ebf324(uVar1,*(undefined8 *)(param_1 + 0x88));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar4);
  _objc_release(uVar1);
  func_0x00010c19b420(puVar4);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  puVar5 = puVar3;
  func_0x00010bf52a60();
  lVar12 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar12) {
        _objc_enumerationMutation(puVar3);
      }
      puVar7 = PTR__OBJC_CLASS___PHAsset_1126bd898;
      func_0x00010bfa50c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa140(puVar6);
      _objc_release(puVar7);
      puVar14 = puVar14 + 1;
    } while (puVar5 != puVar14);
    puVar5 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  puVar5 = puVar6;
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar5;
  _objc_release(uVar1);
  _objc_release(puVar6);
  _objc_release(uVar15);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(puVar2 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar8;
  func_0x00010c2827c0();
  _objc_release(lVar8);
  func_0x000108ebf144();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
  _objc_opt_new();
  uVar15 = *(undefined8 *)(puVar2 + 0x10);
  uVar1 = *(undefined8 *)(puVar2 + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_108ebf470(uVar15,uVar1,*(undefined8 *)(puVar2 + 0x80));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  func_0x00010bf02a20(PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfc80(puVar5);
  _objc_release(puVar3);
  uVar1 = *(undefined8 *)(puVar2 + 0x10);
  func_0x000108ebf324(uVar1,*(undefined8 *)(puVar2 + 0x88));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar5);
  _objc_release(uVar1);
  func_0x00010c19b420(puVar5);
  puVar3 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  func_0x00010bfa50c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    uVar1 = *(undefined8 *)(puVar2 + 0x58);
    *(undefined8 *)(puVar2 + 0x58) = 0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(puVar2 + 0x58);
    *(undefined **)(puVar2 + 0x58) = puVar4;
  }
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(uVar15);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(lVar12 + 0x88);
  FUN_108ebecc4();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar12;
  func_0x00010be13060();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
    uVar1 = *(undefined8 *)(lVar12 + 0x58);
    *(undefined8 *)(lVar12 + 0x58) = 0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(lVar12 + 0x58);
    *(undefined **)(lVar12 + 0x58) = puVar5;
  }
  _objc_release(uVar1);
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = lVar9;
  FUN_108ebec30();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
  _objc_alloc_init();
  func_0x00010c189d40();
  lVar8 = lVar12;
  func_0x00010bf64e20();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar8;
  FUN_108ebef14();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf09f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar10);
  _objc_release(lVar8);
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(lVar12);
  lVar12 = lVar9;
  func_0x00010be13060();
  _objc_retainAutoreleasedReturnValue();
  if (lVar12 == 0) {
    uVar1 = *(undefined8 *)(lVar9 + 0x58);
    *(undefined8 *)(lVar9 + 0x58) = 0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(lVar9 + 0x58);
    *(undefined **)(lVar9 + 0x58) = puVar5;
  }
  _objc_release(uVar1);
  _objc_release(lVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar6;
  if (*(long *)(puVar6 + 0x60) == 0) {
    func_0x00010be13060();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be0fa20();
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar5 == (undefined *)0x0) {
    uVar1 = *(undefined8 *)(puVar6 + 0x58);
    *(undefined8 *)(puVar6 + 0x58) = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(puVar6 + 0x58);
    *(undefined **)(puVar6 + 0x58) = puVar2;
  }
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  _CACurrentMediaTime();
  uVar15 = *(undefined8 *)(puVar5 + 0x78);
  func_0x00010c269d40(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar15;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(puVar5 + 0x10);
  puVar5 = PTR_PTR_1126b2438;
  func_0x00010bf2a840(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  FUN_108ebfd18(uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar5;
  func_0x00010c2ac460(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar13);
  func_0x00010befbfe0(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar15);
  return;
}



/* Entry: 108ebe1b8; end: 108ebe383; -[SCMemoriesPhotoLibraryFetcher _fetchAllSelfiesAssets] */

void FUN_108ebe1b8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar1;
  func_0x00010c2827c0();
  _objc_release(lVar1);
  FUN_108ebf144();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
  _objc_opt_new();
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  FUN_108ebf470(uVar13,uVar3,*(undefined8 *)(param_1 + 0x80));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  func_0x00010bf02a20(PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfc80(puVar2);
  _objc_release(puVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x000108ebf324(uVar3,*(undefined8 *)(param_1 + 0x88));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar2);
  _objc_release(uVar3);
  func_0x00010c19b420(puVar2);
  puVar4 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  func_0x00010bfa50c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    *(undefined **)(param_1 + 0x58) = puVar5;
  }
  _objc_release(uVar3);
  _objc_release(puVar4);
  _objc_release(uVar13);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(lVar11 + 0x88);
  FUN_108ebecc4();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar11;
  func_0x00010be13060();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(lVar11 + 0x58);
    *(undefined8 *)(lVar11 + 0x58) = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar11 + 0x58);
    *(undefined **)(lVar11 + 0x58) = puVar2;
  }
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = lVar8;
  FUN_108ebec30();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
  _objc_alloc_init();
  func_0x00010c189d40();
  lVar1 = lVar11;
  func_0x00010bf64e20();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar1;
  FUN_108ebef14();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf09f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar9);
  _objc_release(lVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(lVar11);
  lVar11 = lVar8;
  func_0x00010be13060();
  _objc_retainAutoreleasedReturnValue();
  if (lVar11 == 0) {
    uVar3 = *(undefined8 *)(lVar8 + 0x58);
    *(undefined8 *)(lVar8 + 0x58) = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar8 + 0x58);
    *(undefined **)(lVar8 + 0x58) = puVar2;
  }
  _objc_release(uVar3);
  _objc_release(lVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar7;
  if (*(long *)(puVar7 + 0x60) == 0) {
    func_0x00010be13060();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be0fa20();
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar2 == (undefined *)0x0) {
    uVar3 = *(undefined8 *)(puVar7 + 0x58);
    *(undefined8 *)(puVar7 + 0x58) = 0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(puVar7 + 0x58);
    *(undefined **)(puVar7 + 0x58) = puVar4;
  }
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _CACurrentMediaTime();
  uVar13 = *(undefined8 *)(puVar2 + 0x78);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar13;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar2 + 0x10);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bf2a840(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  FUN_108ebfd18(uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar12);
  func_0x00010befbfe0(uVar3);
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar13);
  return;
}



/* Entry: 108ebe384; end: 108ebe45f; -[SCMemoriesPhotoLibraryFetcher _fetchAssetsForMiniCarousel] */

void FUN_108ebe384(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  undefined *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  long lStack_b0;
  long lStack_a8;
  undefined1 *puStack_50;
  code *pcStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_2 + 0x88);
  FUN_108ebecc4();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010be13060(param_2,param_3,lVar1,0,0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar11 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_2 + 0x58) = 0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_40 = lVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_2 + 0x58);
    *(undefined **)(param_2 + 0x58) = puVar3;
  }
  _objc_release(uVar11);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_108ebe460;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = lVar1;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_108ebec30();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
  _objc_alloc_init();
  func_0x00010c189d40();
  lVar5 = lVar2;
  func_0x00010bf64e20(lVar2,param_3,puVar4,puVar3,0);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  FUN_108ebef14();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  lStack_c0 = lVar5;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_3,
                      &PTR____CFConstantStringClassReference_110efe518);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,lVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf09f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010be13060(lVar1,param_3,puVar9,0,0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar11 = *(undefined8 *)(lVar1 + 0x58);
    *(undefined8 *)(lVar1 + 0x58) = 0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_b0 = lVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_b0,1);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(lVar1 + 0x58);
    *(undefined **)(lVar1 + 0x58) = puVar3;
  }
  _objc_release(uVar11);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_108ebe638;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar9;
  lStack_e0 = lVar2;
  lStack_d8 = lVar1;
  ppuStack_d0 = &puStack_50;
  if (*(long *)(puVar9 + 0x60) == 0) {
    func_0x00010be13060();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be0fa20();
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar3 == (undefined *)0x0) {
    uVar11 = *(undefined8 *)(puVar9 + 0x58);
    *(undefined8 *)(puVar9 + 0x58) = 0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_f0 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_f0,1);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(puVar9 + 0x58);
    *(undefined **)(puVar9 + 0x58) = puVar4;
  }
  _objc_release(uVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  dVar13 = param_1;
  _CACurrentMediaTime();
  uVar10 = *(undefined8 *)(puVar3 + 0x78);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar3 + 0x10);
  puVar3 = PTR_PTR_1126b2438;
  func_0x00010bf2a840(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  FUN_108ebfd18(uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110efe498,uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar12);
  func_0x00010befbfe0(uVar11,param_3,puVar4,(long)((dVar13 - param_1) * 1000.0));
  _objc_release(puVar4);
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar10);
  return;
}



/* Entry: 108ebe460; end: 108ebe637; -[SCMemoriesPhotoLibraryFetcher _fetchAssetsForScreenshopShoppableRecap] */

void FUN_108ebe460(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_80;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_2;
  FUN_108ebec30();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
  _objc_alloc_init();
  func_0x00010c189d40();
  lVar4 = lVar1;
  func_0x00010bf64e20(lVar1,param_3,puVar3,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  FUN_108ebef14();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  lStack_80 = lVar4;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_3,
                      &PTR____CFConstantStringClassReference_110efe518);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,lVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf09f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010be13060(param_2,param_3,puVar8,0,0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar10 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_2 + 0x58) = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = lVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_70,1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_2 + 0x58);
    *(undefined **)(param_2 + 0x58) = puVar2;
  }
  _objc_release(uVar10);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_108ebe638;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar8;
  lStack_a0 = lVar1;
  lStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  if (*(long *)(puVar8 + 0x60) == 0) {
    func_0x00010be13060();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be0fa20();
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar2 == (undefined *)0x0) {
    uVar10 = *(undefined8 *)(puVar8 + 0x58);
    *(undefined8 *)(puVar8 + 0x58) = 0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b0 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_b0,1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(puVar8 + 0x58);
    *(undefined **)(puVar8 + 0x58) = puVar3;
  }
  _objc_release(uVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  dVar12 = param_1;
  _CACurrentMediaTime();
  uVar9 = *(undefined8 *)(puVar2 + 0x78);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(puVar2 + 0x10);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bf2a840(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  FUN_108ebfd18(uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_3,&PTR____CFConstantStringClassReference_110efe498,uVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar11);
  func_0x00010befbfe0(uVar10,param_3,puVar3,(long)((dVar12 - param_1) * 1000.0));
  _objc_release(puVar3);
  _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 108ebe638; end: 108ebe707; -[SCMemoriesPhotoLibraryFetcher _fetchAssetsForContentFilters] */

void FUN_108ebe638(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_2;
  if (*(long *)(param_2 + 0x60) == 0) {
    func_0x00010be13060(param_2,param_3,*(undefined8 *)(param_2 + 0x98),0,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be0fa20();
    _objc_retainAutoreleasedReturnValue();
  }
  if (lVar1 == 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_2 + 0x58) = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_30 = lVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_30,1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + 0x58);
    *(undefined **)(param_2 + 0x58) = puVar2;
  }
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  dVar7 = param_1;
  _CACurrentMediaTime();
  uVar3 = *(undefined8 *)(lVar1 + 0x78);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar1 + 0x10);
  puVar2 = PTR_PTR_1126b2438;
  func_0x00010bf2a840(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  FUN_108ebfd18(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_3,&PTR____CFConstantStringClassReference_110efe498,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar6);
  func_0x00010befbfe0(uVar5,param_3,puVar4,(long)((dVar7 - param_1) * 1000.0));
  _objc_release(puVar4);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108ebe708; end: 108ebe7ff; -[SCMemoriesPhotoLibraryFetcher _logCameraRollFetchLatency:] */

void FUN_108ebe708(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  
  dVar6 = param_1;
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  puVar3 = PTR_PTR_1126b2438;
  func_0x00010bf2a840(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  FUN_108ebfd18(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110efe498,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar5);
  func_0x00010befbfe0(uVar2,param_3,puVar4,(long)((dVar6 - param_1) * 1000.0));
  _objc_release(puVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ebe800; end: 108ebe853; -[SCMemoriesPhotoLibraryFetcher _registerPhotoLibraryChangeObserverIfNeeded] */

void FUN_108ebe800(long param_1)

{
  undefined *puVar1;
  
  if ((*(byte *)(param_1 + 0x31) & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010c22be00(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125f60();
    _objc_release(puVar1);
    *(undefined1 *)(param_1 + 0x31) = 1;
  }
  return;
}



/* Entry: 108ebe854; end: 108ebe85b; -[SCMemoriesPhotoLibraryFetcher changeDebounceTimer] */

undefined8 FUN_108ebe854(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 108ebe85c; end: 108ebe88b; -[SCMemoriesPhotoLibraryFetcher setChangeDebounceTimer:] */

void FUN_108ebe85c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ebe88c; end: 108ebe893; -[SCMemoriesPhotoLibraryFetcher pendingChange] */

undefined8 FUN_108ebe88c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 108ebe894; end: 108ebe8c3; -[SCMemoriesPhotoLibraryFetcher setPendingChange:] */

void FUN_108ebe894(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ebe8c4; end: 108ebe8cb; -[SCMemoriesPhotoLibraryFetcher isInRapidChangeSequence] */

undefined1 FUN_108ebe8c4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa2);
}



/* Entry: 108ebe8cc; end: 108ebe8d3; -[SCMemoriesPhotoLibraryFetcher setIsInRapidChangeSequence:] */

void FUN_108ebe8cc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xa2) = param_3;
  return;
}



/* Entry: 108ebe8d4; end: 108ebe9c3; -[SCMemoriesPhotoLibraryFetcher .cxx_destruct] */

void FUN_108ebe8d4(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ebe9c4; end: 108ebea07;  */

void FUN_108ebe9c4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae790;
  _objc_alloc();
  func_0x00010c021520();
  uVar1 = puRam000000011372eb18;
  puRam000000011372eb18 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ebea08; end: 108ebebaf;  */

void FUN_108ebea08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000108ebeac0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x000108ebeb20(param_1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x000108ebeac0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108ebebb0; end: 108ebebe3;  */

void FUN_108ebebb0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110efe578);
  return;
}



/* Entry: 108ebebe4; end: 108ebebf7;  */

void FUN_108ebebe4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1063d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSPredicate_1126b06d0,PTR_s_predicateWithFormat__11261f310,
             &PTR____CFConstantStringClassReference_110efe5b8);
  return;
}



/* Entry: 108ebebf8; end: 108ebec2f;  */

void FUN_108ebebf8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110efe598);
  return;
}



/* Entry: 108ebec30; end: 108ebec83;  */

void FUN_108ebec30(void)

{
  undefined8 uVar1;
  
  if (lRam000000011372eb30 != -1) {
    func_0x000107c27d9c(0x11372eb30,&PTR___NSConcreteGlobalBlock_110ac9be0);
  }
  uVar1 = uRam000000011372eb28;
  _objc_retain(uRam000000011372eb28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ebec84; end: 108ebecc3;  */

void FUN_108ebec84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf27bc0(PTR__OBJC_CLASS___NSCalendar_1126aeec8,param_2,
                      *(undefined8 *)PTR__NSCalendarIdentifierISO8601_11034aa30);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam000000011372eb28;
  puRam000000011372eb28 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ebecc4; end: 108ebee1f;  */

void FUN_108ebecc4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110e84178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,puVar2);
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110efe618);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,puVar3);
  puVar4 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110efe5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,puVar4);
  if (param_1 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                        &PTR____CFConstantStringClassReference_110efe5f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,puVar5);
    _objc_release(puVar5);
  }
  puVar5 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108ebee20; end: 108ebee8f;  */

void FUN_108ebee20(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110e84178);
  return;
}



/* Entry: 108ebee90; end: 108ebeeff;  */

void FUN_108ebee90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1063c0(puVar2,param_2,&PTR____CFConstantStringClassReference_110efe978);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ebef00; end: 108ebef13;  */

void FUN_108ebef00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1063d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSPredicate_1126b06d0,PTR_s_predicateWithFormat__11261f310,
             &PTR____CFConstantStringClassReference_110efe618);
  return;
}



/* Entry: 108ebef14; end: 108ebefe7;  */

void FUN_108ebef14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined ***pppuVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined8 auStack_198 [2];
  undefined8 auStack_188 [2];
  undefined8 auStack_178 [2];
  long lStack_168;
  undefined *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 ***pppuStack_140;
  undefined8 uStack_138;
  undefined **ppuStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined1 ***pppuStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0978;
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110efe598);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_48 = puVar1;
  puStack_40 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
  pcStack_58 = FUN_108ebefe8;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_opt_new();
  puVar19 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a0 = puVar19;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar19);
  puVar19 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puStack_b0 = puVar1;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c1dfc80(puVar2);
  _objc_release(puVar19);
  func_0x00010c19b420(puVar2);
  puVar3 = (undefined8 *)PTR__OBJC_CLASS___PHAssetCollection_1126bf858;
  func_0x00010bfa4f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_b8 = FUN_108ebf144;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (undefined8 *)PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
  puStack_e0 = puVar19;
  puStack_d8 = puVar1;
  puStack_d0 = puVar3;
  puStack_c8 = puVar2;
  ppuStack_c0 = &puStack_60;
  _objc_opt_new();
  puVar1 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_f0 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c19b420(puVar5);
  puVar6 = (undefined8 *)PTR__OBJC_CLASS___PHAssetCollection_1126bf858;
  func_0x00010bfa4f60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar7 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pppuVar15 = &ppuStack_130;
  uStack_f8 = 0x108ebf264;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110dce2b8;
  puVar16 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_120 = puVar2;
  puStack_118 = puVar6;
  puStack_110 = puVar3;
  puStack_108 = puVar5;
  pppuStack_100 = &ppuStack_c0;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar16;
  FUN_108ebefe8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  puVar3 = puVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  uStack_138 = 0x108ebf324;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = puVar7;
  puStack_160 = puVar2;
  puStack_158 = puVar5;
  puStack_150 = puVar16;
  puStack_148 = puVar3;
  pppuStack_140 = &pppuStack_100;
  _objc_retain(puVar7);
  if (puVar7 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)PTR____NSArray0__struct_11034ab48;
    if (puVar6 < (undefined8 *)0x1d) {
      if ((1L << ((ulong)puVar6 & 0x3f) & 0x18c49e3fU) == 0) {
        if ((1L << ((ulong)puVar6 & 0x3f) & 0x73961c0U) == 0) goto LAB_108ebf434;
        pppuVar15 = (undefined ***)auStack_188;
      }
      else {
        pppuVar15 = (undefined ***)auStack_198;
      }
      goto LAB_108ebf3bc;
    }
  }
  else {
    pppuVar15 = (undefined ***)auStack_178;
LAB_108ebf3bc:
    puVar1 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    *pppuVar15 = (undefined **)puVar1;
    puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    pppuVar15[1] = (undefined **)puVar2;
    puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
LAB_108ebf434:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar14;
  puVar16 = pppuVar15;
  _objc_retain(puVar14);
  puVar5 = pppuVar15;
  _objc_retain();
  puVar3 = (undefined8 *)PTR____NSArray0__struct_11034ab48;
  puVar12 = pppuVar15;
  puVar13 = puVar14;
  switch(puVar7) {
  case (undefined8 *)0x5:
  case (undefined8 *)0x12:
    puVar5 = puVar14;
    func_0x000108ebfe30();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = pppuVar15;
    func_0x00010bf64e40(0xc0ac200000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = (undefined8 *)PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    puVar16 = puVar12;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    goto code_r0x000108ebf984;
  case (undefined8 *)0x6:
  case (undefined8 *)0x13:
    puVar5 = pppuVar15;
    _objc_retain();
    FUN_108ebec30();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar14;
    func_0x000108ebfe30();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(pppuVar15);
    func_0x000108ebfdc4();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar5;
    func_0x00010bf44640();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = (undefined8 *)0x1c;
    puVar8 = puVar5;
    func_0x00010bf44640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar13;
    func_0x00010c2bedc0();
    func_0x00010c2bedc0();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    if ((undefined8 *)0x7de < puVar3) {
      puVar18 = (undefined8 *)0x7de;
      do {
        func_0x00010c2278a0(puVar13);
        puVar9 = puVar5;
        func_0x00010bf650e0();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = (undefined8 *)((long)puVar18 + 1);
        func_0x00010c2278a0(puVar8);
        puVar10 = puVar5;
        func_0x00010bf650e0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = (undefined8 *)PTR__OBJC_CLASS___NSPredicate_1126b06d0;
        func_0x00010c1063c0();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar11;
        func_0x00010befa120(puVar1);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar9);
      } while (puVar3 != puVar18);
    }
    _objc_retain(puVar7);
    puVar2 = puVar1;
    func_0x00010bf529e0();
    puVar3 = puVar7;
    if (puVar2 != (undefined *)0x0) {
      puVar18 = (undefined8 *)PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
      func_0x00010c0ec900();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar18;
      func_0x00010bf09f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar18);
    }
    _objc_release(puVar1);
    _objc_release(puVar8);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(pppuVar15);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(pppuVar15);
    break;
  case (undefined8 *)0x7:
  case (undefined8 *)0x14:
    puVar16 = (undefined8 *)0x0;
    goto code_r0x000108ebf99c;
  case (undefined8 *)0x8:
  case (undefined8 *)0x15:
    puVar16 = (undefined8 *)0x1;
code_r0x000108ebf99c:
    puVar3 = puVar14;
    puVar6 = pppuVar15;
    FUN_108ebfb2c();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined8 *)0xb:
  case (undefined8 *)0x16:
    _objc_retain();
    func_0x000108ebff88();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(pppuVar15);
    func_0x000108ec0548(puVar14);
    goto code_r0x000108ebf5b8;
  case (undefined8 *)0xc:
  case (undefined8 *)0x17:
    _objc_retain();
    func_0x000108ebff88();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(pppuVar15);
    func_0x000108ec05b0(puVar14);
code_r0x000108ebf5b8:
    puVar5 = pppuVar15;
    func_0x00010bf64e40(-(double)((long)puVar13 * 0xe10));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar15);
    puVar7 = (undefined8 *)PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar12;
    puVar16 = puVar7;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar7);
    _objc_release(puVar12);
    puVar5 = pppuVar15;
    goto code_r0x000108ebfad8;
  case (undefined8 *)0xd:
  case (undefined8 *)0x18:
    puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar19);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar7 = pppuVar15;
    func_0x00010bf64e40(0xc0f5180000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = (undefined8 *)PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    puVar16 = puVar12;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
code_r0x000108ebf984:
    _objc_release(puVar12);
code_r0x000108ebfad8:
    _objc_release(puVar5);
    break;
  case (undefined8 *)0xe:
  case (undefined8 *)0x19:
    func_0x000108ebff88();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64e40(0xc0f5180000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = (undefined8 *)PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    puVar16 = puVar7;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    goto code_r0x000108ebfad0;
  case (undefined8 *)0x10:
  case (undefined8 *)0x1a:
    puVar5 = puVar14;
    func_0x000108ebfe30();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010c0d3c80();
    _objc_release();
    FUN_108ebec30();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf44640();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar5;
    func_0x00010bf650e0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = (undefined8 *)PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar13;
    func_0x00010befa120(puVar3);
    _objc_release(puVar13);
    _objc_release(puVar12);
code_r0x000108ebfad0:
    _objc_release(puVar7);
    goto code_r0x000108ebfad8;
  }
  _objc_release(pppuVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
    ___stack_chk_fail();
    _objc_retain();
    puVar5 = puVar6;
    _objc_retain();
    FUN_108ebec30();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf44640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010c2bedc0();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = (undefined *)((long)puVar3 + ((ulong)puVar16 & 0xffffffff));
    if ((undefined *)0x7de < puVar1) {
      puVar19 = (undefined *)0x7de;
      do {
        func_0x00010c2278a0(puVar7);
        puVar3 = puVar5;
        func_0x00010bf650e0();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar3;
        func_0x00010bf64e40(0x40f5180000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
        func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(puVar4);
        _objc_release(puVar16);
        _objc_release(puVar3);
        puVar19 = puVar19 + 1;
      } while (puVar1 != puVar19);
    }
    puVar16 = puVar14;
    func_0x000108ebfe30(puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010bf529e0();
    puVar3 = puVar16;
    if (puVar1 != (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
      func_0x00010c0ec900(PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf09f60(puVar16);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      _objc_release(puVar1);
    }
    _objc_release(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar14);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108ebefe8; end: 108ebf143;  */

void FUN_108ebefe8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined ***pppuVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined8 auStack_148 [2];
  undefined8 auStack_138 [2];
  undefined8 auStack_128 [2];
  long lStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined1 ***pppuStack_f0;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar1);
  _objc_release(puVar19);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  uStack_60 = param_1;
  func_0x00010c1063c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c1dfc80(puVar1);
  _objc_release(puVar2);
  func_0x00010c19b420(puVar1);
  puVar3 = (undefined8 *)PTR__OBJC_CLASS___PHAssetCollection_1126bf858;
  func_0x00010bfa4f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_68 = FUN_108ebf144;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined8 *)PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
  puStack_90 = puVar2;
  uStack_88 = param_1;
  puStack_80 = puVar3;
  puStack_78 = puVar1;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_opt_new();
  puVar1 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a0 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c19b420(puVar4);
  puVar5 = (undefined8 *)PTR__OBJC_CLASS___PHAssetCollection_1126bf858;
  func_0x00010bfa4f60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar6 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pppuVar15 = &ppuStack_e0;
  uStack_a8 = 0x108ebf264;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110dce2b8;
  puVar16 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_d0 = puVar2;
  puStack_c8 = puVar5;
  puStack_c0 = puVar3;
  puStack_b8 = puVar4;
  ppuStack_b0 = &puStack_70;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar16;
  FUN_108ebefe8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  puVar3 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  uStack_e8 = 0x108ebf324;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = puVar6;
  puStack_110 = puVar2;
  puStack_108 = puVar4;
  puStack_100 = puVar16;
  puStack_f8 = puVar3;
  pppuStack_f0 = &ppuStack_b0;
  _objc_retain(puVar6);
  if (puVar6 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)PTR____NSArray0__struct_11034ab48;
    if (puVar5 < (undefined8 *)0x1d) {
      if ((1L << ((ulong)puVar5 & 0x3f) & 0x18c49e3fU) == 0) {
        if ((1L << ((ulong)puVar5 & 0x3f) & 0x73961c0U) == 0) goto LAB_108ebf434;
        pppuVar15 = (undefined ***)auStack_138;
      }
      else {
        pppuVar15 = (undefined ***)auStack_148;
      }
      goto LAB_108ebf3bc;
    }
  }
  else {
    pppuVar15 = (undefined ***)auStack_128;
LAB_108ebf3bc:
    puVar1 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    *pppuVar15 = (undefined **)puVar1;
    puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    pppuVar15[1] = (undefined **)puVar2;
    puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
LAB_108ebf434:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar13;
  puVar16 = pppuVar15;
  _objc_retain(puVar13);
  puVar4 = pppuVar15;
  _objc_retain();
  puVar3 = (undefined8 *)PTR____NSArray0__struct_11034ab48;
  puVar11 = pppuVar15;
  puVar12 = puVar13;
  switch(puVar6) {
  case (undefined8 *)0x5:
  case (undefined8 *)0x12:
    puVar4 = puVar13;
    func_0x000108ebfe30();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = pppuVar15;
    func_0x00010bf64e40(0xc0ac200000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = (undefined8 *)PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    puVar16 = puVar11;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    goto code_r0x000108ebf984;
  case (undefined8 *)0x6:
  case (undefined8 *)0x13:
    puVar4 = pppuVar15;
    _objc_retain();
    FUN_108ebec30();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar13;
    func_0x000108ebfe30();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(pppuVar15);
    func_0x000108ebfdc4();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar4;
    func_0x00010bf44640();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = (undefined8 *)0x1c;
    puVar7 = puVar4;
    func_0x00010bf44640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar12;
    func_0x00010c2bedc0();
    func_0x00010c2bedc0();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    if ((undefined8 *)0x7de < puVar3) {
      puVar18 = (undefined8 *)0x7de;
      do {
        func_0x00010c2278a0(puVar12);
        puVar8 = puVar4;
        func_0x00010bf650e0();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = (undefined8 *)((long)puVar18 + 1);
        func_0x00010c2278a0(puVar7);
        puVar9 = puVar4;
        func_0x00010bf650e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = (undefined8 *)PTR__OBJC_CLASS___NSPredicate_1126b06d0;
        func_0x00010c1063c0();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar10;
        func_0x00010befa120(puVar1);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
      } while (puVar3 != puVar18);
    }
    _objc_retain(puVar6);
    puVar2 = puVar1;
    func_0x00010bf529e0();
    puVar3 = puVar6;
    if (puVar2 != (undefined *)0x0) {
      puVar18 = (undefined8 *)PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
      func_0x00010c0ec900();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar18;
      func_0x00010bf09f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar18);
    }
    _objc_release(puVar1);
    _objc_release(puVar7);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(pppuVar15);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(pppuVar15);
    break;
  case (undefined8 *)0x7:
  case (undefined8 *)0x14:
    puVar16 = (undefined8 *)0x0;
    goto code_r0x000108ebf99c;
  case (undefined8 *)0x8:
  case (undefined8 *)0x15:
    puVar16 = (undefined8 *)0x1;
code_r0x000108ebf99c:
    puVar3 = puVar13;
    puVar5 = pppuVar15;
    FUN_108ebfb2c();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined8 *)0xb:
  case (undefined8 *)0x16:
    _objc_retain();
    func_0x000108ebff88();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(pppuVar15);
    func_0x000108ec0548(puVar13);
    goto code_r0x000108ebf5b8;
  case (undefined8 *)0xc:
  case (undefined8 *)0x17:
    _objc_retain();
    func_0x000108ebff88();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(pppuVar15);
    func_0x000108ec05b0(puVar13);
code_r0x000108ebf5b8:
    puVar4 = pppuVar15;
    func_0x00010bf64e40(-(double)((long)puVar12 * 0xe10));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar15);
    puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar11;
    puVar16 = puVar6;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar11);
    puVar4 = pppuVar15;
    goto code_r0x000108ebfad8;
  case (undefined8 *)0xd:
  case (undefined8 *)0x18:
    puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar19);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar6 = pppuVar15;
    func_0x00010bf64e40(0xc0f5180000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = (undefined8 *)PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    puVar16 = puVar11;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
code_r0x000108ebf984:
    _objc_release(puVar11);
code_r0x000108ebfad8:
    _objc_release(puVar4);
    break;
  case (undefined8 *)0xe:
  case (undefined8 *)0x19:
    func_0x000108ebff88();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64e40(0xc0f5180000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    puVar16 = puVar6;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    goto code_r0x000108ebfad0;
  case (undefined8 *)0x10:
  case (undefined8 *)0x1a:
    puVar4 = puVar13;
    func_0x000108ebfe30();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c0d3c80();
    _objc_release();
    FUN_108ebec30();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf44640();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar4;
    func_0x00010bf650e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = (undefined8 *)PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar12;
    func_0x00010befa120(puVar3);
    _objc_release(puVar12);
    _objc_release(puVar11);
code_r0x000108ebfad0:
    _objc_release(puVar6);
    goto code_r0x000108ebfad8;
  }
  _objc_release(pppuVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
    ___stack_chk_fail();
    _objc_retain();
    puVar4 = puVar5;
    _objc_retain();
    FUN_108ebec30();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf44640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    func_0x00010c2bedc0();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = (undefined *)((long)puVar3 + ((ulong)puVar16 & 0xffffffff));
    if ((undefined *)0x7de < puVar1) {
      puVar19 = (undefined *)0x7de;
      do {
        func_0x00010c2278a0(puVar6);
        puVar3 = puVar4;
        func_0x00010bf650e0();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar3;
        func_0x00010bf64e40(0x40f5180000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
        func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(puVar14);
        _objc_release(puVar16);
        _objc_release(puVar3);
        puVar19 = puVar19 + 1;
      } while (puVar1 != puVar19);
    }
    puVar16 = puVar13;
    func_0x000108ebfe30(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010bf529e0();
    puVar3 = puVar16;
    if (puVar1 != (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
      func_0x00010c0ec900(PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf09f60(puVar16);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      _objc_release(puVar1);
    }
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar13);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108ebf144; end: 108ebf46f;  */

void FUN_108ebf144(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined ***pppuVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined8 auStack_e8 [2];
  undefined8 auStack_d8 [2];
  undefined8 auStack_c8 [2];
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined1 **ppuStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c19b420(puVar1);
  puVar4 = (undefined8 *)PTR__OBJC_CLASS___PHAssetCollection_1126bf858;
  func_0x00010bfa4f60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar6 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pppuVar15 = &ppuStack_80;
  uStack_48 = 0x108ebf264;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110dce2b8;
  puVar16 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar3;
  puStack_68 = puVar4;
  puStack_60 = puVar5;
  puStack_58 = puVar1;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar16;
  FUN_108ebefe8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  puVar5 = puVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  uStack_88 = 0x108ebf324;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = puVar6;
  puStack_b0 = puVar3;
  puStack_a8 = puVar1;
  puStack_a0 = puVar16;
  puStack_98 = puVar5;
  ppuStack_90 = &puStack_50;
  _objc_retain(puVar6);
  if (puVar6 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)PTR____NSArray0__struct_11034ab48;
    if (puVar4 < (undefined8 *)0x1d) {
      if ((1L << ((ulong)puVar4 & 0x3f) & 0x18c49e3fU) == 0) {
        if ((1L << ((ulong)puVar4 & 0x3f) & 0x73961c0U) == 0) goto LAB_108ebf434;
        pppuVar15 = (undefined ***)auStack_d8;
      }
      else {
        pppuVar15 = (undefined ***)auStack_e8;
      }
      goto LAB_108ebf3bc;
    }
  }
  else {
    pppuVar15 = (undefined ***)auStack_c8;
LAB_108ebf3bc:
    puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    *pppuVar15 = (undefined **)puVar2;
    puVar3 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    pppuVar15[1] = (undefined **)puVar3;
    puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
LAB_108ebf434:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar13;
  puVar16 = pppuVar15;
  _objc_retain(puVar13);
  puVar1 = pppuVar15;
  _objc_retain();
  puVar5 = (undefined8 *)PTR____NSArray0__struct_11034ab48;
  puVar11 = pppuVar15;
  puVar12 = puVar13;
  switch(puVar6) {
  case (undefined8 *)0x5:
  case (undefined8 *)0x12:
    puVar1 = puVar13;
    func_0x000108ebfe30();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = pppuVar15;
    func_0x00010bf64e40(0xc0ac200000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = (undefined8 *)PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    puVar16 = puVar11;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    goto code_r0x000108ebf984;
  case (undefined8 *)0x6:
  case (undefined8 *)0x13:
    puVar1 = pppuVar15;
    _objc_retain();
    FUN_108ebec30();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar13;
    func_0x000108ebfe30();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(pppuVar15);
    func_0x000108ebfdc4();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010bf44640();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = (undefined8 *)0x1c;
    puVar7 = puVar1;
    func_0x00010bf44640();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar12;
    func_0x00010c2bedc0();
    func_0x00010c2bedc0();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    if ((undefined8 *)0x7de < puVar5) {
      puVar18 = (undefined8 *)0x7de;
      do {
        func_0x00010c2278a0(puVar12);
        puVar8 = puVar1;
        func_0x00010bf650e0();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = (undefined8 *)((long)puVar18 + 1);
        func_0x00010c2278a0(puVar7);
        puVar9 = puVar1;
        func_0x00010bf650e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = (undefined8 *)PTR__OBJC_CLASS___NSPredicate_1126b06d0;
        func_0x00010c1063c0();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar10;
        func_0x00010befa120(puVar2);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
      } while (puVar5 != puVar18);
    }
    _objc_retain(puVar6);
    puVar3 = puVar2;
    func_0x00010bf529e0();
    puVar5 = puVar6;
    if (puVar3 != (undefined *)0x0) {
      puVar18 = (undefined8 *)PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
      func_0x00010c0ec900();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar18;
      func_0x00010bf09f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar18);
    }
    _objc_release(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(pppuVar15);
    _objc_release(puVar6);
    _objc_release(puVar1);
    _objc_release(pppuVar15);
    break;
  case (undefined8 *)0x7:
  case (undefined8 *)0x14:
    puVar16 = (undefined8 *)0x0;
    goto code_r0x000108ebf99c;
  case (undefined8 *)0x8:
  case (undefined8 *)0x15:
    puVar16 = (undefined8 *)0x1;
code_r0x000108ebf99c:
    puVar5 = puVar13;
    puVar4 = pppuVar15;
    FUN_108ebfb2c();
    _objc_retainAutoreleasedReturnValue();
    break;
  case (undefined8 *)0xb:
  case (undefined8 *)0x16:
    _objc_retain();
    func_0x000108ebff88();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(pppuVar15);
    func_0x000108ec0548(puVar13);
    goto code_r0x000108ebf5b8;
  case (undefined8 *)0xc:
  case (undefined8 *)0x17:
    _objc_retain();
    func_0x000108ebff88();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(pppuVar15);
    func_0x000108ec05b0(puVar13);
code_r0x000108ebf5b8:
    puVar1 = pppuVar15;
    func_0x00010bf64e40(-(double)((long)puVar12 * 0xe10));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar15);
    puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar11;
    puVar16 = puVar6;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar6);
    _objc_release(puVar11);
    puVar1 = pppuVar15;
    goto code_r0x000108ebfad8;
  case (undefined8 *)0xd:
  case (undefined8 *)0x18:
    puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar19);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar6 = pppuVar15;
    func_0x00010bf64e40(0xc0f5180000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = (undefined8 *)PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    puVar16 = puVar11;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
code_r0x000108ebf984:
    _objc_release(puVar11);
code_r0x000108ebfad8:
    _objc_release(puVar1);
    break;
  case (undefined8 *)0xe:
  case (undefined8 *)0x19:
    func_0x000108ebff88();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64e40(0xc0f5180000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    puVar16 = puVar6;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    goto code_r0x000108ebfad0;
  case (undefined8 *)0x10:
  case (undefined8 *)0x1a:
    puVar1 = puVar13;
    func_0x000108ebfe30();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c0d3c80();
    _objc_release();
    FUN_108ebec30();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bf44640();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar1;
    func_0x00010bf650e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = (undefined8 *)PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar12;
    func_0x00010befa120(puVar5);
    _objc_release(puVar12);
    _objc_release(puVar11);
code_r0x000108ebfad0:
    _objc_release(puVar6);
    goto code_r0x000108ebfad8;
  }
  _objc_release(pppuVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
    ___stack_chk_fail();
    _objc_retain();
    puVar1 = puVar4;
    _objc_retain();
    FUN_108ebec30();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bf44640();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010c2bedc0();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = (undefined *)((long)puVar5 + ((ulong)puVar16 & 0xffffffff));
    if ((undefined *)0x7de < puVar2) {
      puVar19 = (undefined *)0x7de;
      do {
        func_0x00010c2278a0(puVar6);
        puVar5 = puVar1;
        func_0x00010bf650e0();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar5;
        func_0x00010bf64e40(0x40f5180000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
        func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(puVar14);
        _objc_release(puVar16);
        _objc_release(puVar5);
        puVar19 = puVar19 + 1;
      } while (puVar2 != puVar19);
    }
    puVar16 = puVar13;
    func_0x000108ebfe30(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf529e0();
    puVar5 = puVar16;
    if (puVar2 != (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
      func_0x00010c0ec900(PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf09f60(puVar16);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      _objc_release(puVar2);
    }
    _objc_release(puVar3);
    _objc_release(puVar6);
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar13);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108ebf470; end: 108ebfb2b;  */

void FUN_108ebf470(undefined8 param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_2;
  puVar11 = param_3;
  _objc_retain(param_2);
  puVar1 = param_3;
  _objc_retain();
  puVar7 = PTR____NSArray0__struct_11034ab48;
  puVar8 = param_3;
  puVar9 = param_2;
  switch(param_1) {
  case 5:
  case 0x12:
    puVar1 = param_2;
    func_0x000108ebfe30();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64e40(0xc0ac200000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    puVar11 = puVar9;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    break;
  case 6:
  case 0x13:
    puVar1 = param_3;
    _objc_retain();
    FUN_108ebec30();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_2;
    func_0x000108ebfe30();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    puVar9 = param_3;
    func_0x000108ebfdc4();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar1;
    func_0x00010bf44640();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = (undefined *)0x1c;
    puVar2 = puVar1;
    func_0x00010bf44640();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar14;
    func_0x00010c2bedc0();
    func_0x00010c2bedc0();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    if ((undefined *)0x7de < puVar7) {
      puVar13 = (undefined *)0x7de;
      do {
        func_0x00010c2278a0(puVar14);
        puVar4 = puVar1;
        func_0x00010bf650e0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar13 + 1;
        func_0x00010c2278a0(puVar2);
        puVar5 = puVar1;
        func_0x00010bf650e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
        func_0x00010c1063c0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar6;
        func_0x00010befa120(puVar3);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
      } while (puVar7 != puVar13);
    }
    _objc_retain(puVar8);
    puVar13 = puVar3;
    func_0x00010bf529e0();
    puVar7 = puVar8;
    if (puVar13 != (undefined *)0x0) {
      puVar13 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
      func_0x00010c0ec900();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar13;
      func_0x00010bf09f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar13);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar14);
    _objc_release(puVar9);
    _objc_release(param_3);
    _objc_release(puVar8);
    _objc_release(puVar1);
    _objc_release(param_3);
    goto LAB_108ebfadc;
  case 7:
  case 0x14:
    puVar11 = (undefined *)0x0;
    goto code_r0x000108ebf99c;
  case 8:
  case 0x15:
    puVar11 = (undefined *)0x1;
code_r0x000108ebf99c:
    puVar7 = param_2;
    puVar10 = param_3;
    FUN_108ebfb2c();
    _objc_retainAutoreleasedReturnValue();
  default:
    goto LAB_108ebfadc;
  case 0xb:
  case 0x16:
    _objc_retain();
    func_0x000108ebff88();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x000108ec0548(param_2);
    goto code_r0x000108ebf5b8;
  case 0xc:
  case 0x17:
    _objc_retain();
    func_0x000108ebff88();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x000108ec05b0(param_2);
code_r0x000108ebf5b8:
    puVar1 = param_3;
    func_0x00010bf64e40(-(double)((long)puVar9 * 0xe10));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar9 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar8;
    puVar11 = puVar9;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar9);
    _objc_release(puVar8);
    puVar1 = param_3;
    goto code_r0x000108ebfad8;
  case 0xd:
  case 0x18:
    puVar7 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar11);
    _objc_release(puVar7);
    puVar8 = param_3;
    func_0x00010bf64e40(0xc0f5180000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    puVar11 = puVar9;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    break;
  case 0xe:
  case 0x19:
    func_0x000108ebff88();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_3;
    func_0x00010bf64e40(0xc0f5180000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    puVar11 = puVar8;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    goto code_r0x000108ebfad0;
  case 0x10:
  case 0x1a:
    puVar1 = param_2;
    func_0x000108ebfe30();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c0d3c80();
    _objc_release();
    FUN_108ebec30();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010bf44640();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010bf650e0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar14;
    func_0x00010befa120(puVar7);
    _objc_release(puVar14);
    _objc_release(puVar9);
code_r0x000108ebfad0:
    _objc_release(puVar8);
    goto code_r0x000108ebfad8;
  }
  _objc_release(puVar9);
code_r0x000108ebfad8:
  _objc_release(puVar1);
LAB_108ebfadc:
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    _objc_retain();
    puVar1 = puVar10;
    _objc_retain();
    FUN_108ebec30();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010bf44640();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar8;
    func_0x00010c2bedc0();
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    if ((undefined *)0x7de < puVar7 + ((ulong)puVar11 & 0xffffffff)) {
      puVar14 = (undefined *)0x7de;
      do {
        func_0x00010c2278a0(puVar8);
        puVar2 = puVar1;
        func_0x00010bf650e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010bf64e40(0x40f5180000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
        func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar9);
        _objc_release(puVar13);
        _objc_release(puVar3);
        _objc_release(puVar2);
        puVar14 = puVar14 + 1;
      } while (puVar7 + ((ulong)puVar11 & 0xffffffff) != puVar14);
    }
    puVar11 = param_2;
    func_0x000108ebfe30(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar9;
    func_0x00010bf529e0();
    puVar7 = puVar11;
    if (puVar14 != (undefined *)0x0) {
      puVar14 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
      func_0x00010c0ec900(PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf09f60(puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(puVar14);
    }
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar1);
    _objc_release(puVar10);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108ebfb2c; end: 108ebfd17;  */

void FUN_108ebfb2c(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  _objc_retain();
  lVar2 = param_2;
  _objc_retain();
  FUN_108ebec30();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf44640();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2bedc0();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = lVar4 + (param_3 & 0xffffffff);
  if (0x7de < uVar1) {
    uVar10 = 0x7de;
    do {
      func_0x00010c2278a0(lVar3);
      lVar4 = lVar2;
      func_0x00010bf650e0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010bf64e40(0x40f5180000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar5);
      _objc_release(puVar7);
      _objc_release(lVar6);
      _objc_release(lVar4);
      uVar10 = uVar10 + 1;
    } while (uVar1 != uVar10);
  }
  uVar8 = param_1;
  func_0x000108ebfe30(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf529e0();
  uVar9 = uVar8;
  if (puVar7 != (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
    func_0x00010c0ec900(PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09f60(uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(puVar7);
  }
  _objc_release(puVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 108ebfd18; end: 108ebfd3f;  */

undefined ** FUN_108ebfd18(long param_1)

{
  if (param_1 - 1U < 0x1c) {
    return (undefined **)(&PTR_PTR_110ac9c00)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110e84018;
}


