/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1071b9754; end: 1071b979b; -[SCPublisherStoriesDeepLinkHandler impalaPresentPublicProfileWithBusinessProfileId:isPublisherProfile:loggingInfo:presentingViewController:isNavigationStyleVertical:dismissBlock:] */

void FUN_1071b9754(long param_1)

{
  undefined *puVar1;
  
  func_0x00010bfe9fe0(*(undefined8 *)(param_1 + 0x70));
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1071b979c; end: 1071b984b; -[SCPublisherStoriesDeepLinkHandler _onFinishStoryPlayback] */

void FUN_1071b979c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c11f8;
  func_0x00010bf713c0(PTR_PTR_1126c11f8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf1f320();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7e8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__presentShowProfileForBusinessPr_11257d3c8,
               *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
    return;
  }
  return;
}



/* Entry: 1071b984c; end: 1071b984f; -[SCPublisherStoriesDeepLinkHandler operaPresenterWillBeginPresenting:transitionAnimator:] */

void FUN_1071b984c(void)

{
  return;
}



/* Entry: 1071b9850; end: 1071b9853; -[SCPublisherStoriesDeepLinkHandler operaPresenterDidFinishPresenting:transitionAnimator:] */

void FUN_1071b9850(void)

{
  return;
}



/* Entry: 1071b9854; end: 1071b9857; -[SCPublisherStoriesDeepLinkHandler operaPresenterWillBeginDismissing:transitionAnimator:] */

void FUN_1071b9854(void)

{
  return;
}



/* Entry: 1071b9858; end: 1071b985b; -[SCPublisherStoriesDeepLinkHandler operaPresenterDidCancelDismissing:] */

void FUN_1071b9858(void)

{
  return;
}



/* Entry: 1071b985c; end: 1071b985f; -[SCPublisherStoriesDeepLinkHandler operaPresenterWillBeginAnimatingToDismiss:] */

void FUN_1071b985c(void)

{
  return;
}



/* Entry: 1071b9860; end: 1071b9863; -[SCPublisherStoriesDeepLinkHandler operaPresenterDidFailToPresent:] */

void FUN_1071b9860(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be69410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onFinishStoryPlayback_112577ea0);
  return;
}



/* Entry: 1071b9864; end: 1071b9993; -[SCPublisherStoriesDeepLinkHandler operaPresenterDidFinishDismissing:] */

void FUN_1071b9864(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x48) == 0) {
      _objc_copyWeak(auStack_38,param_1 + 0xa8);
      lVar1 = param_1 + 0xa8;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bf17b00();
      _objc_release(lVar1);
      param_1 = param_1 + 0xa8;
      _objc_loadWeakRetained(param_1);
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010bf84b00(param_1);
      _objc_release(param_1);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
    else {
      func_0x00010be69400(param_1);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1071b9994; end: 1071b99bf;  */

void FUN_1071b9994(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf941a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071b99c0; end: 1071b99c3; -[SCPublisherStoriesDeepLinkHandler operaPresenterDidTearDown:] */

void FUN_1071b99c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddf8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanupOpera_1125557c8);
  return;
}



/* Entry: 1071b99c4; end: 1071b99c7; -[SCPublisherStoriesDeepLinkHandler operaPresenter:didBeginPlayingPlaylistGroupDataModel:] */

void FUN_1071b99c4(void)

{
  return;
}



/* Entry: 1071b99c8; end: 1071b99cb; -[SCPublisherStoriesDeepLinkHandler operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:] */

void FUN_1071b99c8(void)

{
  return;
}



/* Entry: 1071b99cc; end: 1071b9a17; -[SCPublisherStoriesDeepLinkHandler playbackPresenterDidTearDown:playbackScope:] */

void FUN_1071b99cc(long param_1)

{
  long lVar1;
  
  func_0x00010c0eaf20();
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x78));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1071b9a18; end: 1071b9a1b; -[SCPublisherStoriesDeepLinkHandler playbackPresenterDidFinishDismissing:playbackScope:] */

void FUN_1071b9a18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eae70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterDidFinishDismissin_1126185b0);
  return;
}



/* Entry: 1071b9a1c; end: 1071b9a1f; -[SCPublisherStoriesDeepLinkHandler playbackPresenterDidFailToPresent:playbackScope:] */

void FUN_1071b9a1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eae50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterDidFailToPresent__1126185a8);
  return;
}



/* Entry: 1071b9a20; end: 1071b9a23; -[SCPublisherStoriesDeepLinkHandler playbackPresenterWillBeginPresenting:transitionAnimator:playbackScope:] */

void FUN_1071b9a20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eb030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterWillBeginPresentin_112618620);
  return;
}



/* Entry: 1071b9a24; end: 1071b9a27; -[SCPublisherStoriesDeepLinkHandler playbackPresenterDidFinishPresenting:transitionAnimator:playbackScope:] */

void FUN_1071b9a24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eae90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterDidFinishPresentin_1126185b8);
  return;
}



/* Entry: 1071b9a28; end: 1071b9a3f; -[SCPublisherStoriesDeepLinkHandler presentingViewController] */

void FUN_1071b9a28(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071b9a40; end: 1071b9a4b; -[SCPublisherStoriesDeepLinkHandler setPresentingViewController:] */

void FUN_1071b9a40(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa8,param_3);
  return;
}



/* Entry: 1071b9a4c; end: 1071b9c2f; -[SCPublisherStoriesDeepLinkHandler .cxx_destruct] */

void FUN_1071b9a4c(long param_1)

