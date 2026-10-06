/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1066f4b20; end: 1066f4cf7; -[SCLensExplorerQueryFactory _categoriesQueryWithFeedId:requestAllCategories:] */

undefined1 * FUN_1066f4b20(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cd2e8;
  func_0x00010c0934a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cd100;
  func_0x00010c0e8e20(PTR_PTR_1126cd100);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b6640(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (param_4 != 0) {
    ppuStack_60 = &PTR____CFConstantStringClassReference_110ea3e78;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  if (param_3 != 0) {
    puVar3 = puVar2;
    func_0x00010bf09f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar3;
  }
  func_0x00010c2b7220(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cd1f0;
  _objc_alloc(PTR_PTR_1126cd1f0);
  puVar4 = PTR_PTR_1126cd2f0;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar4;
  func_0x00010c03c460(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar7 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    plVar8 = &lStack_90;
    pcStack_68 = FUN_1066f4cf8;
    puStack_80 = puVar1;
    lStack_78 = param_3;
    puStack_70 = &stack0xfffffffffffffff0;
    _objc_retain(puVar10);
    puStack_88 = PTR_PTR_1126f2948;
    lStack_90 = lVar7;
    _objc_msgSendSuper2(&lStack_90,PTR_s_init_1125d9248);
    if (plVar8 != (long *)0x0) {
      _objc_retain(puVar10);
      uVar9 = *(undefined8 *)((long)plVar8 + 8);
      *(undefined **)((long)plVar8 + 8) = puVar10;
      _objc_release(uVar9);
    }
    _objc_release(puVar10);
    return (undefined1 *)plVar8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return puVar3;
}



/* Entry: 1066f4cf8; end: 1066f4d6b; -[SCLensExplorerBaseLensItemQueryProvider initWithQueryFactory:] */

undefined1 * FUN_1066f4cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2948;
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



/* Entry: 1066f4d6c; end: 1066f4d73; -[SCLensExplorerBaseLensItemQueryProvider fetchLensItemsQueryWithSectionDataSource:] */

void FUN_1066f4d6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa7ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_fetchLensesWithDataSource__1125c79a0);
  return;
}



/* Entry: 1066f4d74; end: 1066f4d7b; -[SCLensExplorerBaseLensItemQueryProvider refreshLensesQueryWithSectionDataSource:] */

void FUN_1066f4d74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1253d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_refreshLensesWithDataSource__112626f10);
  return;
}



/* Entry: 1066f4d7c; end: 1066f4d83; -[SCLensExplorerBaseLensItemQueryProvider fetchTailLensesQueryWithSectionDataSource:] */

void FUN_1066f4d7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaacd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_fetchTailLensesWithDataSource__1125c84d8);
  return;
}



/* Entry: 1066f4d84; end: 1066f4d8f; -[SCLensExplorerBaseLensItemQueryProvider .cxx_destruct] */

void FUN_1066f4d84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066f4d90; end: 1066f4e53; -[SCLensExplorerLensItemQueryProvider initWithQueryFactory:blocklistFilter:currentDateProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1066f4d90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f2950;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithQueryFactory__112531878,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11274e6d0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11274e6d4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1066f4e54; end: 1066f4fbb; -[SCLensExplorerLensItemQueryProvider fetchLensItemsQueryWithSectionDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066f4e54(double param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_70;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + _DAT_11274e6d4);
  func_0x00010bf5e5e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_11274e6d0;
  uVar2 = *(undefined8 *)(param_2 + lVar7);
  func_0x00010c08a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(uVar1);
  dVar9 = param_1;
  _objc_release(uVar2);
  func_0x00010c11d380(PTR_PTR_1126ccf40);
  if (dVar9 <= param_1) {
LAB_1066f4f5c:
    puStack_68 = PTR_PTR_1126f2950;
    puStack_70 = param_2;
    _objc_msgSendSuper2(&puStack_70,PTR_s_fetchLensItemsQueryWithSectionDa_1125c7958,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar8 = (long)_DAT_11274e6d8;
    if (*(long *)(param_2 + lVar8) != 0) {
      lVar3 = *(long *)(param_2 + lVar7);
      func_0x00010c08a660();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf433a0();
      _objc_release(lVar3);
      if (lVar4 == 0) goto LAB_1066f4f5c;
    }
    uVar2 = *(undefined8 *)(param_2 + lVar7);
    func_0x00010c08a660();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + lVar8);
    *(undefined8 *)(param_2 + lVar8) = uVar2;
    _objc_release(uVar6);
    func_0x00010c1253a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = (undefined1 **)param_2;
  }
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 1066f4fbc; end: 1066f500b; -[SCLensExplorerLensItemQueryProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066f4fbc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274e6d8,0);
  _objc_storeStrong(param_1 + _DAT_11274e6d4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274e6d0,0);
  return;
}



/* Entry: 1066f500c; end: 1066f507f; -[SCLensExplorerBatchQueryStatusChecker initWithQueryStatusChecker:] */

undefined1 * FUN_1066f500c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2958;
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



/* Entry: 1066f5080; end: 1066f5087; -[SCLensExplorerBatchQueryStatusChecker currentQuery] */

void FUN_1066f5080(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5fc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_currentQuery_1125b58c0);
  return;
}



/* Entry: 1066f5088; end: 1066f5147; -[SCLensExplorerBatchQueryStatusChecker canPerformQuery:] */

