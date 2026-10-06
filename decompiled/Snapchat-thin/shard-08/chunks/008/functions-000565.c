/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1066c2c70; end: 1066c2c73; -[SCLensExplorerStoryItem identifier] */

void FUN_1066c2c70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0844f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_itemId_1125feb48);
  return;
}



/* Entry: 1066c2c74; end: 1066c2cfb; +[SCLensFeedLayout lensPreviewSizeForSpanCount:sectionInsets:itemSpacing:] */

undefined1  [16]
FUN_1066c2c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar1 = PTR_PTR_1126cc910;
  uVar2 = param_1;
  uVar3 = param_2;
  func_0x00010bfa3860(PTR_PTR_1126cc910);
  _objc_retainAutoreleasedReturnValue();
  if (param_5 < 3) {
    func_0x00010c0913a0(puVar1);
  }
  else {
    func_0x00010c091380(param_1,param_2,0x3ff8000000000000,puVar1,param_4,param_5);
    uVar2 = param_1;
    uVar3 = param_2;
  }
  _objc_release(puVar1);
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1066c2cfc; end: 1066c2d93; +[SCLensFeedLayout itemSpacingForSpanCount:] */

undefined8 FUN_1066c2cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cc910;
  func_0x00010c093ee0(PTR_PTR_1126cc910);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 3) {
    param_1 = 0x3f9f7f8ca8198f1d;
  }
  else if (param_4 == 4) {
    param_1 = 0x3f8f99c38b04ab60;
  }
  else {
    if (param_4 != 5) {
      func_0x00010c084b20(puVar1);
      goto LAB_1066c2d74;
    }
    param_1 = 0x3f8d82fd75e2046c;
  }
  func_0x00010c084b40(param_1,puVar1);
LAB_1066c2d74:
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1066c2d94; end: 1066c2e53; -[SCLensExplorerContainerDataStoreFactory initWithBaseDataStoreFactory:sectionsDataStore:] */

undefined1 *
FUN_1066c2d94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f26e8;
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
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066c2e54; end: 1066c2e57; -[SCLensExplorerContainerDataStoreFactory mutableLensFeedDataStoreWithSectionId:] */

void FUN_1066c2e54(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde76d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__containerSectionsDataStoresWith_112557750);
  return;
}



/* Entry: 1066c2e58; end: 1066c2e5b; -[SCLensExplorerContainerDataStoreFactory lensFeedDataStoreWithSectionId:] */

void FUN_1066c2e58(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d3d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_mutableLensFeedDataStoreWithSect_112612958);
  return;
}



/* Entry: 1066c2e5c; end: 1066c2f27; -[SCLensExplorerContainerDataStoreFactory remoteStateProviderForSectionId:] */

void FUN_1066c2e5c(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x00010bde76c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ccf78;
  _objc_alloc(PTR_PTR_1126ccf78);
  func_0x00010bff8d80();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066c2f28; end: 1066c2f4f; -[SCLensExplorerContainerDataStoreFactory reset] */

void FUN_1066c2f28(long param_1)

{
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 1066c2f50; end: 1066c2f93; -[SCLensExplorerContainerDataStoreFactory containersForFeedWithCategoryIdentifier:] */

void FUN_1066c2f50(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bde76c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf4b3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066c2f94; end: 1066c3053; -[SCLensExplorerContainerDataStoreFactory _containerSectionsDataStoresWithSectionId:] */

void FUN_1066c2f94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = *(undefined **)(param_1 + 0x18);
  func_0x00010c0e00e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0d3d00(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126ccf80;
    _objc_alloc(PTR_PTR_1126ccf80);
    func_0x00010c04cbc0();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,puVar1,param_3);
    _objc_retain(puVar1);
    _objc_release(uVar2);
  }
  else {
    _objc_retain();
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066c3054; end: 1066c308f; -[SCLensExplorerContainerDataStoreFactory .cxx_destruct] */

void FUN_1066c3054(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066c3090; end: 1066c30f7; -[SCLensExplorerDataStoreFactory init] */

undefined1 * FUN_1066c3090(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f26f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1066c30f8; end: 1066c30fb; -[SCLensExplorerDataStoreFactory mutableLensFeedDataStoreWithSectionId:] */

void FUN_1066c30f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf7fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dataStoreForSectionId__11255b988);
  return;
}



/* Entry: 1066c30fc; end: 1066c30ff; -[SCLensExplorerDataStoreFactory lensFeedDataStoreWithSectionId:] */

void FUN_1066c30fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d3d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_mutableLensFeedDataStoreWithSect_112612958);
  return;
}



/* Entry: 1066c3100; end: 1066c3183; -[SCLensExplorerDataStoreFactory remoteStateProviderForSectionId:] */

void FUN_1066c3100(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x00010c093d60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ccf78;
  _objc_alloc(PTR_PTR_1126ccf78);
  func_0x00010bff8d80();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066c3184; end: 1066c318b;  */

void FUN_1066c3184(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12a450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_remoteState_112628330);
  return;
}



/* Entry: 1066c318c; end: 1066c31cf; -[SCLensExplorerDataStoreFactory reset] */

void FUN_1066c318c(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x10);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x10);
  return;
}



/* Entry: 1066c31d0; end: 1066c327f; -[SCLensExplorerDataStoreFactory _dataStoreForSectionId:] */

