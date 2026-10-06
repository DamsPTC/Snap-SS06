/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106604334; end: 106604347;  */

void FUN_106604334(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106604340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 106604348; end: 1066043a3;  */

void FUN_106604348(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cf80();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066043a4; end: 1066043ab;  */

void FUN_1066043a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 1066043ac; end: 106604477; -[SCUnifiedPublicProfileSubscriptionManager _fetchPublicProfileDataHandlerWithPublicProfileId:completion:] */

void FUN_1066043ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106604478;
  puStack_40 = &UNK_1108dc488;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010bfd3260(uVar1,param_2,param_3,0,1,&puStack_58);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 106604478; end: 106604543;  */

void FUN_106604478(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_2 == 0) {
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,0,0,0);
    }
  }
  else if (lVar1 != 0) {
    _objc_retain(lVar1);
    _objc_retain(param_2);
    func_0x00010c2a14c0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(lVar1);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 106604544; end: 106604553;  */

void FUN_106604544(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000106604550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),param_2,param_3,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106604554; end: 106604773; -[SCUnifiedPublicProfileSubscriptionManager _performOptInNotificationsUpdate:profile:callback:] */

void FUN_106604554(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bf25000();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11b280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11b1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar3 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bf25000(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe44e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b4028;
  func_0x00010bfea140(PTR_PTR_1126b4028);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f9280(uVar4);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar3);
  return;
}



/* Entry: 106604774; end: 10660480b;  */

void FUN_106604774(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf25000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf861a0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x10))(lVar4,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10660480c; end: 10660485f;  */

void FUN_10660480c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    func_0x00010c09e4e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 106604860; end: 10660486b; -[SCUnifiedPublicProfileSubscriptionManager pushToValdiMarshaller:] */

void FUN_106604860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b046e08(param_3,param_1);
  func_0x00010b046ddc();
  func_0x00010b046de4();
  func_0x00010b046d54();
  func_0x00010b046d94();
  return;
}



/* Entry: 10660486c; end: 10660491f; -[SCUnifiedPublicProfileSubscriptionManager .cxx_destruct] */

void FUN_10660486c(long param_1)