uint FUN_1066f5088(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint uVar5;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf2d060(uVar1,param_2,param_3);
  if ((int)uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c11d680(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c11daa0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cd100;
    func_0x00010c0e8e20(PTR_PTR_1126cd100);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0720c0(uVar2,param_2,puVar3);
    uVar5 = (uint)uVar4 ^ 1;
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 1066f5148; end: 1066f514f; -[SCLensExplorerBatchQueryStatusChecker finishMonitoringQuery:] */

void FUN_1066f5148(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_finishMonitoringQuery__1125c9820);
  return;
}



/* Entry: 1066f5150; end: 1066f5157; -[SCLensExplorerBatchQueryStatusChecker activateCacheForQuery:] */

void FUN_1066f5150(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beef7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_activateCacheForQuery__112599790);
  return;
}



/* Entry: 1066f5158; end: 1066f515f; -[SCLensExplorerBatchQueryStatusChecker cancelInProgressQuery:] */

void FUN_1066f5158(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2e530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cancelInProgressQuery__1125a92f0);
  return;
}



/* Entry: 1066f5160; end: 1066f5167; -[SCLensExplorerBatchQueryStatusChecker cancelAllInProgressQueries] */

void FUN_1066f5160(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cancelAllInProgressQueries_1125a90e8);
  return;
}



/* Entry: 1066f5168; end: 1066f5173; -[SCLensExplorerBatchQueryStatusChecker .cxx_destruct] */

void FUN_1066f5168(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066f5174; end: 1066f51f7; -[SCLensExplorerNoBatchRefreshQueryStatusChecker initWithQueryStatusChecker:] */

undefined1 * FUN_1066f5174(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2960;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066f51f8; end: 1066f51ff; -[SCLensExplorerNoBatchRefreshQueryStatusChecker currentQuery] */

void FUN_1066f51f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5fc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_currentQuery_1125b58c0);
  return;
}



/* Entry: 1066f5200; end: 1066f53eb; -[SCLensExplorerNoBatchRefreshQueryStatusChecker canPerformQuery:] */