void FUN_1066c31d0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar1 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar1 = param_1;
      func_0x00010bdecb40(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,lVar1,param_3);
    }
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1066c3280; end: 1066c3323; -[SCLensExplorerDataStoreFactory _createDataStoreWithName:] */

void FUN_1066c3280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c021520();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126ccf88;
  _objc_alloc(PTR_PTR_1126ccf88);
  func_0x00010c034960();
  puVar3 = PTR_PTR_1126ccf90;
  _objc_alloc(PTR_PTR_1126ccf90);
  func_0x00010c034d40();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066c3324; end: 1066c3353; -[SCLensExplorerDataStoreFactory .cxx_destruct] */

void FUN_1066c3324(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066c3354; end: 1066c33c7; -[SCLensExplorerFavoritesDataStoreProvider initWithBaseDataStoreFactory:] */

undefined1 * FUN_1066c3354(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f26f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066c33c8; end: 1066c33cb; -[SCLensExplorerFavoritesDataStoreProvider lensFeedDataStoreWithSectionId:] */

void FUN_1066c33c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d3d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_mutableLensFeedDataStoreWithSect_112612958);
  return;
}



/* Entry: 1066c33cc; end: 1066c3533; -[SCLensExplorerFavoritesDataStoreProvider mutableLensFeedDataStoreWithSectionId:] */

