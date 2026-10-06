/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10520b5c4; end: 10520b683; -[SCSearchV2DisplayConfiguration initWithDisableDragToDismiss:hideHeader:useOpaqueBackground:useCustomInsets:disableKeyboardFocusOnEnter:onlySuggestionsInPretype:headerProvider:] */

undefined1 *
FUN_10520b5c4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e6ef0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    *(undefined1 *)((long)puVar1 + 0xb) = param_6;
    *(undefined1 *)((long)puVar1 + 0xc) = param_7;
    *(undefined1 *)((long)puVar1 + 0xd) = param_8;
    uVar2 = param_9;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  return (undefined1 *)puVar1;
}



/* Entry: 10520b684; end: 10520b68b; -[SCSearchV2DisplayConfiguration disableDragToDismiss] */

undefined1 FUN_10520b684(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10520b68c; end: 10520b693; -[SCSearchV2DisplayConfiguration hideHeader] */

undefined1 FUN_10520b68c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10520b694; end: 10520b69b; -[SCSearchV2DisplayConfiguration useOpaqueBackground] */

undefined1 FUN_10520b694(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10520b69c; end: 10520b6a3; -[SCSearchV2DisplayConfiguration useCustomInsets] */

undefined1 FUN_10520b69c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10520b6a4; end: 10520b6ab; -[SCSearchV2DisplayConfiguration disableKeyboardFocusOnEnter] */

undefined1 FUN_10520b6a4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10520b6ac; end: 10520b6b3; -[SCSearchV2DisplayConfiguration onlySuggestionsInPretype] */

undefined1 FUN_10520b6ac(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 10520b6b4; end: 10520b6bb; -[SCSearchV2DisplayConfiguration headerProvider] */

undefined8 FUN_10520b6b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10520b6bc; end: 10520b6c7; -[SCSearchV2DisplayConfiguration .cxx_destruct] */

void FUN_10520b6bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10520b6c8; end: 10520c58f; -[SCSearchV2ViewController initWithSnapchattersDataFetcher:groupStore:groupsDataFetcher:storiesDataCoordinator:userInfoProvider:chatPresenter:profilePresenter:actionSheetPresenter:cameraPresenter:commercePresenter:lensActionHandler:networkingClient:storyPlayer:mapPresenter:nativeUserStoryFetcher:friendsFeedStatusHandlerProvider:subscriptionStore:flavorContext:storySnapViewStateProvider:friendLocationProvider:customDisplayConfiguration:topicPageLauncherFactory:presentationTimeMs:storiesReadReceiptCoordinator:runtime:lensCreatorProfileScopeExposer:lensCreatorProfileScopeServices:friendProfileScopeExposer:chatScopeExposer:chatScopeServices:businessProfilesPresenterScopeExposer:bloopsFeature:composerCoreUIServices:blizzardLogger:cofStore:cofSyncStore:circumstanceEngine:webLauncherPresenter:blockedUserStore:composerFriendStore:composerIncomingFriendStore:suggestedFriendStore:friendmojiProvider:musicFeatureProviderFactory:lensesByCreatorGrpcService:composerPeopleBridgeContactServices:familyCenterPresenter:snapchatPlusPresenter:birthdayPagePresenter:placeStoryPlayerVendor:nativeStoryCardFetcher:userActionHandlerFactory:grpcServiceFactory:sharingExperimentServices:deeplinkActionHandler:searchSafetyReporting:contactSyncer:initialQuery:discoverFeedDataFetcher:lensSearchLaunchConfig:currentPageTracker:createChatScopeExposer:callLauncher:lastInteractionStateProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10520b6c8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined4 param_21,undefined4 param_22,undefined8 param_23,undefined8 param_24,
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
             undefined8 param_65,undefined8 param_66,undefined8 param_67)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  _objc_retain();
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
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain(param_64);
  _objc_retain(param_65);
  _objc_retain();
  _objc_retain(param_67);
  puStack_80 = PTR_PTR_1126e6ef8;
  puVar1 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    func_0x00010c1931e0(puVar1);
    lVar7 = (long)_DAT_11271f950;
    _objc_retain(param_41);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_41;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f954;
    _objc_retain(param_40);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_40;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f958;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_4;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f95c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_5;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f960;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_6;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f964;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_8;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f968;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_9;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f96c;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_10;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f970;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_11;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f974;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_12;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f978;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_17;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f97c;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_13;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f980;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_15;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f984;
    _objc_retain(param_26);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_26;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f988;
    _objc_retain(param_35);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_35;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f98c;
    _objc_retain(param_36);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_36;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271f990);
    *(undefined **)((long)puVar1 + (long)_DAT_11271f990) = puVar3;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f994;
    _objc_retain(param_37);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_37;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f998;
    _objc_retain(param_38);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_38;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f99c;
    _objc_retain(param_39);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_39;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f9a0;
    _objc_retain(param_64);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_64;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b6418;
    _objc_alloc();
    func_0x00010c03d080();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271f9a4);
    *(undefined **)((long)puVar1 + (long)_DAT_11271f9a4) = puVar3;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f9a8;
    _objc_retain(param_42);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_42;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f9ac;
    _objc_retain(param_43);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_43;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f9b0;
    _objc_retain(param_44);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_44;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f9b4;
    _objc_retain(param_45);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_45;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f9b8;
    _objc_retain(param_46);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_46;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b6420;
    _objc_alloc();
    func_0x00010c04cf60();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271f9bc);
    *(undefined **)((long)puVar1 + (long)_DAT_11271f9bc) = puVar3;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f9c0;
    _objc_retain(param_20);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_20;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f9c4;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_14;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f9c8;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_16;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f9cc;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_18;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f9d0;
    _objc_retain(param_23);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_23;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f9d4;
    _objc_retain(param_24);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_24;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f9d8;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_19;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + (long)_DAT_11271f9dc) = param_21;
    lVar7 = (long)_DAT_11271f9e0;
    _objc_retain(param_25);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_25;
    _objc_release(uVar2);
    *(long *)((long)puVar1 + (long)_DAT_11271f9e4) = (long)param_1;
    lVar7 = (long)_DAT_11271f9e8;
    _objc_retain(param_28);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_28;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11271f9ec) = 0;
    _objc_retain(0);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271f9f0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271f9f0) = 0;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f9f4;
    _objc_retain(param_53);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_53;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f9f8;
    _objc_retain(param_34);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_34;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271f9fc;
    _objc_retain(param_33);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_33;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b6428;
    _objc_alloc();
    func_0x00010c015900();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271fa00);
    *(undefined **)((long)puVar1 + (long)_DAT_11271fa00) = puVar3;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271fa04;
    _objc_retain(param_47);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_47;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271fa08;
    _objc_retain(param_48);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_48;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271fa0c;
    _objc_retain(param_50);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_50;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271fa10;
    _objc_retain(param_51);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_51;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271fa14;
    _objc_retain(param_52);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_52;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271fa18;
    _objc_retain(param_59);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_59;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271fa1c;
    _objc_retain(param_49);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_49;
    _objc_release(uVar2);
    lVar8 = (long)_DAT_11271fa20;
    _objc_retain(param_54);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_54;
    _objc_release(uVar2);
    lVar8 = (long)_DAT_11271fa24;
    _objc_retain(param_58);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_58;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271fa28);
    *(undefined **)((long)puVar1 + (long)_DAT_11271fa28) = puVar3;
    _objc_release(uVar2);
    if (*(long *)((long)puVar1 + lVar7) != 0) {
      puVar3 = PTR_PTR_1126b1540;
      _objc_alloc(PTR_PTR_1126b1540);
      func_0x00010bffae80();
      lVar4 = *(long *)((long)puVar1 + lVar7);
      func_0x00010bf4a820();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar4;
      (**(code **)(lVar4 + 0x10))();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271fa2c);
      *(long *)((long)puVar1 + (long)_DAT_11271fa2c) = lVar6;
      _objc_release(uVar2);
      _objc_release(lVar8);
      _objc_release(lVar4);
      puVar5 = PTR_PTR_1126b13d8;
      _objc_alloc(PTR_PTR_1126b13d8);
      func_0x00010bffaea0();
      lVar6 = *(long *)((long)puVar1 + lVar7);
      func_0x00010bf49be0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      (**(code **)(lVar6 + 0x10))();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271fa30);
      *(long *)((long)puVar1 + (long)_DAT_11271fa30) = lVar8;
      _objc_release(uVar2);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(puVar5);
      _objc_release(puVar3);
    }
    lVar7 = (long)_DAT_11271fa34;
    _objc_retain(param_55);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_55;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271fa38;
    _objc_retain(param_56);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_56;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271fa3c;
    _objc_retain(param_57);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_57;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271fa40;
    _objc_retain(param_60);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_60;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271fa44;
    _objc_retain(param_61);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_61;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271fa48;
    _objc_retain(param_62);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_62;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271fa4c;
    _objc_retain(param_63);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_63;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271fa50;
    _objc_retain(param_65);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_65;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271fa54;
    _objc_retain(param_32);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_32;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271fa58;
    _objc_retain(param_66);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_66;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271fa5c;
    _objc_retain(param_67);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_67;
    _objc_release(uVar2);
  }
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