uint FUN_1066f5200(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf2d060(uVar1,param_2,param_3);
  if ((int)uVar1 == 0) {
    uVar9 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x20);
    if (*(long *)(param_1 + 0x18) == 0) {
      uVar9 = 1;
    }
    else {
      uVar1 = param_3;
      func_0x00010c11d680(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c11d680(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c11daa0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126cd100;
      func_0x00010c0e8e20(PTR_PTR_1126cd100);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c0720c0(uVar3,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(uVar3);
      uVar3 = uVar1;
      func_0x00010c137200(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010bf4b900();
      _objc_release(uVar3);
      uVar3 = uVar2;
      func_0x00010c11daa0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126cd100;
      func_0x00010c0e8e20(PTR_PTR_1126cd100);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010c0720c0(uVar3,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(uVar3);
      uVar3 = uVar2;
      func_0x00010c137200(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      func_0x00010bf4b900();
      _objc_release(uVar3);
      uVar9 = (uint)uVar5 & (uint)uVar7 & (uint)uVar6 & (uint)uVar8 ^ 1;
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
    _os_unfair_lock_unlock(param_1 + 0x20);
  }
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 1066f53ec; end: 1066f5437; -[SCLensExplorerNoBatchRefreshQueryStatusChecker cancelInProgressQuery:] */

void FUN_1066f53ec(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf2e520(*(undefined8 *)(param_1 + 8));
  _os_unfair_lock_lock(param_1 + 0x20);
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x20);
  return;
}



/* Entry: 1066f5438; end: 1066f547f; -[SCLensExplorerNoBatchRefreshQueryStatusChecker cancelAllInProgressQueries] */

void FUN_1066f5438(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf2dd00(*(undefined8 *)(param_1 + 8));
  _os_unfair_lock_lock(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x20);
  return;
}



/* Entry: 1066f5480; end: 1066f54d7; -[SCLensExplorerNoBatchRefreshQueryStatusChecker finishMonitoringQuery:] */

void FUN_1066f5480(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bfaf9e0(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x20);
  return;
}



/* Entry: 1066f54d8; end: 1066f5523; -[SCLensExplorerNoBatchRefreshQueryStatusChecker activateCacheForQuery:] */

void FUN_1066f54d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010beef7a0(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x20);
  return;
}



/* Entry: 1066f5524; end: 1066f555f; -[SCLensExplorerNoBatchRefreshQueryStatusChecker .cxx_destruct] */

void FUN_1066f5524(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066f5560; end: 1066f5613; -[SCLensExplorerQueryStatusChecker initWithQueryDeduplicationGap:] */

undefined1 * FUN_1066f5560(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f2968;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    puVar2 = PTR_PTR_1126aeea8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1066f5614; end: 1066f5807; -[SCLensExplorerQueryStatusChecker canPerformQuery:] */

ulong FUN_1066f5614(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  uVar1 = param_1;
  func_0x00010be33fa0(param_1,param_2,param_3);
  uVar2 = param_1;
  func_0x00010c089b60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  _objc_release(uVar2);
  _os_unfair_lock_unlock(param_1 + 0x18);
  if ((uVar1 & 1) != 0) {
    param_1 = 0;
    goto LAB_1066f5744;
  }
  uVar1 = param_3;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11daa0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cd100;
  func_0x00010c151d20(PTR_PTR_1126cd100);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0720c0(uVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar2);
  if ((uVar5 & 1) == 0) {
    uVar2 = uVar1;
    func_0x00010c11daa0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126cd100;
    func_0x00010c125040(PTR_PTR_1126cd100);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c0720c0(uVar2,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar2);
    if ((uVar5 & 1) != 0) goto LAB_1066f5738;
    uVar2 = uVar3;
    func_0x00010c11d680();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_retain(uVar1);
    if (uVar2 != uVar1) {
      if (uVar1 == 0) {
        _objc_release();
        _objc_release(uVar2);
      }
      else {
        uVar5 = uVar2;
        func_0x00010c071ae0(uVar2,param_2,uVar1);
        _objc_release(uVar1);
        _objc_release(uVar2);
        _objc_release(uVar2);
        if ((int)uVar5 != 0) goto LAB_1066f57e4;
      }
      goto LAB_1066f5738;
    }
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar2);
LAB_1066f57e4:
    func_0x00010be3fd60(param_1,param_2,param_3);
  }
  else {
LAB_1066f5738:
    param_1 = 1;
  }
  _objc_release(uVar1);
LAB_1066f5744:
  _objc_release(uVar3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1066f5808; end: 1066f5963; -[SCLensExplorerQueryStatusChecker finishMonitoringQuery:] */

void FUN_1066f5808(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    _os_unfair_lock_unlock(param_1 + 0x18);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x1066f58e0;
    puStack_40 = &UNK_110936140;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010bfece40(lVar1,param_2,&puStack_58);
    if (lVar1 != 0x7fffffffffffffff) {
      func_0x00010c12d3c0(*(undefined8 *)(param_1 + 0x20),param_2,lVar1);
      func_0x00010c1b85c0(param_1,param_2,param_3);
    }
    _os_unfair_lock_unlock(param_1 + 0x18);
    _objc_release(uStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066f5964; end: 1066f59d3; -[SCLensExplorerQueryStatusChecker activateCacheForQuery:] */

void FUN_1066f5964(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf5e5e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b84e0(param_1,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x18);
  return;
}



/* Entry: 1066f59d4; end: 1066f5b0b; -[SCLensExplorerQueryStatusChecker cancelInProgressQuery:] */

void FUN_1066f59d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1066f5a88;
  puStack_40 = &UNK_110936140;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010bfece40(lVar1,param_2,&puStack_58);
  if (lVar1 != 0x7fffffffffffffff) {
    func_0x00010c12d3c0(*(undefined8 *)(param_1 + 0x20),param_2,lVar1);
  }
  _os_unfair_lock_unlock(param_1 + 0x18);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066f5b0c; end: 1066f5b5f; -[SCLensExplorerQueryStatusChecker cancelAllInProgressQueries] */

void FUN_1066f5b0c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _os_unfair_lock_lock(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c1b84e0(param_1,param_2,0);
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1b85c0(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x18);
  return;
}



/* Entry: 1066f5b60; end: 1066f5bf7; -[SCLensExplorerQueryStatusChecker _isDuplicatedQuery:] */

bool FUN_1066f5b60(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  
  _os_unfair_lock_lock(param_2 + 0x18);
  lVar1 = param_2;
  func_0x00010c0899a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf51e00();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf5e5e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_2 + 0x18);
  func_0x00010c26f380(uVar3,param_3,lVar2);
  dVar4 = *(double *)(param_2 + 0x10);
  _objc_release(uVar3);
  _objc_release(lVar2);
  return dVar4 < param_1;
}



/* Entry: 1066f5bf8; end: 1066f5e4f; -[SCLensExplorerQueryStatusChecker _hasInProgressQuery:] */

undefined8 FUN_1066f5bf8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
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
  uVar1 = param_3;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c11d960();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar7 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar7);
  lVar3 = lVar7;
  func_0x00010bf52a60(lVar7,param_2,&uStack_130,auStack_f0,0x10);
  uVar6 = 0;
  if (lVar3 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar7);
        }
        uVar8 = *(ulong *)(lStack_128 + lVar10 * 8);
        uVar4 = uVar8;
        func_0x00010c11d680();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        _objc_retain(uVar1);
        if (uVar4 == uVar1) {
          _objc_release(uVar1);
          _objc_release(uVar4);
LAB_1066f5d28:
          func_0x00010c11d960();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          _objc_retain(uVar2);
          if (uVar8 == uVar2) {
            _objc_release(uVar2);
            _objc_release(uVar8);
            _objc_release(uVar8);
            _objc_release(uVar4);
          }
          else {
            if (uVar2 == 0) {
              _objc_release();
              uVar5 = uVar8;
              goto LAB_1066f5d90;
            }
            uVar5 = uVar8;
            func_0x00010c0720c0(uVar8,param_2,uVar2);
            _objc_release(uVar2);
            _objc_release(uVar8);
            _objc_release(uVar8);
            _objc_release(uVar4);
            if ((uVar5 & 1) == 0) goto LAB_1066f5da0;
          }
          uVar6 = 1;
          goto LAB_1066f5df0;
        }
        uVar5 = uVar4;
        if (uVar1 == 0) {
LAB_1066f5d90:
          _objc_release(uVar5);
        }
        else {
          func_0x00010c071ae0(uVar4,param_2,uVar1);
          _objc_release(uVar1);
          _objc_release(uVar4);
          if ((int)uVar5 != 0) goto LAB_1066f5d28;
        }
        _objc_release(uVar4);
LAB_1066f5da0:
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = lVar7;
      func_0x00010bf52a60(lVar7,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar3 != 0);
    uVar6 = 0;
  }
LAB_1066f5df0:
  _objc_release(lVar7);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _os_unfair_lock_lock(param_3 + 0x18);
    uVar6 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c089820(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_unlock(param_3 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
    return uVar6;
  }
  return uVar6;
}



/* Entry: 1066f5e50; end: 1066f5e93; -[SCLensExplorerQueryStatusChecker currentQuery] */

void FUN_1066f5e50(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c089820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066f5e94; end: 1066f5e9f; -[SCLensExplorerQueryStatusChecker lastQuery] */

void FUN_1066f5e94(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 1066f5ea0; end: 1066f5ea7; -[SCLensExplorerQueryStatusChecker setLastQuery:] */

void FUN_1066f5ea0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1066f5ea8; end: 1066f5eb3; -[SCLensExplorerQueryStatusChecker lastPassedQueryCheckTime] */

void FUN_1066f5ea8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x30,1);
  return;
}



/* Entry: 1066f5eb4; end: 1066f5ebb; -[SCLensExplorerQueryStatusChecker setLastPassedQueryCheckTime:] */

void FUN_1066f5eb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1066f5ebc; end: 1066f5f03; -[SCLensExplorerQueryStatusChecker .cxx_destruct] */

void FUN_1066f5ebc(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066f5f04; end: 1066f5fa7; -[SCLensExplorerRankingQueryStatusChecker initWithQueryStatusChecker:remoteStateProvider:] */

undefined1 *
FUN_1066f5f04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2970;
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



/* Entry: 1066f5fa8; end: 1066f5faf; -[SCLensExplorerRankingQueryStatusChecker currentQuery] */

void FUN_1066f5fa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5fc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_currentQuery_1125b58c0);
  return;
}



/* Entry: 1066f5fb0; end: 1066f60c3; -[SCLensExplorerRankingQueryStatusChecker canPerformQuery:] */

uint FUN_1066f5fb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf2d060(uVar1,param_2,param_3);
  if ((int)uVar1 == 0) {
    uVar7 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c11d680(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c11daa0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cd100;
    func_0x00010c151d20(PTR_PTR_1126cd100);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0720c0(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
    lVar5 = *(long *)(param_1 + 0x10);
    func_0x00010c12a440();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      uVar7 = 1;
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c12a440(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar6;
      func_0x00010bfd93c0();
      uVar7 = (uint)uVar2 ^ 1;
      _objc_release(uVar6);
    }
    _objc_release(lVar5);
    uVar7 = (uint)uVar4 & uVar7 ^ 1;
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 1066f60c4; end: 1066f60cb; -[SCLensExplorerRankingQueryStatusChecker cancelInProgressQuery:] */

void FUN_1066f60c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2e530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cancelInProgressQuery__1125a92f0);
  return;
}



/* Entry: 1066f60cc; end: 1066f60d3; -[SCLensExplorerRankingQueryStatusChecker cancelAllInProgressQueries] */

void FUN_1066f60cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cancelAllInProgressQueries_1125a90e8);
  return;
}



/* Entry: 1066f60d4; end: 1066f60db; -[SCLensExplorerRankingQueryStatusChecker finishMonitoringQuery:] */

void FUN_1066f60d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_finishMonitoringQuery__1125c9820);
  return;
}



/* Entry: 1066f60dc; end: 1066f60e3; -[SCLensExplorerRankingQueryStatusChecker activateCacheForQuery:] */

void FUN_1066f60dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beef7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_activateCacheForQuery__112599790);
  return;
}