{
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



/* Entry: 106604920; end: 106604993; -[SCUnifiedPublicProfileUserLocationProvider initWithLocationProvider:] */

undefined1 * FUN_106604920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2108;
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



/* Entry: 106604994; end: 106604b73; -[SCUnifiedPublicProfileUserLocationProvider getUserLocationWithCallback:] */

void FUN_106604994(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  func_0x00010c011b80();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x106604a78;
  puStack_40 = &UNK_11092f3b8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c135ca0(0x3ff0000000000000,uVar1,param_2,0,puVar2,PTR___dispatch_main_q_11034be20,
                      &puStack_58);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106604b74; end: 106604c4b;  */

void FUN_106604b74(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (param_5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106604bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_3 + 0x28) + 0x10))
              (*(long *)(param_3 + 0x28),0,0,&PTR____CFConstantStringClassReference_110e56c98);
    return;
  }
  func_0x00010bfb1920(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bdc17e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51c80(*(undefined8 *)(param_3 + 0x20));
  puVar2 = PTR_PTR_1126b1d80;
  _objc_alloc(PTR_PTR_1126b1d80);
  func_0x00010c0219a0(param_1,param_2);
  (**(code **)(*(long *)(param_3 + 0x28) + 0x10))(*(long *)(param_3 + 0x28),puVar2,uVar1,0);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106604c4c; end: 106604c53; -[SCUnifiedPublicProfileUserLocationProvider shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_106604c4c(void)

{
  return 0;
}



/* Entry: 106604c54; end: 106604c5f; -[SCUnifiedPublicProfileUserLocationProvider pushToValdiMarshaller:] */

undefined8 FUN_106604c54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b899130(param_3,param_1);
  func_0x00010b899128();
  func_0x00010b8990f4();
  func_0x00010b899104();
  return param_3;
}



/* Entry: 106604c60; end: 106604c6b; -[SCUnifiedPublicProfileUserLocationProvider .cxx_destruct] */

void FUN_106604c60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106604c6c; end: 106606843; -[SCUnifiedPublicProfileViewController initWithBusinessProfileId:lensModularCameraPresentation:externalLinkSendingService:deepLinkSendToScopeExposer:actionSheetPresenterFactory:commerceProductCatalogScopeExposer:commerceShoppingScopeExposer:friendProfileScopeExposer:friendActionSheetScopeExposer:chatCameraScopeExposer:chatCameraScopeServices:webBrowserScopeExposer:deepLinkHandler:safeBrowsingAPI:snapchatterFetcherHelper:navigationDelegate:sendToScopeExposer:sendToScopeServices:offPlatformLinkGenerationService:creatorSettingsMutator:discoverFeedDataSource:discoverFeedDataMutatorDeprecated:interactionHistoryManager:storiesMixerNetworkRequester:safetyReportScopeExposer:creatorsShareMessageDelegate:storyPlayerCreator:subscriptionManager:storySnapViewStateProvider:composerApplication:alertPresenterFactory:networkingClient:grpcServiceFactory:watchedStateCache:subscriptionStore:cofStore:bitmojiAvatarProvider:publisherConfigurationsProvider:serviceConfig:friendStore:incomingFriendStore:userSession:blizzardLogger:runtime:composerAvatarBuilderPresenterFactory:entryInfo:previewMode:showHighlightCta:isVerticalNavStyle:onCreateHighlight:isPublisherProfile:unifiedPublicProfileDelegate:unifiedPublicProfileScopeDelegate:swipeInteractiveViewControllerDelegate:mapPresenter:userLocationProvider:composerPlaceStoryPlayer:publicUserStoryFetcher:snapProShareMessageSender:circumstanceEngine:suggestedFriendStore:friendActionStore:bitmojiFlatlandConfigProvider:seenAndAddEventLogger:simpleContentFetcher:crashLogger:snapchattersPublicInfoFetcher:snapchattersDataMutator:snapchattersSynchronousDataFetcher:remoteStoriesDataProvider:storiesPlaybackDataProvider:storiesGrapheneMetricsEmitter:contentProductPlaybackScopeExposer:contentProductPlaybackScopeServices:userId:communityPillTapScopeExposer:communitiesOnboardingScopeExposer:communitiesAttributionProviding:placement:addSourceType:communityStoreProvider:imageFetchingService:readReceiptCoordinator:creatorsProfileImageScopeExposer:creatorsProfileImageScopeServices:storiesDataCoordinator:creatorSubscriptionsInfoProvider:fanPassSubscriptionScopeFactoryServices:fanPassSubscriptionManagementScopeFactoryServices:launchSourceAdId:friendingExperimentReader:mutualFriendsPageScopeExposer:mutualFriendsPageScopeServices:deckHierarchyFactory:valdiRuntimeProvider:supStore:mutualFriendsDataProviderFuture:pageLauncher:chatNavigationService:screenshotSharingService:friendSurfaceImpressionLogger:composerPeopleBridgeFriendServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 **
FUN_106604c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined *param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined4 param_49,undefined4 param_50,undefined8 param_51,char param_52,
             undefined4 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
             undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
             undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
             undefined8 param_69,undefined8 param_70,undefined8 param_71,undefined8 param_72)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined8 **ppuVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  undefined *puVar28;
  long lVar29;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
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
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  _objc_retain(param_51);
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
  _objc_retain(param_71);
  _objc_retain(param_72);
  _objc_retain(in_stack_000001f0);
  _objc_retain(in_stack_000001f8);
  _objc_retain(in_stack_00000200);
  _objc_retain(in_stack_00000208);
  _objc_retain(in_stack_00000210);
  _objc_retain(in_stack_00000218);
  _objc_retain(in_stack_00000220);
  _objc_retain(in_stack_00000228);
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
  _objc_retain(in_stack_00000290);
  _objc_retain(in_stack_00000298);
  _objc_retain(in_stack_000002a0);
  _objc_retain(in_stack_000002a8);
  _objc_retain(in_stack_000002b0);
  _objc_retain(in_stack_000002b8);
  _objc_retain(in_stack_000002c0);
  _objc_retain(in_stack_000002c8);
  _objc_retain(in_stack_000002d0);
  _objc_retain();
  _objc_retain();
  _objc_retain(in_stack_000002e8);
  puStack_80 = PTR_PTR_1126f2110;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 == (undefined8 *)0x0) {
    ppuVar24 = (undefined8 **)0x0;
  }
  else {
    lVar26 = (long)_DAT_11274bf70;
    _objc_retain(param_62);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar26);
    *(undefined8 *)((long)puVar1 + lVar26) = param_62;
    _objc_release(uVar2);
    *(char *)((long)puVar1 + (long)_DAT_11274bf74) = param_52;
    uVar2 = in_stack_00000210;
    func_0x00010bf51e00();
    uVar25 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274bf78);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274bf78) = uVar2;
    _objc_release(uVar25);
    puVar3 = PTR_PTR_1126cc178;
    _objc_alloc();
    puVar4 = puVar3;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c015d00();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274bf7c);
    *(undefined **)((long)puVar1 + (long)_DAT_11274bf7c) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    *(char *)((long)puVar1 + (long)_DAT_11274bf80) = param_49._2_1_;
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar25 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274bf84);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274bf84) = uVar2;
    _objc_release(uVar25);
    lVar26 = (long)_DAT_11274bf88;
    _objc_retain(param_44);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar26);
    *(undefined8 *)((long)puVar1 + lVar26) = param_44;
    _objc_release(uVar2);
    lVar26 = (long)_DAT_11274bf8c;
    _objc_retain(param_46);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar26);
    *(undefined8 *)((long)puVar1 + lVar26) = param_46;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11274bf90,param_54);
    lVar26 = (long)_DAT_11274bf94;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar26);
    *(undefined8 *)((long)puVar1 + lVar26) = param_17;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274bf98);
    *(undefined **)((long)puVar1 + (long)_DAT_11274bf98) = puVar3;
    _objc_release(uVar2);
    lVar26 = (long)_DAT_11274bf9c;
    _objc_retain(param_72);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar26);
    *(undefined8 *)((long)puVar1 + lVar26) = param_72;
    _objc_release(uVar2);
    lVar26 = (long)_DAT_11274bfa0;
    _objc_retain(in_stack_000002d8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar26);
    *(undefined8 *)((long)puVar1 + lVar26) = in_stack_000002d8;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11274bfa4,in_stack_000002e8);
    lVar26 = (long)_DAT_11274bfa8;
    _objc_retain(param_21);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar26);
    *(undefined8 *)((long)puVar1 + lVar26) = param_21;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cc080;
    _objc_alloc_init();
    lVar29 = (long)_DAT_11274bfac;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar29);
    *(undefined **)((long)puVar1 + lVar29) = puVar3;
    _objc_release(uVar2);
    func_0x00010c169820(*(undefined8 *)((long)puVar1 + lVar29));
    puVar3 = PTR_PTR_1126cc180;
    _objc_alloc(PTR_PTR_1126cc180);
    func_0x00010c006480();
    func_0x00010c184fe0(*(undefined8 *)((long)puVar1 + lVar29));
    _objc_release(puVar3);
    lVar27 = (long)_DAT_11274bfb0;
    _objc_retain(in_stack_00000240);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar27);
    *(undefined8 *)((long)puVar1 + lVar27) = in_stack_00000240;
    _objc_release(uVar2);
    lVar26 = (long)_DAT_11274bfb4;
    _objc_retain(in_stack_00000220);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar26);
    *(undefined8 *)((long)puVar1 + lVar26) = in_stack_00000220;
    _objc_release(uVar2);
    lVar26 = (long)_DAT_11274bfb8;
    _objc_retain(in_stack_00000218);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar26);
    *(undefined8 *)((long)puVar1 + lVar26) = in_stack_00000218;
    _objc_release(uVar2);
    lVar26 = (long)_DAT_11274bfbc;
    _objc_retain(in_stack_00000228);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar26);
    *(undefined8 *)((long)puVar1 + lVar26) = in_stack_00000228;
    _objc_release(uVar2);
    lVar26 = (long)_DAT_11274bfc0;
    _objc_retain(in_stack_00000250);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar26);
    *(undefined8 *)((long)puVar1 + lVar26) = in_stack_00000250;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274bfc4);
    *(undefined **)((long)puVar1 + (long)_DAT_11274bfc4) = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    uVar2 = param_33;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar2;
    func_0x00010c0b7600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010c166b20(*(undefined8 *)((long)puVar1 + lVar29));
    puVar5 = PTR_PTR_1126b5350;
    _objc_alloc();
    func_0x00010c041f80();
    puVar6 = PTR_PTR_1126cc090;
    _objc_alloc();
    func_0x00010c061720();
    func_0x00010c17ade0(*(undefined8 *)((long)puVar1 + lVar29));
    puVar7 = PTR_PTR_1126b5350;
    _objc_alloc();
    func_0x00010c041f80();
    puVar8 = PTR_PTR_1126cc0a0;
    _objc_alloc();
    puVar3 = puVar8;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05ece0();
    _objc_release(puVar3);
    func_0x00010c1e5820(*(undefined8 *)((long)puVar1 + lVar29));
    puVar9 = PTR_PTR_1126c2610;
    _objc_alloc();
    func_0x00010c02ca60();
    puVar10 = PTR_PTR_1126c2610;
    _objc_alloc();
    func_0x00010c02ca60();
    puVar11 = PTR_PTR_1126cc098;
    _objc_alloc();
    func_0x00010c0159a0();
    func_0x00010c1e4420(*(undefined8 *)((long)puVar1 + lVar29));
    puVar12 = PTR_PTR_1126b0e68;
    _objc_alloc();
    func_0x00010c02e980();
    func_0x00010c21d360(*(undefined8 *)((long)puVar1 + lVar29));
    puVar13 = PTR_PTR_1126b0fc0;
    _objc_alloc();
    func_0x00010c0588c0();
    func_0x00010c20daa0(*(undefined8 *)((long)puVar1 + lVar29));
    uVar2 = param_29;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar2;
    func_0x00010bf56860();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010c1e1580(uVar14);
    func_0x00010c18e6c0(uVar14);
    func_0x00010c18eac0(uVar14);
    lVar26 = (long)_DAT_11274bfc8;
    _objc_retain(uVar14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar26);
    *(undefined8 *)((long)puVar1 + lVar26) = uVar14;
    _objc_release(uVar2);
    puVar15 = PTR_PTR_1126b0f98;
    _objc_alloc();
    func_0x00010c061880();
    puVar16 = PTR_PTR_1126b0fe0;
    _objc_alloc();
    func_0x00010c0617a0();
    func_0x00010c1dda40(*(undefined8 *)((long)puVar1 + lVar29));
    func_0x00010c1fd700(*(undefined8 *)((long)puVar1 + lVar29));
    uVar2 = param_31;
    func_0x00010c269d40(param_31);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20dba0(*(undefined8 *)((long)puVar1 + lVar29));
    _objc_release(uVar2);
    func_0x00010c1a0100(*(undefined8 *)((long)puVar1 + lVar29));
    func_0x00010c1abec0(*(undefined8 *)((long)puVar1 + lVar29));
    uVar2 = param_37;
    func_0x00010c269d40(param_37);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f5e0(*(undefined8 *)((long)puVar1 + lVar29));
    _objc_release(uVar2);
    func_0x00010c1c0520(*(undefined8 *)((long)puVar1 + lVar29));
    uVar2 = param_30;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f540(*(undefined8 *)((long)puVar1 + lVar29));
    _objc_release(uVar2);
    func_0x00010c1e1220(*(undefined8 *)((long)puVar1 + lVar29));
    uVar2 = param_38;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17df40(*(undefined8 *)((long)puVar1 + lVar29));
    _objc_release(uVar2);
    uVar2 = param_34;
    func_0x00010c269d40(param_34);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cc960(*(undefined8 *)((long)puVar1 + lVar29));
    _objc_release(uVar2);
    uVar2 = param_35;
    func_0x00010c269d40(param_35);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4d00(*(undefined8 *)((long)puVar1 + lVar29));
    _objc_release(uVar2);
    func_0x00010c1ba8e0(*(undefined8 *)((long)puVar1 + lVar29));
    func_0x00010c1c24a0(*(undefined8 *)((long)puVar1 + lVar29));
    uVar2 = param_58;
    func_0x00010c269d40(param_58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ebe0(*(undefined8 *)((long)puVar1 + lVar29));
    _objc_release(uVar2);
    func_0x00010c1cb5a0(*(undefined8 *)((long)puVar1 + lVar29));
    func_0x00010c1e5a00(*(undefined8 *)((long)puVar1 + lVar29));
    uVar2 = param_63;
    func_0x00010c269d40(param_63);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f980(*(undefined8 *)((long)puVar1 + lVar29));
    _objc_release(uVar2);
    uVar2 = param_64;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f980(*(undefined8 *)((long)puVar1 + lVar29));
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010c269d40(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar2;
    func_0x00010c0b7620();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161e00(*(undefined8 *)((long)puVar1 + lVar29));
    _objc_release(uVar20);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b4aa8;
    _objc_alloc();
    func_0x00010bff7fe0();
    func_0x00010c170ec0(*(undefined8 *)((long)puVar1 + lVar29));
    _objc_release(puVar3);
    _objc_initWeak(auStack_90,puVar1);
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_106606844;
    puStack_a0 = &UNK_11092f3e8;
    _objc_copyWeak(auStack_98,auStack_90);
    func_0x00010c1fef80(puVar8);
    puStack_e0 = puVar3;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x1066068ac;
    puStack_c8 = &UNK_11084f310;
    _objc_copyWeak(auStack_c0,auStack_90);
    func_0x00010c19b3e0(*(undefined8 *)((long)puVar1 + lVar29));
    puVar17 = PTR_PTR_1126b0f80;
    _objc_alloc();
    uVar2 = *(undefined8 *)((long)puVar1 + lVar27);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar3;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x106606910;
    puStack_f0 = &UNK_110852b60;
    _objc_copyWeak(auStack_e8,auStack_90);
    func_0x00010c0002e0(puVar17);
    func_0x00010c17f820(*(undefined8 *)((long)puVar1 + lVar29));
    _objc_release(puVar17);
    _objc_release(uVar2);
    puVar17 = PTR_PTR_1126cc0a8;
    _objc_alloc();
    func_0x00010c0617c0();
    func_0x00010c1de060(*(undefined8 *)((long)puVar1 + lVar29));
    puVar18 = PTR_PTR_1126cc070;
    _objc_alloc();
    func_0x00010bff9d00();
    lVar26 = (long)_DAT_11274bfcc;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar26);
    *(undefined **)((long)puVar1 + lVar26) = puVar18;
    _objc_release(uVar2);
    puVar18 = PTR_PTR_1126ae820;
    _objc_alloc();
    func_0x00010c060400();
    uVar2 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = puVar3;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_106606978;
    puStack_118 = &UNK_110842e18;
    _objc_retain(puVar18);
    puStack_110 = puVar18;
    func_0x00010007380c(uVar2,&puStack_130);
    _objc_release(uVar2);
    puVar19 = puVar18;
    func_0x00010c272120(puVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20c3e0(*(undefined8 *)((long)puVar1 + lVar26));
    _objc_release(puVar19);
    func_0x00010c1afc00(*(undefined8 *)((long)puVar1 + lVar26));
    puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c201ba0(*(undefined8 *)((long)puVar1 + lVar26));
    _objc_release(puVar19);
    func_0x00010c1d1e20(*(undefined8 *)((long)puVar1 + lVar26));
    puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b5960(*(undefined8 *)((long)puVar1 + lVar26));
    _objc_release(puVar19);
    uVar2 = param_44;
    func_0x00010c2923e0(param_44);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e620(*(undefined8 *)((long)puVar1 + lVar26));
    _objc_release(uVar2);
    func_0x00010c1b9760(*(undefined8 *)((long)puVar1 + lVar26));
    puStack_160 = puVar3;
    uStack_158 = 0xc2000000;
    uStack_150 = 0x106606a1c;
    puStack_148 = &UNK_11092f418;
    _objc_copyWeak(auStack_138,auStack_90);
    _objc_retain(param_66);
    uStack_140 = param_66;
    func_0x00010c1c2b60(*(undefined8 *)((long)puVar1 + lVar26));
    puStack_188 = puVar3;
    uStack_180 = 0xc2000000;
    pcStack_178 = FUN_106606b28;
    puStack_170 = &UNK_110842e18;
    _objc_retain(param_66);
    uStack_168 = param_66;
    func_0x00010c1c02a0(*(undefined8 *)((long)puVar1 + lVar26));
    puStack_1b0 = puVar3;
    uStack_1a8 = 0xc2000000;
    pcStack_1a0 = FUN_106606b34;
    puStack_198 = &UNK_11084f310;
    _objc_copyWeak(auStack_190,auStack_90);
    func_0x00010c20dc80(*(undefined8 *)((long)puVar1 + lVar26));
    puStack_1e0 = puVar3;
    uStack_1d8 = 0xc2000000;
    uStack_1d0 = 0x106606b98;
    puStack_1c8 = &UNK_11092f448;
    _objc_copyWeak(auStack_1b8,auStack_90);
    _objc_retain(in_stack_00000270);
    uStack_1c0 = in_stack_00000270;
    func_0x00010c1b0e40(*(undefined8 *)((long)puVar1 + lVar26));
    puVar19 = PTR_PTR_1126cc078;
    _objc_alloc();
    uVar2 = 0xf0;
    func_0x00010bc9107c(0xf0);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = 0xec;
    func_0x000100c6f294(0xec);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04ac00();
    func_0x00010c1c0620(*(undefined8 *)((long)puVar1 + lVar26));
    _objc_release(puVar19);
    _objc_release(uVar20);
    _objc_release(uVar2);
    uVar2 = in_stack_00000290;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar2;
    func_0x00010bfc7c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar20;
    func_0x00010bf926c0();
    if ((int)uVar2 != 0) {
      puVar19 = PTR_PTR_1126cc0b0;
      _objc_alloc(PTR_PTR_1126cc0b0);
      func_0x00010c039220();
      func_0x00010c1ca840(*(undefined8 *)((long)puVar1 + lVar29));
      func_0x00010c1ca860(*(undefined8 *)((long)puVar1 + lVar29));
      _objc_release(puVar19);
    }
    uVar2 = in_stack_00000290;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR_PTR_1126b1698;
    func_0x00010c11a7a0(PTR_PTR_1126b1698);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar2;
    func_0x00010bf1f320();
    _objc_release(puVar19);
    _objc_release(uVar2);
    if ((int)uVar21 != 0) {
      puVar19 = PTR_PTR_1126cc0b8;
      _objc_alloc();
      func_0x00010c039520();
      puStack_208 = puVar3;
      uStack_200 = 0xc2000000;
      pcStack_1f8 = FUN_106606c20;
      puStack_1f0 = &UNK_1108450c8;
      _objc_retain();
      puStack_1e8 = puVar19;
      func_0x00010c1d3da0(*(undefined8 *)((long)puVar1 + lVar29));
      _objc_release(puStack_1e8);
      _objc_release(puVar19);
    }
    puVar3 = PTR_PTR_1126cc0e8;
    _objc_alloc();
    func_0x00010c04d020();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274bfd0);
    *(undefined **)((long)puVar1 + (long)_DAT_11274bfd0) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_40;
    func_0x00010c269d40(param_40);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar2;
    func_0x00010bf98500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196d80(*(undefined8 *)((long)puVar1 + lVar29));
    _objc_release(uVar21);
    uVar21 = param_36;
    func_0x00010c269d40(param_36);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c224a60(*(undefined8 *)((long)puVar1 + lVar29));
    _objc_release(uVar21);
    if (param_52 == '\0') {
      puVar3 = PTR_PTR_1126cc088;
      _objc_alloc(PTR_PTR_1126cc088);
      puVar19 = PTR_PTR_1126b0500;
      func_0x00010c117100(PTR_PTR_1126b0500);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c061760(puVar3);
    }
    else {
      func_0x00010c1b3a80(*(undefined8 *)((long)puVar1 + lVar26));
      func_0x00010c1e1f40(*(undefined8 *)((long)puVar1 + lVar26));
      puVar19 = param_39;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar19;
      func_0x00010bf12ea0();
      _objc_retainAutoreleasedReturnValue();
      puVar28 = puVar3;
      func_0x00010c08fa60();
      if (puVar28 == (undefined *)0x0) {
        puVar28 = (undefined *)0x0;
      }
      else {
        puVar28 = puVar19;
        func_0x00010bf12ea0(puVar19);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar3);
      func_0x00010c170a80(*(undefined8 *)((long)puVar1 + lVar26));
      uVar21 = uVar2;
      func_0x00010bf28de0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c175fa0(*(undefined8 *)((long)puVar1 + lVar26));
      _objc_release(uVar21);
      puVar3 = PTR_PTR_1126cc088;
      _objc_alloc(PTR_PTR_1126cc088);
      func_0x00010c061740();
      puVar22 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      uVar21 = param_47;
      func_0x00010c10fb80(param_47);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16d960(*(undefined8 *)((long)puVar1 + lVar29));
      uVar23 = uVar2;
      func_0x00010bf1e0c0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c175f40(*(undefined8 *)((long)puVar1 + lVar29));
      _objc_release(uVar23);
      _objc_release(uVar21);
      _objc_release(puVar22);
      _objc_release(puVar28);
    }
    _objc_release(puVar19);
    func_0x00010c17f0c0(*(undefined8 *)((long)puVar1 + lVar29));
    uVar21 = 2;
    if (param_49._2_1_ == '\0') {
      uVar21 = 3;
    }
    puStack_210 = PTR_PTR_1126f2110;
    ppuVar24 = &puStack_218;
    puStack_218 = puVar1;
    _objc_msgSendSuper2(ppuVar24,PTR_s_initWithDismissalSwipeDirection__112531540,uVar21,param_56);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar20);
    _objc_release(uStack_1c0);
    _objc_destroyWeak(auStack_1b8);
    _objc_destroyWeak(auStack_190);
    _objc_release(uStack_168);
    _objc_release(uStack_140);
    _objc_destroyWeak(auStack_138);
    _objc_release(puStack_110);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(uVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar25);
    _objc_release(puVar4);
  }
  _objc_release(in_stack_000002e8);
  _objc_release(in_stack_000002e0);
  _objc_release(in_stack_000002d8);
  _objc_release(in_stack_000002d0);
  _objc_release(in_stack_000002c8);
  _objc_release(in_stack_000002c0);
  _objc_release(in_stack_000002b8);
  _objc_release(in_stack_000002b0);
  _objc_release(in_stack_000002a8);
  _objc_release(in_stack_000002a0);
  _objc_release(in_stack_00000298);
  _objc_release(in_stack_00000290);
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
  _objc_release(in_stack_00000228);
  _objc_release(in_stack_00000220);
  _objc_release(in_stack_00000218);
  _objc_release(in_stack_00000210);
  _objc_release(in_stack_00000208);
  _objc_release(in_stack_00000200);
  _objc_release(in_stack_000001f8);
  _objc_release(in_stack_000001f0);
  _objc_release(param_72);
  _objc_release(param_71);
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
  _objc_release(param_51);
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
  return ppuVar24;
}



