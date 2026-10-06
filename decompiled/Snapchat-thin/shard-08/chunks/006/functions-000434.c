/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106408f00; end: 106408f17; -[SCAdDataSource operaControlling] */

void FUN_106408f00(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106408f18; end: 106408f2f; -[SCAdDataSource playlistItemController] */

void FUN_106408f18(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106408f30; end: 106408f3b; -[SCAdDataSource setOperaConfiguration:] */

void FUN_106408f30(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 106408f3c; end: 106408f43; -[SCAdDataSource adPreparationManager] */

undefined8 FUN_106408f3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106408f44; end: 106408f4b; -[SCAdDataSource pendingInsertAdPod] */

undefined8 FUN_106408f44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106408f4c; end: 106408f7b; -[SCAdDataSource setPendingInsertAdPod:] */

void FUN_106408f4c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106408f7c; end: 106408f83; -[SCAdDataSource itemIdsPresentedWithSSP] */

undefined8 FUN_106408f7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106408f84; end: 106408f8b; -[SCAdDataSource cachedInsertionConfig] */

undefined8 FUN_106408f84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 106408f8c; end: 106408fbb; -[SCAdDataSource setCachedInsertionConfig:] */

void FUN_106408f8c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106408fbc; end: 106408fc3; -[SCAdDataSource adRequestClientIdToAdResponseMap] */

undefined8 FUN_106408fbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 106408fc4; end: 106408ff3; -[SCAdDataSource setAdRequestClientIdToAdResponseMap:] */

void FUN_106408fc4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106408ff4; end: 106408ffb; -[SCAdDataSource adResponseIdToAdPod] */

undefined8 FUN_106408ff4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 106408ffc; end: 10640902b; -[SCAdDataSource setAdResponseIdToAdPod:] */

void FUN_106408ffc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10640902c; end: 106409033; -[SCAdDataSource groupIdToInsertedAdItemIdsByOrder] */

undefined8 FUN_10640902c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 106409034; end: 106409063; -[SCAdDataSource setGroupIdToInsertedAdItemIdsByOrder:] */

void FUN_106409034(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106409064; end: 10640906b; -[SCAdDataSource insertedAdGroupIdsByOrder] */

undefined8 FUN_106409064(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10640906c; end: 10640909b; -[SCAdDataSource setInsertedAdGroupIdsByOrder:] */

void FUN_10640906c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10640909c; end: 1064090a3; -[SCAdDataSource skippedAdAfterGroupIdToAdGroupIdsMap] */

undefined8 FUN_10640909c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1064090a4; end: 1064090ab; -[SCAdDataSource trackedAdRequestClientIds] */

undefined8 FUN_1064090a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 1064090ac; end: 1064090b3; -[SCAdDataSource insertedAdGroupIdToDataModelMap] */

undefined8 FUN_1064090ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 1064090b4; end: 1064090e3; -[SCAdDataSource setInsertedAdGroupIdToDataModelMap:] */

void FUN_1064090b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064090e4; end: 1064090eb; -[SCAdDataSource insertedAfterGroupIdToAdGroupIdsMap] */

undefined8 FUN_1064090e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 1064090ec; end: 1064090f3; -[SCAdDataSource insertedAditemIdToDataModelMap] */

undefined8 FUN_1064090ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 1064090f4; end: 106409123; -[SCAdDataSource setInsertedAditemIdToDataModelMap:] */

void FUN_1064090f4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106409124; end: 10640912b; -[SCAdDataSource skippedAdAfterItemIdToAdItemIdsMap] */

undefined8 FUN_106409124(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10640912c; end: 10640915b; -[SCAdDataSource setSkippedAdAfterItemIdToAdItemIdsMap:] */

void FUN_10640912c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10640915c; end: 106409163; -[SCAdDataSource currentAdPlacement] */

undefined8 FUN_10640915c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 106409164; end: 106409193; -[SCAdDataSource setCurrentAdPlacement:] */

void FUN_106409164(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106409194; end: 10640919b; -[SCAdDataSource pixelServeItemSyncManager] */

undefined8 FUN_106409194(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 10640919c; end: 1064091a3; -[SCAdDataSource delayedAdOpportunities] */

undefined8 FUN_10640919c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 1064091a4; end: 1064091d3; -[SCAdDataSource setDelayedAdOpportunities:] */

void FUN_1064091a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064091d4; end: 1064091db; -[SCAdDataSource adRequestClientIdToInsertPositionMap] */

undefined8 FUN_1064091d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 1064091dc; end: 10640920b; -[SCAdDataSource setAdRequestClientIdToInsertPositionMap:] */

void FUN_1064091dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10640920c; end: 106409213; -[SCAdDataSource adRequestClientIdToDecidingAdjacentOrganicGarmSafety] */

undefined8 FUN_10640920c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 106409214; end: 106409243; -[SCAdDataSource setAdRequestClientIdToDecidingAdjacentOrganicGarmSafety:] */

void FUN_106409214(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106409244; end: 10640939f; -[SCAdDataSource .cxx_destruct] */

void FUN_106409244(long param_1)

{
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
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 1064093a0; end: 106409f63; -[SCAdDataSourceDependencies initWithOperaSessionId:adBlizzardLogger:initialAd:adTrackerHelper:viewLocation:grapheneRegistry:applicationPreferences:userPreferences:adConfigProvider:adConfigProviderV2:adContentDelivery:adInsertionMetricsManager:mediaFetcher:mediaMetricsManager:adOpportunityLogger:adOpportunityLoggerV2:adPodManager:promotedStoryStateProvider:adProvider:trackMetricsManager:adWebViewPrefetchHintsManager:discoverFeedDataFetcher:onDemandResourceDownloader:p2pDataSource:contentInterstitialRuleTracker:publicStoriesInsertionRuleTracker:crossInventoryInsertionRuleTracker:adPreferencesProvider:publicStoryContentViewHistoryCoordinator:adTracker:notificationPool:operaNavigationStyle:midRollInsertionManager:unskippableAdManager:expandStateManager:networkServices:userSession:mediaCoordinator:playbackAssetRepository:skStoreProductPrefetcher:scAdWebViewPreloadManager:adWebViewAssetPrefetcher:lifecycleWatermarkMetricsManager:audioSession:contextExperimentService:crashLogger:adBrowserLifecycleService:impalaLegacyServices:adsOperaParser:skOverlayPreloader:internalErrorMetricsManager:dpaConfigProvider:promotedStoryLogger:] */

undefined8 *
FUN_1064093a0(double param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11,undefined8 param_12,ulong param_13,
             undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
             undefined8 param_18,undefined8 param_19,undefined8 param_20,undefined8 param_21,
             undefined8 param_22,undefined8 param_23,undefined8 param_24,undefined8 param_25,
             undefined8 param_26,undefined8 param_27,undefined8 param_28,undefined8 param_29,
             undefined8 param_30,undefined8 param_31,undefined8 param_32,undefined8 param_33,
             undefined8 param_34,undefined8 param_35,undefined8 param_36,undefined8 param_37,
             undefined8 param_38,undefined8 param_39,undefined8 param_40,undefined8 param_41,
             undefined8 param_42,undefined8 param_43,undefined8 param_44,undefined8 param_45,
             undefined8 param_46,undefined8 param_47,undefined8 param_48,undefined8 param_49,
             undefined8 param_50,undefined8 param_51,undefined8 param_52,undefined8 param_53,
             undefined8 param_54,undefined8 param_55,undefined8 param_56)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
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
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain();
  _objc_retain();
  _objc_retain(param_51);
  _objc_retain();
  _objc_retain();
  _objc_retain(param_54);
  _objc_retain();
  _objc_retain(param_56);
  puStack_70 = PTR_PTR_1126f1248;
  puVar1 = &uStack_78;
  uStack_78 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (puVar1 != (undefined8 *)0x0) {
    if (param_4 == 0) {
      func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x00010c0df720(param_1 * 1000.0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = puVar1[2];
      puVar1[2] = puVar3;
    }
    else {
      _objc_retain(param_4);
      uVar2 = puVar1[2];
      puVar1[2] = param_4;
    }
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
    puVar1[6] = param_8;
    uVar4 = param_13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    FUN_106433d74();
    if (((uVar5 & 1) == 0) && ((param_8 == 0xb || (param_8 == 0x1e)))) {
      uVar5 = param_13;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf1f480();
      *(char *)(puVar1 + 1) = (char)uVar6;
      _objc_release(uVar5);
    }
    else {
      *(char *)(puVar1 + 1) = (char)uVar5;
    }
    _objc_release(uVar4);
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
    _objc_retain(param_16);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_34;
    _objc_release(uVar2);
    puVar1[0x26] = param_35;
    _objc_retain(param_36);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_42;
    _objc_release(uVar2);
    _objc_retain(param_43);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_43;
    _objc_release(uVar2);
    _objc_retain(param_44);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_45;
    _objc_release(uVar2);
    _objc_retain(param_46);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_46;
    _objc_release(uVar2);
    _objc_retain(param_47);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_47;
    _objc_release(uVar2);
    _objc_retain(param_48);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_48;
    _objc_release(uVar2);
    _objc_retain(param_49);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_49;
    _objc_release(uVar2);
    _objc_retain(param_50);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_50;
    _objc_release(uVar2);
    _objc_retain(param_51);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_51;
    _objc_release(uVar2);
    _objc_retain(param_52);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_52;
    _objc_release(uVar2);
    _objc_retain(param_53);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_53;
    _objc_release(uVar2);
    _objc_retain(param_54);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_54;
    _objc_release(uVar2);
    _objc_retain(param_56);
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = param_56;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_13);
    _objc_retain(param_42);
    _objc_retain(param_14);
    _objc_retain(param_21);
    _objc_retain(param_12);
    _objc_retain(param_49);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x33];
    puVar1[0x33] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_55);
    uVar2 = puVar1[0x3a];
    puVar1[0x3a] = param_55;
    _objc_release(uVar2);
    _objc_release(param_49);
    _objc_release(param_12);
    _objc_release(param_21);
    _objc_release(param_14);
    _objc_release(param_42);
    _objc_release(param_13);
  }
  _objc_release(param_56);
  _objc_release(param_55);
  _objc_release(param_54);
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
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
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 106409f64; end: 106409fe3;  */

void FUN_106409f64(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f480();
  _objc_release(uVar2);
  ppuVar1 = &PTR_PTR_1126ca5b0;
  if ((int)uVar3 == 0) {
    ppuVar1 = &PTR_PTR_1126ca5b8;
  }
  _objc_alloc(*ppuVar1);
  func_0x00010c036be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106409fe4; end: 106409feb; -[SCAdDataSourceDependencies operaSessionId] */

undefined8 FUN_106409fe4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106409fec; end: 106409ff3; -[SCAdDataSourceDependencies adBlizzardLogger] */

undefined8 FUN_106409fec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106409ff4; end: 106409ffb; -[SCAdDataSourceDependencies initialAd] */

undefined8 FUN_106409ff4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106409ffc; end: 10640a003; -[SCAdDataSourceDependencies adTrackerHelper] */

undefined8 FUN_106409ffc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10640a004; end: 10640a00b; -[SCAdDataSourceDependencies viewLocation] */

undefined8 FUN_10640a004(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10640a00c; end: 10640a013; -[SCAdDataSourceDependencies setViewLocation:] */

void FUN_10640a00c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10640a014; end: 10640a01b; -[SCAdDataSourceDependencies sspEnabled] */

undefined1 FUN_10640a014(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10640a01c; end: 10640a023; -[SCAdDataSourceDependencies grapheneRegistry] */

undefined8 FUN_10640a01c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10640a024; end: 10640a02b; -[SCAdDataSourceDependencies applicationPreferences] */

undefined8 FUN_10640a024(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10640a02c; end: 10640a033; -[SCAdDataSourceDependencies userPreferences] */

undefined8 FUN_10640a02c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10640a034; end: 10640a03b; -[SCAdDataSourceDependencies adConfigProvider] */

undefined8 FUN_10640a034(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10640a03c; end: 10640a043; -[SCAdDataSourceDependencies adConfigProviderV2] */

undefined8 FUN_10640a03c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10640a044; end: 10640a04b; -[SCAdDataSourceDependencies adContentDelivery] */

undefined8 FUN_10640a044(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10640a04c; end: 10640a053; -[SCAdDataSourceDependencies adInsertionMetricsManager] */

undefined8 FUN_10640a04c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10640a054; end: 10640a05b; -[SCAdDataSourceDependencies mediaCoordinator] */

undefined8 FUN_10640a054(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10640a05c; end: 10640a063; -[SCAdDataSourceDependencies mediaFetcher] */

undefined8 FUN_10640a05c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10640a064; end: 10640a06b; -[SCAdDataSourceDependencies mediaMetricsManager] */

undefined8 FUN_10640a064(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10640a06c; end: 10640a073; -[SCAdDataSourceDependencies adOpportunityLogger] */

undefined8 FUN_10640a06c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10640a074; end: 10640a07b; -[SCAdDataSourceDependencies adOpportunityLoggerV2] */

undefined8 FUN_10640a074(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10640a07c; end: 10640a083; -[SCAdDataSourceDependencies adPodManager] */

undefined8 FUN_10640a07c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10640a084; end: 10640a08b; -[SCAdDataSourceDependencies promotedStoryStateProvider] */

undefined8 FUN_10640a084(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10640a08c; end: 10640a093; -[SCAdDataSourceDependencies adProvider] */

undefined8 FUN_10640a08c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10640a094; end: 10640a09b; -[SCAdDataSourceDependencies trackMetricsManager] */

undefined8 FUN_10640a094(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 10640a09c; end: 10640a0a3; -[SCAdDataSourceDependencies adWebViewPrefetchHintsManager] */

undefined8 FUN_10640a09c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10640a0a4; end: 10640a0ab; -[SCAdDataSourceDependencies adWebViewPreloadManager] */

undefined8 FUN_10640a0a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 10640a0ac; end: 10640a0b3; -[SCAdDataSourceDependencies adWebViewAssetPrefetcher] */

undefined8 FUN_10640a0ac(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 10640a0b4; end: 10640a0bb; -[SCAdDataSourceDependencies discoverFeedDataFetcher] */

undefined8 FUN_10640a0b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 10640a0bc; end: 10640a0c3; -[SCAdDataSourceDependencies onDemandResourceDownloader] */

undefined8 FUN_10640a0bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 10640a0c4; end: 10640a0cb; -[SCAdDataSourceDependencies imageDownloader] */

undefined8 FUN_10640a0c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 10640a0cc; end: 10640a0d3; -[SCAdDataSourceDependencies p2pDataSource] */

undefined8 FUN_10640a0cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 10640a0d4; end: 10640a0db; -[SCAdDataSourceDependencies playbackAssetRepository] */

undefined8 FUN_10640a0d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 10640a0dc; end: 10640a0e3; -[SCAdDataSourceDependencies contentInterstitialRuleTracker] */

undefined8 FUN_10640a0dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 10640a0e4; end: 10640a0eb; -[SCAdDataSourceDependencies publicStoriesInsertionRuleTracker] */

undefined8 FUN_10640a0e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 10640a0ec; end: 10640a0f3; -[SCAdDataSourceDependencies crossInventoryInsertionRuleTracker] */

undefined8 FUN_10640a0ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 10640a0f4; end: 10640a0fb; -[SCAdDataSourceDependencies adPreferencesProvider] */

undefined8 FUN_10640a0f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 10640a0fc; end: 10640a103; -[SCAdDataSourceDependencies publicStoryContentViewHistoryCoordinator] */

undefined8 FUN_10640a0fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 10640a104; end: 10640a10b; -[SCAdDataSourceDependencies adTracker] */

undefined8 FUN_10640a104(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 10640a10c; end: 10640a113; -[SCAdDataSourceDependencies notificationPool] */

undefined8 FUN_10640a10c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 10640a114; end: 10640a11b; -[SCAdDataSourceDependencies operaNavigationStyle] */

undefined8 FUN_10640a114(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 10640a11c; end: 10640a123; -[SCAdDataSourceDependencies midRollInsertionManager] */

undefined8 FUN_10640a11c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



/* Entry: 10640a124; end: 10640a12b; -[SCAdDataSourceDependencies unskippableAdManager] */

undefined8 FUN_10640a124(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 10640a12c; end: 10640a133; -[SCAdDataSourceDependencies expandStateManager] */

undefined8 FUN_10640a12c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}



/* Entry: 10640a134; end: 10640a13b; -[SCAdDataSourceDependencies networkServices] */

undefined8 FUN_10640a134(long param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



/* Entry: 10640a13c; end: 10640a143; -[SCAdDataSourceDependencies userSession] */

undefined8 FUN_10640a13c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x158);
}



/* Entry: 10640a144; end: 10640a14b; -[SCAdDataSourceDependencies skStoreProductPrefetcher] */

undefined8 FUN_10640a144(long param_1)

{
  return *(undefined8 *)(param_1 + 0x160);
}



/* Entry: 10640a14c; end: 10640a153; -[SCAdDataSourceDependencies lifecycleWatermarkMetricsManager] */

undefined8 FUN_10640a14c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x168);
}



/* Entry: 10640a154; end: 10640a15b; -[SCAdDataSourceDependencies audioSession] */

undefined8 FUN_10640a154(long param_1)

{
  return *(undefined8 *)(param_1 + 0x170);
}



/* Entry: 10640a15c; end: 10640a163; -[SCAdDataSourceDependencies contextExperimentService] */

undefined8 FUN_10640a15c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x178);
}



/* Entry: 10640a164; end: 10640a16b; -[SCAdDataSourceDependencies crashLogger] */

undefined8 FUN_10640a164(long param_1)

{
  return *(undefined8 *)(param_1 + 0x180);
}



/* Entry: 10640a16c; end: 10640a173; -[SCAdDataSourceDependencies adBrowserLifecycleService] */

undefined8 FUN_10640a16c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x188);
}



/* Entry: 10640a174; end: 10640a17b; -[SCAdDataSourceDependencies impalaLegacyServices] */

undefined8 FUN_10640a174(long param_1)

{
  return *(undefined8 *)(param_1 + 400);
}



/* Entry: 10640a17c; end: 10640a183; -[SCAdDataSourceDependencies sharedOperaMediaManager] */

undefined8 FUN_10640a17c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x198);
}



/* Entry: 10640a184; end: 10640a18b; -[SCAdDataSourceDependencies adsOperaParser] */

undefined8 FUN_10640a184(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a0);
}



/* Entry: 10640a18c; end: 10640a193; -[SCAdDataSourceDependencies skOverlayPreloader] */

undefined8 FUN_10640a18c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a8);
}



/* Entry: 10640a194; end: 10640a19b; -[SCAdDataSourceDependencies internalErrorMetricsManager] */

undefined8 FUN_10640a194(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b0);
}



/* Entry: 10640a19c; end: 10640a1a3; -[SCAdDataSourceDependencies adPlaybackConfig] */

undefined8 FUN_10640a19c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b8);
}



/* Entry: 10640a1a4; end: 10640a1d3; -[SCAdDataSourceDependencies setAdPlaybackConfig:] */

void FUN_10640a1a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10640a1d4; end: 10640a1db; -[SCAdDataSourceDependencies friendStoriesDataCoordinator] */

undefined8 FUN_10640a1d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c0);
}



/* Entry: 10640a1dc; end: 10640a20b; -[SCAdDataSourceDependencies setFriendStoriesDataCoordinator:] */

void FUN_10640a1dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1c0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10640a20c; end: 10640a213; -[SCAdDataSourceDependencies organicEngagementFetcher] */

undefined8 FUN_10640a20c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c8);
}



/* Entry: 10640a214; end: 10640a243; -[SCAdDataSourceDependencies setOrganicEngagementFetcher:] */

void FUN_10640a214(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10640a244; end: 10640a24b; -[SCAdDataSourceDependencies dpaConfigProvider] */

undefined8 FUN_10640a244(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1d0);
}