/* Entry: 1066f60e4; end: 1066f6113; -[SCLensExplorerRankingQueryStatusChecker .cxx_destruct] */

void FUN_1066f60e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066f6114; end: 1066f6263; -[SCLensExplorerSelectedBatchQueryStatusChecker initWithQueryStatusChecker:categoriesAggregators:] */

undefined8 *
FUN_1066f6114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f2978;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_58,puVar1);
    _objc_copyWeak(auStack_60,auStack_58);
    uVar2 = param_4;
    func_0x00010c25ff60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1066f6264; end: 1066f62ab;  */

void FUN_1066f6264(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea2980();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066f62ac; end: 1066f62db; -[SCLensExplorerSelectedBatchQueryStatusChecker _setCategoriesAggregator:] */

void FUN_1066f62ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066f62dc; end: 1066f62e3; -[SCLensExplorerSelectedBatchQueryStatusChecker currentQuery] */

void FUN_1066f62dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5fc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_currentQuery_1125b58c0);
  return;
}



/* Entry: 1066f62e4; end: 1066f649f; -[SCLensExplorerSelectedBatchQueryStatusChecker canPerformQuery:] */

uint FUN_1066f62e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  uint uVar10;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf2d060(uVar1,param_2,param_3);
  if ((int)uVar1 == 0) {
    uVar10 = 0;
    goto LAB_1066f6478;
  }
  uVar1 = param_3;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c1593e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c137200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf334a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf4b900(uVar3,param_2,uVar4);
  if ((int)uVar5 == 0) {
    uVar5 = uVar2;
    func_0x00010c156b00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c11d680(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c155f60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf4b900(uVar5,param_2,uVar7);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((int)uVar8 != 0) goto LAB_1066f6410;
    uVar10 = 1;
  }
  else {
    _objc_release(uVar4);
    _objc_release(uVar3);
LAB_1066f6410:
    uVar3 = uVar1;
    func_0x00010c11daa0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126cd100;
    func_0x00010c0e8e20(PTR_PTR_1126cd100);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0(uVar3,param_2,puVar9);
    _objc_release(puVar9);
    _objc_release(uVar3);
    uVar10 = (uint)uVar4 ^ 1;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
LAB_1066f6478:
  _objc_release(param_3);
  return uVar10;
}



/* Entry: 1066f64a0; end: 1066f64a7; -[SCLensExplorerSelectedBatchQueryStatusChecker finishMonitoringQuery:] */

void FUN_1066f64a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_finishMonitoringQuery__1125c9820);
  return;
}



