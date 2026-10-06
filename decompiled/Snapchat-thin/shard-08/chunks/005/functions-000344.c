/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1061ea2d8; end: 1061ea327; -[SCVerticalSwipeHintView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ea2d8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112742c10,0);
  _objc_storeStrong(param_1 + _DAT_112742c0c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112742c08,0);
  return;
}



/* Entry: 1061ea328; end: 1061ea40f; -[SCLensExplorerCategoryPageFetcher initWithFeedLensesProvider:performer:feedId:] */

undefined1 *
FUN_1061ea328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f04d0;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061ea410; end: 1061ea4ff; -[SCLensExplorerCategoryPageFetcher fetchPageWithStreamToken:] */

void FUN_1061ea410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be4ab40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c0b8640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1061ea500; end: 1061ea587;  */

void FUN_1061ea500(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be6f140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061ea588; end: 1061ea733; -[SCLensExplorerCategoryPageFetcher _lensExplorerFeedItems] */

void FUN_1061ea588(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  puVar3 = PTR_PTR_1126c8b38;
  func_0x00010beffb20(PTR_PTR_1126c8b38);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c098540(uVar2,param_2,uVar9,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010c13ba20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1061ea840;
  puStack_70 = &UNK_110849f28;
  puStack_68 = puVar1;
  _objc_retain(puVar1);
  uVar8 = uVar7;
  func_0x00010c25ff60(uVar7,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_68);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061ea734; end: 1061ea7f3;  */

undefined1 FUN_1061ea734(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_2);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 1;
  func_0x00010c0c0800(param_2);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1061ea7f4; end: 1061ea83f;  */

void FUN_1061ea7f4(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf529e0();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar1 != 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061ea840; end: 1061ea8fb;  */

void FUN_1061ea840(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1061ea8fc; end: 1061ea93b;  */

void FUN_1061ea8fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c098240(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061ea93c; end: 1061ea947;  */

void FUN_1061ea93c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0,param_2);
  return;
}



/* Entry: 1061ea948; end: 1061ea9ff; -[SCLensExplorerCategoryPageFetcher _pageFetchingResultFromLensItems:] */

void FUN_1061ea948(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010bf43280(param_3,param_2,&PTR___NSConcreteGlobalBlock_110915428);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c8b48;
  _objc_alloc(PTR_PTR_1126c8b48);
  func_0x00010c025e40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061eaa00; end: 1061eaa47; -[SCLensExplorerCategoryPageFetcher .cxx_destruct] */

void FUN_1061eaa00(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061eaa48; end: 1061eab7f; -[SCLensExplorerCategoryPageLocalFetcher initWithPageFetcher:preferences:preferencesKey:localCacheTimeOut:performer:timeProvider:] */

undefined1 *
FUN_1061eaa48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f04d8;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1061eab80; end: 1061eacbb; -[SCLensExplorerCategoryPageLocalFetcher fetchPageWithStreamToken:] */

void FUN_1061eab80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010bf51e00();
  _objc_initWeak(auStack_48,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(puVar1);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar4);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061eacbc; end: 1061eacef;  */

void FUN_1061eacbc(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be12f80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061eacf0; end: 1061eae4f; -[SCLensExplorerCategoryPageLocalFetcher _fetchPageWithPromise:streamToken:] */

void FUN_1061eacf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be4e8c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010be3e8a0();
    if ((int)lVar2 != 0) {
      func_0x00010be19c00(param_1);
      goto LAB_1061eae04;
    }
    func_0x00010be8d620(param_1);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfa9200(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c297260(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar3);
LAB_1061eae04:
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1061eae50; end: 1061eaec3;  */

void FUN_1061eae50(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bec3dc0();
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar1);
  }
  else {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061eaec4; end: 1061eafaf; -[SCLensExplorerCategoryPageLocalFetcher _storeCacheFromResult:] */

void FUN_1061eaec4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010bf5e5e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c8b50;
  _objc_alloc(PTR_PTR_1126c8b50);
  uVar2 = param_3;
  func_0x00010c098240(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c009520(puVar1,param_2,uVar3,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c266b80();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1061eafb0; end: 1061eb043; -[SCLensExplorerCategoryPageLocalFetcher _loadStoredCacheEntity] */

void FUN_1061eafb0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c8b50;
  _objc_retain(uVar2);
  _objc_opt_class(puVar3);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061eb044; end: 1061eb0a3; -[SCLensExplorerCategoryPageLocalFetcher _removeStoredCacheEntity] */

void FUN_1061eb044(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c266b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061eb0a4; end: 1061eb13b; -[SCLensExplorerCategoryPageLocalFetcher _isCacheEntityStillValid:] */

bool FUN_1061eb0a4(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(param_4);
  func_0x00010bf5e5e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bf64de0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c26f380(uVar2,param_3,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return param_1 < *(double *)(param_2 + 0x18);
}



/* Entry: 1061eb13c; end: 1061eb1d7; -[SCLensExplorerCategoryPageLocalFetcher _fulfillPromise:entity:] */

void FUN_1061eb13c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c8b48;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_4;
  func_0x00010c098240(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c025e40(puVar1,param_2,uVar2,0);
  _objc_release(uVar2);
  func_0x00010bf43d60(param_3,param_2,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061eb1d8; end: 1061eb22b; -[SCLensExplorerCategoryPageLocalFetcher .cxx_destruct] */

void FUN_1061eb1d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061eb22c; end: 1061eb353; -[SCLensExplorerEntryPointOverlayImageProvider initWithFetcher:screenScale:mediaDownloader:performer:imageScalingPerformer:] */

undefined1 *
FUN_1061eb22c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  puStack_58 = PTR_PTR_1126f04e0;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1061eb354; end: 1061eb467; -[SCLensExplorerEntryPointOverlayImageProvider lensImageWithSize:atIndex:] */

void FUN_1061eb354(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_48,param_3);
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  _objc_copyWeak(auStack_68,auStack_48);
  uStack_60 = param_1;
  uStack_58 = param_2;
  uStack_50 = param_5;
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061eb468; end: 1061eb4ab;  */

void FUN_1061eb468(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be83a00(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),lVar1,
                        param_2,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1061eb4ac; end: 1061eb553; -[SCLensExplorerEntryPointOverlayImageProvider resetCache] */

void FUN_1061eb4ac(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1061eb554; end: 1061eb587;  */

void FUN_1061eb554(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061eb588; end: 1061eb767; -[SCLensExplorerEntryPointOverlayImageProvider _provideImageWithSize:atIndex:promise:] */

void FUN_1061eb588(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_6);
  func_0x00010bf0ae40(*(undefined8 *)(param_3 + 0x20));
  lVar1 = param_3;
  func_0x00010bdd7a40(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_3 + 0x30);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_3 + 8);
    func_0x00010c26e3c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010be37920(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010be9abc0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_68,param_3);
    _objc_retain(param_6);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(lVar1);
    func_0x00010c297280(lVar5);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_70);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_68);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(uVar3);
  }
  else {
    func_0x00010bf43d60(param_6);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_6);
  return;
}



/* Entry: 1061eb768; end: 1061eb803;  */

void FUN_1061eb768(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (param_3 == 0) {
    func_0x00010bf43d60(uVar2);
    puVar1 = (undefined *)(param_1 + 0x30);
    _objc_loadWeakRetained();
    if (puVar1 != (undefined *)0x0) {
      func_0x00010c1d0640(*(undefined8 *)(puVar1 + 0x30));
    }
  }
  else {
    puVar1 = PTR_PTR_1126c8a98;
    func_0x00010bed1440(PTR_PTR_1126c8a98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061eb804; end: 1061eb873; -[SCLensExplorerEntryPointOverlayImageProvider _cacheKeyForSize:index:] */

void FUN_1061eb804(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _NSStringFromCGSize();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc8c58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061eb874; end: 1061eb997; -[SCLensExplorerEntryPointOverlayImageProvider _imageWithURLFuture:] */

void FUN_1061eb874(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1061eb91c;
  puStack_40 = &UNK_110915478;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar2;
  _objc_retain(uVar2);
  func_0x00010bfb2680(param_3,param_2,&puStack_58,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1061eb998; end: 1061eba03; -[SCLensExplorerEntryPointOverlayImageProvider _scaledImageWithImageFuture:size:] */

void FUN_1061eb998(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_3 + 0x18);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_1061eba04;
  puStack_30 = &UNK_1109154a8;
  uStack_28 = param_1;
  uStack_20 = param_2;
  func_0x00010c0b8640(param_5,param_4,&puStack_48,*(undefined8 *)(param_3 + 0x28));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061eba04; end: 1061ebaf3;  */

void FUN_1061eba04(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126af5d0;
  if (param_2 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126c8a98;
    func_0x00010bed1440(PTR_PTR_1126c8a98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_2;
    func_0x00010c14e700(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),uVar3,
                        param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061ebaf4; end: 1061ebbd3; +[SCLensExplorerEntryPointOverlayImageProvider _unknownError] */

void FUN_1061ebaf4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_opt_class();
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
      ___stack_chk_fail();
      _objc_storeStrong(param_1 + 0x30,0);
      _objc_storeStrong(param_1 + 0x28,0);
      _objc_storeStrong(param_1 + 0x20,0);
      _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061ebbd4; end: 1061ebcb3; +[SCLensExplorerEntryPointOverlayImageProvider _imageDecodeError] */

void FUN_1061ebbd4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061ebcb4; end: 1061ebd07; -[SCLensExplorerEntryPointOverlayImageProvider .cxx_destruct] */

void FUN_1061ebcb4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061ebd08; end: 1061ebdaf; -[SCLensExplorerEntryPointOverlayThumbnailUrlsFetcher initWithPageFetcher:performer:] */

undefined1 *
FUN_1061ebd08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f04e8;
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
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061ebdb0; end: 1061ebecb; -[SCLensExplorerEntryPointOverlayThumbnailUrlsFetcher thumbnailURLAtIndex:] */

void FUN_1061ebdb0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be83060();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061ebecc; end: 1061ebfff; -[SCLensExplorerEntryPointOverlayThumbnailUrlsFetcher _promiseURLs] */

void FUN_1061ebecc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _os_unfair_lock_lock(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfa9200();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0b8640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_retain(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar3;
    _objc_release(uVar2);
    _os_unfair_lock_unlock(param_1 + 0x18);
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c297280(lVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  else {
    _objc_retain(lVar3);
    _os_unfair_lock_unlock(param_1 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1061ec000; end: 1061ec0cb;  */

void FUN_1061ec000(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf529e0();
  puVar4 = PTR_PTR_1126af5d0;
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126c8a90;
    func_0x00010be08860(PTR_PTR_1126c8a90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1061ec0cc; end: 1061ec0d3;  */

void FUN_1061ec0cc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26e510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_thumbnailUrl_112679368);
  return;
}



/* Entry: 1061ec0d4; end: 1061ec153;  */

void FUN_1061ec0d4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      _os_unfair_lock_lock(param_1 + 0x18);
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = 0;
      _objc_release(uVar1);
      _os_unfair_lock_unlock(param_1 + 0x18);
      _objc_release(param_1);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061ec154; end: 1061ec233; +[SCLensExplorerEntryPointOverlayThumbnailUrlsFetcher _emptyListError] */

void FUN_1061ec154(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061ec234; end: 1061ec26f; -[SCLensExplorerEntryPointOverlayThumbnailUrlsFetcher .cxx_destruct] */

void FUN_1061ec234(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061ec270; end: 1061ec31b; -[SCLensExplorerCategoryPageFetcherResult initWithLenses:streamToken:] */

undefined1 *
FUN_1061ec270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f04f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061ec31c; end: 1061ec33f; -[SCLensExplorerCategoryPageFetcherResult copyWithZone:] */

undefined8 FUN_1061ec31c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1061ec340; end: 1061ec3b3; -[SCLensExplorerCategoryPageFetcherResult hash] */

undefined8 * FUN_1061ec340(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1061ec434:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1061ec440;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_1061ec440;
        }
        goto LAB_1061ec434;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1061ec440:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1061ec3b4; end: 1061ec45b; -[SCLensExplorerCategoryPageFetcherResult isEqual:] */

long FUN_1061ec3b4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1061ec434:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1061ec440;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_1061ec440;
        }
        goto LAB_1061ec434;
      }
    }
    lVar3 = 0;
  }
LAB_1061ec440:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1061ec45c; end: 1061ec463; -[SCLensExplorerCategoryPageFetcherResult lenses] */

undefined8 FUN_1061ec45c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1061ec464; end: 1061ec46b; -[SCLensExplorerCategoryPageFetcherResult streamToken] */

undefined8 FUN_1061ec464(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1061ec46c; end: 1061ec49b; -[SCLensExplorerCategoryPageFetcherResult .cxx_destruct] */

void FUN_1061ec46c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061ec49c; end: 1061ec523; -[SCLensExplorerCategoryPageLensItem initWithCoder:] */

undefined1 * FUN_1061ec49c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f04f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061ec524; end: 1061ec59b; -[SCLensExplorerCategoryPageLensItem initWithThumbnailUrl:] */

undefined1 * FUN_1061ec524(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f04f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061ec59c; end: 1061ec5bf; -[SCLensExplorerCategoryPageLensItem copyWithZone:] */

undefined8 FUN_1061ec59c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1061ec5c0; end: 1061ec5d7; -[SCLensExplorerCategoryPageLensItem encodeWithCoder:] */

void FUN_1061ec5c0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14cb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_sc_encodeObject_forKey__112630ce0,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110e44c98);
  return;
}



/* Entry: 1061ec5d8; end: 1061ec5df; -[SCLensExplorerCategoryPageLensItem hash] */

void FUN_1061ec5d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 1061ec5e0; end: 1061ec66f; -[SCLensExplorerCategoryPageLensItem isEqual:] */

long FUN_1061ec5e0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1061ec654;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_1061ec654;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_1061ec654;
    }
  }
  lVar3 = 1;
LAB_1061ec654:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1061ec670; end: 1061ec677; -[SCLensExplorerCategoryPageLensItem thumbnailUrl] */

undefined8 FUN_1061ec670(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1061ec678; end: 1061ec683; -[SCLensExplorerCategoryPageLensItem .cxx_destruct] */

void FUN_1061ec678(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061ec684; end: 1061ec733; -[SCLensExplorerCategoryPageFetcherCacheEntity initWithCoder:] */

undefined1 * FUN_1061ec684(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f0500;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061ec734; end: 1061ec7df; -[SCLensExplorerCategoryPageFetcherCacheEntity initWithDate:lenses:] */

undefined1 *
FUN_1061ec734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f0500;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061ec7e0; end: 1061ec803; -[SCLensExplorerCategoryPageFetcherCacheEntity copyWithZone:] */

undefined8 FUN_1061ec7e0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1061ec804; end: 1061ec863; -[SCLensExplorerCategoryPageFetcherCacheEntity encodeWithCoder:] */

void FUN_1061ec804(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110dea538);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e44cb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061ec864; end: 1061ec8d7; -[SCLensExplorerCategoryPageFetcherCacheEntity hash] */

undefined8 * FUN_1061ec864(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1061ec958:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1061ec964;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_1061ec964;
        }
        goto LAB_1061ec958;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1061ec964:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1061ec8d8; end: 1061ec97f; -[SCLensExplorerCategoryPageFetcherCacheEntity isEqual:] */

long FUN_1061ec8d8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1061ec958:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1061ec964;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_1061ec964;
        }
        goto LAB_1061ec958;
      }
    }
    lVar3 = 0;
  }
LAB_1061ec964:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1061ec980; end: 1061ec987; -[SCLensExplorerCategoryPageFetcherCacheEntity date] */

undefined8 FUN_1061ec980(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1061ec988; end: 1061ec98f; -[SCLensExplorerCategoryPageFetcherCacheEntity lenses] */

undefined8 FUN_1061ec988(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1061ec990; end: 1061ec9bf; -[SCLensExplorerCategoryPageFetcherCacheEntity .cxx_destruct] */

void FUN_1061ec990(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061ec9c0; end: 1061ec9c7; -[SCLensInfoCardLocalDataProvider getLensInfoCardDataWithLensId:contexts:] */

void FUN_1061ec9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc6fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_getLensInfoCardDataWithLensId_co_1125cf590,param_3,param_4,0);
  return;
}



/* Entry: 1061ec9c8; end: 1061ecabb; -[SCLensInfoCardLocalDataProvider getLensInfoCardDataWithLensId:contexts:lensSource:] */

void FUN_1061ec9c8(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010beb2680(param_1,param_2,param_4);
  if ((int)puVar1 == 0) {
    puVar1 = param_1;
    func_0x00010bdd8080(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if ((puVar1 == (undefined *)0x0) ||
       (puVar2 = param_1, func_0x00010bdd7fa0(param_1,param_2,puVar1,param_4), (int)puVar2 == 0)) {
      func_0x00010be90920(param_1,param_2,param_3,param_4,param_5);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = PTR_PTR_1126ae558;
      func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
  }
  else {
    func_0x00010be90920(param_1,param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1061ecabc; end: 1061ecc07; -[SCLensInfoCardLocalDataProvider getLensInfoCardDataWithLensIds:contexts:] */

void FUN_1061ecabc(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010beb2680(param_1,param_2,param_4);
  if ((int)puVar1 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1061ecc08;
    puStack_60 = &UNK_110915568;
    puStack_58 = param_1;
    uStack_48 = param_4;
    _objc_retain();
    uVar2 = param_3;
    puStack_50 = puVar1;
    func_0x00010bf43280(param_3,param_2,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf529e0();
    if (puVar3 == (undefined *)0x0) {
      param_1 = PTR_PTR_1126ae558;
      func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010be90940(param_1,param_2,puVar1,uVar2,param_4);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar2);
    _objc_release(puStack_50);
    _objc_release(puVar1);
  }
  else {
    func_0x00010be90940(param_1,param_2,param_3,PTR____NSArray0__struct_11034ab48,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1061ecc08; end: 1061ecc9b;  */

void FUN_1061ecc08(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bdd8080();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010bdd7fa0();
    if ((uVar2 & 1) != 0) {
      _objc_retain(lVar1);
      lVar3 = lVar1;
      goto LAB_1061ecc78;
    }
  }
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
  lVar3 = 0;
LAB_1061ecc78:
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1061ecc9c; end: 1061eccab; -[SCLensInfoCardLocalDataProvider _shouldAlwaysRefreshDataForContexts:] */

uint FUN_1061ecc9c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  
  uVar1 = (uint)(param_3 >> 1) & 1;
  if (param_3 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1061eccac; end: 1061ecd07; -[SCLensInfoCardLocalDataProvider _cachedData:satisfiesContexts:] */

bool FUN_1061eccac(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  bool bVar1;
  long lVar2;
  
  if ((param_4 >> 2 & 1) == 0) {
    bVar1 = true;
  }
  else {
    func_0x00010c094fa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf67c00();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    _objc_release();
    _objc_release(param_3);
  }
  return bVar1;
}



/* Entry: 1061ecd08; end: 1061ecd7f; -[SCLensInfoCardLocalDataProvider _cachedInfoCardDataForLensId:] */

void FUN_1061ecd08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x18);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061ecd80; end: 1061ece03; -[SCLensInfoCardLocalDataProvider _storeInfoCardData:forLensId:] */

void FUN_1061ecd80(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    _os_unfair_lock_lock(param_1 + 0x18);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4);
    _os_unfair_lock_unlock(param_1 + 0x18);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061ece04; end: 1061ecf1f; -[SCLensInfoCardLocalDataProvider _requestBaseLensInfoCardDataWithLensId:contexts:lensSource:] */

void FUN_1061ece04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfc6fa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1061ecf20; end: 1061ecf73;  */

void FUN_1061ecf20(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec4040();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1061ecf74; end: 1061ed0a3; -[SCLensInfoCardLocalDataProvider _requestBaseLensInfoCardDataWithLensIds:cachedInfoCardsData:contexts:] */

void FUN_1061ecf74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfc6fc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1061ed0a4; end: 1061ed1ff;  */

void FUN_1061ed0a4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar5 = *(undefined8 *)(lVar6 * 8);
      lVar3 = param_1 + 0x28;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c094540(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bec4040(lVar3);
      _objc_release(uVar5);
      _objc_release(lVar3);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = param_2;
    func_0x00010bf52a60();
  }
  lVar2 = param_2;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_2 + 8,0);
  return;
}



/* Entry: 1061ed200; end: 1061ed22f; -[SCLensInfoCardLocalDataProvider .cxx_destruct] */

void FUN_1061ed200(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061ed230; end: 1061ed237; -[SCLensInfoCardRemoteDataProvider getLensInfoCardDataWithLensId:contexts:] */

void FUN_1061ed230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc6fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_getLensInfoCardDataWithLensId_co_1125cf590,param_3,param_4,0);
  return;
}



/* Entry: 1061ed238; end: 1061ed467; -[SCLensInfoCardRemoteDataProvider getLensInfoCardDataWithLensId:contexts:lensSource:] */

void FUN_1061ed238(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010be71240();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1061ed468;
    puStack_90 = &UNK_1109155c8;
    puStack_88 = param_1;
    _objc_retain();
    puStack_80 = puVar2;
    _objc_retain(param_3);
    ppuVar3 = &puStack_a8;
    uStack_78 = param_3;
    _objc_retainBlock();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00();
    puVar5 = puVar2;
    if ((int)puVar4 == 0) {
      uVar6 = *(undefined8 *)(param_1 + 8);
      func_0x00010be91d80(param_1);
      _objc_retain(ppuVar3);
      _objc_retain(ppuVar3);
      func_0x00010c25f280(uVar6);
      puVar4 = puVar2;
      func_0x00010bfbc3e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bed9a80(param_1);
      _objc_release(puVar4);
      func_0x00010bfbc3e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar3);
      _objc_release(ppuVar3);
    }
    else {
      (*(code *)ppuVar3[2])(ppuVar3,0,0);
      func_0x00010bfbc3e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar3);
    _objc_release(uStack_78);
    _objc_release(puStack_80);
    _objc_release(puVar2);
  }
  else {
    _objc_retain(puVar1);
    puVar5 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1061ed468; end: 1061ed4eb;  */

void FUN_1061ed468(long param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  if (param_2 == 0) {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    func_0x00010bf43d60();
  }
  func_0x00010bed9a80(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061ed4ec; end: 1061ed53b;  */

void FUN_1061ed4ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126bbd08;
  func_0x00010be4b1e0(PTR_PTR_1126bbd08,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061ed53c; end: 1061ed54f;  */

void FUN_1061ed53c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001061ed54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_2);
  return;
}



/* Entry: 1061ed550; end: 1061ed6fb; -[SCLensInfoCardRemoteDataProvider getLensInfoCardDataWithLensIds:contexts:] */

void FUN_1061ed550(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1061ed6fc;
  puStack_78 = &UNK_1108599d8;
  lStack_70 = param_1;
  _objc_retain();
  ppuVar2 = &puStack_90;
  puStack_68 = puVar1;
  _objc_retainBlock();
  uVar4 = param_3;
  func_0x00010bf04920();
  puVar3 = puVar1;
  if ((int)uVar4 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010be91d80(param_1);
    _objc_retain(ppuVar2);
    _objc_retain(ppuVar2);
    func_0x00010c25f2a0(uVar4);
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    _objc_release(ppuVar2);
  }
  else {
    (*(code *)ppuVar2[2])(ppuVar2,0,0);
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar2);
  _objc_release(puStack_68);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061ed6fc; end: 1061ed81b;  */

void FUN_1061ed6fc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_2;
  _objc_retain(param_2);
  if (param_2 == 0) {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    lVar2 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = param_2;
      func_0x00010bf52a60();
    }
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c078c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSString_1126ae4d0,PTR_s_isNilOrEmpty__1125fbd10,lVar3);
  return;
}



/* Entry: 1061ed81c; end: 1061ed82b;  */

void FUN_1061ed81c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c078c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSString_1126ae4d0,PTR_s_isNilOrEmpty__1125fbd10,param_2);
  return;
}



/* Entry: 1061ed82c; end: 1061ed87b;  */

void FUN_1061ed82c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126bbd08;
  func_0x00010be4b220(PTR_PTR_1126bbd08,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061ed87c; end: 1061ed88f;  */

void FUN_1061ed87c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001061ed88c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_2);
  return;
}



/* Entry: 1061ed890; end: 1061ed907; -[SCLensInfoCardRemoteDataProvider _pendingInfoCardFutureForLensId:] */

void FUN_1061ed890(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x18);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061ed908; end: 1061ed983; -[SCLensInfoCardRemoteDataProvider _updateInfoCardFuture:forLensId:] */

void FUN_1061ed908(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x18);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,param_3,param_4);
  _os_unfair_lock_unlock(param_1 + 0x18);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061ed984; end: 1061ed98b; -[SCLensInfoCardRemoteDataProvider _requestedDataContextFromContext:] */

undefined8 FUN_1061ed984(void)

{
  return 0;
}



/* Entry: 1061ed98c; end: 1061ed9e3; +[SCLensInfoCardRemoteDataProvider _lensInfoCardDataFromInfoCardResponse:] */

void FUN_1061ed98c(long param_1)

{
  long lVar1;
  
  func_0x00010be4b220();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar1 != 0) {
    _objc_retain(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1061ed9e4; end: 1061eda33; +[SCLensInfoCardRemoteDataProvider _lensInfoCardsDataFromInfoCardResponse:] */

void FUN_1061ed9e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bfedb00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061eda34; end: 1061edb7f;  */

void FUN_1061eda34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126c8b58;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c2810a0();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bbd08;
  uVar3 = param_2;
  func_0x00010c094fa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4b4e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126bbd08;
  uVar5 = param_2;
  func_0x00010c092080(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4a900(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be390e0(PTR_PTR_1126bbd08);
  _objc_release(param_2);
  func_0x00010c0245c0(puVar1);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061edb80; end: 1061edf3f; +[SCLensInfoCardRemoteDataProvider _lensMetadataFromResponseLensMetadata:] */

void FUN_1061edb80(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_3;
  func_0x00010bfe5b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar9,param_2,lVar1);
  uStack_68 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (((ulong)puVar9 & 1) == 0) {
    lVar2 = param_3;
    func_0x00010bfe5b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(uStack_68,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  else {
    uStack_68 = (undefined *)0x0;
  }
  _objc_release(lVar1);
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_3;
  func_0x00010bf67c00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar9,param_2,lVar1);
  uStack_70 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (((ulong)puVar9 & 1) == 0) {
    lVar2 = param_3;
    func_0x00010bf67c00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(uStack_70,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  else {
    uStack_70 = (undefined *)0x0;
  }
  _objc_release(lVar1);
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_3;
  func_0x00010c0927a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar9,param_2,lVar1);
  puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (((ulong)puVar9 & 1) == 0) {
    lVar2 = param_3;
    func_0x00010c0927a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar8,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  else {
    puVar8 = (undefined *)0x0;
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bfd8700();
  puVar9 = PTR_PTR_1126bbd08;
  if ((int)lVar1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c096f40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4be60(puVar9,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c090260();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf15180();
  puVar10 = PTR_PTR_1126bbd08;
  if (lVar2 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c090260(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf15160();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd2680(puVar10,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  uVar4 = param_1;
  func_0x00010bdd0980(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c247860(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebe620(param_1,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126c8b60;
  _objc_alloc();
  lVar1 = param_3;
  func_0x00010c11a5e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = param_3;
  func_0x00010c0915a0(param_3);
  func_0x00010c0df7c0(puVar6,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c072a60(param_3);
  func_0x00010c03bc80(puVar5,param_2,lVar1,puVar7,uStack_68,uStack_70,lVar2,uVar4,puVar8,puVar9,
                      puVar10,param_1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uStack_70);
  _objc_release(uStack_68);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1061edf40; end: 1061edf9f; +[SCLensInfoCardRemoteDataProvider _lensStatsFromResponseLensStats:] */

void FUN_1061edf40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c8b68;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c29c5c0(param_3);
  _objc_release(param_3);
  func_0x00010c061aa0(puVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


