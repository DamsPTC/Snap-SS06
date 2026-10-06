/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ae4ce0; end: 105ae4d0b; -[SCDiscoverFeedWorkflow captureWorkflowDidDismissWithDidSendSnap:] */

void FUN_105ae4ce0(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1cbd20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ae4d0c; end: 105ae4d23; -[SCDiscoverFeedWorkflow customStatusBarStyleContextController] */

void FUN_105ae4d0c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ae4d24; end: 105ae4d2f; -[SCDiscoverFeedWorkflow setCustomStatusBarStyleContextController:] */

void FUN_105ae4d24(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 105ae4d30; end: 105ae4d83; -[SCDiscoverFeedWorkflow .cxx_destruct] */

void FUN_105ae4d30(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ae4d84; end: 105ae612f; -[SCDiscoverFeedContainerViewController initWithContainerViewConfiguration:userSession:networkRequester:storiesSyncNetworkRequester:snapTokenProvider:navigationServices:headerButtonServices:storiesDataCoordinator:myStoriesDataCoordinator:storiesMediaCoordinator:readReceiptCoordinator:friendStoriesDataCoordinator:storyPlaybackOrderDecider:friendStoriesReplayManager:sectionExtensionServices:discoverFeedActionHandler:discoverFeedSectionHeaderActionHandler:discoverFeedPrefetchHandler:discoverFeedQueryCoordinator:imageDownloader:collapseManager:discoverFeedEventsAnnouncer:lazyDiscoverFeedEventsController:optInProvider:currentPageTracker:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:grapheneMetricsEmitter:storiesGrapheneMetricsEmitter:discoverDataServices:interactionHistoryManager:adPrefetchServices:cachedViewStateProvider:featureSettingsService:discoverFeedCollectionPrefercher:actionHandlerCreator:deeplinkHandler:impalaProfilePresentHandler:snapchattersSynchronousDataFetcher:endpointManager:storiesSnapReadReceiptLogger:grapheneRegistry:adConfigProvider:userNotTrackedLogger:adEOVTimerProvider:discoverPerformanceLogging:internalDistributor:circumstanceEngine:sectionsCoordinator:userSegmentsProvider:snapProServices:snapchatterServices:creatorSettingsService:notificationScreenAccessor:userPreferences:lazyUserRegistrationInfoProvider:lazyUserBirthdayProvider:promotedStoriesLogger:snapchattersDataFetcher:addToStoryCameraScopeExposer:addToStoryCameraScopeBuilder:imageSourceProvider:imageFetchingService:spotlightStoriesPrefetcherFactory:applicationLifecycleEvents:storiesRankingCoordinator:pageLoadMetricManager:storiesConfigProvider:bitmojiImageFetcher:networkConnectivityMonitor:locationProvider:rtusClientCacheManager:unifiedGRPCClientFactory:storiesCachedPropertiesCoordinator:discoverPageDeckContainer:footerItem:discoverBlizzardLogger:dpaConfigProvider:adRenderDataParser:notificationPool:simpleSnapchatExperimentConfigProvider:customAppThemeProvider:searchScopeExposer:searchScopeServices:collectionViewAutoPlayManager:appStartExperimentReader:searchPreTypeNetworkRequester:discoverCrashLogger:creatorSubscriptionsInfoProvider:plusFeatureGating:presentCreatorSubscriptionsBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105ae4d84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
             undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
             undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
             undefined8 param_69,ulong param_70)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_35);
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
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_54);
  _objc_retain(param_55);
  _objc_retain(param_56);
  _objc_retain(param_57);
  _objc_retain(param_58);
  _objc_retain(param_59);
  _objc_retain(param_60);
  _objc_retain(param_61);
  _objc_retain(param_62);
  _objc_retain(param_63);
  _objc_retain(param_64);
  _objc_retain(param_65);
  _objc_retain(param_66);
  _objc_retain(param_67);
  _objc_retain(param_68);
  _objc_retain(param_69);
  _objc_retain(param_70);
  _objc_retain(in_stack_000001f0);
  _objc_retain(in_stack_000001f8);
  _objc_retain(in_stack_00000200);
  _objc_retain(in_stack_00000208);
  _objc_retain(in_stack_00000210);
  _objc_retain(in_stack_00000218);
  _objc_retain(in_stack_00000220);
  _objc_retain(in_stack_00000228);
  _objc_retain(in_stack_00000230);
  _objc_retain(in_stack_00000238);
  _objc_retain(in_stack_00000240);
  _objc_retain(in_stack_00000248);
  _objc_retain(in_stack_00000250);
  _objc_retain(in_stack_00000258);
  _objc_retain(in_stack_00000260);
  _objc_retain(in_stack_00000268);
  _objc_retain();
  _objc_retain();
  _objc_retain(in_stack_00000288);
  _objc_retain();
  _objc_retain(in_stack_00000298);
  _objc_retain();
  puStack_70 = PTR_PTR_1126ebcd8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithContainerViewConfigurati_11252c560,param_3,
                      in_stack_00000258,in_stack_00000278);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar9 = (long)_DAT_11272f524;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_4;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f528;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_5;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f52c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_6;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f530;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11272f534,param_8);
    lVar10 = (long)_DAT_11272f538;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_9;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f53c;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_10;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f540;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_11;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f544;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_12;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f548;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_13;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f54c;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_14;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f550;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_15;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f554;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_16;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f558;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_17;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f55c;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_18;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f560;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_19;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f564;
    _objc_retain(param_20);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_20;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f568;
    _objc_retain(param_21);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_21;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f56c;
    _objc_retain(param_22);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_22;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f570;
    _objc_retain(param_64);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_64;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f574;
    _objc_retain(param_65);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_65;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f578;
    _objc_retain(in_stack_000001f0);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = in_stack_000001f0;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f57c;
    _objc_retain(param_23);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_23;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f580;
    _objc_retain(param_24);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_24;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f584;
    _objc_retain(param_25);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_25;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f588;
    _objc_retain(param_26);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_26;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f58c;
    _objc_retain(param_27);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_27;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f590;
    _objc_retain(param_28);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_28;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f594;
    _objc_retain(param_30);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_30;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f598;
    _objc_retain(param_31);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_31;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f59c;
    _objc_retain(param_35);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_35;
    _objc_release(uVar2);
    func_0x00010c1d8e40(puVar1);
    uVar3 = param_70;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c12ce60();
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110dcbaf8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcbaf8,0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar1;
      func_0x00010c14d660(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216240();
      _objc_release(puVar6);
      _objc_release(ppuVar5);
      puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar1;
      func_0x00010c14d660(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(puVar6);
      _objc_release(puVar7);
    }
    puVar7 = PTR_PTR_1126af080;
    _objc_alloc_init();
    lVar9 = (long)_DAT_11272f5a0;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar7;
    _objc_release(uVar2);
    func_0x00010c1a9d60(*(undefined8 *)((long)puVar1 + lVar9));
    lVar9 = (long)_DAT_11272f5a4;
    _objc_retain(param_32);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_32;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f5a8;
    _objc_retain(param_33);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_33;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f5ac;
    _objc_retain(param_34);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_34;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f5b0;
    _objc_retain(param_36);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_36;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f5b4;
    _objc_retain(param_37);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_37;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11272f5b8,param_38);
    lVar9 = (long)_DAT_11272f5bc;
    _objc_retain(param_40);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_40;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f5c0;
    _objc_retain(param_39);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_39;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f5c4;
    _objc_retain(param_41);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_41;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f5c8;
    _objc_retain(param_43);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_43;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f5cc;
    _objc_retain(param_44);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_44;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f5d0;
    _objc_retain(param_42);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_42;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f5d4;
    _objc_retain(param_29);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_29;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f5d8;
    _objc_retain(param_45);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_45;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f5dc;
    _objc_retain(param_46);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_46;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f5e0;
    _objc_retain(param_47);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_47;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f5e4;
    _objc_retain(param_48);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_48;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f5e8;
    _objc_retain(param_49);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_49;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f5ec;
    _objc_retain(param_50);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_50;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f5f0;
    _objc_retain(param_51);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_51;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f5f4;
    _objc_retain(param_52);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_52;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11272f5f8,param_53);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11272f5fc,param_54);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11272f600,param_55);
    lVar9 = (long)_DAT_11272f604;
    _objc_retain(param_56);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_56;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f608;
    _objc_retain(param_57);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_57;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f60c;
    _objc_retain(param_58);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_58;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f610;
    _objc_retain(param_59);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_59;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f614;
    _objc_retain(param_60);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_60;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f618;
    _objc_retain(param_61);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_61;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f61c;
    _objc_retain(param_62);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_62;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f620;
    _objc_retain(param_63);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_63;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f624;
    _objc_retain(param_66);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_66;
    _objc_release(uVar2);
    puVar7 = PTR_PTR_1126c2298;
    _objc_alloc();
    uVar2 = *(undefined8 *)((long)puVar1 + lVar10);
    func_0x00010bfdf340(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffa000();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272f628);
    *(undefined **)((long)puVar1 + (long)_DAT_11272f628) = puVar7;
    _objc_release(uVar8);
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f62c;
    _objc_retain(param_67);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_67;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f630;
    _objc_retain(param_68);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_68;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f634;
    _objc_retain(param_69);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_69;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f638;
    _objc_retain(param_70);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(ulong *)((long)puVar1 + lVar9) = param_70;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f63c;
    _objc_retain(in_stack_000001f8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = in_stack_000001f8;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f640;
    _objc_retain(in_stack_00000200);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = in_stack_00000200;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f644;
    _objc_retain(in_stack_00000208);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = in_stack_00000208;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f648;
    _objc_retain(in_stack_00000210);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = in_stack_00000210;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f64c;
    _objc_retain(in_stack_00000218);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = in_stack_00000218;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f650;
    _objc_retain(in_stack_00000228);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = in_stack_00000228;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11272f654,in_stack_00000220);
    lVar9 = (long)_DAT_11272f658;
    _objc_retain(in_stack_00000230);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = in_stack_00000230;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f65c;
    _objc_retain(in_stack_00000238);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = in_stack_00000238;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f660;
    _objc_retain(in_stack_00000240);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = in_stack_00000240;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f664;
    _objc_retain(in_stack_00000248);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = in_stack_00000248;
    _objc_release(uVar2);
    puVar7 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272f668);
    *(undefined **)((long)puVar1 + (long)_DAT_11272f668) = puVar7;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f66c;
    _objc_retain(in_stack_00000250);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = in_stack_00000250;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f670;
    _objc_retain(in_stack_00000258);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = in_stack_00000258;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f674;
    _objc_retain(in_stack_00000260);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = in_stack_00000260;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f678;
    _objc_retain(in_stack_00000268);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = in_stack_00000268;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f67c;
    _objc_retain(in_stack_00000270);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = in_stack_00000270;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f680;
    _objc_retain(in_stack_00000280);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = in_stack_00000280;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f684;
    _objc_retain(in_stack_00000288);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = in_stack_00000288;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f688;
    _objc_retain(in_stack_00000290);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = in_stack_00000290;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11272f68c;
    _objc_retain(in_stack_00000298);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = in_stack_00000298;
    _objc_release(uVar2);
    uVar2 = in_stack_000002a0;
    _objc_retainBlock();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272f690);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272f690) = uVar2;
    _objc_release(uVar8);
  }
  _objc_release(in_stack_000002a0);
  _objc_release(in_stack_00000298);
  _objc_release(in_stack_00000290);
  _objc_release(in_stack_00000288);
  _objc_release(in_stack_00000280);
  _objc_release(in_stack_00000270);
  _objc_release(in_stack_00000268);
  _objc_release(in_stack_00000260);
  _objc_release(in_stack_00000258);
  _objc_release(in_stack_00000250);
  _objc_release(in_stack_00000248);
  _objc_release(in_stack_00000240);
  _objc_release(in_stack_00000238);
  _objc_release(in_stack_00000230);
  _objc_release(in_stack_00000228);
  _objc_release(in_stack_00000220);
  _objc_release(in_stack_00000218);
  _objc_release(in_stack_00000210);
  _objc_release(in_stack_00000208);
  _objc_release(in_stack_00000200);
  _objc_release(in_stack_000001f8);
  _objc_release(in_stack_000001f0);
  _objc_release(param_70);
  _objc_release(param_69);
  _objc_release(param_68);
  _objc_release(param_67);
  _objc_release(param_66);
  _objc_release(param_65);
  _objc_release(param_64);
  _objc_release(param_63);
  _objc_release(param_62);
  _objc_release(param_61);
  _objc_release(param_60);
  _objc_release(param_59);
  _objc_release(param_58);
  _objc_release(param_57);
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
  _objc_release(param_35);
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
  return puVar1;
}