/* Entry: 1066f64a8; end: 1066f64af; -[SCLensExplorerSelectedBatchQueryStatusChecker activateCacheForQuery:] */

void FUN_1066f64a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beef7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_activateCacheForQuery__112599790);
  return;
}



/* Entry: 1066f64b0; end: 1066f64b7; -[SCLensExplorerSelectedBatchQueryStatusChecker cancelInProgressQuery:] */

void FUN_1066f64b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2e530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cancelInProgressQuery__1125a92f0);
  return;
}



/* Entry: 1066f64b8; end: 1066f64bf; -[SCLensExplorerSelectedBatchQueryStatusChecker cancelAllInProgressQueries] */

void FUN_1066f64b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cancelAllInProgressQueries_1125a90e8);
  return;
}



/* Entry: 1066f64c0; end: 1066f64fb; -[SCLensExplorerSelectedBatchQueryStatusChecker .cxx_destruct] */

void FUN_1066f64c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066f64fc; end: 1066f65d3; -[SCLensExplorerSelectedBatchQueryStatusCheckerFactory setCategoriesAggregatorObservable:] */

void FUN_1066f64fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1066f65d4; end: 1066f6623;  */

void FUN_1066f65d4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 8));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066f6624; end: 1066f667f; -[SCLensExplorerSelectedBatchQueryStatusCheckerFactory decoratedStatusCheckerWithStatusChecker:] */