/* Entry: 106606844; end: 106606977;  */

void FUN_106606844(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea7000();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106606978; end: 106606b27;  */

void FUN_106606978(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___SKPaymentQueue_1126c00b8;
  func_0x00010bf6a0e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c257f60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010bf53280();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar1 = ppuVar4;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20),param_2,ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 106606b28; end: 106606b33;  */

void FUN_106606b28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0aef50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_logSeenAndAddedSuggestedSnapchat_1126095e0,1);
  return;
}



/* Entry: 106606b34; end: 106606c1f;  */

void FUN_106606b34(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bec4ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106606c20; end: 106606c2b;  */

void FUN_106606c20(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10e0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_presentSeeAllPageForProfileUserI_112621258,
             param_2);
  return;
}



/* Entry: 106606c2c; end: 106606ca7; -[SCUnifiedPublicProfileViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106606c2c(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar2 = (long)_DAT_11274bf90;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar2 = param_1 + lVar2;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c280200();
    _objc_release(lVar2);
  }
  puStack_38 = PTR_PTR_1126f2110;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106606ca8; end: 106606cfb; -[SCUnifiedPublicProfileViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106606ca8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2110;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  *(undefined1 *)(param_1 + _DAT_11274bfd4) = 0;
  func_0x00010bec34c0(param_1);
  return;
}



/* Entry: 106606cfc; end: 106606d4f; -[SCUnifiedPublicProfileViewController viewDidLoad] */

