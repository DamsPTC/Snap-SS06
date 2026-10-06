/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100bb94b8; end: 100bb9527;  */

/* WARNING: Possible PIC construction at 0x000100bb94fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bb9510: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bb9500) */
/* WARNING: Removing unreachable block (ram,0x000100bb9514) */

void FUN_100bb94b8(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3e1b8(param_2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100bb9528; end: 100bb974b; -[SCFriendsFeedDataCoordinator _updateStoriesSummaryInfo:] */

void FUN_100bb9528(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  uVar11 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x000107c61174(param_3);
  lVar2 = param_3;
  func_0x000107c4080c(param_3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          func_0x000107c61128(param_3);
        }
        lVar8 = *(long *)(lStack_128 + lVar10 * 8);
        lVar3 = lVar8;
        func_0x000107c5bfec();
        func_0x000107c61180();
        lVar4 = lVar3;
        func_0x000107c4adac();
        func_0x000107c61170(lVar3);
        if (lVar4 != 0) {
          lVar3 = lVar8;
          FUN_100bb974c();
          func_0x000107c61180();
          func_0x000107c5bfec();
          func_0x000107c61180();
          func_0x000107c56bd8(puVar1,param_2,lVar3,lVar8);
          func_0x000107c61170(lVar8);
          func_0x000107c61170(lVar3);
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = param_3;
      func_0x000107c4080c(param_3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  func_0x000107c61170(param_3);
  puVar7 = *(undefined **)(param_1 + 0xb0);
  func_0x000107c61174(puVar7);
  func_0x000107c61174(puVar1);
  if (puVar7 == puVar1) {
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar7);
  }
  else {
    if (puVar1 == (undefined *)0x0) {
      func_0x000107c61170(puVar7);
    }
    else {
      puVar5 = puVar7;
      func_0x000107c49cec(puVar7,param_2,puVar1);
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puVar7);
      if (((ulong)puVar5 & 1) != 0) goto LAB_100bb9700;
    }
    puVar7 = puVar1;
    func_0x000107c40794();
    uVar6 = *(undefined8 *)(param_1 + 0xb0);
    *(undefined **)(param_1 + 0xb0) = puVar7;
    func_0x000107c61170(uVar6);
    func_0x000107c3b934(param_1,param_2,&PTR____CFConstantStringClassReference_110e524d8);
  }
LAB_100bb9700:
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    puVar1 = PTR_PTR_1126cb168;
    func_0x000107c61174();
    func_0x000107c610f4(puVar1);
    lVar2 = param_3;
    func_0x000107c5bfec(param_3);
    func_0x000107c61180();
    lVar9 = param_3;
    func_0x000107c5d0f0(param_3);
    lVar10 = param_3;
    func_0x000107c5c910(param_3);
    func_0x000107c61180();
    lVar3 = param_3;
    func_0x000107c4d8c0(param_3);
    lVar4 = param_3;
    func_0x000107c44c00(param_3);
    func_0x000107c4d124(param_3);
    uVar6 = uVar11;
    func_0x000107c4d128(param_3);
    uVar12 = uVar6;
    func_0x000107c4d130(param_3);
    lVar8 = param_3;
    func_0x000107c5bfc8(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c48aa0(uVar11,uVar6,uVar12,puVar1,param_2,lVar2,lVar9,lVar10,lVar3,lVar4,lVar8);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  return;
}



/* Entry: 100bb974c; end: 100bb986f;  */

void FUN_100bb974c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126cb168;
  func_0x000107c61174();
  func_0x000107c610f4(puVar1);
  uVar2 = param_2;
  func_0x000107c5bfec(param_2);
  func_0x000107c61180();
  uVar3 = param_2;
  func_0x000107c5d0f0(param_2);
  uVar4 = param_2;
  func_0x000107c5c910(param_2);
  func_0x000107c61180();
  uVar5 = param_2;
  func_0x000107c4d8c0(param_2);
  uVar6 = param_2;
  func_0x000107c44c00(param_2);
  func_0x000107c4d124(param_2);
  uVar8 = param_1;
  func_0x000107c4d128(param_2);
  uVar9 = uVar8;
  func_0x000107c4d130(param_2);
  uVar7 = param_2;
  func_0x000107c5bfc8(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c48aa0(param_1,uVar8,uVar9,puVar1,param_3,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100bb9870; end: 100bb99ef; -[SCLensDataFetchingDefaultLensContentRanker initWithFeatureSettingsService:lensDataFetcherUIState:lensUserProvider:lensDownloadTracker:clearCacheTracker:redownloadLogger:networkConnectivityMonitor:circumstanceEngine:enablePrefetchOnWWANInBackground:enablePrefetchOnWWANInForeground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_100bb9870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_68 = PTR_PTR_1127059b8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_initWithFeatureSettingsService_l_1125e2160,param_3,param_4,
                      param_5,param_6,param_9,param_10,param_11);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11278cfb8;
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_11278cfbc;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_11278cfc0;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_11278cfc4;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_11278cfc8;
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100bb99f0; end: 100bb9b2b; -[SCLensDataFetchingDefaultLensRanker initWithFeatureSettingsService:lensDataFetcherUIState:lensUserProvider:lensDownloadTracker:networkConnectivityMonitor:circumstanceEngine:enablePrefetchOnWWANInBackground:enablePrefetchOnWWANInForeground:] */

undefined1 *
FUN_100bb99f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_58 = PTR_PTR_1127059c0;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x38) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 0x39) = param_9._1_1_;
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bb9b2c; end: 100bb9b83; -[SCLensDataFetchingStrategyFactory lensDataFetcherOrdering] */

void FUN_100bb9b2c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x40);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126dfa60;
    func_0x000107c610f4();
    func_0x000107c47264();
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x40) = puVar1;
    func_0x000107c61170(uVar2);
    lVar3 = *(long *)(param_1 + 0x40);
  }
  func_0x000107c61174(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100bb9b84; end: 100bb9c83; -[SCFriendsFeedStoriesSummaryInfo initWithStoryId:type:thumbnail:numActiveStories:hasUnviewedStories:mostRecentStoryTimestamp:mostRecentUnviewedTimestamp:mostRecentViewedTimestamp:storyContentType:] */

undefined1 *
FUN_100bb9b84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  puStack_78 = PTR_PTR_1127039e8;
  uStack_80 = param_4;
  func_0x000107c61154(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    uVar2 = param_8;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_9;
    *(undefined1 *)((long)puVar1 + 8) = param_10;
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    *(undefined8 *)((long)puVar1 + 0x38) = param_2;
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 100bb9c84; end: 100bb9cf7; -[SCLensDataFetcherDefaultOrdering initWithLensDataFetcherUIState:] */

undefined1 * FUN_100bb9c84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1127059b0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bb9cf8; end: 100bb9dc7; -[SCLensDataFetchingContentStrategy initWithLensDataFetchingHelper:lensDataFetcherOrdering:] */

undefined1 *
FUN_100bb9cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1127059e0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    ppuVar3 = param_4;
    func_0x000107c4e068();
    func_0x000107c61180();
    ppuVar4 = &PTR___NSConcreteGlobalBlock_110cb8e48;
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar4 = ppuVar3;
    }
    func_0x000107c61184();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined ***)((long)puVar1 + 0x10) = ppuVar4;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(ppuVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bb9dc8; end: 100bb9e4f; -[SCLensDataFetcherDefaultOrdering orderingComparator] */

void FUN_100bb9dc8(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  func_0x000107c61144(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  puStack_40 = &UNK_10b0cf034;
  puStack_38 = &UNK_110cb8db8;
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c61184(&puStack_50);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 100bb9e50; end: 100bb9ee3; -[SCFriendsFeedDataCoordinator _handleUpdatesIfNeededWithUpdateSource:] */

/* WARNING: Possible PIC construction at 0x000100bb9eb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bb9ebc) */

void FUN_100bb9e50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cb160;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  puVar2 = puVar1;
  FUN_10011df08();
  func_0x000107c61180();
  func_0x000107c48e50(puVar1,param_2,puVar2,param_3,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100bb9ee4; end: 100bb9f3f; -[SCLensDataFetchingImmediateLoadingQueueFactory lensIconLoadingQueue] */

void FUN_100bb9ee4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bbb38;
  func_0x000107c610f4(PTR_PTR_1126bbb38);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c4b1d0(uVar2);
  func_0x000107c61180();
  func_0x000107c4726c(puVar1,param_2,uVar2);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100bb9f40; end: 100bb9f9b; -[SCLensDataFetchingStrategyFactory lensIconStrategy] */

void FUN_100bb9f40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bbb30;
  func_0x000107c610f4(PTR_PTR_1126bbb30);
  func_0x000107c4b02c(param_1);
  func_0x000107c61180();
  func_0x000107c47260(puVar1,param_2,param_1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100bb9f9c; end: 100bba08b; -[SCFriendsFeedUpdate initWithTrackingIdentifier:updateSource:fetchContexts:isInitialLoad:isSuccessfulSync:] */

undefined1 *
FUN_100bb9f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_1126f1840;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bba08c; end: 100bba133; -[SCLensDataFetchingLensIconStrategy initWithLensDataFetcherOrdering:] */

undefined1 * FUN_100bba08c(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1127059f0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    ppuVar2 = param_3;
    func_0x000107c4e068();
    func_0x000107c61180();
    ppuVar3 = &PTR___NSConcreteGlobalBlock_110cb8e88;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar3 = ppuVar2;
    }
    func_0x000107c61184();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined ***)((long)puVar1 + 8) = ppuVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(ppuVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bba134; end: 100bba203; -[SCFriendsFeedDataCoordinator _handleThrottableUpdateForUpdate:] */

/* WARNING: Possible PIC construction at 0x000100bba178: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bba19c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bba1b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bba1e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bba1b8) */
/* WARNING: Removing unreachable block (ram,0x000100bba1d4) */
/* WARNING: Removing unreachable block (ram,0x000100bba1a0) */
/* WARNING: Removing unreachable block (ram,0x000100bba1bc) */
/* WARNING: Removing unreachable block (ram,0x000100bba17c) */
/* WARNING: Removing unreachable block (ram,0x000100bba1a4) */
/* WARNING: Removing unreachable block (ram,0x000100bba198) */
/* WARNING: Removing unreachable block (ram,0x000100bba1e8) */
/* WARNING: Removing unreachable block (ram,0x000100bba1f0) */

void FUN_100bba134(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c5d630(param_3);
  func_0x000107c61180();
  func_0x000107c3be98(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100bba204; end: 100bba25f; -[SCLensDataFetchingImmediateLoadingQueueFactory lensAssetLoadingQueue] */

void FUN_100bba204(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bbb38;
  func_0x000107c610f4(PTR_PTR_1126bbb38);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c4adf8(uVar2);
  func_0x000107c61180();
  func_0x000107c4726c(puVar1,param_2,uVar2);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100bba260; end: 100bba267; -[SCFriendsFeedUpdate updateSource] */

undefined8 FUN_100bba260(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100bba268; end: 100bba2eb; -[SCLensDataFetchingStrategyFactory lensAssetStrategy] */

void FUN_100bba268(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126df958;
  func_0x000107c610f4(PTR_PTR_1126df958);
  uVar2 = param_1;
  func_0x000107c415d4(param_1);
  func_0x000107c61180();
  func_0x000107c4b02c(param_1);
  func_0x000107c61180();
  func_0x000107c47268(puVar1,param_2,uVar2,param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100bba2ec; end: 100bba38b; -[SCFriendsFeedDataCoordinator _logUpdateForUpdateSource:] */

/* WARNING: Possible PIC construction at 0x000100bba348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bba374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bba34c) */
/* WARNING: Removing unreachable block (ram,0x000100bba378) */

void FUN_100bba2ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2cb0;
  func_0x000107c61174(param_3);
  func_0x000107c41398(puVar1);
  func_0x000107c61180();
  func_0x000107c5e508();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100bba38c; end: 100bba43f; -[SCLensDataFetchingStrategyFactory defaultLensDataFethingHelper] */

void FUN_100bba38c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar6 = *(long *)(param_1 + 0x30);
  if (lVar6 == 0) {
    puVar4 = PTR_PTR_1126dfa58;
    func_0x000107c610f4();
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    uVar8 = *(undefined8 *)(param_1 + 8);
    lVar6 = param_1;
    func_0x000107c4ed3c();
    func_0x000107c46880(puVar4,param_2,uVar5,uVar7,uVar3,uVar2,uVar1,uVar8,(char)lVar6);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar4;
    func_0x000107c61170(uVar5);
    lVar6 = *(long *)(param_1 + 0x30);
  }
  func_0x000107c61174(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 100bba440; end: 100bba46b; +[SCGrapheneFriendsFeedMetric dcUpdate] */

void FUN_100bba440(void)

{
  func_0x000107c610f4(PTR_PTR_1126b2cb0);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bba46c; end: 100bba4ab;  */

void FUN_100bba46c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b794();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100bba4ac; end: 100bba52b; -[SCFriendsFeedDataServicesEntryPoint _friendsFeedGraphene] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bba4ac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_1127492fc;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c444a4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c43a90();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100bba52c; end: 100bba5b3; -[SCGrapheneRegistry friendsFeedGraphene] */

void FUN_100bba52c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_100bba5b4;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam000000011372c4a8 != -1) {
    FUN_10002a2fc(0x11372c4a8,&puStack_48);
  }
  uVar1 = uRam000000011372c4a0;
  func_0x000107c61174(uRam000000011372c4a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bba5b4; end: 100bba8c3;  */

undefined * FUN_100bba5b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  ppuStack_218 = &PTR____CFConstantStringClassReference_110ee58d8;
  ppuStack_210 = &PTR____CFConstantStringClassReference_110ee58f8;
  ppuStack_208 = &PTR____CFConstantStringClassReference_110ee5918;
  ppuStack_200 = &PTR____CFConstantStringClassReference_110ee5938;
  ppuStack_1f8 = &PTR____CFConstantStringClassReference_110ee5958;
  ppuStack_1f0 = &PTR____CFConstantStringClassReference_110ee5978;
  ppuStack_1e8 = &PTR____CFConstantStringClassReference_110ee5998;
  ppuStack_1e0 = &PTR____CFConstantStringClassReference_110ee59b8;
  ppuStack_1d8 = &PTR____CFConstantStringClassReference_110ee59d8;
  ppuStack_1d0 = &PTR____CFConstantStringClassReference_110ee59f8;
  ppuStack_1c8 = &PTR____CFConstantStringClassReference_110ee5a18;
  ppuStack_1c0 = &PTR____CFConstantStringClassReference_110ee5a38;
  ppuStack_1b8 = &PTR____CFConstantStringClassReference_110ee5a58;
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_110ee5a78;
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_110ee5a98;
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_110ee5ab8;
  ppuStack_198 = &PTR____CFConstantStringClassReference_110ee5ad8;
  ppuStack_190 = &PTR____CFConstantStringClassReference_110ee5af8;
  ppuStack_188 = &PTR____CFConstantStringClassReference_110ee5b18;
  ppuStack_180 = &PTR____CFConstantStringClassReference_110ee5b38;
  ppuStack_178 = &PTR____CFConstantStringClassReference_110ee5b58;
  ppuStack_170 = &PTR____CFConstantStringClassReference_110ee5b78;
  ppuStack_168 = &PTR____CFConstantStringClassReference_110ee5b98;
  ppuStack_160 = &PTR____CFConstantStringClassReference_110ee5bb8;
  ppuStack_158 = &PTR____CFConstantStringClassReference_110ee5bd8;
  ppuStack_150 = &PTR____CFConstantStringClassReference_110ee5bf8;
  ppuStack_148 = &PTR____CFConstantStringClassReference_110ee5c18;
  ppuStack_140 = &PTR____CFConstantStringClassReference_110ee5c38;
  ppuStack_138 = &PTR____CFConstantStringClassReference_110ee5c58;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110ee5c78;
  ppuStack_128 = &PTR____CFConstantStringClassReference_110ee5c98;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110ee5cb8;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110ee5cd8;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110ee5cf8;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110ee5d18;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110ee5d38;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110ee5d58;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110ee5d78;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110ee5d98;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110ee5db8;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110ee5dd8;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110ee5df8;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110ee5e18;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110ee5e38;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110ee5e58;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110ee5e78;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110ee5e98;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110ee5eb8;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110ee5ed8;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110ee5ef8;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110ee5f18;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110ee5f38;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110ee5f58;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110ee5f78;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110ee5f98;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110ee5fb8;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110ee5fd8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110ee5ff8;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110ee6018;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110ee6038;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_218,0x3c);
  func_0x000107c61180();
  ppuVar6 = &PTR____CFConstantStringClassReference_110e57d18;
  ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
  func_0x000107c4fc78();
  func_0x000107c61180();
  uVar3 = uRam000000011372c4a0;
  uRam000000011372c4a0 = uVar8;
  func_0x000107c61170(uVar3);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  func_0x000107c60e78();
  ppuVar2 = &puStack_260;
  func_0x000107c61174(ppuVar6);
  func_0x000107c61174(ppuVar7);
  puStack_258 = PTR_PTR_1127059e8;
  puStack_260 = puVar1;
  func_0x000107c61154(&puStack_260,PTR_s_init_1125d9248);
  if (ppuVar2 != (undefined **)0x0) {
    func_0x000107c61174(ppuVar6);
    uVar3 = *(undefined8 *)((long)ppuVar2 + 8);
    *(undefined ***)((long)ppuVar2 + 8) = ppuVar6;
    func_0x000107c61170(uVar3);
    ppuVar4 = ppuVar7;
    func_0x000107c4e068();
    func_0x000107c61180();
    ppuVar5 = &PTR___NSConcreteGlobalBlock_110cb8e68;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar5 = ppuVar4;
    }
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)ppuVar2 + 0x10);
    *(undefined ***)((long)ppuVar2 + 0x10) = ppuVar5;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(ppuVar4);
  }
  func_0x000107c61170(ppuVar7);
  func_0x000107c61170(ppuVar6);
  return (undefined *)ppuVar2;
}



/* Entry: 100bba8c4; end: 100bba993; -[SCLensDataFetchingLensAssetStrategy initWithLensDataFetchingHelper:lensDataFetcherOrdering:] */

undefined1 *
FUN_100bba8c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1127059e8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    ppuVar3 = param_4;
    func_0x000107c4e068();
    func_0x000107c61180();
    ppuVar4 = &PTR___NSConcreteGlobalBlock_110cb8e68;
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar4 = ppuVar3;
    }
    func_0x000107c61184();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined ***)((long)puVar1 + 0x10) = ppuVar4;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(ppuVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bba994; end: 100bba9ef; -[SCLensDataFetchingImmediateLoadingQueueFactory externalDataLoadingQueue] */

void FUN_100bba994(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bbb38;
  func_0x000107c610f4(PTR_PTR_1126bbb38);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c42c8c(uVar2);
  func_0x000107c61180();
  func_0x000107c4726c(puVar1,param_2,uVar2);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100bba9f0; end: 100bbaa73; -[SCLensDataFetchingStrategyFactory externalDataDownloadingStrategy] */

void FUN_100bba9f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126df960;
  func_0x000107c610f4(PTR_PTR_1126df960);
  uVar2 = param_1;
  func_0x000107c415d4(param_1);
  func_0x000107c61180();
  func_0x000107c4b02c(param_1);
  func_0x000107c61180();
  func_0x000107c47268(puVar1,param_2,uVar2,param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100bbaa74; end: 100bbab43; -[SCLensExternalDataFetchingStrategy initWithLensDataFetchingHelper:lensDataFetcherOrdering:] */

undefined1 *
FUN_100bbaa74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1127059f8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    ppuVar3 = param_4;
    func_0x000107c4e068();
    func_0x000107c61180();
    ppuVar4 = &PTR___NSConcreteGlobalBlock_110cb8ec8;
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar4 = ppuVar3;
    }
    func_0x000107c61184();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined ***)((long)puVar1 + 0x10) = ppuVar4;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(ppuVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bbab44; end: 100bbab93; -[SCLensDataConfigProvider lensFetchTypeBasedOnStates] */

undefined8 FUN_100bbab44(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 100bbab94; end: 100bbae2b; -[SCLensDataFetcher _subscribeToWillStartOperationsObservable] */

void FUN_100bbab94(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  func_0x000107c61144(auStack_78,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x000107c42b4c(uVar2);
  func_0x000107c61180();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  puStack_90 = &UNK_10b0d30c0;
  puStack_88 = &UNK_110cb8f38;
  func_0x000107c6111c(auStack_80,auStack_78);
  uVar3 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x000107c42b4c(uVar2);
  func_0x000107c61180();
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  puStack_b8 = &UNK_10b0d318c;
  puStack_b0 = &UNK_110cb8f38;
  func_0x000107c6111c(auStack_a8,auStack_78);
  uVar3 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x000107c42b4c(uVar2);
  func_0x000107c61180();
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  puStack_e0 = &UNK_10b0d3258;
  puStack_d8 = &UNK_110cb8f38;
  func_0x000107c6111c(auStack_d0,auStack_78);
  uVar3 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x000107c42b4c(uVar2);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_f8,auStack_78);
  uVar3 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61120(auStack_f8);
  func_0x000107c61120(auStack_d0);
  func_0x000107c61120(auStack_a8);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_78);
  return;
}



/* Entry: 100bbae2c; end: 100bbae33; -[SCLensImmediateLoadingQueue executeOperationObservable] */

undefined8 FUN_100bbae2c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100bbae34; end: 100bbae3b; -[SCFriendsFeedUpdate fetchContexts] */

undefined8 FUN_100bbae34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100bbae3c; end: 100bbaf47;  */

undefined1 FUN_100bbae3c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
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
  func_0x000107c61174();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x000107c61174(param_1);
  lVar1 = param_1;
  func_0x000107c4080c(param_1,param_2,&uStack_110,auStack_c8,0x10);
  uVar3 = 0;
  if (lVar1 != 0) {
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          func_0x000107c61128(param_1);
        }
        uVar2 = *(ulong *)(lStack_108 + lVar5 * 8);
        FUN_10060dccc();
        if ((uVar2 & 1) != 0) {
          uVar3 = 1;
          goto LAB_100bbaf00;
        }
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = param_1;
      func_0x000107c4080c(param_1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
    uVar3 = 0;
  }
LAB_100bbaf00:
  func_0x000107c61170(param_1);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar3;
  }
  func_0x000107c60e78();
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100bbaf48; end: 100bbaf4f; -[SCFriendsFeedUpdate isInitialLoad] */

undefined1 FUN_100bbaf48(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100bbaf50; end: 100bbaf8b; -[SCThrottleTimer schedule] */

void FUN_100bbaf50(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x000107c4a5dc();
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1b4190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsScheduled__11264aa88,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfb0070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_fire_1125c99c0);
  return;
}



/* Entry: 100bbaf8c; end: 100bbafd3; -[SCThrottleTimer isThrottled] */

bool FUN_100bbaf8c(long param_1)

{
  long lVar1;
  
  func_0x000107c61174();
  func_0x000107c611a4(param_1);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x000107c611a8(param_1);
  func_0x000107c61170(param_1);
  return lVar1 != 0;
}



/* Entry: 100bbafd4; end: 100bbb023; -[SCThrottleTimer fire] */

void FUN_100bbafd4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c435c8();
  func_0x000107c61170(uVar1);
  func_0x000107c3b3a0(param_1);
  uVar1 = param_1;
  func_0x000107c50148(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1b4190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsScheduled__11264aa88,uVar1);
  return;
}



/* Entry: 100bbb024; end: 100bbb02b; -[SCThrottleTimer target] */

undefined8 FUN_100bbb024(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 100bbb02c; end: 100bbb033; -[SCLensDataFetcher addEventsListener:] */

void FUN_100bbb02c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 100bbb034; end: 100bbb0a3; -[SCThrottleTarget fire] */

/* WARNING: Possible PIC construction at 0x000100bbb08c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bbb090) */

void FUN_100bbb034(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar2 = param_1;
  func_0x000107c51cf4(param_1);
  func_0x000107c5c904(param_1);
  func_0x000107c61180();
  func_0x000107c4e5bc(uVar1,param_2,uVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100bbb0a4; end: 100bbb0f3; -[SCLensDataFetcherEventsListenerAnnouncer addListener:] */

undefined8 FUN_100bbb0a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_100bbb0f4(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return 1;
}



/* Entry: 100bbb0f4; end: 100bbb43f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100bbb0f4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_a0 [16];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined1 uStack_69;
  undefined *puStack_68;
  
  puStack_68 = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar5 = &UNK_11077d6c8;
  puVar1 = puVar5;
  func_0x000107c613fc(&UNK_11077d6c8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_11077d6f0;
  func_0x000107c613fc(&UNK_11077d6f0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_1044e2bd4;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  uVar3 = 0x113080cf0;
  FUN_1000285a8(0x113080cf0,&UNK_10dd0cc20);
  uVar4 = 0x113080e30;
  FUN_100bbb484(0x113080e30,0x113080cf0,&UNK_10dd0cc20);
  puVar1 = &UNK_1044e2bdc;
  func_0x000107c5f21c(&UNK_1044e2bdc,puVar2,uVar3,uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c5f1d8(&puStack_68);
  func_0x000107c61574(puVar1);
  puVar1 = puVar5;
  func_0x000107c613fc(&UNK_11077d6c8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  uVar3 = 0x113080cf8;
  FUN_1000285a8(0x113080cf8,&UNK_10dd0cb30);
  uVar4 = 0x113080e40;
  FUN_100bbb484(0x113080e40,0x113080cf8,&UNK_10dd0cb30);
  puVar2 = &UNK_1044e2c64;
  func_0x000107c5f21c(&UNK_1044e2c64,puVar1,uVar3,uVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c5f1d8(&puStack_68);
  func_0x000107c61574(puVar2);
  puVar1 = puVar5;
  func_0x000107c613fc(&UNK_11077d6c8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_1044e2cc8;
  func_0x000107c5f21c(&UNK_1044e2cc8,puVar1,uVar3,uVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c5f1d8(&puStack_68);
  func_0x000107c61574(puVar2);
  puVar1 = puVar5;
  func_0x000107c613fc(&UNK_11077d6c8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_1044e2d2c;
  func_0x000107c5f21c(&UNK_1044e2d2c,puVar1,uVar3,uVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c5f1d8(&puStack_68);
  func_0x000107c61574(puVar2);
  func_0x000107c613fc(&UNK_11077d6c8,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,param_1);
  puVar2 = &UNK_1044e2d90;
  func_0x000107c5f21c(&UNK_1044e2d90,puVar5,uVar3,uVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c5f1d8(&puStack_68);
  func_0x000107c61574(puVar2);
  puVar5 = &UNK_11077d718;
  func_0x000107c613fc(&UNK_11077d718,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  uVar3 = 0x112d518a8;
  puStack_90 = puVar5;
  uStack_88 = param_1;
  ppuStack_80 = &puStack_68;
  FUN_1000285a8(0x112d518a8,&UNK_10d918730);
  FUN_100087bd4(&uStack_69,FUN_100bbc114,auStack_a0,uVar3);
  func_0x000107c61574(puVar5);
  func_0x000107c6142c(puStack_68);
  return 1;
}



/* Entry: 100bbb440; end: 100bbb463;  */

void FUN_100bbb440(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bbb464; end: 100bbb47b; -[SCThrottleTarget target] */

void FUN_100bbb464(long param_1)

{
  func_0x000107c61148(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bbb47c; end: 100bbb483; -[SCThrottleTarget selector] */

undefined8 FUN_100bbb47c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100bbb484; end: 100bbb4c7;  */

void FUN_100bbb484(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    FUN_10002969c(param_2,param_3);
    puVar1 = PTR___s7Combine18PassthroughSubjectCyxq_GAA9PublisherAAMc_11034ae18;
    func_0x000107c61520(PTR___s7Combine18PassthroughSubjectCyxq_GAA9PublisherAAMc_11034ae18,param_2)
    ;
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 100bbb4c8; end: 100bbb4df; -[SCThrottleTarget throttleTimer] */

void FUN_100bbb4c8(long param_1)

{
  func_0x000107c61148(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bbb4e0; end: 100bbb593; -[SCFriendsFeedDataCoordinator _performHandleUpdatesFromThrottling] */

void FUN_100bbb4e0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c4e524(uVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 100bbb594; end: 100bbb713; -[SCThrottleTimer _createTimer] */

/* WARNING: Possible PIC construction at 0x000100bbb638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbb648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbb678: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbb6cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbb6dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bbb6d0) */
/* WARNING: Removing unreachable block (ram,0x000100bbb67c) */
/* WARNING: Removing unreachable block (ram,0x000100bbb64c) */
/* WARNING: Removing unreachable block (ram,0x000100bbb63c) */
/* WARNING: Removing unreachable block (ram,0x000100bbb6e0) */

void FUN_100bbb594(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x000107c3c2f4();
  func_0x000107c61174(param_2);
  func_0x000107c611a4(param_2);
  puVar3 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x000107c5c9d8(param_2);
  uVar1 = param_2;
  func_0x000107c5c734(param_2);
  func_0x000107c61180();
  uVar2 = param_2;
  func_0x000107c5d9a4(param_2);
  func_0x000107c61180();
  func_0x000107c5ca60(param_1,puVar3,param_3,uVar1,PTR_s_onTimer__112540e80,uVar2,0);
  func_0x000107c61180();
  func_0x000107c554a8(param_2,param_3,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 100bbb714; end: 100bbb7b7; -[SCThrottleTimer _removeTimer] */

/* WARNING: Possible PIC construction at 0x000100bbb754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbb778: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bbb758) */
/* WARNING: Removing unreachable block (ram,0x000100bbb77c) */
/* WARNING: Removing unreachable block (ram,0x000100bbb75c) */

void FUN_100bbb714(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000107c611a4(param_1);
  func_0x000107c498d8(param_1);
  func_0x000107c61180();
  func_0x000107c4a6ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100bbb7b8; end: 100bbb7bf; -[SCThrottleTimer internalTimer] */

undefined8 FUN_100bbb7b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 100bbb7c0; end: 100bbb7ef; -[SCThrottleTimer setInternalTimer:] */

void FUN_100bbb7c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100bbb7f0; end: 100bbb7f7; -[SCThrottleTimer timeInterval] */

undefined8 FUN_100bbb7f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100bbb7f8; end: 100bbb7ff; -[SCThrottleTimer userInfo] */

undefined8 FUN_100bbb7f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100bbb800; end: 100bbb86b;  */

void FUN_100bbb800(long param_1)

{
  func_0x00010055b12c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100bbb86c; end: 100bbb873; -[SCThrottleTimer tolerance] */

undefined8 FUN_100bbb86c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100bbb874; end: 100bbb897;  */

void FUN_100bbb874(long param_1)

{
  func_0x00010055b12c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100bbb898; end: 100bbb8ef; -[SCThrottleTimer runLoop] */

void FUN_100bbb898(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x000107c40fe4();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    func_0x000107c61170(uVar2);
    lVar3 = *(long *)(param_1 + 0x20);
  }
  func_0x000107c61174(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100bbb8f0; end: 100bbb943; -[SCThrottleTimer runLoopMode] */

void FUN_100bbb8f0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)PTR__NSDefaultRunLoopMode_11034aa38;
    func_0x000107c61174(uVar3);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    func_0x000107c61170(uVar1);
    lVar2 = *(long *)(param_1 + 0x28);
  }
  func_0x000107c61174(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 100bbb944; end: 100bbb953;  */

void FUN_100bbb944(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bbb950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x48))();
  return;
}



/* Entry: 100bbb954; end: 100bbba33;  */

void FUN_100bbb954(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  code **ppcVar2;
  undefined8 extraout_x8;
  undefined8 auStack_c0 [2];
  undefined1 auStack_b0 [24];
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_38;
  
  puVar1 = auStack_c0;
  FUN_100489ca8();
  uStack_38 = extraout_x8;
  FUN_100493108();
  func_0x000100493114();
  func_0x000107c60c94(auStack_b0,param_2);
  pcStack_98 = FUN_100bc56f4;
  ppuStack_90 = &PTR_FUN_110abdec8;
  FUN_100575f28();
  func_0x000100571f74();
  func_0x000107c60c94();
  uStack_88 = param_2;
  func_0x000100493174();
  ppcVar2 = &pcStack_98;
  func_0x000100493180();
  func_0x0001004a5764(ppuStack_90);
  FUN_100bbba58(auStack_c0);
  FUN_10048b398(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x0001004a5764(ppuStack_90);
  FUN_100bbba58();
  func_0x000107c34d70();
  *puVar1 = *ppcVar2;
  puVar1[1] = ppcVar2[1];
  ppcVar2[1] = (code *)0x0;
  return;
}



/* Entry: 100bbba34; end: 100bbba37;  */

void FUN_100bbba34(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 100bbba38; end: 100bbba57;  */

void FUN_100bbba38(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_100bbba58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100bbba58; end: 100bbbb2b;  */

long FUN_100bbba58(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001004a5058();
  func_0x000107c60ca0();
  lVar1 = unaff_x19;
  FUN_10048b470();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 100bbbb2c; end: 100bbbb4b;  */

void FUN_100bbbb2c(void)

{
  return;
}



/* Entry: 100bbbb4c; end: 100bbbb6f;  */

void FUN_100bbbb4c(long param_1)

{
  func_0x000100bbbb40();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100bbbb70; end: 100bbbb77;  */

void FUN_100bbbb70(void)

{
  return;
}



/* Entry: 100bbbb78; end: 100bbbbe7;  */

void FUN_100bbbb78(long param_1)

{
  func_0x000100bbbb40();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100bbbbe8; end: 100bbbc07;  */

void FUN_100bbbbe8(void)

{
  long unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (unaff_x19 + 0x18);
  return;
}



/* Entry: 100bbbc08; end: 100bbbc77;  */

void FUN_100bbbc08(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126ce368;
  func_0x000107c610f4();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000100bbbbf8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c46220();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000100bbbd30(&uStack_30);
  return;
}



/* Entry: 100bbbc78; end: 100bbbcb7; -[SCNTivClient .cxx_construct] */

undefined8 * FUN_100bbbc78(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_10015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000100bbbbf8();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 100bbbcb8; end: 100bbbd53; -[SCNTivClient initWithCpp:] */

undefined1 * FUN_100bbbcb8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f3480;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000100bbbbf8();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000100bbbd30(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100bbbd54; end: 100bbbd67;  */

void FUN_100bbbd54(void)

{
  return;
}



/* Entry: 100bbbd68; end: 100bbbddb; -[SCTIVAppUserLifecycleObserver initWithTIVClient:] */

undefined1 * FUN_100bbbd68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f3400;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bbbddc; end: 100bbbde3; -[SCThrottleTimer repeats] */

undefined1 FUN_100bbbddc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 100bbbde4; end: 100bbbdeb; -[SCThrottleTimer setIsScheduled:] */

void FUN_100bbbde4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 100bbbdec; end: 100bbbe33;  */

/* WARNING: Possible PIC construction at 0x000100bbbe20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bbbe24) */

void FUN_100bbbdec(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3cc68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100bbbe34; end: 100bbbef3; -[SCFriendsFeedDataCoordinator _updatePlayedStoryIds:] */

/* WARNING: Possible PIC construction at 0x000100bbbe88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbbecc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbbeb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbbea8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bbbed0) */
/* WARNING: Removing unreachable block (ram,0x000100bbbe8c) */
/* WARNING: Removing unreachable block (ram,0x000100bbbeb8) */
/* WARNING: Removing unreachable block (ram,0x000100bbbe98) */
/* WARNING: Removing unreachable block (ram,0x000100bbbeac) */
/* WARNING: Removing unreachable block (ram,0x000100bbbee0) */

void FUN_100bbbe34(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  lVar1 = *(long *)(param_1 + 0x120);
  func_0x000107c61174(lVar1);
  func_0x000107c61174(param_3);
  if (lVar1 == param_3) {
    func_0x000107c61170(param_3);
  }
  else if (param_3 != 0) {
    func_0x000107c49d08(lVar1,param_2,param_3);
    lVar1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100bbbef4; end: 100bbbf2b;  */

void FUN_100bbbef4(long param_1)

{
  param_1 = param_1 + 0x28;
  func_0x000107c61148(param_1);
  func_0x000107c3b930();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100bbbf2c; end: 100bbc013; -[SCFriendsFeedDataCoordinator _handleUpdatesForUpdate:] */

/* WARNING: Possible PIC construction at 0x000100bbbf54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbbf74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbbf98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbbfe8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bbbf9c) */
/* WARNING: Removing unreachable block (ram,0x000100bbbfa0) */
/* WARNING: Removing unreachable block (ram,0x000100bbbf78) */
/* WARNING: Removing unreachable block (ram,0x000100bbbf58) */
/* WARNING: Removing unreachable block (ram,0x000100bbbfec) */
/* WARNING: Removing unreachable block (ram,0x000100bbbff4) */

void FUN_100bbbf2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1a0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100bbc014; end: 100bbc023; -[SCTIVAppUserLifecycleObserver onUserResumed:didLaunchWithDataUnavailable:] */

void FUN_100bbc014(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_appStateChanged__11259f230,param_4 | param_3 ^ 1);
  return;
}



/* Entry: 100bbc024; end: 100bbc113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bbc024(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_113080e68;
  if (param_2 != 0) {
    uVar4 = *param_4;
    func_0x000107c61428(param_2 + _DAT_113080e68,auStack_80,0x21,0);
    func_0x000107c61434(uVar4);
    uVar2 = *(undefined8 *)(param_2 + lVar1);
    func_0x000107c61558(uVar2);
    uVar3 = *(undefined8 *)(param_2 + lVar1);
    *(undefined8 *)(param_2 + lVar1) = 0x8000000000000000;
    FUN_10049915c(uVar4,param_3,uVar2);
    *(undefined8 *)(param_2 + lVar1) = uVar3;
    func_0x000107c614a8(auStack_80);
    func_0x000107c61170(param_2);
  }
  *(bool *)param_1 = param_2 == 0;
  return;
}



/* Entry: 100bbc114; end: 100bbc12f;  */

void FUN_100bbc114(void)

{
  long unaff_x20;
  
  FUN_100bbc024(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 100bbc130; end: 100bbc17b;  */

void FUN_100bbc130(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0xd8) & 1) != 0) {
    return;
  }
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x000100bbc178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 200) + 0x18))(*(long **)(param_1 + 200),param_2);
  return;
}



/* Entry: 100bbc17c; end: 100bbc1db; -[SCNTivClient appStateChanged:] */

void FUN_100bbc17c(long param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))(*(long **)(param_1 + 0x18),param_3);
  return;
}



/* Entry: 100bbc1dc; end: 100bbc1eb;  */

void FUN_100bbc1dc(void)

{
  return;
}



/* Entry: 100bbc1ec; end: 100bbc2af;  */

void FUN_100bbc1ec(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  long *extraout_x8_02;
  undefined8 extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_28;
  
  FUN_100bbc1dc(param_1);
  uStack_68 = (undefined4)param_2;
  uStack_70 = *(undefined8 *)(extraout_x8 + 0x10);
  uStack_78 = *(undefined8 *)(extraout_x8 + 8);
  uStack_28 = extraout_x9;
  if (*(long *)(extraout_x8 + 0x10) != 0) {
    do {
      FUN_100bbc2b0();
      uStack_68 = (undefined4)param_2;
    } while (extraout_w10 != 0);
  }
  ppuStack_80 = &PTR_DAT_11093ef70;
  func_0x000100bbc2c0();
  (*extraout_x8_00)();
  (*(code *)*ppuStack_80)(&ppuStack_80);
  func_0x000100bbc438();
  FUN_100bbc1dc(uStack_28);
  if (extraout_x9_00 != extraout_x8_01) {
    func_0x000107c60e78();
    (*(code *)*ppuStack_80)(&ppuStack_80);
    func_0x000100bbc438();
    func_0x0001067e1efc();
    bVar1 = (bool)ExclusiveMonitorPass(extraout_x8_02,0x10);
    if (bVar1) {
      *extraout_x8_02 = *extraout_x8_02 + 1;
      ExclusiveMonitorsStatus();
    }
    return;
  }
  return;
}



/* Entry: 100bbc2b0; end: 100bbc2fb;  */

void FUN_100bbc2b0(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100bbc2fc; end: 100bbc31f;  */

void FUN_100bbc2fc(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bbc320; end: 100bbc377; -[SCGhostToFeedLogger logFeedUpdate] */

void FUN_100bbc320(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_100bdff68;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x000107c4e524(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 100bbc378; end: 100bbc383; -[SCLensDataFetchingImmediateLoadingQueueFactory .cxx_destruct] */

void FUN_100bbc378(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 100bbc384; end: 100bbc42b; -[SCLensDataFetchingStrategyFactory .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100bbc39c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbc3b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbc3cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbc3e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbc3fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbc414: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bbc400) */
/* WARNING: Removing unreachable block (ram,0x000100bbc3e8) */
/* WARNING: Removing unreachable block (ram,0x000100bbc3d0) */
/* WARNING: Removing unreachable block (ram,0x000100bbc3b8) */
/* WARNING: Removing unreachable block (ram,0x000100bbc3a0) */
/* WARNING: Removing unreachable block (ram,0x000100bbc418) */

void FUN_100bbc384(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x60,0);
  return;
}



/* Entry: 100bbc42c; end: 100bbc44f; -[SCLensDataFetcherDefaultOrdering .cxx_destruct] */

void FUN_100bbc42c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 100bbc450; end: 100bbc513;  */

void FUN_100bbc450(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  long *extraout_x8_02;
  undefined8 extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_28;
  
  func_0x000100bbc440(param_1);
  uStack_68 = (undefined4)param_2;
  uStack_70 = *(undefined8 *)(extraout_x8 + 0x10);
  uStack_78 = *(undefined8 *)(extraout_x8 + 8);
  uStack_28 = extraout_x9;
  if (*(long *)(extraout_x8 + 0x10) != 0) {
    do {
      FUN_100bbc514();
      uStack_68 = (undefined4)param_2;
    } while (extraout_w10 != 0);
  }
  ppuStack_80 = &PTR_DAT_11093f068;
  func_0x000100bbc524();
  (*extraout_x8_00)();
  (*(code *)*ppuStack_80)(&ppuStack_80);
  func_0x000100bbc55c();
  func_0x000100bbc440(uStack_28);
  if (extraout_x9_00 != extraout_x8_01) {
    func_0x000107c60e78();
    (*(code *)*ppuStack_80)(&ppuStack_80);
    func_0x000100bbc55c();
    func_0x0001067e2e04();
    bVar1 = (bool)ExclusiveMonitorPass(extraout_x8_02,0x10);
    if (bVar1) {
      *extraout_x8_02 = *extraout_x8_02 + 1;
      ExclusiveMonitorsStatus();
    }
    return;
  }
  return;
}



/* Entry: 100bbc514; end: 100bbc563;  */

void FUN_100bbc514(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100bbc564; end: 100bbc59f; -[SCNTivClientParameters .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100bbc57c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bbc580) */

void FUN_100bbc564(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 100bbc5a0; end: 100bbc637;  */

/* WARNING: Possible PIC construction at 0x000100bbc618: Changing call to branch */

void FUN_100bbc5a0(long param_1,undefined *param_2)

{
  func_0x000107c61174(param_2);
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    func_0x000107c61170(0);
  }
  else {
    func_0x000107c3d740(param_2);
    param_2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100bbc638; end: 100bbcef3; -[SCFriendsFeedDataCoordinator _fetchFeedMetadataForUpdate:] */

/* WARNING: Possible PIC construction at 0x000100bbca08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbca38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbcae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbcaf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbcbe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbcbf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbcd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbcd24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbcd3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbcd4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbcd5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbcd6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbcd7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbcd8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbcda0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbcdb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbcdc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbcddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbcdf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbcf30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbc828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbc84c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbc878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbc8e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbc904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbc938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbc958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbc968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbc97c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbc9b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bbc9e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bbc9b8) */
/* WARNING: Removing unreachable block (ram,0x000100bbc9bc) */
/* WARNING: Removing unreachable block (ram,0x000100bbc980) */
/* WARNING: Removing unreachable block (ram,0x000100bbc96c) */
/* WARNING: Removing unreachable block (ram,0x000100bbc95c) */
/* WARNING: Removing unreachable block (ram,0x000100bbc93c) */
/* WARNING: Removing unreachable block (ram,0x000100bbc948) */
/* WARNING: Removing unreachable block (ram,0x000100bbc908) */
/* WARNING: Removing unreachable block (ram,0x000100bbc8e8) */
/* WARNING: Removing unreachable block (ram,0x000100bbc87c) */
/* WARNING: Removing unreachable block (ram,0x000100bbc850) */
/* WARNING: Removing unreachable block (ram,0x000100bbc98c) */
/* WARNING: Removing unreachable block (ram,0x000100bbc854) */
/* WARNING: Removing unreachable block (ram,0x000100bbc82c) */
/* WARNING: Removing unreachable block (ram,0x000100bbcf34) */
/* WARNING: Removing unreachable block (ram,0x000100bbcdf4) */
/* WARNING: Removing unreachable block (ram,0x000100bbce38) */
/* WARNING: Removing unreachable block (ram,0x000100bbcea0) */
/* WARNING: Removing unreachable block (ram,0x000100bbceec) */
/* WARNING: Removing unreachable block (ram,0x000100bbce14) */
/* WARNING: Removing unreachable block (ram,0x000100bbcde0) */
/* WARNING: Removing unreachable block (ram,0x000100bbcdcc) */
/* WARNING: Removing unreachable block (ram,0x000100bbcdb8) */
/* WARNING: Removing unreachable block (ram,0x000100bbcda4) */
/* WARNING: Removing unreachable block (ram,0x000100bbcd90) */
/* WARNING: Removing unreachable block (ram,0x000100bbcd80) */
/* WARNING: Removing unreachable block (ram,0x000100bbcd70) */
/* WARNING: Removing unreachable block (ram,0x000100bbcd60) */
/* WARNING: Removing unreachable block (ram,0x000100bbcd50) */
/* WARNING: Removing unreachable block (ram,0x000100bbcd40) */
/* WARNING: Removing unreachable block (ram,0x000100bbcd28) */
/* WARNING: Removing unreachable block (ram,0x000100bbcd10) */
/* WARNING: Removing unreachable block (ram,0x000100bbcbfc) */
/* WARNING: Removing unreachable block (ram,0x000100bbcbec) */
/* WARNING: Removing unreachable block (ram,0x000100bbcaf4) */
/* WARNING: Removing unreachable block (ram,0x000100bbcae4) */
/* WARNING: Removing unreachable block (ram,0x000100bbca3c) */
/* WARNING: Removing unreachable block (ram,0x000100bbcafc) */
/* WARNING: Removing unreachable block (ram,0x000100bbca54) */
/* WARNING: Removing unreachable block (ram,0x000100bbc9e4) */

void FUN_100bbc638(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_200 [8];
  undefined8 uStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_88;
  
  uStack_88 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x3032000000;
  pcStack_120 = FUN_100bbe44c;
  pcStack_118 = FUN_100bd999c;
  uStack_110 = 0;
  puStack_160 = &uStack_168;
  uStack_168 = 0;
  uStack_158 = 0x3032000000;
  pcStack_150 = FUN_100bbe44c;
  pcStack_148 = FUN_100bd999c;
  uStack_140 = 0;
  puStack_190 = &uStack_198;
  uStack_198 = 0;
  uStack_188 = 0x3032000000;
  pcStack_180 = FUN_100bbe44c;
  pcStack_178 = FUN_100bd999c;
  uStack_170 = 0;
  puStack_1c0 = &uStack_1c8;
  uStack_1c8 = 0;
  uStack_1b8 = 0x3032000000;
  pcStack_1b0 = FUN_100bbe44c;
  pcStack_1a8 = FUN_100bd999c;
  uStack_1a0 = 0;
  puStack_1f0 = &uStack_1f8;
  uStack_1f8 = 0;
  uStack_1e8 = 0x3032000000;
  pcStack_1e0 = FUN_100bbe44c;
  pcStack_1d8 = FUN_100bd999c;
  uStack_1d0 = 0;
  func_0x000107c6071c();
  func_0x000107c60f34();
  func_0x000107c61144(auStack_200,param_1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c61160();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c61160(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x000107c61160();
  func_0x000107c61160();
  lVar8 = *(long *)(param_1 + 0xf0);
  func_0x000107c61174(lVar8);
  lVar4 = lVar8;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar4 == 0) {
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar8);
      return;
    }
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar8);
      }
      lVar6 = *(long *)(lVar7 * 8);
      lVar5 = lVar6;
      func_0x000107c42f58();
      if (lVar5 == 0) {
        func_0x000107c42f24(lVar6);
        func_0x000107c61180();
        func_0x000107c3d798(puVar2);
        lVar8 = lVar6;
        goto code_r0x000107c61170;
      }
      if (lVar5 == 1) {
        func_0x000107c42f24(lVar6);
        func_0x000107c61180();
        func_0x000107c3d798(puVar3);
        lVar8 = lVar6;
        goto code_r0x000107c61170;
      }
      lVar7 = lVar7 + 1;
    } while (lVar4 != lVar7);
    lVar4 = lVar8;
    func_0x000107c4080c();
  } while( true );
}