void FUN_1066c33cc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f30bd8);
  if (((uVar1 & 1) == 0) &&
     (uVar1 = param_3,
     func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f30bf8),
     (int)uVar1 == 0)) {
    lVar2 = param_1;
    func_0x00010be0e840(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = *(undefined **)(param_1 + 8);
    func_0x00010c0d3d00(puVar5,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = PTR_PTR_1126ccf98;
    _objc_alloc();
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c093d60(lVar2,param_2,&PTR____CFConstantStringClassReference_110e04238);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    lStack_58 = lVar2;
    func_0x00010c093d60(uVar3,param_2,&PTR____CFConstantStringClassReference_110f30d58);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_50 = uVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_58,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c009320(puVar5,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    uVar1 = param_3;
    func_0x00010be0e840();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = *(undefined **)(param_3 + 8);
    func_0x00010c12a460(puVar5,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1066c3534; end: 1066c3583; -[SCLensExplorerFavoritesDataStoreProvider remoteStateProviderForSectionId:] */

void FUN_1066c3534(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010be0e840();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c12a460(uVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1066c3584; end: 1066c358b; -[SCLensExplorerFavoritesDataStoreProvider reset] */

void FUN_1066c3584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 1066c358c; end: 1066c35f7; -[SCLensExplorerFavoritesDataStoreProvider _favoritesTransformedSectionIdFromOriginal:] */

void FUN_1066c358c(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cc908;
  func_0x00010c072b20(PTR_PTR_1126cc908,param_2,param_3);
  ppuVar2 = param_3;
  if ((int)puVar1 != 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e04238;
    _objc_retain(&PTR____CFConstantStringClassReference_110e04238);
    _objc_release(param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1066c35f8; end: 1066c3603; -[SCLensExplorerFavoritesDataStoreProvider .cxx_destruct] */

void FUN_1066c35f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066c3604; end: 1066c36a7; -[SCLensExplorerMergingAuxiliaryDataStore initWithObservable:identifier:] */

undefined1 *
FUN_1066c3604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2700;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066c36a8; end: 1066c36cf; -[SCLensExplorerMergingAuxiliaryDataStore allItems] */

void FUN_1066c36a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066c36d0; end: 1066c3733; -[SCLensExplorerMergingAuxiliaryDataStore remoteState] */

void FUN_1066c36d0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ccc80;
    _objc_alloc();
    func_0x00010c04e760();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1066c3734; end: 1066c3747; -[SCLensExplorerMergingAuxiliaryDataStore isEmpty] */

void FUN_1066c3734(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe9cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae558,PTR_s_immediateFutureWithValue__1125d80f0,
             PTR____kCFBooleanFalse_11034ab60);
  return;
}



/* Entry: 1066c3748; end: 1066c374b; -[SCLensExplorerMergingAuxiliaryDataStore appendItems:remoteState:] */

void FUN_1066c3748(void)

{
  return;
}



/* Entry: 1066c374c; end: 1066c374f; -[SCLensExplorerMergingAuxiliaryDataStore updateItems:remoteState:] */

void FUN_1066c374c(void)

{
  return;
}



/* Entry: 1066c3750; end: 1066c3757; -[SCLensExplorerMergingAuxiliaryDataStore dataStoreIdentifier] */

undefined8 FUN_1066c3750(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1066c3758; end: 1066c3793; -[SCLensExplorerMergingAuxiliaryDataStore .cxx_destruct] */

void FUN_1066c3758(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066c3794; end: 1066c38fb; -[SCLensExplorerNamespaceMergingDataStoreProvider initWithBaseDataStoreFactory:canonicalSectionIdentifier:auxiliarySectionIdentifiers:mergedContainerIdentifier:mergedContainerTitle:renderStrategy:] */

undefined1 *
FUN_1066c3794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f2708;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066c38fc; end: 1066c38ff; -[SCLensExplorerNamespaceMergingDataStoreProvider auxiliaryNamespaceWriter] */

void FUN_1066c38fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5fc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__mergingDataStore_1125758a0);
  return;
}



/* Entry: 1066c3900; end: 1066c3903; -[SCLensExplorerNamespaceMergingDataStoreProvider lensFeedDataStoreWithSectionId:] */

void FUN_1066c3900(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d3d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_mutableLensFeedDataStoreWithSect_112612958);
  return;
}



/* Entry: 1066c3904; end: 1066c3997; -[SCLensExplorerNamespaceMergingDataStoreProvider mutableLensFeedDataStoreWithSectionId:] */

void FUN_1066c3904(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,*(undefined8 *)(param_1 + 0x10));
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,*(undefined8 *)(param_1 + 0x18));
    if ((int)uVar1 == 0) {
      param_1 = *(long *)(param_1 + 8);
      func_0x00010c0d3d00(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bdd1a80(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010be5fc00(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1066c3998; end: 1066c3ad3; -[SCLensExplorerNamespaceMergingDataStoreProvider remoteStateProviderForSectionId:] */

void FUN_1066c3998(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,*(undefined8 *)(param_1 + 0x10));
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,*(undefined8 *)(param_1 + 0x18));
    if ((int)uVar1 == 0) {
      puVar2 = *(undefined **)(param_1 + 8);
      func_0x00010c12a460(puVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1066c3ab4;
    }
    func_0x00010bdd1a80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ccf78;
    _objc_alloc(PTR_PTR_1126ccf78);
  }
  else {
    func_0x00010be5fc00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ccf78;
    _objc_alloc(PTR_PTR_1126ccf78);
  }
  func_0x00010bff8d80();
  _objc_release(param_1);
LAB_1066c3ab4:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066c3ad4; end: 1066c3ae3;  */

void FUN_1066c3ad4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12a450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_remoteState_112628330);
  return;
}



/* Entry: 1066c3ae4; end: 1066c3b1b; -[SCLensExplorerNamespaceMergingDataStoreProvider reset] */

void FUN_1066c3ae4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 1066c3b1c; end: 1066c3b9b; -[SCLensExplorerNamespaceMergingDataStoreProvider _mergingDataStore] */

void FUN_1066c3b1c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0d3d00(uVar1,param_2,*(undefined8 *)(param_1 + 0x10));
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ccfa0;
    _objc_alloc();
    func_0x00010bff6d20();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
    lVar4 = *(long *)(param_1 + 0x38);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1066c3b9c; end: 1066c3c3b; -[SCLensExplorerNamespaceMergingDataStoreProvider _auxiliaryDataStore] */

void FUN_1066c3b9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x40);
  if (lVar4 == 0) {
    lVar4 = param_1;
    func_0x00010be5fc00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126ccfa8;
    _objc_alloc();
    lVar2 = lVar4;
    func_0x00010bf123a0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c030aa0(puVar1,param_2,lVar2,*(undefined8 *)(param_1 + 0x18));
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x40) = puVar1;
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar4);
    lVar4 = *(long *)(param_1 + 0x40);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1066c3c3c; end: 1066c3cb3; -[SCLensExplorerNamespaceMergingDataStoreProvider .cxx_destruct] */

void FUN_1066c3c3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 1066c3cb4; end: 1066c3e8f; -[SCLensExplorerNamespaceMergingMutableDataStore initWithBaseDataStore:mergedContainerIdentifier:mergedContainerTitle:renderStrategy:] */

undefined1 *
FUN_1066c3cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f2710;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR____NSArray0__struct_11034ab48;
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc();
    func_0x00010c060400();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc();
    func_0x00010c060400();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc();
    func_0x00010c060400();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ccc80;
    _objc_alloc();
    func_0x00010c04e760();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x50) = 0;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066c3e90; end: 1066c3efb; -[SCLensExplorerNamespaceMergingMutableDataStore remoteState] */

void FUN_1066c3e90(long param_1)

{
  long lVar1;
  
  _os_unfair_lock_lock(param_1 + 0x50);
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c12a440(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
  }
  _os_unfair_lock_unlock(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1066c3efc; end: 1066c3f23; -[SCLensExplorerNamespaceMergingMutableDataStore allItems] */

void FUN_1066c3efc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066c3f24; end: 1066c3f4b; -[SCLensExplorerNamespaceMergingMutableDataStore mergedItems] */

void FUN_1066c3f24(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066c3f4c; end: 1066c3ff7; -[SCLensExplorerNamespaceMergingMutableDataStore isEmpty] */

void FUN_1066c3f4c(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _os_unfair_lock_lock(param_1 + 0x50);
  lVar2 = *(long *)(param_1 + 0x38);
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x40);
    func_0x00010bf529e0(lVar2);
    bVar1 = lVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  _os_unfair_lock_unlock(param_1 + 0x50);
  puVar4 = PTR_PTR_1126ae558;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,bVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066c3ff8; end: 1066c41b3; -[SCLensExplorerNamespaceMergingMutableDataStore appendItems:remoteState:] */

void FUN_1066c3ff8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x50);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1066c41b4;
  puStack_70 = &UNK_110934678;
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  lStack_68 = param_1;
  func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfaea40(param_3,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf09f80(uVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  _objc_release(uVar6);
  _objc_retain(param_4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_4;
  _objc_release(uVar5);
  *(undefined1 *)(param_1 + 0x70) = 1;
  uVar1 = *(undefined1 *)(param_1 + 0x71);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 0;
  func_0x00010bde4300(param_1,param_2,&uStack_90,&uStack_98,&uStack_a0);
  uVar2 = uStack_90;
  _objc_retain(uStack_90);
  uVar6 = uStack_98;
  _objc_retain(uStack_98);
  uVar5 = uStack_a0;
  _objc_retain(uStack_a0);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _os_unfair_lock_unlock(param_1 + 0x50);
  func_0x00010be079c0(param_1,param_2,uVar6,uVar2,uVar5,uVar1);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066c41b4; end: 1066c4223;  */

uint FUN_1066c41b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bde7640(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4ae20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (uint)uVar3 ^ 1;
}



/* Entry: 1066c4224; end: 1066c43b3; -[SCLensExplorerNamespaceMergingMutableDataStore updateItems:remoteState:] */

void FUN_1066c4224(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x50);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1066c43b4;
  puStack_60 = &UNK_110934678;
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  lStack_58 = param_1;
  func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfaea40(param_3,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  _objc_release(uVar5);
  _objc_retain(param_4);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_4;
  _objc_release(uVar4);
  *(undefined1 *)(param_1 + 0x70) = 1;
  uVar1 = *(undefined1 *)(param_1 + 0x71);
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  func_0x00010bde4300(param_1,param_2,&uStack_80,&uStack_88,&uStack_90);
  uVar2 = uStack_80;
  _objc_retain(uStack_80);
  uVar5 = uStack_88;
  _objc_retain(uStack_88);
  uVar4 = uStack_90;
  _objc_retain(uStack_90);
  _objc_release(puVar3);
  _os_unfair_lock_unlock(param_1 + 0x50);
  func_0x00010be079c0(param_1,param_2,uVar5,uVar2,uVar4,uVar1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066c43b4; end: 1066c4423;  */

uint FUN_1066c43b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bde7640(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4ae20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (uint)uVar3 ^ 1;
}



/* Entry: 1066c4424; end: 1066c45e3; -[SCLensExplorerNamespaceMergingMutableDataStore updateMergedNamespaceItems:remoteState:] */

void FUN_1066c4424(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x50);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1066c45e4;
  puStack_70 = &UNK_110934678;
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  lStack_68 = param_1;
  func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfaea40(param_3,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  _objc_release(uVar5);
  if (*(long *)(param_1 + 0x30) == 0) {
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = param_4;
    _objc_release(uVar4);
  }
  *(undefined1 *)(param_1 + 0x71) = 1;
  uVar1 = *(undefined1 *)(param_1 + 0x70);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar6);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 0;
  func_0x00010bde4300(param_1,param_2,&uStack_90,&uStack_98,&uStack_a0);
  uVar2 = uStack_90;
  _objc_retain(uStack_90);
  uVar5 = uStack_98;
  _objc_retain(uStack_98);
  uVar4 = uStack_a0;
  _objc_retain(uStack_a0);
  _objc_release(puVar3);
  _os_unfair_lock_unlock(param_1 + 0x50);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x68),param_2,uVar6);
  func_0x00010be079c0(param_1,param_2,uVar5,uVar2,uVar4,uVar1);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066c45e4; end: 1066c461f;  */

bool FUN_1066c45e4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010be4b2a0(lVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 1066c4620; end: 1066c4647; -[SCLensExplorerNamespaceMergingMutableDataStore auxiliaryItemsObservable] */

void FUN_1066c4620(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066c4648; end: 1066c48a7; -[SCLensExplorerNamespaceMergingMutableDataStore _computeCurrentOutputsIntoCanonicalItems:mergedItems:baseStoreItems:] */

void FUN_1066c4648(undefined *param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  puVar1 = param_1;
  func_0x00010bdf8c80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1066c48a8;
  puStack_80 = &UNK_1109346a8;
  puVar2 = puVar1;
  puStack_78 = param_1;
  func_0x00010bfb2660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puStack_c8 = puVar5;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1066c48f4;
  puStack_b0 = &UNK_1109346d8;
  puStack_a8 = param_1;
  _objc_retain(puVar3);
  puStack_a0 = puVar3;
  func_0x00010c1063a0(puVar2,param_2,&puStack_c8);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x38);
  func_0x00010bfaea40(lVar4,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = puVar5;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x1066c4978;
  puStack_d8 = &UNK_110934678;
  puVar5 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puStack_d0 = param_1;
  func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,&puStack_f0);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bfaea40(lVar4,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010bf529e0();
  if (puVar7 == (undefined *)0x0) {
    param_1 = (undefined *)0x0;
  }
  else {
    func_0x00010bde7620(param_1,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  if (param_3 != (long *)0x0) {
    _objc_retainAutorelease(lVar6);
    *param_3 = lVar6;
  }
  if (param_4 != (long *)0x0) {
    if (param_1 == (undefined *)0x0) {
      _objc_retainAutorelease(lVar4);
      *param_4 = lVar4;
    }
    else {
      puVar7 = param_1;
      func_0x00010bf09f80(param_1,param_2,lVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      *param_4 = (long)puVar7;
      _objc_release();
    }
  }
  if (param_5 != (long *)0x0) {
    puVar7 = PTR____NSArray0__struct_11034ab48;
    if (param_1 != (undefined *)0x0) {
      puVar7 = param_1;
    }
    _objc_retainAutorelease();
    *param_5 = (long)puVar7;
  }
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_release(puStack_a0);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 1066c48a8; end: 1066c48f3;  */

void FUN_1066c48a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be4b2a0(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2810a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1066c48f4; end: 1066c49e7;  */

uint FUN_1066c48f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010be4b2a0(lVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar3 = 1;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    lVar2 = lVar1;
    func_0x00010c2810a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar4);
    uVar3 = (uint)uVar4 ^ 1;
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return uVar3;
}



/* Entry: 1066c49e8; end: 1066c4aef; -[SCLensExplorerNamespaceMergingMutableDataStore _emitCurrentStateWithMergedItems:canonicalItems:baseStoreItems:shouldEmitMerged:] */

void FUN_1066c49e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_6 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x58),param_2,param_3);
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x60),param_2,param_4);
  lVar1 = param_1;
  func_0x00010bdd2ba0(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_1 + 0x50);
  uVar2 = *(ulong *)(param_1 + 0x48);
  func_0x00010c071b60(uVar2,param_2,lVar1);
  if ((uVar2 & 1) == 0) {
    _objc_retain(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *(long *)(param_1 + 0x48) = lVar1;
    _objc_release(uVar3);
    _os_unfair_lock_unlock(param_1 + 0x50);
    func_0x00010c286c40(*(undefined8 *)(param_1 + 8),param_2,param_5,*(undefined8 *)(param_1 + 0x28)
                       );
  }
  else {
    _os_unfair_lock_unlock(param_1 + 0x50);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066c4af0; end: 1066c4c1b; -[SCLensExplorerNamespaceMergingMutableDataStore _containerItemFromAuxiliaryItems:] */

void FUN_1066c4af0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1066c4c1c;
  puStack_50 = &UNK_110934708;
  uStack_48 = param_1;
  func_0x00010bfb2660(param_3,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ccd70;
  _objc_alloc(PTR_PTR_1126ccd70);
  func_0x00010c002780();
  puVar2 = PTR_PTR_1126ccc20;
  func_0x00010bf4aea0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    lVar3 = *(long *)(param_3 + 0x20);
    func_0x00010be4b2a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126ccd78;
      func_0x00010c094c60(PTR_PTR_1126ccd78);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066c4c1c; end: 1066c4c7f;  */

void FUN_1066c4c1c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010be4b2a0(lVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126ccd78;
    func_0x00010c094c60(PTR_PTR_1126ccd78);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066c4c80; end: 1066c4e9f; -[SCLensExplorerNamespaceMergingMutableDataStore _dedupedAuxiliaryLensItems] */

void FUN_1066c4c80(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined *puVar12;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined *puVar13;
  undefined8 unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined *unaff_x28;
  undefined8 uStack_3a0;
  undefined8 *puStack_398;
  undefined8 uStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined *puStack_370;
  undefined8 *puStack_368;
  undefined1 **ppuStack_360;
  code *pcStack_358;
  undefined8 *puStack_350;
  long lStack_348;
  undefined8 *puStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_1b0;
  undefined *puStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_140;
  undefined *puStack_138;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar11 = *(long *)(param_1 + 0x40);
  puStack_138 = puVar2;
  _objc_retain(lVar11);
  puVar10 = &uStack_130;
  lVar3 = lVar11;
  lStack_140 = lVar11;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    unaff_x22 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != unaff_x22) {
          _objc_enumerationMutation(lStack_140);
        }
        unaff_x24 = *(undefined8 *)(lStack_128 + lVar11 * 8);
        unaff_x25 = param_1;
        func_0x00010be4b2a0();
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x25 == 0) {
LAB_1066c4dc4:
          unaff_x26 = unaff_x25;
          func_0x00010c2810a0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = unaff_x26;
          func_0x00010c08fa60();
          _objc_release(unaff_x26);
          if (unaff_x27 != 0) {
            unaff_x26 = unaff_x25;
            func_0x00010c2810a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar1);
            _objc_release(unaff_x26);
          }
          func_0x00010befa120(puStack_138);
        }
        else {
          unaff_x26 = unaff_x25;
          func_0x00010c2810a0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = unaff_x26;
          func_0x00010c08fa60();
          if (lVar4 == 0) {
            _objc_release(unaff_x26);
            goto LAB_1066c4dc4;
          }
          unaff_x27 = unaff_x25;
          func_0x00010c2810a0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x28 = puVar1;
          func_0x00010bf4b900();
          _objc_release(unaff_x27);
          _objc_release(unaff_x26);
          if (((ulong)unaff_x28 & 1) == 0) goto LAB_1066c4dc4;
        }
        _objc_release(unaff_x25);
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      puVar10 = &uStack_130;
      lVar3 = lStack_140;
      func_0x00010bf52a60();
      unaff_x23 = 0;
    } while (lVar3 != 0);
  }
  _objc_release(lStack_140);
  puVar2 = puVar1;
  _objc_release();
  puVar12 = puStack_138;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_148 = FUN_1066c4ea0;
    lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_1a0 = unaff_x28;
    lStack_198 = unaff_x27;
    lStack_190 = unaff_x26;
    lStack_188 = unaff_x25;
    uStack_180 = unaff_x24;
    uStack_178 = unaff_x23;
    lStack_170 = unaff_x22;
    puStack_168 = puVar1;
    lStack_160 = lVar11;
    lStack_158 = param_1;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_retain(puVar10);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    plStack_2e0 = (long *)0x0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    _objc_retain(puVar10);
    puVar9 = &uStack_2f0;
    puStack_350 = puVar10;
    func_0x00010bf52a60();
    puStack_340 = puVar10;
    if (puVar10 != (undefined8 *)0x0) {
      lStack_348 = *plStack_2e0;
      do {
        puVar10 = (undefined8 *)0x0;
        do {
          if (*plStack_2e0 != lStack_348) {
            _objc_enumerationMutation(puStack_350);
          }
          puVar12 = puVar2;
          func_0x00010bde7640();
          _objc_retainAutoreleasedReturnValue();
          uStack_328 = 0;
          uStack_330 = 0;
          uStack_318 = 0;
          plStack_320 = (long *)0x0;
          uStack_308 = 0;
          uStack_310 = 0;
          uStack_2f8 = 0;
          uStack_300 = 0;
          puStack_338 = puVar12;
          func_0x00010c084fc0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar12;
          func_0x00010bf52a60();
          if (puVar5 != (undefined *)0x0) {
            lVar11 = *plStack_320;
            do {
              puVar13 = (undefined *)0x0;
              do {
                if (*plStack_320 != lVar11) {
                  _objc_enumerationMutation(puVar12);
                }
                puVar6 = puVar2;
                func_0x00010be4b280();
                _objc_retainAutoreleasedReturnValue();
                puVar7 = puVar6;
                func_0x00010c2810a0();
                _objc_retainAutoreleasedReturnValue();
                puVar8 = puVar7;
                func_0x00010c08fa60();
                _objc_release(puVar7);
                if (puVar8 != (undefined *)0x0) {
                  puVar7 = puVar6;
                  func_0x00010c2810a0(puVar6);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar1);
                  _objc_release(puVar7);
                }
                _objc_release(puVar6);
                puVar13 = puVar13 + 1;
              } while (puVar5 != puVar13);
              puVar5 = puVar12;
              func_0x00010bf52a60();
            } while (puVar5 != (undefined *)0x0);
          }
          _objc_release(puVar12);
          _objc_release(puStack_338);
          puVar10 = (undefined8 *)((long)puVar10 + 1);
        } while (puVar10 != puStack_340);
        puVar9 = &uStack_2f0;
        puVar10 = puStack_350;
        func_0x00010bf52a60();
        puStack_340 = puVar10;
      } while (puVar10 != (undefined8 *)0x0);
    }
    puVar10 = puStack_350;
    _objc_release(puStack_350);
    puVar12 = puVar1;
    func_0x00010bf51e00();
    _objc_release(puVar1);
    _objc_release(puVar10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
      ___stack_chk_fail();
      puStack_368 = puVar10;
      pcStack_358 = FUN_1066c5108;
      puStack_370 = puVar12;
      ppuStack_360 = &puStack_150;
      _objc_retain(puVar9);
      puStack_398 = &uStack_3a0;
      uStack_3a0 = 0;
      uStack_390 = 0x3032000000;
      pcStack_388 = FUN_1066c51f4;
      uStack_380 = 0x1066c5204;
      uStack_378 = 0;
      func_0x00010c0be960(puVar9);
      puVar12 = (undefined *)puStack_398[5];
      _objc_retain(puVar12);
      __Block_object_dispose(&uStack_3a0,8);
      _objc_release(uStack_378);
      _objc_release(puVar9);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1066c4ea0; end: 1066c5107; -[SCLensExplorerNamespaceMergingMutableDataStore _baseStoreLensIdsFromItems:] */

void FUN_1066c4ea0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  long lStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_3);
  puVar7 = &uStack_1b0;
  lStack_210 = param_3;
  func_0x00010bf52a60();
  lStack_200 = param_3;
  if (param_3 != 0) {
    lStack_208 = *plStack_1a0;
    lStack_200 = param_3;
    do {
      lVar8 = 0;
      do {
        if (*plStack_1a0 != lStack_208) {
          _objc_enumerationMutation(lStack_210);
        }
        lVar2 = param_1;
        func_0x00010bde7640();
        _objc_retainAutoreleasedReturnValue();
        uStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lStack_1f8 = lVar2;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf52a60();
        if (lVar3 != 0) {
          lVar10 = *plStack_1e0;
          do {
            lVar11 = 0;
            do {
              if (*plStack_1e0 != lVar10) {
                _objc_enumerationMutation(lVar2);
              }
              lVar4 = param_1;
              func_0x00010be4b280();
              _objc_retainAutoreleasedReturnValue();
              lVar5 = lVar4;
              func_0x00010c2810a0();
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar5;
              func_0x00010c08fa60();
              _objc_release(lVar5);
              if (lVar6 != 0) {
                lVar5 = lVar4;
                func_0x00010c2810a0(lVar4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar1);
                _objc_release(lVar5);
              }
              _objc_release(lVar4);
              lVar11 = lVar11 + 1;
            } while (lVar3 != lVar11);
            lVar3 = lVar2;
            func_0x00010bf52a60();
          } while (lVar3 != 0);
        }
        _objc_release(lVar2);
        _objc_release(lStack_1f8);
        lVar8 = lVar8 + 1;
      } while (lVar8 != lStack_200);
      puVar7 = &uStack_1b0;
      lVar8 = lStack_210;
      func_0x00010bf52a60();
      lStack_200 = lVar8;
    } while (lVar8 != 0);
  }
  lVar8 = lStack_210;
  _objc_release(lStack_210);
  puVar9 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release(lVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lStack_228 = lVar8;
    pcStack_218 = FUN_1066c5108;
    puStack_230 = puVar9;
    puStack_220 = &stack0xfffffffffffffff0;
    _objc_retain(puVar7);
    puStack_258 = &uStack_260;
    uStack_260 = 0;
    uStack_250 = 0x3032000000;
    pcStack_248 = FUN_1066c51f4;
    uStack_240 = 0x1066c5204;
    uStack_238 = 0;
    func_0x00010c0be960(puVar7);
    puVar9 = (undefined *)puStack_258[5];
    _objc_retain(puVar9);
    __Block_object_dispose(&uStack_260,8);
    _objc_release(uStack_238);
    _objc_release(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1066c5108; end: 1066c51f3; -[SCLensExplorerNamespaceMergingMutableDataStore _lensItemFromFeedItem:] */

void FUN_1066c5108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1066c51f4;
  uStack_30 = 0x1066c5204;
  uStack_28 = 0;
  func_0x00010c0be960(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066c51f4; end: 1066c520b;  */

void FUN_1066c51f4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1066c520c; end: 1066c5243;  */

void FUN_1066c520c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066c5244; end: 1066c532b; -[SCLensExplorerNamespaceMergingMutableDataStore _lensItemFromContainerContentItem:] */

void FUN_1066c5244(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1066c51f4;
  uStack_30 = 0x1066c5204;
  uStack_28 = 0;
  func_0x00010c0be980(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066c532c; end: 1066c5363;  */

void FUN_1066c532c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066c5364; end: 1066c544f; -[SCLensExplorerNamespaceMergingMutableDataStore _containerItemFromFeedItem:] */

void FUN_1066c5364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1066c51f4;
  uStack_30 = 0x1066c5204;
  uStack_28 = 0;
  func_0x00010c0be960(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066c5450; end: 1066c5487;  */

void FUN_1066c5450(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066c5488; end: 1066c548f; -[SCLensExplorerNamespaceMergingMutableDataStore dataStoreIdentifier] */

undefined8 FUN_1066c5488(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1066c5490; end: 1066c5543; -[SCLensExplorerNamespaceMergingMutableDataStore .cxx_destruct] */

void FUN_1066c5490(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 1066c5544; end: 1066c55b7; -[SCLensExplorerSubscriptionsDataStoreProvider initWithBaseDataStoreFactory:] */

undefined1 * FUN_1066c5544(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2718;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066c55b8; end: 1066c55bb; -[SCLensExplorerSubscriptionsDataStoreProvider lensFeedDataStoreWithSectionId:] */

void FUN_1066c55b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d3d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_mutableLensFeedDataStoreWithSect_112612958);
  return;
}



/* Entry: 1066c55bc; end: 1066c5633; -[SCLensExplorerSubscriptionsDataStoreProvider mutableLensFeedDataStoreWithSectionId:] */

void FUN_1066c55bc(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126cc908;
  _objc_retain(param_3);
  func_0x00010c080260(puVar2,param_2,param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110ee15d8;
  if ((int)puVar2 == 0) {
    ppuVar1 = param_3;
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0d3d00(uVar3,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1066c5634; end: 1066c56ab; -[SCLensExplorerSubscriptionsDataStoreProvider remoteStateProviderForSectionId:] */

void FUN_1066c5634(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126cc908;
  _objc_retain(param_3);
  func_0x00010c080260(puVar2,param_2,param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110ee15d8;
  if ((int)puVar2 == 0) {
    ppuVar1 = param_3;
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c12a460(uVar3,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1066c56ac; end: 1066c56b3; -[SCLensExplorerSubscriptionsDataStoreProvider reset] */

void FUN_1066c56ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 1066c56b4; end: 1066c56bf; -[SCLensExplorerSubscriptionsDataStoreProvider .cxx_destruct] */

void FUN_1066c56b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066c56c0; end: 1066c57cf; -[SCLensExplorerSectionConfigurationsMemoryDataStore feedConfigurationWithIdentifier:] */

void FUN_1066c56c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar4 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1066c57d0;
  puStack_50 = &UNK_110934738;
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x00010bfad7a0(uVar4,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1066c580c;
  puStack_78 = &UNK_110934768;
  uStack_70 = param_3;
  _objc_retain(param_3);
  uVar2 = uVar4;
  func_0x00010c0b8600(uVar4,param_2,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uStack_70);
  _objc_release(uVar4);
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1066c57d0; end: 1066c580b;  */

bool FUN_1066c57d0(long param_1,long param_2)

{
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 != 0;
}



/* Entry: 1066c580c; end: 1066c5817;  */

void FUN_1066c580c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_objectForKeyedSubscript__112615a50,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1066c5818; end: 1066c5927; -[SCLensExplorerSectionConfigurationsMemoryDataStore feedConfigurationsWithIdentifiers:] */

void FUN_1066c5818(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar4 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1066c5928;
  puStack_50 = &UNK_110934738;
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x00010bfad7a0(uVar4,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x1066c59f4;
  puStack_78 = &UNK_1108b2f88;
  uStack_70 = param_3;
  _objc_retain(param_3);
  uVar2 = uVar4;
  func_0x00010c0b8600(uVar4,param_2,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uStack_70);
  _objc_release(uVar4);
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1066c5928; end: 1066c5a8b;  */

undefined8 FUN_1066c5928(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf04920(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1066c5a8c; end: 1066c5a97;  */

void FUN_1066c5a8c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 1066c5a98; end: 1066c5b3f; -[SCLensExplorerSectionConfigurationsMemoryDataStore storeFeedConfiguration:] */

void FUN_1066c5a98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = param_3;
  func_0x00010c155f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf51e00(uVar2);
  func_0x00010c0d9840(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _os_unfair_lock_unlock(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066c5b40; end: 1066c5b93; -[SCLensExplorerSectionConfigurationsMemoryDataStore reset] */

void FUN_1066c5b40(long param_1,undefined8 param_2)

{
  _os_unfair_lock_lock(param_1 + 0x18);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 8),param_2,PTR____NSDictionary0__struct_11034ab58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x18);
  return;
}



/* Entry: 1066c5b94; end: 1066c5bc3; -[SCLensExplorerSectionConfigurationsMemoryDataStore .cxx_destruct] */

void FUN_1066c5b94(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066c5bc4; end: 1066c620b; -[SCLensExplorerDependencyProviderFactoryImpl initWithUserSessionScope:lensExplorerStudySettingsServices:lensFavoritesService:lensFavoritesMockService:featureSettingsServices:userBlizzardServices:circumstanceEngineServices:lensInfoCardActionHandlingServices:infoCardsScopeServices:lensTopicServices:infoCardReportServices:lensCreatorSubscriptionProviderServices:spectaclesLensServices:contentDeliveryServices:lensMediaDownloaderServices:lensPerformerServices:snapReadReceiptService:notificationServices:userIPInferredLocationServices:systemScope:unlockableDataStoreServices:lensUserProviderServices:lensCallToActionOffCameraServices:networkImageServices:userStorageServices:networkConnectivityMonitorServices:storiesServices:activityCenterNavigationServices:dynamicLayoutServices:lensExplorerStoryScopeServices:creatorProfileScopeServices:lensesModularCameraScopeServices:] */

undefined8 *
FUN_1066c5bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  puStack_70 = PTR_PTR_1126f2728;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_34;
    _objc_release(uVar2);
  }
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1066c620c; end: 1066c67b3; -[SCLensExplorerDependencyProviderFactoryImpl dependencyProviderServicesWithScopeExposers:] */

void FUN_1066c620c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined *puVar34;
  undefined *puVar35;
  ulong uVar36;
  undefined8 uVar37;
  
  puVar1 = PTR_PTR_1126ccfb0;
  _objc_retain(param_3);
  func_0x00010c06cd80();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = *(undefined **)(param_1 + 0xd8);
    func_0x00010c258d80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126ccfb0;
    _objc_alloc_init();
  }
  uVar36 = *(ulong *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
  _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_opt_isKindOfClass(uVar36,puVar2);
  puVar2 = PTR_PTR_1126ccfb8;
  if ((uVar36 & 1) == 0) {
    uVar37 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar37 = 0;
  }
  _objc_retain(uVar37);
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0937c0();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = uVar37;
  func_0x00010c0cf720();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c093c60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c154140();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c093740();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010bf5b6a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bfedba0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c094900();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c0d0980();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010bf40b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar14 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c097700();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c0c4b20();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c095b60();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010bf534e0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c280fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c097cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c090080();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + 200);
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010c08cce0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010c08ca60();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010bf61840();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c08fd80();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05dc40();
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar33);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar34 = PTR_PTR_1126ccfc0;
  _objc_alloc();
  uVar33 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar37);
  func_0x00010c030020();
  _objc_release(uVar33);
  puVar35 = PTR_PTR_1126ccfc8;
  _objc_alloc(PTR_PTR_1126ccfc8);
  func_0x00010c00b820();
  _objc_release(puVar34);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar35);
  return;
}



/* Entry: 1066c67b4; end: 1066c694b; -[SCLensExplorerDependencyProviderFactoryImpl .cxx_destruct] */

void FUN_1066c67b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
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
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 1066c694c; end: 1066c69bf; -[SCLensExplorerDependencyProviderFactoryServices initWithDependencyProviderFactory:] */

undefined1 * FUN_1066c694c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2730;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066c69c0; end: 1066c69c7; -[SCLensExplorerDependencyProviderFactoryServices dependencyProviderFactory] */

undefined8 FUN_1066c69c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1066c69c8; end: 1066c69d3; -[SCLensExplorerDependencyProviderFactoryServices .cxx_destruct] */

void FUN_1066c69c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066c69d4; end: 1066c6a77; -[SCLensExplorerDependencyProviderServices initWithDependencyProvider:notificationPresenter:] */

undefined1 *
FUN_1066c69d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2738;
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



/* Entry: 1066c6a78; end: 1066c6a7f; -[SCLensExplorerDependencyProviderServices dependencyProvider] */

undefined8 FUN_1066c6a78(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1066c6a80; end: 1066c6a87; -[SCLensExplorerDependencyProviderServices notificationPresenter] */

undefined8 FUN_1066c6a80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1066c6a88; end: 1066c6ab7; -[SCLensExplorerDependencyProviderServices .cxx_destruct] */

void FUN_1066c6a88(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066c6ab8; end: 1066c6b9f; -[SCLensExplorerImageMediaDownloaderCache initWithMediaDownloader:lensPerformerProvider:imageScale:] */

undefined1 *
FUN_1066c6ab8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  double dVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  dVar4 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f2740;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    if (0.0 < param_1) {
      *(double *)((long)puVar1 + 0x18) = param_1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      *(double *)((long)puVar1 + 0x18) = dVar4;
      _objc_release(puVar3);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}


