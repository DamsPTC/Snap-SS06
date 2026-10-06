/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106d5efc8; end: 106d5f113; -[SCCommerceCatalogPagingDataCoordinatorImpl _fetchItemsForPage:queryString:] */

void FUN_106d5efc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  func_0x00010bdcbfa0(param_1);
  _objc_initWeak(auStack_58,param_1);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bfe5e40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = param_3;
  _objc_retain(param_4);
  func_0x00010bfcaba0(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  return;
}



/* Entry: 106d5f114; end: 106d5f183;  */

void FUN_106d5f114(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be11f80();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d5f184; end: 106d5f28f; -[SCCommerceCatalogPagingDataCoordinatorImpl _updateItemsWithProducts:queryString:page:] */

void FUN_106d5f184(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_5 == 0) && ((*(byte *)(param_1 + 0x30) & 1) != 0)) {
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c06d500();
    if ((int)puVar4 != 0) {
      uStack_40 = *(undefined8 *)(param_1 + 0x48);
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar4;
      func_0x00010bf09f80();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      *(undefined **)(param_1 + 0x38) = puVar1;
      _objc_release(uVar3);
      goto LAB_106d5f24c;
    }
  }
  uVar3 = param_3;
  func_0x00010bf51e00();
  puVar4 = *(undefined **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
LAB_106d5f24c:
  _objc_release(puVar4);
  _objc_release(param_4);
  uVar3 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_106d5f290;
  puVar2 = auStack_68;
  uStack_60 = param_4;
  uStack_58 = param_3;
  puStack_50 = &stack0xfffffffffffffff0;
  _objc_initWeak(puVar2,uVar3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c0f7fc0(puVar2);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 106d5f290; end: 106d5f34f; -[SCCommerceCatalogPagingDataCoordinatorImpl _isNotLoading] */

void FUN_106d5f290(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  puVar1 = auStack_28;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106d5f350; end: 106d5f36f;  */

void FUN_106d5f350(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x31) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106d5f370; end: 106d5f473; -[SCCommerceCatalogPagingDataCoordinatorImpl _announceItemLoadingDidBeginForPage:] */

void FUN_106d5f370(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  ppuVar4 = &PTR____CFConstantStringClassReference_110e857b8;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e85858;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar3,param_2,&PTR____CFConstantStringClassReference_110e857b8,param_1,puVar2)
  ;
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  if (ppuVar4 != (undefined **)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e85858);
    _objc_release(puVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar3,param_2,&PTR____CFConstantStringClassReference_110e857d8,param_1,puVar1)
  ;
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106d5f474; end: 106d5f533; -[SCCommerceCatalogPagingDataCoordinatorImpl _announceItemLoadingDidSucceedForPage:] */

void FUN_106d5f474(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  if (param_3 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e85858);
    _objc_release(puVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar3,param_2,&PTR____CFConstantStringClassReference_110e857d8,param_1,puVar1)
  ;
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106d5f534; end: 106d5f58f; -[SCCommerceCatalogPagingDataCoordinatorImpl _announceItemLoadingFailed] */

void FUN_106d5f534(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e857f8,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d5f590; end: 106d5f59b; -[SCCommerceCatalogPagingDataCoordinatorImpl items] */

void FUN_106d5f590(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x38,1);
  return;
}



/* Entry: 106d5f59c; end: 106d5f5a3; -[SCCommerceCatalogPagingDataCoordinatorImpl pageSize] */

undefined8 FUN_106d5f59c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106d5f5a4; end: 106d5f5af; -[SCCommerceCatalogPagingDataCoordinatorImpl isLoading] */

byte FUN_106d5f5a4(long param_1)

{
  return *(byte *)(param_1 + 0x31) & 1;
}



/* Entry: 106d5f5b0; end: 106d5f5b7; -[SCCommerceCatalogPagingDataCoordinatorImpl storeModel] */

undefined8 FUN_106d5f5b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106d5f5b8; end: 106d5f61f; -[SCCommerceCatalogPagingDataCoordinatorImpl .cxx_destruct] */

void FUN_106d5f5b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106d5f620; end: 106d5f62b; +[SCCommerceFavoritesDataCoordinator announcerIdentifier] */

undefined ** FUN_106d5f620(void)

{
  return &PTR____CFConstantStringClassReference_110e85538;
}



/* Entry: 106d5f62c; end: 106d5f633; -[SCCommerceFavoritesDataCoordinator addListener:] */

void FUN_106d5f62c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 106d5f634; end: 106d5f63b; -[SCCommerceFavoritesDataCoordinator removeListener:] */

void FUN_106d5f634(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106d5f63c; end: 106d5f77b; -[SCCommerceFavoritesDataCoordinator initWithShowcaseFetcher:favoritesCoordinator:] */

undefined1 *
FUN_106d5f63c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f6aa0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = 0x14;
    puVar3 = PTR_PTR_1126b02d0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    *(undefined1 *)((long)puVar1 + 8) = 0;
    *(undefined8 *)((long)puVar1 + 0x50) = 0;
    func_0x00010be78180(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d5f77c; end: 106d5f857; -[SCCommerceFavoritesDataCoordinator checkIsInSync:] */

void FUN_106d5f77c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106d5f858; end: 106d5f8eb;  */

void FUN_106d5f858(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010bfa1300();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bfa6a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar3 = *(long *)(param_1 + 0x20);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bde2740();
  (**(code **)(lVar3 + 0x10))(lVar3,lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106d5f8ec; end: 106d5f993; -[SCCommerceFavoritesDataCoordinator loadNext] */

void FUN_106d5f8ec(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106d5f994; end: 106d5f9bf;  */

void FUN_106d5f994(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4e200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d5f9c0; end: 106d5fa0f; -[SCCommerceFavoritesDataCoordinator canLoadMorePages] */

bool FUN_106d5f9c0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf5f780();
  func_0x00010bfa10e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1 < uVar2;
}



/* Entry: 106d5fa10; end: 106d5fa2b; -[SCCommerceFavoritesDataCoordinator topItemIds] */

void FUN_106d5fa10(void)

{
  _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d5fa2c; end: 106d5fad3; -[SCCommerceFavoritesDataCoordinator _prepareCoordinator] */

void FUN_106d5fa2c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106d5fad4; end: 106d5fb53;  */

void FUN_106d5fad4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfa1300();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfa6a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29580();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106d5fb54; end: 106d5fbd7; -[SCCommerceFavoritesDataCoordinator _handleFavoritesFetchedWithItems:] */

void FUN_106d5fb54(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110978160);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x00010c19a620(param_1);
  }
  else {
    lVar1 = param_3;
    func_0x00010bfce720(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19a620(param_1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d5fbd8; end: 106d5fc07;  */

void FUN_106d5fbd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c115e60(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedLongLong__112615838,param_2)
  ;
  return;
}



/* Entry: 106d5fc08; end: 106d5fda3; -[SCCommerceFavoritesDataCoordinator _loadNextPage] */

void FUN_106d5fc08(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = param_1;
  func_0x00010c076be0();
  if ((uVar1 & 1) == 0) {
    func_0x00010c1b2440(param_1);
    puVar3 = PTR_PTR_1126b0840;
    uVar1 = param_1;
    func_0x00010bfa10e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5f780(param_1);
    uVar2 = uVar1;
    func_0x00010c0dfd40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa1340();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar1 = param_1;
    _objc_opt_class(param_1);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar4);
    _objc_release(uVar1);
    _objc_initWeak(auStack_38,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0f1c60(param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bfc3840(uVar4);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 106d5fda4; end: 106d5fe57;  */

void FUN_106d5fda4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1b2440();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (param_4 == 0) {
    uVar2 = param_2;
    func_0x00010c1163e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be2e760(param_1);
    _objc_release(uVar2);
  }
  else {
    func_0x00010be28ee0(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d5fe58; end: 106d5ff7b; -[SCCommerceFavoritesDataCoordinator _handleProductsFetched:] */

void FUN_106d5fe58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf5f780(param_1);
  func_0x00010c187720(param_1,param_2,lVar1 + 1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uStack_50 = *(undefined8 *)(param_1 + 0x10);
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e85838;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar3,param_2,&PTR____CFConstantStringClassReference_110e857d8,param_1,puVar2)
  ;
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar3,param_2,&PTR____CFConstantStringClassReference_110e857f8,puVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106d5ff7c; end: 106d5ffd7; -[SCCommerceFavoritesDataCoordinator _handleError:] */

void FUN_106d5ff7c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e857f8,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d5ffd8; end: 106d6005b; -[SCCommerceFavoritesDataCoordinator _compareFavoritesItems:] */

undefined8 FUN_106d5ffd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110978180);
  func_0x00010bfa10e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb27a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071b60();
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106d6005c; end: 106d6008b;  */

void FUN_106d6005c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c115e60(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedLongLong__112615838,param_2)
  ;
  return;
}



/* Entry: 106d6008c; end: 106d60097; -[SCCommerceFavoritesDataCoordinator items] */

void FUN_106d6008c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x10,1);
  return;
}



/* Entry: 106d60098; end: 106d6009f; -[SCCommerceFavoritesDataCoordinator pageSize] */

undefined8 FUN_106d60098(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106d600a0; end: 106d600ab; -[SCCommerceFavoritesDataCoordinator queryContext] */

void FUN_106d600a0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x20,1);
  return;
}



/* Entry: 106d600ac; end: 106d600b3; -[SCCommerceFavoritesDataCoordinator showcaseFetcher] */

undefined8 FUN_106d600ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106d600b4; end: 106d600e3; -[SCCommerceFavoritesDataCoordinator setShowcaseFetcher:] */

void FUN_106d600b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d600e4; end: 106d600eb; -[SCCommerceFavoritesDataCoordinator favoritesCoordinator] */

undefined8 FUN_106d600e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106d600ec; end: 106d6011b; -[SCCommerceFavoritesDataCoordinator setFavoritesCoordinator:] */

void FUN_106d600ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d6011c; end: 106d60123; -[SCCommerceFavoritesDataCoordinator eventAnnouncer] */

undefined8 FUN_106d6011c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106d60124; end: 106d60153; -[SCCommerceFavoritesDataCoordinator setEventAnnouncer:] */

void FUN_106d60124(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d60154; end: 106d6015b; -[SCCommerceFavoritesDataCoordinator serialQueue] */

undefined8 FUN_106d60154(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106d6015c; end: 106d6018b; -[SCCommerceFavoritesDataCoordinator setSerialQueue:] */

void FUN_106d6015c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106d6018c; end: 106d60197; -[SCCommerceFavoritesDataCoordinator favoritePages] */

void FUN_106d6018c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x48,1);
  return;
}



/* Entry: 106d60198; end: 106d6019f; -[SCCommerceFavoritesDataCoordinator setFavoritePages:] */

void FUN_106d60198(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 106d601a0; end: 106d601a7; -[SCCommerceFavoritesDataCoordinator currentPage] */

undefined8 FUN_106d601a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106d601a8; end: 106d601af; -[SCCommerceFavoritesDataCoordinator setCurrentPage:] */

void FUN_106d601a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 106d601b0; end: 106d601bb; -[SCCommerceFavoritesDataCoordinator isLoading] */

byte FUN_106d601b0(long param_1)

{
  return *(byte *)(param_1 + 8) & 1;
}



/* Entry: 106d601bc; end: 106d601c3; -[SCCommerceFavoritesDataCoordinator setIsLoading:] */

void FUN_106d601bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106d601c4; end: 106d6022f; -[SCCommerceFavoritesDataCoordinator .cxx_destruct] */

void FUN_106d601c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106d60230; end: 106d6023b; +[SCCommerceShowcaseDataCoordinator announcerIdentifier] */

undefined ** FUN_106d60230(void)

{
  return &PTR____CFConstantStringClassReference_110e85538;
}



/* Entry: 106d6023c; end: 106d60243; -[SCCommerceShowcaseDataCoordinator addListener:] */

void FUN_106d6023c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 106d60244; end: 106d6024b; -[SCCommerceShowcaseDataCoordinator removeListener:] */

void FUN_106d60244(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106d6024c; end: 106d6034f; -[SCCommerceShowcaseDataCoordinator initWithLegacyShowcaseFetcher:configProvider:productSetId:adId:] */

undefined1 *
FUN_106d6024c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f6aa8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_6;
    _objc_release(uVar2);
    func_0x00010bde24c0(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d60350; end: 106d60357; -[SCCommerceShowcaseDataCoordinator initWithShowcaseFetcher:configProvider:queryContext:] */

void FUN_106d60350(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0466b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithShowcaseFetcher_configPr_1125ef3a8);
  return;
}



/* Entry: 106d60358; end: 106d6045b; -[SCCommerceShowcaseDataCoordinator initWithShowcaseFetcher:configProvider:queryContext:filter:] */

undefined1 *
FUN_106d60358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f6aa8;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_6;
    _objc_release(uVar2);
    func_0x00010bde24c0(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d6045c; end: 106d60503; -[SCCommerceShowcaseDataCoordinator loadNext] */

void FUN_106d6045c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106d60504; end: 106d6052f;  */

void FUN_106d60504(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4e1c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d60530; end: 106d6054f; -[SCCommerceShowcaseDataCoordinator canLoadMorePages] */

bool FUN_106d60530(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c08fa60(lVar1);
  return lVar1 != 0;
}



/* Entry: 106d60550; end: 106d60577; -[SCCommerceShowcaseDataCoordinator topItemIds] */

void FUN_106d60550(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106d60578; end: 106d605df; -[SCCommerceShowcaseDataCoordinator reloadProductFavoriteState] */

void FUN_106d60578(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_opt_class();
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e85818,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106d605e0; end: 106d60693; -[SCCommerceShowcaseDataCoordinator _commonInit] */

void FUN_106d605e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x68) = 0x14;
  puVar1 = PTR_PTR_1126b02d0;
  _objc_alloc_init();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f3d55e1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x19,0,0x24);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar3);
  _objc_release(puVar2);
  *(undefined1 *)(param_1 + 0x30) = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106d60694; end: 106d6086b; -[SCCommerceShowcaseDataCoordinator _loadNextItems] */

void FUN_106d60694(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = param_1;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar3);
  _objc_release(lVar4);
  *(undefined1 *)(param_1 + 0x30) = 1;
  _objc_initWeak(auStack_48,param_1);
  lVar4 = *(long *)(param_1 + 8);
  if ((lVar4 == 0) || (*(long *)(param_1 + 0x70) == 0)) {
    lVar4 = *(long *)(param_1 + 0x18);
    if ((lVar4 == 0) || (*(long *)(param_1 + 0x38) == 0)) goto LAB_106d60824;
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
    puVar2 = auStack_78;
    _objc_copyWeak(puVar2,auStack_48);
    func_0x00010bfc86a0(lVar4);
    _objc_release(puVar1);
  }
  else {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106d6086c;
    puStack_58 = &UNK_110850a78;
    puVar2 = auStack_50;
    _objc_copyWeak(puVar2,auStack_48);
    func_0x00010bfc3840(lVar4);
  }
  _objc_destroyWeak(puVar2);
LAB_106d60824:
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106d6086c; end: 106d608eb;  */

void FUN_106d6086c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be94aa0();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d608ec; end: 106d60997;  */

void FUN_106d608ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_3;
  func_0x00010bf64920(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010be94aa0(param_1);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d60998; end: 106d60ac7; -[SCCommerceShowcaseDataCoordinator _resolveGetProductSetRequest:cursor:error:] */

void FUN_106d60998(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_5);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d60ac8; end: 106d60b3f;  */

void FUN_106d60ac8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  if (lVar3 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c1163e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beda080(lVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x30));
    _objc_release(uVar2);
  }
  else {
    func_0x00010bdfdb80(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d60b40; end: 106d60d27; -[SCCommerceShowcaseDataCoordinator _updateItemsWithProducts:cursor:] */

void FUN_106d60b40(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c0c2980();
  if (*(long *)(param_1 + 0x58) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    if (0 < (int)uVar1) {
      uVar6 = 0;
      do {
        uVar3 = param_3;
        func_0x00010bf529e0();
        if (uVar3 <= uVar6) break;
        uVar3 = param_3;
        func_0x00010c0dfd40(param_3,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c115e60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_2,uVar4);
        _objc_release(uVar4);
        _objc_release(uVar3);
        uVar6 = uVar6 + 1;
      } while ((uVar1 & 0xffffffff) != uVar6);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    *(undefined **)(param_1 + 0x58) = puVar2;
    _objc_release(uVar5);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  *(ulong *)(param_1 + 0x60) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar5);
  *(undefined1 *)(param_1 + 0x30) = 0;
  uStack_60 = *(undefined8 *)(param_1 + 0x60);
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e85838;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_60,&ppuStack_68,1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar5,param_2,&PTR____CFConstantStringClassReference_110e857d8,param_1,puVar2)
  ;
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar2[0x30] = 0;
  uVar5 = *(undefined8 *)(puVar2 + 0x20);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar5,param_2,&PTR____CFConstantStringClassReference_110e857f8,puVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106d60d28; end: 106d60d87; -[SCCommerceShowcaseDataCoordinator _didFailToLoadItemsWithError:] */

void FUN_106d60d28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x30) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e857f8,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d60d88; end: 106d60d93; -[SCCommerceShowcaseDataCoordinator items] */

void FUN_106d60d88(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x60,1);
  return;
}



/* Entry: 106d60d94; end: 106d60d9b; -[SCCommerceShowcaseDataCoordinator pageSize] */

undefined8 FUN_106d60d94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 106d60d9c; end: 106d60da7; -[SCCommerceShowcaseDataCoordinator queryContext] */

void FUN_106d60d9c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x70,1);
  return;
}



/* Entry: 106d60da8; end: 106d60e4f; -[SCCommerceShowcaseDataCoordinator .cxx_destruct] */

void FUN_106d60da8(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d60e50; end: 106d60e5b; +[SCCommerceShowcaseViewModelProvider announcerIdentifier] */

undefined ** FUN_106d60e50(void)

{
  return &PTR____CFConstantStringClassReference_110e85558;
}



/* Entry: 106d60e5c; end: 106d60e63; -[SCCommerceShowcaseViewModelProvider addListener:] */

void FUN_106d60e5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 106d60e64; end: 106d60e6b; -[SCCommerceShowcaseViewModelProvider removeListener:] */

void FUN_106d60e64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106d60e6c; end: 106d61003; -[SCCommerceShowcaseViewModelProvider initWithDataCoordinator:catalogCellViewModelTitleType:configProvider:favoritesCoordinator:] */

undefined1 *
FUN_106d60e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f6ab0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 0x28) = 1;
    puVar2 = PTR_PTR_1126b02d0;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar4);
    func_0x00010bef9980(*(undefined8 *)((long)puVar1 + 0x10));
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_6;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d61004; end: 106d61007; -[SCCommerceShowcaseViewModelProvider clearError] */

void FUN_106d61004(void)

{
  return;
}



/* Entry: 106d61008; end: 106d6100f; -[SCCommerceShowcaseViewModelProvider loadNext] */

void FUN_106d61008(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09bc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_loadNext_112604930);
  return;
}



/* Entry: 106d61010; end: 106d610bb; -[SCCommerceShowcaseViewModelProvider _updateItemsWithNewViewModels:] */

void FUN_106d61010(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar3 = (undefined1)*(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf2cd60();
  *(undefined1 *)(param_1 + 0x28) = uVar3;
  func_0x00010befa160(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
  _objc_release(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    func_0x00010bf51e00();
    puVar2 = *(undefined **)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = uVar4;
  }
  else {
    puVar2 = PTR_PTR_1126b02d8;
    _objc_opt_new(PTR_PTR_1126b02d8);
    func_0x00010bf09f60(uVar4,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = uVar4;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106d610bc; end: 106d61333; -[SCCommerceShowcaseViewModelProvider didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_106d610bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106d61334;
    puStack_68 = &UNK_1108434b0;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c0f7fc0(uVar1);
    _objc_destroyWeak(auStack_60);
  }
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x106d61360;
    puStack_98 = &UNK_110841fb0;
    _objc_copyWeak(auStack_88,auStack_58);
    _objc_retain(param_5);
    uStack_90 = param_5;
    func_0x00010c0f7fc0(uVar1);
    _objc_release(uStack_90);
    _objc_destroyWeak(auStack_88);
  }
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    uStack_c8 = 0x106d61394;
    puStack_c0 = &UNK_1108434b0;
    _objc_copyWeak(auStack_b8,auStack_58);
    func_0x00010c0f7fc0(uVar1);
    _objc_destroyWeak(auStack_b8);
  }
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_e0,auStack_58);
    func_0x00010c0f7fc0(uVar1);
    _objc_destroyWeak(auStack_e0);
  }
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d61334; end: 106d613eb;  */

void FUN_106d61334(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2afa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d613ec; end: 106d6152b; -[SCCommerceShowcaseViewModelProvider _handleItemLoadingDidBegin] */

void FUN_106d613ec(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + 0x50);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b02e0;
  _objc_opt_class(PTR_PTR_1126b02e0);
  puVar3 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar2);
  puVar2 = puVar1;
  _objc_release();
  if ((((ulong)puVar3 & 1) != 0) && (puVar1 != (undefined *)0x0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126b02d8;
    _objc_alloc_init(PTR_PTR_1126b02d8);
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = uVar6;
    _objc_release(uVar5);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x50));
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar3;
    func_0x00010be8aa40(param_1);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (*(long *)(puVar2 + 0x40) == 0) {
    func_0x00010be71f60(puVar2);
  }
  else {
    _objc_initWeak(auStack_78,puVar2);
    uVar6 = *(undefined8 *)(puVar2 + 0x40);
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_3);
    func_0x00010bfa6aa0(uVar6);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106d6152c; end: 106d6161f; -[SCCommerceShowcaseViewModelProvider _handleItemLoadingDidSucceedWithExtraData:] */

void FUN_106d6152c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x40) == 0) {
    func_0x00010be71f60(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010bfa6aa0(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106d61620; end: 106d61673;  */

void FUN_106d61620(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be71f60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d61674; end: 106d61887; -[SCCommerceShowcaseViewModelProvider _handleItemLoadingDidFail] */

undefined * FUN_106d61674(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar8 = PTR_PTR_1126b04e0;
    _objc_alloc();
    puVar3 = puVar8;
    func_0x000106d78760();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x000106d78778();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x000106d78730();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfefa60();
    uVar11 = *(undefined8 *)(param_1 + 0x68);
    *(undefined **)(param_1 + 0x68) = puVar8;
    _objc_release(uVar11);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    _objc_opt_class();
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar11);
    _objc_release(param_1);
    puVar8 = PTR____NSArray0__struct_11034ab48;
  }
  else {
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    puVar8 = PTR_PTR_1126b02e0;
    _objc_alloc(PTR_PTR_1126b02e0);
    ppuVar2 = &PTR____CFConstantStringClassReference_110db1c18;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1c18,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010920(puVar8);
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = uVar11;
    _objc_release(uVar10);
    _objc_release(puVar8);
    _objc_release(ppuVar2);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010be8aa40(param_1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar8;
  }
  ___stack_chk_fail();
  uVar6 = *(ulong *)(puVar8 + 0x50);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b02d8;
  _objc_opt_class(PTR_PTR_1126b02d8);
  uVar7 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar3);
  _objc_release(uVar6);
  if (((uVar7 & 1) == 0) || (uVar6 == 0)) {
    lVar9 = *(long *)(puVar8 + 0x50);
    func_0x00010c089820(lVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b02e0;
    _objc_opt_class(PTR_PTR_1126b02e0);
    lVar1 = lVar9;
    _objc_opt_isKindOfClass(lVar9,puVar8);
    _objc_release(lVar9);
    puVar8 = (undefined *)(ulong)((uint)lVar1 & (uint)(lVar9 != 0));
  }
  else {
    puVar8 = (undefined *)0x1;
  }
  return puVar8;
}



/* Entry: 106d61888; end: 106d61937; -[SCCommerceShowcaseViewModelProvider _itemsHasPaginationModel] */

uint FUN_106d61888(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar2 = *(ulong *)(param_1 + 0x50);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b02d8;
  _objc_opt_class(PTR_PTR_1126b02d8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  _objc_release(uVar2);
  if (((uVar4 & 1) == 0) || (uVar2 == 0)) {
    lVar5 = *(long *)(param_1 + 0x50);
    func_0x00010c089820(lVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b02e0;
    _objc_opt_class(PTR_PTR_1126b02e0);
    lVar6 = lVar5;
    _objc_opt_isKindOfClass(lVar5,puVar3);
    _objc_release(lVar5);
    uVar1 = (uint)lVar6 & (uint)(lVar5 != 0);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 106d61938; end: 106d61b0f; -[SCCommerceShowcaseViewModelProvider _handleUpdatedItemsWithNewViewModels:] */

void FUN_106d61938(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf51e00();
  lVar2 = param_1;
  func_0x00010be46240();
  func_0x00010beda060(param_1);
  lVar11 = param_1;
  func_0x00010be46240();
  uVar16 = (ulong)(((uint)lVar2 ^ 1) & (uint)lVar11);
  puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar3 = uVar1;
  func_0x00010bf529e0();
  uVar4 = uVar1;
  func_0x00010bf529e0();
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (uVar3 < uVar4 + uVar16 + lVar2) {
    do {
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar14);
      _objc_release(puVar5);
      uVar3 = uVar3 + 1;
      uVar4 = uVar1;
      func_0x00010bf529e0();
      lVar2 = param_3;
      func_0x00010bf529e0();
    } while (uVar3 < uVar4 + uVar16 + lVar2);
  }
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_1 + 0x18);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar15);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar14);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    *(undefined1 *)(param_3 + 0x28) = 0;
    uVar15 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010bf51e00();
    uVar12 = *(undefined8 *)(param_3 + 0x50);
    *(undefined8 *)(param_3 + 0x50) = uVar15;
    _objc_release(uVar12);
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf529e0(*(undefined8 *)(param_3 + 0x50));
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar14);
    uVar15 = *(undefined8 *)(param_3 + 0x18);
    ppuVar13 = &PTR____CFConstantStringClassReference_110e856b8;
    _objc_opt_class();
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf7dbc0(uVar15);
    _objc_release(param_3);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
      ___stack_chk_fail();
      _objc_retain(ppuVar13);
      _objc_retain(lVar2);
      if (lVar2 == 0) {
        puVar14 = (undefined *)0x0;
      }
      else {
        lVar11 = lVar2;
        func_0x000100504554(lVar2,&PTR___NSConcreteGlobalBlock_1109781d0);
        puVar14 = PTR__OBJC_CLASS___NSSet_1126ae870;
        func_0x00010c225c20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar11);
      }
      ppuVar7 = ppuVar13;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_148 = 0xc2000000;
      pcStack_140 = FUN_106d61e7c;
      puStack_138 = &UNK_1109781f0;
      _objc_retain(puVar14);
      ppuVar8 = ppuVar7;
      puStack_130 = puVar14;
      puStack_128 = puVar6;
      func_0x000100504554(ppuVar7,&puStack_150);
      uVar15 = *(undefined8 *)(puVar6 + 0x68);
      *(undefined8 *)(puVar6 + 0x68) = 0;
      _objc_release(uVar15);
      if ((ppuVar8 == (undefined **)0x0) ||
         (ppuVar9 = ppuVar8, func_0x00010bf529e0(), ppuVar9 == (undefined **)0x0)) {
        func_0x00010be29dc0(puVar6);
      }
      else {
        _objc_initWeak(auStack_158,puVar6);
        uVar15 = *(undefined8 *)(puVar6 + 8);
        _objc_copyWeak(auStack_160,auStack_158);
        _objc_retain(ppuVar8);
        func_0x00010c0f7fc0(uVar15);
        _objc_release(ppuVar8);
        _objc_destroyWeak(auStack_160);
        _objc_destroyWeak(auStack_158);
      }
      _objc_release(ppuVar8);
      _objc_release(puStack_130);
      _objc_release(ppuVar7);
      _objc_release(puVar14);
      _objc_release(lVar2);
      _objc_release(ppuVar13);
      return;
    }
    return;
  }
  return;
}



/* Entry: 106d61b10; end: 106d61c63; -[SCCommerceShowcaseViewModelProvider _handleFinalItemsLoaded] */

void FUN_106d61b10(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf51e00();
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  _objc_release(uVar9);
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x50));
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar11);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  ppuVar10 = &PTR____CFConstantStringClassReference_110e856b8;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf7dbc0(uVar1);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar10);
  _objc_retain(lVar7);
  if (lVar7 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    lVar8 = lVar7;
    func_0x000100504554(lVar7,&PTR___NSConcreteGlobalBlock_1109781d0);
    puVar11 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
  }
  ppuVar4 = ppuVar10;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_106d61e7c;
  puStack_c8 = &UNK_1109781f0;
  _objc_retain(puVar11);
  ppuVar5 = ppuVar4;
  puStack_c0 = puVar11;
  puStack_b8 = puVar3;
  func_0x000100504554(ppuVar4,&puStack_e0);
  uVar1 = *(undefined8 *)(puVar3 + 0x68);
  *(undefined8 *)(puVar3 + 0x68) = 0;
  _objc_release(uVar1);
  if ((ppuVar5 == (undefined **)0x0) ||
     (ppuVar6 = ppuVar5, func_0x00010bf529e0(), ppuVar6 == (undefined **)0x0)) {
    func_0x00010be29dc0(puVar3);
  }
  else {
    _objc_initWeak(auStack_e8,puVar3);
    uVar1 = *(undefined8 *)(puVar3 + 8);
    _objc_copyWeak(auStack_f0,auStack_e8);
    _objc_retain(ppuVar5);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(ppuVar5);
    _objc_destroyWeak(auStack_f0);
    _objc_destroyWeak(auStack_e8);
  }
  _objc_release(ppuVar5);
  _objc_release(puStack_c0);
  _objc_release(ppuVar4);
  _objc_release(puVar11);
  _objc_release(lVar7);
  _objc_release(ppuVar10);
  return;
}



/* Entry: 106d61c64; end: 106d61e4b; -[SCCommerceShowcaseViewModelProvider _performItemLoadingDidSucceedWithExtraData:favoriteItems:] */

void FUN_106d61c64(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar1 = param_4;
    func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_1109781d0);
    puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106d61e7c;
  puStack_78 = &UNK_1109781f0;
  _objc_retain(puVar5);
  lVar2 = lVar1;
  puStack_70 = puVar5;
  lStack_68 = param_1;
  func_0x000100504554(lVar1,&puStack_90);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar3);
  if ((lVar2 == 0) || (lVar4 = lVar2, func_0x00010bf529e0(), lVar4 == 0)) {
    func_0x00010be29dc0(param_1);
  }
  else {
    _objc_initWeak(auStack_98,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_a0,auStack_98);
    _objc_retain(lVar2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
  }
  _objc_release(lVar2);
  _objc_release(puStack_70);
  _objc_release(lVar1);
  _objc_release(puVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d61e4c; end: 106d61e7b;  */

void FUN_106d61e4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c115e60(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedLongLong__112615838,param_2)
  ;
  return;
}



/* Entry: 106d61e7c; end: 106d61f8f;  */

void FUN_106d61e7c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  puVar3 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = param_2;
    func_0x00010c115e60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c0df880(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010bf4b900();
    uVar7 = 1;
    if (iVar2 != 0) {
      uVar7 = 2;
    }
    _objc_release(puVar4);
  }
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38);
  func_0x00010c23b0e0(uVar5);
  uVar6 = param_2;
  FUN_106d5e234(param_2,0,puVar3,uVar1,uVar5,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 106d61f90; end: 106d61fc3;  */

void FUN_106d61f90(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d61fc4; end: 106d61fc7; -[SCCommerceShowcaseViewModelProvider _handleItemReloadIfNeeded] */

void FUN_106d61fc4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be11130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchFavoriteItems_112561de8);
  return;
}



/* Entry: 106d61fc8; end: 106d6206f; -[SCCommerceShowcaseViewModelProvider _fetchFavoriteItems] */

void FUN_106d61fc8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bfa6aa0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106d62070; end: 106d620b7;  */

void FUN_106d62070(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29540();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d620b8; end: 106d6218f; -[SCCommerceShowcaseViewModelProvider _handleFavoriteStateFetchSucceed:] */

void FUN_106d620b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106d62190; end: 106d621c3;  */

void FUN_106d62190(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee3840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d621c4; end: 106d6229b; -[SCCommerceShowcaseViewModelProvider _updateViewModelFavoriteStates:] */

void FUN_106d621c4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110978220);
    puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar1;
    _objc_release(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf51e00(uVar2);
    uVar3 = uVar2;
    func_0x00010bd86420();
    func_0x00010be8aa40(param_1);
    _objc_release(uVar3);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}