/* Entry: 10520c590; end: 10520d6d3; -[SCSearchV2ViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520c590(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined1 auStack_250 [8];
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined1 auStack_228 [8];
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined1 auStack_200 [8];
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined *puStack_80;
  
  puStack_80 = PTR_PTR_1126e6ef8;
  lStack_88 = param_1;
  _objc_msgSendSuper2(&lStack_88,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c1c8b40(param_1);
  lVar2 = param_1;
  func_0x00010c1c8b40();
  func_0x000106f1b74c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b6430;
  _objc_alloc();
  lVar30 = (long)_DAT_11271f9e0;
  func_0x00010bf7fe60(*(undefined8 *)(param_1 + lVar30));
  func_0x00010c00f7e0();
  lVar6 = lVar2;
  func_0x00010bf16280(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar6;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1887a0(puVar3);
  _objc_release(lVar28);
  _objc_release(lVar6);
  lVar6 = lVar2;
  func_0x00010c142020(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8a20(puVar3);
  _objc_release(lVar6);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(ulong *)(param_1 + lVar30);
  func_0x00010c290080();
  if ((uVar4 & 1) == 0) {
    func_0x00010bf807a0(*(undefined8 *)(param_1 + _DAT_11271fa4c));
  }
  func_0x00010c0df760(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18e8c0(puVar3);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfe1fe0(*(undefined8 *)(param_1 + lVar30));
  func_0x00010c0df6e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a8200(puVar3);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0e8c20(*(undefined8 *)(param_1 + lVar30));
  func_0x00010c0df6e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18eb20(puVar3);
  _objc_release(puVar5);
  lVar6 = param_1;
  func_0x00010be22800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fd580(puVar3);
  _objc_release(lVar6);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1951c0(puVar3);
  _objc_release(puVar5);
  lVar28 = (long)_DAT_11271f988;
  lVar6 = *(long *)(param_1 + lVar28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar6 == 0) {
    func_0x00010c175f00(puVar3);
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + lVar28);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06d620();
    func_0x00010c0df760(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c175f00(puVar3);
    _objc_release(puVar5);
    _objc_release(uVar7);
  }
  _objc_release(lVar6);
  func_0x00010c19f7c0(puVar3);
  func_0x00010c1acc20(puVar3);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar6 = (long)_DAT_11271fa4c;
  if (*(long *)(param_1 + lVar6) == 0) {
    func_0x00010c18e920(puVar3);
  }
  else {
    func_0x00010c094960();
    func_0x00010c0df760(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18e920(puVar3);
    _objc_release(puVar5);
  }
  func_0x00010c1a8120(puVar3);
  _objc_initWeak(auStack_90,param_1);
  puVar8 = PTR_PTR_1126b6438;
  _objc_alloc();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10520d6d4;
  puStack_a0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_98,auStack_90);
  puStack_e0 = puVar5;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_10520d778;
  puStack_c8 = &UNK_110859918;
  _objc_copyWeak(auStack_c0,auStack_90);
  puStack_108 = puVar5;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_10520d860;
  puStack_f0 = &UNK_110843540;
  _objc_copyWeak(auStack_e8,auStack_90);
  puStack_130 = puVar5;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_10520d940;
  puStack_118 = &UNK_1108531d0;
  _objc_copyWeak(auStack_110,auStack_90);
  puStack_158 = puVar5;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_10520da1c;
  puStack_140 = &UNK_1108531d0;
  _objc_copyWeak(auStack_138,auStack_90);
  puStack_180 = puVar5;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_10520daf8;
  puStack_168 = &UNK_110843540;
  _objc_copyWeak(auStack_160,auStack_90);
  func_0x00010c00d160();
  uVar9 = *(undefined8 *)(param_1 + _DAT_11271f98c);
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010c0b7600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(param_1 + _DAT_11271f984);
  func_0x00010c275420();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + _DAT_11271fa04);
  func_0x00010c0d2ee0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126b1678;
  _objc_alloc();
  puStack_1a8 = puVar5;
  uStack_1a0 = 0xc2000000;
  uStack_198 = 0x10520dbd4;
  puStack_190 = &UNK_11084e7a0;
  _objc_copyWeak(auStack_188,auStack_90);
  func_0x00010c017a80();
  puVar13 = PTR_PTR_1126b1678;
  _objc_alloc();
  puStack_1d0 = puVar5;
  uStack_1c8 = 0xc2000000;
  pcStack_1c0 = FUN_10520dc24;
  puStack_1b8 = &UNK_11084e7a0;
  _objc_copyWeak(auStack_1b0,auStack_90);
  func_0x00010c017a80();
  puVar14 = PTR_PTR_1126b1678;
  _objc_alloc();
  puStack_1f8 = puVar5;
  uStack_1f0 = 0xc2000000;
  uStack_1e8 = 0x10520dca0;
  puStack_1e0 = &UNK_11084e7a0;
  _objc_copyWeak(auStack_1d8,auStack_90);
  func_0x00010c017a80();
  puVar15 = PTR_PTR_1126b6440;
  _objc_alloc();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11271fa48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008640();
  _objc_release(uVar7);
  puVar16 = PTR_PTR_1126b6448;
  _objc_alloc();
  func_0x00010c006620();
  puVar5 = PTR_PTR_1126b6450;
  _objc_alloc();
  uVar17 = *(undefined8 *)(param_1 + _DAT_11271f95c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + _DAT_11271f9ac);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + _DAT_11271f9b4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + _DAT_11271f9a8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + _DAT_11271f9b8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + _DAT_11271f9b0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + _DAT_11271fa3c);
  func_0x00010bf45060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar23;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019280();
  lVar29 = (long)_DAT_11271fa60;
  uVar27 = *(undefined8 *)(param_1 + lVar29);
  *(undefined **)(param_1 + lVar29) = puVar5;
  _objc_release(uVar27);
  _objc_release(uVar7);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  func_0x00010c1850c0(*(undefined8 *)(param_1 + lVar29));
  func_0x00010c18ef80(*(undefined8 *)(param_1 + lVar29));
  func_0x00010c176be0(*(undefined8 *)(param_1 + lVar29));
  puVar5 = PTR_PTR_1126b6458;
  _objc_alloc();
  func_0x00010c0388c0((double)*(long *)(param_1 + _DAT_11271f9e4));
  func_0x00010c1da940(*(undefined8 *)(param_1 + lVar29));
  _objc_release(puVar5);
  func_0x00010c1e5ca0(*(undefined8 *)(param_1 + lVar29));
  func_0x00010c1e5900(*(undefined8 *)(param_1 + lVar29));
  func_0x00010c17df40(*(undefined8 *)(param_1 + lVar29));
  func_0x00010c224e20(*(undefined8 *)(param_1 + lVar29));
  puVar5 = PTR_PTR_1126b6460;
  _objc_opt_new();
  func_0x00010c1ef060(*(undefined8 *)(param_1 + lVar29));
  _objc_release(puVar5);
  func_0x00010c20dba0(*(undefined8 *)(param_1 + lVar29));
  func_0x00010c1c9e20(*(undefined8 *)(param_1 + lVar29));
  uVar7 = *(undefined8 *)(param_1 + _DAT_11271fa08);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bd540(*(undefined8 *)(param_1 + lVar29));
  _objc_release(uVar7);
  puVar5 = PTR_PTR_1126b6468;
  _objc_alloc(PTR_PTR_1126b6468);
  func_0x00010bff9f20();
  func_0x00010c2050c0(*(undefined8 *)(param_1 + lVar29));
  _objc_release(puVar5);
  func_0x00010c19a200(*(undefined8 *)(param_1 + lVar29));
  func_0x00010c205d80(*(undefined8 *)(param_1 + lVar29));
  uVar7 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c26d080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213ae0(*(undefined8 *)(param_1 + lVar29));
  _objc_release(uVar7);
  puVar5 = PTR_PTR_1126b1678;
  _objc_alloc();
  puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_218 = 0xc2000000;
  pcStack_210 = FUN_10520dd1c;
  puStack_208 = &UNK_11084e7a0;
  _objc_copyWeak(auStack_200,auStack_90);
  func_0x00010c017a80();
  func_0x00010c170460(*(undefined8 *)(param_1 + lVar29));
  _objc_release(puVar5);
  lVar28 = *(long *)(param_1 + lVar6);
  func_0x00010c10aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar28 != 0) {
    puVar5 = PTR_PTR_1126b6470;
    _objc_opt_new(PTR_PTR_1126b6470);
    uVar7 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c10aa60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb300(puVar5);
    _objc_release(uVar7);
    func_0x00010c1bcaa0(*(undefined8 *)(param_1 + lVar29));
    _objc_release(puVar5);
  }
  puVar24 = PTR_PTR_1126b6478;
  _objc_opt_new(PTR_PTR_1126b6478);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c290c60(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c0df6e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195300(puVar24);
  _objc_release(puVar5);
  func_0x00010c1695e0(*(undefined8 *)(param_1 + lVar29));
  puVar5 = PTR_PTR_1126afe50;
  _objc_alloc(PTR_PTR_1126afe50);
  lVar6 = (long)_DAT_11271f9e8;
  func_0x00010c040b80();
  func_0x00010c1c1bc0();
  _objc_opt_class(PTR_PTR_1126b6480);
  func_0x00010c181960(puVar5);
  func_0x00010c1cba60(*(undefined8 *)(param_1 + lVar29));
  uVar7 = *(undefined8 *)(param_1 + _DAT_11271fa38);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4d00(*(undefined8 *)(param_1 + lVar29));
  _objc_release(uVar7);
  puVar25 = PTR_PTR_1126b6488;
  _objc_alloc(PTR_PTR_1126b6488);
  func_0x00010bffaca0();
  func_0x00010c175840(*(undefined8 *)(param_1 + lVar29));
  _objc_release(puVar25);
  puVar25 = PTR_PTR_1126b1678;
  _objc_alloc(PTR_PTR_1126b1678);
  puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_240 = 0xc2000000;
  uStack_238 = 0x10520dd6c;
  puStack_230 = &UNK_11084e7a0;
  _objc_copyWeak(auStack_228,auStack_90);
  func_0x00010c017a80(puVar25);
  func_0x00010c1cb540(*(undefined8 *)(param_1 + lVar29));
  func_0x00010c18ab60(*(undefined8 *)(param_1 + lVar29));
  func_0x00010c1f89a0(*(undefined8 *)(param_1 + lVar29));
  uVar7 = *(undefined8 *)(param_1 + _DAT_11271fa5c);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7f40(*(undefined8 *)(param_1 + lVar29));
  _objc_release(uVar7);
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    puVar26 = PTR__OBJC_CLASS___CNContactStore_1126b1900;
    func_0x00010bf10fe0();
    if (puVar26 == (undefined *)0x4) {
      uVar7 = *(undefined8 *)(param_1 + lVar6);
      _objc_copyWeak(auStack_250,auStack_90);
      _objc_opt_class(PTR_PTR_1126b6490);
      func_0x00010c0b7ac0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c199960(*(undefined8 *)(param_1 + lVar29));
      _objc_release(uVar7);
      _objc_destroyWeak(auStack_250);
    }
  }
  puVar26 = PTR_PTR_1126b6498;
  _objc_alloc();
  func_0x00010c061d40();
  lVar6 = (long)_DAT_11271fa64;
  uVar7 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar26;
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c295200(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7bc0();
  _objc_release(uVar7);
  lVar6 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar6);
  iVar1 = (int)*(undefined8 *)(param_1 + lVar30);
  func_0x00010c2906a0();
  if (iVar1 != 0) {
    puVar26 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(lVar6);
    _objc_release(puVar26);
  }
  lVar6 = *(long *)(param_1 + lVar30);
  func_0x00010bfdfdc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    lVar28 = *(long *)(param_1 + lVar30);
    func_0x00010bfdfdc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar28;
    (**(code **)(lVar28 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + _DAT_11271fa68);
    *(long *)(param_1 + _DAT_11271fa68) = lVar6;
    _objc_release(uVar7);
    _objc_release(lVar28);
  }
  _objc_release(puVar25);
  _objc_destroyWeak(auStack_228);
  _objc_release(puVar5);
  _objc_release(puVar24);
  _objc_destroyWeak(auStack_200);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_destroyWeak(auStack_1d8);
  _objc_release(puVar13);
  _objc_destroyWeak(auStack_1b0);
  _objc_release(puVar12);
  _objc_destroyWeak(auStack_188);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar10);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_160);
  _objc_destroyWeak(auStack_138);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_e8);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 10520d6d4; end: 10520d777;  */

