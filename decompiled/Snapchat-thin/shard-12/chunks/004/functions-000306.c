/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10913f1f0; end: 10913f213; -[SCGeoFilter isBitmoji] */

bool FUN_10913f1f0(long param_1)

{
  func_0x00010c280f40();
  return param_1 == -0x77ad9bf7;
}



/* Entry: 10913f214; end: 10913f24b; -[SCGeoFilter mediaFilterSubType] */

undefined8 FUN_10913f214(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf09360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar1 = 3;
  if (param_1 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10913f24c; end: 10913f253; -[SCGeoFilter shouldFlattenImageLayers] */

undefined8 FUN_10913f24c(void)

{
  return 1;
}



/* Entry: 10913f254; end: 10913f283; -[SCGeoFilter unlockableId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10913f254(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112781d50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10913f284; end: 10913f2cf; -[SCGeoFilter editingStateIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10913f284(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd4898);
  return;
}



/* Entry: 10913f2d0; end: 10913f337; -[SCGeoFilter _encodingForAdsBase64:] */

void FUN_10913f2d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c25cfc0(param_3,param_2,&PTR____CFConstantStringClassReference_110dae918,
                      &PTR____CFConstantStringClassReference_110db3638);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10913f338; end: 10913f4a7; -[SCGeoFilter _carouselGlobalScoreListFromCarouselPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10913f338(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_3;
  func_0x00010bf32700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar2);
        }
        uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        puVar4 = PTR_PTR_1126bb810;
        _objc_alloc(PTR_PTR_1126bb810);
        uVar5 = uVar6;
        func_0x00010bf32b00(uVar6);
        func_0x00010bfcd100(uVar6);
        func_0x00010bffcd60(puVar4,param_2,(long)(int)uVar5);
        func_0x00010befa120(puVar1,param_2,puVar4);
        _objc_release(puVar4);
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  return *(undefined **)(param_3 + _DAT_112781d48);
}



/* Entry: 10913f4a8; end: 10913f4b7; -[SCGeoFilter unlockableContexts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f4a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781d48);
}



/* Entry: 10913f4b8; end: 10913f4c7; -[SCGeoFilter expirationDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f4b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781d70);
}



/* Entry: 10913f4c8; end: 10913f4d7; -[SCGeoFilter assetTTL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f4c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781d4c);
}



/* Entry: 10913f4d8; end: 10913f4e7; -[SCGeoFilter eligibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f4d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781d58);
}



/* Entry: 10913f4e8; end: 10913f4f7; -[SCGeoFilter filterId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f4e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781d50);
}



/* Entry: 10913f4f8; end: 10913f507; -[SCGeoFilter venueId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f4f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781d90);
}



/* Entry: 10913f508; end: 10913f517; -[SCGeoFilter displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f508(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781dec);
}



/* Entry: 10913f518; end: 10913f527; -[SCGeoFilter isFromPostCaptureLensExplorer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10913f518(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112781df0);
}



/* Entry: 10913f528; end: 10913f537; -[SCGeoFilter isSnapchatPlusExclusive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10913f528(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112781df8);
}



/* Entry: 10913f538; end: 10913f547; -[SCGeoFilter unlockableContentType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f538(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781d7c);
}



/* Entry: 10913f548; end: 10913f557; -[SCGeoFilter priority] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f548(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781d64);
}



/* Entry: 10913f558; end: 10913f567; -[SCGeoFilter scaleSetting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f558(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781d5c);
}



/* Entry: 10913f568; end: 10913f577; -[SCGeoFilter positionSetting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f568(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781d60);
}



/* Entry: 10913f578; end: 10913f587; -[SCGeoFilter targetingType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f578(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781da0);
}



/* Entry: 10913f588; end: 10913f597; -[SCGeoFilter isSponsored] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10913f588(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112781d74);
}



/* Entry: 10913f598; end: 10913f5a7; -[SCGeoFilter isFrameFilter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10913f598(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112781d54);
}



/* Entry: 10913f5a8; end: 10913f5b7; -[SCGeoFilter isUnifiedCameraObject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10913f5a8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112781df4);
}



/* Entry: 10913f5b8; end: 10913f5c7; -[SCGeoFilter sponsoredSlug] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f5b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781d78);
}



/* Entry: 10913f5c8; end: 10913f5d7; -[SCGeoFilter loadingMetaData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f5c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781da8);
}



/* Entry: 10913f5d8; end: 10913f5e7; -[SCGeoFilter isBelowDrawingLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10913f5d8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112781d94);
}



/* Entry: 10913f5e8; end: 10913f5f7; -[SCGeoFilter isAnimated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10913f5e8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112781d98);
}



/* Entry: 10913f5f8; end: 10913f607; -[SCGeoFilter encryptedGeoData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f5f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781db8);
}



/* Entry: 10913f608; end: 10913f617; -[SCGeoFilter imageURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f608(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781db0);
}



/* Entry: 10913f618; end: 10913f627; -[SCGeoFilter croppedImageURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f618(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781e14);
}



/* Entry: 10913f628; end: 10913f637; -[SCGeoFilter extraImageMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f628(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781de0);
}



/* Entry: 10913f638; end: 10913f647; -[SCGeoFilter imageURLParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f638(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781db4);
}



/* Entry: 10913f648; end: 10913f657; -[SCGeoFilter isPrecached] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10913f648(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112781da4);
}



/* Entry: 10913f658; end: 10913f667; -[SCGeoFilter autoStacking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f658(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781dc0);
}



/* Entry: 10913f668; end: 10913f677; -[SCGeoFilter unlockableAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f668(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781dc4);
}



/* Entry: 10913f678; end: 10913f687; -[SCGeoFilter unlockableCategory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f678(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781dc8);
}



/* Entry: 10913f688; end: 10913f697; -[SCGeoFilter requestId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f688(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781de8);
}



/* Entry: 10913f698; end: 10913f6d7; -[SCGeoFilter setRequestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10913f698(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112781de8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10913f6d8; end: 10913f6e7; -[SCGeoFilter autoRefreshDelayInMilliseconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f6d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781d80);
}



/* Entry: 10913f6e8; end: 10913f6fb; -[SCGeoFilter autoRefreshLabelPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10913f6e8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112781d84);
}



/* Entry: 10913f6fc; end: 10913f70b; -[SCGeoFilter dynamicFilterRefreshHint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f6fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781d88);
}



/* Entry: 10913f70c; end: 10913f71b; -[SCGeoFilter dynamicFilterUpdatingMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f70c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781d8c);
}



/* Entry: 10913f71c; end: 10913f72b; -[SCGeoFilter unlockImageLink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f71c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781e18);
}



/* Entry: 10913f72c; end: 10913f737; -[SCGeoFilter setUnlockImageLink:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10913f72c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10913f738; end: 10913f747; -[SCGeoFilter filterPrompt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f738(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781dac);
}



/* Entry: 10913f748; end: 10913f757; -[SCGeoFilter filterScore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f748(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781d68);
}



/* Entry: 10913f758; end: 10913f767; -[SCGeoFilter carouselGlobalScoreList] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f758(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781d6c);
}



/* Entry: 10913f768; end: 10913f777; -[SCGeoFilter exclusionTags] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f768(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781e04);
}



/* Entry: 10913f778; end: 10913f787; -[SCGeoFilter excludedByTags] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f778(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781e08);
}



/* Entry: 10913f788; end: 10913f797; -[SCGeoFilter scheduleIntervals] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f788(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781e00);
}



/* Entry: 10913f798; end: 10913f7a7; -[SCGeoFilter isMenuFilter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10913f798(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112781dfc);
}



/* Entry: 10913f7a8; end: 10913f7b7; -[SCGeoFilter metaTags] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f7a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781e10);
}



/* Entry: 10913f7b8; end: 10913f7c7; -[SCGeoFilter carouselGroup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f7b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781dd0);
}



/* Entry: 10913f7c8; end: 10913f7d7; -[SCGeoFilter tooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f7c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781dd4);
}



/* Entry: 10913f7d8; end: 10913f7e7; -[SCGeoFilter attachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f7d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781ddc);
}



/* Entry: 10913f7e8; end: 10913f7f7; -[SCGeoFilter unlockableTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f7e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781dbc);
}



/* Entry: 10913f7f8; end: 10913f807; -[SCGeoFilter eligibleForNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10913f7f8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112781e0c);
}



/* Entry: 10913f808; end: 10913f817; -[SCGeoFilter arSegmentation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f808(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781dcc);
}



/* Entry: 10913f818; end: 10913f827; -[SCGeoFilter audio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f818(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781dd8);
}



/* Entry: 10913f828; end: 10913f837; -[SCGeoFilter dynamicContextProperties] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f828(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781d9c);
}



/* Entry: 10913f838; end: 10913f847; -[SCGeoFilter debugInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10913f838(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781de4);
}



/* Entry: 10913f848; end: 10913fa7b; -[SCGeoFilter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10913f848(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112781de4,0);
  _objc_storeStrong(param_1 + _DAT_112781d9c,0);
  _objc_storeStrong(param_1 + _DAT_112781dd8,0);
  _objc_storeStrong(param_1 + _DAT_112781dcc,0);
  _objc_storeStrong(param_1 + _DAT_112781dbc,0);
  _objc_storeStrong(param_1 + _DAT_112781ddc,0);
  _objc_storeStrong(param_1 + _DAT_112781dd4,0);
  _objc_storeStrong(param_1 + _DAT_112781dd0,0);
  _objc_storeStrong(param_1 + _DAT_112781e10,0);
  _objc_storeStrong(param_1 + _DAT_112781e00,0);
  _objc_storeStrong(param_1 + _DAT_112781e08,0);
  _objc_storeStrong(param_1 + _DAT_112781e04,0);
  _objc_storeStrong(param_1 + _DAT_112781d6c,0);
  _objc_storeStrong(param_1 + _DAT_112781d68,0);
  _objc_storeStrong(param_1 + _DAT_112781dac,0);
  _objc_storeStrong(param_1 + _DAT_112781e18,0);
  _objc_storeStrong(param_1 + _DAT_112781d8c,0);
  _objc_storeStrong(param_1 + _DAT_112781d88,0);
  _objc_storeStrong(param_1 + _DAT_112781de8,0);
  _objc_storeStrong(param_1 + _DAT_112781dc8,0);
  _objc_storeStrong(param_1 + _DAT_112781dc4,0);
  _objc_storeStrong(param_1 + _DAT_112781db4,0);
  _objc_storeStrong(param_1 + _DAT_112781de0,0);
  _objc_storeStrong(param_1 + _DAT_112781e14,0);
  _objc_storeStrong(param_1 + _DAT_112781db0,0);
  _objc_storeStrong(param_1 + _DAT_112781db8,0);
  _objc_storeStrong(param_1 + _DAT_112781da8,0);
  _objc_storeStrong(param_1 + _DAT_112781d78,0);
  _objc_storeStrong(param_1 + _DAT_112781dec,0);
  _objc_storeStrong(param_1 + _DAT_112781d90,0);
  _objc_storeStrong(param_1 + _DAT_112781d50,0);
  _objc_storeStrong(param_1 + _DAT_112781d70,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112781d48,0);
  return;
}



/* Entry: 10913fa7c; end: 10913fb57;  */

undefined8 FUN_10913fa7c(int param_1)

{
  if (param_1 - 1U < 8) {
    return *(undefined8 *)(&UNK_10dfb7da8 + (ulong)(param_1 - 1U) * 8);
  }
  return 0;
}



/* Entry: 10913fb58; end: 10913fb5f; +[SCGeoFilterConfiguration shouldApplyAreaCheckToCachedFilters] */

undefined8 FUN_10913fb58(void)

{
  return 1;
}



/* Entry: 10913fb60; end: 10913fb67; +[SCGeoFilterConfiguration minAreaPercentForAreaCheck] */

undefined8 FUN_10913fb60(void)

{
  return 0x4024000000000000;
}



/* Entry: 10913fb68; end: 10913fb6f; +[SCGeoFilterConfiguration shouldOptimizeLocData] */

undefined8 FUN_10913fb68(void)

{
  return 0;
}



/* Entry: 10913fb70; end: 10913fb7b; +[SCGeoFilterConfiguration locDataExpirationTime] */

undefined8 FUN_10913fb70(void)

{
  return 0x4072c00000000000;
}



/* Entry: 10913fb7c; end: 10913fb83; +[SCGeoFilterConfiguration locDataMovementRateLimitSeconds] */

undefined8 FUN_10913fb7c(void)

{
  return 0x403e000000000000;
}



/* Entry: 10913fb84; end: 10913fb8f; +[SCGeoFilterConfiguration locDataMovementMinDistance] */

undefined8 FUN_10913fb84(void)

{
  return 0x407f400000000000;
}



/* Entry: 10913fb90; end: 10913fb97; +[SCGeoFilterConfiguration locDataDebounceTimeMillis] */

undefined8 FUN_10913fb90(void)

{
  return 0;
}



/* Entry: 10913fb98; end: 10913fb9f; +[SCGeoFilterConfiguration locDataAccuracyImprovementRatio] */

undefined8 FUN_10913fb98(void)

{
  return 0x4000000000000000;
}



/* Entry: 10913fba0; end: 10913fcf3; -[SCGeoFilterImage initWithImageData:filterId:displayName:geoFilterLoadingMetaData:scaleSetting:positionSetting:mediaFilterSubType:requestId:] */

undefined1 *
FUN_10913fba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1127007d8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10913fcf4; end: 10913fd9b; -[SCGeoFilterImage isReadyForDisplay] */

ulong FUN_10913fcf4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010bf4e760();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = param_1;
    func_0x00010bf4e760();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c234c20();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010bfaea60();
      _objc_retainAutoreleasedReturnValue();
      if (uVar1 == 0) {
        func_0x00010c23e180(param_1);
      }
      else {
        param_1 = 1;
      }
      _objc_release(uVar1);
      return param_1;
    }
  }
  return 1;
}