void FUN_106606cfc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2110;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c1c8b40(param_1);
  func_0x00010be4e500(param_1);
  return;
}



/* Entry: 106606d50; end: 106606daf; -[SCUnifiedPublicProfileViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106606d50(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2110;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c1cbec0(param_1);
  *(undefined1 *)(param_1 + _DAT_11274bfd4) = 1;
  func_0x00010bec0c20(param_1);
  return;
}



/* Entry: 106606db0; end: 106606e63; -[SCUnifiedPublicProfileViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106606db0(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f2110;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidAppear__112684bd0);
  func_0x00010c1cbec0(param_1);
  lVar4 = (long)_DAT_11274bf90;
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = param_1 + lVar4;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      lVar4 = param_1 + lVar4;
      _objc_loadWeakRetained(lVar4);
      func_0x00010c280140();
      _objc_release(lVar4);
    }
  }
  func_0x00010be50060(param_1);
  return;
}



/* Entry: 106606e64; end: 106606fc3; -[SCUnifiedPublicProfileViewController _logAddFriendSurfaceImpressionIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106606e64(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar3 = (long)_DAT_11274bfd8;
  if ((((*(byte *)(param_1 + lVar3) & 1) == 0) && (*(long *)(param_1 + _DAT_11274bf7c) != 0)) &&
     (lVar6 = (long)_DAT_11274bf74, (*(byte *)(param_1 + lVar6) & 1) == 0)) {
    lVar7 = (long)_DAT_11274bf78;
    lVar2 = *(long *)(param_1 + lVar7);
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      *(undefined1 *)(param_1 + lVar3) = 1;
      uVar4 = *(undefined8 *)(param_1 + lVar7);
      _objc_retain(uVar4);
      uVar1 = *(undefined1 *)(param_1 + lVar6);
      _objc_initWeak(auStack_48,param_1);
      uVar5 = *(undefined8 *)(param_1 + _DAT_11274bf94);
      _objc_retain(PTR___dispatch_main_q_11034be20);
      _objc_copyWeak(auStack_58,auStack_48);
      uStack_50 = uVar1;
      _objc_retain(uVar4);
      func_0x00010bfaa440(uVar5);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_58);
      _objc_destroyWeak(auStack_48);
      _objc_release(uVar4);
    }
  }
  return;
}



/* Entry: 106606fc4; end: 106607037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106606fc4(long param_1,long param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x000100bf119c(param_2);
    func_0x00010c0a0ae0(*(undefined8 *)(param_1 + _DAT_11274bf7c));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106607038; end: 1066070a7; -[SCUnifiedPublicProfileViewController viewWillLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106607038(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2110;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillLayoutSubviews_112526958);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11274bfdc));
  _objc_release(lVar1);
  return;
}



/* Entry: 1066070a8; end: 1066070af; -[SCUnifiedPublicProfileViewController prefersStatusBarHidden] */

undefined8 FUN_1066070a8(void)

{
  return 0;
}



/* Entry: 1066070b0; end: 1066070b3; -[SCUnifiedPublicProfileViewController preferredStatusBarStyle] */

undefined8 FUN_1066070b0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 1066070b4; end: 106607167; -[SCUnifiedPublicProfileViewController setNeedsStatusBarAppearanceUpdate] */

