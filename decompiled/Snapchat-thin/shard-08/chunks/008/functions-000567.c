/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1066cb5e4; end: 1066cb683; -[SCLensExplorerBannerSectionViewModel supplementaryModels] */

undefined * FUN_1066cb5e4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bfdfcc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_30 = lVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_30,1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    return (undefined *)0x1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return puVar2;
}



/* Entry: 1066cb684; end: 1066cb68b; -[SCLensExplorerBannerSectionViewModel contentCount] */

undefined8 FUN_1066cb684(void)

{
  return 1;
}



/* Entry: 1066cb68c; end: 1066cb693; -[SCLensExplorerBannerSectionViewModel reuseIdentifierForIndex:] */

void FUN_1066cb68c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13fdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_reuseIdentifier_11262d988);
  return;
}



/* Entry: 1066cb694; end: 1066cb69b; -[SCLensExplorerBannerSectionViewModel sizeForIndex:] */

void FUN_1066cb694(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c084a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_itemSize_1125fecb0);
  return;
}



/* Entry: 1066cb69c; end: 1066cb6a3; -[SCLensExplorerBannerSectionViewModel indexOfItemWithIdentifier:] */

undefined8 FUN_1066cb69c(void)

{
  return 0x7fffffffffffffff;
}



/* Entry: 1066cb6a4; end: 1066cb6a7; -[SCLensExplorerBannerSectionViewModel prefetchItemsForIndexes:] */

void FUN_1066cb6a4(void)

{
  return;
}



/* Entry: 1066cb6a8; end: 1066cb6ab; -[SCLensExplorerBannerSectionViewModel cancelPrefetchingForItemsAtIndexes:] */

void FUN_1066cb6a8(void)

{
  return;
}



/* Entry: 1066cb6ac; end: 1066cb6b3; -[SCLensExplorerBannerSectionViewModel configureCell:index:] */

void FUN_1066cb6ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf46d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_configureCollectionViewCell__1125af508);
  return;
}



/* Entry: 1066cb6b4; end: 1066cb6b7; -[SCLensExplorerBannerSectionViewModel willAppearCell:index:] */

void FUN_1066cb6b4(void)

{
  return;
}



/* Entry: 1066cb6b8; end: 1066cb6bb; -[SCLensExplorerBannerSectionViewModel didDisappearCell:index:clearMedia:] */

void FUN_1066cb6b8(void)

{
  return;
}



/* Entry: 1066cb6bc; end: 1066cb6c3; -[SCLensExplorerBannerSectionViewModel configureSupplementaryView:kind:] */

void FUN_1066cb6bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf47050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_configureHeader_viewKind__1125af5b8);
  return;
}



/* Entry: 1066cb6c4; end: 1066cb717; -[SCLensExplorerBannerSectionViewModel warmup] */

void FUN_1066cb6c4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010bf4c160();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar1 == 0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1066cb718; end: 1066cb71b; -[SCLensExplorerBannerSectionViewModel clearMemoryCache] */

void FUN_1066cb718(void)

{
  return;
}



/* Entry: 1066cb71c; end: 1066cb71f; -[SCLensExplorerBannerSectionViewModel cancelAllDownloads] */

void FUN_1066cb71c(void)

{
  return;
}



/* Entry: 1066cb720; end: 1066cb727; -[SCLensExplorerBannerSectionViewModel hasMoreItems] */

undefined8 FUN_1066cb720(void)

{
  return 0;
}



/* Entry: 1066cb728; end: 1066cb72f; -[SCLensExplorerBannerSectionViewModel diffIdentifier] */

void FUN_1066cb728(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c155f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_sectionIdentifier_1126331f8);
  return;
}



/* Entry: 1066cb730; end: 1066cb737; -[SCLensExplorerBannerSectionViewModel isEmptyObservable] */