{
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_storeStrong(param_1 + 0xa0,0);
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



/* Entry: 1071b9c30; end: 1071b9d93;  */

undefined8 FUN_1071b9c30(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0f5820(param_1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar1;
  func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110db3b58);
  if (((int)uVar3 == 0) ||
     ((uVar3 = uVar2,
      func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110e60d38),
      (uVar3 & 1) == 0 &&
      (uVar3 = uVar2,
      func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110e17458),
      (uVar3 & 1) == 0)))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 1071b9d94; end: 1071b9e5f;  */

undefined8 FUN_1071b9d94(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0720c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1071b9e60; end: 1071ba1f7;  */

bool FUN_1071b9e60(ulong param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar2 = param_1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  if ((((int)uVar3 == 0) || (uVar3 = param_1, FUN_1071b9c30(), (uVar3 & 1) != 0)) ||
     (uVar3 = param_1, func_0x0001071b9cec(), (int)uVar3 != 0)) {
    lVar4 = param_2;
    func_0x00010c0e00e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar4 != 0;
    _objc_release();
  }
  else {
    bVar1 = true;
  }
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 1071ba1f8; end: 1071bb28f; -[SCDiscoverFeedDeeplinkHandler initWithUserSession:navigationServices:circumstanceEngine:insertionServices:contextOperaPluginProvider:commerceOperaAttachmentPluginProvider:commerceOperaScreenshopPluginProvider:legacyStoriesTooltipsService:snapchattersSynchronousDataFetcher:contentDelivery:creatorSettingsFetcher:lazyDiscoverFeedEventsController:lazyDiscoverFeedDataFetcher:notificationPool:friendProfileScopeExposer:grapheneRegistry:bitmojiFriendAvatarProvider:bitmojiAvatarProvider:bitmojiImageFetcher:userBlizzardLogger:storiesReadReceiptCoordinator:discoverPublisherPagePropertiesManager:storiesMediaCoordinating:snapchattersDataFetcher:snapchatterPublicInfoFetcher:adConfigProvider:remoteStoriesDataProvider:storiesCachedReadReceiptViewStateProvider:mixerNetworkRequester:impalaLegacyServices:snapDocConfigurer:businessProfilesPresenterScopeExposer:playbackMediaPrefetcher:impalaOperaLayerViewControllerProviderCreator:offPlatformLinkGenerationService:grapheneServices:creatorSettingsMutator:creatorSettingsTracker:legacyLongformMediaUrlProvider:imageDownloader:snapDocMediaResolver:notificationsPermissionRequester:notificationOSSettingsRetriever:networkConnectivityMonitorServices:locationProvider:legacyMediaFetcher:impalaPublicProfilePresentationHandler:lazyDiscoverFeedInteractionHistoryManager:sendToScopeLauncher:discoverFeedDataMutator:discoverFeedNotificationOptInRequestManager:snapVideoFilterFactory:previewVideoProviderServices:deeplinkSendToScopeExposer:sendToScopeExposer:premiumStoryShareSender:premiumStoryConversationResolver:adPluginProvider:adInternalErrorMetricsManager:safetyReportScopeExposer:contentObjectResolver:externalLinkSendingService:safeBrowsingAPI:operaSessionScopeExposer:operaSessionScopeServices:grapheneMetricsEmitter:spotlightRepliesScopeExposer:saveFriendStoryOperaPluginProvider:subscriptionWorkflowStarter:bloopsReportScopeExposer:snapTokenProvider:contentPlaybackScopeExposer:contentProductPlaybackScopeServices:offPlatformShareServices:storiesExperimentServices:storiesMetricServices:repliesViewCountManager:addFriendSheetScopeExposer:addFriendSheetScopeServices:spotlightShareSender:spotlightPlatformAnalyticsCreator:adRenderDataParser:discoverFeedFriendStoriesDataCoordinator:discoverFeedActionHandler:storiesSyncNetworkRequester:countryCodeProvider:discoverBlizzardLogger:pageLauncher:] */

undefined8 *
FUN_1071ba1f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
             undefined8 param_69,undefined8 param_70)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(in_stack_00000270);
  _objc_retain(in_stack_00000278);
  _objc_retain(in_stack_00000280);
  _objc_retain(in_stack_00000288);
  puStack_70 = PTR_PTR_1126f8b50;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x61,param_4);
    _objc_retain(param_31);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[6];
    puVar1[6] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_42;
    _objc_release(uVar2);
    _objc_retain(param_43);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_43;
    _objc_release(uVar2);
    _objc_retain(param_44);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_45;
    _objc_release(uVar2);
    _objc_retain(param_46);
    uVar2 = puVar1[0x37];
    puVar1[0x37] = param_46;
    _objc_release(uVar2);
    _objc_retain(param_47);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_47;
    _objc_release(uVar2);
    _objc_retain(param_48);
    uVar2 = puVar1[0x39];
    puVar1[0x39] = param_48;
    _objc_release(uVar2);
    _objc_retain(param_49);
    uVar2 = puVar1[0x3a];
    puVar1[0x3a] = param_49;
    _objc_release(uVar2);
    _objc_retain(param_50);
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = param_50;
    _objc_release(uVar2);
    _objc_retain(param_51);
    uVar2 = puVar1[0x3c];
    puVar1[0x3c] = param_51;
    _objc_release(uVar2);
    _objc_retain(param_52);
    uVar2 = puVar1[0x3d];
    puVar1[0x3d] = param_52;
    _objc_release(uVar2);
    _objc_retain(param_53);
    uVar2 = puVar1[0x3e];
    puVar1[0x3e] = param_53;
    _objc_release(uVar2);
    _objc_retain(param_54);
    uVar2 = puVar1[0x3f];
    puVar1[0x3f] = param_54;
    _objc_release(uVar2);
    _objc_retain(param_55);
    uVar2 = puVar1[0x40];
    puVar1[0x40] = param_55;
    _objc_release(uVar2);
    _objc_retain(param_56);
    uVar2 = puVar1[0x41];
    puVar1[0x41] = param_56;
    _objc_release(uVar2);
    _objc_retain(param_57);
    uVar2 = puVar1[0x42];
    puVar1[0x42] = param_57;
    _objc_release(uVar2);
    _objc_retain(param_58);
    uVar2 = puVar1[0x43];
    puVar1[0x43] = param_58;
    _objc_release(uVar2);
    _objc_retain(param_59);
    uVar2 = puVar1[0x44];
    puVar1[0x44] = param_59;
    _objc_release(uVar2);
    _objc_retain(param_60);
    uVar2 = puVar1[0x45];
    puVar1[0x45] = param_60;
    _objc_release(uVar2);
    _objc_retain(param_61);
    uVar2 = puVar1[0x46];
    puVar1[0x46] = param_61;
    _objc_release(uVar2);
    _objc_retain(param_62);
    uVar2 = puVar1[0x47];
    puVar1[0x47] = param_62;
    _objc_release(uVar2);
    _objc_retain(param_63);
    uVar2 = puVar1[0x48];
    puVar1[0x48] = param_63;
    _objc_release(uVar2);
    _objc_retain(param_64);
    uVar2 = puVar1[0x49];
    puVar1[0x49] = param_64;
    _objc_release(uVar2);
    _objc_retain(param_65);
    uVar2 = puVar1[0x4a];
    puVar1[0x4a] = param_65;
    _objc_release(uVar2);
    _objc_retain(param_66);
    uVar2 = puVar1[0x4b];
    puVar1[0x4b] = param_66;
    _objc_release(uVar2);
    _objc_retain(param_67);
    uVar2 = puVar1[0x4c];
    puVar1[0x4c] = param_67;
    _objc_release(uVar2);
    _objc_retain(param_68);
    uVar2 = puVar1[0x4d];
    puVar1[0x4d] = param_68;
    _objc_release(uVar2);
    _objc_retain(param_69);
    uVar2 = puVar1[0x4e];
    puVar1[0x4e] = param_69;
    _objc_release(uVar2);
    _objc_retain(param_70);
    uVar2 = puVar1[0x4f];
    puVar1[0x4f] = param_70;
    _objc_release(uVar2);
    _objc_retain(in_stack_000001f0);
    uVar2 = puVar1[0x50];
    puVar1[0x50] = in_stack_000001f0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000001f8);
    uVar2 = puVar1[0x51];
    puVar1[0x51] = in_stack_000001f8;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000200);
    uVar2 = puVar1[0x52];
    puVar1[0x52] = in_stack_00000200;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000208);
    uVar2 = puVar1[0x53];
    puVar1[0x53] = in_stack_00000208;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000210);
    uVar2 = puVar1[0x54];
    puVar1[0x54] = in_stack_00000210;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000218);
    uVar2 = puVar1[0x55];
    puVar1[0x55] = in_stack_00000218;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000220);
    uVar2 = puVar1[0x56];
    puVar1[0x56] = in_stack_00000220;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000228);
    uVar2 = puVar1[0x57];
    puVar1[0x57] = in_stack_00000228;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000230);
    uVar2 = puVar1[0x58];
    puVar1[0x58] = in_stack_00000230;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000238);
    uVar2 = puVar1[0x59];
    puVar1[0x59] = in_stack_00000238;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000240);
    uVar2 = puVar1[0x5a];
    puVar1[0x5a] = in_stack_00000240;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000248);
    uVar2 = puVar1[0x5b];
    puVar1[0x5b] = in_stack_00000248;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000250);
    uVar2 = puVar1[0x5c];
    puVar1[0x5c] = in_stack_00000250;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000258);
    uVar2 = puVar1[0x5d];
    puVar1[0x5d] = in_stack_00000258;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000260);
    uVar2 = puVar1[10];
    puVar1[10] = in_stack_00000260;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000268);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = in_stack_00000268;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000270);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = in_stack_00000270;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000278);
    uVar2 = puVar1[0x5e];
    puVar1[0x5e] = in_stack_00000278;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000280);
    uVar2 = puVar1[0x5f];
    puVar1[0x5f] = in_stack_00000280;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000288);
    uVar2 = puVar1[0x60];
    puVar1[0x60] = in_stack_00000288;
    _objc_release(uVar2);
  }
  _objc_release(in_stack_00000288);
  _objc_release(in_stack_00000280);
  _objc_release(in_stack_00000278);
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1071bb290; end: 1071bb483; -[SCDiscoverFeedDeeplinkHandler initWithUserSession:navigationServices:circumstanceEngine:insertionServices:contextOperaPluginProvider:commerceOperaPluginProvider:legacyStoriesTooltipsService:snapchattersSynchronousDataFetcher:contentDelivery:creatorSettingsFetcher:lazyDiscoverFeedEventsController:lazyDiscoverFeedDataFetcher:notificationPool:grapheneRegistry:bitmojiFriendAvatarProvider:bitmojiAvatarProvider:bitmojiImageFetcher:userBlizzardLogger:storiesReadReceiptCoordinator:discoverPublisherPagePropertiesManager:storiesMediaCoordinating:snapchattersDataFetcher:adConfigProvider:remoteStoriesDataProvider:storiesCachedReadReceiptViewStateProvider:mixerNetworkRequester:impalaLegacyServices:snapDocConfigurer:businessProfilesPresenterScopeExposer:playbackMediaPrefetcher:impalaOperaLayerViewControllerProviderCreator:offPlatformLinkGenerationService:grapheneServices:creatorSettingsMutator:creatorSettingsTracker:legacyLongformMediaUrlProvider:imageDownloader:snapDocMediaResolver:notificationsPermissionRequester:notificationOSSettingsRetriever:networkConnectivityMonitorServices:locationProvider:legacyMediaFetcher:impalaPublicProfilePresentationHandler:lazyDiscoverFeedInteractionHistoryManager:sendToScopeLauncher:discoverFeedDataMutator:discoverFeedNotificationOptInRequestManager:snapVideoFilterFactory:previewVideoProviderServices:deeplinkSendToScopeExposer:sendToScopeExposer:premiumStoryShareSender:premiumStoryConversationResolver:adPluginProvider:adInternalErrorMetricsManager:safetyReportScopeExposer:contentObjectResolver:externalLinkSendingService:safeBrowsingAPI:operaSessionScopeExposer:operaSessionScopeServices:grapheneMetricsEmitter:bloopsReportScopeExposer:snapTokenProvider:contentPlaybackScopeExposer:contentProductPlaybackScopeServices:offPlatformShareServices:storiesExperimentServices:storiesMetricServices:repliesViewCountManager:addFriendSheetScopeExposer:addFriendSheetScopeServices:spotlightShareSender:spotlightPlatformAnalyticsCreator:adRenderDataParser:discoverFeedFriendStoriesDataCoordinator:discoverFeedActionHandler:storiesSyncNetworkRequester:countryCodeProvider:discoverBlizzardLogger:pageLauncher:] */