void FUN_10520d6d4(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10520d74c;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10520d778; end: 10520d827;  */

void FUN_10520d778(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10520d828;
  puStack_50 = &UNK_110870610;
  _objc_copyWeak(auStack_40,param_1 + 0x20);
  uStack_48 = param_2;
  uStack_38 = param_3;
  _objc_retain(param_2);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 10520d828; end: 10520d85f;  */

void FUN_10520d828(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6d1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10520d860; end: 10520d907;  */

void FUN_10520d860(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10520d908;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  uStack_40 = param_2;
  _objc_retain(param_2);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10520d908; end: 10520d93b;  */

void FUN_10520d908(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6d200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10520d93c; end: 10520d93f;  */

void FUN_10520d93c(void)

{
  return;
}



/* Entry: 10520d940; end: 10520d9e7;  */

void FUN_10520d940(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10520d9e8;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  uStack_40 = param_2;
  _objc_retain(param_2);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10520d9e8; end: 10520da1b;  */

void FUN_10520d9e8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6d500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10520da1c; end: 10520dac3;  */

void FUN_10520da1c(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10520dac4;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  uStack_40 = param_2;
  _objc_retain(param_2);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10520dac4; end: 10520daf7;  */

void FUN_10520dac4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6d600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10520daf8; end: 10520db9f;  */

void FUN_10520daf8(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10520dba0;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  uStack_40 = param_2;
  _objc_retain(param_2);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10520dba0; end: 10520dc23;  */

void FUN_10520dba0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6d6a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10520dc24; end: 10520dd1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520dc24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11271fa34);
    func_0x00010bf59da0(uVar1,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10520dd1c; end: 10520de4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520dd1c(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11271fa14);
    _objc_retain(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10520de50; end: 10520dfa3; -[SCSearchV2ViewController viewWillLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520de50(double param_1,undefined8 param_2,double param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126e6ef8;
  lStack_60 = param_4;
  _objc_msgSendSuper2(&lStack_60,PTR_s_viewWillLayoutSubviews_112526958);
  iVar1 = (int)*(undefined8 *)(param_4 + _DAT_11271f9e0);
  func_0x00010c290080();
  lVar2 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  if (iVar1 == 0) {
    func_0x00010bf20c00();
    func_0x00010c19f0e0(*(undefined8 *)(param_4 + _DAT_11271fa64));
    _objc_release(lVar2);
  }
  else {
    func_0x00010c148fc0();
    dVar5 = param_1;
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c148fc0();
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    lVar3 = param_4;
    dVar6 = dVar5;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    lVar4 = (long)_DAT_11271fa64;
    func_0x00010c19f0e0(0,param_1,dVar5,(dVar6 - param_1) - param_3,*(undefined8 *)(param_4 + lVar4)
                       );
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010c17d4c0(*(undefined8 *)(param_4 + lVar4));
  }
  return;
}



/* Entry: 10520dfa4; end: 10520e02b; -[SCSearchV2ViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520dfa4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6ef8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010bee0a60(param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271fa28);
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 10520e02c; end: 10520e08b; -[SCSearchV2ViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520e02c(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6ef8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271f9a0);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar1);
  return;
}



/* Entry: 10520e08c; end: 10520e0df; -[SCSearchV2ViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520e08c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6ef8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  func_0x00010bf94800(*(undefined8 *)(param_1 + _DAT_11271fa64));
  return;
}



/* Entry: 10520e0e0; end: 10520e133; -[SCSearchV2ViewController viewDidDisappear:] */

void FUN_10520e0e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6ef8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidDisappear__112684c48);
  uVar1 = param_1;
  func_0x00010c06d1a0();
  if ((int)uVar1 != 0) {
    func_0x00010be40300(param_1);
  }
  return;
}



/* Entry: 10520e134; end: 10520e183; -[SCSearchV2ViewController didMoveToParentViewController:] */

void FUN_10520e134(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6ef8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_didMoveToParentViewController__1125bb948);
  if (param_3 == 0) {
    func_0x00010be40300(param_1);
  }
  return;
}



/* Entry: 10520e184; end: 10520e1db; -[SCSearchV2ViewController _isExiting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520e184(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_11271f9ec) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_11271f9ec) = 1;
  param_1 = param_1 + _DAT_11271fa6c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1546e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10520e1dc; end: 10520e227; -[SCSearchV2ViewController _needsDismissal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520e1dc(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11271f9ec) = 1;
  param_1 = param_1 + _DAT_11271fa6c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c154700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10520e228; end: 10520e27f; -[SCSearchV2ViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520e228(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if ((*(byte *)(param_1 + _DAT_11271f9ec) & 1) == 0) {
    func_0x00010be40300(param_1);
  }
  puStack_28 = PTR_PTR_1126e6ef8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10520e280; end: 10520e287; -[SCSearchV2ViewController prefersStatusBarHidden] */

undefined8 FUN_10520e280(void)

{
  return 0;
}



/* Entry: 10520e288; end: 10520e28b; -[SCSearchV2ViewController preferredStatusBarStyle] */

undefined8 FUN_10520e288(long param_1)

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



/* Entry: 10520e28c; end: 10520e293; -[SCSearchV2ViewController preferredStatusBarUpdateAnimation] */

undefined8 FUN_10520e28c(void)

{
  return 1;
}



/* Entry: 10520e294; end: 10520e363; -[SCSearchV2ViewController _updateStatusBarAppearanceAnimated:] */

void FUN_10520e294(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e6ef8;
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
  if (param_3 != 0) {
    func_0x00010c106ee0(param_1);
  }
  func_0x00010c14dc40(puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 10520e364; end: 10520e36b; -[SCSearchV2ViewController setNeedsStatusBarAppearanceUpdate] */

void FUN_10520e364(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee0a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateStatusBarAppearanceAnimat_112595c40,0)
  ;
  return;
}



/* Entry: 10520e36c; end: 10520e377; -[SCSearchV2ViewController supportedInterfaceOrientations] */

undefined8 FUN_10520e36c(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 10520e378; end: 10520e3bb; -[SCSearchV2ViewController exit:] */

void FUN_10520e378(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010be40300(param_1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10520e3bc; end: 10520e3cb; -[SCSearchV2ViewController backgroundExitBehavior] */

void FUN_10520e3bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9b4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4014000000000000,PTR_PTR_1126aecb0,PTR_s_exitAfterSpecificTimeWithSeconds_1125c46d8);
  return;
}



/* Entry: 10520e3cc; end: 10520e3cf; -[SCSearchV2ViewController _dismissSearch] */

void FUN_10520e3cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be626f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__needsDismissal_112576358);
  return;
}



/* Entry: 10520e3d0; end: 10520e447; -[SCSearchV2ViewController _openGroupChat:groupType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520e3d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271fa64);
  _objc_retain(param_3);
  func_0x00010bf94800(uVar1,param_2,1);
  func_0x00010c10b8c0(*(undefined8 *)(param_1 + _DAT_11271f968),param_2,param_3,param_4,0,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10520e448; end: 10520e557; -[SCSearchV2ViewController _openGroupProfile:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520e448(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271f960);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  func_0x00010bfc6120(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10520e558; end: 10520e5b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520e558(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c10dce0(*(undefined8 *)(param_1 + _DAT_11271f96c));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10520e5b4; end: 10520e863; -[SCSearchV2ViewController _openPublisherProfile:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520e5b4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar2 = PTR_PTR_1126b64a0;
    _objc_opt_new();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    func_0x00010c0b4ca0();
    _objc_release(uVar1);
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e5b60(puVar2);
    _objc_release(puVar6);
    uVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar6);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    func_0x00010c1e5ba0(puVar2);
    _objc_release(uVar1);
    uVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar6);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    func_0x00010c1745a0(puVar2);
    _objc_release(uVar1);
    puVar6 = PTR_PTR_1126b64a8;
    _objc_alloc(PTR_PTR_1126b64a8);
    puVar4 = puVar2;
    func_0x00010c11b1e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010060(puVar6);
    _objc_release(puVar4);
    _objc_initWeak(auStack_58,param_1);
    uVar7 = *(undefined8 *)(param_1 + _DAT_11271f9c0);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(puVar2);
    func_0x00010bfcaea0(uVar7);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar6);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10520e864; end: 10520e91f;  */

void FUN_10520e864(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10520e920;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  uStack_40 = param_2;
  _objc_retain(param_2);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10520e920; end: 10520e9f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520e920(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b4158;
    _objc_alloc(PTR_PTR_1126b4158);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf25140(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b64b0;
    func_0x00010bf6e4c0(PTR_PTR_1126b64b0,param_2,6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c080120(uVar5);
    func_0x00010c03c160(puVar2,param_2,uVar3,lVar1,lVar1,puVar4,0,uVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + _DAT_11271f9f8),param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10520e9f8; end: 10520ed5b; -[SCSearchV2ViewController _openShowProfile:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520e9f8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar2 = PTR_PTR_1126b64b8;
    _objc_opt_new();
    uVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    func_0x00010c0b4ca0(uVar1);
    _objc_release(uVar1);
    func_0x00010c1e5b60(puVar2);
    uVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    func_0x00010c1cafa0(puVar2);
    _objc_release(uVar1);
    uVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    func_0x00010c174420(puVar2);
    _objc_release(uVar1);
    uVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    func_0x00010c201be0(puVar2);
    _objc_release(uVar1);
    uVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    func_0x00010c067fc0(uVar1);
    _objc_release(uVar1);
    func_0x00010c195360(puVar2);
    puVar6 = PTR_PTR_1126b64a8;
    _objc_alloc(PTR_PTR_1126b64a8);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c11b1e0();
    func_0x00010c14de00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010060(puVar6);
    _objc_release(puVar4);
    _objc_initWeak(auStack_58,param_1);
    uVar7 = *(undefined8 *)(param_1 + _DAT_11271f9c0);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(puVar2);
    func_0x00010bfcaea0(uVar7);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar6);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10520ed5c; end: 10520ee17;  */

void FUN_10520ed5c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10520ee18;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  uStack_40 = param_2;
  _objc_retain(param_2);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10520ee18; end: 10520ef17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520ee18(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126b4158;
    _objc_alloc(PTR_PTR_1126b4158);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf24ec0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c237cc0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b64b0;
    func_0x00010bf6e4c0(PTR_PTR_1126b64b0,param_2,6);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x28);
    func_0x00010c080120();
    func_0x00010c03c1a0(puVar3,param_2,uVar4,uVar5,lVar2,lVar2,puVar6,0,uVar1);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    func_0x00010bf9d620(*(undefined8 *)(lVar2 + _DAT_11271f9f8),param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10520ef18; end: 10520ef4f; -[SCSearchV2ViewController _getServerOverrides] */

void FUN_10520ef18(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b64c0;
  _objc_alloc_init(PTR_PTR_1126b64c0);
  func_0x00010c184960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10520ef50; end: 10520efe7; -[SCSearchV2ViewController _openStore:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520ef50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c04e820();
  _objc_release(param_3);
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b1068;
    _objc_alloc(PTR_PTR_1126b1068);
    func_0x00010c057c40();
    func_0x00010c10f0c0(*(undefined8 *)(param_1 + _DAT_11271f97c),param_2,puVar2,param_1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10520efe8; end: 10520f0bf; -[SCSearchV2ViewController didRenderValdiView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520efe8(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  lVar3 = (long)_DAT_11271f9f0;
  if (*(long *)(param_2 + lVar3) != 0) {
    lVar2 = (long)_DAT_11271fa70;
    if (((*(byte *)(param_2 + lVar2) & 1) == 0) && (param_4 == *(long *)(param_2 + _DAT_11271fa64)))
    {
      lVar4 = (long)_DAT_11271f9e4;
      if (0 < *(long *)(param_2 + lVar4)) {
        puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        lVar4 = *(long *)(param_2 + lVar4);
        _objc_release(puVar1);
        func_0x00010c0aeea0(param_1 * 1000.0 - (double)lVar4,*(undefined8 *)(param_2 + lVar3));
        *(undefined1 *)(param_2 + lVar2) = 1;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10520f0c0; end: 10520f117; -[SCSearchV2ViewController searchBoxForTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520f0c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271fa64);
  func_0x00010c295200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29cea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10520f118; end: 10520f16f; -[SCSearchV2ViewController dismissButtonForTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520f118(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271fa64);
  func_0x00010c295200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29cea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10520f170; end: 10520f1c7; -[SCSearchV2ViewController createGroupButtonForTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520f170(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271fa64);
  func_0x00010c295200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29cea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10520f1c8; end: 10520f21f; -[SCSearchV2ViewController floatingSearchButtonForTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520f1c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271fa64);
  func_0x00010c295200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29cea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10520f220; end: 10520f277; -[SCSearchV2ViewController floatingQueryCtaForTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520f220(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271fa64);
  func_0x00010c295200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29cea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10520f278; end: 10520f2cf; -[SCSearchV2ViewController backgroundViewForTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520f278(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271fa64);
  func_0x00010c295200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29cea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10520f2d0; end: 10520f327; -[SCSearchV2ViewController headerBackgroundViewForTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520f2d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271fa64);
  func_0x00010c295200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29cea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10520f328; end: 10520f37f; -[SCSearchV2ViewController scrollViewForTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520f328(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271fa64);
  func_0x00010c295200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29cea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10520f380; end: 10520f3cf; -[SCSearchV2ViewController _scrollableView] */

void FUN_10520f380(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c152b80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010010fab4();
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10520f3d0; end: 10520f3df; -[SCSearchV2ViewController onInitialRender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520f3d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a1530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271fa64),
             PTR_s_waitUntilInitialRenderWithComple_112685f70);
  return;
}



/* Entry: 10520f3e0; end: 10520f3eb; -[SCSearchV2ViewController defaultProjectNameV2] */

void FUN_10520f3e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c153230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_search_1126326a8);
  return;
}



/* Entry: 10520f3ec; end: 10520f457; -[SCSearchV2ViewController businessProfilesPresenterScopeWillDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520f3ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar2 = (long)_DAT_11271f9f8;
    lVar1 = *(long *)(param_1 + lVar2);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10520f458; end: 10520f467; -[SCSearchV2ViewController headerItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10520f458(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271fa68);
}



/* Entry: 10520f468; end: 10520f487; -[SCSearchV2ViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520f468(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271fa6c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10520f488; end: 10520f49b; -[SCSearchV2ViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520f488(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271fa6c,param_3);
  return;
}



/* Entry: 10520f49c; end: 10520f917; -[SCSearchV2ViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10520f49c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271fa6c);
  _objc_storeStrong(param_1 + _DAT_11271fa68,0);
  _objc_storeStrong(param_1 + _DAT_11271fa5c,0);
  _objc_storeStrong(param_1 + _DAT_11271fa58,0);
  _objc_storeStrong(param_1 + _DAT_11271f9fc,0);
  _objc_storeStrong(param_1 + _DAT_11271fa54,0);
  _objc_storeStrong(param_1 + _DAT_11271fa50,0);
  _objc_storeStrong(param_1 + _DAT_11271f9a0,0);
  _objc_storeStrong(param_1 + _DAT_11271fa4c,0);
  _objc_storeStrong(param_1 + _DAT_11271fa44,0);
  _objc_storeStrong(param_1 + _DAT_11271fa40,0);
  _objc_storeStrong(param_1 + _DAT_11271fa3c,0);
  _objc_storeStrong(param_1 + _DAT_11271fa24,0);
  _objc_storeStrong(param_1 + _DAT_11271fa14,0);
  _objc_storeStrong(param_1 + _DAT_11271fa38,0);
  _objc_storeStrong(param_1 + _DAT_11271fa34,0);
  _objc_storeStrong(param_1 + _DAT_11271fa20,0);
  _objc_storeStrong(param_1 + _DAT_11271f9f4,0);
  _objc_storeStrong(param_1 + _DAT_11271fa28,0);
  _objc_storeStrong(param_1 + _DAT_11271fa30,0);
  _objc_storeStrong(param_1 + _DAT_11271fa2c,0);
  _objc_storeStrong(param_1 + _DAT_11271fa1c,0);
  _objc_storeStrong(param_1 + _DAT_11271f954,0);
  _objc_storeStrong(param_1 + _DAT_11271fa08,0);
  _objc_storeStrong(param_1 + _DAT_11271f9f0,0);
  _objc_storeStrong(param_1 + _DAT_11271fa04,0);
  _objc_storeStrong(param_1 + _DAT_11271f984,0);
  _objc_storeStrong(param_1 + _DAT_11271fa74,0);
  _objc_storeStrong(param_1 + _DAT_11271f99c,0);
  _objc_storeStrong(param_1 + _DAT_11271f998,0);
  _objc_storeStrong(param_1 + _DAT_11271fa60,0);
  _objc_storeStrong(param_1 + _DAT_11271f9d0,0);
  _objc_storeStrong(param_1 + _DAT_11271f9cc,0);
  _objc_storeStrong(param_1 + _DAT_11271f9c8,0);
  _objc_storeStrong(param_1 + _DAT_11271f980,0);
  _objc_storeStrong(param_1 + _DAT_11271f9a4,0);
  _objc_storeStrong(param_1 + _DAT_11271f994,0);
  _objc_storeStrong(param_1 + _DAT_11271f990,0);
  _objc_storeStrong(param_1 + _DAT_11271f98c,0);
  _objc_storeStrong(param_1 + _DAT_11271f988,0);
  _objc_storeStrong(param_1 + _DAT_11271f9d4,0);
  _objc_storeStrong(param_1 + _DAT_11271f9c4,0);
  _objc_storeStrong(param_1 + _DAT_11271f9c0,0);
  _objc_storeStrong(param_1 + _DAT_11271f9bc,0);
  _objc_storeStrong(param_1 + _DAT_11271f9d8,0);
  _objc_storeStrong(param_1 + _DAT_11271f964,0);
  _objc_storeStrong(param_1 + _DAT_11271f9b8,0);
  _objc_storeStrong(param_1 + _DAT_11271f9b4,0);
  _objc_storeStrong(param_1 + _DAT_11271f9b0,0);
  _objc_storeStrong(param_1 + _DAT_11271f9ac,0);
  _objc_storeStrong(param_1 + _DAT_11271f9a8,0);
  _objc_storeStrong(param_1 + _DAT_11271fa48,0);
  _objc_storeStrong(param_1 + _DAT_11271f958,0);
  _objc_storeStrong(param_1 + _DAT_11271f960,0);
  _objc_storeStrong(param_1 + _DAT_11271f95c,0);
  _objc_storeStrong(param_1 + _DAT_11271fa18,0);
  _objc_storeStrong(param_1 + _DAT_11271fa10,0);
  _objc_storeStrong(param_1 + _DAT_11271fa0c,0);
  _objc_storeStrong(param_1 + _DAT_11271f950,0);
  _objc_storeStrong(param_1 + _DAT_11271fa00,0);
  _objc_storeStrong(param_1 + _DAT_11271f978,0);
  _objc_storeStrong(param_1 + _DAT_11271f974,0);
  _objc_storeStrong(param_1 + _DAT_11271f970,0);
  _objc_storeStrong(param_1 + _DAT_11271f9f8,0);
  _objc_storeStrong(param_1 + _DAT_11271f97c,0);
  _objc_storeStrong(param_1 + _DAT_11271f96c,0);
  _objc_storeStrong(param_1 + _DAT_11271f968,0);
  _objc_storeStrong(param_1 + _DAT_11271f9e8,0);
  _objc_storeStrong(param_1 + _DAT_11271f9e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271fa64,0);
  return;
}



/* Entry: 10520f918; end: 10520f91f; -[SCSearchV2ViewController pageViewName] */

undefined8 FUN_10520f918(void)

{
  return 0xfb;
}



/* Entry: 10520f920; end: 10521055f; -[SCSearchV2ViewControllerFactory initWithFriendsFeedServices:groupServices:snapchatterServices:storiesServices:storiesPlaybackServices:composerStoriesServices:mapDestinationSubject:mapPersonLocationServices:topicViewerScopeExposer:storiesSnapReadReceiptService:composerStorySnapViewStateServices:composerServices:composerTopicServices:composerMapServices:composerUserInfoServices:commerceShoppingScopeExposer:webBrowsingScopeExposer:commerceDeepLinkServices:composerLensActionHandlingServices:lensPickerDelegate:friendProfileScopeExposer:groupProfileScopeExposer:lensCreatorProfileScopeExposer:lensCreatorProfileScopeServices:friendActionSheetScopeExposer:groupActionSheetScopeExposer:chatScopeExposer:chatScopeServices:publicGroupsChatScopeLauncher:bloopsFeatureInfoServices:chatCameraScopeExposer:chatCameraScopeServices:businessProfilesPresenterScopeExposer:composerNetworkingBridgeServices:callLauncher:circumstanceEngineServices:composerCoreUIServices:creatorsSubscriptionStoreServices:valdiBlizzardLoggingServices:valdiCOFStoresServices:composerPeopleBridgeFriendServices:composerPeopleBridgeGroupServices:composerPeopleBridgeFriendmojiServices:composerPeopleBridgeContactServices:asyncQueueServices:musicFeatureProviderServices:taskManagementServices:plusServices:plusSubscribeScopeExposer:plusSubscribeScopeServices:plusManagementScopeExposer:composerPlaceStoryServices:discoverFeedDataServices:genericStoryQueryServices:userActionHandlerServices:birthdayPageServices:sharingExperimentServices:deepLinkHandlingServices:pageLauncher:safetyReportScopeExposer:navigationServices:contactSyncServices:lensSearchLaunchConfig:createChatScopeExposer:lastInteractionStateProvider:] */

undefined8 *
FUN_10520f920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
             undefined8 param_65,undefined8 param_66,undefined8 param_67)

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
  puStack_70 = PTR_PTR_1126e6f00;
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
    _objc_retain(param_21);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[10];
    puVar1[10] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_20;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xb,param_22);
    _objc_retain(param_23);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_42;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_43);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_43;
    _objc_release(uVar2);
    _objc_retain(param_44);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_45;
    _objc_release(uVar2);
    _objc_retain(param_46);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_46;
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
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_52;
    _objc_release(uVar2);
    _objc_retain(param_53);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_53;
    _objc_release(uVar2);
    _objc_retain(param_54);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_54;
    _objc_release(uVar2);
    _objc_retain(param_56);
    uVar2 = puVar1[0x37];
    puVar1[0x37] = param_56;
    _objc_release(uVar2);
    _objc_retain(param_55);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_55;
    _objc_release(uVar2);
    _objc_retain(param_57);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_57;
    _objc_release(uVar2);
    _objc_retain(param_58);
    uVar2 = puVar1[0x39];
    puVar1[0x39] = param_58;
    _objc_release(uVar2);
    _objc_retain(param_59);
    uVar2 = puVar1[0x3a];
    puVar1[0x3a] = param_59;
    _objc_release(uVar2);
    _objc_retain(param_60);
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = param_60;
    _objc_release(uVar2);
    _objc_retain(param_61);
    uVar2 = puVar1[0x3c];
    puVar1[0x3c] = param_61;
    _objc_release(uVar2);
    _objc_retain(param_62);
    uVar2 = puVar1[0x3d];
    puVar1[0x3d] = param_62;
    _objc_release(uVar2);
    _objc_retain(param_63);
    uVar2 = puVar1[0x3e];
    puVar1[0x3e] = param_63;
    _objc_release(uVar2);
    _objc_retain(param_64);
    uVar2 = puVar1[0x3f];
    puVar1[0x3f] = param_64;
    _objc_release(uVar2);
    _objc_retain(param_65);
    uVar2 = puVar1[0x40];
    puVar1[0x40] = param_65;
    _objc_release(uVar2);
    _objc_retain(param_66);
    uVar2 = puVar1[0x41];
    puVar1[0x41] = param_66;
    _objc_release(uVar2);
    _objc_retain(param_67);
    uVar2 = puVar1[0x42];
    puVar1[0x42] = param_67;
    _objc_release(uVar2);
  }
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



/* Entry: 105210560; end: 10521138f; -[SCSearchV2ViewControllerFactory viewControllerWithFlavorContext:displayConfiguration:presentationTimeMs:initialQuery:currentPageTracker:] */

void FUN_105210560(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  undefined *puVar24;
  long lVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined8 uVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
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
  long lVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined *puVar62;
  undefined8 uVar63;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  lVar1 = param_2;
  func_0x00010bdec100();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x128);
  func_0x00010bf3f640();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b64c8;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfb9e20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfb9ca0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + 8);
  func_0x00010bfb9fa0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0162a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  puVar7 = PTR_PTR_1126b64d0;
  _objc_alloc();
  func_0x00010c062d00();
  puVar8 = PTR_PTR_1126b64d8;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010bfcf2c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0158e0();
  _objc_release(uVar2);
  puVar9 = PTR_PTR_1126b64e0;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  func_0x00010bf423c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000020();
  _objc_release(uVar2);
  puVar10 = PTR_PTR_1126b64e8;
  _objc_alloc();
  func_0x00010bffde40();
  puVar11 = PTR_PTR_1126b64f0;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c244ac0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010bfcf8c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049700();
  _objc_release(uVar5);
  _objc_release(uVar2);
  puVar12 = PTR_PTR_1126b64f8;
  _objc_alloc();
  func_0x00010c033320();
  uVar5 = *(undefined8 *)(param_2 + 0x138);
  func_0x00010c0b9940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = uVar2;
  if (*(long *)(param_2 + 0x40) == 0) {
    func_0x00010c0cfac0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0b9960();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar13 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010bf450c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  uVar13 = uVar6;
  func_0x00010c101180();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_2 + 0x108);
  func_0x00010c2609c0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  uVar16 = *(undefined8 *)(param_2 + 0x158);
  func_0x00010c08fc80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar17);
  uVar18 = uVar14;
  func_0x00010bf56d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar17);
  _objc_release(uVar14);
  _objc_release(uVar16);
  puVar19 = PTR_PTR_1126b6500;
  _objc_alloc();
  uVar14 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c12a480(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04d0c0();
  _objc_release(uVar14);
  uVar16 = *(undefined8 *)(param_2 + 0x120);
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar16);
  puVar20 = PTR_PTR_1126b0c98;
  _objc_alloc();
  func_0x00010c0368e0();
  lVar21 = *(long *)(param_2 + 0x140);
  func_0x00010bfb8b80();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar21;
  (**(code **)(lVar21 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar21);
  uVar22 = *(undefined8 *)(param_2 + 0xf8);
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = *(long *)(param_2 + 0x140);
  func_0x00010c261ee0();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR_PTR_1126b1538;
  _objc_alloc(PTR_PTR_1126b1538);
  func_0x00010c033420();
  lVar21 = lVar23;
  (**(code **)(lVar23 + 0x10))(lVar23,puVar24);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar24);
  _objc_release(lVar23);
  lVar25 = *(long *)(param_2 + 0x150);
  func_0x00010bfb9920();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR_PTR_1126b1548;
  _objc_alloc(PTR_PTR_1126b1548);
  func_0x00010c046040();
  lVar23 = lVar25;
  (**(code **)(lVar25 + 0x10))(lVar25,puVar24);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar24);
  _objc_release(lVar25);
  puVar24 = PTR_PTR_1126ae720;
  uVar63 = *(undefined8 *)(param_2 + 0xe8);
  uVar26 = *(undefined8 *)(param_2 + 0x180);
  _objc_retain();
  _objc_retain(uVar63);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR_PTR_1126b6508;
  _objc_alloc();
  func_0x00010c032fa0();
  puVar28 = PTR_PTR_1126b6510;
  _objc_alloc();
  func_0x00010c037840();
  puVar29 = PTR_PTR_1126b6518;
  _objc_alloc();
  func_0x00010bff78e0();
  puVar30 = PTR_PTR_1126b6520;
  _objc_alloc();
  uVar16 = *(undefined8 *)(param_2 + 0x1b8);
  func_0x00010c11ab80(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0177c0();
  _objc_release(uVar16);
  uVar31 = *(undefined8 *)(param_2 + 0x1c0);
  func_0x00010c291060();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar31;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar31);
  puVar32 = PTR_PTR_1126b6528;
  _objc_alloc();
  uVar31 = *(undefined8 *)(param_2 + 0x1d8);
  func_0x00010bf67f80(uVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c009a80();
  _objc_release(uVar31);
  puVar33 = PTR_PTR_1126b1530;
  _objc_alloc();
  func_0x00010c0460e0();
  puVar34 = PTR_PTR_1126b6530;
  _objc_alloc();
  func_0x00010c041300();
  puVar35 = PTR_PTR_1126b6538;
  _objc_alloc();
  uVar36 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = *(undefined8 *)(param_2 + 0x148);
  func_0x00010bfcf320();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c258580();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = *(undefined8 *)(param_2 + 0x168);
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar40;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = *(undefined8 *)(param_2 + 0xe8);
  func_0x00010c0d8300();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = uVar41;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar43 = *(undefined8 *)(param_2 + 0x118);
  func_0x00010c25b2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar44 = uVar43;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar45 = *(undefined8 *)(param_2 + 0xe0);
  func_0x00010c0b97a0();
  _objc_retainAutoreleasedReturnValue();
  uVar46 = uVar45;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar47 = *(undefined8 *)(param_2 + 0x130);
  func_0x00010c275400();
  _objc_retainAutoreleasedReturnValue();
  uVar48 = uVar47;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar49 = *(undefined8 *)(param_2 + 0x110);
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  uVar50 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  uVar51 = uVar50;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar52 = uVar51;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  uVar53 = *(undefined8 *)(param_2 + 0xc0);
  func_0x00010bf1dcc0();
  _objc_retainAutoreleasedReturnValue();
  uVar54 = *(undefined8 *)(param_2 + 0x140);
  func_0x00010bf1d860();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = *(long *)(param_2 + 0x140);
  func_0x00010bfebe60();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar55;
  (**(code **)(lVar55 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  uVar56 = *(undefined8 *)(param_2 + 0x178);
  func_0x00010c0d2ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar57 = uVar56;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar58 = *(undefined8 *)(param_2 + 0x1a8);
  func_0x00010bf44e60();
  _objc_retainAutoreleasedReturnValue();
  uVar59 = uVar63;
  func_0x00010bfcfa80();
  _objc_retainAutoreleasedReturnValue();
  uVar60 = *(undefined8 *)(param_2 + 0x1f8);
  func_0x00010bf4a700();
  _objc_retainAutoreleasedReturnValue();
  uVar61 = *(undefined8 *)(param_2 + 0x1b0);
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0497c0(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar61);
  _objc_release(uVar60);
  _objc_release(uVar59);
  _objc_release(uVar58);
  _objc_release(uVar57);
  _objc_release(uVar56);
  _objc_release(lVar25);
  _objc_release(lVar55);
  _objc_release(uVar54);
  _objc_release(uVar53);
  _objc_release(uVar52);
  _objc_release(uVar51);
  _objc_release(uVar50);
  _objc_release(uVar49);
  _objc_release(uVar48);
  _objc_release(uVar47);
  _objc_release(uVar46);
  _objc_release(uVar45);
  _objc_release(uVar44);
  _objc_release(uVar43);
  _objc_release(uVar42);
  _objc_release(uVar41);
  _objc_release(uVar31);
  _objc_release(uVar40);
  _objc_release(uVar39);
  _objc_release(uVar38);
  _objc_release(uVar37);
  _objc_release(uVar36);
  puVar62 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  func_0x00010c21b220(puVar7);
  _objc_release(puVar62);
  puVar62 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  func_0x00010c21b220(puVar27);
  _objc_release(puVar62);
  puVar62 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  func_0x00010c21b220(puVar28);
  _objc_release(puVar62);
  puVar62 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  func_0x00010c21b220(puVar29);
  _objc_release(puVar62);
  func_0x00010c1e1580(puVar11);
  func_0x00010c1e1580(puVar12);
  func_0x00010c1e1580(uVar13);
  func_0x00010c1e1580(uVar18);
  puVar62 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  func_0x00010c21b220(uVar5);
  _objc_release(puVar62);
  _objc_release(puVar34);
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(uVar16);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar24);
  _objc_release(uVar26);
  _objc_release(uVar63);
  _objc_release(lVar23);
  _objc_release(lVar21);
  _objc_release(uVar22);
  _objc_release(lVar17);
  _objc_release(puVar20);
  _objc_release(uVar14);
  _objc_release(puVar19);
  _objc_release(uVar18);
  _objc_release(uVar15);
  _objc_release(uVar13);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar35);
  return;
}



/* Entry: 105211390; end: 1052114d3;  */

void FUN_105211390(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c25d780(uVar1,param_2,&PTR____CFConstantStringClassReference_110dcba78,
                      &PTR____CFConstantStringClassReference_110dcba98,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0f98e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfcfa80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c0b7020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1052114d4; end: 1052115c7; -[SCSearchV2ViewControllerFactory _createCofSyncStoreBridgeObservable] */

void FUN_1052114d4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x170);
  func_0x00010bf0c120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c11e0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1052115c8;
  puStack_58 = &UNK_110841f80;
  puStack_50 = puVar1;
  lStack_48 = param_1;
  func_0x000100a0df38(uVar4,&puStack_70);
  puVar5 = puVar1;
  func_0x00010c272120(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1052115c8; end: 105211627;  */

void FUN_1052115c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x128);
  func_0x00010bf3f720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105211628; end: 105211953; -[SCSearchV2ViewControllerFactory .cxx_destruct] */

void FUN_105211628(long param_1)

{
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
  _objc_destroyWeak(param_1 + 0x58);
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



/* Entry: 105211954; end: 105211afb; -[SCSearchBaseEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105211954(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar1 = param_2;
  func_0x00010bded940();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_11271fb80;
  lVar2 = param_2 + lVar10;
  _objc_loadWeakRetained();
  func_0x00010bfb27e0();
  lVar3 = param_2;
  func_0x00010be04300(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2 + lVar10;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c10f740();
  lVar5 = param_2 + lVar10;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c064240();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2 + _DAT_11271fb84;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar1;
  func_0x00010c29c540(param_1,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c18b5e0(lVar9);
  lVar10 = param_2 + lVar10;
  _objc_loadWeakRetained(lVar10);
  lVar2 = lVar10;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(lVar10);
  _objc_storeWeak(param_2 + _DAT_11271fb88,lVar9);
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105211afc; end: 105211b9f; -[SCSearchBaseEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105211afc(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  lVar4 = (long)_DAT_11271fb88;
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_1 + lVar4;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010c06d1a0();
    _objc_release(uVar2);
    _objc_release(lVar1);
    if ((uVar3 & 1) == 0) {
      func_0x00010bf95c20(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105211b8c;
    }
  }
  puStack_38 = PTR_PTR_1126e6f08;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
LAB_105211b8c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105211ba0; end: 105211c53; -[SCSearchBaseEntryPoint endWithNoCleanup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105211ba0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126afc98;
  func_0x00010c0da5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11271fb8c);
  *(undefined **)(param_1 + _DAT_11271fb8c) = puVar1;
  _objc_retain();
  _objc_release(uVar4);
  param_1 = param_1 + _DAT_11271fb80;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar2);
  _objc_release(param_1);
  puVar3 = puVar1;
  func_0x00010c117720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105211c54; end: 105211cd7; -[SCSearchBaseEntryPoint _displayConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105211c54(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + _DAT_11271fb80;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfb27e0();
  _objc_release(lVar1);
  if ((int)lVar2 == 1) {
    func_0x00010be84820(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else if ((int)lVar2 == 6) {
    func_0x00010bec8e80(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105211cd8; end: 105211d1f; -[SCSearchBaseEntryPoint _gatedLastInteractionStateProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105211cd8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11271fb90;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c089140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105211d20; end: 1052124cb; -[SCSearchBaseEntryPoint _createFactoryHelper] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105211d20(long param_1,undefined8 param_2)

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
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  long lVar70;
  undefined8 uVar71;
  
  puVar1 = PTR_PTR_1126b6540;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11271fb94;
  _objc_loadWeakRetained();
  lVar3 = param_1 + _DAT_11271fb98;
  _objc_loadWeakRetained();
  lVar4 = param_1 + _DAT_11271fb9c;
  _objc_loadWeakRetained();
  lVar5 = param_1 + _DAT_11271fba0;
  _objc_loadWeakRetained();
  lVar6 = param_1 + _DAT_11271fba4;
  _objc_loadWeakRetained();
  lVar7 = param_1 + _DAT_11271fba8;
  _objc_loadWeakRetained();
  lVar70 = (long)_DAT_11271fb80;
  lVar8 = param_1 + lVar70;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c0b8e20();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11271fbac;
  _objc_loadWeakRetained();
  uVar56 = *(undefined8 *)(param_1 + _DAT_11271fbb0);
  lVar11 = param_1 + _DAT_11271fbb4;
  _objc_loadWeakRetained();
  lVar12 = param_1 + _DAT_11271fbb8;
  _objc_loadWeakRetained();
  lVar13 = param_1 + _DAT_11271fbbc;
  _objc_loadWeakRetained();
  lVar14 = param_1 + _DAT_11271fbc0;
  _objc_loadWeakRetained();
  lVar15 = param_1 + _DAT_11271fbc4;
  _objc_loadWeakRetained();
  lVar16 = param_1 + _DAT_11271fbc8;
  _objc_loadWeakRetained();
  uVar57 = *(undefined8 *)(param_1 + _DAT_11271fbcc);
  uVar58 = *(undefined8 *)(param_1 + _DAT_11271fbd0);
  lVar17 = param_1 + _DAT_11271fbd4;
  _objc_loadWeakRetained();
  lVar18 = param_1 + _DAT_11271fbd8;
  _objc_loadWeakRetained();
  lVar19 = param_1 + lVar70;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c095c00();
  _objc_retainAutoreleasedReturnValue();
  uVar59 = *(undefined8 *)(param_1 + _DAT_11271fbdc);
  uVar60 = *(undefined8 *)(param_1 + _DAT_11271fbe0);
  uVar61 = *(undefined8 *)(param_1 + _DAT_11271fbe4);
  lVar21 = param_1 + _DAT_11271fbe8;
  _objc_loadWeakRetained();
  uVar62 = *(undefined8 *)(param_1 + _DAT_11271fbec);
  uVar63 = *(undefined8 *)(param_1 + _DAT_11271fbf0);
  uVar64 = *(undefined8 *)(param_1 + _DAT_11271fbf4);
  lVar22 = param_1 + _DAT_11271fbf8;
  _objc_loadWeakRetained();
  lVar23 = param_1 + _DAT_11271fbfc;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010c11a360();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_11271fc00;
  _objc_loadWeakRetained();
  uVar65 = *(undefined8 *)(param_1 + _DAT_11271fc04);
  lVar26 = param_1 + _DAT_11271fc08;
  _objc_loadWeakRetained();
  uVar66 = *(undefined8 *)(param_1 + _DAT_11271fc0c);
  lVar27 = param_1 + _DAT_11271fc10;
  _objc_loadWeakRetained();
  lVar28 = param_1 + _DAT_11271fc14;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010bf280c0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1 + _DAT_11271fc18;
  _objc_loadWeakRetained();
  lVar31 = param_1 + _DAT_11271fc1c;
  _objc_loadWeakRetained();
  lVar32 = param_1 + _DAT_11271fc20;
  _objc_loadWeakRetained();
  lVar33 = param_1 + _DAT_11271fc24;
  _objc_loadWeakRetained();
  lVar34 = param_1 + _DAT_11271fc28;
  _objc_loadWeakRetained();
  lVar35 = param_1 + _DAT_11271fc2c;
  _objc_loadWeakRetained();
  lVar36 = param_1 + _DAT_11271fc30;
  _objc_loadWeakRetained();
  lVar37 = param_1 + _DAT_11271fc34;
  _objc_loadWeakRetained();
  lVar38 = param_1 + _DAT_11271fc38;
  _objc_loadWeakRetained();
  lVar39 = param_1 + _DAT_11271fc3c;
  _objc_loadWeakRetained();
  lVar40 = param_1 + _DAT_11271fc40;
  _objc_loadWeakRetained();
  lVar41 = param_1 + _DAT_11271fc44;
  _objc_loadWeakRetained();
  lVar42 = param_1 + _DAT_11271fc48;
  _objc_loadWeakRetained();
  uVar67 = *(undefined8 *)(param_1 + _DAT_11271fc4c);
  lVar43 = param_1 + _DAT_11271fc50;
  _objc_loadWeakRetained();
  uVar68 = *(undefined8 *)(param_1 + _DAT_11271fc54);
  lVar44 = param_1 + _DAT_11271fc58;
  _objc_loadWeakRetained();
  lVar45 = param_1 + _DAT_11271fc5c;
  _objc_loadWeakRetained();
  lVar46 = param_1 + _DAT_11271fc60;
  _objc_loadWeakRetained();
  lVar47 = param_1 + _DAT_11271fc64;
  _objc_loadWeakRetained();
  lVar48 = param_1 + _DAT_11271fc68;
  _objc_loadWeakRetained();
  lVar49 = param_1 + _DAT_11271fc6c;
  _objc_loadWeakRetained();
  lVar50 = param_1 + _DAT_11271fc70;
  _objc_loadWeakRetained();
  lVar51 = param_1 + _DAT_11271fc74;
  _objc_loadWeakRetained();
  lVar52 = lVar51;
  func_0x00010c0f14e0();
  _objc_retainAutoreleasedReturnValue();
  uVar69 = *(undefined8 *)(param_1 + _DAT_11271fc78);
  lVar53 = param_1 + _DAT_11271fc7c;
  _objc_loadWeakRetained();
  lVar54 = param_1 + _DAT_11271fc80;
  _objc_loadWeakRetained();
  lVar70 = param_1 + lVar70;
  _objc_loadWeakRetained();
  lVar55 = lVar70;
  func_0x00010c0969a0();
  _objc_retainAutoreleasedReturnValue();
  uVar71 = *(undefined8 *)(param_1 + _DAT_11271fc84);
  func_0x00010be1a620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016560(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7,lVar9,lVar10,uVar56,lVar11,
                      lVar12,lVar13,lVar14,lVar15,lVar16,uVar57,uVar58,lVar17,lVar18,lVar20,uVar59,
                      uVar60,uVar61,lVar21,uVar62,uVar63,uVar64,lVar22,lVar24,lVar25,uVar65,lVar26,
                      uVar66,lVar27,lVar29,lVar30,lVar31,lVar32,lVar33,lVar34,lVar35,lVar36,lVar37,
                      lVar38,lVar39,lVar40,lVar41,lVar42,uVar67,lVar43,uVar68,lVar44,lVar45,lVar46,
                      lVar47,lVar48,lVar49,lVar50,lVar52,uVar69,lVar53,lVar54,lVar55,uVar71,param_1)
  ;
  _objc_release(param_1);
  _objc_release(lVar55);
  _objc_release(lVar70);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
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



/* Entry: 1052124cc; end: 10521250f; -[SCSearchBaseEntryPoint _pulldownDisplayConfiguration] */

void FUN_1052124cc(void)

{
  _objc_alloc(PTR_PTR_1126b6548);
  func_0x00010c00cb40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105212510; end: 1052125f3; -[SCSearchBaseEntryPoint _suggestionsDisplayConfiguration] */

void FUN_105212510(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1052125f4;
  puStack_48 = &UNK_1108706e0;
  _objc_copyWeak(auStack_40,auStack_38);
  ppuVar1 = &puStack_60;
  _objc_retainBlock();
  puVar2 = PTR_PTR_1126b6548;
  _objc_alloc(PTR_PTR_1126b6548);
  func_0x00010c00cb40();
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1052125f4; end: 105212837;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052125f4(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126af080;
    _objc_opt_new(PTR_PTR_1126af080);
    func_0x00010c20eaa0();
    ppuVar1 = &PTR____CFConstantStringClassReference_110dcbaf8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcbaf8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar10);
    _objc_release(ppuVar1);
    lVar2 = param_1 + _DAT_11271fc7c;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bfdf340();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c116640(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20eaa0();
    func_0x00010c213a60(lVar2);
    func_0x00010befa120(puVar5);
    lVar3 = lVar4;
    func_0x00010c153540();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      func_0x00010c20eaa0(lVar3);
      func_0x00010c213a60(lVar3);
      func_0x00010befa120(puVar5);
    }
    puVar6 = PTR_PTR_1126b6550;
    _objc_alloc(PTR_PTR_1126b6550);
    func_0x00010bff9fe0();
    func_0x00010c188540(puVar10);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar4;
    func_0x00010bef8bc0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar8 != 0) {
      func_0x00010c20eaa0(lVar8);
      func_0x00010c213a60(lVar8);
      func_0x00010befa120(puVar7);
    }
    puVar9 = PTR_PTR_1126b6550;
    _objc_alloc(PTR_PTR_1126b6550);
    func_0x00010bff9fe0();
    func_0x00010c2194c0(puVar10);
    _objc_release(puVar9);
    _objc_release(lVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(puVar5);
    _objc_release(lVar4);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105212838; end: 105212883; -[SCSearchBaseEntryPoint searchV2ViewControllerNeedsDismissal:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105212838(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11271fb80;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c2bd480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c154a20();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105212884; end: 1052128cf; -[SCSearchBaseEntryPoint searchV2ViewControllerIsExiting:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105212884(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11271fb80;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c2bd480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c154a20();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052128d0; end: 105212c63; -[SCSearchBaseEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052128d0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271fb90);
  _objc_destroyWeak(param_1 + _DAT_11271fbf8);
  _objc_storeStrong(param_1 + _DAT_11271fc84,0);
  _objc_storeStrong(param_1 + _DAT_11271fc78,0);
  _objc_storeStrong(param_1 + _DAT_11271fc4c,0);
  _objc_destroyWeak(param_1 + _DAT_11271fc50);
  _objc_storeStrong(param_1 + _DAT_11271fc54,0);
  _objc_storeStrong(param_1 + _DAT_11271fbd0,0);
  _objc_storeStrong(param_1 + _DAT_11271fbcc,0);
  _objc_storeStrong(param_1 + _DAT_11271fc0c,0);
  _objc_destroyWeak(param_1 + _DAT_11271fc08);
  _objc_storeStrong(param_1 + _DAT_11271fc04,0);
  _objc_storeStrong(param_1 + _DAT_11271fbf4,0);
  _objc_storeStrong(param_1 + _DAT_11271fbdc,0);
  _objc_destroyWeak(param_1 + _DAT_11271fbe8);
  _objc_storeStrong(param_1 + _DAT_11271fbe4,0);
  _objc_storeStrong(param_1 + _DAT_11271fbb0,0);
  _objc_storeStrong(param_1 + _DAT_11271fbf0,0);
  _objc_storeStrong(param_1 + _DAT_11271fbec,0);
  _objc_destroyWeak(param_1 + _DAT_11271fc80);
  _objc_storeStrong(param_1 + _DAT_11271fbe0,0);
  _objc_storeStrong(param_1 + _DAT_11271fc8c,0);
  _objc_destroyWeak(param_1 + _DAT_11271fbfc);
  _objc_destroyWeak(param_1 + _DAT_11271fb84);
  _objc_destroyWeak(param_1 + _DAT_11271fc74);
  _objc_destroyWeak(param_1 + _DAT_11271fc6c);
  _objc_destroyWeak(param_1 + _DAT_11271fc68);
  _objc_destroyWeak(param_1 + _DAT_11271fc64);
  _objc_destroyWeak(param_1 + _DAT_11271fc58);
  _objc_destroyWeak(param_1 + _DAT_11271fc48);
  _objc_destroyWeak(param_1 + _DAT_11271fc60);
  _objc_destroyWeak(param_1 + _DAT_11271fc5c);
  _objc_destroyWeak(param_1 + _DAT_11271fc44);
  _objc_destroyWeak(param_1 + _DAT_11271fc10);
  _objc_destroyWeak(param_1 + _DAT_11271fc40);
  _objc_destroyWeak(param_1 + _DAT_11271fc3c);
  _objc_destroyWeak(param_1 + _DAT_11271fbd8);
  _objc_destroyWeak(param_1 + _DAT_11271fbc4);
  _objc_destroyWeak(param_1 + _DAT_11271fbc0);
  _objc_destroyWeak(param_1 + _DAT_11271fc28);
  _objc_destroyWeak(param_1 + _DAT_11271fc24);
  _objc_destroyWeak(param_1 + _DAT_11271fc20);
  _objc_destroyWeak(param_1 + _DAT_11271fc18);
  _objc_destroyWeak(param_1 + _DAT_11271fc1c);
  _objc_destroyWeak(param_1 + _DAT_11271fc14);
  _objc_destroyWeak(param_1 + _DAT_11271fbac);
  _objc_destroyWeak(param_1 + _DAT_11271fc00);
  _objc_destroyWeak(param_1 + _DAT_11271fba8);
  _objc_destroyWeak(param_1 + _DAT_11271fc70);
  _objc_destroyWeak(param_1 + _DAT_11271fbd4);
  _objc_destroyWeak(param_1 + _DAT_11271fc38);
  _objc_destroyWeak(param_1 + _DAT_11271fbc8);
  _objc_destroyWeak(param_1 + _DAT_11271fc34);
  _objc_destroyWeak(param_1 + _DAT_11271fc30);
  _objc_destroyWeak(param_1 + _DAT_11271fc2c);
  _objc_destroyWeak(param_1 + _DAT_11271fbbc);
  _objc_destroyWeak(param_1 + _DAT_11271fbb8);
  _objc_destroyWeak(param_1 + _DAT_11271fbb4);
  _objc_destroyWeak(param_1 + _DAT_11271fc88);
  _objc_destroyWeak(param_1 + _DAT_11271fba4);
  _objc_destroyWeak(param_1 + _DAT_11271fba0);
  _objc_destroyWeak(param_1 + _DAT_11271fb9c);
  _objc_destroyWeak(param_1 + _DAT_11271fc7c);
  _objc_destroyWeak(param_1 + _DAT_11271fb98);
  _objc_destroyWeak(param_1 + _DAT_11271fb94);
  _objc_destroyWeak(param_1 + _DAT_11271fb80);
  _objc_storeStrong(param_1 + _DAT_11271fb8c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271fb88);
  return;
}



/* Entry: 105212c64; end: 105212e17; -[SCSearchV2ActionSheetPresenter initWithSnapchattersDataFetcher:composerCoreUIServices:chatPresenter:groupActionSheetScopeExposer:profilePresenter:groupsDataFetcher:chatCameraScopeExposer:chatCameraScopeServices:] */

undefined1 *
FUN_105212c64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126e6f10;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_10;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = 0;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105212e18; end: 105212e9f; -[SCSearchV2ActionSheetPresenter actionSheetPresenter] */

void FUN_105212e18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010beef000(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  uVar3 = uVar2;
  func_0x00010c0b7620(uVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105212ea0; end: 105212f6f; -[SCSearchV2ActionSheetPresenter _presentChatReplyCameraWithConfiguration:] */

void FUN_105212ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105212f70;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105212f70; end: 10521302b;  */

void FUN_105212f70(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x28);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x30);
      lVar2 = lVar1 + 0x58;
      _objc_loadWeakRetained(lVar2);
      func_0x00010bf23680(uVar3,param_2,lVar2,*(undefined8 *)(param_1 + 0x20),lVar1,1,0,0,0,0,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0x28),param_2,uVar3);
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10521302c; end: 105213033; -[SCSearchV2ActionSheetPresenter shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_10521302c(void)

{
  return 0;
}



/* Entry: 105213034; end: 10521303f; -[SCSearchV2ActionSheetPresenter pushToValdiMarshaller:] */

undefined8 FUN_105213034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af9b828(param_3,param_1);
  func_0x00010af9b820();
  func_0x00010af9b7f8();
  func_0x00010af9b808();
  return param_3;
}



/* Entry: 105213040; end: 105213147; -[SCSearchV2ActionSheetPresenter presentActionSheetForGroupWithGroupId:analyticsContext:] */

void FUN_105213040(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar1 = param_1;
    func_0x00010c10fd00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40(puVar3,param_2,lVar1,0);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126b2858;
    _objc_alloc(PTR_PTR_1126b2858);
    func_0x00010c0584e0();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20),param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105213148; end: 1052131e7; -[SCSearchV2ActionSheetPresenter groupActionSheetOpenProfileForGroupId:] */

void FUN_105213148(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfc61a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c10fd00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10dce0(uVar2,param_2,uVar1,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052131e8; end: 105213297; -[SCSearchV2ActionSheetPresenter groupActionSheetChatWithGroupId:deepLinkURL:] */

void FUN_1052131e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1068;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c057c40();
  _objc_release(param_4);
  func_0x00010c10fd00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10b8c0(uVar2,param_2,param_3,0,puVar1,param_1);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105213298; end: 105213397; -[SCSearchV2ActionSheetPresenter groupActionSheetShowCameraForGroupId:] */

void FUN_105213298(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bfc61a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126b1010;
  _objc_alloc(PTR_PTR_1126b1010);
  func_0x00010c02ec80();
  func_0x00010c1d86a0();
  func_0x00010c1b2900(puVar2,param_2,1);
  func_0x00010c1eb300(puVar2,param_2,param_3);
  _objc_release(param_3);
  uVar4 = uVar1;
  func_0x00010bfcef60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb080(puVar2,param_2,uVar4);
  _objc_release(uVar4);
  puVar3 = puVar2;
  func_0x00010c271a20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7a9c0(param_1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