undefined8 FUN_1066cb730(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1066cb738; end: 1066cb797; -[SCLensExplorerBannerSectionViewModel .cxx_destruct] */

void FUN_1066cb738(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066cb798; end: 1066cb863; -[SCLensExplorerHidingBannerSectionViewModel initWithSectionConfiguration:sectionLayoutConfiguration:sectionHeaderProvider:cellManager:visibilityObsevable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1066cb798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f2788;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithSectionConfiguration_sec_1125317e0,param_3,param_4,
                      param_5,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274e12c) = 0;
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274e130);
    *(undefined **)((long)puVar1 + (long)_DAT_11274e130) = puVar2;
    _objc_release(uVar3);
    func_0x00010bec7020(puVar1);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 1066cb864; end: 1066cb98f; -[SCLensExplorerHidingBannerSectionViewModel _subscribeOnVisibilityObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066cb864(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = auStack_48;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274e134);
  *(undefined8 *)(param_1 + _DAT_11274e134) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1066cb990; end: 1066cb9ef;  */

void FUN_1066cb990(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010bee4060(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066cb9f0; end: 1066cba4f; -[SCLensExplorerHidingBannerSectionViewModel _updateVisibility:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066cb9f0(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(ulong *)(param_1 + _DAT_11274e12c) = (ulong)param_3;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274e130);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3 ^ 1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066cba50; end: 1066cba5f; -[SCLensExplorerHidingBannerSectionViewModel contentCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066cba50(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274e12c);
}



/* Entry: 1066cba60; end: 1066cba6f; -[SCLensExplorerHidingBannerSectionViewModel isEmptyObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066cba60(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274e130);
}



/* Entry: 1066cba70; end: 1066cbaaf; -[SCLensExplorerHidingBannerSectionViewModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066cba70(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274e134,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274e130,0);
  return;
}



/* Entry: 1066cbab0; end: 1066cbab7; -[SCLensExplorerNullBannerProvider availableBannerForSectionId:] */

undefined8 FUN_1066cbab0(void)

{
  return 0;
}



/* Entry: 1066cbab8; end: 1066cbb13; -[SCLensExplorerNullBannerProvider bannerForFeedId:] */

void FUN_1066cbab8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae6b8;
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066cbb14; end: 1066cbc1f; -[SCLensExplorerPluginBannerProvider initWithPlugInsFuture:] */

undefined8 * FUN_1066cbb14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f2790;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)(puVar1 + 3) = 0;
    _objc_initWeak(auStack_48,puVar1);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c297260(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1066cbc20; end: 1066cbc6f;  */

void FUN_1066cbc20(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be2e380(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066cbc70; end: 1066cbd4b; -[SCLensExplorerPluginBannerProvider availableBannerForSectionId:] */

void FUN_1066cbc70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1066cbd4c;
  puStack_40 = &UNK_1109349e8;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010bfb2040(uVar2,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf15980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _os_unfair_lock_unlock(param_1 + 0x18);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066cbd4c; end: 1066cbd93;  */

undefined8 FUN_1066cbd4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf159c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1066cbd94; end: 1066cbe9f; -[SCLensExplorerPluginBannerProvider bannerForFeedId:] */

void FUN_1066cbd94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  puVar2 = PTR_PTR_1126ae6b8;
  if (*(long *)(param_1 + 8) == 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126ae820;
      _objc_opt_new(PTR_PTR_1126ae820);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,puVar2,param_3);
    }
    else {
      puVar2 = *(undefined **)(param_1 + 0x10);
      func_0x00010c0e00e0(puVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    lVar1 = param_1;
    func_0x00010be6e1c0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _os_unfair_lock_unlock(param_1 + 0x18);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066cbea0; end: 1066cbeef; -[SCLensExplorerPluginBannerProvider _optionalBannerModelForFeedId:] */

void FUN_1066cbea0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010bdd2960();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c0ec800(PTR_PTR_1126ae750,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066cbef0; end: 1066cbfaf; -[SCLensExplorerPluginBannerProvider _bannerModelForFeedId:] */

void FUN_1066cbef0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _os_unfair_lock_assert_owner(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1066cbfb0;
  puStack_40 = &UNK_1109349e8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bfb2040(uVar2,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf15980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066cbfb0; end: 1066cbfbb;  */

void FUN_1066cbfb0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2d270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_canProvideBannerForFeedId__1125a8e40,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1066cbfbc; end: 1066cc18f; -[SCLensExplorerPluginBannerProvider _handlePlugIns:] */

void FUN_1066cbfbc(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
  _objc_retain(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar3);
  lVar4 = *(long *)(param_1 + 0x10);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar4);
      }
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c0e00e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010be6e1c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar3);
      _objc_release(lVar6);
      func_0x00010bf436e0(uVar3);
      _objc_release(uVar3);
      lVar8 = lVar8 + 1;
    } while (lVar5 != lVar8);
    lVar5 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
  _os_unfair_lock_unlock(param_1 + 0x18);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x18);
  __Unwind_Resume(param_3);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1066cc190; end: 1066cc1bf; -[SCLensExplorerPluginBannerProvider .cxx_destruct] */

void FUN_1066cc190(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066cc1c0; end: 1066cc263; -[SCLensExplorerCellLogger initWithImpressionLogger:mrcImpressionLogger:] */

undefined1 *
FUN_1066cc1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2798;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066cc264; end: 1066cc36b; -[SCLensExplorerCellLogger willAppearCellWithModelObject:index:impressionSet:] */

void FUN_1066cc264(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a55b8);
  lVar1 = param_3;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  if (lVar1 == 0) goto LAB_1066cc348;
  lVar2 = param_3;
  func_0x00010c0b3ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ccc28;
  lVar4 = param_3;
  func_0x00010c0b3ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd000(lVar2);
  func_0x00010c0b3a00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  if (param_5 == 0) {
    lVar4 = 8;
LAB_1066cc32c:
    func_0x00010c2a58a0(*(undefined8 *)(param_1 + lVar4));
  }
  else if (param_5 == 1) {
    lVar4 = 0x10;
    goto LAB_1066cc32c;
  }
  _objc_release(puVar3);
  _objc_release(lVar2);
LAB_1066cc348:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066cc36c; end: 1066cc473; -[SCLensExplorerCellLogger didDisappearCellWithModelObject:index:impressionSet:] */

void FUN_1066cc36c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a55b8);
  lVar1 = param_3;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  if (lVar1 == 0) goto LAB_1066cc450;
  lVar2 = param_3;
  func_0x00010c0b3ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ccc28;
  lVar4 = param_3;
  func_0x00010c0b3ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd000(lVar2);
  func_0x00010c0b3a00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  if (param_5 == 0) {
    lVar4 = 8;
LAB_1066cc434:
    func_0x00010bf74a80(*(undefined8 *)(param_1 + lVar4));
  }
  else if (param_5 == 1) {
    lVar4 = 0x10;
    goto LAB_1066cc434;
  }
  _objc_release(puVar3);
  _objc_release(lVar2);
LAB_1066cc450:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066cc474; end: 1066cc4e7; -[SCLensExplorerCellLogger cellModelObject:] */

void FUN_1066cc474(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a4fe8);
  uVar1 = param_3;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar2 = uVar1;
  func_0x00010c29d560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1066cc4e8; end: 1066cc5e3; -[SCLensExplorerCellLogger cellModelObject:isEqual:] */

undefined8
FUN_1066cc4e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a55b8);
  uVar4 = param_3;
  if ((int)uVar2 == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  puVar1 = PTR_DAT_1126a55b8;
  _objc_retain(param_4);
  uVar3 = param_4;
  func_0x00010010fab4(param_4,puVar1);
  uVar2 = param_4;
  if ((int)uVar3 == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(param_4);
  uVar3 = uVar4;
  func_0x00010c0b3ac0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar2;
  func_0x00010c0b3ac0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010c0720c0(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1066cc5e4; end: 1066cc613; -[SCLensExplorerCellLogger .cxx_destruct] */

void FUN_1066cc5e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066cc614; end: 1066cc77f; -[SCLensExplorerDynamicCategoryPageLoggerCollegue initWithLoggerProvider:categoryId:sectionConfigurations:isFullPage:isLensCollectionCategoryPage:] */

undefined1 *
FUN_1066cc614(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f27a0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x20) = param_6;
    *(undefined1 *)((long)puVar1 + 0x21) = param_7;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x48) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x24) = 0;
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    func_0x00010bec8340(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066cc780; end: 1066cc977; -[SCLensExplorerDynamicCategoryPageLoggerCollegue cellLoggerForSectionIdentifier:] */

void FUN_1066cc780(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x24);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1066cc978;
  puStack_60 = &UNK_110934a18;
  _objc_retain(param_3);
  uStack_58 = param_3;
  func_0x00010bfb2040(uVar6,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0b39a0(param_1,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126cd018;
    _objc_opt_new(PTR_PTR_1126cd018);
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x38);
    func_0x00010c0e00e0(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      uVar3 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f30bd8);
      if (((uVar3 & 1) == 0) &&
         (uVar3 = param_3,
         func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f30bf8),
         (int)uVar3 == 0)) {
        uVar4 = *(undefined8 *)(param_1 + 8);
        func_0x00010c093060(uVar4,param_2,lVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + 8);
        func_0x00010c0d1a40(uVar5,param_2,lVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126cd020;
        _objc_alloc(PTR_PTR_1126cd020);
        func_0x00010c01d440();
        _objc_release(uVar5);
        _objc_release(uVar4);
      }
      else {
        puVar2 = PTR_PTR_1126cd018;
        _objc_opt_new(PTR_PTR_1126cd018);
      }
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x38),param_2,puVar2,lVar1);
    }
    _objc_retain(puVar2);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(uVar6);
  _objc_release(uStack_58);
  _os_unfair_lock_unlock(param_1 + 0x24);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066cc978; end: 1066cc9bf;  */

undefined8 FUN_1066cc978(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c155f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1066cc9c0; end: 1066ccab7; -[SCLensExplorerDynamicCategoryPageLoggerCollegue pageWillAppear] */

void FUN_1066cc9c0(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_158;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010c0f1820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar11 = *plStack_100;
    do {
      lVar12 = 0;
      do {
        if (*plStack_100 != lVar11) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0abc60(*(undefined8 *)(lStack_108 + lVar12 * 8));
        lVar12 = lVar12 + 1;
      } while (lVar3 != lVar12);
      lVar3 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar9 = &uStack_220;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  func_0x00010c0f1820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar11 = *plStack_210;
    do {
      lVar12 = 0;
      do {
        if (*plStack_210 != lVar11) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0abb80(*(undefined8 *)(lStack_218 + lVar12 * 8));
        lVar12 = lVar12 + 1;
      } while (lVar3 != lVar12);
      lVar3 = param_1;
      puVar9 = &uStack_220;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  puVar4 = (undefined1 *)puVar9;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0b3ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar4);
  if (puVar5 == (undefined1 *)0x0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126cd028;
    _objc_alloc(PTR_PTR_1126cd028);
    puVar4 = (undefined1 *)puVar9;
    func_0x00010c0b3ae0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0b3ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0x10);
    puVar6 = (undefined1 *)puVar9;
    func_0x00010c130180(puVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined1 *)(param_1 + 0x20);
    uVar2 = *(undefined1 *)(param_1 + 0x21);
    puVar7 = (undefined1 *)puVar9;
    func_0x00010c0b3ae0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c156400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0431c0(puVar10,param_2,puVar5,uVar13,puVar6,uVar1,uVar2,puVar8);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1066ccab8; end: 1066ccbab; -[SCLensExplorerDynamicCategoryPageLoggerCollegue pageWillDisappear] */

void FUN_1066ccab8(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar9 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010c0f1820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar11 = *plStack_100;
    do {
      lVar12 = 0;
      do {
        if (*plStack_100 != lVar11) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0abb80(*(undefined8 *)(lStack_108 + lVar12 * 8));
        lVar12 = lVar12 + 1;
      } while (lVar3 != lVar12);
      lVar3 = param_1;
      puVar9 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  puVar4 = (undefined1 *)puVar9;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0b3ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar4);
  if (puVar5 == (undefined1 *)0x0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126cd028;
    _objc_alloc(PTR_PTR_1126cd028);
    puVar4 = (undefined1 *)puVar9;
    func_0x00010c0b3ae0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0b3ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0x10);
    puVar6 = (undefined1 *)puVar9;
    func_0x00010c130180(puVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined1 *)(param_1 + 0x20);
    uVar2 = *(undefined1 *)(param_1 + 0x21);
    puVar7 = (undefined1 *)puVar9;
    func_0x00010c0b3ae0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c156400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0431c0(puVar10,param_2,puVar5,uVar13,puVar6,uVar1,uVar2,puVar8);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1066ccbac; end: 1066cccff; -[SCLensExplorerDynamicCategoryPageLoggerCollegue loggingConfigurationForSectionConfiguration:] */

void FUN_1066ccbac(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0b3ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar4 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126cd028;
    _objc_alloc(PTR_PTR_1126cd028);
    lVar3 = param_3;
    func_0x00010c0b3ae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0b3ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    lVar5 = param_3;
    func_0x00010c130180(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined1 *)(param_1 + 0x20);
    uVar2 = *(undefined1 *)(param_1 + 0x21);
    lVar6 = param_3;
    func_0x00010c0b3ae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c156400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0431c0(puVar8,param_2,lVar4,uVar9,lVar5,uVar1,uVar2,lVar7);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1066ccd00; end: 1066ccddb; -[SCLensExplorerDynamicCategoryPageLoggerCollegue _subscribeToSections:] */

void FUN_1066ccd00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1066ccddc; end: 1066cce23;  */

void FUN_1066ccddc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed5a00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066cce24; end: 1066cce5f; -[SCLensExplorerDynamicCategoryPageLoggerCollegue _avalibleSectionConfigurations] */

void FUN_1066cce24(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x24);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x24);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066cce60; end: 1066cd09f; -[SCLensExplorerDynamicCategoryPageLoggerCollegue _updateConfigurations:] */

long FUN_1066cce60(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x24);
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar3 = *(long *)(param_1 + 0x28);
      func_0x00010bfb2040();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
      }
      lVar4 = param_1;
      func_0x00010c0b39a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(param_1 + 0x40);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar5 == 0) {
        uVar6 = *(undefined8 *)(param_1 + 8);
        func_0x00010c0933a0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40));
        if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
          func_0x00010c0abc60(uVar6);
        }
        _objc_release(uVar6);
      }
      _objc_release(lVar4);
      _objc_release(lVar3);
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _os_unfair_lock_unlock(param_1 + 0x24);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return param_3;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x24);
  __Unwind_Resume();
  func_0x00010c155f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c155f60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar6);
  _objc_release(param_2);
  return lVar2;
}



/* Entry: 1066cd0a0; end: 1066cd10f;  */

undefined8 FUN_1066cd0a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c155f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c155f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 1066cd110; end: 1066cd167; -[SCLensExplorerDynamicCategoryPageLoggerCollegue pageLoggers] */

void FUN_1066cd110(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x24);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf00d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x24);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066cd168; end: 1066cd1d3; -[SCLensExplorerDynamicCategoryPageLoggerCollegue .cxx_destruct] */

void FUN_1066cd168(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066cd1d4; end: 1066cd2fb; +[SCLensExplorerLoggingData loggingDataFromLogging:identifier:index:] */

void FUN_1066cd1d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126ccc28;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c11fc00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c11fc20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c084c40(param_3);
  uVar6 = param_3;
  func_0x00010bf4ae20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c020140(puVar1,param_2,param_5,param_4,uVar2,uVar3,uVar4,uVar5,uVar6);
  _objc_release(param_4);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066cd2fc; end: 1066cd303; -[SCLensExplorerNullCellLogger cellModelObject:] */

undefined8 FUN_1066cd2fc(void)

{
  return 0;
}



/* Entry: 1066cd304; end: 1066cd30b; -[SCLensExplorerNullCellLogger cellModelObject:isEqual:] */

undefined8 FUN_1066cd304(void)

{
  return 0;
}



/* Entry: 1066cd30c; end: 1066cd30f; -[SCLensExplorerNullCellLogger didDisappearCellWithModelObject:index:impressionSet:] */

void FUN_1066cd30c(void)

{
  return;
}



/* Entry: 1066cd310; end: 1066cd313; -[SCLensExplorerNullCellLogger willAppearCellWithModelObject:index:impressionSet:] */

void FUN_1066cd310(void)

{
  return;
}



/* Entry: 1066cd314; end: 1066cd3ef; -[SCLensExplorerCreatorViewModelProvider initWithPreviewFetcher:renderStrategy:avatarProvider:styleOverride:] */

undefined1 *
FUN_1066cd314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f27a8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066cd3f0; end: 1066cd61f; -[SCLensExplorerCreatorViewModelProvider viewModelWithCreatorItem:index:sectionIndex:isTextRightToLeftDirection:] */

void FUN_1066cd3f0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  char *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3010000000;
  pcStack_78 = "";
  puVar1 = PTR_PTR_1126cc910;
  func_0x00010bfa3860(PTR_PTR_1126cc910);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5b260();
  uStack_70 = param_1;
  uStack_68 = param_2;
  _objc_release(puVar1);
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3010000000;
  pcStack_a8 = "";
  puVar1 = PTR_PTR_1126cc910;
  func_0x00010bfa3860(PTR_PTR_1126cc910);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5b240();
  uStack_a0 = param_1;
  uStack_98 = param_2;
  _objc_release(puVar1);
  puStack_d8 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x2020000000;
  uStack_c8 = 3;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c0ed100(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be340();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126cce58;
  func_0x00010bf34280(puStack_b8[4],puStack_b8[5],puStack_88[4],puStack_88[5],PTR_PTR_1126cce58);
  _objc_retainAutoreleasedReturnValue();
  __Block_object_dispose(&uStack_e0,8);
  __Block_object_dispose(&uStack_c0,8);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066cd620; end: 1066cd73f;  */

void FUN_1066cd620(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126cc910;
  func_0x00010bfa3860(PTR_PTR_1126cc910);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43220();
  lVar2 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126cc910;
  func_0x00010bfa3860(PTR_PTR_1126cc910);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43200();
  lVar2 = *(long *)(*(long *)(param_3 + 0x28) + 8);
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(puVar1);
  *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x30) + 8) + 0x18) = 2;
  return;
}



/* Entry: 1066cd740; end: 1066cd84b; -[SCLensExplorerCreatorViewModelProvider viewModelObservableFromViewModel:] */

void FUN_1066cd740(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bfa96a0(uVar4,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c14f680();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = param_3;
  func_0x00010bf5b4e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf13320(uVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf41860(uVar1,param_2,uVar3,&PTR___NSConcreteGlobalBlock_110934ad8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c2519e0(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066cd84c; end: 1066cd873;  */

void FUN_1066cd84c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf34390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126cce58,PTR_s_cellViewModelWithViewModel_previ_1125aaa88,param_2,param_3);
  return;
}



/* Entry: 1066cd874; end: 1066cd87b; -[SCLensExplorerCreatorViewModelProvider prefetchForViewModel:] */

void FUN_1066cd874(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c107c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_prefetchPreviewsForCreatorViewMo_11261f930);
  return;
}



/* Entry: 1066cd87c; end: 1066cd883; -[SCLensExplorerCreatorViewModelProvider cancelPrefetchingForViewModel:] */

void FUN_1066cd87c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2eab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cancelPrefetchPreviewsForCreator_1125a9450);
  return;
}



/* Entry: 1066cd884; end: 1066cd8bf; -[SCLensExplorerCreatorViewModelProvider .cxx_destruct] */

void FUN_1066cd884(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066cd8c0; end: 1066cd9db; -[SCLensExplorerHeroViewModelProvider initWithImagesDataStore:lensPerformerProvider:renderStrategy:itemSpacing:] */

undefined1 *
FUN_1066cd8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f27b0;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1066cd9dc; end: 1066cd9e3; -[SCLensExplorerHeroViewModelProvider prefetchForViewModel:] */

void FUN_1066cd9dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be132f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__fetchPreviewForViewModel_observ_112562658,param_3,0);
  return;
}