void FUN_1071bb290(void)

{
  func_0x00010c05df00();
  return;
}



/* Entry: 1071bb484; end: 1071bb5ab; -[SCDiscoverFeedDeeplinkHandler presentDeeplinkURL:additionalInfo:] */

void FUN_1071bb484(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c07ab40();
  if (iVar1 != 0) {
    func_0x00010bf84cc0(*(undefined8 *)(param_1 + 0x10));
  }
  uVar2 = param_3;
  FUN_1071b9c30();
  if ((int)uVar2 == 0) {
    uVar2 = param_3;
    func_0x0001071b9cec();
    if ((int)uVar2 == 0) {
      uVar2 = param_3;
      FUN_1071b9e60(param_3,param_4);
      if ((int)uVar2 == 0) {
        uVar2 = param_3;
        FUN_1071b9d94();
        if ((int)uVar2 != 0) {
          func_0x00010be81e00(param_1);
          goto LAB_1071bb590;
        }
        uVar2 = param_3;
        func_0x0001071b9b50();
        if ((int)uVar2 != 0) {
          func_0x00010be81b60(param_1);
          goto LAB_1071bb590;
        }
        uVar2 = param_3;
        func_0x0001071b9be8();
        if ((int)uVar2 == 0) goto LAB_1071bb590;
      }
      func_0x00010be81e20(param_1);
    }
    else {
      func_0x00010be80da0(param_1);
    }
  }
  else {
    func_0x00010be812a0(param_1);
  }
LAB_1071bb590:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071bb5ac; end: 1071bb5b3; -[SCDiscoverFeedDeeplinkHandler isPresentingStory] */

void FUN_1071bb5ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07ab50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_isPresenting_1125fc4e0);
  return;
}