void FUN_1066070b4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f2110;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc80(puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1070e0(param_1);
  func_0x00010c14dc40(puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 106607168; end: 10660721b; -[SCUnifiedPublicProfileViewController _loadProfileViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106607168(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11274bfdc;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126cc188;
  _objc_alloc();
  func_0x00010c061d40();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar3),param_2,
                      &PTR____CFConstantStringClassReference_110e56cd8);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10660721c; end: 106607307; -[SCUnifiedPublicProfileViewController _makeShellSnapchatterForUserId:suggestionToken:] */

void FUN_10660721c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bb3f8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c04f5a0();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126b15c8;
  _objc_alloc(PTR_PTR_1126b15c8);
  func_0x00010c05c0e0();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106607308; end: 106607313; -[SCUnifiedPublicProfileViewController defaultProjectNameV2] */

void FUN_106607308(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5bc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_creators_1125b48c0);
  return;
}



/* Entry: 106607314; end: 10660731b; -[SCUnifiedPublicProfileViewController pageViewName] */

undefined8 FUN_106607314(void)

{
  return 0xe1;
}



/* Entry: 10660731c; end: 106607323; -[SCUnifiedPublicProfileViewController shouldBeSilentlyPresentedAndPauseOpera] */

undefined8 FUN_10660731c(void)

{
  return 1;
}



/* Entry: 106607324; end: 10660733f; -[SCUnifiedPublicProfileViewController presentationMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106607324(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + _DAT_11274bf80) == '\0') {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 106607340; end: 106607543; -[SCUnifiedPublicProfileViewController _getFriendingSubtextWithHostAccountId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106607340(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  lVar3 = (long)_DAT_11274bf98;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274bf94);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x106607410;
  puStack_50 = &UNK_110895bd8;
  uStack_48 = uVar1;
  _objc_retain(uVar1);
  func_0x00010bfaa440(uVar2,param_2,param_3,PTR___dispatch_main_q_11034be20,&puStack_68);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c272120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106607544; end: 106607697; -[SCUnifiedPublicProfileViewController _onCommunityPillTap:withUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106607544(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bee6d60();
  if ((int)lVar1 == 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar3 = PTR_PTR_1126b3e50;
    _objc_alloc(PTR_PTR_1126b3e50);
    uVar4 = 0x81;
    func_0x000100c6f294(0x81);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0569a0(puVar3,param_2,puVar2,param_1,uVar4,uVar5,0,0,0);
    _objc_release(uVar5);
    _objc_release(uVar4);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11274bfb4),param_2,puVar3);
    _objc_release(puVar3);
  }
  else {
    puVar2 = PTR_PTR_1126b1008;
    _objc_alloc(PTR_PTR_1126b1008);
    func_0x00010c0190e0();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11274bfb8),param_2,puVar2);
  }
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106607698; end: 1066076e3; -[SCUnifiedPublicProfileViewController _userInCommunity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106607698(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11274bfbc);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf42d40();
  _objc_release(lVar1);
  return 0 < lVar2;
}



/* Entry: 1066076e4; end: 1066076f3; -[SCUnifiedPublicProfileViewController _storySummaryInfoObservableForUserWithId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066076e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25b530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274bfd0),
             PTR_s_storySummaryInfoObservableForUse_112674770);
  return;
}



/* Entry: 1066076f4; end: 106607897; -[SCUnifiedPublicProfileViewController _isFanPassSubscribedToCreator:creatorSubscriptionsInfoProvider:] */

void FUN_1066076f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010bf5ba80(param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1066077c4;
  puStack_40 = &UNK_11092efc8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c0b8600(param_4,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106607898; end: 106607a1f; -[SCUnifiedPublicProfileViewController _setScreenshotProfile:sendToUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106607898(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = param_4;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    lVar4 = param_3;
    func_0x00010bfe4500();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    if (lVar1 == 0) goto LAB_1066079d8;
  }
  lVar4 = (long)_DAT_11274bfe0;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(long *)(param_1 + lVar4) = param_3;
  _objc_release(uVar2);
  lVar4 = param_4;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274bfe4);
  *(long *)(param_1 + _DAT_11274bfe4) = lVar4;
  _objc_release(uVar2);
  _objc_initWeak(auStack_48,param_1);
  puVar3 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274bfe8);
  *(undefined **)(param_1 + _DAT_11274bfe8) = puVar3;
  _objc_release(uVar2);
  func_0x00010bec34c0(param_1);
  func_0x00010bec0c20(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
LAB_1066079d8:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106607a20; end: 106607a5f;  */

void FUN_106607a20(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be1bb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106607a60; end: 106607b07; -[SCUnifiedPublicProfileViewController _startObservingPublicProfileScreenshotIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106607a60(long param_1)

{
  undefined8 uVar1;
  
  if ((((*(byte *)(param_1 + _DAT_11274bfec) & 1) == 0) &&
      (*(char *)(param_1 + _DAT_11274bfd4) == '\x01')) && (*(long *)(param_1 + _DAT_11274bfe0) != 0)
     ) {
    *(undefined1 *)(param_1 + _DAT_11274bfec) = 1;
    uVar1 = *(undefined8 *)(param_1 + _DAT_11274bfa0);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24fa60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106607b08; end: 106607b5f; -[SCUnifiedPublicProfileViewController _stopObservingPublicProfileScreenshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106607b08(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + _DAT_11274bfec) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_11274bfec) = 0;
    uVar1 = *(undefined8 *)(param_1 + _DAT_11274bfa0);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2564e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106607b60; end: 106607cdb; -[SCUnifiedPublicProfileViewController _generateScreenshotSharingConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106607b60(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  
  ppuVar6 = *(undefined ***)(param_1 + _DAT_11274bfe0);
  _objc_retain(ppuVar6);
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11274bf70);
  func_0x000108faa950();
  if (iVar1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar8 = (long)_DAT_11274bfe4;
    lVar2 = *(long *)(param_1 + lVar8);
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      puVar3 = *(undefined **)(param_1 + _DAT_11274bfa8);
      func_0x00010c269d40(puVar3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar6;
      func_0x00010bfe4500(ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010bfbf880(puVar3,param_2,ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar4);
      _objc_release(puVar3);
    }
    else {
      puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,*(undefined8 *)(param_1 + lVar8)
                         );
      _objc_retainAutoreleasedReturnValue();
    }
  }
  puVar3 = PTR_PTR_1126b43b8;
  _objc_alloc(PTR_PTR_1126b43b8);
  ppuVar5 = ppuVar6;
  func_0x00010bfe44e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar4 = ppuVar5;
  }
  func_0x00010c0538c0(puVar3,param_2,&PTR____CFConstantStringClassReference_110daafd8,0,puVar7,0,0,
                      ppuVar4,4,0x48,3,2,5,8);
  _objc_release(ppuVar5);
  _objc_release(puVar7);
  _objc_release(ppuVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106607cdc; end: 106607d33; -[SCUnifiedPublicProfileViewController didCompleteCommunityPillTapScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106607cdc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274bfb8;
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



/* Entry: 106607d34; end: 106607d8b; -[SCUnifiedPublicProfileViewController verifiedCommunitiesOnboardingDidFinishWithComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106607d34(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274bfb4;
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



/* Entry: 106607d8c; end: 106607ec3; -[SCUnifiedPublicProfileViewController shouldBeginInteractiveDismissal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_106607d8c(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf38f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      puVar6 = (undefined *)0x1;
LAB_106607e80:
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
        return puVar6;
      }
      ___stack_chk_fail();
      iVar2 = (int)*(undefined8 *)(param_1 + _DAT_11274bf70);
      func_0x000108f49460();
      puVar6 = PTR_PTR_1126aecb0;
      if (iVar2 == 0) {
        func_0x00010bf9b820(PTR_PTR_1126aecb0);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bf9b840();
        _objc_retainAutoreleasedReturnValue();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
      return puVar6;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      puVar6 = PTR_DAT_1126a4f48;
      lVar7 = *(long *)(lVar8 * 8);
      _objc_retain(lVar7);
      lVar4 = lVar7;
      func_0x00010010fab4(lVar7,puVar6);
      _objc_release(lVar7);
      if ((int)lVar4 != 0 && lVar7 != 0) {
        puVar6 = (undefined *)0x0;
        goto LAB_106607e80;
      }
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = param_1;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106607ec4; end: 106607f0f; -[SCUnifiedPublicProfileViewController backgroundExitBehavior] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106607ec4(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11274bf70);
  func_0x000108f49460();
  if (iVar1 == 0) {
    func_0x00010bf9b820(PTR_PTR_1126aecb0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf9b840();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106607f10; end: 1066080d7; -[SCUnifiedPublicProfileViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106607f10(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274bf78,0);
  _objc_storeStrong(param_1 + _DAT_11274bf7c,0);
  _objc_storeStrong(param_1 + _DAT_11274bfe4,0);
  _objc_storeStrong(param_1 + _DAT_11274bfe0,0);
  _objc_storeStrong(param_1 + _DAT_11274bfe8,0);
  _objc_storeStrong(param_1 + _DAT_11274bfa8,0);
  _objc_destroyWeak(param_1 + _DAT_11274bfa4);
  _objc_storeStrong(param_1 + _DAT_11274bfa0,0);
  _objc_storeStrong(param_1 + _DAT_11274bfc4,0);
  _objc_storeStrong(param_1 + _DAT_11274bf70,0);
  _objc_storeStrong(param_1 + _DAT_11274bfd0,0);
  _objc_storeStrong(param_1 + _DAT_11274bfc0,0);
  _objc_storeStrong(param_1 + _DAT_11274bf9c,0);
  _objc_storeStrong(param_1 + _DAT_11274bfb0,0);
  _objc_storeStrong(param_1 + _DAT_11274bfbc,0);
  _objc_storeStrong(param_1 + _DAT_11274bfb4,0);
  _objc_storeStrong(param_1 + _DAT_11274bfb8,0);
  _objc_storeStrong(param_1 + _DAT_11274bf98,0);
  _objc_storeStrong(param_1 + _DAT_11274bf94,0);
  _objc_storeStrong(param_1 + _DAT_11274bf88,0);
  _objc_storeStrong(param_1 + _DAT_11274bfc8,0);
  _objc_storeStrong(param_1 + _DAT_11274bf8c,0);
  _objc_destroyWeak(param_1 + _DAT_11274bf90);
  _objc_storeStrong(param_1 + _DAT_11274bfcc,0);
  _objc_storeStrong(param_1 + _DAT_11274bfac,0);
  _objc_storeStrong(param_1 + _DAT_11274bfdc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274bf84,0);
  return;
}



/* Entry: 1066080d8; end: 1066080eb;  */

undefined ** FUN_1066080d8(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db00f8;
  if (param_1 != 0) {
    ppuVar1 = (undefined **)0x0;
  }
  return ppuVar1;
}



/* Entry: 1066080ec; end: 106608113;  */

long FUN_1066080ec(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db00f8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110db00f8,param_2,param_1);
  return -(ulong)(ppuVar1 != (undefined **)0x0);
}



/* Entry: 106608114; end: 106608267; -[SCImpalaSubscriptionStore initWithCreatorSettingsFetcher:creatorSettingsMutator:creatorSettingsTracker:discoverFeedNotificationPromptHandler:discoverFeedDataSource:interactionHistoryMananger:] */

undefined1 *
FUN_106608114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  puStack_58 = PTR_PTR_1126f2118;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
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



/* Entry: 106608268; end: 1066083ef; -[SCImpalaSubscriptionStore getSubscriptionWithEntityID:completion:] */

void FUN_106608268(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar1 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x106608344;
    puStack_50 = &UNK_11084a9e8;
    uStack_48 = param_1;
    _objc_retain(param_3);
    uStack_40 = param_3;
    _objc_retain(param_4);
    lStack_38 = param_4;
    func_0x00010007380c(uVar1,&puStack_68);
    _objc_release(uVar1);
    _objc_release(lStack_38);
    _objc_release(uStack_40);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066083f0; end: 106608513;  */

void FUN_1066083f0(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined4 uVar7;
  
  _objc_retain();
  ppuVar1 = param_1;
  func_0x00010bf5b280();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf0a920();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 1;
  if (ppuVar2 == (undefined **)0x0) {
    uVar7 = 2;
  }
  _objc_release();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126cc198;
  _objc_alloc(PTR_PTR_1126cc198);
  puVar4 = PTR_PTR_1126b64a8;
  _objc_alloc(PTR_PTR_1126b64a8);
  ppuVar2 = param_1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  func_0x00010c010060(puVar4,param_2,ppuVar1,0,uVar7);
  ppuVar1 = param_1;
  func_0x00010c080120(param_1);
  ppuVar5 = param_1;
  func_0x00010c079480(param_1);
  ppuVar6 = param_1;
  func_0x00010c074c20(param_1);
  _objc_release(param_1);
  func_0x00010c010040(puVar3,param_2,puVar4,ppuVar1,ppuVar5,ppuVar6);
  _objc_release(puVar4);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106608514; end: 1066085eb; -[SCImpalaSubscriptionStore getSubscriptionsWithEntityIds:completion:] */

void FUN_106608514(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar1 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1066085ec;
    puStack_50 = &UNK_11084a9e8;
    _objc_retain(param_3);
    uStack_48 = param_3;
    uStack_40 = param_1;
    _objc_retain(param_4);
    lStack_38 = param_4;
    func_0x00010007380c(uVar1,&puStack_68);
    _objc_release(uVar1);
    _objc_release(lStack_38);
    _objc_release(uStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066085ec; end: 10660882b;  */

void FUN_1066085ec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100504554(uVar2,&PTR___NSConcreteGlobalBlock_11092f498);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf5b800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c65b0;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_retain(lVar4);
  lVar3 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      uVar11 = *(undefined8 *)(lVar10 * 8);
      uVar8 = uVar11;
      FUN_1066083f0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar7;
      func_0x00010c0e00e0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe5ec0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar6);
      _objc_release(uVar11);
      _objc_release(puVar6);
      _objc_release(uVar8);
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  puVar6 = puVar7;
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),puVar7,0);
  _objc_release(puVar7);
  _objc_release(ppuVar5);
  _objc_release(lVar4);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf96e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar6,PTR_s_entityID_1125c3540);
  return;
}



/* Entry: 10660882c; end: 106608833;  */

void FUN_10660882c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf96e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_entityID_1125c3540);
  return;
}



/* Entry: 106608834; end: 106608dcb; -[SCImpalaSubscriptionStore updateSubscriptionWithEntityID:isSubscribed:placementInfo:completion:] */

void FUN_106608834(long param_1,undefined8 param_2,undefined *param_3,int param_4,undefined8 param_5
                  ,long param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined8 uStack_168;
  undefined1 auStack_f8 [8];
  undefined1 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  undefined1 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = param_3;
  func_0x00010bf96f00();
  puVar8 = param_3;
  if ((int)puVar1 == 2) {
    puVar9 = param_3;
    func_0x00010c08efc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar9 == (undefined *)0x0) {
      func_0x00010bf96e60();
      _objc_retainAutoreleasedReturnValue();
LAB_106608c14:
      func_0x00010c14de00(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar1;
      FUN_106608dcc();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_6 + 0x10))(param_6,puVar9);
      _objc_release(puVar9);
      _objc_release(puVar1);
      _objc_release(puVar8);
      goto LAB_106608d5c;
    }
    _objc_initWeak(auStack_80,param_1);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_106608e70;
    puStack_a8 = &UNK_110849230;
    _objc_copyWeak(auStack_90,auStack_80);
    uStack_88 = (char)param_4;
    _objc_retain(param_3);
    puStack_a0 = param_3;
    _objc_retain(param_6);
    ppuVar2 = &puStack_c0;
    lStack_98 = param_6;
    _objc_retainBlock();
    puStack_e8 = puVar1;
    uStack_e0 = 0xc2000000;
    uStack_d8 = 0x106608ef4;
    puStack_d0 = &UNK_110859a38;
    _objc_retain(param_6);
    ppuVar3 = &puStack_e8;
    lStack_c8 = param_6;
    _objc_retainBlock();
    uStack_168 = *(undefined8 *)(param_1 + 0x10);
    puVar1 = param_3;
    if (param_4 == 0) {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf96e60(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126b4028;
      func_0x00010bfea360(PTR_PTR_1126b4028);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = (undefined *)0x0;
      func_0x0001000819a8(0,0);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = (undefined *)0x0;
      func_0x0001000819a8(0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f9260(uStack_168);
    }
    else {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf96e60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08efc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = param_3;
      func_0x00010c08efc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar10;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = 0;
      func_0x0001000819a8(0,0);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = 0;
      func_0x0001000819a8(0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f92a0(uStack_168);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(puVar4);
    }
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar1);
    _objc_release(uStack_168);
    _objc_release(ppuVar3);
    _objc_release(lStack_c8);
    _objc_release(ppuVar2);
    _objc_release(lStack_98);
    _objc_release(puStack_a0);
    puVar11 = auStack_90;
  }
  else {
    puVar9 = param_3;
    func_0x00010bf96f00();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)puVar9 != 1) {
      func_0x00010bf96e60();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106608c14;
    }
    _objc_initWeak(auStack_80,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x00010bf96e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b4028;
    func_0x00010bfea360(PTR_PTR_1126b4028);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_f8,auStack_80);
    _objc_retain(param_3);
    uStack_f0 = (char)param_4;
    _objc_retain(param_6);
    uVar6 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    uVar7 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f9280(uVar5);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(puVar8);
    _objc_release(puVar1);
    _objc_release(uVar5);
    _objc_release(param_6);
    _objc_release(param_6);
    _objc_release(param_3);
    puVar11 = auStack_f8;
  }
  _objc_destroyWeak(puVar11);
  _objc_destroyWeak(auStack_80);
LAB_106608d5c:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106608dcc; end: 106608e6f;  */

void FUN_106608dcc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR____NSDictionary0__struct_11034ab58;
  if (param_1 != 0) {
    _objc_retain();
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar3) {
    ___stack_chk_fail();
    lVar3 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if ((lVar3 != 0) && (*(char *)(param_1 + 0x38) == '\x01')) {
      lVar2 = lVar3;
      func_0x00010bf82040(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf86180(*(undefined8 *)(lVar3 + 0x20));
      _objc_release(lVar2);
    }
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106608e70; end: 106608ff3;  */

void FUN_106608e70(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(char *)(param_1 + 0x38) == '\x01')) {
    lVar2 = lVar1;
    func_0x00010bf82040(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf86180(*(undefined8 *)(lVar1 + 0x20));
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106608ff4; end: 1066090cf;  */

void FUN_106608ff4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar4 = lVar1;
    func_0x00010bf82040();
    _objc_retainAutoreleasedReturnValue();
    if (*(char *)(param_1 + 0x38) == '\x01') {
      func_0x00010bf86180(*(undefined8 *)(lVar1 + 0x20));
    }
    if (lVar4 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x28);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x000107bfa524(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28a8c0(uVar2);
      _objc_release(lVar3);
      _objc_release(uVar2);
    }
    _objc_release(lVar4);
  }
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x10))(lVar4,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1066090d0; end: 10660914b;  */

void FUN_1066090d0(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e56d38;
    func_0x000106608f70(&PTR____CFConstantStringClassReference_110e56d38);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    FUN_106608dcc();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,ppuVar2);
    _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
    return;
  }
  return;
}



/* Entry: 10660914c; end: 1066093cf; -[SCImpalaSubscriptionStore updateNotificationSubscriptionWithEntityID:isSubscribedToNotifications:completion:] */

void FUN_10660914c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined1 auStack_88 [8];
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bf96f00();
  if (((int)uVar1 == 1) || (uVar1 = param_3, func_0x00010bf96f00(), (int)uVar1 == 2)) {
    func_0x00010bf96f00(param_3);
    _objc_initWeak(auStack_78,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010bf96e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b4028;
    func_0x00010bfea360(PTR_PTR_1126b4028);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_78);
    _objc_retain(param_3);
    uStack_80 = param_4;
    _objc_retain(param_5);
    uVar4 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    uVar5 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f9280(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(param_5);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_78);
  }
  else if (param_5 != 0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110e56d78;
    FUN_106608dcc(&PTR____CFConstantStringClassReference_110e56d78);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,ppuVar6);
    _objc_release(ppuVar6);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1066093d0; end: 1066094a7;  */

void FUN_1066093d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c08efc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010c08fa60();
  _objc_release(lVar6);
  _objc_release(lVar2);
  if (lVar3 != 0) {
    uVar7 = *(undefined8 *)(lVar1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c08efc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf861a0(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  lVar6 = *(long *)(param_1 + 0x28);
  if (lVar6 != 0) {
    (**(code **)(lVar6 + 0x10))(lVar6,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1066094a8; end: 106609523;  */

void FUN_1066094a8(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e56d98;
    func_0x000106608f70(&PTR____CFConstantStringClassReference_110e56d98);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    FUN_106608dcc();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,ppuVar2);
    _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
    return;
  }
  return;
}



/* Entry: 106609524; end: 1066097a3; -[SCImpalaSubscriptionStore updateHiddenWithEntityID:isHidden:completion:] */

void FUN_106609524(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bf96f00();
  if (((int)uVar1 == 1) || (uVar1 = param_3, func_0x00010bf96f00(), (int)uVar1 == 2)) {
    func_0x00010bf96f00(param_3);
    _objc_initWeak(auStack_78,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010bf96e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b4028;
    func_0x00010bfea360(PTR_PTR_1126b4028);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_3);
    _objc_retain(param_5);
    uVar4 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    uVar5 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f9280(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(param_5);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  else if (param_5 != 0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110e56db8;
    FUN_106608dcc(&PTR____CFConstantStringClassReference_110e56db8);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,ppuVar6);
    _objc_release(ppuVar6);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1066097a4; end: 1066098d3;  */

void FUN_1066097a4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf82040();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,0);
  }
  if ((lVar1 != 0) && (lVar2 != 0)) {
    uVar4 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000107bfa524(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2864e0(uVar4);
    _objc_release(lVar3);
    _objc_release(uVar4);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1066098d4; end: 106609abb; -[SCImpalaSubscriptionStore observeWithCallback:] */

void FUN_1066098d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b2798;
  _objc_opt_new();
  puVar3 = PTR_PTR_1126cc170;
  _objc_alloc();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106609abc;
  puStack_60 = &UNK_11092f388;
  _objc_retain(param_3);
  uStack_58 = param_3;
  func_0x00010bffada0();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar4);
  _objc_initWeak(auStack_80,param_1);
  puVar5 = PTR_PTR_1126afd78;
  _objc_alloc(PTR_PTR_1126afd78);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106609c48;
  puStack_98 = &UNK_110841fb0;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(puVar3);
  puStack_90 = puVar3;
  func_0x00010bffae00(puVar5);
  func_0x00010bef7460(puVar2);
  _objc_release(puVar5);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_106609ca4;
  puStack_c0 = &UNK_110842e18;
  puStack_b8 = puVar2;
  _objc_retain(puVar2);
  ppuVar6 = &puStack_d8;
  _objc_retainBlock(ppuVar6);
  _objc_release(puStack_b8);
  _objc_release(puStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar3);
  _objc_release(uStack_58);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 106609abc; end: 106609c47;  */

void FUN_106609abc(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar2 = PTR_PTR_1126b4038;
    func_0x00010bf5b6e0(PTR_PTR_1126b4038);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b4040;
    _objc_opt_class(PTR_PTR_1126b4040);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar2);
    uVar1 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    if (uVar1 != 0) {
      puVar2 = PTR_PTR_1126cc190;
      _objc_alloc(PTR_PTR_1126cc190);
      FUN_1066083f0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04f020(puVar2);
      _objc_release(uVar3);
      puVar5 = PTR_PTR_1126b4038;
      func_0x00010bf7c180(PTR_PTR_1126b4038);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar6 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar5);
      uVar3 = uVar4;
      if ((uVar6 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(uVar4);
      func_0x00010c18dde0(puVar2);
      _objc_release(uVar3);
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar2);
      _objc_release(puVar2);
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106609c48; end: 106609ca3;  */

void FUN_106609c48(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cf80();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106609ca4; end: 106609cab;  */

void FUN_106609ca4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 106609cac; end: 106609cb3; -[SCImpalaSubscriptionStore shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_106609cac(void)

{
  return 0;
}



/* Entry: 106609cb4; end: 106609cbf; -[SCImpalaSubscriptionStore pushToValdiMarshaller:] */

undefined8 FUN_106609cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df4b0;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  func_0x00010b04b1d8();
  return param_3;
}



/* Entry: 106609cc0; end: 106609d0f; -[SCImpalaSubscriptionStore addListener:] */

void FUN_106609cc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106609d10; end: 106609d5f; -[SCImpalaSubscriptionStore removeListener:] */

void FUN_106609d10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106609d60; end: 106609e4f; -[SCImpalaSubscriptionStore discoverFeedStoryForEntityId:] */

void FUN_106609d60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010bf96f00();
  uVar3 = param_3;
  if ((int)uVar4 == 2) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf96e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c25bc60(uVar1,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if ((int)uVar4 != 1) {
      uVar4 = 0;
      goto LAB_106609e34;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf96e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c067fc0();
    uVar4 = uVar1;
    func_0x00010c25bb60(uVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
LAB_106609e34:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106609e50; end: 106609eaf; -[SCImpalaSubscriptionStore .cxx_destruct] */

void FUN_106609e50(long param_1)

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



/* Entry: 106609eb0; end: 106609ebb; +[SCCSpotlightUploadNotification componentPath] */

undefined ** FUN_106609eb0(void)

{
  return &PTR____CFConstantStringClassReference_110e56df8;
}



/* Entry: 106609ebc; end: 106609eef; -[SCCSpotlightUploadNotification initWithViewModel:componentContext:runtime:] */

void FUN_106609ebc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f2120;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 106609ef0; end: 106609f3f; -[SCCSpotlightUploadNotification setViewModel:] */

void FUN_106609ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106609f40; end: 106609f83; -[SCCSpotlightUploadNotification viewModel] */

void FUN_106609f40(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106609f84; end: 106609fa7; -[SCCSpotlightUploadNotificationContext init] */

void FUN_106609f84(void)

{
  func_0x000106609ff4(PTR_PTR_1126f2128);
  return;
}



/* Entry: 106609fa8; end: 106609fbb; +[SCCSpotlightUploadNotificationContext valdiMarshallableObjectDescriptor] */

void FUN_106609fa8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11092f4b8;
  param_1[1] = &PTR_DAT_11092f518;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106609fbc; end: 106609fdf; -[SCCSpotlightUploadNotificationViewModel init] */

void FUN_106609fbc(void)

{
  func_0x000106609ff4(PTR_PTR_1126f2130);
  return;
}



/* Entry: 106609fe0; end: 10660a017; +[SCCSpotlightUploadNotificationViewModel valdiMarshallableObjectDescriptor] */

void FUN_106609fe0(undefined8 *param_1)

{
  *param_1 = &PTR_s_title_11092f528;
  param_1[1] = &PTR_DAT_11092f648;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10660a018; end: 10660a2cf; -[SCImpalaLegacyBusinessProfileViewControllerProvider initWithNavigationDelegate:valdiRuntimeProvider:actionSheetPresenterFactory:snapTokenProvider:mixerEndpointManager:lensModularCameraPresentation:composerNetworkingClient:urlPreviewProvider:simpleContentFetcher:externalLinkSendingService:circumstanceEngine:valdiBlizzardLoggingServices:] */

undefined8 *
FUN_10660a018(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

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
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126f2138;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[10];
    puVar1[10] = param_5;
    _objc_release(uVar2);
  }
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



/* Entry: 10660a2d0; end: 10660a3eb; -[SCImpalaLegacyBusinessProfileViewControllerProvider createCommunityLensProfileViewControllerWithUserId:displayName:loggingInfo:] */

void FUN_10660a2d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  
  puVar11 = PTR_PTR_1126cc1a0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  lVar12 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  uVar10 = *(undefined8 *)(param_1 + 0x58);
  uVar13 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b100(puVar11,param_2,param_3,param_4,lVar12,uVar2,uVar1,uVar5,uVar6,uVar7,param_5,
                      uVar4,uVar3,uVar8,uVar9,uVar10,uVar13);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar13);
  _objc_release(lVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10660a3ec; end: 10660a48f; -[SCImpalaLegacyBusinessProfileViewControllerProvider .cxx_destruct] */

void FUN_10660a3ec(long param_1)

{
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10660a490; end: 10660a573; -[SCImpalaLegacyBusinessProfileServiceProvider provide] */

void FUN_10660a490(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cc1a8;
  _objc_alloc(PTR_PTR_1126cc1a8);
  func_0x00010c061a20();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10660a574; end: 10660a5b3;  */

void FUN_10660a574(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdeb820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10660a5b4; end: 10660a88f; -[SCImpalaLegacyBusinessProfileServiceProvider _createBusinessProfileViewControllerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10660a5b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  
  puVar1 = PTR_PTR_1126cc1b0;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11274c038;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11274c03c;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11274c040;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010beef000();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11274c044;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11274c048;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c0cef00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11274c04c;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c095660();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_11274c050;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c0d8300();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_11274c054;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c28f860();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_11274c058;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c23c760();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_11274c05c;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010bf9e260();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_11274c060;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274c064;
  _objc_loadWeakRetained();
  func_0x00010c02e960(puVar1,param_2,lVar4,lVar6,lVar8,lVar10,lVar12,lVar14,lVar16,lVar18,lVar20,
                      lVar22,lVar24,param_1);
  _objc_release(param_1);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10660a890; end: 10660a94b; -[SCImpalaLegacyBusinessProfileServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10660a890(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274c05c);
  _objc_destroyWeak(param_1 + _DAT_11274c064);
  _objc_destroyWeak(param_1 + _DAT_11274c04c);
  _objc_destroyWeak(param_1 + _DAT_11274c058);
  _objc_destroyWeak(param_1 + _DAT_11274c054);
  _objc_destroyWeak(param_1 + _DAT_11274c048);
  _objc_destroyWeak(param_1 + _DAT_11274c044);
  _objc_destroyWeak(param_1 + _DAT_11274c050);
  _objc_destroyWeak(param_1 + _DAT_11274c040);
  _objc_destroyWeak(param_1 + _DAT_11274c03c);
  _objc_destroyWeak(param_1 + _DAT_11274c038);
  _objc_destroyWeak(param_1 + _DAT_11274c060);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274c068);
  return;
}



/* Entry: 10660a94c; end: 10660ab1b; -[SCImpalaLegacyServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10660a94c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274c0e4);
  _objc_destroyWeak(param_1 + _DAT_11274c0a4);
  _objc_destroyWeak(param_1 + _DAT_11274c0a0);
  _objc_destroyWeak(param_1 + _DAT_11274c0b8);
  _objc_destroyWeak(param_1 + _DAT_11274c0b4);
  _objc_destroyWeak(param_1 + _DAT_11274c0b0);
  _objc_destroyWeak(param_1 + _DAT_11274c0ac);
  _objc_destroyWeak(param_1 + _DAT_11274c0a8);
  _objc_destroyWeak(param_1 + _DAT_11274c094);
  _objc_destroyWeak(param_1 + _DAT_11274c090);
  _objc_destroyWeak(param_1 + _DAT_11274c088);
  _objc_destroyWeak(param_1 + _DAT_11274c0dc);
  _objc_destroyWeak(param_1 + _DAT_11274c0e0);
  _objc_destroyWeak(param_1 + _DAT_11274c0d0);
  _objc_destroyWeak(param_1 + _DAT_11274c0d8);
  _objc_destroyWeak(param_1 + _DAT_11274c098);
  _objc_destroyWeak(param_1 + _DAT_11274c0d4);
  _objc_destroyWeak(param_1 + _DAT_11274c09c);
  _objc_storeStrong(param_1 + _DAT_11274c084,0);
  _objc_storeStrong(param_1 + _DAT_11274c0c0,0);
  _objc_destroyWeak(param_1 + _DAT_11274c070);
  _objc_storeStrong(param_1 + _DAT_11274c0e8,0);
  _objc_destroyWeak(param_1 + _DAT_11274c0cc);
  _objc_destroyWeak(param_1 + _DAT_11274c0bc);
  _objc_destroyWeak(param_1 + _DAT_11274c080);
  _objc_destroyWeak(param_1 + _DAT_11274c0f4);
  _objc_destroyWeak(param_1 + _DAT_11274c0c8);
  _objc_destroyWeak(param_1 + _DAT_11274c0c4);
  _objc_destroyWeak(param_1 + _DAT_11274c07c);
  _objc_destroyWeak(param_1 + _DAT_11274c0f0);
  _objc_destroyWeak(param_1 + _DAT_11274c078);
  _objc_destroyWeak(param_1 + _DAT_11274c074);
  _objc_destroyWeak(param_1 + _DAT_11274c08c);
  _objc_destroyWeak(param_1 + _DAT_11274c06c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274c0ec);
  return;
}



/* Entry: 10660ab1c; end: 10660ac77; -[SCImpalaNotificationProcessorEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10660ab1c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cc1d8;
  _objc_alloc();
  func_0x00010c01d260();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11274c0f8);
  *(undefined **)(param_1 + _DAT_11274c0f8) = puVar2;
  _objc_release(uVar5);
  param_1 = param_1 + _DAT_11274c0fc;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bf05c00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befabc0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}