/* Entry: 1066cd9e4; end: 1066cda8b; -[SCLensExplorerHeroViewModelProvider cancelPrefetchingForViewModel:] */

void FUN_1066cd9e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010c107840(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e8c0(uVar3,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066cda8c; end: 1066cda93;  */

void FUN_1066cda8c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010beec830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_absoluteString_112598bb0);
  return;
}



/* Entry: 1066cda94; end: 1066cdba7; -[SCLensExplorerHeroViewModelProvider viewModelObservableFromViewModel:previewAttributesObservable:] */

void FUN_1066cda94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066cdba8; end: 1066cdcd7;  */

void FUN_1066cdba8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  func_0x00010c0d9840(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be66ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b0418;
  _objc_retain(lVar2);
  _objc_copyWeak(auStack_48,param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  func_0x00010bf54280(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_48);
  _objc_release(lVar2);
  _objc_release(lVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066cdcd8; end: 1066cdd13;  */

void FUN_1066cdcd8(long param_1)

{
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x20));
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf2eb00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066cdd14; end: 1066cddd7; -[SCLensExplorerHeroViewModelProvider viewModelWithHeroItem:layoutContainerAttributes:index:sectionIndex:isFirstInSection:isLastInSection:] */

void FUN_1066cdd14(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_4);
    lVar1 = param_1;
    func_0x00010bee52e0(param_1,param_2,param_3,param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126cce88;
    func_0x00010bf342a0(*(undefined8 *)(param_1 + 0x20),PTR_PTR_1126cce88,param_2,lVar1,param_4,
                        param_7,param_8,*(undefined8 *)(param_1 + 0x18));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066cddd8; end: 1066cdef3; -[SCLensExplorerHeroViewModelProvider _updatedHeroItem:index:sectionIndex:] */

void FUN_1066cddd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126cce78;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0b3ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0932c0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c2afc20(puVar2,param_2,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7e60(puVar2,param_2,param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cd030;
  func_0x00010c092f60(PTR_PTR_1126cd030,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b3180(puVar3,param_2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066cdef4; end: 1066ce03f; -[SCLensExplorerHeroViewModelProvider _observePreviewAttributes:viewModel:viewModelObserver:] */

void FUN_1066cdef4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  _objc_initWeak(auStack_50,param_5);
  _objc_copyWeak(auStack_60,auStack_50);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066ce040; end: 1066ce0af;  */

void FUN_1066ce040(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010be11cc0();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066ce0b0; end: 1066ce25f; -[SCLensExplorerHeroViewModelProvider _fetchImagesFromViewModel:withElementAttributes:observer:] */

void FUN_1066ce0b0(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar9;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_138 = param_5;
  _objc_retain(param_5);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_4;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_4);
        }
        unaff_x24 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        lVar2 = param_3;
        func_0x00010bfe0f00(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c08cda0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf8d1c0(unaff_x24);
        lVar4 = param_1;
        func_0x00010be07340(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        _objc_release(lVar2);
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
        _objc_release(lVar4);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = param_4;
      func_0x00010bf52a60();
      unaff_x23 = 0;
    } while (lVar1 != 0);
  }
  uVar6 = uStack_138;
  lVar9 = param_3;
  uVar7 = uStack_138;
  func_0x00010be132e0(param_1);
  _objc_release(uVar6);
  _objc_release(param_4);
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uStack_168 = uVar6;
  pcStack_148 = FUN_1066ce260;
  uStack_180 = unaff_x24;
  uStack_178 = unaff_x23;
  lStack_170 = param_1;
  lStack_160 = param_4;
  lStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(lVar9);
  _objc_retain(uVar7);
  _objc_initWeak(auStack_188,uVar7);
  lVar8 = lVar1;
  func_0x00010be11ca0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_190,auStack_188);
  uVar5 = *(undefined8 *)(lVar1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0b6bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(lVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar8);
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_188);
  _objc_release(uVar7);
  _objc_release(lVar9);
  return;
}



/* Entry: 1066ce260; end: 1066ce39b; -[SCLensExplorerHeroViewModelProvider _fetchPreviewForViewModel:observer:] */

void FUN_1066ce260(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_4);
  lVar1 = param_1;
  func_0x00010be11ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b6bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(lVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066ce39c; end: 1066ce3eb;  */

void FUN_1066ce39c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0d9840(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066ce3ec; end: 1066ce597; -[SCLensExplorerHeroViewModelProvider _fetchImagesFromViewModel:] */

void FUN_1066ce3ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c107840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bfe0f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf8d2a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1066ce598;
  puStack_70 = &UNK_110934ba8;
  _objc_retain(param_3);
  lStack_68 = param_3;
  uStack_60 = param_1;
  _objc_retain(lVar1);
  lVar4 = lVar3;
  lStack_58 = lVar1;
  func_0x00010bf43280(lVar3,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar4;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    puVar6 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = PTR_PTR_1126ae558;
    func_0x00010beffb40(PTR_PTR_1126ae558,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = puVar6;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x1066ce8f8;
    puStack_98 = &UNK_110934c18;
    _objc_retain(param_3);
    puVar6 = puVar5;
    lStack_90 = param_3;
    func_0x00010c0b8600(puVar5,param_2,&puStack_b0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_90);
    _objc_release(puVar5);
  }
  _objc_release(lVar4);
  _objc_release(lStack_58);
  _objc_release(lStack_68);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1066ce598; end: 1066ce84b;  */

void FUN_1066ce598(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfab820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf8d1c0(param_2);
  func_0x00010c0df780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126b60f8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar7 = PTR_PTR_1126ae558;
  if (lVar3 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = *(undefined **)(param_1 + 0x28);
    func_0x00010bfe0f00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c08cda0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8d1c0(param_2);
    func_0x00010be07340(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x30);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar1 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      lVar8 = *(long *)(param_1 + 0x30);
      func_0x00010bf8d1c0(param_2);
      func_0x00010c0df780(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      if (lVar8 == 0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar6 = *(undefined **)(*(long *)(param_1 + 0x28) + 0x10);
        func_0x00010c23d0a0(lVar1);
        func_0x00010c093000(puVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_2);
        puVar7 = puVar6;
        func_0x00010c0b8600(puVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_2);
        _objc_release(puVar6);
      }
      _objc_release(lVar8);
    }
    _objc_release(lVar1);
  }
  else {
    func_0x00010bf8d1c0(param_2);
    func_0x00010c0df780(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2b40(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9ca0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1066ce84c; end: 1066cea5f;  */

void FUN_1066ce84c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126b60f8;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf8d1c0(uVar3);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0f2b40(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066cea60; end: 1066cea8f; -[SCLensExplorerHeroViewModelProvider _elementKeyFromLayoutId:elementId:] */

void FUN_1066cea60(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110ddd4f8);
  return;
}



/* Entry: 1066cea90; end: 1066ceae3; -[SCLensExplorerHeroViewModelProvider .cxx_destruct] */

void FUN_1066cea90(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066ceae4; end: 1066ceb6b; +[SCLensExplorerLensItemAttributionResources attributionIconURLForAtrribution:scale:] */

void FUN_1066ceae4(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  
  if (param_4 == 2) {
    if (2.0 < param_1) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e596b8;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e596d8;
    }
  }
  else {
    if (param_4 != 1) goto LAB_1066ceb64;
    if (2.0 < param_1) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e59678;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e59698;
    }
  }
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_3,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_1066ceb64:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066ceb6c; end: 1066cec9f; -[SCLensExplorerLensViewModelProvider initWithImagesDataStore:lensPerformerProvider:lazyDailyGameBadgeProvider:selectionTracker:styleOverride:] */

undefined1 *
FUN_1066ceb6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f27b8;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    _objc_release(puVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1066ceca0; end: 1066cecb3; -[SCLensExplorerLensViewModelProvider viewModelWithLensItem:configuration:index:sectionIndex:isTextRightToLeftDirection:] */

void FUN_1066ceca0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf342d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ccc18,PTR_s_cellViewModelWithLensExplorerIte_1125aaa58);
  return;
}



/* Entry: 1066cecb4; end: 1066cef43; -[SCLensExplorerLensViewModelProvider viewModelObservableFromViewModel:] */

void FUN_1066cecb4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_1c0 [8];
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar7 = param_3;
  func_0x00010c094be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_retain(param_3);
  puVar8 = auStack_80;
  _objc_copyWeak(auStack_88,puVar8);
  _objc_retain(lVar7);
  func_0x00010bf54280();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c159960();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar2;
  puStack_70 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 != 0) {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf632e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar6;
    func_0x00010c0e0e80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4);
    _objc_release(lVar5);
    _objc_release(puVar3);
    _objc_release(lVar6);
  }
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(lVar7);
  _objc_destroyWeak(auStack_88);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  _objc_retain(puVar8);
  func_0x00010c0d9840(puVar8);
  _objc_initWeak(auStack_128,puVar8);
  lVar7 = *(long *)(param_3 + 0x20);
  func_0x00010bf341e0();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar7 < 3) {
    if (lVar7 == 1) {
LAB_1066cf034:
      lVar7 = param_3 + 0x30;
      _objc_loadWeakRetained(lVar7);
      puStack_188 = puVar4;
      uStack_180 = 0xc2000000;
      pcStack_178 = FUN_1066cf36c;
      puStack_170 = &UNK_110934c48;
      puVar9 = auStack_168;
      _objc_copyWeak(puVar9,auStack_128);
      puVar10 = auStack_160;
      _objc_copyWeak(puVar10,param_3 + 0x30);
      func_0x00010be14ea0(lVar7);
      goto LAB_1066cf108;
    }
    if (lVar7 == 2) {
      lVar7 = param_3 + 0x30;
      _objc_loadWeakRetained(lVar7);
      puStack_158 = puVar4;
      uStack_150 = 0xc2000000;
      pcStack_148 = FUN_1066cf204;
      puStack_140 = &UNK_110934c48;
      puVar9 = auStack_138;
      _objc_copyWeak(puVar9,auStack_128);
      puVar10 = auStack_130;
      _objc_copyWeak(puVar10,param_3 + 0x30);
      func_0x00010be11a00(lVar7);
      goto LAB_1066cf108;
    }
  }
  else {
    if (lVar7 != 3) {
      if (lVar7 != 4) goto LAB_1066cf120;
      goto LAB_1066cf034;
    }
    lVar7 = param_3 + 0x30;
    _objc_loadWeakRetained(lVar7);
    puStack_1b8 = puVar4;
    uStack_1b0 = 0xc2000000;
    uStack_1a8 = 0x1066cf4d4;
    puStack_1a0 = &UNK_110934c48;
    puVar9 = auStack_198;
    _objc_copyWeak(puVar9,auStack_128);
    puVar10 = auStack_190;
    _objc_copyWeak(puVar10,param_3 + 0x30);
    func_0x00010be11a00(lVar7);
LAB_1066cf108:
    _objc_release(lVar7);
    _objc_destroyWeak(puVar10);
    _objc_destroyWeak(puVar9);
  }
LAB_1066cf120:
  puVar3 = PTR_PTR_1126b0418;
  _objc_copyWeak(auStack_1c0,param_3 + 0x30);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  _objc_retain(uVar2);
  func_0x00010bf54280(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_1c0);
  _objc_destroyWeak(auStack_128);
  _objc_release(puVar8);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066cef44; end: 1066cf203;  */

void FUN_1066cef44(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  func_0x00010c0d9840(param_2);
  _objc_initWeak(auStack_68,param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf341e0();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar1 < 3) {
    if (lVar1 == 1) {
LAB_1066cf034:
      lVar1 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar1);
      puStack_c8 = puVar2;
      uStack_c0 = 0xc2000000;
      pcStack_b8 = FUN_1066cf36c;
      puStack_b0 = &UNK_110934c48;
      puVar4 = auStack_a8;
      _objc_copyWeak(puVar4,auStack_68);
      puVar5 = auStack_a0;
      _objc_copyWeak(puVar5,param_1 + 0x30);
      func_0x00010be14ea0(lVar1);
    }
    else {
      if (lVar1 != 2) goto LAB_1066cf120;
      lVar1 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar1);
      puStack_98 = puVar2;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_1066cf204;
      puStack_80 = &UNK_110934c48;
      puVar4 = auStack_78;
      _objc_copyWeak(puVar4,auStack_68);
      puVar5 = auStack_70;
      _objc_copyWeak(puVar5,param_1 + 0x30);
      func_0x00010be11a00(lVar1);
    }
  }
  else {
    if (lVar1 != 3) {
      if (lVar1 != 4) goto LAB_1066cf120;
      goto LAB_1066cf034;
    }
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    puStack_f8 = puVar2;
    uStack_f0 = 0xc2000000;
    uStack_e8 = 0x1066cf4d4;
    puStack_e0 = &UNK_110934c48;
    puVar4 = auStack_d8;
    _objc_copyWeak(puVar4,auStack_68);
    puVar5 = auStack_d0;
    _objc_copyWeak(puVar5,param_1 + 0x30);
    func_0x00010be11a00(lVar1);
  }
  _objc_release(lVar1);
  _objc_destroyWeak(puVar5);
  _objc_destroyWeak(puVar4);
LAB_1066cf120:
  puVar2 = PTR_PTR_1126b0418;
  _objc_copyWeak(auStack_100,param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  func_0x00010bf54280(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066cf204; end: 1066cf2ff;  */

void FUN_1066cf204(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar2);
    _objc_copyWeak(auStack_50,param_1 + 0x20);
    _objc_copyWeak(auStack_48,param_1 + 0x28);
    func_0x00010be14ea0(lVar2);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_50);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1066cf300; end: 1066cf36b;  */

void FUN_1066cf300(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be0f8a0();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066cf36c; end: 1066cf467;  */

void FUN_1066cf36c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar2);
    _objc_copyWeak(auStack_50,param_1 + 0x20);
    _objc_copyWeak(auStack_48,param_1 + 0x28);
    func_0x00010be11a00(lVar2);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_50);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1066cf468; end: 1066cf543;  */

void FUN_1066cf468(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be0f8a0();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066cf544; end: 1066cf577;  */

void FUN_1066cf544(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdda420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066cf578; end: 1066cf783;  */

void FUN_1066cf578(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010c0dfd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_2;
  func_0x00010bf529e0();
  puVar3 = PTR____NSDictionary0__struct_11034ab58;
  if ((undefined *)0x2 < puVar6) {
    puVar3 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = puVar2;
  func_0x00010c094be0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar6;
  func_0x00010c2810a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  _objc_retain(puVar4);
  func_0x00010c0bf0a0(puVar1);
  if (puVar4 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 != (undefined *)0x0) {
      func_0x00010c06d040(puVar6);
      func_0x00010bf48fe0(puVar6);
    }
  }
  puVar5 = PTR_PTR_1126ccc18;
  func_0x00010bf343a0(PTR_PTR_1126ccc18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar4);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1066cf784; end: 1066cf7b7;  */

void FUN_1066cf784(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c071ae0(uVar1,param_2,param_2);
  *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)uVar1;
  return;
}