void FUN_1066f6624(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cd2f8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c03c4a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066f6680; end: 1066f66bb; -[SCLensExplorerSelectedBatchQueryStatusCheckerFactory reset] */

void FUN_1066f6680(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 1066f66bc; end: 1066f66eb; -[SCLensExplorerSelectedBatchQueryStatusCheckerFactory .cxx_destruct] */

void FUN_1066f66bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066f66ec; end: 1066f67e7; -[SCLensExplorerGRPCRequestManager initWithGrpcClientFactory:serviceURL:performer:lensCoreVersionProvider:] */

undefined1 *
FUN_1066f66ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f2988;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066f67e8; end: 1066f6a7f; -[SCLensExplorerGRPCRequestManager sendRequest:completion:] */

void FUN_1066f67e8(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126ae748;
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = param_3;
  func_0x00010c1421c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078d80();
  _objc_release(puVar3);
  if ((int)puVar4 != 0) {
    puVar4 = param_3;
    func_0x00010c1421c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010bef9140(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126bbf90;
  func_0x00010c091f80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bbf90;
  func_0x00010c091f60(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c091fa0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9140(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010bdee5a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2798;
  _objc_opt_new();
  puVar3 = param_3;
  func_0x00010c135180();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  puVar5 = puVar3;
  func_0x00010c093940(param_1);
  _objc_release(puVar3);
  _objc_retain(puVar4);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  _objc_retain(puVar5);
  if (puVar5 == (undefined *)0x0) {
    iVar1 = (int)*(undefined8 *)(param_3 + 0x20);
    func_0x00010c06e0e0();
    if (iVar1 != 0) {
      puVar5 = PTR_PTR_1126ccf50;
      func_0x00010c134de0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 != (undefined *)0x0) goto LAB_1066f6ab0;
    }
    puVar4 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
LAB_1066f6ab0:
    puVar4 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  lVar6 = *(long *)(param_3 + 0x28);
  if (lVar6 != 0) {
    (**(code **)(lVar6 + 0x10))(lVar6,puVar4);
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066f6a80; end: 1066f6b4b;  */

void FUN_1066f6a80(long param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c06e0e0();
    if (iVar1 != 0) {
      param_3 = PTR_PTR_1126ccf50;
      func_0x00010c134de0();
      _objc_retainAutoreleasedReturnValue();
      if (param_3 != (undefined *)0x0) goto LAB_1066f6ab0;
    }
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
LAB_1066f6ab0:
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,puVar2);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066f6b4c; end: 1066f6c5b; -[SCLensExplorerGRPCRequestManager _createGrpcServiceIfNeeded] */

void FUN_1066f6b4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 == 0) {
    puVar1 = PTR_PTR_1126ae728;
    func_0x00010bf24820(PTR_PTR_1126ae728);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bfe4420(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196320(puVar1,param_2,uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010c1eeba0(puVar1,param_2,60000);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c214be0(puVar1,param_2,30000);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf56360(uVar2,param_2,&PTR____CFConstantStringClassReference_110e5a558,puVar1,
                        *(undefined8 *)(param_1 + 0x18));
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cd300;
    _objc_alloc();
    func_0x00010c058f80();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar3;
    _objc_release(uVar4);
    lVar5 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar5);
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
  else {
    _objc_retain(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1066f6c5c; end: 1066f6caf; -[SCLensExplorerGRPCRequestManager .cxx_destruct] */

void FUN_1066f6c5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066f6cb0; end: 1066f6dab; -[SCLensExplorerHTTPRequestManager initWithHTTPMetadataService:httpRequestModifier:performer:lensCoreVersionProvider:] */

undefined1 *
FUN_1066f6cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f2990;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066f6dac; end: 1066f6ecf; -[SCLensExplorerHTTPRequestManager sendRequest:completion:] */

void FUN_1066f6dac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be36520(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be364a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1066f6ed0;
  puStack_50 = &UNK_11086d168;
  uStack_48 = param_4;
  _objc_retain(param_4);
  func_0x00010c25f600(uVar4,param_2,lVar1,lVar2,uVar3,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1066f6ed0; end: 1066f701f;  */

void FUN_1066f6ed0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (((param_3 == 0) && (param_5 != 0)) && (param_6 == 0)) {
    puVar1 = PTR_PTR_1126cc9c8;
    func_0x00010be95220();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126af5d0;
    if (puVar1 == (undefined *)0x0) {
      puVar3 = PTR_PTR_1126ccf50;
      func_0x00010c13bae0(PTR_PTR_1126ccf50);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa01c0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    else {
      func_0x00010c2619e0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
  }
  else {
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x10))(lVar4,puVar2);
  }
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066f7020; end: 1066f71d7; -[SCLensExplorerHTTPRequestManager _httpRequestFromRequest:] */

void FUN_1066f7020(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bbf90;
  func_0x00010c091f60(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c091fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = param_3;
  func_0x00010c136f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bbf90;
  func_0x00010c091f80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c135180(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010bf225e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  func_0x00010c290a40(param_2);
  func_0x00010c2907c0(param_2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar5 = *(undefined8 *)(puVar1 + 0x20);
  func_0x00010c1421c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078d80();
  if ((int)puVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(puVar1 + 0x20);
    func_0x00010c1421c0(uVar6);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar5);
  func_0x00010c2901c0(param_2);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066f71d8; end: 1066f7283;  */

void FUN_1066f71d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  func_0x00010c290a40(param_2);
  func_0x00010c2907c0(param_2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1421c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078d80();
  if ((int)puVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c1421c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  func_0x00010c2901c0(param_2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066f7284; end: 1066f739f; -[SCLensExplorerHTTPRequestManager _httpContextFromRequest:] */

void FUN_1066f7284(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126b5730;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  ppuStack_50 = &PTR____CFConstantStringClassReference_110e44958;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = param_3;
  func_0x00010c0c2700(param_3);
  _objc_release(param_3);
  func_0x00010c0df840(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  func_0x00010c01b560(puVar1,param_2,0,0,puVar2,0,0,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126cd308;
    _objc_retain(uVar4);
    _objc_alloc(puVar1);
    func_0x00010c008360();
    _objc_release(uVar4);
    _objc_retain(puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066f73a0; end: 1066f741b; +[SCLensExplorerHTTPRequestManager _responseFromData:] */

void FUN_1066f73a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cd308;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c008360();
  _objc_release(param_3);
  _objc_retain(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066f741c; end: 1066f7463; -[SCLensExplorerHTTPRequestManager .cxx_destruct] */

void FUN_1066f741c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066f7464; end: 1066f74ff; -[SCLensExplorerCountryCodeProviderImpl countryCode] */

void FUN_1066f7464(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c06d500(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,*(undefined8 *)(param_1 + 0x10));
  if (((ulong)puVar1 & 1) == 0) {
    ppuVar4 = *(undefined ***)(param_1 + 0x10);
    _objc_retain(ppuVar4);
  }
  else {
    ppuVar2 = *(undefined ***)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110f13d78;
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar4 = ppuVar3;
    }
    _objc_retain(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 1066f7500; end: 1066f752f; -[SCLensExplorerCountryCodeProviderImpl .cxx_destruct] */

void FUN_1066f7500(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066f7530; end: 1066f75d3; -[SCLensExplorerRequestDataProvider initWithCountryCodeProvider:interactionHistoryProvider:] */

undefined1 *
FUN_1066f7530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f29a0;
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



/* Entry: 1066f75d4; end: 1066f76eb; -[SCLensExplorerRequestDataProvider lensesRequestDataWithQuery:streamToken:] */

void FUN_1066f75d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c137200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd2aa0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c11daa0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cd100;
  func_0x00010c151d20(PTR_PTR_1126cd100);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    func_0x00010c20e580(param_1,param_2,param_4);
  }
  puVar2 = PTR_PTR_1126cd310;
  uVar1 = param_3;
  func_0x00010bf4e080(param_3);
  func_0x00010be90cc0(puVar2,param_2,uVar1);
  func_0x00010c182d40(param_1,param_2,puVar2);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1066f76ec; end: 1066f77b7; -[SCLensExplorerRequestDataProvider _baseLensExplorerRequestedFeedIds:] */

void FUN_1066f76ec(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cd318;
  _objc_opt_new(PTR_PTR_1126cd318);
  lVar2 = param_1;
  func_0x00010be91240(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd80(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    puVar3 = puVar1;
    func_0x00010bfa3e00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0685c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e7460(puVar1,param_2,uVar4);
    _objc_release(uVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066f77b8; end: 1066f78ab; -[SCLensExplorerRequestDataProvider _requestInfo] */

void FUN_1066f77b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126c0370;
  _objc_opt_new(PTR_PTR_1126c0370);
  puVar2 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c2673e0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2158a0(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf53280(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c184aa0(puVar1,param_2,uVar4);
  _objc_release(uVar4);
  lVar5 = param_1;
  func_0x00010bdc3d60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160c80(puVar1,param_2,lVar5);
  _objc_release(lVar5);
  func_0x00010be9bc80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7220(puVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066f78ac; end: 1066f78ff; -[SCLensExplorerRequestDataProvider _acceptLanguageString] */

void FUN_1066f78ac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010c106cc0(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066f7900; end: 1066f798f; -[SCLensExplorerRequestDataProvider _screenInfo] */

void FUN_1066f7900(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c0378;
  _objc_opt_new(PTR_PTR_1126c0378);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cd20();
  func_0x00010c1f7640(puVar1,param_3,(int)param_1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cd00();
  func_0x00010c1f71e0(puVar1,param_3,(int)param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066f7990; end: 1066f79b3; +[SCLensExplorerRequestDataProvider _requestContextFromContext:] */

undefined4 FUN_1066f7990(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0xc) {
    return *(undefined4 *)(&UNK_10dddd550 + (param_3 - 1U) * 4);
  }
  return 0;
}



/* Entry: 1066f79b4; end: 1066f79e3; -[SCLensExplorerRequestDataProvider .cxx_destruct] */

void FUN_1066f79b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066f79e4; end: 1066f7abf; -[SCLensExplorerRequestProvider initWithRequestDataProvider:requestUrl:apiRouteTag:maxNumOfRequestAttempts:] */

undefined1 *
FUN_1066f79e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f29a8;
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



/* Entry: 1066f7ac0; end: 1066f7b17; -[SCLensExplorerRequestProvider categoriesBatchRequestWithQuery:] */

void FUN_1066f7ac0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c098740(uVar1,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4ac00(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1066f7b18; end: 1066f7b6b; -[SCLensExplorerRequestProvider lensesRequestWithQuery:streamToken:] */

void FUN_1066f7b18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c098740(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4ac00(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1066f7b6c; end: 1066f7beb; -[SCLensExplorerRequestProvider _lensExplorerRequestWithRequestData:] */

void FUN_1066f7b6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c25d0c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126cd320;
  _objc_alloc(PTR_PTR_1126cd320);
  func_0x00010c03f5e0();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066f7bec; end: 1066f7c27; -[SCLensExplorerRequestProvider .cxx_destruct] */

void FUN_1066f7bec(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066f7c28; end: 1066f7cb7; -[SCLensExplorerRequestProviderFactory lensItemsRequestProvider] */

void FUN_1066f7c28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126cd310;
  _objc_alloc(PTR_PTR_1126cd310);
  func_0x00010c006320();
  puVar2 = PTR_PTR_1126cd328;
  _objc_alloc(PTR_PTR_1126cd328);
  lVar3 = param_1;
  func_0x00010c136f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03ede0(puVar2,param_2,puVar1,lVar3,*(undefined8 *)(param_1 + 0x20),5);
  _objc_release(lVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066f7cb8; end: 1066f7cd3; -[SCLensExplorerRequestProviderFactory responseParser] */

void FUN_1066f7cb8(void)

{
  _objc_opt_new(PTR_PTR_1126cd330);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066f7cd4; end: 1066f7d1b; -[SCLensExplorerRequestProviderFactory baseLensExplorerURL] */

void FUN_1066f7cd4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c06d500(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,*(undefined8 *)(param_1 + 0x18));
  if (((ulong)puVar1 & 1) == 0) {
    ppuVar2 = *(undefined ***)(param_1 + 0x18);
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110def498;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc3470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSURL_1126ae598,PTR_s_URLWithString__11254e6b8,ppuVar2);
  return;
}



/* Entry: 1066f7d1c; end: 1066f7d67; -[SCLensExplorerRequestProviderFactory requestUrl] */

void FUN_1066f7d1c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf16040();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066f7d68; end: 1066f7daf; -[SCLensExplorerRequestProviderFactory .cxx_destruct] */

void FUN_1066f7d68(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066f7db0; end: 1066f7e73; -[SCLensExplorerResponseParser feedsFromBatchResponseData:] */

void FUN_1066f7db0(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
    func_0x00010bfa4600(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1066f7e74;
    puStack_40 = &UNK_110936250;
    _objc_retain(param_3);
    puVar2 = puVar1;
    puStack_38 = param_3;
    func_0x00010bfb2660(puVar1,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_38);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066f7e74; end: 1066f839f;  */

void FUN_1066f7e74(long param_1,undefined *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  _objc_retain(param_2);
  puVar9 = param_2;
  func_0x00010bfd7080();
  if ((int)puVar9 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar2 = param_2;
    func_0x00010bfa3ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar2;
    func_0x00010bfa4040();
    puVar9 = (undefined *)0x0;
    iVar1 = (int)puVar12;
    if (iVar1 != 0) {
      if (iVar1 == 2) {
        puVar9 = puVar2;
        func_0x00010c25e9e0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar9;
        func_0x00010bfa3d00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        puVar9 = puVar2;
        func_0x00010c25e9e0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar9;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        puVar9 = puVar2;
        func_0x00010c25e9e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        puVar11 = PTR_PTR_1126ccdf8;
        func_0x00010c25ea80(PTR_PTR_1126ccdf8);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = (undefined *)0x0;
      }
      else {
        puVar10 = (undefined *)0x0;
        puVar12 = (undefined *)0x0;
        puVar11 = (undefined *)0x0;
        puVar8 = (undefined *)0x0;
        puVar3 = puVar9;
        if (iVar1 == 1) {
          puVar9 = puVar2;
          func_0x00010bf33240(puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar9;
          func_0x00010bfa3d00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar9);
          puVar9 = puVar2;
          func_0x00010bf33240(puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar9;
          func_0x00010bf85d80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar9);
          puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          puVar12 = puVar2;
          func_0x00010bf33240(puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar12;
          func_0x00010c260dc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c078d80();
          _objc_release(puVar10);
          _objc_release(puVar12);
          if ((int)puVar9 == 0) {
            puVar10 = (undefined *)0x0;
          }
          else {
            puVar9 = puVar2;
            func_0x00010bf33240();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar9;
            func_0x00010c260dc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar9);
          }
          puVar9 = puVar2;
          func_0x00010bf33240(puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar9;
          func_0x00010c25e9c0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar12;
          func_0x00010c0b8600();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar12);
          _objc_release(puVar9);
          puVar11 = PTR_PTR_1126ccdf8;
          func_0x00010bf336a0(PTR_PTR_1126ccdf8);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010bf69600();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar2;
          func_0x00010bf33240(puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar9;
          func_0x00010bfa3d00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0720c0();
          _objc_release(puVar12);
          _objc_release(puVar9);
          _objc_release(uVar5);
          puVar12 = PTR__OBJC_CLASS___NSURL_1126ae598;
          puVar9 = puVar2;
          func_0x00010bf33240(puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar9;
          func_0x00010bfe5b40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdc3420();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          _objc_release(puVar9);
          _objc_release(puVar4);
        }
      }
      puVar9 = param_2;
      func_0x00010c084fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar9;
      func_0x00010bfb2660();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      puVar4 = PTR____NSArray0__struct_11034ab48;
      if (puVar6 != (undefined *)0x0) {
        puVar4 = puVar6;
      }
      _objc_retain(puVar4);
      _objc_release(puVar6);
      puVar7 = PTR_PTR_1126ccc80;
      _objc_alloc(PTR_PTR_1126ccc80);
      puVar9 = param_2;
      func_0x00010c25c6c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd9280(param_2);
      func_0x00010c04e760(puVar7);
      _objc_release(puVar9);
      puVar9 = param_2;
      func_0x00010bfd52a0();
      puVar6 = PTR_PTR_1126cd330;
      if ((int)puVar9 == 0) {
        func_0x00010c130180(param_2);
        func_0x00010c1301e0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar9 = param_2;
        func_0x00010bf335a0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1301a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
      }
      func_0x00010bef0180(param_2);
      func_0x00010bfa3640();
      puVar9 = PTR_PTR_1126ccc88;
      _objc_alloc(PTR_PTR_1126ccc88);
      func_0x00010c012580();
      _objc_release(puVar4);
      _objc_release(puVar6);
      _objc_release(puVar7);
      _objc_release(puVar11);
      _objc_release(puVar12);
      _objc_release(puVar10);
      _objc_release(puVar3);
      _objc_release(puVar8);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1066f83a0; end: 1066f8417;  */

void FUN_1066f83a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cce00;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c25ea60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c04ee40(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066f8418; end: 1066f8427;  */

void FUN_1066f8418(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa3f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ccc20,PTR_s_feedItemWithCategoryItem__1125c6968,param_2);
  return;
}



/* Entry: 1066f8428; end: 1066f85fb; -[SCLensExplorerResponseParser feedFromLensCollectionResponseData:] */

void FUN_1066f8428(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar2 = PTR_PTR_1126cd338;
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bfe5ea0();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110db1798);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  puVar4 = PTR_PTR_1126ccdf8;
  func_0x00010bf336a0(PTR_PTR_1126ccdf8,param_2,puVar3,PTR____NSArray0__struct_11034ab48);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c0975a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 != (undefined *)0x0) {
    puVar1 = puVar6;
  }
  _objc_retain(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126ccc80;
  _objc_alloc(PTR_PTR_1126ccc80);
  func_0x00010c04e760();
  puVar6 = PTR_PTR_1126cd330;
  func_0x00010c1301e0(PTR_PTR_1126cd330,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ccc88;
  _objc_alloc(PTR_PTR_1126ccc88);
  puVar8 = puVar2;
  func_0x00010c0d4f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c012580(puVar7,param_2,puVar3,puVar8,0,puVar4,puVar1,puVar5,puVar6,0);
  _objc_release(puVar1);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}