/* Entry: 10913fd9c; end: 10913fdbf; -[SCGeoFilterImage copyWithZone:] */

undefined8 FUN_10913fd9c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10913fdc0; end: 10913fdc7; -[SCGeoFilterImage imageData] */

undefined8 FUN_10913fdc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10913fdc8; end: 10913fdcf; -[SCGeoFilterImage filterId] */

undefined8 FUN_10913fdc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10913fdd0; end: 10913fdd7; -[SCGeoFilterImage displayName] */

undefined8 FUN_10913fdd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10913fdd8; end: 10913fddf; -[SCGeoFilterImage scaleSetting] */

undefined8 FUN_10913fdd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10913fde0; end: 10913fde7; -[SCGeoFilterImage positionSetting] */

undefined8 FUN_10913fde0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10913fde8; end: 10913fdef; -[SCGeoFilterImage mediaFilterSubType] */

undefined8 FUN_10913fde8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10913fdf0; end: 10913fdf7; -[SCGeoFilterImage extraImageMetadata] */

undefined8 FUN_10913fdf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10913fdf8; end: 10913fe27; -[SCGeoFilterImage setExtraImageMetadata:] */

void FUN_10913fdf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10913fe28; end: 10913fe2f; -[SCGeoFilterImage croppedImageUrlString] */

