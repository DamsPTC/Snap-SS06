/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1066e62fc; end: 1066e63e7; -[SCLensExplorerPersistingBatchUpdateHandler handleFeeds:forQueryResult:] */

void FUN_1066e62fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bfd1240(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
  lVar1 = param_1;
  func_0x00010beb6fa0(param_1,param_2,param_4);
  if ((int)lVar1 != 0) {
    uVar2 = param_4;
    func_0x00010c11d080(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c11d680();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c137200();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf4b900();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010c285be0(*(undefined8 *)(param_1 + 0x10),param_2,param_3,uVar5,0);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066e63e8; end: 1066e63ef; -[SCLensExplorerPersistingBatchUpdateHandler handleItems:forFeedId:remoteState:queryResult:] */

void FUN_1066e63e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd1550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_handleItems_forFeedId_remoteStat_1125d1ef8);
  return;
}



/* Entry: 1066e63f0; end: 1066e656f; -[SCLensExplorerPersistingBatchUpdateHandler _shouldUpdatePersistenceForQueryResult:] */

ulong FUN_1066e63f0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4d6a0();
  if (uVar2 == 0) {
    uVar2 = param_3;
    func_0x00010c11d080();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c11d680();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c11daa0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126cd100;
    func_0x00010c0e8e20(PTR_PTR_1126cd100);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0720c0(uVar4,param_2,puVar5);
    if ((uVar6 & 1) == 0) {
      uVar6 = param_3;
      func_0x00010c11d080();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c11d680();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c11daa0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126cd100;
      func_0x00010c125040(PTR_PTR_1126cd100);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar8;
      func_0x00010c0720c0(uVar8,param_2,puVar9);
      _objc_release(puVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
    }
    else {
      uVar10 = 1;
    }
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    uVar10 = 0;
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar10;
}



/* Entry: 1066e6570; end: 1066e659f; -[SCLensExplorerPersistingBatchUpdateHandler .cxx_destruct] */

void FUN_1066e6570(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066e65a0; end: 1066e6687; -[SCLensExplorerSingleCategoryRefreshManager initWithQueryCoordinatorFactory:sectionsDataStore:queryFactory:] */

undefined1 *
FUN_1066e65a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f28a0;
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



/* Entry: 1066e6688; end: 1066e67ef; -[SCLensExplorerSingleCategoryRefreshManager refreshSectionsWithIdentifiers:] */

void FUN_1066e6688(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar6);
    lVar1 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bfa3940(uVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c268560();
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1066e67f0;
    puStack_70 = &UNK_110935b30;
    uStack_68 = uVar5;
    uStack_60 = uVar6;
    lStack_58 = lVar1;
    _objc_retain(lVar1);
    _objc_retain(uVar6);
    _objc_retain(uVar5);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3,param_2,&puStack_88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(lStack_58);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_release(lVar1);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1066e67f0; end: 1066e693f;  */

void FUN_1066e67f0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010bf643e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1253c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    lVar1 = param_2;
    func_0x00010bf643e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c155f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0965e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar3);
    func_0x00010c13cfe0(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1066e6940; end: 1066e6943;  */

void FUN_1066e6940(void)

{
  return;
}



/* Entry: 1066e6944; end: 1066e698b; -[SCLensExplorerSingleCategoryRefreshManager .cxx_destruct] */

void FUN_1066e6944(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066e698c; end: 1066e6b77; -[SCLensExplorerCategoriesBatchFactory initWithqRequestProvider:responseParser:requestManager:queryFactory:queryCoordinatorFactory:categoriesFactory:dynamicUpdateHandler:context:mixerNamespaceServices:lensGatorEnabled:mixerNamespaceCacheOptimizationEnabled:gamesExplorerAuxFeedRankingFixEnabled:gamesExplorerCategoriesFromFeedsEnabled:] */

undefined8 *
FUN_1066e698c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f28a8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[5];
    puVar1[5] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[6];
    puVar1[6] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[1];
    puVar1[1] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar2);
    puVar1[10] = param_10;
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0xc) = (undefined1)param_12;
    *(undefined1 *)((long)puVar1 + 0x61) = param_12._1_1_;
    *(undefined1 *)((long)puVar1 + 0x62) = param_12._2_1_;
    *(undefined1 *)((long)puVar1 + 99) = param_12._3_1_;
  }
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1066e6b78; end: 1066e6df7; -[SCLensExplorerCategoriesBatchFactory categoriesProviderWithConfiguration:] */

void FUN_1066e6b78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x68;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010bf5fc60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      puVar6 = (undefined *)(param_1 + 0x68);
      _objc_loadWeakRetained(puVar6);
      goto LAB_1066e6dd0;
    }
  }
  lVar1 = param_1;
  func_0x00010bf17100();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010beb4d00();
  if ((int)lVar2 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = param_3;
    func_0x00010bfa3d00(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfa5900(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf2d060();
  puVar4 = PTR_PTR_1126cce40;
  uVar5 = param_3;
  if ((int)lVar2 == 0) {
    func_0x00010bfa3d00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf562c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_alloc();
    func_0x00010bfa3d00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043bc0();
  }
  _objc_release(uVar5);
  _objc_retain(puVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar4;
  _objc_release(uVar5);
  puVar6 = PTR_PTR_1126cd140;
  func_0x00010c06cd80();
  if ((int)puVar6 == 0) {
    if ((*(char *)(param_1 + 0x60) == '\x01') && (*(long *)(param_1 + 0x58) != 0)) {
      puVar7 = PTR_PTR_1126cd148;
      _objc_alloc(PTR_PTR_1126cd148);
      func_0x00010c017460();
      puVar6 = PTR_PTR_1126cd150;
      _objc_alloc(PTR_PTR_1126cd150);
      func_0x00010c02c340();
      _objc_release(puVar7);
    }
    else {
      puVar6 = PTR_PTR_1126cd158;
      _objc_alloc(PTR_PTR_1126cd158);
      func_0x00010c03f320();
    }
  }
  else {
    puVar6 = PTR_PTR_1126cd140;
    _objc_alloc(PTR_PTR_1126cd140);
    func_0x00010c03c340();
  }
  _objc_storeWeak(param_1 + 0x68,puVar6);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(puVar4);
  _objc_release(lVar1);
LAB_1066e6dd0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1066e6df8; end: 1066e6e2f; -[SCLensExplorerCategoriesBatchFactory reset] */

void FUN_1066e6df8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf2dd00(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066e6e30; end: 1066e6ebf; -[SCLensExplorerCategoriesBatchFactory batchQueryStatusChecker] */

void FUN_1066e6e30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126cd160;
    _objc_alloc();
    func_0x00010c03c380(0);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR_PTR_1126cd168;
    func_0x00010c06b3a0(PTR_PTR_1126cd168,param_2,*(undefined8 *)(param_1 + 0x50));
    if ((int)puVar1 != 0) {
      puVar1 = PTR_PTR_1126cd170;
      _objc_alloc();
      func_0x00010c03c480();
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar1;
      _objc_release(uVar2);
    }
    lVar3 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1066e6ec0; end: 1066e6ee7; -[SCLensExplorerCategoriesBatchFactory _shouldPrefetchPreselectedFeed] */

uint FUN_1066e6ec0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cd168;
  func_0x00010c06b3a0(PTR_PTR_1126cd168,param_2,*(undefined8 *)(param_1 + 0x50));
  return (uint)puVar1 ^ 1;
}



/* Entry: 1066e6ee8; end: 1066e6f7f; -[SCLensExplorerCategoriesBatchFactory .cxx_destruct] */

void FUN_1066e6ee8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x68);
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



/* Entry: 1066e6f80; end: 1066e715b; -[SCLensExplorerCategoriesBatchRefreshFactory initWithRequestManager:requestProvider:responseParser:dynamicUpdateHandler:sectionsDataStore:queryFactory:queryCoordinatorFactory:mixerNamespaceServices:lensGatorEnabled:mixerNamespaceCacheOptimizationEnabled:gamesExplorerAuxFeedRankingFixEnabled:gamesExplorerCategoriesFromFeedsEnabled:] */

undefined8 *
FUN_1066e6f80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f28b0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    *(undefined1 *)(puVar1 + 9) = (undefined1)param_11;
    *(undefined1 *)((long)puVar1 + 0x49) = param_11._1_1_;
    *(undefined1 *)((long)puVar1 + 0x4a) = param_11._2_1_;
    *(undefined1 *)((long)puVar1 + 0x4b) = param_11._3_1_;
  }
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



/* Entry: 1066e715c; end: 1066e7277; -[SCLensExplorerCategoriesBatchRefreshFactory categoriesBatchRefresher] */

void FUN_1066e715c(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010be41fc0();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR_PTR_1126cd160;
    _objc_alloc(PTR_PTR_1126cd160);
    func_0x00010c11d380(PTR_PTR_1126ccf40);
    func_0x00010c03c380(puVar2);
    if ((*(char *)(param_1 + 0x48) == '\x01') && (*(long *)(param_1 + 0x40) != 0)) {
      puVar3 = PTR_PTR_1126cd148;
      _objc_alloc(PTR_PTR_1126cd148);
      func_0x00010c017460();
      puVar4 = PTR_PTR_1126cd178;
      _objc_alloc(PTR_PTR_1126cd178);
      func_0x00010c02c320();
      _objc_release(puVar3);
    }
    else {
      puVar4 = PTR_PTR_1126cd180;
      _objc_alloc(PTR_PTR_1126cd180);
      func_0x00010c03f360();
    }
    _objc_release(puVar2);
  }
  else {
    puVar4 = PTR_PTR_1126cd188;
    _objc_alloc(PTR_PTR_1126cd188);
    func_0x00010c03c360();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066e7278; end: 1066e72b3; -[SCLensExplorerCategoriesBatchRefreshFactory _queryStatusChecker] */

void FUN_1066e7278(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cd160;
  _objc_alloc(PTR_PTR_1126cd160);
  func_0x00010c11d380(PTR_PTR_1126ccf40);
  func_0x00010c03c380(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066e72b4; end: 1066e72bb; -[SCLensExplorerCategoriesBatchRefreshFactory _isMocksAvailable] */

undefined8 FUN_1066e72b4(void)

{
  return 0;
}



/* Entry: 1066e72bc; end: 1066e7333; -[SCLensExplorerCategoriesBatchRefreshFactory .cxx_destruct] */

void FUN_1066e72bc(long param_1)

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



/* Entry: 1066e7334; end: 1066e7433; -[SCLensExplorerFavoritesQueryCoordinatorFactory initWithBaseQueryCoordinatorFactory:dataStoreFactory:lensFavoritesUpdater:lensFavoritesMockedObservable:] */

undefined1 *
FUN_1066e7334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f28b8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066e7434; end: 1066e74b7; -[SCLensExplorerFavoritesQueryCoordinatorFactory lensQueryCoordinatorWithSectionIdentifier:] */

void FUN_1066e7434(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cc908;
  _objc_retain(param_3);
  func_0x00010c072b20(puVar1,param_2,param_3);
  if ((int)puVar1 == 0) {
    param_1 = *(long *)(param_1 + 8);
    func_0x00010c0965e0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c093bc0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1066e74b8; end: 1066e76c7; -[SCLensExplorerFavoritesQueryCoordinatorFactory lensFavoritesQueryCoordinatorWithSectionIdentifier:] */

void FUN_1066e74b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  lVar9 = *(long *)(param_1 + 0x18);
  if (lVar9 == 0) {
    _objc_retain(&PTR____CFConstantStringClassReference_110e04238);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0d3d00(uVar1,param_2,&PTR____CFConstantStringClassReference_110e04238);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c12a460(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cd160;
    _objc_alloc(PTR_PTR_1126cd160);
    func_0x00010c11d380(PTR_PTR_1126ccf40);
    func_0x00010c03c380(puVar3);
    puVar4 = PTR_PTR_1126cd190;
    _objc_alloc(PTR_PTR_1126cd190);
    func_0x00010c03c4c0();
    puVar5 = PTR_PTR_1126ae790;
    _objc_alloc(PTR_PTR_1126ae790);
    func_0x00010c021520();
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0965e0(uVar6,param_2,&PTR____CFConstantStringClassReference_110e04238);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126cd198;
    func_0x00010c06cd80();
    if ((int)puVar7 == 0) {
      puVar7 = PTR_PTR_1126cd1a0;
      _objc_alloc();
      func_0x00010bff6f00();
    }
    else {
      puVar7 = PTR_PTR_1126cd198;
      _objc_alloc();
      func_0x00010bff6f20();
    }
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar7;
    _objc_release(uVar8);
    lVar9 = *(long *)(param_1 + 0x18);
    _objc_retain(lVar9);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(&PTR____CFConstantStringClassReference_110e04238);
  }
  else {
    _objc_retain(lVar9);
  }
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar9);
  return;
}



/* Entry: 1066e76c8; end: 1066e7717; -[SCLensExplorerFavoritesQueryCoordinatorFactory reset] */

void FUN_1066e76c8(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x10);
  return;
}



/* Entry: 1066e7718; end: 1066e776b; -[SCLensExplorerFavoritesQueryCoordinatorFactory .cxx_destruct] */

void FUN_1066e7718(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066e776c; end: 1066e78c7; -[SCLensExplorerLocalCategoriesBatchFactory initWithBaseCategoriesProviderFactory:feedModelsStorage:batchUpdateHandler:queryFactory:categoriesFactory:performerProvider:context:] */

undefined1 *
FUN_1066e776c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f28c0;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066e78c8; end: 1066e7a13; -[SCLensExplorerLocalCategoriesBatchFactory categoriesProviderWithConfiguration:] */

void FUN_1066e78c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf33180(uVar5,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126cd1a8;
  _objc_alloc(PTR_PTR_1126cd1a8);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = param_3;
  func_0x00010bfa3d00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffcec0(puVar1,param_2,uVar6,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15e720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126cd138;
  _objc_alloc(PTR_PTR_1126cd138);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010beb4d00();
  func_0x00010bff6c20(puVar4,param_2,uVar5,uVar6,uVar2,puVar1,uVar7,uVar3,param_3,(char)param_1);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066e7a14; end: 1066e7a1b; -[SCLensExplorerLocalCategoriesBatchFactory reset] */

void FUN_1066e7a14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 1066e7a1c; end: 1066e7a43; -[SCLensExplorerLocalCategoriesBatchFactory _shouldPrefetchPreselectedFeed] */

uint FUN_1066e7a1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cd168;
  func_0x00010c06b3a0(PTR_PTR_1126cd168,param_2,*(undefined8 *)(param_1 + 0x38));
  return (uint)puVar1 ^ 1;
}



/* Entry: 1066e7a44; end: 1066e7aa3; -[SCLensExplorerLocalCategoriesBatchFactory .cxx_destruct] */

void FUN_1066e7a44(long param_1)

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



/* Entry: 1066e7aa4; end: 1066e7b6f; -[SCLensExplorerLocalQueryCoordinatorFactory initWithBaseQueryCoordinatorFactory:feedModelsStorage:dynamicUpdateHandler:] */

undefined1 *
FUN_1066e7aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f28c8;
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066e7b70; end: 1066e7bef; -[SCLensExplorerLocalQueryCoordinatorFactory lensQueryCoordinatorWithSectionIdentifier:] */

void FUN_1066e7b70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0965e0(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126cd1b0;
  _objc_alloc(PTR_PTR_1126cd1b0);
  func_0x00010c03c300();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066e7bf0; end: 1066e7bf7; -[SCLensExplorerLocalQueryCoordinatorFactory reset] */

void FUN_1066e7bf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 1066e7bf8; end: 1066e7c33; -[SCLensExplorerLocalQueryCoordinatorFactory .cxx_destruct] */

void FUN_1066e7bf8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066e7c34; end: 1066e7e03; -[SCLensExplorerQueryCoordinatorFactory initWithRequestManager:requestProvider:responseParser:dataStoreFactory:dynamicUpdateHandler:selectedBatchStatusCheckerFactory:mixerNamespaceServices:lensGatorEnabled:mixerNamespaceCacheOptimizationEnabled:gamesExplorerAuxFeedRankingFixEnabled:gamesExplorerCategoriesFromFeedsEnabled:] */

undefined8 *
FUN_1066e7c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f28d0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 10) = (undefined1)param_10;
    *(undefined1 *)((long)puVar1 + 0x51) = param_10._1_1_;
    *(undefined1 *)((long)puVar1 + 0x52) = param_10._2_1_;
    *(undefined1 *)((long)puVar1 + 0x53) = param_10._3_1_;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1066e7e04; end: 1066e801f; -[SCLensExplorerQueryCoordinatorFactory lensQueryCoordinatorWithSectionIdentifier:] */

void FUN_1066e7e04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  puVar1 = *(undefined **)(param_1 + 0x28);
  func_0x00010c0e00e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0d3d00(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c12a460(uVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bf331a0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bf67640(uVar5,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    if ((*(char *)(param_1 + 0x50) == '\x01') && (*(long *)(param_1 + 0x48) != 0)) {
      puVar1 = PTR_PTR_1126cd148;
      _objc_alloc(PTR_PTR_1126cd148);
      func_0x00010c017460();
      puVar6 = PTR_PTR_1126cd1b8;
      _objc_alloc(PTR_PTR_1126cd1b8);
      func_0x00010c02c300();
      _objc_release(puVar1);
    }
    else {
      puVar6 = PTR_PTR_1126cd1c0;
      _objc_alloc(PTR_PTR_1126cd1c0);
      func_0x00010c03f240();
    }
    puVar1 = PTR_PTR_1126cd1c8;
    func_0x00010c06cd80();
    if ((int)puVar1 == 0) {
      _objc_retain(puVar6);
      puVar1 = puVar6;
    }
    else {
      puVar1 = PTR_PTR_1126cd1c8;
      _objc_alloc(PTR_PTR_1126cd1c8);
      func_0x00010c03d100();
    }
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28),param_2,puVar1,param_3);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066e8020; end: 1066e80ab; -[SCLensExplorerQueryCoordinatorFactory categoriesQueryStatusCheckerWithSectionIdentifier:] */

void FUN_1066e8020(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c12a460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cd160;
  _objc_alloc(PTR_PTR_1126cd160);
  func_0x00010c11d380(PTR_PTR_1126ccf40);
  func_0x00010c03c380(puVar2);
  puVar3 = PTR_PTR_1126cd190;
  _objc_alloc(PTR_PTR_1126cd190);
  func_0x00010c03c4c0();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066e80ac; end: 1066e80ef; -[SCLensExplorerQueryCoordinatorFactory reset] */

void FUN_1066e80ac(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x20);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x20);
  return;
}



/* Entry: 1066e80f0; end: 1066e8167; -[SCLensExplorerQueryCoordinatorFactory .cxx_destruct] */

void FUN_1066e80f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 1066e8168; end: 1066e820b; -[SCLensExplorerQueryStatusUpdatingCategoriesBatchFactory initWithBaseCategoriesProviderFactory:selectedBatchStatusCheckerFactory:] */

undefined1 *
FUN_1066e8168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f28d8;
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



/* Entry: 1066e820c; end: 1066e826f; -[SCLensExplorerQueryStatusUpdatingCategoriesBatchFactory categoriesProviderWithConfiguration:] */

void FUN_1066e820c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf33180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = uVar1;
  func_0x00010bf33080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a020(uVar3,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066e8270; end: 1066e8297; -[SCLensExplorerQueryStatusUpdatingCategoriesBatchFactory reset] */

/* WARNING: Possible PIC construction at 0x0001066e8284: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001066e8288) */

void FUN_1066e8270(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 1066e8298; end: 1066e82c7; -[SCLensExplorerQueryStatusUpdatingCategoriesBatchFactory .cxx_destruct] */

void FUN_1066e8298(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066e82c8; end: 1066e833b; -[SCLensExplorerSubscriptionsQueryCoordinatorFactory initWithBaseQueryCoordinatorFactory:] */

undefined1 * FUN_1066e82c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f28e0;
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



/* Entry: 1066e833c; end: 1066e83b3; -[SCLensExplorerSubscriptionsQueryCoordinatorFactory lensQueryCoordinatorWithSectionIdentifier:] */

void FUN_1066e833c(long param_1,undefined8 param_2,undefined **param_3)

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
  func_0x00010c0965e0(uVar3,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1066e83b4; end: 1066e83bb; -[SCLensExplorerSubscriptionsQueryCoordinatorFactory reset] */

void FUN_1066e83b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 1066e83bc; end: 1066e83c7; -[SCLensExplorerSubscriptionsQueryCoordinatorFactory .cxx_destruct] */

void FUN_1066e83bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066e83c8; end: 1066e841f; -[SCLensExplorerStoredInteractionHistoryProvider interactionHistory] */

void FUN_1066e83c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cd1d0;
  _objc_opt_new(PTR_PTR_1126cd1d0);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c1425a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8020(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066e8420; end: 1066e842b; -[SCLensExplorerStoredInteractionHistoryProvider .cxx_destruct] */

void FUN_1066e8420(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066e842c; end: 1066e8533; +[SCLensExplorerContainerKarmaItems mockedContainerItemWithContainerId:] */

void FUN_1066e842c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdf9540(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccd70;
  _objc_alloc(PTR_PTR_1126ccd70);
  uVar3 = param_1;
  func_0x00010be60cc0(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be63e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002780(puVar2,param_2,param_3,&PTR____CFConstantStringClassReference_110e59cf8,
                      &PTR____CFConstantStringClassReference_110e59d18,uVar3,uVar1,0,param_1,0);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126ccc20;
  func_0x00010bf4aea0(PTR_PTR_1126ccc20,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066e8534; end: 1066e8663; +[SCLensExplorerContainerKarmaItems mockedDynamicContainerItemWithContainerId:] */

void FUN_1066e8534(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be36ba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e59d38);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ccd70;
  _objc_alloc(PTR_PTR_1126ccd70);
  uVar4 = param_1;
  func_0x00010be60cc0(param_1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be63e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002780(puVar3,param_2,param_3,&PTR____CFConstantStringClassReference_110e59d58,0,
                      uVar4,uVar1,&PTR____CFConstantStringClassReference_110e59d78,param_1,puVar2);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126ccc20;
  func_0x00010bf4aea0(PTR_PTR_1126ccc20,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1066e8664; end: 1066e8a73; +[SCLensExplorerContainerKarmaItems mockLensTopicContainerWithContainerId:] */

void FUN_1066e8664(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  ulong uStack_c8;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar2 = PTR_PTR_1126ccd30;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a0 = param_1;
  uStack_80 = param_3;
  _objc_retain(param_3);
  _objc_alloc();
  uStack_c8 = uStack_c8 & 0xffffffffffffff00;
  ppuStack_d0 = (undefined **)0x0;
  func_0x00010c05c6e0();
  puVar3 = PTR_PTR_1126ccd40;
  _objc_alloc();
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110e59c98;
  func_0x00010c01d7e0();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puStack_88 = puVar3;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e59c18);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puStack_98 = puVar4;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e59978);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ccc48;
  puStack_90 = puVar5;
  _objc_alloc();
  puVar7 = PTR_PTR_1126ccd48;
  puStack_a8 = puVar2;
  func_0x00010c097740(PTR_PTR_1126ccd48,param_2,&PTR____CFConstantStringClassReference_110e59918,
                      &PTR____CFConstantStringClassReference_110e59938,puVar5,puVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_d0 = (undefined **)puVar3;
  func_0x00010c01ffc0(puVar6,param_2,&PTR____CFConstantStringClassReference_110e59918,puVar4,
                      &PTR____CFConstantStringClassReference_110daafd8,
                      &PTR____CFConstantStringClassReference_110daafd8,100,puVar7);
  puStack_b8 = puVar6;
  _objc_release(puVar7);
  puVar3 = PTR_PTR_1126ccd40;
  _objc_alloc();
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110e59c98;
  func_0x00010c01d7e0();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puStack_b0 = puVar3;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e59c38);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e59a18);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ccc48;
  _objc_alloc();
  puVar8 = PTR_PTR_1126ccd48;
  func_0x00010c097740(PTR_PTR_1126ccd48,param_2,&PTR____CFConstantStringClassReference_110e599d8,
                      &PTR____CFConstantStringClassReference_110e599f8,puVar5,puVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_d0 = (undefined **)puVar3;
  func_0x00010c01ffc0(puVar7,param_2,&PTR____CFConstantStringClassReference_110e599d8,puVar4,
                      &PTR____CFConstantStringClassReference_110daafd8,
                      &PTR____CFConstantStringClassReference_110daafd8,200,puVar8);
  _objc_release(puVar8);
  uVar10 = uStack_a0;
  uVar9 = uStack_a0;
  func_0x00010bdf9540();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccd78;
  func_0x00010c25a040(PTR_PTR_1126ccd78,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ccd78;
  func_0x00010c25a040(PTR_PTR_1126ccd78,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ccd70;
  _objc_alloc();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar2;
  puStack_70 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be63e60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uStack_80;
  uStack_c8 = 0;
  ppuVar13 = &PTR____CFConstantStringClassReference_110e59dd8;
  ppuStack_d0 = (undefined **)uVar10;
  func_0x00010c002780(puVar6,param_2,uStack_80,&PTR____CFConstantStringClassReference_110e59dd8,
                      &PTR____CFConstantStringClassReference_110e59df8,puVar8,uVar9,0);
  _objc_release(uVar1);
  _objc_release(uVar10);
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126ccc20;
  puVar12 = puVar6;
  func_0x00010bf4aea0(PTR_PTR_1126ccc20,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar9);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puStack_b0);
  _objc_release(puStack_b8);
  _objc_release(puStack_90);
  _objc_release(puStack_98);
  _objc_release(puStack_88);
  puVar4 = puStack_a8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_d8 = FUN_1066e8a74;
    puStack_110 = puVar3;
    puStack_108 = puVar2;
    uStack_100 = uVar9;
    puStack_f8 = puVar8;
    puStack_f0 = puVar7;
    puStack_e8 = puVar6;
    puStack_e0 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar13);
    _objc_retain(puVar12);
    puVar2 = puVar4;
    func_0x00010bdf9540(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_130 = 0xc0000000;
    pcStack_128 = FUN_1066e8bc0;
    puStack_120 = &UNK_110935b60;
    ppuVar11 = ppuVar13;
    puStack_118 = puVar4;
    func_0x00010c0b8600(ppuVar13,param_2,&puStack_138);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar13);
    puVar3 = PTR_PTR_1126ccd70;
    _objc_alloc(PTR_PTR_1126ccd70);
    func_0x00010be63e60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002780(puVar3,param_2,puVar12,&PTR____CFConstantStringClassReference_110e59e18,
                        &PTR____CFConstantStringClassReference_110e59e38,ppuVar11,puVar2,0,puVar4,0)
    ;
    _objc_release(puVar12);
    _objc_release(puVar4);
    puVar8 = PTR_PTR_1126ccc20;
    func_0x00010bf4aea0(PTR_PTR_1126ccc20,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(ppuVar11);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1066e8a74; end: 1066e8bbf; +[SCLensExplorerContainerKarmaItems mockCreatorContainerWithContainerId:creatorItems:] */

void FUN_1066e8a74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdf9540(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc0000000;
  pcStack_58 = FUN_1066e8bc0;
  puStack_50 = &UNK_110935b60;
  uVar2 = param_4;
  uStack_48 = param_1;
  func_0x00010c0b8600(param_4,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126ccd70;
  _objc_alloc(PTR_PTR_1126ccd70);
  func_0x00010be63e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002780(puVar3,param_2,param_3,&PTR____CFConstantStringClassReference_110e59e18,
                      &PTR____CFConstantStringClassReference_110e59e38,uVar2,uVar1,0,param_1,0);
  _objc_release(param_3);
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126ccc20;
  func_0x00010bf4aea0(PTR_PTR_1126ccc20,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066e8bc0; end: 1066e8c17;  */

void FUN_1066e8bc0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bedafe0(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccd78;
  func_0x00010bf5b520(PTR_PTR_1126ccd78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066e8c18; end: 1066e8d4b; +[SCLensExplorerContainerKarmaItems mockedHeroTileContainerWithContainerId:] */

void FUN_1066e8c18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ccd80;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126ccd88;
  func_0x00010bfe4400(PTR_PTR_1126ccd88,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ad80(0,0,puVar1,param_2,2,puVar2,0,0,0,0);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ccd70;
  _objc_alloc(PTR_PTR_1126ccd70);
  func_0x00010be63e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002780(puVar2,param_2,param_3,&PTR____CFConstantStringClassReference_110e59e58,
                      &PTR____CFConstantStringClassReference_110e59e78,
                      PTR____NSArray0__struct_11034ab48,puVar1,0,param_1,0);
  _objc_release(param_3);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126ccc20;
  func_0x00010bf4aea0(PTR_PTR_1126ccc20,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066e8d4c; end: 1066e8e9f; +[SCLensExplorerContainerKarmaItems mockedTaxonomyContainer] */

void FUN_1066e8d4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126ccd80;
  _objc_alloc(PTR_PTR_1126ccd80);
  puVar2 = PTR_PTR_1126ccd88;
  func_0x00010c298de0(PTR_PTR_1126ccd88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ad80(0,0,puVar1,param_2,1,puVar2,2,1,1,0);
  _objc_release(puVar2);
  uVar3 = param_1;
  func_0x00010be60d60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126ccd70;
  _objc_alloc(PTR_PTR_1126ccd70);
  func_0x00010be63e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002780(puVar2,param_2,&PTR____CFConstantStringClassReference_110e59cd8,
                      &PTR____CFConstantStringClassReference_110e59e98,
                      &PTR____CFConstantStringClassReference_110e59eb8,uVar4,puVar1,0,param_1,0);
  _objc_release(param_1);
  puVar5 = PTR_PTR_1126ccc20;
  func_0x00010bf4aea0(PTR_PTR_1126ccc20,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1066e8ea0; end: 1066e8eaf;  */

void FUN_1066e8ea0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe1010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ccd78,PTR_s_heroItemWithHeroItem__1125d5dc0,param_2);
  return;
}



/* Entry: 1066e8eb0; end: 1066e9507; +[SCLensExplorerContainerKarmaItems _mockedContainerLensItemsWithAddAttribution:] */

void FUN_1066e8eb0(undefined8 param_1,undefined8 param_2,int param_3)

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
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined1 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e59ab8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e59a78);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e59a98);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ccd30;
  _objc_alloc(PTR_PTR_1126ccd30);
  uStack_a8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  func_0x00010c05c6e0();
  puVar5 = PTR_PTR_1126ccd40;
  _objc_alloc(PTR_PTR_1126ccd40);
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110e59c78;
  func_0x00010c01d7e0();
  puVar6 = PTR_PTR_1126cce98;
  _objc_opt_new();
  func_0x00010c2bbec0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b2a80(puVar6,param_2,&PTR____CFConstantStringClassReference_110e59a58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ac100(puVar6,param_2,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2af940(puVar6,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ab4c0(puVar6,param_2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bafe0(puVar6,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b3180(puVar6,param_2,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_90 = (undefined *)CONCAT44(puStack_90._4_4_,param_3);
  if (param_3 != 0) {
    func_0x00010c2b26a0(puVar6,param_2,2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar7 = puVar6;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puStack_88 = puVar7;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e59b58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e59b18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e59b38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ccd30;
  _objc_alloc();
  uStack_a8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  func_0x00010c05c6e0();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126ccd40;
  _objc_alloc(PTR_PTR_1126ccd40);
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110e59c78;
  func_0x00010c01d7e0();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126cce98;
  _objc_opt_new();
  _objc_release(puVar6);
  func_0x00010c2bbec0(puVar5,param_2,&PTR____CFConstantStringClassReference_110e59ad8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b2a80(puVar5,param_2,&PTR____CFConstantStringClassReference_110e59af8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ac100(puVar5,param_2,puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2af940(puVar5,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ab4c0(puVar5,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bafe0(puVar5,param_2,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b3180(puVar5,param_2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if ((int)puStack_90 != 0) {
    func_0x00010c2b26a0(puVar5,param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar6 = puVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e59bf8);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = puVar7;
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e59bb8);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = puVar8;
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e59bd8);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = puVar1;
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ccd40;
  _objc_alloc();
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110e59c78;
  func_0x00010c01d7e0();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126cce98;
  _objc_opt_new();
  _objc_release(puVar5);
  func_0x00010c2bbec0(puVar4,param_2,&PTR____CFConstantStringClassReference_110e59b78);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b2a80(puVar4,param_2,&PTR____CFConstantStringClassReference_110e59b98);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ac100(puVar4,param_2,puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2af940(puVar4,param_2,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ab4c0(puVar4,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bafe0(puVar4,param_2,puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b3180(puVar4,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puStack_88;
  puVar7 = PTR_PTR_1126ccd78;
  func_0x00010c094c60(PTR_PTR_1126ccd78,param_2,puStack_88);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126ccd78;
  puStack_80 = puVar7;
  func_0x00010c094c60(PTR_PTR_1126ccd78,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126ccd78;
  puStack_78 = puVar8;
  func_0x00010c094c60(PTR_PTR_1126ccd78,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puStack_98);
  _objc_release(puStack_a0);
  _objc_release(puStack_90);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puStack_e0 = puVar1;
    pcStack_b8 = FUN_1066e9508;
    lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar11 = PTR_PTR_1126ccd40;
    puStack_110 = puVar5;
    puStack_108 = puVar4;
    puStack_100 = puVar10;
    puStack_f8 = puVar2;
    puStack_f0 = puVar6;
    puStack_e8 = puVar3;
    puStack_d8 = puVar8;
    puStack_d0 = puVar9;
    puStack_c8 = puVar7;
    puStack_c0 = &stack0xfffffffffffffff0;
    _objc_alloc();
    func_0x00010c01d7e0();
    puVar2 = PTR_PTR_1126cd030;
    _objc_opt_new();
    func_0x00010c2b25a0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b3180(puVar2,param_2,puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126cd1d8;
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                        &PTR____CFConstantStringClassReference_110e59c58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe0f60(puVar1,param_2,1,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126cd1d8;
    puStack_128 = puVar1;
    func_0x00010bfe0f40(PTR_PTR_1126cd1d8,param_2,3,1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_120 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_128,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar1);
    _objc_release(puVar3);
    puVar1 = puVar5;
    func_0x00010c0d3c80();
    puVar3 = PTR_PTR_1126cd1d8;
    func_0x00010bfe0fe0(PTR_PTR_1126cd1d8,param_2,2,&PTR____CFConstantStringClassReference_110e59f78
                        ,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010c2af700(puVar2,param_2,&PTR____CFConstantStringClassReference_110db2d38);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                        &PTR____CFConstantStringClassReference_110e59d38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac120(puVar2,param_2,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c2acca0(puVar2,param_2,puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010c0d3c80(puVar5);
    puVar6 = PTR_PTR_1126cd1d8;
    func_0x00010bfe0fe0(PTR_PTR_1126cd1d8,param_2,2,&PTR____CFConstantStringClassReference_110e59f98
                        ,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4,param_2,puVar6);
    _objc_release(puVar6);
    func_0x00010c2af700(puVar2,param_2,&PTR____CFConstantStringClassReference_110db04d8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                        &PTR____CFConstantStringClassReference_110e59fb8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac120(puVar2,param_2,puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010c2acca0(puVar2,param_2,puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = &puStack_138;
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_138 = puVar3;
    puStack_130 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,ppuVar13,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar11);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
      ___stack_chk_fail();
      _objc_retain(ppuVar13);
      ppuVar12 = ppuVar13;
      func_0x00010c0b3ae0(ppuVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee53a0(puVar11,param_2,ppuVar12,&PTR____CFConstantStringClassReference_110e59cb8)
      ;
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar12);
      puVar1 = PTR_PTR_1126cce80;
      func_0x00010c092ca0(PTR_PTR_1126cce80,param_2,ppuVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar13);
      func_0x00010c2b3180(puVar1,param_2,puVar11);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar10 = puVar1;
      func_0x00010bf21f60(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(puVar11);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1066e9508; end: 1066e985f; +[SCLensExplorerContainerKarmaItems _mockedTaxonomyContainerItems] */

void FUN_1066e9508(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ccd40;
  _objc_alloc();
  func_0x00010c01d7e0();
  puVar2 = PTR_PTR_1126cd030;
  _objc_opt_new();
  func_0x00010c2b25a0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b3180(puVar2,param_2,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cd1d8;
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e59c58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0f60(puVar4,param_2,1,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126cd1d8;
  puStack_78 = puVar4;
  func_0x00010bfe0f40(PTR_PTR_1126cd1d8,param_2,3,1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar4 = puVar6;
  func_0x00010c0d3c80();
  puVar3 = PTR_PTR_1126cd1d8;
  func_0x00010bfe0fe0(PTR_PTR_1126cd1d8,param_2,2,&PTR____CFConstantStringClassReference_110e59f78,0
                     );
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c2af700(puVar2,param_2,&PTR____CFConstantStringClassReference_110db2d38);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e59d38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac120(puVar2,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010c2acca0(puVar2,param_2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  func_0x00010c0d3c80(puVar6);
  puVar7 = PTR_PTR_1126cd1d8;
  func_0x00010bfe0fe0(PTR_PTR_1126cd1d8,param_2,2,&PTR____CFConstantStringClassReference_110e59f98,0
                     );
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar5,param_2,puVar7);
  _objc_release(puVar7);
  func_0x00010c2af700(puVar2,param_2,&PTR____CFConstantStringClassReference_110db04d8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e59fb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac120(puVar2,param_2,puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  func_0x00010c2acca0(puVar2,param_2,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = &puStack_88;
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar3;
  puStack_80 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,ppuVar10,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(ppuVar10);
    ppuVar9 = ppuVar10;
    func_0x00010c0b3ae0(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee53a0(puVar1,param_2,ppuVar9,&PTR____CFConstantStringClassReference_110e59cb8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar9);
    puVar4 = PTR_PTR_1126cce80;
    func_0x00010c092ca0(PTR_PTR_1126cce80,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar10);
    func_0x00010c2b3180(puVar4,param_2,puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010bf21f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1066e9860; end: 1066e992b; +[SCLensExplorerContainerKarmaItems _updateLoggingInfoForCreatorItem:] */

void FUN_1066e9860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0b3ae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee53a0(param_1,param_2,uVar1,&PTR____CFConstantStringClassReference_110e59cb8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126cce80;
  func_0x00010c092ca0(PTR_PTR_1126cce80,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c2b3180(puVar2,param_2,param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066e992c; end: 1066e993b; +[SCLensExplorerContainerKarmaItems _containerLayoutOrientation] */

void FUN_1066e992c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe4410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ccd88,PTR_s_horizontalWithScrollBehaviour__1125d6ac0,0);
  return;
}



/* Entry: 1066e993c; end: 1066e99b3; +[SCLensExplorerContainerKarmaItems _defaultOrthogonalRenderStrategy] */

void FUN_1066e993c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ccd80;
  _objc_alloc(PTR_PTR_1126ccd80);
  func_0x00010bde7660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ad80(0,0,puVar1,param_2,4,param_1,0,0,0,0);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066e99b4; end: 1066e9a2b; +[SCLensExplorerContainerKarmaItems _iconsOrthogonalRenderStrategy] */

void FUN_1066e99b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ccd80;
  _objc_alloc(PTR_PTR_1126ccd80);
  func_0x00010bde7660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ad80(0,0,puVar1,param_2,5,param_1,1,0,0,0);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066e9a2c; end: 1066e9aaf; +[SCLensExplorerContainerKarmaItems _updatedLoggingInfoFromLoggingInfo:withContainerId:] */

void FUN_1066e9a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cce78;
  func_0x00010c0932c0(PTR_PTR_1126cce78,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aad20();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066e9ab0; end: 1066e9adb; +[SCLensExplorerContainerKarmaItems _noMoreItemsRemoteState] */

void FUN_1066e9ab0(void)

{
  _objc_alloc(PTR_PTR_1126ccc80);
  func_0x00010c04e760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066e9adc; end: 1066e9b67; +[SCLensExplorerHeroTileKarmaHelpers heroItemImageElementWithId:url:] */

void FUN_1066e9adc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ccda0;
  func_0x00010c12a1c0(PTR_PTR_1126ccda0,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccda8;
  func_0x00010bfe95a0(PTR_PTR_1126ccda8,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ccd98;
  _objc_alloc(PTR_PTR_1126ccd98);
  func_0x00010c00f180();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066e9b68; end: 1066e9bf3; +[SCLensExplorerHeroTileKarmaHelpers heroItemImageElementWithId:predefinedIcon:] */

void FUN_1066e9b68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ccda0;
  func_0x00010c106280(PTR_PTR_1126ccda0,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccda8;
  func_0x00010bfe95a0(PTR_PTR_1126ccda8,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ccd98;
  _objc_alloc(PTR_PTR_1126ccd98);
  func_0x00010c00f180();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066e9bf4; end: 1066e9c57; +[SCLensExplorerHeroTileKarmaHelpers heroItemTextElementWithId:text:predefinedIcon:] */

void FUN_1066e9bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ccda8;
  func_0x00010c26cd60(PTR_PTR_1126ccda8,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccd98;
  _objc_alloc(PTR_PTR_1126ccd98);
  func_0x00010c00f180();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066e9c58; end: 1066ea553; +[SCLensExplorerKarmaItems mockedLensItems] */

void FUN_1066e9c58(undefined8 param_1,undefined8 param_2)

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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e5a078);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e5a038);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e5a058);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ccd30;
  _objc_alloc(PTR_PTR_1126ccd30);
  func_0x00010c05c6e0();
  puVar5 = PTR_PTR_1126cce78;
  func_0x00010c0932a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2afc20();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7e60(puVar5,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b6780(puVar5,param_2,&PTR____CFConstantStringClassReference_110dbe8f8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b67a0(puVar5,param_2,&PTR____CFConstantStringClassReference_110e59ed8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b1b80(puVar5,param_2,4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126cce98;
  _objc_opt_new();
  func_0x00010c2b2880(puVar5,param_2,&PTR____CFConstantStringClassReference_110e59ff8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bbec0(puVar6,param_2,&PTR____CFConstantStringClassReference_110e59ff8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b2a80(puVar6,param_2,&PTR____CFConstantStringClassReference_110e5a018);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ac100(puVar6,param_2,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2af940(puVar6,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ab4c0(puVar6,param_2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bafe0(puVar6,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf21f60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b3180(puVar6,param_2,puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = puVar6;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e5a178);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e5a138);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e5a158);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010c2bafe0(puVar6,param_2,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2af940(puVar6,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ac100(puVar6,param_2,puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bbec0(puVar6,param_2,&PTR____CFConstantStringClassReference_110e5a0f8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b2880(puVar5,param_2,&PTR____CFConstantStringClassReference_110e5a0f8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b2a80(puVar6,param_2,&PTR____CFConstantStringClassReference_110e5a118);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar5;
  func_0x00010bf21f60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b3180(puVar6,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ccd30;
  _objc_alloc();
  func_0x00010c05c6e0();
  _objc_release(puVar4);
  func_0x00010c2ab4c0(puVar6,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar6;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e5a218);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e5a1d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e5a1f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c2bafe0(puVar6,param_2,puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2af940(puVar6,param_2,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ac100(puVar6,param_2,puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bbec0(puVar6,param_2,&PTR____CFConstantStringClassReference_110e5a198);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b2880(puVar5,param_2,&PTR____CFConstantStringClassReference_110e5a198);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b2a80(puVar6,param_2,&PTR____CFConstantStringClassReference_110e5a1b8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar5;
  func_0x00010bf21f60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b3180(puVar6,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar10 = puVar6;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e5a278);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e5a298);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c2bafe0(puVar6,param_2,puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2af940(puVar6,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ac100(puVar6,param_2,puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bbec0(puVar6,param_2,&PTR____CFConstantStringClassReference_110e5a238);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b2880(puVar5,param_2,&PTR____CFConstantStringClassReference_110e5a238);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b2a80(puVar6,param_2,&PTR____CFConstantStringClassReference_110e5a258);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = puVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b3180(puVar6,param_2,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar11 = puVar6;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e5a338);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  puVar12 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e5a2f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar13 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e5a318);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c2bafe0(puVar6,param_2,puVar12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2af940(puVar6,param_2,puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ac100(puVar6,param_2,puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bbec0(puVar6,param_2,&PTR____CFConstantStringClassReference_110e5a2b8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b2880(puVar5,param_2,&PTR____CFConstantStringClassReference_110e5a2b8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b2a80(puVar6,param_2,&PTR____CFConstantStringClassReference_110e5a2d8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = puVar5;
  func_0x00010bf21f60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b3180(puVar6,param_2,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar6;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e5a0d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  func_0x00010c2ac100(puVar6,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bbec0(puVar6,param_2,&PTR____CFConstantStringClassReference_110e5a098);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b2880(puVar5,param_2,&PTR____CFConstantStringClassReference_110e5a098);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b2a80(puVar6,param_2,&PTR____CFConstantStringClassReference_110e5a0b8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b3180(puVar6,param_2,puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar9 = puVar6;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar7;
  puStack_90 = puVar4;
  puStack_88 = puVar10;
  puStack_80 = puVar11;
  puStack_78 = puVar1;
  puStack_70 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_98,6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar1);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    func_0x00010c0cf8a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1066ea554; end: 1066ea59f; +[SCLensExplorerKarmaItems mockedFeedLensItems] */

void FUN_1066ea554(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0cf8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066ea5a0; end: 1066ea5af;  */

void FUN_1066ea5a0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c094c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ccc20,PTR_s_lensItemWithLensItem__112602d28,param_2);
  return;
}



/* Entry: 1066ea5b0; end: 1066ea5fb; +[SCLensExplorerKarmaItems mockedFeedCreatorItems] */

void FUN_1066ea5b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be60ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066ea5fc; end: 1066ea60b;  */

void FUN_1066ea5fc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5b530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ccc20,PTR_s_creatorItemWithCreatorItem__1125b46f0,param_2);
  return;
}



/* Entry: 1066ea60c; end: 1066ead13; +[SCLensExplorerKarmaItems _mockedCreatorItems] */

void FUN_1066ea60c(undefined8 param_1,undefined8 param_2)

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
  undefined *puVar12;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126cce80;
  func_0x00010c092c80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccd40;
  _objc_alloc();
  func_0x00010c01d7e0();
  func_0x00010c2ab560(puVar1,param_2,&PTR____CFConstantStringClassReference_110e598f8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b9580(puVar1,param_2,&PTR____CFConstantStringClassReference_110e59fd8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ab5c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e5a018);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ab540(puVar1,param_2,&PTR____CFConstantStringClassReference_110e5a018);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b17c0(puVar1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b4b80(puVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b62c0(puVar1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ccd58;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e5a038);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e5a058);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bb00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e59ff8,puVar4,puVar5)
  ;
  puVar6 = PTR_PTR_1126ccd58;
  puStack_80 = puVar3;
  _objc_alloc();
  puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e5a138);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e5a158);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bb00(puVar6,param_2,&PTR____CFConstantStringClassReference_110e5a0f8,puVar7,puVar8)
  ;
  puVar9 = PTR_PTR_1126ccd58;
  puStack_78 = puVar6;
  _objc_alloc();
  puVar10 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e5a1d8);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e5a1f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bb00(puVar9,param_2,&PTR____CFConstantStringClassReference_110e5a198,puVar10,
                      puVar11);
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b2b80(puVar1,param_2,puVar12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar9);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar6);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c2b3180(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ab560(puVar1,param_2,&PTR____CFConstantStringClassReference_110e59998);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ab5c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e599b8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ab540(puVar1,param_2,&PTR____CFConstantStringClassReference_110e599b8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ccd58;
  _objc_alloc();
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e5a058);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bb00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e59ff8,0,puVar5);
  puVar6 = PTR_PTR_1126ccd58;
  puStack_90 = puVar4;
  _objc_alloc();
  puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e5a2f8);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e5a318);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bb00(puVar6,param_2,&PTR____CFConstantStringClassReference_110e5a198,puVar7,puVar8)
  ;
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_90,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b2b80(puVar1,param_2,puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar5);
  puVar8 = puVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ab560(puVar1,param_2,&PTR____CFConstantStringClassReference_110e5a3f8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ab5c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e5a418);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ab540(puVar1,param_2,&PTR____CFConstantStringClassReference_110e5a438);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ccd58;
  _objc_alloc();
  puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e5a1d8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e5a1f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bb00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e59ff8,puVar6,puVar5)
  ;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_98,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b2b80(puVar1,param_2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar6);
  puVar4 = puVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ab560(puVar1,param_2,&PTR____CFConstantStringClassReference_110e5a458);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ab5c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e5a478);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ab540(puVar1,param_2,&PTR____CFConstantStringClassReference_110e5a498);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ccd58;
  _objc_alloc();
  puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110e5a158);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bb00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e59ff8,0,puVar6);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a0 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a0,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b2b80(puVar1,param_2,puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar6);
  puVar5 = puVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c0 = puVar3;
  puStack_b8 = puVar8;
  puStack_b0 = puVar4;
  puStack_a8 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_c0,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar8);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar2 = puVar1;
    func_0x00010c0cf780();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0d3c80();
    _objc_release(puVar2);
    puVar4 = PTR_PTR_1126cd1e0;
    func_0x00010c0cf820(PTR_PTR_1126cd1e0,param_2,&PTR____CFConstantStringClassReference_110e5a3d8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126cd1e0;
    func_0x00010c0cf600(PTR_PTR_1126cd1e0,param_2,&PTR____CFConstantStringClassReference_110e5a358);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126cd1e0;
    func_0x00010c0cf6a0(PTR_PTR_1126cd1e0,param_2,&PTR____CFConstantStringClassReference_110e5a378);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126cd1e0;
    func_0x00010be60ce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cf5c0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e5a3b8,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010c066b00(puVar3,param_2,puVar5,0);
    func_0x00010c066b00(puVar3,param_2,puVar7,4);
    func_0x00010befa120(puVar3,param_2,puVar2);
    puVar6 = puVar3;
    func_0x00010bf51e00(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1066ead14; end: 1066eae5b; +[SCLensExplorerKarmaItems mockedFeedWithContainerItems] */

void FUN_1066ead14(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = param_1;
  func_0x00010c0cf780();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d3c80();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126cd1e0;
  func_0x00010c0cf820(PTR_PTR_1126cd1e0,param_2,&PTR____CFConstantStringClassReference_110e5a3d8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cd1e0;
  func_0x00010c0cf600(PTR_PTR_1126cd1e0,param_2,&PTR____CFConstantStringClassReference_110e5a358);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126cd1e0;
  func_0x00010c0cf6a0(PTR_PTR_1126cd1e0,param_2,&PTR____CFConstantStringClassReference_110e5a378);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126cd1e0;
  func_0x00010be60ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cf5c0(puVar6,param_2,&PTR____CFConstantStringClassReference_110e5a3b8,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c066b00(uVar2,param_2,puVar4,0);
  func_0x00010c066b00(uVar2,param_2,puVar5,4);
  func_0x00010befa120(uVar2,param_2,puVar6);
  uVar1 = uVar2;
  func_0x00010bf51e00(uVar2);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066eae5c; end: 1066eaeeb; +[SCLensExplorerKarmaItems mockedFeedWithDynamicContainerItems] */

void FUN_1066eae5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010c0cf780();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0d3c80();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126cd1e0;
  func_0x00010c0cf6e0(PTR_PTR_1126cd1e0,param_2,&PTR____CFConstantStringClassReference_110e5a398);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066b00(uVar1,param_2,puVar2,0);
  uVar3 = uVar1;
  func_0x00010bf51e00(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1066eaeec; end: 1066eb193; +[SCLensExplorerKarmaItems mockedFeedModelsWithPrefetchedItems:] */

void FUN_1066eaeec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  int iVar19;
  undefined **ppuVar20;
  undefined8 uVar21;
  undefined8 ****ppppuVar22;
  code *pcVar23;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  long lStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined8 *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 ***pppuStack_220;
  code *pcStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  undefined **ppuStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  long lStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined **ppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126cce00;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c04ee40();
  puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar2;
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126cce00;
  _objc_alloc();
  func_0x00010c04ee40();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar4 = param_1;
  func_0x00010bddbf40(param_1,param_2,&PTR____CFConstantStringClassReference_110f307f8,
                      &PTR____CFConstantStringClassReference_110e82eb8,
                      &PTR____CFConstantStringClassReference_110e82f98,1,puVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  uVar5 = param_1;
  uStack_a8 = uVar4;
  func_0x00010bec5c00(param_1,param_2,&PTR____CFConstantStringClassReference_110e04238,
                      &PTR____CFConstantStringClassReference_110e5b3d8,1,
                      PTR____NSArray0__struct_11034ab48);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  uStack_a0 = uVar5;
  func_0x00010bddbf40(param_1,param_2,&PTR____CFConstantStringClassReference_110f307d8,
                      &PTR____CFConstantStringClassReference_110e82f18,
                      &PTR____CFConstantStringClassReference_110e82fb8,0,puVar3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  uStack_98 = uVar6;
  func_0x00010bec5c00(param_1,param_2,&PTR____CFConstantStringClassReference_110ee15d8,
                      &PTR____CFConstantStringClassReference_110e259d8,0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  uStack_90 = uVar7;
  func_0x00010bddbf40(param_1,param_2,&PTR____CFConstantStringClassReference_110f30778,
                      &PTR____CFConstantStringClassReference_110e82ed8,0,0,puVar1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_88 = uVar8;
  func_0x00010bddbf40(param_1,param_2,&PTR____CFConstantStringClassReference_110f30758,
                      &PTR____CFConstantStringClassReference_110e82ef8,0,0,puVar1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = &uStack_a8;
  uVar21 = 6;
  puVar9 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = param_1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  puVar10 = puStack_b0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    ppuStack_110 = &PTR_PTR_110c90968;
    ppuStack_c8 = &PTR_PTR_110970030;
    pcStack_b8 = FUN_1066eb194;
    lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_108 = uVar8;
    uStack_100 = param_1;
    uStack_f8 = uVar7;
    uStack_f0 = uVar6;
    uStack_e8 = uVar5;
    uStack_e0 = uVar4;
    puStack_d8 = puVar3;
    puStack_d0 = puVar9;
    puStack_c0 = &stack0xfffffffffffffff0;
    _objc_retain(uVar21);
    puVar1 = PTR____NSArray0__struct_11034ab48;
    puVar11 = puVar10;
    func_0x00010bddbf40(puVar10,param_2,&PTR____CFConstantStringClassReference_110e04238,
                        &PTR____CFConstantStringClassReference_110e5b3d8,0,0,
                        PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48);
    _objc_retainAutoreleasedReturnValue();
    uStack_140 = 1;
    puVar12 = puVar10;
    puStack_138 = puVar11;
    func_0x00010bddbf60(puVar10,param_2,uVar21,&PTR____CFConstantStringClassReference_110e82eb8,0,1,
                        puVar1,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar21);
    puVar13 = puVar10;
    puStack_130 = puVar12;
    func_0x00010bddbf40(puVar10,param_2,&PTR____CFConstantStringClassReference_110f30778,
                        &PTR____CFConstantStringClassReference_110e82ed8,0,0,puVar1,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar10;
    puStack_128 = puVar13;
    func_0x00010bddbf40(puVar10,param_2,&PTR____CFConstantStringClassReference_110f30758,
                        &PTR____CFConstantStringClassReference_110e82ef8,0,0,puVar1,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_120 = puVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_138,4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    puVar15 = puVar11;
    _objc_release();
    if ((int)puVar2 != 0) {
      puVar2 = puVar9;
      func_0x00010c0d3c80();
      func_0x00010bddbf40(puVar10,param_2,&PTR____CFConstantStringClassReference_110e79d38,
                          &PTR____CFConstantStringClassReference_110e214f8,0,0,
                          PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066b00(puVar2,param_2,puVar10,1);
      _objc_release(puVar10);
      puVar10 = puVar2;
      func_0x00010bf51e00();
      _objc_release(puVar9);
      puVar15 = puVar2;
      _objc_release();
      puVar9 = puVar10;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
      ___stack_chk_fail();
      puVar1 = PTR____NSArray0__struct_11034ab48;
      pcStack_148 = FUN_1066eb3bc;
      lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uStack_1a0 = 1;
      puVar16 = puVar15;
      puStack_180 = puVar14;
      puStack_178 = puVar12;
      puStack_170 = puVar9;
      puStack_168 = puVar11;
      puStack_160 = puVar2;
      puStack_158 = puVar10;
      ppuStack_150 = &puStack_c0;
      func_0x00010bddbf60();
      _objc_retainAutoreleasedReturnValue();
      puStack_198 = puVar16;
      func_0x00010bddbf40(puVar15,param_2,&PTR____CFConstantStringClassReference_110f30758,
                          &PTR____CFConstantStringClassReference_110e82ef8,0,0,puVar1,puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_190 = puVar15;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_198,2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      puVar2 = puVar16;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
        ___stack_chk_fail();
        iVar19 = (int)&puStack_210;
        ppuStack_1f0 = &PTR_PTR_110c90968;
        ppuStack_1d8 = &PTR_PTR_110970030;
        ppuStack_1d0 = &PTR_PTR_110c90968;
        pcStack_1a8 = FUN_1066eb4cc;
        lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar1 = PTR_PTR_1126cce00;
        puStack_1e8 = puVar13;
        puStack_1e0 = puVar14;
        puStack_1c8 = puVar16;
        puStack_1c0 = puVar15;
        puStack_1b8 = puVar9;
        pppuStack_1b0 = &ppuStack_150;
        _objc_alloc();
        func_0x00010c04ee40();
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_200 = puVar1;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_200,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        puVar1 = PTR____NSArray0__struct_11034ab48;
        puVar10 = puVar2;
        func_0x00010bddbf40(puVar2,param_2,&PTR____CFConstantStringClassReference_110f30db8,
                            &PTR____CFConstantStringClassReference_110e82f58,
                            &PTR____CFConstantStringClassReference_110e82fd8,0,puVar3,
                            PTR____NSArray0__struct_11034ab48);
        _objc_retainAutoreleasedReturnValue();
        puStack_210 = puVar10;
        func_0x00010bec5c00(puVar2,param_2,&PTR____CFConstantStringClassReference_110f30d98,
                            &PTR____CFConstantStringClassReference_110e82f78,0,puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_208 = puVar2;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        _objc_release(puVar10);
        puVar17 = puVar3;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1f8) {
          ___stack_chk_fail();
          ppuVar20 = &puStack_290;
          ppuStack_270 = &PTR_PTR_110c90968;
          ppuStack_268 = &PTR_PTR_110970030;
          ppuStack_260 = &PTR_PTR_110c90968;
          ppuStack_258 = &PTR_PTR_110970030;
          ppuStack_250 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
          puStack_238 = puVar1;
          pcStack_218 = FUN_1066eb62c;
          ppppuVar22 = &pppuStack_220;
          lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
          puVar1 = PTR_PTR_1126cce00;
          puStack_248 = puVar10;
          puStack_240 = puVar3;
          puStack_230 = puVar2;
          puStack_228 = puVar9;
          pppuStack_220 = &pppuStack_1b0;
          _objc_alloc();
          func_0x00010c04ee40();
          puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_280 = puVar1;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_280,1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar1);
          puVar1 = PTR____NSArray0__struct_11034ab48;
          if (iVar19 != 0) {
            puVar1 = PTR_PTR_1126ccfd0;
            func_0x00010c0cf780();
            _objc_retainAutoreleasedReturnValue();
          }
          puVar3 = PTR_PTR_1126ccfd0;
          func_0x00010c0cf760(PTR_PTR_1126ccfd0);
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar17;
          func_0x00010bddbf40(puVar17,param_2,&PTR____CFConstantStringClassReference_110f307d8,
                              &PTR____CFConstantStringClassReference_110e82f18,
                              &PTR____CFConstantStringClassReference_110e82fb8,0,puVar2,puVar3);
          _objc_retainAutoreleasedReturnValue();
          puStack_290 = puVar18;
          func_0x00010bec5c00(puVar17,param_2,&PTR____CFConstantStringClassReference_110ee15d8,
                              &PTR____CFConstantStringClassReference_110e259d8,0,puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_288 = puVar17;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_290,2);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar17);
          _objc_release(puVar18);
          _objc_release(puVar3);
          _objc_release(puVar1);
          puVar10 = puVar2;
          _objc_release(puVar2);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_278) {
            ___stack_chk_fail();
            puVar3 = PTR_PTR_1126ccfd0;
            pcVar23 = FUN_1066eb7e8;
            _objc_retain(ppuVar20);
            func_0x00010c0cf780(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bddbf40(puVar10,param_2,ppuVar20,
                                &PTR____CFConstantStringClassReference_110e82f38,0,0,
                                PTR____NSArray0__struct_11034ab48,puVar3,puVar1,puVar17,puVar9,
                                puVar2,ppppuVar22,pcVar23);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar20);
            _objc_release(puVar3);
            puVar9 = puVar10;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1066eb194; end: 1066eb3bb; +[SCLensExplorerKarmaItems mockedFeedModelsForARBarWithRecentFeed:defaultIdentifier:] */

void FUN_1066eb194(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined **ppuVar10;
  undefined1 ****ppppuVar11;
  code *pcVar12;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  undefined1 ***pppuStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar6 = PTR____NSArray0__struct_11034ab48;
  puVar2 = param_1;
  func_0x00010bddbf40(param_1,param_2,&PTR____CFConstantStringClassReference_110e04238,
                      &PTR____CFConstantStringClassReference_110e5b3d8,0,0,
                      PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48);
  _objc_retainAutoreleasedReturnValue();
  uStack_90 = 1;
  puVar3 = param_1;
  puStack_88 = puVar2;
  func_0x00010bddbf60(param_1,param_2,param_4,&PTR____CFConstantStringClassReference_110e82eb8,0,1,
                      puVar6,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar4 = param_1;
  puStack_80 = puVar3;
  func_0x00010bddbf40(param_1,param_2,&PTR____CFConstantStringClassReference_110f30778,
                      &PTR____CFConstantStringClassReference_110e82ed8,0,0,puVar6,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_1;
  puStack_78 = puVar4;
  func_0x00010bddbf40(param_1,param_2,&PTR____CFConstantStringClassReference_110f30758,
                      &PTR____CFConstantStringClassReference_110e82ef8,0,0,puVar6,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar7 = puVar2;
  _objc_release();
  if ((int)param_3 != 0) {
    param_3 = puVar6;
    func_0x00010c0d3c80();
    func_0x00010bddbf40(param_1,param_2,&PTR____CFConstantStringClassReference_110e79d38,
                        &PTR____CFConstantStringClassReference_110e214f8,0,0,
                        PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066b00(param_3,param_2,param_1,1);
    _objc_release(param_1);
    param_1 = param_3;
    func_0x00010bf51e00();
    _objc_release(puVar6);
    puVar7 = param_3;
    _objc_release();
    puVar6 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar1 = PTR____NSArray0__struct_11034ab48;
    pcStack_98 = FUN_1066eb3bc;
    lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_f0 = 1;
    puVar8 = puVar7;
    puStack_d0 = puVar5;
    puStack_c8 = puVar3;
    puStack_c0 = puVar6;
    puStack_b8 = puVar2;
    puStack_b0 = param_3;
    puStack_a8 = param_1;
    puStack_a0 = &stack0xfffffffffffffff0;
    func_0x00010bddbf60();
    _objc_retainAutoreleasedReturnValue();
    puStack_e8 = puVar8;
    func_0x00010bddbf40(puVar7,param_2,&PTR____CFConstantStringClassReference_110f30758,
                        &PTR____CFConstantStringClassReference_110e82ef8,0,0,puVar1,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_e0 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_e8,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar2 = puVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
      ___stack_chk_fail();
      iVar9 = (int)&puStack_160;
      ppuStack_140 = &PTR_PTR_110c90968;
      ppuStack_128 = &PTR_PTR_110970030;
      ppuStack_120 = &PTR_PTR_110c90968;
      pcStack_f8 = FUN_1066eb4cc;
      lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar3 = PTR_PTR_1126cce00;
      puStack_138 = puVar4;
      puStack_130 = puVar5;
      puStack_118 = puVar8;
      puStack_110 = puVar7;
      puStack_108 = puVar6;
      ppuStack_100 = &puStack_a0;
      _objc_alloc();
      func_0x00010c04ee40();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_150 = puVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_150,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar6 = PTR____NSArray0__struct_11034ab48;
      puVar3 = puVar2;
      func_0x00010bddbf40(puVar2,param_2,&PTR____CFConstantStringClassReference_110f30db8,
                          &PTR____CFConstantStringClassReference_110e82f58,
                          &PTR____CFConstantStringClassReference_110e82fd8,0,puVar4,
                          PTR____NSArray0__struct_11034ab48);
      _objc_retainAutoreleasedReturnValue();
      puStack_160 = puVar3;
      func_0x00010bec5c00(puVar2,param_2,&PTR____CFConstantStringClassReference_110f30d98,
                          &PTR____CFConstantStringClassReference_110e82f78,0,puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_158 = puVar2;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar3);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_148) {
        ___stack_chk_fail();
        ppuVar10 = &puStack_1e0;
        pcStack_168 = FUN_1066eb62c;
        ppppuVar11 = &pppuStack_170;
        lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar6 = PTR_PTR_1126cce00;
        pppuStack_170 = &ppuStack_100;
        _objc_alloc();
        func_0x00010c04ee40();
        puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_1d0 = puVar6;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1d0,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        puVar3 = PTR____NSArray0__struct_11034ab48;
        if (iVar9 != 0) {
          puVar3 = PTR_PTR_1126ccfd0;
          func_0x00010c0cf780();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar5 = PTR_PTR_1126ccfd0;
        func_0x00010c0cf760(PTR_PTR_1126ccfd0);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar4;
        func_0x00010bddbf40(puVar4,param_2,&PTR____CFConstantStringClassReference_110f307d8,
                            &PTR____CFConstantStringClassReference_110e82f18,
                            &PTR____CFConstantStringClassReference_110e82fb8,0,puVar2,puVar5);
        _objc_retainAutoreleasedReturnValue();
        puStack_1e0 = puVar7;
        func_0x00010bec5c00(puVar4,param_2,&PTR____CFConstantStringClassReference_110ee15d8,
                            &PTR____CFConstantStringClassReference_110e259d8,0,puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_1d8 = puVar4;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1e0,2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(puVar7);
        _objc_release(puVar5);
        _objc_release(puVar3);
        puVar5 = puVar2;
        _objc_release(puVar2);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c8) {
          ___stack_chk_fail();
          puVar7 = PTR_PTR_1126ccfd0;
          pcVar12 = FUN_1066eb7e8;
          _objc_retain(ppuVar10);
          func_0x00010c0cf780(puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bddbf40(puVar5,param_2,ppuVar10,
                              &PTR____CFConstantStringClassReference_110e82f38,0,0,
                              PTR____NSArray0__struct_11034ab48,puVar7,puVar3,puVar4,puVar6,puVar2,
                              ppppuVar11,pcVar12);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar10);
          _objc_release(puVar7);
          puVar6 = puVar5;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1066eb3bc; end: 1066eb4cb; +[SCLensExplorerKarmaItems mockedFeedModelsForPostCaptureARBar] */

void FUN_1066eb3bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined **ppuVar10;
  undefined1 ***pppuVar11;
  code *pcVar12;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar2 = PTR____NSArray0__struct_11034ab48;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = 1;
  uVar1 = param_1;
  func_0x00010bddbf60(param_1,param_2,&PTR____CFConstantStringClassReference_110f30778,
                      &PTR____CFConstantStringClassReference_110e82ed8,0,1,
                      PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48);
  _objc_retainAutoreleasedReturnValue();
  uStack_58 = uVar1;
  func_0x00010bddbf40(param_1,param_2,&PTR____CFConstantStringClassReference_110f30758,
                      &PTR____CFConstantStringClassReference_110e82ef8,0,0,puVar2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = param_1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_58,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    iVar9 = (int)&uStack_d0;
    pcStack_68 = FUN_1066eb4cc;
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = PTR_PTR_1126cce00;
    puStack_70 = &stack0xfffffffffffffff0;
    _objc_alloc();
    func_0x00010c04ee40();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_c0 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_c0,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR____NSArray0__struct_11034ab48;
    uVar4 = uVar1;
    func_0x00010bddbf40(uVar1,param_2,&PTR____CFConstantStringClassReference_110f30db8,
                        &PTR____CFConstantStringClassReference_110e82f58,
                        &PTR____CFConstantStringClassReference_110e82fd8,0,puVar3,
                        PTR____NSArray0__struct_11034ab48);
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = uVar4;
    func_0x00010bec5c00(uVar1,param_2,&PTR____CFConstantStringClassReference_110f30d98,
                        &PTR____CFConstantStringClassReference_110e82f78,0,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_c8 = uVar1;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
      ___stack_chk_fail();
      ppuVar10 = &puStack_150;
      pcStack_d8 = FUN_1066eb62c;
      pppuVar11 = &ppuStack_e0;
      lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar2 = PTR_PTR_1126cce00;
      ppuStack_e0 = &puStack_70;
      _objc_alloc();
      func_0x00010c04ee40();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_140 = puVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_140,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar6 = PTR____NSArray0__struct_11034ab48;
      if (iVar9 != 0) {
        puVar6 = PTR_PTR_1126ccfd0;
        func_0x00010c0cf780();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar7 = PTR_PTR_1126ccfd0;
      func_0x00010c0cf760(PTR_PTR_1126ccfd0);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar3;
      func_0x00010bddbf40(puVar3,param_2,&PTR____CFConstantStringClassReference_110f307d8,
                          &PTR____CFConstantStringClassReference_110e82f18,
                          &PTR____CFConstantStringClassReference_110e82fb8,0,puVar5,puVar7);
      _objc_retainAutoreleasedReturnValue();
      puStack_150 = puVar8;
      func_0x00010bec5c00(puVar3,param_2,&PTR____CFConstantStringClassReference_110ee15d8,
                          &PTR____CFConstantStringClassReference_110e259d8,0,puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_148 = puVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_150,2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      puVar7 = puVar5;
      _objc_release(puVar5);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
        ___stack_chk_fail();
        puVar8 = PTR_PTR_1126ccfd0;
        pcVar12 = FUN_1066eb7e8;
        _objc_retain(ppuVar10);
        func_0x00010c0cf780(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bddbf40(puVar7,param_2,ppuVar10,&PTR____CFConstantStringClassReference_110e82f38
                            ,0,0,PTR____NSArray0__struct_11034ab48,puVar8,puVar6,puVar3,puVar2,
                            puVar5,pppuVar11,pcVar12);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar10);
        _objc_release(puVar8);
        puVar2 = puVar7;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066eb4cc; end: 1066eb62b; +[SCLensExplorerKarmaItems mockedFeedModelsForTokenPage] */

void FUN_1066eb4cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined **ppuVar9;
  undefined1 **ppuVar10;
  code *pcVar11;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  iVar8 = (int)&uStack_70;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126cce00;
  _objc_alloc();
  func_0x00010c04ee40();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  uVar3 = param_1;
  func_0x00010bddbf40(param_1,param_2,&PTR____CFConstantStringClassReference_110f30db8,
                      &PTR____CFConstantStringClassReference_110e82f58,
                      &PTR____CFConstantStringClassReference_110e82fd8,0,puVar2,
                      PTR____NSArray0__struct_11034ab48);
  _objc_retainAutoreleasedReturnValue();
  uStack_70 = uVar3;
  func_0x00010bec5c00(param_1,param_2,&PTR____CFConstantStringClassReference_110f30d98,
                      &PTR____CFConstantStringClassReference_110e82f78,0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_68 = param_1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    ppuVar9 = &puStack_f0;
    pcStack_78 = FUN_1066eb62c;
    ppuVar10 = &puStack_80;
    lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = PTR_PTR_1126cce00;
    puStack_80 = &stack0xfffffffffffffff0;
    _objc_alloc();
    func_0x00010c04ee40();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_e0 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_e0,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar5 = PTR____NSArray0__struct_11034ab48;
    if (iVar8 != 0) {
      puVar5 = PTR_PTR_1126ccfd0;
      func_0x00010c0cf780();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = PTR_PTR_1126ccfd0;
    func_0x00010c0cf760(PTR_PTR_1126ccfd0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010bddbf40(puVar2,param_2,&PTR____CFConstantStringClassReference_110f307d8,
                        &PTR____CFConstantStringClassReference_110e82f18,
                        &PTR____CFConstantStringClassReference_110e82fb8,0,puVar4,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = puVar7;
    func_0x00010bec5c00(puVar2,param_2,&PTR____CFConstantStringClassReference_110ee15d8,
                        &PTR____CFConstantStringClassReference_110e259d8,0,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_e8 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_f0,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar6 = puVar4;
    _objc_release(puVar4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
      ___stack_chk_fail();
      puVar7 = PTR_PTR_1126ccfd0;
      pcVar11 = FUN_1066eb7e8;
      _objc_retain(ppuVar9);
      func_0x00010c0cf780(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bddbf40(puVar6,param_2,ppuVar9,&PTR____CFConstantStringClassReference_110e82f38,0,
                          0,PTR____NSArray0__struct_11034ab48,puVar7,puVar5,puVar2,puVar1,puVar4,
                          ppuVar10,pcVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar9);
      _objc_release(puVar7);
      puVar1 = puVar6;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066eb62c; end: 1066eb7e7; +[SCLensExplorerKarmaItems mockedCreatorsFeedModelsWithSubscription:] */

void FUN_1066eb62c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  code *pcVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar7 = &uStack_80;
  puVar8 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126cce00;
  _objc_alloc();
  func_0x00010c04ee40();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126ccfd0;
    func_0x00010c0cf780();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR_PTR_1126ccfd0;
  func_0x00010c0cf760(PTR_PTR_1126ccfd0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bddbf40(param_1,param_2,&PTR____CFConstantStringClassReference_110f307d8,
                      &PTR____CFConstantStringClassReference_110e82f18,
                      &PTR____CFConstantStringClassReference_110e82fb8,0,puVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uStack_80 = uVar4;
  func_0x00010bec5c00(param_1,param_2,&PTR____CFConstantStringClassReference_110ee15d8,
                      &PTR____CFConstantStringClassReference_110e259d8,0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = param_1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_80,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar3 = puVar2;
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar6 = PTR_PTR_1126ccfd0;
    pcVar9 = FUN_1066eb7e8;
    _objc_retain(puVar7);
    func_0x00010c0cf780(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bddbf40(puVar3,param_2,puVar7,&PTR____CFConstantStringClassReference_110e82f38,0,0,
                        PTR____NSArray0__struct_11034ab48,puVar6,puVar1,param_1,puVar5,puVar2,puVar8
                        ,pcVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar5 = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1066eb7e8; end: 1066eb883; +[SCLensExplorerKarmaItems mockedLensCollectionFeedWithCollectionId:] */

void FUN_1066eb7e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ccfd0;
  _objc_retain(param_3);
  func_0x00010c0cf780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddbf40(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110e82f38,0,0,
                      PTR____NSArray0__struct_11034ab48,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1066eb884; end: 1066eb8a3; +[SCLensExplorerKarmaItems _categoryFeedModelWithIdentifier:name:subtitleDisplayName:isDefault:subcategoriesData:items:] */

void FUN_1066eb884(void)

{
  func_0x00010bddbf60();
  return;
}



/* Entry: 1066eb8a4; end: 1066eba33; +[SCLensExplorerKarmaItems _categoryFeedModelWithIdentifier:name:subtitleDisplayName:isDefault:subcategoriesData:items:feedActivation:] */

void FUN_1066eb8a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ccdf8;
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf336a0(puVar1,param_2,param_3,param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccc80;
  _objc_alloc(PTR_PTR_1126ccc80);
  func_0x00010c04e760();
  puVar3 = PTR_PTR_1126ccd80;
  _objc_alloc();
  puVar4 = PTR_PTR_1126ccd88;
  func_0x00010c298de0(PTR_PTR_1126ccd88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ad80(0,0,puVar3,param_2,4,puVar4,0,0,0,0);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126ccc88;
  _objc_alloc(PTR_PTR_1126ccc88);
  func_0x00010c012580();
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066eba34; end: 1066ebb97; +[SCLensExplorerKarmaItems _subcategoryFeedModelWithIdentifier:name:contentType:items:] */

void FUN_1066eba34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126ccdf8;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c25ea80(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccc80;
  _objc_alloc(PTR_PTR_1126ccc80);
  func_0x00010c04e760();
  puVar3 = PTR_PTR_1126ccd88;
  func_0x00010bfe4400(PTR_PTR_1126ccd88,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ccd80;
  _objc_alloc();
  func_0x00010c04ad80(0,0);
  puVar5 = PTR_PTR_1126ccc88;
  _objc_alloc(PTR_PTR_1126ccc88);
  func_0x00010c012580();
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1066ebb98; end: 1066ebd0b; -[SCLensExplorerMockedBatchQueryCoordinator initWithQueryCoordinatorFactory:queryFactory:categoriesFactory:categoriesAggregator:dynamicUpdateHandler:configuration:] */

undefined1 *
FUN_1066ebb98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126f28f0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
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
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    func_0x00010c0d9840(*(undefined8 *)((long)puVar1 + 0x38));
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066ebd0c; end: 1066ebd13; +[SCLensExplorerMockedBatchQueryCoordinator isAvailable] */

undefined8 FUN_1066ebd0c(void)

{
  return 0;
}



/* Entry: 1066ebd14; end: 1066ebd4f; -[SCLensExplorerMockedBatchQueryCoordinator categoriesResponse] */

void FUN_1066ebd14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new(PTR_PTR_1126ae820);
  func_0x00010be90ae0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066ebd50; end: 1066ec60b; -[SCLensExplorerMockedBatchQueryCoordinator _requestCategoriesOnObserver:] */

void FUN_1066ebd50(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  long *plStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  long lStack_468;
  long *plStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  code *pcStack_3a0;
  undefined *puStack_398;
  long lStack_390;
  undefined8 uStack_388;
  undefined *puStack_380;
  undefined8 uStack_378;
  code *pcStack_370;
  undefined *puStack_368;
  long lStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 auStack_310 [128];
  undefined1 auStack_290 [128];
  undefined1 auStack_210 [128];
  undefined1 auStack_190 [128];
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfa3d00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa5900(lVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar20 = lVar3;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar20;
  func_0x00010bf4e080();
  _objc_release(lVar20);
  puVar4 = PTR_PTR_1126cd168;
  if (lVar11 == 1) {
    puVar6 = PTR_PTR_1126ccfd0;
    func_0x00010c0cf7c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar20 = lVar3;
    func_0x00010c11d680(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar20;
    func_0x00010bf4e080();
    func_0x00010c06b3a0(puVar4,param_2,lVar11);
    _objc_release(lVar20);
    puVar6 = PTR_PTR_1126ccfd0;
    if ((int)puVar4 == 0) {
      uVar5 = *(ulong *)(param_1 + 0x30);
      func_0x00010c0f8400();
      if ((uVar5 & 1) == 0) {
        uVar17 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010bfa3d00();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar17;
        func_0x00010c0720c0();
        _objc_release(uVar17);
        if ((int)uVar2 != 0) {
          puVar6 = PTR_PTR_1126ccfd0;
          func_0x00010c0cf7e0();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1066ebf34;
        }
      }
      lVar20 = param_1;
      func_0x00010be77860(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126ccfd0;
      func_0x00010c0cf800(PTR_PTR_1126ccfd0,param_2,lVar20);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar20 = lVar3;
      func_0x00010c11d680();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar20;
      func_0x00010bf4e080();
      ppuVar1 = &PTR_PTR_110c90980;
      if (lVar11 != 5) {
        ppuVar1 = &PTR_PTR_110c90988;
      }
      func_0x00010c0cf7a0(puVar6,param_2,0,*ppuVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar20);
  }
LAB_1066ebf34:
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  lStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  plStack_340 = (long *)0x0;
  _objc_retain(puVar6);
  puVar7 = puVar6;
  func_0x00010bf52a60(puVar6,param_2,&uStack_350,auStack_100,0x10);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  if (puVar7 != (undefined *)0x0) {
    lVar20 = *plStack_340;
    do {
      puVar22 = (undefined *)0x0;
      do {
        if (*plStack_340 != lVar20) {
          _objc_enumerationMutation(puVar6);
        }
        uVar17 = *(undefined8 *)(lStack_348 + (long)puVar22 * 8);
        uVar2 = uVar17;
        func_0x00010bf332e0(uVar17);
        _objc_retainAutoreleasedReturnValue();
        puStack_380 = puVar4;
        uStack_378 = 0xc2000000;
        pcStack_370 = FUN_1066ec60c;
        puStack_368 = &UNK_1109358d0;
        puStack_3b0 = puVar4;
        uStack_3a8 = 0xc2000000;
        pcStack_3a0 = FUN_1066ec710;
        puStack_398 = &UNK_110847310;
        lStack_390 = param_1;
        uStack_388 = uVar17;
        lStack_360 = param_1;
        uStack_358 = uVar17;
        func_0x00010c0bcf20();
        _objc_release(uVar2);
        puVar22 = puVar22 + 1;
      } while (puVar7 != puVar22);
      puVar7 = puVar6;
      func_0x00010bf52a60(puVar6,param_2,&uStack_350,auStack_100,0x10);
    } while (puVar7 != (undefined *)0x0);
  }
  _objc_release(puVar6);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x18));
  puVar4 = PTR_PTR_1126cd1e8;
  _objc_alloc();
  puVar7 = PTR_PTR_1126cd100;
  func_0x00010c0e8e20(PTR_PTR_1126cd100);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c1593e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010bf334a0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_110 = &PTR____CFConstantStringClassReference_110ea3e78;
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c1593e0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar9;
  func_0x00010bf334a0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_108 = uVar17;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_110,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03c520(puVar4,param_2,puVar7,uVar2,0,puVar22);
  _objc_release(puVar22);
  _objc_release(uVar17);
  _objc_release(uVar9);
  _objc_release(uVar2);
  _objc_release(uVar8);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126cd1f0;
  _objc_alloc();
  func_0x00010c03c460();
  puVar22 = PTR_PTR_1126ccfd8;
  _objc_alloc();
  func_0x00010c003b80();
  puVar10 = PTR_PTR_1126ccfe0;
  _objc_alloc();
  func_0x00010c03c280();
  func_0x00010bfd1240(*(undefined8 *)(param_1 + 0x20),param_2,puVar6);
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  lStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3d8 = 0;
  plStack_3e0 = (long *)0x0;
  lVar11 = *(long *)(param_1 + 0x18);
  func_0x00010bf33060();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar11;
  func_0x00010bf52a60();
  if (lVar20 != 0) {
    lVar25 = *plStack_3e0;
    do {
      lVar24 = 0;
      do {
        if (*plStack_3e0 != lVar25) {
          _objc_enumerationMutation(lVar11);
        }
        lVar18 = *(long *)(lStack_3e8 + lVar24 * 8);
        uVar8 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010c1593e0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar8;
        func_0x00010bf334a0();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar18;
        func_0x00010bf334a0();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar2;
        func_0x00010c0720c0(uVar2,param_2,lVar12);
        _objc_release(lVar12);
        _objc_release(uVar2);
        _objc_release(uVar8);
        if ((int)uVar17 != 0) {
          uStack_408 = 0;
          uStack_410 = 0;
          uStack_3f8 = 0;
          uStack_400 = 0;
          uStack_428 = 0;
          uStack_430 = 0;
          uStack_418 = 0;
          plStack_420 = (long *)0x0;
          func_0x00010c156b00();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar18;
          func_0x00010bf52a60();
          if (lVar12 != 0) {
            lVar23 = *plStack_420;
            do {
              lVar21 = 0;
              do {
                if (*plStack_420 != lVar23) {
                  _objc_enumerationMutation(lVar18);
                }
                lVar13 = param_1 + 8;
                _objc_loadWeakRetained();
                lVar14 = lVar13;
                func_0x00010c0965e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar13);
                func_0x00010c13cfe0(lVar14,param_2,puVar7,0);
                _objc_release(lVar14);
                lVar21 = lVar21 + 1;
              } while (lVar12 != lVar21);
              lVar12 = lVar18;
              func_0x00010bf52a60(lVar18,param_2,&uStack_430,auStack_210,0x10);
            } while (lVar12 != 0);
          }
          _objc_release(lVar18);
        }
        lVar24 = lVar24 + 1;
      } while (lVar24 != lVar20);
      lVar20 = lVar11;
      func_0x00010bf52a60(lVar11,param_2,&uStack_3f0,auStack_190,0x10);
    } while (lVar20 != 0);
  }
  _objc_release(lVar11);
  uStack_448 = 0;
  uStack_450 = 0;
  uStack_438 = 0;
  uStack_440 = 0;
  lStack_468 = 0;
  uStack_470 = 0;
  uStack_458 = 0;
  plStack_460 = (long *)0x0;
  lVar11 = *(long *)(param_1 + 0x18);
  func_0x00010c25e9a0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar11;
  func_0x00010bf52a60();
  if (lVar20 != 0) {
    lVar25 = *plStack_460;
    do {
      lVar24 = 0;
      do {
        if (*plStack_460 != lVar25) {
          _objc_enumerationMutation(lVar11);
        }
        lVar18 = *(long *)(lStack_468 + lVar24 * 8);
        uVar17 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010bfa3d00();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar18;
        func_0x00010bf334a0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar17;
        func_0x00010c0720c0(uVar17,param_2,lVar12);
        _objc_release(lVar12);
        _objc_release(uVar17);
        if ((int)uVar2 != 0) {
          uStack_488 = 0;
          uStack_490 = 0;
          uStack_478 = 0;
          uStack_480 = 0;
          uStack_4a8 = 0;
          uStack_4b0 = 0;
          uStack_498 = 0;
          plStack_4a0 = (long *)0x0;
          func_0x00010c156b00();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar18;
          func_0x00010bf52a60();
          if (lVar12 != 0) {
            lVar23 = *plStack_4a0;
            do {
              lVar21 = 0;
              do {
                if (*plStack_4a0 != lVar23) {
                  _objc_enumerationMutation(lVar18);
                }
                lVar13 = param_1 + 8;
                _objc_loadWeakRetained();
                lVar14 = lVar13;
                func_0x00010c0965e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar13);
                func_0x00010c13cfe0(lVar14,param_2,puVar7,0);
                _objc_release(lVar14);
                lVar21 = lVar21 + 1;
              } while (lVar12 != lVar21);
              lVar12 = lVar18;
              func_0x00010bf52a60(lVar18,param_2,&uStack_4b0,auStack_310,0x10);
            } while (lVar12 != 0);
          }
          _objc_release(lVar18);
        }
        lVar24 = lVar24 + 1;
      } while (lVar24 != lVar20);
      lVar20 = lVar11;
      func_0x00010bf52a60(lVar11,param_2,&uStack_470,auStack_290,0x10);
    } while (lVar20 != 0);
  }
  _objc_release(lVar11);
  func_0x00010bdd2ec0(param_1,param_2,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010c0d9840(param_3,param_2,puVar15);
  _objc_release(puVar15);
  _objc_release(param_1);
  _objc_release(puVar10);
  _objc_release(puVar22);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    func_0x00010c0b8600(puVar16,param_2,&PTR___NSConcreteGlobalBlock_110935c40);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_3 + 0x28);
    uVar19 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x10);
    func_0x00010bfa3d80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010bf85d80(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010bfa3660(uVar8);
    uVar9 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010bfe5be0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf333a0(uVar19,param_2,uVar2,uVar17,puVar16,uVar8,uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uVar17);
    _objc_release(uVar2);
    func_0x00010bf01980(*(undefined8 *)(*(long *)(param_3 + 0x20) + 0x18),param_2,uVar19);
    _objc_release(uVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar16);
    return;
  }
  return;
}



/* Entry: 1066ec60c; end: 1066ec707;  */

void FUN_1066ec60c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010c0b8600(param_3,param_2,&PTR___NSConcreteGlobalBlock_110935c40);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010bfa3d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf85d80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa3660(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfe5be0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf333a0(uVar5,param_2,uVar1,uVar2,param_3,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf01980(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),param_2,uVar5);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066ec708; end: 1066ec70f;  */

void FUN_1066ec708(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ea50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_subcategoryIdentifier_1126754b8);
  return;
}



/* Entry: 1066ec710; end: 1066ec7df;  */

void FUN_1066ec710(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010bfa3d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf85d80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa3660(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfe5be0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf333a0(uVar5,param_2,uVar1,uVar2,PTR____NSArray0__struct_11034ab48,uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010befbb00(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),param_2,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1066ec7e0; end: 1066ec857; -[SCLensExplorerMockedBatchQueryCoordinator _batchResponseWithAggregator:] */

void FUN_1066ec7e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cd110;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c003b80();
  puVar2 = PTR_PTR_1126cd118;
  _objc_alloc(PTR_PTR_1126cd118);
  func_0x00010bff2840();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066ec858; end: 1066ec87b; -[SCLensExplorerMockedBatchQueryCoordinator _prefetchedFeedItems] */

void FUN_1066ec858(void)

{
  func_0x00010c0cf780(PTR_PTR_1126ccfd0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066ec87c; end: 1066ec95b; -[SCLensExplorerMockedBatchQueryCoordinator _requestShouldFailError] */

undefined * FUN_1066ec87c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110e5a4b8;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&uStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar2,param_2,param_1,0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  return *(undefined **)(param_1 + 0x38);
}



/* Entry: 1066ec95c; end: 1066ec963; -[SCLensExplorerMockedBatchQueryCoordinator categoriesAggregator] */

undefined8 FUN_1066ec95c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1066ec964; end: 1066ec9cb; -[SCLensExplorerMockedBatchQueryCoordinator .cxx_destruct] */

void FUN_1066ec964(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1066ec9cc; end: 1066ecb07; -[SCLensExplorerMockedFavoritesQueryCoordinator initWithBaseQueryCoordinator:lensDataStore:queryStatusChecker:lensFavoritesUpdater:favoritesMockedObservable:favoritesUpdatePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1066ec9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f28f8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithBaseQueryCoordinator_len_1125db588,param_3,param_4,
                      param_6,param_8);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11274e5b8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11274e5bc;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274e5c0) = 0;
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274e5c4);
    *(undefined **)((long)puVar1 + (long)_DAT_11274e5c4) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010bfa10a0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beac960(puVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1066ecb08; end: 1066ecbd3; -[SCLensExplorerMockedFavoritesQueryCoordinator resultsForQuery:updatingBlock:] */

void FUN_1066ecb08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1066ecbd4;
  puStack_50 = &UNK_11084a9e8;
  uStack_48 = param_3;
  uStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066ecbd4; end: 1066ecc8f;  */

void FUN_1066ecbd4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c155f60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0720c0();
    if ((int)lVar3 == 0) {
      lVar3 = lVar1;
      func_0x00010c155f60();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0720c0();
      _objc_release(lVar3);
      _objc_release(lVar2);
      if ((int)lVar4 == 0) goto LAB_1066ecc78;
    }
    else {
      _objc_release(lVar2);
    }
    func_0x00010be2ea60(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x30));
  }
LAB_1066ecc78:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