/* Entry: 1071bb5b4; end: 1071bb767; -[SCDiscoverFeedDeeplinkHandler _processPublicStoriesDeepLinkWithURL:additionalInfo:] */

void FUN_1071bb5b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1 + 0x310;
  _objc_loadWeakRetained();
  lVar1 = lVar2;
  func_0x00010010fab4();
  _objc_release(lVar2);
  if ((lVar2 != 0) && ((int)lVar1 != 0)) {
    lVar2 = *(long *)(param_1 + 0x38);
    if (lVar2 == 0) {
      puVar3 = PTR_PTR_1126d5048;
      _objc_alloc();
      lVar2 = param_1;
      func_0x00010c10fd00();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c0d6b40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010c0d6760();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x2b0);
      func_0x00010c258480();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05e3e0();
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      *(undefined **)(param_1 + 0x38) = puVar3;
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(lVar4);
      _objc_release(lVar1);
      _objc_release(lVar2);
      lVar2 = *(long *)(param_1 + 0x38);
    }
    func_0x00010bfd0c00(lVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071bb768; end: 1071bb86f; -[SCDiscoverFeedDeeplinkHandler _processFriendStoriesDeepLinkWithURL:additionalInfo:] */

void FUN_1071bb768(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1 + 0x310;
  _objc_loadWeakRetained();
  lVar1 = lVar2;
  func_0x00010010fab4();
  _objc_release(lVar2);
  if ((lVar2 != 0) && ((int)lVar1 != 0)) {
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 == 0) {
      puVar3 = PTR_PTR_1126d5050;
      _objc_alloc();
      uVar4 = *(undefined8 *)(param_1 + 0x2b0);
      func_0x00010c258480(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04d380();
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      *(undefined **)(param_1 + 0x40) = puVar3;
      _objc_release(uVar5);
      _objc_release(uVar4);
      lVar2 = *(long *)(param_1 + 0x40);
    }
    func_0x00010bfd0c60(lVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071bb870; end: 1071bb9af; -[SCDiscoverFeedDeeplinkHandler _processDiscoverStoriesDeeplinkWithURL:additionalInfo:] */

void FUN_1071bb870(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1 + 0x310;
  _objc_loadWeakRetained();
  lVar1 = lVar2;
  func_0x00010010fab4();
  _objc_release(lVar2);
  if ((lVar2 != 0) && ((int)lVar1 != 0)) {
    lVar2 = *(long *)(param_1 + 0x48);
    if (lVar2 == 0) {
      puVar3 = PTR_PTR_1126d5058;
      _objc_alloc();
      uVar4 = *(undefined8 *)(param_1 + 0x2b0);
      func_0x00010c258480();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00cd00();
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      *(undefined **)(param_1 + 0x48) = puVar3;
      _objc_release(uVar5);
      _objc_release(uVar4);
      lVar2 = *(long *)(param_1 + 0x48);
    }
    func_0x00010bfd0c60(lVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071bb9b0; end: 1071bbc4f; -[SCDiscoverFeedDeeplinkHandler _processOurStoryDeepLinkWithURL:additionalInfo:] */

void FUN_1071bb9b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1 + 0x310;
  _objc_loadWeakRetained();
  lVar1 = lVar2;
  func_0x00010010fab4();
  _objc_release(lVar2);
  if ((lVar2 != 0) && ((int)lVar1 != 0)) {
    lVar2 = *(long *)(param_1 + 0x70);
    if (lVar2 == 0) {
      puVar3 = PTR_PTR_1126b1078;
      _objc_alloc();
      lVar2 = param_1;
      func_0x00010c10fd00();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c0d6b40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010c0d6760();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010c10fd00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x2b0);
      func_0x00010c258480();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05e140();
      uVar7 = *(undefined8 *)(param_1 + 0x70);
      *(undefined **)(param_1 + 0x70) = puVar3;
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar1);
      _objc_release(lVar2);
      lVar2 = *(long *)(param_1 + 0x70);
    }
    func_0x00010bfd0c20(lVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071bbc50; end: 1071bbdbf; -[SCDiscoverFeedDeeplinkHandler _processPublisherStoriesDeepLinkWithURL:additionalInfo:shouldPresentingProfile:] */

void FUN_1071bbc50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x310;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010010fab4();
  _objc_release(lVar1);
  if ((lVar1 != 0) && ((int)lVar2 != 0)) {
    lVar1 = param_1;
    if (*(long *)(param_1 + 0x68) == 0) {
      puVar3 = PTR_PTR_1126d5060;
      _objc_alloc();
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c10fd00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05e160(puVar3,*(undefined8 *)(param_1 + 0x2e8),uVar4,lVar1,
                          *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0xf0),
                          *(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x130),
                          *(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x80),
                          *(undefined8 *)(param_1 + 0x1b8),*(undefined8 *)(param_1 + 0x1c0),
                          *(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(param_1 + 0x1d0),
                          *(undefined8 *)(param_1 + 600),*(undefined8 *)(param_1 + 0x298),
                          *(undefined8 *)(param_1 + 0x2a0),*(undefined8 *)(param_1 + 0x2b0),
                          *(undefined8 *)(param_1 + 0x2b8),*(undefined8 *)(param_1 + 0x2e8));
      uVar4 = *(undefined8 *)(param_1 + 0x68);
      *(undefined **)(param_1 + 0x68) = puVar3;
      _objc_release(uVar4);
    }
    else {
      func_0x00010c10fd00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e1580(*(undefined8 *)(param_1 + 0x68));
    }
    _objc_release(lVar1);
    if (param_5 == 0) {
      func_0x00010bfd2220(*(undefined8 *)(param_1 + 0x68));
    }
    else {
      func_0x00010bfd2240();
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071bbdc0; end: 1071bbdc3; -[SCDiscoverFeedDeeplinkHandler operaPresenterWillBeginPresenting:transitionAnimator:] */

void FUN_1071bbdc0(void)

{
  return;
}



/* Entry: 1071bbdc4; end: 1071bbe1f; -[SCDiscoverFeedDeeplinkHandler operaPresenterDidFinishPresenting:transitionAnimator:] */

void FUN_1071bbdc4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b00();
  _objc_release(uVar1);
  func_0x00010c10fd00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071bbe20; end: 1071bbe23; -[SCDiscoverFeedDeeplinkHandler operaPresenterWillBeginDismissing:transitionAnimator:] */

void FUN_1071bbe20(void)

{
  return;
}



/* Entry: 1071bbe24; end: 1071bbe27; -[SCDiscoverFeedDeeplinkHandler operaPresenterDidCancelDismissing:] */

void FUN_1071bbe24(void)

{
  return;
}



/* Entry: 1071bbe28; end: 1071bbe2b; -[SCDiscoverFeedDeeplinkHandler operaPresenterWillBeginAnimatingToDismiss:] */

void FUN_1071bbe28(void)

{
  return;
}



/* Entry: 1071bbe2c; end: 1071bbe2f; -[SCDiscoverFeedDeeplinkHandler operaPresenterDidFailToPresent:] */

void FUN_1071bbe2c(void)

{
  return;
}



/* Entry: 1071bbe30; end: 1071bbf2b; -[SCDiscoverFeedDeeplinkHandler operaPresenterDidFinishDismissing:] */

void FUN_1071bbe30(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b00();
  _objc_release(uVar1);
  func_0x00010c10fd00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b00();
  _objc_release(param_1);
  return;
}



/* Entry: 1071bbf2c; end: 1071bbf67; -[SCDiscoverFeedDeeplinkHandler operaPresenterDidTearDown:] */

void FUN_1071bbf2c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071bbf68; end: 1071bbf6b; -[SCDiscoverFeedDeeplinkHandler operaPresenter:didBeginPlayingPlaylistGroupDataModel:] */

void FUN_1071bbf68(void)

{
  return;
}



/* Entry: 1071bbf6c; end: 1071bbf6f; -[SCDiscoverFeedDeeplinkHandler operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:] */

void FUN_1071bbf6c(void)

{
  return;
}



/* Entry: 1071bbf70; end: 1071bbf87; -[SCDiscoverFeedDeeplinkHandler navigationServices] */

void FUN_1071bbf70(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x308);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071bbf88; end: 1071bbf93; -[SCDiscoverFeedDeeplinkHandler setNavigationServices:] */

void FUN_1071bbf88(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x308,param_3);
  return;
}



/* Entry: 1071bbf94; end: 1071bbfab; -[SCDiscoverFeedDeeplinkHandler presentingViewController] */

void FUN_1071bbf94(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x310);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071bbfac; end: 1071bbfb7; -[SCDiscoverFeedDeeplinkHandler setPresentingViewController:] */

void FUN_1071bbfac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x310,param_3);
  return;
}



/* Entry: 1071bbfb8; end: 1071bbfbf; -[SCDiscoverFeedDeeplinkHandler adPluginProvider] */

undefined8 FUN_1071bbfb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x228);
}



/* Entry: 1071bbfc0; end: 1071bbfef; -[SCDiscoverFeedDeeplinkHandler setAdPluginProvider:] */

void FUN_1071bbfc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x228) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071bbff0; end: 1071bc497; -[SCDiscoverFeedDeeplinkHandler .cxx_destruct] */

void FUN_1071bbff0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x310);
  _objc_destroyWeak(param_1 + 0x308);
  _objc_storeStrong(param_1 + 0x300,0);
  _objc_storeStrong(param_1 + 0x2f8,0);
  _objc_storeStrong(param_1 + 0x2f0,0);
  _objc_storeStrong(param_1 + 0x2e8,0);
  _objc_storeStrong(param_1 + 0x2e0,0);
  _objc_storeStrong(param_1 + 0x2d8,0);
  _objc_storeStrong(param_1 + 0x2d0,0);
  _objc_storeStrong(param_1 + 0x2c8,0);
  _objc_storeStrong(param_1 + 0x2c0,0);
  _objc_storeStrong(param_1 + 0x2b8,0);
  _objc_storeStrong(param_1 + 0x2b0,0);
  _objc_storeStrong(param_1 + 0x2a8,0);
  _objc_storeStrong(param_1 + 0x2a0,0);
  _objc_storeStrong(param_1 + 0x298,0);
  _objc_storeStrong(param_1 + 0x290,0);
  _objc_storeStrong(param_1 + 0x288,0);
  _objc_storeStrong(param_1 + 0x280,0);
  _objc_storeStrong(param_1 + 0x278,0);
  _objc_storeStrong(param_1 + 0x270,0);
  _objc_storeStrong(param_1 + 0x268,0);
  _objc_storeStrong(param_1 + 0x260,0);
  _objc_storeStrong(param_1 + 600,0);
  _objc_storeStrong(param_1 + 0x250,0);
  _objc_storeStrong(param_1 + 0x248,0);
  _objc_storeStrong(param_1 + 0x240,0);
  _objc_storeStrong(param_1 + 0x238,0);
  _objc_storeStrong(param_1 + 0x230,0);
  _objc_storeStrong(param_1 + 0x228,0);
  _objc_storeStrong(param_1 + 0x220,0);
  _objc_storeStrong(param_1 + 0x218,0);
  _objc_storeStrong(param_1 + 0x210,0);
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_storeStrong(param_1 + 0x200,0);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
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



/* Entry: 1071bc498; end: 1071bc6cb; +[SCDiscoverFeedDeeplinkResolver resolveDeepLinkURL:requestManager:successBlock:failureBlock:] */

void FUN_1071bc498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  uVar5 = param_3;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bbf20;
  func_0x00010bdc1920(PTR_PTR_1126bbf20);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar4 = PTR___dispatch_main_q_11034be20;
  ppuVar3 = &PTR____CFConstantStringClassReference_110ea17d8;
  func_0x00010c25f1c0(param_4);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar5);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0e00e0(ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b1068;
  _objc_alloc(PTR_PTR_1126b1068);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c099720(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057c60(puVar4);
  _objc_release(uVar5);
  _objc_release(puVar1);
  (**(code **)(*(long *)(param_5 + 0x28) + 0x10))(*(long *)(param_5 + 0x28),puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar3);
  return;
}



/* Entry: 1071bc6cc; end: 1071bc79b;  */

void FUN_1071bc6cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ea17f8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b1068;
  _objc_alloc(PTR_PTR_1126b1068);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c099720(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057c60(puVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071bc79c; end: 1071bc7ab;  */

void FUN_1071bc79c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001071bc7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_3);
  return;
}



/* Entry: 1071bc7ac; end: 1071bc847; -[SCStoriesDeepLinkProcessor initWithNavigationDelegate:discoverFeedBaseDeepLinkProcessor:] */

undefined1 *
FUN_1071bc7ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8b58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1071bc848; end: 1071bc90b; -[SCStoriesDeepLinkProcessor handleOpenURL:sourceApplication:additionalInfo:] */

undefined8
FUN_1071bc848(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c074a80();
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0f5820(param_3,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    if ((int)uVar2 == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010be2d5a0(param_1,param_2,param_3,param_5);
    }
    _objc_release(uVar1);
  }
  else {
    func_0x00010be7b120(param_1,param_2,param_3,param_5);
    param_1 = 1;
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1071bc90c; end: 1071bca6f; -[SCStoriesDeepLinkProcessor _handleOpenURLForLiveFeature:additionalInfo:] */

bool FUN_1071bc90c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0 && lVar3 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    func_0x00010c1d0640(puVar4,param_2,lVar2,&PTR____CFConstantStringClassReference_110ea1858);
    puVar5 = puVar4;
    func_0x00010bf51e00(puVar4);
    func_0x00010be7b120(param_1,param_2,param_3,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar2 != 0 && lVar3 != 0;
}



/* Entry: 1071bca70; end: 1071bcaeb; -[SCStoriesDeepLinkProcessor _presentDiscoverFeedDeepLinkUrl:additionalInfo:] */

void FUN_1071bca70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c10dfe0();
  _objc_release(lVar1);
  func_0x00010bfd1b60(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071bcaec; end: 1071bcb17; -[SCStoriesDeepLinkProcessor .cxx_destruct] */

void FUN_1071bcaec(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1071bcb18; end: 1071bcc33; -[SCStoryDeeplinkHandler initWithURL:additionalInfo:userSession:] */

undefined1 *
FUN_1071bcb18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f8b60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_5);
    func_0x00010c1bef20(puVar1);
    func_0x00010be94ae0(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1071bcc34; end: 1071bcdaf; -[SCStoryDeeplinkHandler _wasDeniedDeepLinkingWithError:] */

void FUN_1071bcc34(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc3e98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3e98,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e1c718;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c718,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126af180;
  ppuVar4 = &PTR____CFConstantStringClassReference_110dae6f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dae6f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(puVar1);
  func_0x00010c1bef20(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1071bcdb0; end: 1071bcdb3;  */

void FUN_1071bcdb0(void)

{
  return;
}



/* Entry: 1071bcdb4; end: 1071bcdbb; -[SCStoryDeeplinkHandler _deeplinkValidationDidFail] */

void FUN_1071bcdb4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1bef30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setLoadingState__11264d5f0,3);
  return;
}



/* Entry: 1071bcdbc; end: 1071bce23; -[SCStoryDeeplinkHandler currentLoadingProperties] */

void FUN_1071bcdbc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2340;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09d280(puVar1,param_2,uVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1071bce24; end: 1071bcedb; -[SCStoryDeeplinkHandler resolvedDataModels] */

undefined * FUN_1071bce24(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010bfb8ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (lVar1 != 0) {
    func_0x00010bfb8ba0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_30 = param_1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_30,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    return (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return puVar2;
}



/* Entry: 1071bcedc; end: 1071bcee3; -[SCStoryDeeplinkHandler firstDisplayGroupDataModel] */

undefined8 FUN_1071bcedc(void)

{
  return 0;
}



/* Entry: 1071bcee4; end: 1071bcee7; -[SCStoryDeeplinkHandler fetchPlaylist] */

void FUN_1071bcee4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be94af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resolveHttpsURLIfNecessary_112582c58);
  return;
}



/* Entry: 1071bcee8; end: 1071bcfb7; -[SCStoryDeeplinkHandler _resolveHttpsURLIfNecessary] */

void FUN_1071bcee8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  _objc_opt_class();
  uVar4 = *(undefined8 *)(param_1 + 8);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c135d00();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1071bcfb8;
  puStack_50 = &UNK_110991728;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1071bd01c;
  puStack_78 = &UNK_110849810;
  lStack_70 = param_1;
  lStack_48 = param_1;
  func_0x00010c13adc0(lVar1,param_2,uVar4,lVar3,&puStack_68,&puStack_90);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 1071bcfb8; end: 1071bd01b;  */

void FUN_1071bcfb8(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  if (param_2 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x18);
    *(long *)(lVar2 + 0x18) = param_2;
    _objc_release(uVar1);
    lVar2 = *(long *)(param_1 + 0x20);
  }
  func_0x00010beea8e0(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071bd01c; end: 1071bd023;  */

void FUN_1071bd01c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf9130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__deeplinkValidationDidFail_11255bde8);
  return;
}



/* Entry: 1071bd024; end: 1071bd20b; +[SCStoryDeeplinkHandler resolveStoriesURL:requestManager:successBlock:failureBlock:] */

void FUN_1071bd024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1071bd134;
  puStack_50 = &UNK_110991560;
  _objc_retain(param_5);
  uStack_48 = param_5;
  _objc_retain(param_3);
  ppuVar1 = &puStack_68;
  _objc_retainBlock();
  uVar2 = param_3;
  func_0x00010c074a80();
  if ((int)uVar2 == 0) {
    (*(code *)ppuVar1[2])(ppuVar1,param_3);
  }
  else {
    func_0x00010c13a760(PTR_PTR_1126d5038);
  }
  _objc_release(param_3);
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1071bd20c; end: 1071bd213; -[SCStoryDeeplinkHandler loadingState] */

undefined8 FUN_1071bd20c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1071bd214; end: 1071bd25b; -[SCStoryDeeplinkHandler setLoadingState:] */

void FUN_1071bd214(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0x10) == param_3) {
    return;
  }
  *(long *)(param_1 + 0x10) = param_3;
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09d3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071bd25c; end: 1071bd263; -[SCStoryDeeplinkHandler friendStories] */

undefined8 FUN_1071bd25c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1071bd264; end: 1071bd26b; -[SCStoryDeeplinkHandler username] */

undefined8 FUN_1071bd264(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1071bd26c; end: 1071bd283; -[SCStoryDeeplinkHandler delegate] */

void FUN_1071bd26c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071bd284; end: 1071bd28f; -[SCStoryDeeplinkHandler setDelegate:] */

void FUN_1071bd284(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 1071bd290; end: 1071bd2e7; -[SCStoryDeeplinkHandler .cxx_destruct] */

void FUN_1071bd290(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1071bd2e8; end: 1071bd347; -[SCLegacyPermissionRequestDecoratorEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071bd2e8(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = (long)_DAT_11276514c;
  func_0x00010bf3bbc0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c12a9e0(*(undefined8 *)(param_1 + lVar1));
  puStack_28 = PTR_PTR_1126f8b68;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071bd348; end: 1071bd3cb; -[SCLegacyPermissionRequestDecoratorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071bd348(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112765148);
  _objc_destroyWeak(param_1 + _DAT_112765160);
  _objc_destroyWeak(param_1 + _DAT_112765164);
  _objc_destroyWeak(param_1 + _DAT_11276515c);
  _objc_destroyWeak(param_1 + _DAT_112765158);
  _objc_destroyWeak(param_1 + _DAT_112765154);
  _objc_destroyWeak(param_1 + _DAT_112765150);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276514c,0);
  return;
}



/* Entry: 1071bd3cc; end: 1071bd42b; -[SCLegacyPermissionRequestEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071bd3cc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112765168,0);
  _objc_destroyWeak(param_1 + _DAT_112765170);
  _objc_destroyWeak(param_1 + _DAT_112765178);
  _objc_destroyWeak(param_1 + _DAT_11276516c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112765174);
  return;
}



/* Entry: 1071bd42c; end: 1071bd4bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071bd42c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126d5080;
    _objc_alloc(PTR_PTR_1126d5080);
    lVar1 = param_1 + _DAT_112765184;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c04cb40(puVar2,param_2,lVar1,param_1);
    _objc_release(lVar1);
    func_0x00010be60560(param_1,param_2,puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1071bd4bc; end: 1071bd65f; -[SCRequestManagerPermissionEntryPoint _migrateToUserStatus:] */

void FUN_1071bd4bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  FUN_1071bd660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c157520();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 != 0) {
    func_0x00010c0a7ba0(param_3);
    uVar1 = param_1;
    FUN_1071bd660(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f9b80();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  FUN_1071bd660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c157540();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 != 0) {
    func_0x00010c0a7bc0(param_3);
    FUN_1071bd660(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f9ba0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071bd660; end: 1071bd683;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071bd660(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112765194);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071bd684; end: 1071bd68b; -[SCRequestManagerPermissionEntryPoint isLoggedIn] */

undefined8 FUN_1071bd684(void)

{
  return 1;
}



/* Entry: 1071bd68c; end: 1071bd763; -[SCRequestManagerPermissionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071bd68c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276518c,0);
  _objc_storeStrong(param_1 + _DAT_112765188,0);
  _objc_storeStrong(param_1 + _DAT_112765180,0);
  _objc_destroyWeak(param_1 + _DAT_11276517c);
  _objc_destroyWeak(param_1 + _DAT_112765194);
  _objc_destroyWeak(param_1 + _DAT_112765184);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112765190);
  return;
}



/* Entry: 1071bd764; end: 1071bd7c3; -[SCPermissionRequestManager removeActiveUserSessionScopeDependencies] */

void FUN_1071bd764(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071bd7c4; end: 1071bd893; -[SCPermissionRequestManager requestContacts:] */

void FUN_1071bd7c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1071bd894;
  puStack_50 = &UNK_1109917b8;
  _objc_copyWeak(auStack_48,auStack_38);
  ppuVar1 = &puStack_68;
  uStack_40 = param_3;
  _objc_retainBlock(ppuVar1);
  func_0x00010bdc8060(param_1);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1071bd894; end: 1071bd8f7;  */

void FUN_1071bd894(long param_1,long param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be90c40();
  _objc_release(param_1);
  (**(code **)(param_2 + 0x10))(param_2,0,5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071bd8f8; end: 1071bd93b; -[SCPermissionRequestManager _requestContactsFromAdditionalServicesPermissions:] */

void FUN_1071bd8f8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c134840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1071bd93c; end: 1071bd943; -[SCPermissionRequestManager _isNewUser] */

void FUN_1071bd93c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c073d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_isFromRegistration_1125fa970);
  return;
}



/* Entry: 1071bd944; end: 1071bda7b; -[SCPermissionRequestManager requestAdsTrackingUsage] */

void FUN_1071bd944(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  ulong uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  ppuVar5 = &puStack_70;
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8f4a0();
  if (((int)uVar2 != 0) &&
     ((uVar2 = uVar1, func_0x00010bf8f4c0(), (uVar2 & 1) != 0 ||
      (lVar3 = param_1, func_0x00010be423a0(), (int)lVar3 != 0)))) {
    puVar4 = PTR_PTR_1126c5350;
    func_0x00010c0db820();
    if ((int)puVar4 != 0) {
      _objc_initWeak(auStack_38,param_1);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_1071bda7c;
      puStack_58 = &UNK_1109917e8;
      _objc_copyWeak(auStack_48,auStack_38);
      uStack_40 = 1;
      _objc_retain(uVar1);
      uStack_50 = uVar1;
      _objc_retainBlock(&puStack_70);
      func_0x00010bdc8060(param_1);
      _objc_release(ppuVar5);
      _objc_release(uStack_50);
      _objc_destroyWeak(auStack_48);
      _objc_destroyWeak(auStack_38);
    }
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 1071bda7c; end: 1071bdb37;  */

void FUN_1071bda7c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar2 = PTR_PTR_1126c5350;
    func_0x00010c0db820();
    puVar1 = PTR_PTR_1126c5350;
    if ((int)puVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c136cc0(puVar1);
      _objc_release(uVar3);
    }
    (**(code **)(param_2 + 0x10))(param_2,0,6);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071bdb38; end: 1071bdc77; -[SCPermissionRequestManager requestCameraWithCompletionHandler:] */

void FUN_1071bdb38(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar3 = &puStack_60;
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0831c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    if (param_3 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c083180();
      _objc_release(uVar4);
      (**(code **)(param_3 + 0x10))(param_3,uVar5);
    }
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1071bdc78;
    puStack_48 = &UNK_110991818;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retainBlock(&puStack_60);
    func_0x00010bdc8060(param_1);
    _objc_release(ppuVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1071bdc78; end: 1071bddab;  */

void FUN_1071bdc78(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0831c0();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar2 == 0) {
      uVar2 = uVar1;
      func_0x00010c083180(uVar1);
      _objc_release(uVar1);
      (**(code **)(param_2 + 0x10))(param_2,uVar2,1);
    }
    else {
      _objc_retain(param_2);
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1347c0(uVar1);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(param_2);
    }
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1071bddac; end: 1071bde23;  */

void FUN_1071bddac(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1071bde24;
  puStack_38 = &UNK_11084a9b8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_28 = param_2;
  _objc_retain(uVar1);
  uStack_30 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  return;
}



/* Entry: 1071bde24; end: 1071bde3b;  */

void FUN_1071bde24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001071bde38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28),1);
  return;
}



/* Entry: 1071bde3c; end: 1071bdf4f; -[SCPermissionRequestManager requestNotificationsWithCompletionHandler:] */

void FUN_1071bde3c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar3 = &puStack_60;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfd4340();
  if ((int)uVar1 == 0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1071bdf50;
    puStack_48 = &UNK_110991818;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retainBlock(&puStack_60);
    func_0x00010bdc8060(param_1);
    _objc_release(ppuVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  else {
    func_0x00010c127480(param_1);
    puVar2 = PTR_PTR_1126af6d8;
    func_0x00010c0dcca0(PTR_PTR_1126af6d8);
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3,puVar2);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1071bdf50; end: 1071be09f;  */

void FUN_1071bdf50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_1071be0a0;
    uStack_40 = 0x1071be0b0;
    uStack_38 = 0;
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    puVar2 = puVar1;
    func_0x00010befa280();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puStack_58[5];
    puStack_58[5] = puVar2;
    _objc_release(uVar3);
    _objc_release(puVar1);
    func_0x00010c127480(param_1);
    _objc_release(param_2);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1071be0a0; end: 1071be0b7;  */

void FUN_1071be0a0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1071be0b8; end: 1071be13f;  */

void FUN_1071be0b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  func_0x00010c0dfc60(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010bf1f3c0();
  (**(code **)(lVar3 + 0x10))(lVar3,uVar1,0);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