/* Entry: 105ae6130; end: 105ae615b;  */

void FUN_105ae6130(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000100456ca0();
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,param_1);
  return;
}



/* Entry: 105ae615c; end: 105ae68f7; -[SCDiscoverFeedContainerViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ae615c(ulong param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
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
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  long lVar59;
  long lVar60;
  ulong uStack_78;
  undefined *puStack_70;
  
  puStack_70 = PTR_PTR_1126ebcd8;
  uStack_78 = param_1;
  _objc_msgSendSuper2(&uStack_78,PTR_s_viewDidLoad_112684cd8);
  puVar2 = PTR_PTR_1126c22a0;
  _objc_alloc();
  uVar12 = *(undefined8 *)(param_1 + (long)_DAT_11272f524);
  uVar53 = *(undefined8 *)(param_1 + (long)_DAT_11272f528);
  uVar13 = *(undefined8 *)(param_1 + (long)_DAT_11272f530);
  lVar7 = param_1 + (long)_DAT_11272f534;
  _objc_loadWeakRetained();
  uVar14 = *(undefined8 *)(param_1 + (long)_DAT_11272f538);
  uVar54 = *(undefined8 *)(param_1 + (long)_DAT_11272f53c);
  uVar15 = *(undefined8 *)(param_1 + (long)_DAT_11272f52c);
  uVar55 = *(undefined8 *)(param_1 + (long)_DAT_11272f540);
  uVar16 = *(undefined8 *)(param_1 + (long)_DAT_11272f544);
  uVar57 = *(undefined8 *)(param_1 + (long)_DAT_11272f548);
  uVar56 = *(undefined8 *)(param_1 + (long)_DAT_11272f54c);
  uVar17 = *(undefined8 *)(param_1 + (long)_DAT_11272f550);
  uVar18 = *(undefined8 *)(param_1 + (long)_DAT_11272f554);
  lVar1 = (long)_DAT_11272f55c;
  uVar19 = *(undefined8 *)(param_1 + (long)_DAT_11272f558);
  uVar58 = *(undefined8 *)(param_1 + (long)_DAT_11272f560);
  uVar20 = *(undefined8 *)(param_1 + (long)_DAT_11272f564);
  uVar21 = *(undefined8 *)(param_1 + (long)_DAT_11272f568);
  uVar22 = *(undefined8 *)(param_1 + (long)_DAT_11272f56c);
  uVar23 = *(undefined8 *)(param_1 + (long)_DAT_11272f57c);
  uVar24 = *(undefined8 *)(param_1 + (long)_DAT_11272f580);
  uVar25 = *(undefined8 *)(param_1 + (long)_DAT_11272f584);
  uVar26 = *(undefined8 *)(param_1 + (long)_DAT_11272f588);
  uVar27 = *(undefined8 *)(param_1 + (long)_DAT_11272f58c);
  uVar28 = *(undefined8 *)(param_1 + (long)_DAT_11272f590);
  uVar29 = *(undefined8 *)(param_1 + (long)_DAT_11272f5d4);
  uVar30 = *(undefined8 *)(param_1 + (long)_DAT_11272f594);
  uVar31 = *(undefined8 *)(param_1 + (long)_DAT_11272f598);
  uVar32 = *(undefined8 *)(param_1 + (long)_DAT_11272f5a4);
  uVar33 = *(undefined8 *)(param_1 + (long)_DAT_11272f5a8);
  uVar34 = *(undefined8 *)(param_1 + (long)_DAT_11272f5ac);
  uVar35 = *(undefined8 *)(param_1 + (long)_DAT_11272f59c);
  uVar36 = *(undefined8 *)(param_1 + (long)_DAT_11272f5b4);
  uVar37 = *(undefined8 *)(param_1 + lVar1);
  lVar60 = param_1 + (long)_DAT_11272f5b8;
  _objc_loadWeakRetained();
  uVar38 = *(undefined8 *)(param_1 + (long)_DAT_11272f5c0);
  uVar39 = *(undefined8 *)(param_1 + (long)_DAT_11272f5bc);
  uVar40 = *(undefined8 *)(param_1 + (long)_DAT_11272f5c4);
  uVar41 = *(undefined8 *)(param_1 + (long)_DAT_11272f5d0);
  uVar42 = *(undefined8 *)(param_1 + (long)_DAT_11272f5c8);
  uVar43 = *(undefined8 *)(param_1 + (long)_DAT_11272f5cc);
  uVar44 = *(undefined8 *)(param_1 + (long)_DAT_11272f5d8);
  uVar45 = *(undefined8 *)(param_1 + (long)_DAT_11272f5dc);
  uVar46 = *(undefined8 *)(param_1 + (long)_DAT_11272f5e0);
  uVar47 = *(undefined8 *)(param_1 + (long)_DAT_11272f5e4);
  uVar48 = *(undefined8 *)(param_1 + (long)_DAT_11272f5e8);
  uVar49 = *(undefined8 *)(param_1 + (long)_DAT_11272f5ec);
  uVar50 = *(undefined8 *)(param_1 + (long)_DAT_11272f5b0);
  uVar51 = *(undefined8 *)(param_1 + (long)_DAT_11272f5f0);
  uVar52 = *(undefined8 *)(param_1 + (long)_DAT_11272f5f4);
  lVar3 = param_1 + (long)_DAT_11272f5f8;
  _objc_loadWeakRetained();
  lVar4 = param_1 + (long)_DAT_11272f5fc;
  _objc_loadWeakRetained();
  lVar5 = param_1 + (long)_DAT_11272f600;
  _objc_loadWeakRetained();
  lVar59 = (long)_DAT_11272f638;
  func_0x00010c05dfa0(puVar2,*(undefined8 *)(param_1 + (long)_DAT_11272f62c),uVar12,uVar53,uVar13,
                      lVar7,uVar14,uVar54,uVar15,uVar55,uVar16,uVar57,uVar56,uVar17,uVar18,uVar19,
                      uVar37,uVar58,uVar20,uVar21,uVar22,uVar23,uVar24,uVar25,uVar26,uVar27,uVar28,
                      uVar29,uVar30,uVar31,uVar32,uVar33,uVar34,uVar35,uVar36,lVar60,uVar38,uVar39,
                      uVar40,uVar41,uVar42,uVar43,uVar44,uVar45,uVar46,uVar47,uVar48,uVar49,uVar50,
                      uVar51,uVar52,lVar3,lVar4,lVar5,
                      *(undefined8 *)(param_1 + (long)_DAT_11272f604),
                      *(undefined8 *)(param_1 + (long)_DAT_11272f608),
                      *(undefined8 *)(param_1 + (long)_DAT_11272f60c),
                      *(undefined8 *)(param_1 + (long)_DAT_11272f610),
                      *(undefined8 *)(param_1 + (long)_DAT_11272f614),
                      *(undefined8 *)(param_1 + (long)_DAT_11272f618),
                      *(undefined8 *)(param_1 + (long)_DAT_11272f61c),
                      *(undefined8 *)(param_1 + (long)_DAT_11272f620),
                      *(undefined8 *)(param_1 + (long)_DAT_11272f570),
                      *(undefined8 *)(param_1 + (long)_DAT_11272f574),
                      *(undefined8 *)(param_1 + (long)_DAT_11272f624),
                      *(undefined8 *)(param_1 + (long)_DAT_11272f62c),
                      *(undefined8 *)(param_1 + (long)_DAT_11272f630),
                      *(undefined8 *)(param_1 + (long)_DAT_11272f634),
                      *(undefined8 *)(param_1 + lVar59),
                      *(undefined8 *)(param_1 + (long)_DAT_11272f578));
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar60);
  _objc_release(lVar7);
  uVar6 = param_1;
  func_0x00010c0f3bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d90c0(puVar2);
  _objc_release(uVar6);
  lVar7 = param_1 + (long)_DAT_11272f654;
  _objc_loadWeakRetained(lVar7);
  func_0x00010c18a1e0(*(undefined8 *)(param_1 + lVar1));
  _objc_release(lVar7);
  func_0x00010c20c5c0(puVar2);
  lVar7 = param_1 + (long)_DAT_11272f694;
  _objc_loadWeakRetained(lVar7);
  func_0x00010c188840(puVar2);
  _objc_release(lVar7);
  func_0x00010c21a120(puVar2);
  func_0x00010c182b60(param_1);
  lVar60 = (long)_DAT_11272f698;
  lVar7 = *(long *)(param_1 + lVar60);
  if (lVar7 != 0) {
    (**(code **)(lVar7 + 0x10))(lVar7,puVar2);
    uVar12 = *(undefined8 *)(param_1 + lVar60);
    *(undefined8 *)(param_1 + lVar60) = 0;
    _objc_release(uVar12);
  }
  uVar9 = param_1;
  func_0x00010bf4dd20();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010010fab4();
  uVar6 = uVar9;
  if ((int)uVar8 == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar9);
  func_0x00010c1f7e00(uVar6);
  _objc_release(uVar6);
  lVar60 = (long)_DAT_11272f69c;
  lVar7 = *(long *)(param_1 + lVar60);
  if (lVar7 != 0) {
    (**(code **)(lVar7 + 0x10))(lVar7,puVar2);
    uVar12 = *(undefined8 *)(param_1 + lVar60);
    *(undefined8 *)(param_1 + lVar60) = 0;
    _objc_release(uVar12);
  }
  uVar9 = *(ulong *)(param_1 + lVar59);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar9;
  func_0x00010c12ce60();
  _objc_release(uVar9);
  if ((uVar6 & 1) == 0) {
    puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    uVar9 = param_1;
    func_0x00010bf4dd20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar9;
    func_0x00010010fab4();
    uVar6 = uVar9;
    if ((int)uVar8 == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar9);
    uVar9 = uVar6;
    _objc_opt_respondsToSelector(uVar6,PTR_s_navigationBarButtonItems_112613358);
    if ((uVar9 & 1) != 0) {
      uVar9 = uVar6;
      func_0x00010c0d6500(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar10);
      _objc_release(uVar9);
    }
    puVar11 = puVar10;
    func_0x00010bf51e00(puVar10);
    func_0x00010c14d660(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ee0c0();
    _objc_release(param_1);
    _objc_release(puVar11);
    _objc_release(uVar6);
    _objc_release(puVar10);
  }
  _objc_release(puVar2);
  return;
}



/* Entry: 105ae68f8; end: 105ae6987; -[SCDiscoverFeedContainerViewController setPPVNavigationLogger:] */