undefined8 FUN_10913fe28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10913fe30; end: 10913fe5f; -[SCGeoFilterImage setCroppedImageUrlString:] */

void FUN_10913fe30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10913fe60; end: 10913fe67; -[SCGeoFilterImage requestId] */

undefined8 FUN_10913fe60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10913fe68; end: 10913fe97; -[SCGeoFilterImage setRequestId:] */

void FUN_10913fe68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10913fe98; end: 10913fe9f; -[SCGeoFilterImage loadingMetaData] */

undefined8 FUN_10913fe98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10913fea0; end: 10913fecf; -[SCGeoFilterImage setLoadingMetaData:] */

void FUN_10913fea0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10913fed0; end: 10913fed7; -[SCGeoFilterImage encryptedGeoData] */

undefined8 FUN_10913fed0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10913fed8; end: 10913fedf; -[SCGeoFilterImage setEncryptedGeoData:] */

void FUN_10913fed8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10913fee0; end: 10913fee7; -[SCGeoFilterImage contextFilterInput] */

undefined8 FUN_10913fee0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10913fee8; end: 10913ff17; -[SCGeoFilterImage setContextFilterInput:] */

void FUN_10913fee8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10913ff18; end: 10913ff1f; -[SCGeoFilterImage skipFilteredImageCheck] */

undefined1 FUN_10913ff18(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10913ff20; end: 10913ff27; -[SCGeoFilterImage setSkipFilteredImageCheck:] */

void FUN_10913ff20(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10913ff28; end: 10913ff2f; -[SCGeoFilterImage audioInput] */

undefined8 FUN_10913ff28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10913ff30; end: 10913ff5f; -[SCGeoFilterImage setAudioInput:] */

void FUN_10913ff30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10913ff60; end: 10913ff67; -[SCGeoFilterImage isUnifiedCameraObject] */

undefined1 FUN_10913ff60(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10913ff68; end: 10913ff6f; -[SCGeoFilterImage setIsUnifiedCameraObject:] */

void FUN_10913ff68(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10913ff70; end: 10913ff77; -[SCGeoFilterImage croppedImageData] */

undefined8 FUN_10913ff70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}