void FUN_105ae68f8(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c10f860();
  func_0x00010bf4dd20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c22a0;
  _objc_opt_class(PTR_PTR_1126c22a0);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  func_0x00010c18f060(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ae6988; end: 105ae69eb; -[SCDiscoverFeedContainerViewController didTapFeedManagementButton] */

void FUN_105ae6988(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010bf4dd20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c22a0;
  _objc_opt_class(PTR_PTR_1126c22a0);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  func_0x00010bf7c9a0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ae69ec; end: 105ae6a4f; -[SCDiscoverFeedContainerViewController didTapDebugInfoButton] */

void FUN_105ae69ec(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010bf4dd20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c22a0;
  _objc_opt_class(PTR_PTR_1126c22a0);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  func_0x00010bf7d0e0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ae6a50; end: 105ae6a83; -[SCDiscoverFeedContainerViewController viewWillAppear:] */

void FUN_105ae6a50(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ebcd8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_viewWillAppear__1126853f0);
  return;
}



/* Entry: 105ae6a84; end: 105ae6af7; -[SCDiscoverFeedContainerViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ae6a84(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ebcd8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  uVar1 = *(ulong *)(param_1 + _DAT_11272f5ec);
  func_0x00010b09cdc4();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11272f58c);
    func_0x00010c0f2220(param_1);
    func_0x00010c24fc40(uVar2);
  }
  return;
}



/* Entry: 105ae6af8; end: 105ae6b77; -[SCDiscoverFeedContainerViewController supportedInterfaceOrientations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ae6af8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11272f668);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    puStack_38 = PTR_PTR_1126ebcd8;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_supportedInterfaceOrientations_112676698);
  }
  return;
}



/* Entry: 105ae6b78; end: 105ae6bf7; -[SCDiscoverFeedContainerViewController viewDidAppearWithDeepLinkInfo:] */

void FUN_105ae6b78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010bf4dd20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010010fab4();
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  func_0x00010c29c7a0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ae6bf8; end: 105ae6c67; -[SCDiscoverFeedContainerViewController shouldPopToRootViewController] */

ulong FUN_105ae6bf8(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010bf4dd20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c22a0;
  _objc_opt_class(PTR_PTR_1126c22a0);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar3 = uVar1;
  func_0x00010c231d80(uVar1);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 105ae6c68; end: 105ae6cdf; -[SCDiscoverFeedContainerViewController timeBeforeReturningToCamera] */

undefined8 FUN_105ae6c68(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010bf4dd20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c22a0;
  _objc_opt_class(PTR_PTR_1126c22a0);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
  func_0x00010c26f120(uVar1);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105ae6ce0; end: 105ae6ce7; -[SCDiscoverFeedContainerViewController pageViewName] */

undefined8 FUN_105ae6ce0(void)

{
  return 0x4c;
}



/* Entry: 105ae6ce8; end: 105ae6d4b; -[SCDiscoverFeedContainerViewController viewingStory] */

undefined8 FUN_105ae6ce8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf4dd20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010010fab4();
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010c083740(uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105ae6d4c; end: 105ae6e1b; -[SCDiscoverFeedContainerViewController cardBackgroundViewDidUpdateTopLayoutInset] */

void FUN_105ae6d4c(double param_1,double param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3;
  func_0x00010c1535c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf31a00();
  _objc_release(uVar1);
  func_0x00010bf4dd20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010010fab4();
  uVar1 = param_3;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010bf4d4c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if ((-12.0 < param_1) && (func_0x00010bf4cdc0(uVar2), param_2 != -param_1)) {
    func_0x00010bf4cdc0(uVar2);
    func_0x00010c1822e0(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105ae6e1c; end: 105ae6e1f; -[SCDiscoverFeedContainerViewController storiesContentViewControllerDidStartOpera:] */

void FUN_105ae6e1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cbf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsUpdateOfScreenEdgesDefer_112650a08);
  return;
}



/* Entry: 105ae6e20; end: 105ae6e23; -[SCDiscoverFeedContainerViewController storiesContentViewControllerDidDismissOpera:] */

void FUN_105ae6e20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cbf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsUpdateOfScreenEdgesDefer_112650a08);
  return;
}



/* Entry: 105ae6e24; end: 105ae6f0f; -[SCDiscoverFeedContainerViewController tooltipDidDismiss:] */

void FUN_105ae6e24(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x00010bfdf5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2792c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126b6550;
  _objc_opt_class(PTR_PTR_1126b6550);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar4 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar1);
  uVar1 = uVar4;
  func_0x00010bf257c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x00010c089820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c0ec860();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar1);
  func_0x00010bf84800(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 105ae6f10; end: 105ae6fa7; -[SCDiscoverFeedContainerViewController defaultProjectNameV2] */

void FUN_105ae6f10(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010bf4dd20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010010fab4();
  puVar1 = param_1;
  if ((int)puVar2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(param_1);
  puVar2 = puVar1;
  _objc_opt_respondsToSelector(puVar1,PTR_s_defaultProjectNameV2_1125b8198);
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = PTR_PTR_1126aedf8;
    func_0x00010c258040(PTR_PTR_1126aedf8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = puVar1;
    func_0x00010bf69fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105ae6fa8; end: 105ae702b; -[SCDiscoverFeedContainerViewController defaultSubProjectName] */

void FUN_105ae6fa8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x00010bf4dd20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010010fab4();
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar2 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_defaultSubProjectName_1125b8320);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = uVar1;
    func_0x00010bf6a5e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105ae702c; end: 105ae70af; -[SCDiscoverFeedContainerViewController jiraMetaInfo] */

void FUN_105ae702c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x00010bf4dd20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010010fab4();
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar2 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_jiraMetaInfo_1125fef30);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = uVar1;
    func_0x00010c085480(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105ae70b0; end: 105ae7133; -[SCDiscoverFeedContainerViewController handleNotificationPressed:] */

void FUN_105ae70b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105ae7134;
  puStack_30 = &UNK_1108d47d0;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010be2cb60(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105ae7134; end: 105ae713f;  */

void FUN_105ae7134(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd19b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_handleNotificationPressed__1125d2010,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105ae7140; end: 105ae71d3; -[SCDiscoverFeedContainerViewController handleNavigationToStoryId:withRefresh:] */

void FUN_105ae7140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105ae71d4;
  puStack_48 = &UNK_1108d4800;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010be2cb60(param_1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 105ae71d4; end: 105ae71e3;  */

void FUN_105ae71d4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd1950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_handleNavigationToStoryId_withRe_1125d1ff8,
             *(undefined8 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 105ae71e4; end: 105ae72d7; -[SCDiscoverFeedContainerViewController updateFeedPageEntryType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ae71e4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_1;
  func_0x00010bf4dd20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c22a0;
  _objc_opt_class(PTR_PTR_1126c22a0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc0000000;
  pcStack_48 = FUN_105ae72d8;
  puStack_40 = &UNK_1108d4830;
  ppuVar5 = &puStack_58;
  uStack_38 = param_3;
  _objc_retainBlock();
  if (uVar1 == 0) {
    ppuVar6 = ppuVar5;
    _objc_retainBlock();
    uVar7 = *(undefined8 *)(param_1 + (long)_DAT_11272f698);
    *(undefined ***)(param_1 + (long)_DAT_11272f698) = ppuVar6;
    _objc_release(uVar7);
  }
  else {
    (*(code *)ppuVar5[2])(ppuVar5,uVar2);
  }
  _objc_release(ppuVar5);
  _objc_release(uVar1);
  return;
}



/* Entry: 105ae72d8; end: 105ae72e3;  */

void FUN_105ae72d8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c285c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_updateFeedPageEntryType__11267f128,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105ae72e4; end: 105ae732f; -[SCDiscoverFeedContainerViewController exit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ae72e4(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010bf2eb20(*(undefined8 *)(param_1 + _DAT_11272f55c));
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ae7330; end: 105ae73db; -[SCDiscoverFeedContainerViewController backgroundExitBehavior] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ae7330(double param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  double dVar3;
  
  lVar2 = (long)_DAT_11272f55c;
  uVar1 = *(ulong *)(param_2 + lVar2);
  func_0x00010c07ab40();
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_2 + _DAT_11272f5ec);
    func_0x000108f54a84();
    if ((int)uVar1 < 1) {
      func_0x00010bf9b820(PTR_PTR_1126aecb0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105ae73d0;
    }
    dVar3 = (double)(uVar1 & 0xffffffff);
  }
  else {
    func_0x00010c26f120(*(undefined8 *)(param_2 + lVar2));
    if ((int)param_1 == 0x7fffffff) {
      func_0x00010c0d83c0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105ae73d0;
    }
    dVar3 = (double)(int)param_1;
  }
  func_0x00010bf9b4c0(dVar3,PTR_PTR_1126aecb0);
  _objc_retainAutoreleasedReturnValue();
LAB_105ae73d0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ae73dc; end: 105ae7433; -[SCDiscoverFeedContainerViewController canHandleNotification:] */

bool FUN_105ae73dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c26a060();
  if (lVar2 == 4) {
    bVar1 = true;
  }
  else {
    lVar2 = param_3;
    func_0x00010c26a060(param_3);
    bVar1 = lVar2 == 0xd;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105ae7434; end: 105ae743b; -[SCDiscoverFeedContainerViewController customStatusBarStyleForViewController] */

undefined8 FUN_105ae7434(void)

{
  return 3;
}



/* Entry: 105ae743c; end: 105ae764f; -[SCDiscoverFeedContainerViewController configureHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ae743c(long param_1,undefined8 param_2,undefined8 param_3)

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
  long lVar10;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lVar10 = (long)_DAT_11272f638;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c22a8;
  func_0x00010bf82880(PTR_PTR_1126c22a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f360(uVar9,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar9);
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c22a8;
  func_0x00010bf82500(PTR_PTR_1126c22a8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010bf1f360(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
  uVar8 = *(undefined8 *)(param_1 + _DAT_11272f628);
  func_0x00010b0aeaec();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_didTapDebugInfoButton_11252c578;
  puVar2 = PTR_s_didTapFeedManagementButton_11252c570;
  lVar10 = (long)_DAT_11272f5ec;
  uVar4 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010083f4d0();
  uVar6 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010081f998();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11272f66c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dbe00();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105ae7650;
  puStack_70 = &UNK_110842e18;
  lStack_68 = param_1;
  func_0x00010bf47080(uVar8,param_2,param_3,uVar3,param_1,puVar2,0,param_1,puVar1,(char)uVar5,
                      (char)uVar9,&puStack_88);
  _objc_release(param_3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  return;
}



/* Entry: 105ae7650; end: 105ae765b;  */

void FUN_105ae7650(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6d590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__openSearchWithQuery__112578f00,0);
  return;
}



/* Entry: 105ae765c; end: 105ae76b3; -[SCDiscoverFeedContainerViewController searchWorkflowDidEnd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ae765c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272f674;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105ae76b4; end: 105ae778b; -[SCDiscoverFeedContainerViewController _openSearchWithQuery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ae76b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11272f674;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c27ed60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_11272f678);
      func_0x00010bf23ea0(uVar3,param_2,lVar2,4,param_1,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar4),param_2,uVar3);
      _objc_release(uVar3);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ae778c; end: 105ae778f; -[SCDiscoverFeedContainerViewController discoverFeedViewControllerDidSelectTrendingTopic:] */

void FUN_105ae778c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6d590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__openSearchWithQuery__112578f00);
  return;
}



/* Entry: 105ae7790; end: 105ae78ff; -[SCDiscoverFeedContainerViewController _handleNavigationWithNavigationBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ae7790(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x105ae7888;
  puStack_40 = &UNK_1108d4850;
  _objc_retain(param_3);
  ppuVar1 = &puStack_58;
  uStack_38 = param_3;
  _objc_retainBlock();
  lVar3 = param_1;
  func_0x00010bf4dd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    ppuVar2 = ppuVar1;
    _objc_retainBlock();
    lVar3 = *(long *)(param_1 + _DAT_11272f69c);
    *(undefined ***)(param_1 + _DAT_11272f69c) = ppuVar2;
  }
  else {
    func_0x00010bf4dd20(param_1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)ppuVar1[2])(ppuVar1,param_1);
    lVar3 = param_1;
  }
  _objc_release(lVar3);
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105ae7900; end: 105ae7903; -[SCDiscoverFeedContainerViewController onUIDidEnterHierarchy:appearance:] */

void FUN_105ae7900(void)

{
  return;
}



/* Entry: 105ae7904; end: 105ae7907; -[SCDiscoverFeedContainerViewController onUIWillAppear:appearance:] */

void FUN_105ae7904(void)

{
  return;
}



/* Entry: 105ae7908; end: 105ae790b; -[SCDiscoverFeedContainerViewController onUIDidAppear:appearance:] */

void FUN_105ae7908(void)

{
  return;
}



/* Entry: 105ae790c; end: 105ae790f; -[SCDiscoverFeedContainerViewController onUIWillDisappear:appearance:] */

void FUN_105ae790c(void)

{
  return;
}



/* Entry: 105ae7910; end: 105ae7913; -[SCDiscoverFeedContainerViewController onUIDidDisappear:appearance:] */

void FUN_105ae7910(void)

{
  return;
}



/* Entry: 105ae7914; end: 105ae7927; -[SCDiscoverFeedContainerViewController onUIDidExitHierarchy:appearance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ae7914(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272f55c),PTR_s_dismissWithInteractionType__1125becf0,
             0x10);
  return;
}



/* Entry: 105ae7928; end: 105ae7937; -[SCDiscoverFeedContainerViewController headerItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ae7928(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272f5a0);
}



/* Entry: 105ae7938; end: 105ae7957; -[SCDiscoverFeedContainerViewController customStatusBarStyleContextController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ae7938(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11272f694);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ae7958; end: 105ae796b; -[SCDiscoverFeedContainerViewController setCustomStatusBarStyleContextController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ae7958(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11272f694,param_3);
  return;
}



/* Entry: 105ae796c; end: 105ae798b; -[SCDiscoverFeedContainerViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ae796c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11272f6a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ae798c; end: 105ae799f; -[SCDiscoverFeedContainerViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ae798c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11272f6a0,param_3);
  return;
}



/* Entry: 105ae79a0; end: 105ae7f9f; -[SCDiscoverFeedContainerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ae79a0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272f6a0);
  _objc_destroyWeak(param_1 + _DAT_11272f694);
  _objc_storeStrong(param_1 + _DAT_11272f5a0,0);
  _objc_storeStrong(param_1 + _DAT_11272f690,0);
  _objc_storeStrong(param_1 + _DAT_11272f68c,0);
  _objc_storeStrong(param_1 + _DAT_11272f688,0);
  _objc_storeStrong(param_1 + _DAT_11272f684,0);
  _objc_storeStrong(param_1 + _DAT_11272f680,0);
  _objc_storeStrong(param_1 + _DAT_11272f67c,0);
  _objc_storeStrong(param_1 + _DAT_11272f678,0);
  _objc_storeStrong(param_1 + _DAT_11272f674,0);
  _objc_storeStrong(param_1 + _DAT_11272f670,0);
  _objc_storeStrong(param_1 + _DAT_11272f66c,0);
  _objc_storeStrong(param_1 + _DAT_11272f698,0);
  _objc_storeStrong(param_1 + _DAT_11272f668,0);
  _objc_storeStrong(param_1 + _DAT_11272f664,0);
  _objc_storeStrong(param_1 + _DAT_11272f660,0);
  _objc_storeStrong(param_1 + _DAT_11272f65c,0);
  _objc_storeStrong(param_1 + _DAT_11272f658,0);
  _objc_storeStrong(param_1 + _DAT_11272f650,0);
  _objc_destroyWeak(param_1 + _DAT_11272f654);
  _objc_storeStrong(param_1 + _DAT_11272f64c,0);
  _objc_storeStrong(param_1 + _DAT_11272f648,0);
  _objc_storeStrong(param_1 + _DAT_11272f644,0);
  _objc_storeStrong(param_1 + _DAT_11272f634,0);
  _objc_storeStrong(param_1 + _DAT_11272f640,0);
  _objc_storeStrong(param_1 + _DAT_11272f63c,0);
  _objc_storeStrong(param_1 + _DAT_11272f630,0);
  _objc_storeStrong(param_1 + _DAT_11272f62c,0);
  _objc_storeStrong(param_1 + _DAT_11272f628,0);
  _objc_storeStrong(param_1 + _DAT_11272f624,0);
  _objc_storeStrong(param_1 + _DAT_11272f620,0);
  _objc_storeStrong(param_1 + _DAT_11272f61c,0);
  _objc_storeStrong(param_1 + _DAT_11272f618,0);
  _objc_storeStrong(param_1 + _DAT_11272f614,0);
  _objc_storeStrong(param_1 + _DAT_11272f610,0);
  _objc_storeStrong(param_1 + _DAT_11272f60c,0);
  _objc_storeStrong(param_1 + _DAT_11272f608,0);
  _objc_destroyWeak(param_1 + _DAT_11272f600);
  _objc_destroyWeak(param_1 + _DAT_11272f5fc);
  _objc_destroyWeak(param_1 + _DAT_11272f5f8);
  _objc_storeStrong(param_1 + _DAT_11272f5f4,0);
  _objc_storeStrong(param_1 + _DAT_11272f604,0);
  _objc_storeStrong(param_1 + _DAT_11272f5f0,0);
  _objc_storeStrong(param_1 + _DAT_11272f5ec,0);
  _objc_storeStrong(param_1 + _DAT_11272f5e8,0);
  _objc_storeStrong(param_1 + _DAT_11272f5e4,0);
  _objc_storeStrong(param_1 + _DAT_11272f5e0,0);
  _objc_storeStrong(param_1 + _DAT_11272f5dc,0);
  _objc_storeStrong(param_1 + _DAT_11272f5d8,0);
  _objc_storeStrong(param_1 + _DAT_11272f5d4,0);
  _objc_storeStrong(param_1 + _DAT_11272f5d0,0);
  _objc_storeStrong(param_1 + _DAT_11272f5cc,0);
  _objc_storeStrong(param_1 + _DAT_11272f5c8,0);
  _objc_storeStrong(param_1 + _DAT_11272f5c4,0);
  _objc_storeStrong(param_1 + _DAT_11272f5c0,0);
  _objc_storeStrong(param_1 + _DAT_11272f5bc,0);
  _objc_destroyWeak(param_1 + _DAT_11272f5b8);
  _objc_storeStrong(param_1 + _DAT_11272f5b4,0);
  _objc_storeStrong(param_1 + _DAT_11272f5b0,0);
  _objc_storeStrong(param_1 + _DAT_11272f59c,0);
  _objc_storeStrong(param_1 + _DAT_11272f69c,0);
  _objc_storeStrong(param_1 + _DAT_11272f5ac,0);
  _objc_storeStrong(param_1 + _DAT_11272f5a4,0);
  _objc_storeStrong(param_1 + _DAT_11272f598,0);
  _objc_storeStrong(param_1 + _DAT_11272f594,0);
  _objc_storeStrong(param_1 + _DAT_11272f590,0);
  _objc_storeStrong(param_1 + _DAT_11272f58c,0);
  _objc_storeStrong(param_1 + _DAT_11272f588,0);
  _objc_storeStrong(param_1 + _DAT_11272f584,0);
  _objc_storeStrong(param_1 + _DAT_11272f580,0);
  _objc_storeStrong(param_1 + _DAT_11272f57c,0);
  _objc_storeStrong(param_1 + _DAT_11272f638,0);
  _objc_storeStrong(param_1 + _DAT_11272f578,0);
  _objc_storeStrong(param_1 + _DAT_11272f574,0);
  _objc_storeStrong(param_1 + _DAT_11272f570,0);
  _objc_storeStrong(param_1 + _DAT_11272f56c,0);
  _objc_storeStrong(param_1 + _DAT_11272f568,0);
  _objc_storeStrong(param_1 + _DAT_11272f564,0);
  _objc_storeStrong(param_1 + _DAT_11272f560,0);
  _objc_storeStrong(param_1 + _DAT_11272f55c,0);
  _objc_storeStrong(param_1 + _DAT_11272f558,0);
  _objc_storeStrong(param_1 + _DAT_11272f5a8,0);
  _objc_storeStrong(param_1 + _DAT_11272f554,0);
  _objc_storeStrong(param_1 + _DAT_11272f550,0);
  _objc_storeStrong(param_1 + _DAT_11272f54c,0);
  _objc_storeStrong(param_1 + _DAT_11272f548,0);
  _objc_storeStrong(param_1 + _DAT_11272f544,0);
  _objc_storeStrong(param_1 + _DAT_11272f540,0);
  _objc_storeStrong(param_1 + _DAT_11272f53c,0);
  _objc_storeStrong(param_1 + _DAT_11272f538,0);
  _objc_destroyWeak(param_1 + _DAT_11272f534);
  _objc_storeStrong(param_1 + _DAT_11272f530,0);
  _objc_storeStrong(param_1 + _DAT_11272f52c,0);
  _objc_storeStrong(param_1 + _DAT_11272f528,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272f524,0);
  return;
}



/* Entry: 105ae7fa0; end: 105ae8117; -[SCDiscoverFeedPaginationController initWithDataFetcher:queryResultController:datasourceResetEnabled:storiesGrapheneMetricsEmitter:] */

undefined1 *
FUN_105ae7fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126ebce0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + 0x28) = param_5;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar4);
    if (*(char *)((long)puVar1 + 0x28) == '\x01') {
      func_0x00010bef9980(*(undefined8 *)((long)puVar1 + 0x18));
    }
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ae8118; end: 105ae816f; -[SCDiscoverFeedPaginationController dealloc] */

void FUN_105ae8118(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x00010c12cf80(*(undefined8 *)(param_1 + 0x18),param_2,param_1);
  }
  puStack_28 = PTR_PTR_1126ebce0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105ae8170; end: 105ae824f; -[SCDiscoverFeedPaginationController startPaginationForFeedType:pageSessionId:] */

void FUN_105ae8170(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 105ae8250; end: 105ae8287;  */

void FUN_105ae8250(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be722e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ae8288; end: 105ae828b; -[SCDiscoverFeedPaginationController endPaginationIfNeededForQuery:] */

void FUN_105ae8288(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be72570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__performRemovalOfPendingPaginati_11257a2f8);
  return;
}



/* Entry: 105ae828c; end: 105ae8423; -[SCDiscoverFeedPaginationController _performPaginationForFeedType:pageSessionId:] */

void FUN_105ae828c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  uVar6 = *(ulong *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar6,param_2,puVar1);
  _objc_release(puVar1);
  if ((uVar6 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010bf009e0(lVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar3 == 0) {
      func_0x00010c0a5260(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c1559e0(uVar4,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010bfd9420();
    _objc_release(uVar4);
    if ((int)uVar7 != 0) {
      uVar7 = *(undefined8 *)(param_1 + 8);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar7,param_2,puVar1);
      _objc_release(puVar1);
      func_0x00010be64740(param_1,param_2,param_3,1);
      puVar1 = PTR_PTR_1126b1158;
      _objc_alloc(PTR_PTR_1126b1158);
      puVar5 = PTR_PTR_1126c2130;
      _objc_alloc(PTR_PTR_1126c2130);
      func_0x00010c012700();
      func_0x00010c03c440(puVar1,param_2,&PTR____CFConstantStringClassReference_110e655d8,0,0,0,
                          puVar5);
      func_0x00010c1e6360(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
      _objc_release(puVar1);
      _objc_release(puVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105ae8424; end: 105ae8583; -[SCDiscoverFeedPaginationController _performRemovalOfPendingPaginationWithQuery:] */

void FUN_105ae8424(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [8];
  ulong uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2130;
  _objc_opt_class(PTR_PTR_1126c2130);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    uVar4 = param_3;
    func_0x00010c11d960();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    if ((int)uVar5 != 0) {
      func_0x00010bfa4340();
      _objc_initWeak(auStack_48,param_1);
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      _objc_copyWeak(auStack_58,auStack_48);
      uStack_50 = uVar2;
      func_0x00010c0f7fc0(uVar6);
      _objc_destroyWeak(auStack_58);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105ae8584; end: 105ae85b7;  */

void FUN_105ae8584(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8cd40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ae85b8; end: 105ae866f; -[SCDiscoverFeedPaginationController _removePendingPagination:] */

void FUN_105ae85b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(puVar1);
  if (iVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360(uVar3);
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be64750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__notifyDelegateForFeedType_inFli_112576b70,param_3,0);
    return;
  }
  return;
}



/* Entry: 105ae8670; end: 105ae86bf; -[SCDiscoverFeedPaginationController _notifyDelegateForFeedType:inFlight:] */

void FUN_105ae8670(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c1563c0(param_1,param_2,param_4,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ae86c0; end: 105ae883f; -[SCDiscoverFeedPaginationController didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_105ae86c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [8];
  ulong uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar5 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar5 != 0) {
    uVar2 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    if (uVar1 != 0) {
      func_0x00010c2827c0();
      _objc_initWeak(auStack_58,param_1);
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      _objc_copyWeak(auStack_68,auStack_58);
      uStack_60 = uVar2;
      func_0x00010c0f7fc0(uVar5);
      _objc_destroyWeak(auStack_68);
      _objc_destroyWeak(auStack_58);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ae8840; end: 105ae88bf;  */

void FUN_105ae8840(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 8);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x28)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar3,param_2,puVar2);
    _objc_release(puVar2);
    if ((int)uVar3 != 0) {
      func_0x00010be8cd40(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ae88c0; end: 105ae88d7; -[SCDiscoverFeedPaginationController delegate] */

void FUN_105ae88c0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ae88d8; end: 105ae88e3; -[SCDiscoverFeedPaginationController setDelegate:] */

void FUN_105ae88d8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 105ae88e4; end: 105ae893f; -[SCDiscoverFeedPaginationController .cxx_destruct] */

void FUN_105ae88e4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ae8940; end: 105ae89cf; -[SCDiscoverFeedTileOnScrollAnimator initWithDiscoverFeedEventsLogger:] */

undefined1 * FUN_105ae8940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ebce8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ae89d0; end: 105ae8acb; -[SCDiscoverFeedTileOnScrollAnimator collectionViewWillAppear:] */

void FUN_105ae89d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
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
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar2 = *plStack_100;
    do {
      lVar3 = 0;
      do {
        if (*plStack_100 != lVar2) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010be78120(param_1,param_2,*(undefined8 *)(lStack_108 + lVar3 * 8));
        lVar3 = lVar3 + 1;
      } while (lVar1 != lVar3);
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bddd5e0();
  return;
}



/* Entry: 105ae8acc; end: 105ae8b1b; -[SCDiscoverFeedTileOnScrollAnimator _prepareCellForAnimationIfNeeded:] */

void FUN_105ae8acc(void)

{
  func_0x00010bddd5e0();
  return;
}



/* Entry: 105ae8b1c; end: 105ae8bd7;  */

void FUN_105ae8b1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c259740(param_3);
  func_0x00010c0df880(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(puVar1);
  if ((uVar3 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010c0e62e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c109480(param_2);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ae8bd8; end: 105ae8bdb; -[SCDiscoverFeedTileOnScrollAnimator collectionViewDidAppear:] */

void FUN_105ae8bd8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcb430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__animateVisibleCells__1125506a8);
  return;
}



/* Entry: 105ae8bdc; end: 105ae8bdf; -[SCDiscoverFeedTileOnScrollAnimator collectionViewDidRefresh:] */

void FUN_105ae8bdc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcb430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__animateVisibleCells__1125506a8);
  return;
}



/* Entry: 105ae8be0; end: 105ae8be3; -[SCDiscoverFeedTileOnScrollAnimator collectionViewDidScroll:] */

void FUN_105ae8be0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcb430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__animateVisibleCells__1125506a8);
  return;
}



/* Entry: 105ae8be4; end: 105ae8d27; -[SCDiscoverFeedTileOnScrollAnimator _animateVisibleCells:] */

void FUN_105ae8be4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010be19e00();
  _objc_retainAutoreleasedReturnValue();
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puVar3 = &uStack_140;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar4 = *plStack_130;
    do {
      lVar5 = 0;
      do {
        if (*plStack_130 != lVar4) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010bddd5e0(param_1);
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      puVar3 = &uStack_140;
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdca9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar1 + 0x20),PTR_s__animateCell_viewModel__112550418,param_2,puVar3);
  return;
}



/* Entry: 105ae8d28; end: 105ae8d37;  */

void FUN_105ae8d28(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdca9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__animateCell_viewModel__112550418,param_2,param_3
            );
  return;
}



/* Entry: 105ae8d38; end: 105ae9063; -[SCDiscoverFeedTileOnScrollAnimator _animateCell:viewModel:] */

void FUN_105ae8d38(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar7 = *(ulong *)(param_1 + 0x10);
  func_0x00010c259740(param_4);
  func_0x00010c0df880(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(ppuVar1);
  if ((uVar7 & 1) == 0) {
    puVar2 = PTR_PTR_1126c2140;
    _objc_opt_new();
    puVar3 = PTR_PTR_1126c22b0;
    _objc_opt_new(PTR_PTR_1126c22b0);
    func_0x00010c259740(param_4);
    func_0x00010c2ba3e0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c25b720(param_4);
    func_0x00010c2ba700(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf21f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c2b67e0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_78 = &PTR____CFConstantStringClassReference_110f423f8;
    puVar3 = puVar2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar6);
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c259740(param_4);
    func_0x00010c0df880(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar5);
    _objc_release(puVar3);
    _objc_initWeak(auStack_80,param_1);
    uVar5 = param_4;
    func_0x00010c0e62e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105ae9064;
    puStack_a0 = &UNK_11085dbf8;
    ppuVar1 = &puStack_b8;
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(param_3);
    lStack_98 = param_3;
    puStack_90 = puVar2;
    func_0x00010bf02bc0(param_3);
    _objc_release(uVar5);
    _objc_release(lStack_98);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar1 + 6);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  lVar6 = param_3 + 0x30;
  _objc_loadWeakRetained(lVar6);
  uVar5 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010bf21f60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be682c0(lVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 105ae9064; end: 105ae90cb;  */

void FUN_105ae9064(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf21f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be682c0(lVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ae90cc; end: 105ae920f; -[SCDiscoverFeedTileOnScrollAnimator _onCellAnimated:loggingInfo:result:] */

void FUN_105ae90cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(undefined8 *)(param_5 + 8);
  _objc_retain(param_8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110f41818;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_68 = &PTR____CFConstantStringClassReference_110f423f8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110f41db8;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uStack_58 = param_8;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_6,param_9);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_6,&uStack_58,&ppuStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  func_0x00010bf7dbc0(uVar6,param_6,&PTR____CFConstantStringClassReference_110f41818,param_5,puVar2)
  ;
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_retain(ppuVar7);
    ppuVar3 = ppuVar7;
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_105ae937c;
    puStack_e0 = &UNK_1108d4910;
    ppuVar4 = ppuVar3;
    uStack_d8 = uVar6;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar4;
    func_0x00010bf529e0();
    ppuVar5 = (undefined **)PTR____NSArray0__struct_11034ab48;
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar3 = ppuVar7;
      func_0x00010c262ca0(ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00(ppuVar7);
      func_0x00010bf513e0(ppuVar3,param_6,ppuVar7);
      _objc_release(ppuVar3);
      puStack_140 = puVar1;
      uStack_138 = 0xc2000000;
      pcStack_130 = FUN_105ae9450;
      puStack_128 = &UNK_1108d4940;
      _objc_retain(ppuVar7);
      ppuVar5 = ppuVar4;
      ppuStack_120 = ppuVar7;
      uStack_118 = param_1;
      uStack_110 = param_2;
      uStack_108 = param_3;
      uStack_100 = param_4;
      func_0x00010bfaea20(ppuVar4,param_6,&puStack_140);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuStack_120);
    }
    _objc_release(ppuVar4);
    _objc_release(ppuVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
    return;
  }
  return;
}



/* Entry: 105ae9210; end: 105ae937b; -[SCDiscoverFeedTileOnScrollAnimator _fullyVisibleEligibleCells:] */

void FUN_105ae9210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_7);
  puVar2 = param_7;
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105ae937c;
  puStack_70 = &UNK_1108d4910;
  puVar3 = puVar2;
  uStack_68 = param_5;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010bf529e0();
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar2 = param_7;
    func_0x00010c262ca0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00(param_7);
    func_0x00010bf513e0(puVar2,param_6,param_7);
    _objc_release(puVar2);
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_105ae9450;
    puStack_b8 = &UNK_1108d4940;
    _objc_retain(param_7);
    puVar4 = puVar3;
    puStack_b0 = param_7;
    uStack_a8 = param_1;
    uStack_a0 = param_2;
    uStack_98 = param_3;
    uStack_90 = param_4;
    func_0x00010bfaea20(puVar3,param_6,&puStack_d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_b0);
  }
  _objc_release(puVar3);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105ae937c; end: 105ae943b;  */

undefined1 FUN_105ae937c(long param_1,undefined8 param_2)

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
  uStack_28 = 0;
  func_0x00010bddd5e0(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105ae943c; end: 105ae944f;  */

void FUN_105ae943c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105ae9450; end: 105ae94f3;  */

void FUN_105ae9450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_5 + 0x20);
  _objc_retain(param_6);
  func_0x00010c262ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_6);
  func_0x00010bf513e0(uVar1);
  _objc_release(param_6);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsRect_110347558)
            (*(undefined8 *)(param_5 + 0x28),*(undefined8 *)(param_5 + 0x30),
             *(undefined8 *)(param_5 + 0x38),*(undefined8 *)(param_5 + 0x40),param_1,param_2,param_3
             ,param_4);
  return;
}



/* Entry: 105ae94f4; end: 105ae9627; -[SCDiscoverFeedTileOnScrollAnimator _checkCellEligibility:callback:] */

void FUN_105ae94f4(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a4fe8);
  uVar1 = param_3;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c22b8;
  _objc_opt_class(PTR_PTR_1126c22b8);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  if (uVar2 != 0) {
    uVar5 = uVar3;
    func_0x00010c0e62e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = PTR_DAT_1126a5040;
    if (uVar5 != 0) {
      _objc_retain(param_3);
      uVar6 = param_3;
      func_0x00010010fab4(param_3,puVar4);
      uVar5 = param_3;
      if ((int)uVar6 == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(param_3);
      if (uVar5 != 0) {
        (**(code **)(param_4 + 0x10))(param_4,param_3,uVar3);
      }
      _objc_release(uVar5);
    }
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ae9628; end: 105ae962f; -[SCDiscoverFeedTileOnScrollAnimator collectionView:willDisplayCell:] */

void FUN_105ae9628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be78130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__prepareCellForAnimationIfNeeded_11257b9e8,param_4);
  return;
}



/* Entry: 105ae9630; end: 105ae9637; -[SCDiscoverFeedTileOnScrollAnimator reset] */

void FUN_105ae9630(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 105ae9638; end: 105ae9667; -[SCDiscoverFeedTileOnScrollAnimator .cxx_destruct] */

void FUN_105ae9638(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ae9668; end: 105ae98fb; -[SCDiscoverFeedViewController getStoriesAndThumbnailsVisibleBySectionWithCompletion:] */

void FUN_105ae9668(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  uVar6 = param_1;
  func_0x00010c074160();
  if ((uVar6 & 1) == 0) {
    func_0x00010bfa40e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105ae98fc;
    puStack_78 = &UNK_110849530;
    uStack_70 = param_3;
    _objc_retain(param_3);
    func_0x00010007380c(param_1,&puStack_90);
    _objc_release(param_1);
    uVar10 = uStack_70;
  }
  else {
    uVar6 = param_1;
    func_0x00010bf82420(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf4c080();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uVar8 = param_1;
    func_0x00010c083820(param_1);
    uVar9 = param_1;
    func_0x00010bf90020();
    FUN_105afcd68(uVar7,&uStack_98,&uStack_a0,&uStack_a8,&uStack_b0,&uStack_b8,&uStack_c0,uVar8,
                  (char)uVar9);
    uVar10 = uStack_98;
    _objc_retain(uStack_98);
    uVar5 = uStack_a0;
    _objc_retain(uStack_a0);
    uVar4 = uStack_a8;
    _objc_retain(uStack_a8);
    uVar3 = uStack_b0;
    _objc_retain(uStack_b0);
    uVar2 = uStack_b8;
    _objc_retain(uStack_b8);
    uVar1 = uStack_c0;
    _objc_retain(uStack_c0);
    _objc_release(uVar7);
    _objc_release(uVar6);
    func_0x00010bfa40e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_110 = 0xc2000000;
    uStack_108 = 0x105ae9920;
    puStack_100 = &UNK_110866970;
    uStack_d0 = uVar1;
    uStack_f8 = uVar10;
    uStack_f0 = uVar5;
    uStack_e8 = uVar4;
    uStack_e0 = uVar3;
    uStack_d8 = uVar2;
    uStack_c8 = param_3;
    _objc_retain(param_3);
    _objc_retain(uVar1);
    _objc_retain(uVar2);
    _objc_retain(uVar3);
    _objc_retain(uVar4);
    _objc_retain(uVar5);
    _objc_retain(uVar10);
    func_0x00010007380c(param_1,&puStack_118);
    _objc_release(param_1);
    _objc_release(uStack_d0);
    _objc_release(uStack_d8);
    _objc_release(uStack_e0);
    _objc_release(uStack_e8);
    _objc_release(uStack_f0);
    _objc_release(uStack_f8);
    _objc_release(uStack_c8);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar5);
  }
  _objc_release(uVar10);
  _objc_release(param_3);
  return;
}



/* Entry: 105ae98fc; end: 105ae993b;  */

void FUN_105ae98fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105ae991c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,0,0,0,0);
  return;
}



/* Entry: 105ae993c; end: 105ae9ab7; -[SCDiscoverFeedViewController updateUniqueStoriesAndThumbnailsVisibleBySection:visibleStoriesWithThumbnailBySection:uniqueMyStoriesVisible:uniqueMyStoriesVisibleWithThumbnailVisible:visibleSpinnersCounts:visibleSpinnersOnLeaveBySection:didScroll:scrolledSectionIdentifier:scrollTsMs:] */

void FUN_105ae993c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6,long param_7,long param_8,long param_9,char param_10,
                  undefined4 param_11,long param_12)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bee2d20(param_2,param_3,param_4);
  }
  lVar1 = param_5;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bee2d40(param_2,param_3,param_5);
  }
  if ((param_10 != '\0') && (lVar1 = param_12, func_0x00010c08fa60(), lVar1 != 0)) {
    func_0x00010bed6e20(param_1,param_2,param_3,param_12);
  }
  lVar1 = param_6;
  func_0x00010bf529e0();
  if ((lVar1 != 0) || (lVar1 = param_7, func_0x00010bf529e0(), lVar1 != 0)) {
    func_0x00010bee2d00(param_2,param_3,param_6,param_7);
  }
  lVar1 = param_8;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bee4140(param_2,param_3,param_8);
  }
  lVar1 = param_9;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bee0740(param_2,param_3,param_9);
  }
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105ae9ab8; end: 105ae9b2f; -[SCDiscoverFeedViewController _updateUniqueMyStoriesWithUniqueMyStoriesVisible:uniqueMyStoriesVisibleWithThumbnailVisible:] */

void FUN_105ae9ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010bf51e00(param_3);
  func_0x00010c21b7a0(param_1,param_2,param_3);
  _objc_release(param_3);
  uVar1 = param_4;
  func_0x00010bf51e00(param_4);
  _objc_release(param_4);
  func_0x00010c21b7c0(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ae9b30; end: 105ae9d07; -[SCDiscoverFeedViewController _updateUniqueStoriesVisibleBySectionWithNewDict:] */

void FUN_105ae9b30(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar11;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [128];
  long lStack_1b0;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_138;
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
  lVar1 = param_1;
  lStack_138 = param_1;
  func_0x00010c280660();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d3c80();
  _objc_release(lVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar1 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    unaff_x28 = *plStack_120;
    do {
      param_1 = 0;
      do {
        if (*plStack_120 != unaff_x28) {
          _objc_enumerationMutation(lVar1);
        }
        unaff_x24 = *(undefined8 *)(lStack_128 + param_1 * 8);
        unaff_x25 = param_3;
        func_0x00010c0e00e0(param_3,param_2,unaff_x24);
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = lVar2;
        func_0x00010c0e00e0(lVar2,param_2,unaff_x24);
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = unaff_x25;
        func_0x00010c174c00(unaff_x25,param_2,unaff_x26);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(lVar2,param_2,unaff_x27,unaff_x24);
        _objc_release(unaff_x27);
        _objc_release(unaff_x26);
        _objc_release(unaff_x25);
        param_1 = param_1 + 1;
      } while (lVar3 != param_1);
      lVar3 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
      unaff_x23 = 0;
    } while (lVar3 != 0);
  }
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf51e00();
  lVar8 = lVar1;
  func_0x00010c21b860(lStack_138);
  _objc_release(lVar1);
  _objc_release(lVar2);
  lVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_105ae9d08;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1a0 = unaff_x28;
  lStack_198 = unaff_x27;
  lStack_190 = unaff_x26;
  lStack_188 = unaff_x25;
  uStack_180 = unaff_x24;
  uStack_178 = unaff_x23;
  lStack_170 = lVar1;
  lStack_168 = lVar2;
  lStack_160 = param_1;
  lStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(lVar8);
  lVar1 = lVar3;
  func_0x00010c280680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d3c80();
  _objc_release(lVar1);
  uVar13 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  lVar1 = lVar8;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar12 = *plStack_260;
    do {
      lVar10 = 0;
      do {
        if (*plStack_260 != lVar12) {
          _objc_enumerationMutation(lVar1);
        }
        uVar11 = *(undefined8 *)(lStack_268 + lVar10 * 8);
        lVar5 = lVar8;
        func_0x00010c0e00e0(lVar8,param_2,uVar11);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar2;
        func_0x00010c0e00e0(lVar2,param_2,uVar11);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar5;
        func_0x00010c174c00(lVar5,param_2,lVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(lVar2,param_2,lVar7,uVar11);
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar5);
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
      lVar4 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_270,auStack_230,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf51e00();
  lVar4 = lVar1;
  func_0x00010c21b880(lVar3,param_2,lVar1);
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar4);
  lVar1 = lVar8;
  func_0x00010c152dc0(lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c174bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7de0(lVar8,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar8;
  func_0x00010bfb1b80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(uVar13,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb1b80(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(lVar8);
    _objc_release(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105ae9d08; end: 105ae9edf; -[SCDiscoverFeedViewController _updateUniqueStoriesVisibleWithThumbnailVisibleBySectionWithNewDict:] */

void FUN_105ae9d08(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
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
  uVar1 = param_1;
  func_0x00010c280680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d3c80();
  _objc_release(uVar1);
  uVar1 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar3 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lVar3);
        }
        uVar10 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        lVar5 = param_3;
        func_0x00010c0e00e0(param_3,param_2,uVar10);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar2;
        func_0x00010c0e00e0(uVar2,param_2,uVar10);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar5;
        func_0x00010c174c00(lVar5,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar2,param_2,lVar7,uVar10);
        _objc_release(lVar7);
        _objc_release(uVar6);
        _objc_release(lVar5);
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      lVar4 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(lVar3);
  uVar6 = uVar2;
  func_0x00010bf51e00();
  uVar10 = uVar6;
  func_0x00010c21b880(param_1,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar10);
  lVar3 = param_3;
  func_0x00010c152dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c174bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7de0(param_3,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010bfb1b80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar4 == 0) {
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(uVar1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb1b80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(param_3);
    _objc_release(puVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar10);
  return;
}



/* Entry: 105ae9ee0; end: 105ae9fe7; -[SCDiscoverFeedViewController _updateDidScrollBySectionWithSectionIdentifier:scrollTsMs:] */

void FUN_105ae9ee0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010c152dc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c174bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7de0(param_2,param_3,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfb1b80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb1b80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(param_2);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105ae9fe8; end: 105aea01f; -[SCDiscoverFeedViewController _updateVisibleSpinnersCountBySection:] */

void FUN_105ae9fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c223c20(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105aea020; end: 105aea057; -[SCDiscoverFeedViewController _updateSpinnerVisibleOnLeaveBySection:] */

void FUN_105aea020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c207ea0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105aea058; end: 105aea2b7; -[SCDiscoverFeedViewController incrementNumTotalStoriesViewedWithGroupDataModel:timestampMs:] */

void FUN_105aea058(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c2118;
  _objc_opt_class(PTR_PTR_1126c2118);
  uVar2 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar1);
  puVar1 = PTR_PTR_1126c2118;
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126bdd28;
    _objc_opt_class(PTR_PTR_1126bdd28);
    uVar2 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR_PTR_1126bdd30;
      _objc_opt_class(PTR_PTR_1126bdd30);
      uVar2 = param_4;
      _objc_opt_isKindOfClass(param_4,puVar1);
      if ((uVar2 & 1) == 0) goto LAB_105aea298;
      func_0x00010c0de860(param_2);
      func_0x00010c1cf660(param_2);
      puVar1 = PTR_PTR_1126bdd30;
    }
    else {
      func_0x00010c0de860(param_2);
      func_0x00010c1cf660(param_2);
      puVar1 = PTR_PTR_1126bdd28;
    }
    _objc_retain(param_4);
    _objc_opt_class(puVar1);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    uVar2 = param_4;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_4);
    func_0x00010c29d360(uVar2);
    _objc_release(uVar2);
    func_0x00010bed8220(param_1,param_2);
  }
  else {
    _objc_retain(param_4);
    _objc_opt_class(puVar1);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar1);
    uVar2 = param_4;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_4);
    _objc_retain(uVar2);
    func_0x00010c0bdf40(uVar2);
    _objc_release(uVar2);
    _objc_release(uVar2);
  }
LAB_105aea298:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105aea2b8; end: 105aea3cf;  */

void FUN_105aea2b8(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x000108538878();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (iVar1 == 0) {
    func_0x00010c0de840(uVar2);
    func_0x00010c1cf640(uVar2);
  }
  else {
    func_0x00010c0de860(uVar2);
    func_0x00010c1cf660(uVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = param_2;
  func_0x00010c29d360(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bed8230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar4,uVar3,PTR_s__updateFirstViewedTimestamp_view_112593a30,uVar2);
  return;
}



/* Entry: 105aea3d0; end: 105aea3df;  */

void FUN_105aea3d0(void)

{
  return;
}


