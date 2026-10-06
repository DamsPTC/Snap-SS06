/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10504afdc; end: 10504b023; -[SCGroupUnifiedProfileMembersActionHandler friendActionSheetDidDismiss:] */

void FUN_10504afdc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10504b024; end: 10504b077; -[SCGroupUnifiedProfileMembersActionHandler _showProfileForSnapchatter:] */

void FUN_10504b024(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0c7920();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10504b078; end: 10504b19f; -[SCGroupUnifiedProfileMembersActionHandler _showActionSheetForSnapchatter:groupConversationId:] */

void FUN_10504b078(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_3 != 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar3 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c038f40(puVar1,param_2,lVar3,0);
    _objc_release(lVar3);
    puVar2 = PTR_PTR_1126b2860;
    _objc_alloc(PTR_PTR_1126b2860);
    func_0x00010c0589a0();
    _objc_release(param_3);
    func_0x00010c1a46c0(puVar2,param_2,param_4);
    _objc_release(param_4);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28),param_2,puVar2);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10504b1a0; end: 10504b2af; -[SCGroupUnifiedProfileMembersActionHandler _customUIContainerFromPresentingViewController] */

void FUN_10504b1a0(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10504b2b0;
  puStack_58 = &UNK_110849680;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c0311a0(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10504b2b0; end: 10504b323;  */

void FUN_10504b2b0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7f4c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10504b324; end: 10504b373; -[SCGroupUnifiedProfileMembersActionHandler _presentViewController:] */

void FUN_10504b324(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10eda0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10504b374; end: 10504b3a7; -[SCGroupUnifiedProfileMembersActionHandler _dismissViewController] */

void FUN_10504b374(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf84b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10504b3a8; end: 10504b3bf; -[SCGroupUnifiedProfileMembersActionHandler presentingViewController] */

void FUN_10504b3a8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10504b3c0; end: 10504b3cb; -[SCGroupUnifiedProfileMembersActionHandler setPresentingViewController:] */

void FUN_10504b3c0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 10504b3cc; end: 10504b3e3; -[SCGroupUnifiedProfileMembersActionHandler delegate] */

void FUN_10504b3cc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10504b3e4; end: 10504b3ef; -[SCGroupUnifiedProfileMembersActionHandler setDelegate:] */

void FUN_10504b3e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 10504b3f0; end: 10504b453; -[SCGroupUnifiedProfileMembersActionHandler .cxx_destruct] */

void FUN_10504b3f0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10504b454; end: 10504c35f; -[SCGroupProfilePageActionHandler initWithDataSource:userSession:snapchattersDataMutator:snapchattersDataProvider:blockedSnapchatterFetcher:remoteStoriesDataProvider:storiesMediaCoordinator:readReceiptCoordinator:startChatDelegate:navigationDelegate:profileChatMediaDataSource:friendsFeedDataCoordinator:conversationServices:charmsDataCoordinator:charmsViewingDataCoordinator:charmsBlizzardLogger:promptSectionDataCoordinator:pinnedConversationsDataCoordinator:circumstanceEngine:friendActionSheetScopeExposer:createChatSelectionScopeExposer:editGroupNameScopeExposer:editGroupNameScopeBuilderServices:userBlizzardServices:operaSessionScopeExposer:operaSessionScopeServices:featureSettingsService:chatLogger:groupServices:groupActionSheetScopeExposer:grapheneServices:attributionServices:storiesCachedSummaryInfoProvider:contextOperaPluginProvider:snapchattersSynchronousDataFetcher:webBrowsingScopeExposer:authenticatedNetworkServices:contentDelivery:chatMediaFetcher:musicContentRestrictionServices:addToStoryCameraScopeLauncher:addToStoryCameraScopeBuilder:chatCameraScopeLauncher:chatCameraScopeBuilder:photoPermissionCoordinator:filterFactory:previewURLVideoProvider:eraseMessageScopeExposer:eraseMessageScopeServices:externalLinkSendingService:safetyReportScopeExposer:saveFriendStoryOperaPluginProvider:contextOperaChromeLayerPluginProvider:discoverOperaPluginCreator:applicationLifecycleEvents:chatCustomizationHubScopeExposer:chatCustomizationHubScopeServices:bloopsReportScopeExposer:temporaryFileWriter:ourStoriesAttributionManager:notificationOSSettingsRetriever:offPlatformShareServices:spotlightShareSender:spotlightPlatformAnalyticsCreator:valdiRuntimeProvider:snapSaver:notificationPool:standardExternalContentShareScopeExposer:groupExternalShareScopeExposer:groupExternalShareScopeServices:chatAttachmentHandlerScopeExposer:discoverFeedNotificationServices:contentProductPlaybackScopeExposer:contentProductPlaybackScopeServices:discoverFeedEventsController:streakRestorePurchaseScopeFactoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10504b454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
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
             undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
             undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain();
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
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
  _objc_retain(param_71);
  _objc_retain(in_stack_000001f0);
  _objc_retain(in_stack_000001f8);
  _objc_retain(in_stack_00000200);
  _objc_retain(in_stack_00000208);
  _objc_retain(in_stack_00000210);
  _objc_retain(in_stack_00000218);
  _objc_retain(in_stack_00000220);
  _objc_retain(in_stack_00000228);
  puStack_70 = PTR_PTR_1126e5c40;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271a6e4);
    *(undefined **)((long)puVar1 + (long)_DAT_11271a6e4) = puVar2;
    _objc_release(uVar5);
    lVar8 = (long)_DAT_11271a6e8;
    _objc_storeWeak((long)puVar1 + lVar8,param_3);
    lVar11 = (long)_DAT_11271a6ec;
    _objc_retain(param_4);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_4;
    _objc_release(uVar5);
    lVar11 = (long)_DAT_11271a6f0;
    _objc_retain(param_31);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_31;
    _objc_release(uVar5);
    lVar11 = (long)_DAT_11271a6f4;
    _objc_retain(param_63);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_63;
    _objc_release(uVar5);
    lVar10 = (long)_DAT_11271a6f8;
    _objc_retain(param_16);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_16;
    _objc_release(uVar5);
    lVar11 = (long)_DAT_11271a6fc;
    _objc_retain(param_41);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_41;
    _objc_release(uVar5);
    lVar11 = (long)_DAT_11271a700;
    _objc_retain(param_54);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_54;
    _objc_release(uVar5);
    lVar11 = (long)_DAT_11271a704;
    _objc_retain(param_66);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_66;
    _objc_release(uVar5);
    lVar11 = (long)_DAT_11271a708;
    _objc_retain(param_67);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_67;
    _objc_release(uVar5);
    lVar11 = (long)_DAT_11271a70c;
    _objc_retain(param_68);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_68;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126b4060;
    _objc_alloc();
    func_0x00010c05d060();
    lVar11 = (long)_DAT_11271a710;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar2;
    _objc_release(uVar5);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar11));
    puVar2 = PTR_PTR_1126b4050;
    _objc_alloc();
    lVar11 = (long)puVar1 + lVar8;
    _objc_loadWeakRetained(lVar11);
    lVar3 = lVar11;
    func_0x00010bfceb20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c004d40();
    lVar9 = (long)_DAT_11271a714;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar2;
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar11);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar9));
    lVar11 = (long)_DAT_11271a718;
    _objc_retain(param_64);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_64;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126b4138;
    _objc_alloc_init();
    lVar11 = (long)_DAT_11271a71c;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar2;
    _objc_release(uVar5);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar11));
    func_0x00010c17c5e0(*(undefined8 *)((long)puVar1 + lVar11));
    puVar2 = PTR_PTR_1126b4070;
    _objc_alloc();
    uVar5 = param_33;
    func_0x00010bfcf8c0(param_33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05daa0();
    lVar11 = (long)_DAT_11271a720;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar2;
    _objc_release(uVar6);
    _objc_release(uVar5);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar11));
    puVar2 = PTR_PTR_1126b40b8;
    _objc_alloc();
    uVar5 = param_12;
    func_0x00010c269d40(param_12);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = in_stack_00000208;
    func_0x00010c0ebe80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05e400();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271a724);
    *(undefined **)((long)puVar1 + (long)_DAT_11271a724) = puVar2;
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126b4298;
    _objc_alloc();
    uVar5 = param_12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108fab190();
    func_0x00010c049d00();
    lVar11 = (long)_DAT_11271a728;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar2;
    _objc_release(uVar6);
    _objc_release(uVar5);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar11));
    puVar2 = PTR_PTR_1126b42a0;
    _objc_alloc();
    uVar5 = param_33;
    func_0x00010bfcf8e0(param_33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0194a0();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271a72c);
    *(undefined **)((long)puVar1 + (long)_DAT_11271a72c) = puVar2;
    _objc_release(uVar6);
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126b42a8;
    _objc_alloc();
    uVar5 = param_3;
    func_0x00010bfceb20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c018d00();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271a730);
    *(undefined **)((long)puVar1 + (long)_DAT_11271a730) = puVar2;
    _objc_release(uVar6);
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126b42b0;
    _objc_alloc();
    uVar5 = param_3;
    func_0x00010bfceb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c018f40();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271a734);
    *(undefined **)((long)puVar1 + (long)_DAT_11271a734) = puVar2;
    _objc_release(uVar6);
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126b4078;
    _objc_alloc();
    lVar11 = (long)puVar1 + lVar8;
    _objc_loadWeakRetained();
    lVar3 = lVar11;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03ada0();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271a738);
    *(undefined **)((long)puVar1 + (long)_DAT_11271a738) = puVar2;
    _objc_release(uVar5);
    _objc_release(lVar3);
    _objc_release(lVar11);
    puVar2 = PTR_PTR_1126b4080;
    _objc_alloc();
    uVar6 = *(undefined8 *)((long)puVar1 + lVar10);
    func_0x00010bf50600();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffd900();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271a73c);
    *(undefined **)((long)puVar1 + (long)_DAT_11271a73c) = puVar2;
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126b4088;
    _objc_alloc();
    lVar11 = (long)puVar1 + lVar8;
    _objc_loadWeakRetained(lVar11);
    lVar3 = lVar11;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05e2e0();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271a740);
    *(undefined **)((long)puVar1 + (long)_DAT_11271a740) = puVar2;
    _objc_release(uVar5);
    _objc_release(lVar3);
    _objc_release(lVar11);
    puVar2 = PTR_PTR_1126b42b8;
    _objc_alloc();
    func_0x00010c0085c0();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271a744);
    *(undefined **)((long)puVar1 + (long)_DAT_11271a744) = puVar2;
    _objc_release(uVar5);
    lVar11 = (long)_DAT_11271a748;
    _objc_retain(param_69);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_69;
    _objc_release(uVar5);
    lVar11 = (long)_DAT_11271a74c;
    _objc_retain(in_stack_00000228);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = in_stack_00000228;
    _objc_release(uVar5);
    lVar8 = (long)puVar1 + lVar8;
    _objc_loadWeakRetained();
    func_0x00010befc780();
    _objc_release(lVar8);
  }
  _objc_release(in_stack_00000228);
  _objc_release(in_stack_00000220);
  _objc_release(in_stack_00000218);
  _objc_release(in_stack_00000210);
  _objc_release(in_stack_00000208);
  _objc_release(in_stack_00000200);
  _objc_release(in_stack_000001f8);
  _objc_release(in_stack_000001f0);
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



/* Entry: 10504c360; end: 10504c36b; +[SCGroupProfilePageActionHandler announcerIdentifier] */

undefined ** FUN_10504c360(void)

{
  return &PTR____CFConstantStringClassReference_110dc3858;
}



/* Entry: 10504c36c; end: 10504c37b; -[SCGroupProfilePageActionHandler addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504c36c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271a6e4),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10504c37c; end: 10504c38b; -[SCGroupProfilePageActionHandler removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504c37c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271a6e4),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10504c38c; end: 10504c487; -[SCGroupProfilePageActionHandler setUnifiedProfileViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504c38c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_setUnifiedProfileViewController__1126647c8;
  puStack_38 = PTR_PTR_1126e5c40;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  func_0x00010c21b680(*(undefined8 *)(param_1 + _DAT_11271a710));
  func_0x00010c21b680(*(undefined8 *)(param_1 + _DAT_11271a720));
  func_0x00010c1e1580(*(undefined8 *)(param_1 + _DAT_11271a724));
  func_0x00010c1e1580(*(undefined8 *)(param_1 + _DAT_11271a730));
  func_0x00010c1e1580(*(undefined8 *)(param_1 + _DAT_11271a728));
  func_0x00010c1e1580(*(undefined8 *)(param_1 + _DAT_11271a72c));
  func_0x00010c1e1580(*(undefined8 *)(param_1 + _DAT_11271a738));
  func_0x00010c21b680(*(undefined8 *)(param_1 + _DAT_11271a73c));
  func_0x00010c21b680(*(undefined8 *)(param_1 + _DAT_11271a740));
  _objc_release(param_3);
  return;
}



/* Entry: 10504c488; end: 10504c513; -[SCGroupProfilePageActionHandler setLoggingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504c488(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_setLoggingService__11264dc20;
  puStack_38 = PTR_PTR_1126e5c40;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  func_0x00010c1c07e0(*(undefined8 *)(param_1 + _DAT_11271a738));
  func_0x00010c1c07e0(*(undefined8 *)(param_1 + _DAT_11271a740));
  _objc_release(param_3);
  return;
}



/* Entry: 10504c514; end: 10504c64b; -[SCGroupProfilePageActionHandler handleActionWithSender:actionModel:fromSourceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined **
FUN_10504c514(long param_1,undefined8 param_2,undefined **param_3,ulong param_4,undefined *param_5)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined ***pppuVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar15 = param_3;
  uVar10 = param_4;
  puVar11 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 == 0) ||
     (lVar1 = param_1, ppuVar15 = param_3, uVar10 = param_4, puVar11 = param_5,
     func_0x00010be25340(), (int)lVar1 == 0)) {
    ppuVar13 = (undefined **)0x0;
  }
  else {
    uVar14 = *(undefined8 *)(param_1 + _DAT_11271a6e4);
    ppuVar15 = &PTR____CFConstantStringClassReference_110eb73f8;
    ppuVar13 = (undefined **)0x1;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = 0;
    puVar11 = puVar2;
    func_0x00010bf7dbc0(uVar14);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return ppuVar13;
  }
  ___stack_chk_fail();
  pppuVar9 = &ppuStack_d0;
  _objc_retain(ppuVar15);
  _objc_retain(uVar10);
  _objc_retain(puVar11);
  uVar3 = *(ulong *)((long)param_3 + (long)_DAT_11271a710);
  func_0x00010bfd0140();
  if ((uVar3 & 1) == 0) {
    uVar3 = *(ulong *)((long)param_3 + (long)_DAT_11271a720);
    func_0x00010bfd0140();
    if ((uVar3 & 1) == 0) {
      uVar3 = *(ulong *)((long)param_3 + (long)_DAT_11271a724);
      func_0x00010bfd0140();
      if ((uVar3 & 1) == 0) {
        uVar3 = *(ulong *)((long)param_3 + (long)_DAT_11271a728);
        func_0x00010bfd0140();
        if ((uVar3 & 1) == 0) {
          uVar3 = *(ulong *)((long)param_3 + (long)_DAT_11271a72c);
          func_0x00010bfd0140();
          if ((uVar3 & 1) == 0) {
            uVar3 = *(ulong *)((long)param_3 + (long)_DAT_11271a730);
            func_0x00010bfd0140();
            if ((uVar3 & 1) == 0) {
              uVar3 = *(ulong *)((long)param_3 + (long)_DAT_11271a734);
              func_0x00010bfd0140();
              if ((uVar3 & 1) == 0) {
                uVar3 = *(ulong *)((long)param_3 + (long)_DAT_11271a738);
                func_0x00010bfd0140();
                if ((uVar3 & 1) == 0) {
                  uVar3 = *(ulong *)((long)param_3 + (long)_DAT_11271a73c);
                  func_0x00010bfd0140();
                  if ((uVar3 & 1) == 0) {
                    uVar3 = *(ulong *)((long)param_3 + (long)_DAT_11271a740);
                    func_0x00010bfd0140();
                    if ((uVar3 & 1) == 0) {
                      uVar3 = *(ulong *)((long)param_3 + (long)_DAT_11271a744);
                      func_0x00010bfd0140();
                      if ((uVar3 & 1) == 0) {
                        uVar3 = uVar10;
                        func_0x00010bfe5ec0();
                        _objc_retainAutoreleasedReturnValue();
                        uVar4 = uVar3;
                        func_0x00010c0720c0();
                        _objc_release(uVar3);
                        if ((int)uVar4 == 0) {
                          uVar3 = uVar10;
                          func_0x00010bfe5ec0();
                          _objc_retainAutoreleasedReturnValue();
                          uVar4 = uVar3;
                          func_0x00010c0720c0();
                          _objc_release(uVar3);
                          if ((int)uVar4 != 0) {
                            ppuVar13 = param_3;
                            func_0x00010be7eca0();
                            if (((ulong)ppuVar13 & 1) == 0) {
                              func_0x00010be7bd20(param_3);
                              goto LAB_10504c7f4;
                            }
                            goto LAB_10504c7f0;
                          }
                        }
                        else {
                          uVar4 = uVar10;
                          func_0x00010beee2e0();
                          _objc_retainAutoreleasedReturnValue();
                          puVar2 = PTR_PTR_1126afdb8;
                          _objc_opt_class(PTR_PTR_1126afdb8);
                          uVar5 = uVar4;
                          _objc_opt_isKindOfClass(uVar4,puVar2);
                          uVar3 = uVar4;
                          if ((uVar5 & 1) == 0) {
                            uVar3 = 0;
                          }
                          _objc_retain(uVar3);
                          _objc_release(uVar4);
                          if (uVar3 != 0) {
                            uVar6 = uVar4;
                            func_0x00010beee2e0();
                            _objc_retainAutoreleasedReturnValue();
                            puVar2 = PTR_PTR_1126b40b0;
                            _objc_opt_class(PTR_PTR_1126b40b0);
                            uVar7 = uVar6;
                            _objc_opt_isKindOfClass(uVar6,puVar2);
                            uVar5 = uVar6;
                            if ((uVar7 & 1) == 0) {
                              uVar5 = 0;
                            }
                            _objc_retain(uVar5);
                            _objc_release(uVar6);
                            if (uVar5 != 0) {
                              puVar8 = (undefined1 *)((long)param_3 + (long)_DAT_11271a750);
                              _objc_loadWeakRetained(puVar8);
                              uVar3 = uVar6;
                              func_0x00010c122a80(uVar6);
                              _objc_retainAutoreleasedReturnValue();
                              func_0x00010c0c3fe0(uVar6);
                              func_0x00010bfcf1c0(puVar8);
                              _objc_release(uVar3);
                              _objc_release(puVar8);
                              _objc_release(uVar6);
                              _objc_release(uVar4);
                              goto LAB_10504c7f0;
                            }
                          }
                          _objc_release(uVar3);
                        }
                        puStack_c8 = PTR_PTR_1126e5c40;
                        ppuStack_d0 = param_3;
                        _objc_msgSendSuper2(&ppuStack_d0,
                                            PTR_s_handleActionWithSender_actionMod_1125d19f8,
                                            ppuVar15,uVar10,puVar11);
                        param_3 = (undefined **)pppuVar9;
                        goto LAB_10504c7f4;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_10504c7f0:
  param_3 = (undefined **)0x1;
LAB_10504c7f4:
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(ppuVar15);
  return param_3;
}



/* Entry: 10504c64c; end: 10504c9d3; -[SCGroupProfilePageActionHandler _handleActionWithSender:actionModel:fromSourceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10504c64c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
             undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 **ppuVar8;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  ppuVar8 = &puStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_1 + _DAT_11271a710);
  func_0x00010bfd0140();
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + _DAT_11271a720);
    func_0x00010bfd0140();
    if ((uVar1 & 1) == 0) {
      uVar1 = *(ulong *)(param_1 + _DAT_11271a724);
      func_0x00010bfd0140();
      if ((uVar1 & 1) == 0) {
        uVar1 = *(ulong *)(param_1 + _DAT_11271a728);
        func_0x00010bfd0140();
        if ((uVar1 & 1) == 0) {
          uVar1 = *(ulong *)(param_1 + _DAT_11271a72c);
          func_0x00010bfd0140();
          if ((uVar1 & 1) == 0) {
            uVar1 = *(ulong *)(param_1 + _DAT_11271a730);
            func_0x00010bfd0140();
            if ((uVar1 & 1) == 0) {
              uVar1 = *(ulong *)(param_1 + _DAT_11271a734);
              func_0x00010bfd0140();
              if ((uVar1 & 1) == 0) {
                uVar1 = *(ulong *)(param_1 + _DAT_11271a738);
                func_0x00010bfd0140();
                if ((uVar1 & 1) == 0) {
                  uVar1 = *(ulong *)(param_1 + _DAT_11271a73c);
                  func_0x00010bfd0140();
                  if ((uVar1 & 1) == 0) {
                    uVar1 = *(ulong *)(param_1 + _DAT_11271a740);
                    func_0x00010bfd0140();
                    if ((uVar1 & 1) == 0) {
                      uVar1 = *(ulong *)(param_1 + _DAT_11271a744);
                      func_0x00010bfd0140();
                      if ((uVar1 & 1) == 0) {
                        uVar1 = param_4;
                        func_0x00010bfe5ec0();
                        _objc_retainAutoreleasedReturnValue();
                        uVar2 = uVar1;
                        func_0x00010c0720c0();
                        _objc_release(uVar1);
                        if ((int)uVar2 == 0) {
                          uVar1 = param_4;
                          func_0x00010bfe5ec0();
                          _objc_retainAutoreleasedReturnValue();
                          uVar2 = uVar1;
                          func_0x00010c0720c0();
                          _objc_release(uVar1);
                          if ((int)uVar2 != 0) {
                            puVar7 = param_1;
                            func_0x00010be7eca0();
                            if (((ulong)puVar7 & 1) == 0) {
                              func_0x00010be7bd20(param_1);
                              goto LAB_10504c7f4;
                            }
                            goto LAB_10504c7f0;
                          }
                        }
                        else {
                          uVar2 = param_4;
                          func_0x00010beee2e0();
                          _objc_retainAutoreleasedReturnValue();
                          puVar3 = PTR_PTR_1126afdb8;
                          _objc_opt_class(PTR_PTR_1126afdb8);
                          uVar4 = uVar2;
                          _objc_opt_isKindOfClass(uVar2,puVar3);
                          uVar1 = uVar2;
                          if ((uVar4 & 1) == 0) {
                            uVar1 = 0;
                          }
                          _objc_retain(uVar1);
                          _objc_release(uVar2);
                          if (uVar1 != 0) {
                            uVar5 = uVar2;
                            func_0x00010beee2e0();
                            _objc_retainAutoreleasedReturnValue();
                            puVar3 = PTR_PTR_1126b40b0;
                            _objc_opt_class(PTR_PTR_1126b40b0);
                            uVar6 = uVar5;
                            _objc_opt_isKindOfClass(uVar5,puVar3);
                            uVar4 = uVar5;
                            if ((uVar6 & 1) == 0) {
                              uVar4 = 0;
                            }
                            _objc_retain(uVar4);
                            _objc_release(uVar5);
                            if (uVar4 != 0) {
                              param_1 = param_1 + _DAT_11271a750;
                              _objc_loadWeakRetained(param_1);
                              uVar1 = uVar5;
                              func_0x00010c122a80(uVar5);
                              _objc_retainAutoreleasedReturnValue();
                              func_0x00010c0c3fe0(uVar5);
                              func_0x00010bfcf1c0(param_1);
                              _objc_release(uVar1);
                              _objc_release(param_1);
                              _objc_release(uVar5);
                              _objc_release(uVar2);
                              goto LAB_10504c7f0;
                            }
                          }
                          _objc_release(uVar1);
                        }
                        puStack_58 = PTR_PTR_1126e5c40;
                        puStack_60 = param_1;
                        _objc_msgSendSuper2(&puStack_60,
                                            PTR_s_handleActionWithSender_actionMod_1125d19f8,param_3
                                            ,param_4,param_5);
                        param_1 = (undefined1 *)ppuVar8;
                        goto LAB_10504c7f4;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_10504c7f0:
  param_1 = (undefined1 *)0x1;
LAB_10504c7f4:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10504c9d4; end: 10504cbf3; -[SCGroupProfilePageActionHandler _presentStreakRestoreDialogWithActionModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10504c9d4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afdb8;
  _objc_opt_class(PTR_PTR_1126afdb8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c08fa60();
  if ((uVar3 != 0) && (lVar12 = (long)_DAT_11271a754, *(long *)(param_1 + lVar12) == 0)) {
    puVar2 = PTR_PTR_1126b42c0;
    _objc_alloc(PTR_PTR_1126b42c0);
    lVar5 = param_1;
    func_0x00010c2800a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0616e0(puVar2);
    _objc_release(lVar5);
    puVar6 = puVar2;
    func_0x00010c0cfd00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126b3590;
    _objc_alloc(PTR_PTR_1126b3590);
    func_0x00010c04e600();
    puVar9 = PTR_PTR_1126b3598;
    _objc_alloc(PTR_PTR_1126b3598);
    func_0x00010c056e20();
    uVar10 = *(undefined8 *)(param_1 + _DAT_11271a74c);
    func_0x00010bf21f80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + lVar12);
    *(undefined8 *)(param_1 + lVar12) = uVar10;
    _objc_release(uVar11);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar2);
  }
  _objc_release(uVar1);
  return uVar3 != 0;
}



/* Entry: 10504cbf4; end: 10504cd17; -[SCGroupProfilePageActionHandler _presentIdentityPillDialogWithActionModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10504cbf4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afdb8;
  _objc_opt_class(PTR_PTR_1126afdb8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b42c8;
  _objc_opt_class(PTR_PTR_1126b42c8);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 != 0) {
    puVar2 = PTR_PTR_1126b42d0;
    _objc_alloc(PTR_PTR_1126b42d0);
    func_0x00010c061ec0();
    func_0x00010c2800a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10eda0();
    _objc_release(param_1);
    _objc_release(puVar2);
  }
  _objc_release(uVar1);
  return uVar1 != 0;
}



/* Entry: 10504cd18; end: 10504cdeb; -[SCGroupProfilePageActionHandler didUpdateWithAnnouncerIdentifier:] */

void FUN_10504cd18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 != 0) {
    _objc_initWeak(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_10504cdec;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10504cdec; end: 10504ce17;  */

void FUN_10504cdec(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be039a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10504ce18; end: 10504ce47; -[SCGroupProfilePageActionHandler _dismissUnifiedProfile] */

void FUN_10504ce18(undefined8 param_1)

{
  func_0x00010c2800a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf849e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10504ce48; end: 10504ceb7; -[SCGroupProfilePageActionHandler navigateToChatActionHandlerNavigateToChat:deepLinkURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504ce48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11271a750;
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfcf1a0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10504ceb8; end: 10504ceff; -[SCGroupProfilePageActionHandler showCameraActionHandler:canHandleShowCameraForGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10504ceb8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11271a750;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  _objc_opt_respondsToSelector();
  _objc_release(param_1);
  return (uint)lVar1 & 1;
}



/* Entry: 10504cf00; end: 10504cf5b; -[SCGroupProfilePageActionHandler showCameraActionHandler:showCameraForGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504cf00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11271a750;
  _objc_retain(param_4);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfcf140();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10504cf5c; end: 10504cfa3; -[SCGroupProfilePageActionHandler showCameraActionHandler:canHandleShowCameraForSnapchatter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10504cf5c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11271a750;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  _objc_opt_respondsToSelector();
  _objc_release(param_1);
  return (uint)lVar1 & 1;
}



/* Entry: 10504cfa4; end: 10504cfff; -[SCGroupProfilePageActionHandler showCameraActionHandler:showCameraForSnapchatter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504cfa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11271a750;
  _objc_retain(param_4);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfcf160();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10504d000; end: 10504d05b; -[SCGroupProfilePageActionHandler membersActionHandler:presentFriendProfileForSnapchatter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504d000(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11271a750;
  _objc_retain(param_4);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfcf180();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10504d05c; end: 10504d24b; -[SCGroupProfilePageActionHandler didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504d05c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb7318);
  if ((int)uVar4 == 0) {
    uVar4 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb7398);
    if ((int)uVar4 != 0) {
      func_0x00010c24fa40(*(undefined8 *)(param_1 + _DAT_11271a71c));
      goto LAB_10504d124;
    }
    uVar4 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb7378);
    if ((int)uVar4 == 0) {
      uVar4 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb73b8);
      if ((int)uVar4 != 0) {
        func_0x00010c2564e0(*(undefined8 *)(param_1 + _DAT_11271a71c));
      }
      goto LAB_10504d124;
    }
    func_0x00010c2564e0(*(undefined8 *)(param_1 + _DAT_11271a71c));
    uVar1 = *(undefined8 *)(param_1 + _DAT_11271a6fc);
    func_0x00010bf10b80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b19f8;
    func_0x00010c1164a0(PTR_PTR_1126b19f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12ba20(uVar4,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar4);
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126b3ce8;
    uVar4 = *(undefined8 *)(param_1 + _DAT_11271a740);
    param_1 = param_1 + _DAT_11271a6e8;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010bfceb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf36700(puVar2,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb3000(uVar4,param_2,puVar2);
    _objc_release(puVar2);
  }
  else {
    param_1 = *(long *)(param_1 + _DAT_11271a6fc);
    func_0x00010bf10b80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b19f8;
    func_0x00010c1164a0(PTR_PTR_1126b19f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7ac0(lVar3,param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(lVar3);
  _objc_release(param_1);
LAB_10504d124:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10504d24c; end: 10504d38f; -[SCGroupProfilePageActionHandler profileChatMediaCaptureMonitorIsSavedAttachmentCellVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10504d24c(long param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = (long)_DAT_11271a738;
  iVar2 = (int)*(undefined8 *)(param_1 + lVar9);
  func_0x00010c06e560();
  if (iVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + lVar9);
    func_0x00010c07aba0();
    if ((uVar3 & 1) == 0) {
      uVar3 = *(ulong *)(param_1 + _DAT_11271a724);
      func_0x00010c07ad00();
      if ((uVar3 & 1) == 0) {
        lVar9 = param_1;
        func_0x00010c2800a0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar9 == 0) {
          bVar1 = false;
        }
        else {
          lVar4 = param_1;
          func_0x00010c2800a0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c10f940();
          _objc_retainAutoreleasedReturnValue();
          if (lVar5 == 0) {
            lVar6 = param_1;
            func_0x00010c2800a0(param_1);
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar6;
            func_0x00010c0d66a0();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar7;
            func_0x00010c275140();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2800a0(param_1);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = lVar8 == param_1;
            _objc_release();
            _objc_release(lVar8);
            _objc_release(lVar7);
            _objc_release(lVar6);
          }
          else {
            bVar1 = false;
          }
          _objc_release(lVar5);
          _objc_release(lVar4);
        }
        _objc_release(lVar9);
        return bVar1;
      }
    }
  }
  return false;
}



/* Entry: 10504d390; end: 10504d39f; -[SCGroupProfilePageActionHandler profileChatMediaCaptureMonitorIsPresentingChatMedia:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504d390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07abb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271a738),PTR_s_isPresentingChatMedia_1125fc4f8);
  return;
}



/* Entry: 10504d3a0; end: 10504d443; -[SCGroupProfilePageActionHandler didScreenshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504d3a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271a6f8);
  func_0x00010bf50600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11271a6e8;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf503a0(uVar2,param_2,lVar3,0,2);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10504d444; end: 10504d4e7; -[SCGroupProfilePageActionHandler didScreenrecord] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504d444(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271a6f8);
  func_0x00010bf50600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11271a6e8;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf503a0(uVar2,param_2,lVar3,1,2);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10504d4e8; end: 10504d537; -[SCGroupProfilePageActionHandler contentWillDisplay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504d4e8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e5c40;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_contentWillDisplay_1125b1150);
  func_0x00010c2564e0(*(undefined8 *)(param_1 + _DAT_11271a71c));
  return;
}



/* Entry: 10504d538; end: 10504d587; -[SCGroupProfilePageActionHandler contentDidTearDown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504d538(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e5c40;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_contentDidTearDown_1125b0a78);
  func_0x00010c24fa40(*(undefined8 *)(param_1 + _DAT_11271a71c));
  return;
}



/* Entry: 10504d588; end: 10504d58b; -[SCGroupProfilePageActionHandler dismissUnifiedActionMenuWithGroupUnifiedActionMenuActionHandler:showAnimation:] */

void FUN_10504d588(void)

{
  return;
}



/* Entry: 10504d58c; end: 10504d58f; -[SCGroupProfilePageActionHandler unifiedActionMenuPresenterDidDismiss:] */

void FUN_10504d58c(void)

{
  return;
}



/* Entry: 10504d590; end: 10504d5a7; -[SCGroupProfilePageActionHandler streakRestorePurchaseDismissedWithDidRestore:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504d590(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271a754);
  *(undefined8 *)(param_1 + _DAT_11271a754) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10504d5a8; end: 10504d5c7; -[SCGroupProfilePageActionHandler delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504d5a8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271a750);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10504d5c8; end: 10504d5db; -[SCGroupProfilePageActionHandler setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504d5c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271a750,param_3);
  return;
}



/* Entry: 10504d5dc; end: 10504d7c3; -[SCGroupProfilePageActionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504d5dc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271a750);
  _objc_storeStrong(param_1 + _DAT_11271a754,0);
  _objc_storeStrong(param_1 + _DAT_11271a74c,0);
  _objc_storeStrong(param_1 + _DAT_11271a6f0,0);
  _objc_storeStrong(param_1 + _DAT_11271a748,0);
  _objc_storeStrong(param_1 + _DAT_11271a70c,0);
  _objc_storeStrong(param_1 + _DAT_11271a708,0);
  _objc_storeStrong(param_1 + _DAT_11271a704,0);
  _objc_storeStrong(param_1 + _DAT_11271a718,0);
  _objc_storeStrong(param_1 + _DAT_11271a6f4,0);
  _objc_storeStrong(param_1 + _DAT_11271a700,0);
  _objc_storeStrong(param_1 + _DAT_11271a6fc,0);
  _objc_storeStrong(param_1 + _DAT_11271a6f8,0);
  _objc_storeStrong(param_1 + _DAT_11271a744,0);
  _objc_storeStrong(param_1 + _DAT_11271a740,0);
  _objc_storeStrong(param_1 + _DAT_11271a73c,0);
  _objc_storeStrong(param_1 + _DAT_11271a738,0);
  _objc_storeStrong(param_1 + _DAT_11271a734,0);
  _objc_storeStrong(param_1 + _DAT_11271a730,0);
  _objc_storeStrong(param_1 + _DAT_11271a72c,0);
  _objc_storeStrong(param_1 + _DAT_11271a728,0);
  _objc_storeStrong(param_1 + _DAT_11271a724,0);
  _objc_storeStrong(param_1 + _DAT_11271a720,0);
  _objc_storeStrong(param_1 + _DAT_11271a710,0);
  _objc_storeStrong(param_1 + _DAT_11271a71c,0);
  _objc_storeStrong(param_1 + _DAT_11271a714,0);
  _objc_storeStrong(param_1 + _DAT_11271a6ec,0);
  _objc_destroyWeak(param_1 + _DAT_11271a6e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271a6e4,0);
  return;
}



/* Entry: 10504d7c4; end: 10504dac3; -[SCGroupProfileEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504d7c4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar6 = (long)_DAT_11271a758;
  lVar1 = param_1 + lVar6;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    lVar1 = param_1 + _DAT_11271a75c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf5f860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bebe660(param_1);
    func_0x00010c2514c0(lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1 + _DAT_11271a760;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c0f98e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + _DAT_11271a764);
    *(long *)(param_1 + _DAT_11271a764) = lVar4;
    _objc_release(uVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_initWeak(auStack_58,param_1);
    lVar1 = param_1 + lVar6;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bfceb20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1 + _DAT_11271a768;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010bfcf8c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + lVar6;
    _objc_loadWeakRetained(param_1);
    lVar6 = param_1;
    func_0x00010bfceb20();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    func_0x00010bfc6120(lVar4);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(lVar6);
    _objc_release(param_1);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_60);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_58);
    return;
  }
  lVar1 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar6;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfcf240(lVar2);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10504dac4; end: 10504dc77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504dac4(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  ulong uStack_68;
  
  _objc_retain(param_2);
  uVar5 = param_2;
  func_0x00010c06ecc0();
  if ((int)uVar5 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_2;
    func_0x00010bf33480();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = param_2;
  func_0x00010c06ecc0();
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = lVar2 + _DAT_11271a768;
    _objc_loadWeakRetained(lVar6);
  }
  lVar3 = lVar6;
  func_0x00010bfcf2c0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_70,param_1 + 0x28);
  uStack_68 = uVar1 & 0xffffffff;
  _objc_retain(param_2);
  func_0x00010bf5e000(lVar4);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar5);
  _objc_release(param_2);
  return;
}



/* Entry: 10504dc78; end: 10504dd9f;  */

void FUN_10504dc78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10504dda0;
  puStack_78 = &UNK_110853740;
  _objc_copyWeak(auStack_50,param_1 + 0x30);
  uStack_70 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_2);
  uStack_68 = param_2;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = param_3;
  _objc_retain(uVar1);
  uStack_58 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10504dda0; end: 10504de1b;  */

void FUN_10504dda0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar4 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c089e00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7bac0(lVar4,param_2,uVar1,uVar6,uVar3,uVar2,uVar5);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 10504de1c; end: 10504deb3; -[SCGroupProfileEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504de1c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  lVar3 = (long)_DAT_11271a76c;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar3));
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  func_0x00010be025c0(param_1);
  puStack_38 = PTR_PTR_1126e5c48;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10504deb4; end: 10504e02b; -[SCGroupProfileEntryPoint groupProfilePageActionHandler:showFriendProfileForSnapchatter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504deb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_4);
  uVar1 = param_1 + _DAT_11271a758;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11271a770;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x000108fab190();
  lVar8 = (long)_DAT_11271a774;
  *(char *)(param_1 + lVar8) = (char)lVar5;
  _objc_release(lVar4);
  _objc_release(lVar3);
  uVar7 = param_4;
  if (*(char *)(param_1 + lVar8) == '\x01') {
    uVar6 = uVar2;
    _objc_opt_respondsToSelector(uVar2,PTR_s_groupProfileDidDimiss_withReques_1125d15e0);
    if ((uVar6 & 1) != 0) {
      func_0x00010bfcf0e0(uVar2);
      goto LAB_10504dff8;
    }
    func_0x00010c2923e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcf0c0(uVar2);
  }
  else {
    _objc_retain(param_4);
    func_0x00010be025c0(param_1);
  }
  _objc_release(uVar7);
LAB_10504dff8:
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 10504e02c; end: 10504e09b;  */

void FUN_10504e02c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  _objc_opt_respondsToSelector(uVar2,PTR_s_groupProfileDidDimiss_withReques_1125d15e0);
  if ((uVar2 & 1) != 0) {
    func_0x00010bfcf0e0(*(undefined8 *)(param_1 + 0x20));
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcf0c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10504e09c; end: 10504e18f; -[SCGroupProfileEntryPoint groupProfilePageActionHandlerNavigateToChat:deepLinkURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504e09c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + _DAT_11271a758;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10504e190;
  puStack_68 = &UNK_11084c4a0;
  uStack_60 = param_4;
  lStack_58 = lVar2;
  lStack_50 = lVar1;
  uStack_48 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be025c0(param_1,param_2,1,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_60);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 10504e190; end: 10504e1c7;  */

void FUN_10504e190(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b41f8;
  func_0x00010c13a640(PTR_PTR_1126b41f8,param_2,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bfcf130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_groupProfileDidDismiss_withReque_1125d15f0,
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),puVar1);
  return;
}



/* Entry: 10504e1c8; end: 10504e307; -[SCGroupProfileEntryPoint groupProfilePageActionHandlerStartCallInChat:withMedia:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10504e1c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_1 + _DAT_11271a758;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11271a778;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bf280c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10504e308;
  puStack_80 = &UNK_110863fc8;
  lStack_78 = lVar2;
  lStack_70 = lVar1;
  uStack_68 = param_3;
  lStack_60 = lVar5;
  uStack_58 = param_4;
  _objc_retain(lVar5);
  _objc_retain(param_3);
  func_0x00010be025c0(param_1,param_2,1,&puStack_98);
  _objc_release(lStack_60);
  _objc_release(uStack_68);
  _objc_release(lVar5);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return 1;
}



/* Entry: 10504e308; end: 10504e363;  */

void FUN_10504e308(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  _objc_opt_respondsToSelector(uVar1,PTR_s_groupProfileDidDismiss_withReque_1125d15e8);
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x00010bfcf100();
    if ((uVar1 & 1) != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c24e090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_startCallForChatIdentifier_media_112671248,
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x40),0xc);
  return;
}



/* Entry: 10504e364; end: 10504e36f; -[SCGroupProfileEntryPoint dismissProfileViewController:animated:completionBlock:] */

void FUN_10504e364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be025d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__dismissAnimated_completion__11255e310,param_4,param_5);
  return;
}



/* Entry: 10504e370; end: 10504e373; -[SCGroupProfileEntryPoint profileViewAskedLogOnScrollEventsForScrollViewDelegagte:] */

void FUN_10504e370(void)

{
  return;
}



/* Entry: 10504e374; end: 10504e3ab; -[SCGroupProfileEntryPoint profileViewControllerMovedToNilParentOrDealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504e374(long param_1)

{
  param_1 = param_1 + _DAT_11271a758;
  _objc_loadWeakRetained(param_1);
  FUN_10504e3ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10504e3ac; end: 10504e42f;  */

void FUN_10504e3ac(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcf240();
  _objc_release(uVar1);
  func_0x00010c18b5e0(param_1);
  _objc_release(param_1);
  if (param_2 != 0) {
    (**(code **)(param_2 + 0x10))(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10504e430; end: 10504e4e3; -[SCGroupProfileEntryPoint profileViewWillAppearWhilePresenting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504e430(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11271a758;
  uVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    param_1 = param_1 + lVar4;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcf220();
    _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10504e4e4; end: 10504e533; -[SCGroupProfileEntryPoint profileViewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504e4e4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11271a75c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24fc40();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10504e534; end: 10504e5e3; -[SCGroupProfileEntryPoint profileViewDidLoad:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504e534(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271a77c);
  uStack_40 = param_3;
  _objc_retain(param_3);
  func_0x00010bf0a140(puVar1,param_2,&uStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067a20(uVar2,param_2,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10504e5e4; end: 10504e5e7; -[SCGroupProfileEntryPoint profileViewWillDisappear:] */

void FUN_10504e5e4(void)

{
  return;
}



/* Entry: 10504e5e8; end: 10504e5eb; -[SCGroupProfileEntryPoint profileViewDidDisappearWhileDismissing] */

void FUN_10504e5e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf74ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didDismiss_1125bac58);
  return;
}



/* Entry: 10504e5ec; end: 10504e5f7; -[SCGroupProfileEntryPoint didDismiss] */

void FUN_10504e5ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be025d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissAnimated_completion__11255e310,0,0);
  return;
}



/* Entry: 10504e5f8; end: 10504e6b7; -[SCGroupProfileEntryPoint _displayName] */

void FUN_10504e5f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  puVar2 = puVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10504e6b8;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_1;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(puVar2,param_2,&puStack_60);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10504e6b8; end: 10504e7bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504e6b8(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  
  ppuVar2 = (undefined **)(*(long *)(param_1 + 0x20) + (long)_DAT_11271a768);
  _objc_loadWeakRetained();
  ppuVar3 = ppuVar2;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 0x20) + (long)_DAT_11271a758;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar4;
  func_0x00010bf85ee0(ppuVar4,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar1 = ppuVar7;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28),param_2,ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 10504e7bc; end: 10504e85f; -[SCGroupProfileEntryPoint _sourcePage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10504e7bc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11271a758;
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c247a40();
  lVar2 = param_1 + lVar4;
  _objc_loadWeakRetained();
  if (lVar3 == 0) {
    lVar3 = lVar2;
    func_0x00010c247a20();
    if (lVar3 == 0) {
      lVar3 = 0xea;
    }
    else {
      param_1 = param_1 + lVar4;
      _objc_loadWeakRetained(param_1);
      lVar3 = param_1;
      func_0x00010c247a20();
      _objc_release(param_1);
    }
  }
  else {
    lVar3 = lVar2;
    func_0x00010c247a40();
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar3;
}



/* Entry: 10504e860; end: 10504e9c3; -[SCGroupProfileEntryPoint _dismissAnimated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504e860(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puVar3 = PTR_PTR_1126afdd8;
  lVar5 = (long)_DAT_11271a780;
  if (*(long *)(param_1 + lVar5) == 0) {
    puVar3 = (undefined *)(param_1 + _DAT_11271a758);
    _objc_loadWeakRetained(puVar3);
    FUN_10504e3ac();
  }
  else {
    func_0x00010bebe660(param_1);
    func_0x00010bfc8740(puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    _objc_retain(uVar4);
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = 0;
    _objc_release(uVar1);
    param_1 = param_1 + _DAT_11271a758;
    _objc_loadWeakRetained();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10504e9c4;
    puStack_60 = &UNK_11084a9e8;
    uStack_58 = uVar4;
    lStack_50 = param_1;
    _objc_retain(param_4);
    ppuVar2 = &puStack_78;
    uStack_48 = param_4;
    _objc_retainBlock();
    if (param_3 == 0) {
      func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20);
    }
    else {
      (*(code *)ppuVar2[2])(ppuVar2);
    }
    _objc_release(ppuVar2);
    _objc_release(uStack_48);
    _objc_release(param_1);
    _objc_release(uVar4);
  }
  _objc_release(puVar3);
  _objc_release(param_4);
  return;
}



/* Entry: 10504e9c4; end: 10504ea43;  */

void FUN_10504e9c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10504ea44;
  puStack_38 = &UNK_11084aaa8;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x00010bf6f440(uVar1,param_2,&puStack_50);
  _objc_release(uStack_28);
  return;
}



/* Entry: 10504ea44; end: 10504ea4f;  */

void FUN_10504ea44(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar2);
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcf240();
  _objc_release(uVar3);
  func_0x00010c18b5e0(uVar1);
  _objc_release(uVar1);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10504ea50; end: 105050f9b; -[SCGroupProfileEntryPoint _createPresentedViewControllerWithCommunityId:userIdToLastInteractedTimestamp:groupProfileSubType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504ea50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
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
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  undefined *puVar42;
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
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  long lVar82;
  long lVar83;
  long lVar84;
  long lVar85;
  long lVar86;
  long lVar87;
  long lVar88;
  long lVar89;
  long lVar90;
  long lVar91;
  long lVar92;
  undefined *puVar93;
  undefined *puVar94;
  long lVar95;
  long lVar96;
  long lVar97;
  long lVar98;
  long lVar99;
  long lVar100;
  long lVar101;
  long lVar102;
  long lVar103;
  long lVar104;
  long lVar105;
  long lVar106;
  long lVar107;
  undefined *puVar108;
  undefined *puVar109;
  undefined *puVar110;
  undefined *puVar111;
  undefined *puVar112;
  undefined *puVar113;
  undefined *puVar114;
  long lVar115;
  long lVar116;
  long lVar117;
  long lVar118;
  long lVar119;
  long lVar120;
  long lVar121;
  long lVar122;
  long lVar123;
  long lVar124;
  long lVar125;
  long lVar126;
  long lVar127;
  long lVar128;
  long lVar129;
  long lVar130;
  undefined8 uVar131;
  long lVar132;
  long lVar133;
  long lVar134;
  long lVar135;
  long lVar136;
  long lVar137;
  long lVar138;
  long lVar139;
  long lVar140;
  long lVar141;
  undefined8 uVar142;
  long lVar143;
  long lVar144;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar143 = (long)_DAT_11271a784;
  lVar1 = param_1 + lVar143;
  _objc_loadWeakRetained();
  lVar121 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar121;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar121);
  _objc_release(lVar1);
  lVar141 = (long)_DAT_11271a788;
  lVar1 = param_1 + lVar141;
  _objc_loadWeakRetained();
  lVar121 = lVar1;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar121;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c293a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar121);
  _objc_release(lVar1);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11271a78c);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105050f9c;
  puStack_90 = &UNK_110864088;
  lStack_88 = lVar2;
  lStack_80 = lVar4;
  func_0x000100504554(uVar5,&puStack_a8);
  uVar6 = uVar5;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126afdd8;
  lVar138 = (long)_DAT_11271a758;
  lVar1 = param_1 + lVar138;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c247a20();
  func_0x00010bfc8740();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x000107cdc434();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(lVar1);
  puVar9 = PTR_PTR_1126b42d8;
  _objc_alloc();
  lVar1 = param_1 + lVar143;
  _objc_loadWeakRetained();
  lVar10 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar132 = (long)_DAT_11271a768;
  lVar121 = param_1 + lVar132;
  _objc_loadWeakRetained();
  lVar11 = lVar121;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + lVar132;
  _objc_loadWeakRetained();
  lVar12 = lVar3;
  func_0x00010bfcf8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar139 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar120 = param_1 + lVar138;
  _objc_loadWeakRetained();
  lVar13 = lVar120;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar144 = param_1 + lVar132;
  _objc_loadWeakRetained();
  lVar14 = lVar144;
  func_0x00010bfcf900();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + lVar132;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bfcf2c0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + lVar143;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + lVar141;
  _objc_loadWeakRetained();
  lVar123 = lVar22;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  lVar137 = (long)_DAT_11271a794;
  lVar23 = param_1 + lVar137;
  _objc_loadWeakRetained();
  lVar125 = lVar23;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + lVar137;
  _objc_loadWeakRetained();
  lVar127 = lVar24;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + lVar137;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010bfb8b40();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + lVar137;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  lVar115 = (long)_DAT_11271a798;
  lVar29 = param_1 + lVar115;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010bfb9e20();
  _objc_retainAutoreleasedReturnValue();
  lVar116 = (long)_DAT_11271a79c;
  lVar31 = param_1 + lVar116;
  _objc_loadWeakRetained();
  lVar32 = lVar31;
  func_0x00010c258580();
  _objc_retainAutoreleasedReturnValue();
  lVar117 = (long)_DAT_11271a7a0;
  lVar33 = param_1 + lVar117;
  _objc_loadWeakRetained();
  lVar134 = lVar33;
  func_0x00010c12a480();
  _objc_retainAutoreleasedReturnValue();
  lVar118 = (long)_DAT_11271a7a4;
  lVar34 = param_1 + lVar118;
  _objc_loadWeakRetained();
  lVar136 = param_1 + lVar141;
  _objc_loadWeakRetained();
  lVar119 = (long)_DAT_11271a7a8;
  lVar35 = param_1 + lVar119;
  _objc_loadWeakRetained();
  lVar36 = lVar35;
  func_0x00010bfb8f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05dac0();
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar136);
  _objc_release(lVar34);
  _objc_release(lVar134);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar127);
  _objc_release(lVar24);
  _objc_release(lVar125);
  _objc_release(lVar23);
  _objc_release(lVar123);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar144);
  _objc_release(lVar13);
  _objc_release(lVar120);
  _objc_release(lVar139);
  _objc_release(lVar12);
  _objc_release(lVar3);
  _objc_release(lVar11);
  _objc_release(lVar121);
  _objc_release(lVar10);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11271a7ac;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010bf1c460();
  _objc_retainAutoreleasedReturnValue();
  lVar121 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5e220();
  _objc_release(lVar121);
  _objc_release(lVar3);
  _objc_release(lVar1);
  puVar37 = PTR_PTR_1126b41c8;
  _objc_alloc();
  puVar7 = puVar9;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  lVar144 = (long)_DAT_11271a7b0;
  lVar1 = param_1 + lVar144;
  _objc_loadWeakRetained();
  lVar120 = (long)_DAT_11271a7b4;
  lVar121 = param_1 + lVar120;
  _objc_loadWeakRetained();
  lVar3 = param_1 + _DAT_11271a7b8;
  _objc_loadWeakRetained();
  lVar16 = lVar3;
  func_0x00010bf148a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03b300();
  _objc_release(lVar16);
  _objc_release(lVar3);
  _objc_release(lVar121);
  _objc_release(lVar1);
  _objc_release(puVar7);
  lVar121 = (long)_DAT_11271a7bc;
  lVar1 = param_1 + lVar121;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
  puVar7 = PTR_DAT_1126a4ee8;
  _objc_retain(lVar16);
  lVar3 = lVar16;
  func_0x00010010fab4(lVar16,puVar7);
  lVar1 = lVar16;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain();
  _objc_release(lVar16);
  lVar3 = param_1 + lVar138;
  _objc_loadWeakRetained();
  puVar38 = PTR_PTR_1126b4178;
  _objc_alloc();
  lVar122 = (long)_DAT_11271a7c0;
  lVar19 = param_1 + lVar122;
  _objc_loadWeakRetained(lVar19);
  lVar22 = lVar19;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d820();
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar19);
  puVar39 = PTR_PTR_1126b4180;
  _objc_alloc();
  lVar19 = param_1 + _DAT_11271a7c4;
  _objc_loadWeakRetained();
  lVar35 = lVar19;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar35;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar123 = (long)_DAT_11271a7c8;
  lVar22 = param_1 + lVar123;
  _objc_loadWeakRetained();
  lVar12 = lVar22;
  func_0x00010bf10b80();
  _objc_retainAutoreleasedReturnValue();
  lVar139 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar124 = (long)_DAT_11271a7cc;
  lVar23 = param_1 + lVar124;
  _objc_loadWeakRetained();
  lVar13 = lVar23;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + lVar118;
  _objc_loadWeakRetained();
  lVar14 = lVar24;
  func_0x00010bf50600();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010bf374e0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar3;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar3;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  func_0x00010be048e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  lVar133 = (long)_DAT_11271a7d0;
  lVar25 = param_1 + lVar133;
  _objc_loadWeakRetained();
  lVar21 = lVar25;
  func_0x00010c1171e0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + lVar133;
  _objc_loadWeakRetained();
  lVar26 = lVar27;
  func_0x00010c116740();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + lVar118;
  _objc_loadWeakRetained();
  lVar28 = lVar29;
  func_0x00010bf50600();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = lVar28;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1 + lVar144;
  _objc_loadWeakRetained();
  lVar125 = (long)_DAT_11271a7d4;
  lVar33 = param_1 + lVar125;
  _objc_loadWeakRetained();
  lVar134 = lVar33;
  func_0x00010bf36240();
  _objc_retainAutoreleasedReturnValue();
  lVar126 = (long)_DAT_11271a770;
  lVar34 = param_1 + lVar126;
  _objc_loadWeakRetained();
  lVar32 = lVar34;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar127 = (long)_DAT_11271a7d8;
  lVar136 = param_1 + lVar127;
  _objc_loadWeakRetained();
  lVar30 = lVar136;
  func_0x00010c0c4e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0456c0();
  _objc_release(lVar30);
  _objc_release(lVar136);
  _objc_release(lVar32);
  _objc_release(lVar34);
  _objc_release(lVar134);
  _objc_release(lVar33);
  _objc_release(lVar31);
  _objc_release(lVar36);
  _objc_release(lVar28);
  _objc_release(lVar29);
  _objc_release(lVar26);
  _objc_release(lVar27);
  _objc_release(lVar21);
  _objc_release(lVar25);
  _objc_release(puVar7);
  _objc_release(lVar20);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar24);
  _objc_release(lVar13);
  _objc_release(lVar23);
  _objc_release(lVar139);
  _objc_release(lVar12);
  _objc_release(lVar22);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar35);
  _objc_release(lVar19);
  puVar40 = PTR_PTR_1126b4188;
  _objc_alloc();
  lVar140 = (long)_DAT_11271a7dc;
  lVar19 = param_1 + lVar140;
  _objc_loadWeakRetained(lVar19);
  lVar22 = lVar19;
  func_0x00010bf35c80();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar22;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffd7e0();
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar19);
  puVar41 = PTR_PTR_1126b42e0;
  _objc_alloc();
  lVar139 = (long)_DAT_11271a7e0;
  lVar19 = param_1 + lVar139;
  _objc_loadWeakRetained();
  lVar22 = lVar19;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011c80();
  _objc_release(lVar22);
  _objc_release(lVar19);
  puVar42 = PTR_PTR_1126b42e8;
  _objc_alloc();
  lVar19 = param_1 + lVar143;
  _objc_loadWeakRetained();
  lVar43 = lVar19;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + lVar137;
  _objc_loadWeakRetained();
  lVar44 = lVar22;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + lVar137;
  _objc_loadWeakRetained();
  lVar45 = lVar23;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + lVar137;
  _objc_loadWeakRetained();
  lVar46 = lVar24;
  func_0x00010bf1d740();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + lVar117;
  _objc_loadWeakRetained();
  lVar47 = lVar25;
  func_0x00010c12a480();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + lVar116;
  _objc_loadWeakRetained();
  lVar48 = lVar27;
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + _DAT_11271a7e4;
  _objc_loadWeakRetained();
  lVar49 = lVar29;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar121 = param_1 + lVar121;
  _objc_loadWeakRetained();
  lVar50 = lVar121;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1 + lVar115;
  _objc_loadWeakRetained();
  lVar51 = lVar31;
  func_0x00010bfb9e20();
  _objc_retainAutoreleasedReturnValue();
  lVar118 = param_1 + lVar118;
  _objc_loadWeakRetained();
  lVar33 = param_1 + lVar140;
  _objc_loadWeakRetained();
  lVar52 = lVar33;
  func_0x00010bf35c80();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = lVar52;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1 + lVar140;
  _objc_loadWeakRetained();
  lVar54 = lVar34;
  func_0x00010bf35c60();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = lVar54;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar128 = (long)_DAT_11271a7e8;
  lVar136 = param_1 + lVar128;
  _objc_loadWeakRetained();
  lVar56 = lVar136;
  func_0x00010c0fc460();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + lVar126;
  _objc_loadWeakRetained();
  lVar57 = lVar35;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11271a8d0;
  _objc_loadWeakRetained();
  lVar11 = param_1 + lVar120;
  _objc_loadWeakRetained();
  lVar12 = param_1 + _DAT_11271a8d4;
  _objc_loadWeakRetained();
  lVar139 = param_1 + lVar139;
  _objc_loadWeakRetained();
  lVar58 = lVar139;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11271a7fc;
  _objc_loadWeakRetained();
  lVar59 = lVar13;
  func_0x00010bf0a280();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + lVar132;
  _objc_loadWeakRetained();
  lVar15 = param_1 + lVar144;
  _objc_loadWeakRetained();
  lVar129 = (long)_DAT_11271a75c;
  lVar17 = param_1 + lVar129;
  _objc_loadWeakRetained();
  lVar18 = param_1 + _DAT_11271a804;
  _objc_loadWeakRetained();
  lVar60 = lVar18;
  func_0x00010bf27540();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_11271a808;
  _objc_loadWeakRetained();
  lVar61 = lVar20;
  func_0x00010c101cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + lVar137;
  _objc_loadWeakRetained();
  lVar62 = lVar21;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  lVar123 = param_1 + lVar123;
  _objc_loadWeakRetained();
  lVar125 = param_1 + lVar125;
  _objc_loadWeakRetained();
  lVar63 = lVar125;
  func_0x00010bf36240();
  _objc_retainAutoreleasedReturnValue();
  lVar127 = param_1 + lVar127;
  _objc_loadWeakRetained();
  lVar64 = lVar127;
  func_0x00010c0c4e40();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + _DAT_11271a810;
  _objc_loadWeakRetained();
  lVar134 = (long)_DAT_11271a814;
  lVar28 = param_1 + lVar134;
  _objc_loadWeakRetained();
  lVar65 = lVar28;
  func_0x00010befc3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1 + _DAT_11271a8cc;
  _objc_loadWeakRetained();
  lVar134 = param_1 + lVar134;
  _objc_loadWeakRetained();
  lVar66 = lVar134;
  func_0x00010bf36100();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1 + _DAT_11271a8d8;
  _objc_loadWeakRetained();
  lVar30 = param_1 + _DAT_11271a818;
  _objc_loadWeakRetained();
  lVar67 = lVar30;
  func_0x00010c0fb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar95 = param_1 + _DAT_11271a81c;
  _objc_loadWeakRetained();
  lVar68 = lVar95;
  func_0x00010c243b20();
  _objc_retainAutoreleasedReturnValue();
  lVar96 = param_1 + _DAT_11271a820;
  _objc_loadWeakRetained();
  lVar69 = lVar96;
  func_0x00010c112160();
  _objc_retainAutoreleasedReturnValue();
  lVar97 = param_1 + _DAT_11271a828;
  _objc_loadWeakRetained();
  lVar103 = param_1 + _DAT_11271a82c;
  _objc_loadWeakRetained();
  lVar70 = lVar103;
  func_0x00010bf9e260();
  _objc_retainAutoreleasedReturnValue();
  lVar104 = param_1 + _DAT_11271a834;
  _objc_loadWeakRetained();
  lVar71 = lVar104;
  func_0x00010c14a6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar102 = param_1 + _DAT_11271a838;
  _objc_loadWeakRetained();
  lVar72 = lVar102;
  func_0x00010c101cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar105 = param_1 + _DAT_11271a83c;
  _objc_loadWeakRetained();
  lVar73 = lVar105;
  func_0x00010c101aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar106 = param_1 + _DAT_11271a840;
  _objc_loadWeakRetained();
  lVar74 = lVar106;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar107 = param_1 + _DAT_11271a848;
  _objc_loadWeakRetained();
  lVar98 = param_1 + _DAT_11271a850;
  _objc_loadWeakRetained();
  lVar75 = lVar98;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  lVar99 = param_1 + _DAT_11271a854;
  _objc_loadWeakRetained();
  lVar76 = lVar99;
  func_0x00010c0ee220();
  _objc_retainAutoreleasedReturnValue();
  lVar100 = param_1 + _DAT_11271a858;
  _objc_loadWeakRetained();
  lVar77 = lVar100;
  func_0x00010c0dc400();
  _objc_retainAutoreleasedReturnValue();
  lVar101 = param_1 + _DAT_11271a85c;
  _objc_loadWeakRetained();
  lVar135 = (long)_DAT_11271a860;
  lVar78 = param_1 + lVar135;
  _objc_loadWeakRetained();
  lVar79 = lVar78;
  func_0x00010c24c220();
  _objc_retainAutoreleasedReturnValue();
  lVar135 = param_1 + lVar135;
  _objc_loadWeakRetained();
  lVar80 = lVar135;
  func_0x00010c24ba80();
  _objc_retainAutoreleasedReturnValue();
  lVar130 = (long)_DAT_11271a864;
  lVar81 = param_1 + lVar130;
  _objc_loadWeakRetained();
  lVar82 = lVar81;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar83 = param_1 + _DAT_11271a868;
  _objc_loadWeakRetained();
  lVar84 = lVar83;
  func_0x00010c242d80();
  _objc_retainAutoreleasedReturnValue();
  lVar85 = param_1 + _DAT_11271a86c;
  _objc_loadWeakRetained();
  lVar86 = lVar85;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar87 = param_1 + _DAT_11271a878;
  _objc_loadWeakRetained();
  lVar88 = param_1 + _DAT_11271a880;
  _objc_loadWeakRetained();
  lVar89 = param_1 + _DAT_11271a888;
  _objc_loadWeakRetained();
  lVar90 = param_1 + _DAT_11271a88c;
  _objc_loadWeakRetained();
  lVar91 = lVar90;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  lVar92 = param_1 + _DAT_11271a890;
  _objc_loadWeakRetained();
  func_0x00010c009200();
  _objc_release(lVar92);
  _objc_release(lVar91);
  _objc_release(lVar90);
  _objc_release(lVar89);
  _objc_release(lVar88);
  _objc_release(lVar87);
  _objc_release(lVar86);
  _objc_release(lVar85);
  _objc_release(lVar84);
  _objc_release(lVar83);
  _objc_release(lVar82);
  _objc_release(lVar81);
  _objc_release(lVar80);
  _objc_release(lVar135);
  _objc_release(lVar79);
  _objc_release(lVar78);
  _objc_release(lVar101);
  _objc_release(lVar77);
  _objc_release(lVar100);
  _objc_release(lVar76);
  _objc_release(lVar99);
  _objc_release(lVar75);
  _objc_release(lVar98);
  _objc_release(lVar107);
  _objc_release(lVar74);
  _objc_release(lVar106);
  _objc_release(lVar73);
  _objc_release(lVar105);
  _objc_release(lVar72);
  _objc_release(lVar102);
  _objc_release(lVar71);
  _objc_release(lVar104);
  _objc_release(lVar70);
  _objc_release(lVar103);
  _objc_release(lVar97);
  _objc_release(lVar69);
  _objc_release(lVar96);
  _objc_release(lVar68);
  _objc_release(lVar95);
  _objc_release(lVar67);
  _objc_release(lVar30);
  _objc_release(lVar32);
  _objc_release(lVar66);
  _objc_release(lVar134);
  _objc_release(lVar36);
  _objc_release(lVar65);
  _objc_release(lVar28);
  _objc_release(lVar26);
  _objc_release(lVar64);
  _objc_release(lVar127);
  _objc_release(lVar63);
  _objc_release(lVar125);
  _objc_release(lVar123);
  _objc_release(lVar62);
  _objc_release(lVar21);
  _objc_release(lVar61);
  _objc_release(lVar20);
  _objc_release(lVar60);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar59);
  _objc_release(lVar13);
  _objc_release(lVar58);
  _objc_release(lVar139);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar57);
  _objc_release(lVar35);
  _objc_release(lVar56);
  _objc_release(lVar136);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar34);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar33);
  _objc_release(lVar118);
  _objc_release(lVar51);
  _objc_release(lVar31);
  _objc_release(lVar50);
  _objc_release(lVar121);
  _objc_release(lVar49);
  _objc_release(lVar29);
  _objc_release(lVar48);
  _objc_release(lVar27);
  _objc_release(lVar47);
  _objc_release(lVar25);
  _objc_release(lVar46);
  _objc_release(lVar24);
  _objc_release(lVar45);
  _objc_release(lVar23);
  _objc_release(lVar44);
  _objc_release(lVar22);
  _objc_release(lVar43);
  _objc_release(lVar19);
  func_0x00010c18b5e0(puVar42);
  puVar93 = PTR_PTR_1126b16c0;
  _objc_alloc();
  lVar121 = param_1 + lVar137;
  _objc_loadWeakRetained();
  lVar19 = lVar121;
  func_0x00010c244be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c015a40();
  _objc_release(lVar19);
  _objc_release(lVar121);
  lVar121 = param_1 + lVar138;
  _objc_loadWeakRetained();
  lVar78 = lVar121;
  func_0x00010bf4b2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar121);
  puVar94 = PTR_PTR_1126b4170;
  _objc_alloc();
  lVar122 = param_1 + lVar122;
  _objc_loadWeakRetained();
  lVar121 = lVar122;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar121;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d820();
  _objc_release(lVar19);
  _objc_release(lVar121);
  _objc_release(lVar122);
  puVar108 = PTR_PTR_1126b42f0;
  _objc_alloc();
  lVar124 = param_1 + lVar124;
  _objc_loadWeakRetained();
  lVar134 = lVar124;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = lVar134;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar143 = param_1 + lVar143;
  _objc_loadWeakRetained();
  lVar30 = lVar143;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar121 = param_1 + lVar140;
  _objc_loadWeakRetained();
  lVar95 = lVar121;
  func_0x00010bf35c80();
  _objc_retainAutoreleasedReturnValue();
  lVar96 = lVar95;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar128 = param_1 + lVar128;
  _objc_loadWeakRetained();
  lVar97 = lVar128;
  func_0x00010c0fc460();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + lVar133;
  _objc_loadWeakRetained();
  lVar123 = lVar19;
  func_0x00010c1171c0();
  _objc_retainAutoreleasedReturnValue();
  lVar133 = param_1 + lVar133;
  _objc_loadWeakRetained();
  lVar125 = lVar133;
  func_0x00010c116740();
  _objc_retainAutoreleasedReturnValue();
  lVar140 = param_1 + lVar140;
  _objc_loadWeakRetained();
  lVar127 = lVar140;
  func_0x00010bf35c60();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar127;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + lVar132;
  _objc_loadWeakRetained();
  lVar28 = lVar22;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + lVar132;
  _objc_loadWeakRetained();
  lVar36 = lVar23;
  func_0x00010bfcf8a0();
  _objc_retainAutoreleasedReturnValue();
  lVar120 = param_1 + lVar120;
  _objc_loadWeakRetained();
  lVar98 = lVar120;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar136 = (long)_DAT_11271a894;
  lVar24 = param_1 + lVar136;
  _objc_loadWeakRetained();
  lVar99 = lVar24;
  func_0x00010bfb98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + lVar115;
  _objc_loadWeakRetained();
  lVar100 = lVar25;
  func_0x00010bfb9ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar115 = param_1 + lVar115;
  _objc_loadWeakRetained();
  lVar101 = lVar115;
  func_0x00010bfb9fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar144 = param_1 + lVar144;
  _objc_loadWeakRetained();
  lVar132 = param_1 + lVar132;
  _objc_loadWeakRetained();
  lVar141 = param_1 + lVar141;
  _objc_loadWeakRetained();
  lVar137 = param_1 + lVar137;
  _objc_loadWeakRetained();
  lVar116 = param_1 + lVar116;
  _objc_loadWeakRetained();
  lVar102 = lVar116;
  func_0x00010c258580();
  _objc_retainAutoreleasedReturnValue();
  lVar117 = param_1 + lVar117;
  _objc_loadWeakRetained();
  lVar103 = lVar117;
  func_0x00010c12a480();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + _DAT_11271a898;
  _objc_loadWeakRetained();
  lVar29 = param_1 + _DAT_11271a89c;
  _objc_loadWeakRetained();
  lVar104 = lVar29;
  func_0x00010c23c760();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1 + _DAT_11271a8a0;
  _objc_loadWeakRetained();
  lVar105 = lVar31;
  func_0x00010c28f860();
  _objc_retainAutoreleasedReturnValue();
  lVar119 = param_1 + lVar119;
  _objc_loadWeakRetained();
  lVar106 = lVar119;
  func_0x00010bfb8f40();
  _objc_retainAutoreleasedReturnValue();
  lVar130 = param_1 + lVar130;
  _objc_loadWeakRetained();
  lVar107 = lVar130;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + _DAT_11271a8a4;
  _objc_loadWeakRetained();
  lVar14 = lVar33;
  func_0x00010c25c100();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1 + lVar136;
  _objc_loadWeakRetained();
  lVar15 = lVar34;
  func_0x00010bfb9940();
  _objc_retainAutoreleasedReturnValue();
  lVar136 = param_1 + lVar136;
  _objc_loadWeakRetained();
  lVar17 = lVar136;
  func_0x00010bfb9760();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1 + _DAT_11271a8a8;
  _objc_loadWeakRetained();
  lVar18 = lVar35;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar118 = param_1 + _DAT_11271a760;
  _objc_loadWeakRetained();
  lVar20 = lVar118;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + lVar126;
  _objc_loadWeakRetained();
  lVar21 = lVar10;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11271a8ac;
  _objc_loadWeakRetained();
  lVar139 = lVar11;
  func_0x00010bf3f680();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar139;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11271a8b0;
  _objc_loadWeakRetained();
  func_0x00010c008fc0();
  _objc_release(lVar12);
  _objc_release(lVar13);
  _objc_release(lVar139);
  _objc_release(lVar11);
  _objc_release(lVar21);
  _objc_release(lVar10);
  _objc_release(lVar20);
  _objc_release(lVar118);
  _objc_release(lVar18);
  _objc_release(lVar35);
  _objc_release(lVar17);
  _objc_release(lVar136);
  _objc_release(lVar15);
  _objc_release(lVar34);
  _objc_release(lVar14);
  _objc_release(lVar33);
  _objc_release(lVar107);
  _objc_release(lVar130);
  _objc_release(lVar106);
  _objc_release(lVar119);
  _objc_release(lVar105);
  _objc_release(lVar31);
  _objc_release(lVar104);
  _objc_release(lVar29);
  _objc_release(lVar27);
  _objc_release(lVar103);
  _objc_release(lVar117);
  _objc_release(lVar102);
  _objc_release(lVar116);
  _objc_release(lVar137);
  _objc_release(lVar141);
  _objc_release(lVar132);
  _objc_release(lVar144);
  _objc_release(lVar101);
  _objc_release(lVar115);
  _objc_release(lVar100);
  _objc_release(lVar25);
  _objc_release(lVar99);
  _objc_release(lVar24);
  _objc_release(lVar98);
  _objc_release(lVar120);
  _objc_release(lVar36);
  _objc_release(lVar23);
  _objc_release(lVar28);
  _objc_release(lVar22);
  _objc_release(lVar26);
  _objc_release(lVar127);
  _objc_release(lVar140);
  _objc_release(lVar125);
  _objc_release(lVar133);
  _objc_release(lVar123);
  _objc_release(lVar19);
  _objc_release(lVar97);
  _objc_release(lVar128);
  _objc_release(lVar96);
  _objc_release(lVar95);
  _objc_release(lVar121);
  _objc_release(lVar30);
  _objc_release(lVar143);
  _objc_release(lVar32);
  _objc_release(lVar134);
  _objc_release(lVar124);
  puVar109 = PTR_PTR_1126b42f8;
  _objc_alloc();
  func_0x00010c008f40();
  puVar7 = puVar9;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  puVar110 = puVar7;
  func_0x00010bf51e00();
  _objc_release(puVar7);
  puVar111 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar142 = *(undefined8 *)(param_1 + _DAT_11271a764);
  _objc_retain(uVar142);
  _objc_initWeak(auStack_b0,param_1);
  uVar131 = *(undefined8 *)(param_1 + _DAT_11271a76c);
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_105051018;
  puStack_e0 = &UNK_1108640b8;
  lStack_d8 = lVar3;
  puStack_d0 = puVar42;
  _objc_retain(puVar110);
  puStack_c8 = puVar110;
  uStack_b8 = param_5;
  _objc_retain(param_3);
  uStack_c0 = param_3;
  _objc_copyWeak(auStack_108,auStack_b0);
  _objc_retain(puVar110);
  uStack_100 = param_5;
  _objc_retain(param_3);
  _objc_retain(puVar111);
  func_0x00010bf9d5c0(uVar131);
  puVar112 = PTR_PTR_1126b4310;
  _objc_alloc();
  puVar7 = PTR_PTR_1126ae6b8;
  lVar120 = param_1;
  func_0x00010be048e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbc400();
  _objc_retainAutoreleasedReturnValue();
  lVar121 = param_1 + lVar138;
  _objc_loadWeakRetained(lVar121);
  lVar144 = lVar121;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034360();
  _objc_release(lVar144);
  _objc_release(lVar121);
  _objc_release(puVar7);
  _objc_release(lVar120);
  lVar121 = param_1 + _DAT_11271a8b8;
  _objc_loadWeakRetained();
  lVar120 = lVar121;
  func_0x00010c141800();
  _objc_retainAutoreleasedReturnValue();
  lVar144 = lVar120;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar144;
  func_0x00010bf5a340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar144);
  _objc_release(lVar120);
  _objc_release(lVar121);
  puVar7 = PTR_PTR_1126ae568;
  _objc_opt_new();
  puVar113 = puVar7;
  func_0x00010c272140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar114 = PTR_PTR_1126b41a8;
  _objc_alloc();
  puVar7 = puVar111;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar129 = param_1 + lVar129;
  _objc_loadWeakRetained();
  lVar22 = lVar129;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  lVar126 = param_1 + lVar126;
  _objc_loadWeakRetained();
  lVar23 = lVar126;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar121 = param_1 + _DAT_11271a8bc;
  _objc_loadWeakRetained();
  lVar19 = lVar121;
  func_0x00010c25e020();
  _objc_retainAutoreleasedReturnValue();
  lVar120 = param_1 + _DAT_11271a8c0;
  _objc_loadWeakRetained();
  lVar144 = lVar120;
  func_0x00010bf611e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040380();
  _objc_release(lVar144);
  _objc_release(lVar120);
  _objc_release(lVar19);
  _objc_release(lVar121);
  _objc_release(lVar23);
  _objc_release(lVar126);
  _objc_release(lVar22);
  _objc_release(lVar129);
  _objc_release(puVar7);
  lVar138 = param_1 + lVar138;
  _objc_loadWeakRetained();
  func_0x00010c0797a0();
  func_0x00010c1b3200(puVar114);
  _objc_release(lVar138);
  func_0x00010c1797c0(*(undefined8 *)(param_1 + _DAT_11271a77c));
  func_0x00010c21b680(puVar42);
  puVar7 = puVar114;
  func_0x00010bf99b40(puVar114);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(puVar7);
  puVar7 = puVar114;
  func_0x00010bf99b40(puVar114);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(puVar7);
  func_0x00010bef9980(puVar42);
  func_0x00010bef9980(puVar39);
  func_0x00010c1c07e0(puVar42);
  func_0x00010c18b5e0(puVar114);
  puVar7 = PTR_PTR_1126b41d0;
  _objc_alloc(PTR_PTR_1126b41d0);
  func_0x00010c0402e0();
  _objc_release(puVar113);
  _objc_release(lVar24);
  _objc_release(puVar112);
  _objc_release(puVar114);
  _objc_release(puVar111);
  _objc_release(param_3);
  _objc_release(puVar110);
  _objc_destroyWeak(auStack_108);
  _objc_release(uStack_c0);
  _objc_release(puStack_c8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(uVar142);
  _objc_release(puVar111);
  _objc_release(puVar110);
  _objc_release(puVar109);
  _objc_release(puVar108);
  _objc_release(puVar94);
  _objc_release(lVar78);
  _objc_release(puVar93);
  _objc_release(puVar42);
  _objc_release(puVar41);
  _objc_release(puVar40);
  _objc_release(puVar39);
  _objc_release(puVar38);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(lVar16);
  _objc_release(puVar37);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105050f9c; end: 105051017;  */

void FUN_105050f9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  uVar3 = param_2;
  if (iVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
  }
  _objc_retain(uVar3);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105051018; end: 1050510df;  */

void FUN_105051018(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b4300;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b41b8;
  func_0x00010c2bd5e0(PTR_PTR_1126b41b8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfceb20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0374a0(puVar1);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050510e0; end: 105051243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050510e0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  func_0x00010c0d3c80(param_2);
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b4308;
    _objc_alloc(PTR_PTR_1126b4308);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bfceb20(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032e80(puVar2);
    _objc_release(uVar3);
    lVar4 = lVar1 + _DAT_11271a8c8;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010bf21f80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c101e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(lVar1 + _DAT_11271a8b4);
    *(long *)(lVar1 + _DAT_11271a8b4) = lVar6;
    _objc_retain(lVar6);
    _objc_release(uVar3);
    func_0x00010befa160(param_2);
    _objc_release(lVar6);
    _objc_release(puVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar7 = param_2;
  func_0x000107d4f4cc(param_2,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x58));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar3);
  _objc_release(uVar7);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105051244; end: 1050516a7; -[SCGroupProfileEntryPoint _presentGroupProfileWithCommunityId:groupProfileSubType:snapchatters:kickedGroupMembers:userIdToLastInteractedTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105051244(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar10 = (long)_DAT_11271a78c;
  _objc_retain(param_5);
  uVar12 = *(undefined8 *)(param_1 + lVar10);
  *(undefined8 *)(param_1 + lVar10) = param_5;
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_release(uVar12);
  lVar10 = (long)_DAT_11271a790;
  _objc_retain(param_6);
  uVar12 = *(undefined8 *)(param_1 + lVar10);
  *(undefined8 *)(param_1 + lVar10) = param_6;
  _objc_release(uVar12);
  lVar11 = (long)_DAT_11271a758;
  lVar10 = param_1 + lVar11;
  _objc_loadWeakRetained();
  lVar2 = lVar10;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010c08fa60();
  if (lVar9 == 0) {
    _objc_release(lVar2);
    _objc_release();
  }
  else {
    lVar9 = param_1 + _DAT_11271a8a8;
    _objc_loadWeakRetained();
    lVar3 = lVar9;
    func_0x00010c0cb4c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0790e0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar9);
    _objc_release(lVar2);
    _objc_release();
    if ((int)lVar5 != 0) {
      lVar2 = param_1 + lVar11;
      _objc_loadWeakRetained();
      lVar10 = lVar2;
      func_0x00010bfceb20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      puVar6 = PTR_PTR_1126b0cd8;
      func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,lVar10);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1 + _DAT_11271a8c4;
      _objc_loadWeakRetained();
      lVar9 = lVar2;
      func_0x00010c0d5c60();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bfc7e20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar9);
      _objc_release(lVar2);
      if ((puVar6 != (undefined *)0x0) && (lVar4 != 0)) {
        puVar7 = PTR_PTR_1126b41e0;
        _objc_alloc(PTR_PTR_1126b41e0);
        func_0x00010c004e00();
        puVar8 = PTR_PTR_1126b41e8;
        _objc_alloc(PTR_PTR_1126b41e8);
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0xc2000000;
        pcStack_88 = FUN_1050516a8;
        puStack_80 = &UNK_110863ff8;
        _objc_retain(lVar10);
        puStack_c0 = puVar1;
        uStack_b8 = 0xc2000000;
        uStack_b0 = 0x1050516ac;
        puStack_a8 = &UNK_110855e40;
        lStack_78 = lVar10;
        _objc_retain(lVar10);
        lStack_a0 = lVar10;
        func_0x00010c04f4c0(puVar8,param_2,&puStack_98,&puStack_c0);
        func_0x00010c2665a0(lVar4,param_2,puVar7,1,3,puVar8);
        _objc_release(puVar8);
        _objc_release(lStack_a0);
        _objc_release(lStack_78);
        _objc_release(puVar7);
      }
      _objc_release(lVar4);
      _objc_release(puVar6);
      _objc_release();
    }
  }
  func_0x00010b83741c();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_11271a77c;
  uVar12 = *(undefined8 *)(param_1 + lVar9);
  *(long *)(param_1 + lVar9) = lVar10;
  _objc_release(uVar12);
  lVar2 = param_1;
  func_0x00010bdf1d80(param_1,param_2,param_3,param_7,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_3);
  func_0x00010c219b20(lVar2,param_2,*(undefined8 *)(param_1 + lVar9));
  func_0x00010c1c8b80(lVar2,param_2,0);
  lVar10 = param_1 + lVar11;
  _objc_loadWeakRetained();
  lVar9 = lVar10;
  func_0x00010bf4b2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar10);
  if (lVar9 == 0) {
    lVar11 = param_1 + lVar11;
    _objc_loadWeakRetained();
    lVar10 = lVar11;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    lVar9 = (long)_DAT_11271a780;
    lVar11 = *(long *)(param_1 + lVar9);
    *(long *)(param_1 + lVar9) = lVar10;
  }
  else {
    puVar6 = PTR_PTR_1126aead8;
    _objc_alloc();
    lVar11 = param_1 + lVar11;
    _objc_loadWeakRetained(lVar11);
    lVar10 = lVar11;
    func_0x00010bf4b2e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40(puVar6,param_2,lVar10,1);
    lVar9 = (long)_DAT_11271a780;
    uVar12 = *(undefined8 *)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar6;
    _objc_release(uVar12);
    _objc_release(lVar10);
  }
  _objc_release(lVar11);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + lVar9),param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 1050516a8; end: 1050516af;  */

void FUN_1050516a8(void)

{
  return;
}



/* Entry: 1050516b0; end: 105051ba3; -[SCGroupProfileEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050516b0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271a8d8);
  _objc_destroyWeak(param_1 + _DAT_11271a8b0);
  _objc_destroyWeak(param_1 + _DAT_11271a890);
  _objc_destroyWeak(param_1 + _DAT_11271a888);
  _objc_storeStrong(param_1 + _DAT_11271a884,0);
  _objc_storeStrong(param_1 + _DAT_11271a87c,0);
  _objc_destroyWeak(param_1 + _DAT_11271a878);
  _objc_storeStrong(param_1 + _DAT_11271a874,0);
  _objc_storeStrong(param_1 + _DAT_11271a870,0);
  _objc_storeStrong(param_1 + _DAT_11271a84c,0);
  _objc_storeStrong(param_1 + _DAT_11271a844,0);
  _objc_storeStrong(param_1 + _DAT_11271a830,0);
  _objc_destroyWeak(param_1 + _DAT_11271a848);
  _objc_destroyWeak(param_1 + _DAT_11271a828);
  _objc_storeStrong(param_1 + _DAT_11271a824,0);
  _objc_storeStrong(param_1 + _DAT_11271a80c,0);
  _objc_storeStrong(param_1 + _DAT_11271a800,0);
  _objc_storeStrong(param_1 + _DAT_11271a76c,0);
  _objc_storeStrong(param_1 + _DAT_11271a7f8,0);
  _objc_destroyWeak(param_1 + _DAT_11271a8d4);
  _objc_destroyWeak(param_1 + _DAT_11271a8d0);
  _objc_storeStrong(param_1 + _DAT_11271a7f4,0);
  _objc_storeStrong(param_1 + _DAT_11271a7f0,0);
  _objc_storeStrong(param_1 + _DAT_11271a7ec,0);
  _objc_destroyWeak(param_1 + _DAT_11271a88c);
  _objc_destroyWeak(param_1 + _DAT_11271a880);
  _objc_destroyWeak(param_1 + _DAT_11271a86c);
  _objc_destroyWeak(param_1 + _DAT_11271a868);
  _objc_destroyWeak(param_1 + _DAT_11271a864);
  _objc_destroyWeak(param_1 + _DAT_11271a858);
  _objc_destroyWeak(param_1 + _DAT_11271a850);
  _objc_destroyWeak(param_1 + _DAT_11271a83c);
  _objc_destroyWeak(param_1 + _DAT_11271a8a8);
  _objc_destroyWeak(param_1 + _DAT_11271a8c0);
  _objc_destroyWeak(param_1 + _DAT_11271a8a4);
  _objc_destroyWeak(param_1 + _DAT_11271a85c);
  _objc_destroyWeak(param_1 + _DAT_11271a7b8);
  _objc_destroyWeak(param_1 + _DAT_11271a7a8);
  _objc_destroyWeak(param_1 + _DAT_11271a89c);
  _objc_destroyWeak(param_1 + _DAT_11271a8a0);
  _objc_destroyWeak(param_1 + _DAT_11271a838);
  _objc_destroyWeak(param_1 + _DAT_11271a820);
  _objc_destroyWeak(param_1 + _DAT_11271a8cc);
  _objc_destroyWeak(param_1 + _DAT_11271a814);
  _objc_destroyWeak(param_1 + _DAT_11271a8bc);
  _objc_destroyWeak(param_1 + _DAT_11271a81c);
  _objc_destroyWeak(param_1 + _DAT_11271a818);
  _objc_destroyWeak(param_1 + _DAT_11271a7d8);
  _objc_destroyWeak(param_1 + _DAT_11271a82c);
  _objc_destroyWeak(param_1 + _DAT_11271a7fc);
  _objc_destroyWeak(param_1 + _DAT_11271a810);
  _objc_destroyWeak(param_1 + _DAT_11271a7c8);
  _objc_destroyWeak(param_1 + _DAT_11271a898);
  _objc_destroyWeak(param_1 + _DAT_11271a7d4);
  _objc_destroyWeak(param_1 + _DAT_11271a808);
  _objc_destroyWeak(param_1 + _DAT_11271a894);
  _objc_destroyWeak(param_1 + _DAT_11271a7b4);
  _objc_destroyWeak(param_1 + _DAT_11271a778);
  _objc_destroyWeak(param_1 + _DAT_11271a8ac);
  _objc_destroyWeak(param_1 + _DAT_11271a770);
  _objc_destroyWeak(param_1 + _DAT_11271a760);
  _objc_destroyWeak(param_1 + _DAT_11271a7c4);
  _objc_destroyWeak(param_1 + _DAT_11271a7e0);
  _objc_destroyWeak(param_1 + _DAT_11271a7d0);
  _objc_destroyWeak(param_1 + _DAT_11271a7cc);
  _objc_destroyWeak(param_1 + _DAT_11271a7e8);
  _objc_destroyWeak(param_1 + _DAT_11271a7dc);
  _objc_destroyWeak(param_1 + _DAT_11271a8c4);
  _objc_destroyWeak(param_1 + _DAT_11271a834);
  _objc_destroyWeak(param_1 + _DAT_11271a7b0);
  _objc_destroyWeak(param_1 + _DAT_11271a768);
  _objc_destroyWeak(param_1 + _DAT_11271a7a4);
  _objc_destroyWeak(param_1 + _DAT_11271a798);
  _objc_destroyWeak(param_1 + _DAT_11271a788);
  _objc_destroyWeak(param_1 + _DAT_11271a8b8);
  _objc_destroyWeak(param_1 + _DAT_11271a794);
  _objc_destroyWeak(param_1 + _DAT_11271a7e4);
  _objc_destroyWeak(param_1 + _DAT_11271a7a0);
  _objc_destroyWeak(param_1 + _DAT_11271a854);
  _objc_destroyWeak(param_1 + _DAT_11271a79c);
  _objc_destroyWeak(param_1 + _DAT_11271a7ac);
  _objc_destroyWeak(param_1 + _DAT_11271a860);
  _objc_destroyWeak(param_1 + _DAT_11271a7c0);
  _objc_destroyWeak(param_1 + _DAT_11271a7bc);
  _objc_destroyWeak(param_1 + _DAT_11271a804);
  _objc_destroyWeak(param_1 + _DAT_11271a75c);
  _objc_destroyWeak(param_1 + _DAT_11271a758);
  _objc_destroyWeak(param_1 + _DAT_11271a784);
  _objc_destroyWeak(param_1 + _DAT_11271a8c8);
  _objc_destroyWeak(param_1 + _DAT_11271a840);
  _objc_storeStrong(param_1 + _DAT_11271a8b4,0);
  _objc_storeStrong(param_1 + _DAT_11271a790,0);
  _objc_storeStrong(param_1 + _DAT_11271a78c,0);
  _objc_storeStrong(param_1 + _DAT_11271a77c,0);
  _objc_storeStrong(param_1 + _DAT_11271a764,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271a780,0);
  return;
}



/* Entry: 105051ba4; end: 105052393; -[SCGroupUnifiedProfileSectionCreator initWithDataSource:imageDownloader:labelInfoFetcher:actionHandler:presentingViewController:profileChatMediaDataSource:userSession:chatAttachmentDataStore:charmsDataCoordinator:charmsViewingDataCoordinator:promptSectionDataCoordinator:pinnedConversationsDataCoordinator:profileSavedAttachmentsFetcher:profileChatMessagesUpdateTracker:charmsBlizzardLogger:groupsDataFetcher:groupsDataCreator:userTrackedLogger:friendmojiPresenter:friendsFeedActionTextGenerator:friendsFeedIconGenerator:grapheneServices:groupServices:legacySnapchatterServices:snapchatterServices:storiesDataAccess:remoteStoriesDataProvider:bitmojiSelfieServices:simpleContentFetcher:urlPreviewProvider:friendStorySettingMutator:valdiRuntimeProvider:streakProvider:friendmojiRegistry:friendmojiDataProvider:messagingExperimentService:groupProfileSubType:communityId:performerProvider:groupMembers:circumstanceEngine:cofStore:ghostImageService:] */

undefined8 *
FUN_105051ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined4 param_40,
             undefined4 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46)

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
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  puStack_70 = PTR_PTR_1126e5c50;
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
    _objc_storeWeak(puVar1 + 5,param_7);
    _objc_storeWeak(puVar1 + 6,param_9);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
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
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_38;
    _objc_release(uVar2);
    puVar1[0x25] = param_39;
    _objc_retain(param_42);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_42;
    _objc_release(uVar2);
    _objc_retain(param_43);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_43;
    _objc_release(uVar2);
    _objc_retain(param_44);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_45;
    _objc_release(uVar2);
    _objc_retain(param_46);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_46;
    _objc_release(uVar2);
  }
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
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



/* Entry: 105052394; end: 1050525c7; -[SCGroupUnifiedProfileSectionCreator sectionForDescriptor:] */

void FUN_105052394(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar1 = param_3;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((int)uVar2 == 0) {
        uVar1 = param_3;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c0720c0();
        _objc_release(uVar1);
        if ((int)uVar2 == 0) {
          uVar1 = param_3;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010c0720c0();
          _objc_release(uVar1);
          if ((int)uVar2 == 0) {
            uVar1 = param_3;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar1;
            func_0x00010c0720c0();
            _objc_release(uVar1);
            if ((int)uVar2 == 0) {
              uVar1 = param_3;
              func_0x00010bfe5ec0();
              _objc_retainAutoreleasedReturnValue();
              uVar2 = uVar1;
              func_0x00010c0720c0();
              _objc_release(uVar1);
              if ((int)uVar2 == 0) {
                param_1 = 0;
              }
              else {
                func_0x00010be802c0(param_1);
                _objc_retainAutoreleasedReturnValue();
              }
            }
            else {
              func_0x00010bddcce0(param_1);
              _objc_retainAutoreleasedReturnValue();
            }
          }
          else {
            func_0x00010bddcd00(param_1,param_2,param_3);
            _objc_retainAutoreleasedReturnValue();
          }
        }
        else {
          func_0x00010be9a520(param_1);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        lVar3 = param_1;
        func_0x00010beb32c0(param_1);
        func_0x00010be5ef60(param_1,param_2,param_3,lVar3);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010be832c0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010be36d20(param_1,param_2,*(long *)(param_1 + 0x128) == 0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1050525c8; end: 1050525d7; -[SCGroupUnifiedProfileSectionCreator _shouldDisplayAddToGroup] */

bool FUN_1050525c8(long param_1)

{
  return *(ulong *)(param_1 + 0x128) < 2;
}



/* Entry: 1050525d8; end: 105052743; -[SCGroupUnifiedProfileSectionCreator _identitySectionWithCanEditGroupName:] */

void FUN_1050525d8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  ulong uVar13;
  int iVar14;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b4318;
  _objc_alloc();
  uStack_68 = *(undefined8 *)(param_1 + 0x118);
  uStack_70 = *(undefined8 *)(param_1 + 0x110);
  uStack_58 = *(undefined8 *)(param_1 + 0x140);
  uStack_60 = *(undefined8 *)(param_1 + 0x148);
  func_0x00010c063a20();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110eb4ff8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110dd99f8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x130);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b2b48;
  _objc_alloc();
  func_0x00010c000720(0xc02a000000000000,0x4030000000000000,0,0x4030000000000000);
  _objc_release(uVar4);
  _objc_release(puVar2);
  puVar6 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    pcStack_78 = FUN_105052744;
    lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = PTR_PTR_1126b1108;
    uStack_a0 = uVar4;
    puStack_98 = puVar2;
    puStack_90 = puVar5;
    puStack_88 = puVar1;
    puStack_80 = &stack0xfffffffffffffff0;
    _objc_alloc();
    func_0x00010c04f820();
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110eb4ff8;
    ppuStack_b0 = &PTR____CFConstantStringClassReference_110f121d8;
    iVar14 = (int)&ppuStack_b8;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f93c0(puVar7);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b4320;
    _objc_alloc(PTR_PTR_1126b4320);
    func_0x00010c0085c0();
    func_0x00010c1f9240(puVar7);
    _objc_release(puVar1);
    puVar2 = puVar7;
    func_0x00010c155a60();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar6 + 0x158;
    _objc_loadWeakRetained();
    func_0x00010bef9980(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar2);
    uVar13 = *(ulong *)(puVar6 + 0x20);
    puVar1 = puVar7;
    func_0x00010c161980();
    puVar5 = puVar7;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
      ___stack_chk_fail();
      puVar6 = PTR_PTR_1126b1100;
      puVar2 = PTR_PTR_1126b02a8;
      if (iVar14 == 0) {
        _objc_retain(uVar13);
        _objc_alloc(puVar6);
        puVar2 = puVar6;
        func_0x000107ce6c58();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar2;
        func_0x000108f728c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c043040(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar2);
        puVar5 = PTR_PTR_1126b4328;
        _objc_alloc(PTR_PTR_1126b4328);
        func_0x00010c04f820();
      }
      else {
        _objc_retain(uVar13);
        _objc_alloc(puVar2);
        func_0x00010c01b460();
        puVar6 = puVar2;
        func_0x000107ce6c70();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126b0c00;
        _objc_alloc(PTR_PTR_1126b0c00);
        puVar5 = puVar7;
        func_0x000107ce6c58();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar5;
        func_0x000108f72910();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c043040(puVar7);
        _objc_release(puVar8);
        _objc_release(puVar5);
        func_0x00010c161980(puVar7);
        puVar5 = PTR_PTR_1126b4328;
        _objc_alloc(PTR_PTR_1126b4328);
        func_0x00010c04f820();
        _objc_release(puVar7);
        _objc_release(puVar6);
        puVar6 = puVar2;
      }
      _objc_release(puVar6);
      puVar6 = PTR_PTR_1126b4330;
      _objc_alloc();
      puVar2 = puVar1 + 0x158;
      _objc_loadWeakRetained(puVar2);
      func_0x00010bff3160();
      _objc_release(puVar2);
      puVar2 = puVar6;
      func_0x00010c14fc00(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d2560(puVar5);
      _objc_release(puVar2);
      uVar9 = uVar13;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar13);
      puVar2 = PTR_PTR_1126b1700;
      _objc_opt_class(PTR_PTR_1126b1700);
      uVar10 = uVar9;
      _objc_opt_isKindOfClass(uVar9,puVar2);
      uVar13 = uVar9;
      if ((uVar10 & 1) == 0) {
        uVar13 = 0;
      }
      _objc_retain(uVar13);
      _objc_release(uVar9);
      uVar9 = uVar13;
      func_0x00010bf9c100(uVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar13);
      func_0x00010c0c3680(uVar9);
      puVar7 = PTR_PTR_1126b4338;
      _objc_alloc(PTR_PTR_1126b4338);
      puVar2 = puVar1 + 0x30;
      _objc_loadWeakRetained(puVar2);
      func_0x00010c008fe0(puVar7);
      func_0x00010c1f9240(puVar5);
      _objc_release(puVar7);
      _objc_release(puVar2);
      puVar2 = puVar5;
      func_0x00010c155a60(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar1 + 0x158;
      _objc_loadWeakRetained(puVar1);
      func_0x00010bef9980(puVar2);
      _objc_release(puVar1);
      _objc_release(puVar2);
      puVar1 = PTR_PTR_1126b4218;
      _objc_alloc(PTR_PTR_1126b4218);
      ppuVar11 = &PTR____CFConstantStringClassReference_110db8398;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db8398,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = &PTR____CFConstantStringClassReference_110dc37b8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc37b8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c046420(puVar1);
      func_0x00010c222a60(puVar5);
      _objc_release(puVar1);
      _objc_release(ppuVar12);
      _objc_release(ppuVar11);
      func_0x00010c161980(puVar5);
      func_0x00010c1f9620(puVar5);
      _objc_release(uVar9);
      _objc_release(puVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105052744; end: 105052883; -[SCGroupUnifiedProfileSectionCreator _promptSection] */

void FUN_105052744(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  int iVar13;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b1108;
  _objc_alloc();
  func_0x00010c04f820();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110eb4ff8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f121d8;
  iVar13 = (int)&ppuStack_48;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f93c0(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b4320;
  _objc_alloc(PTR_PTR_1126b4320);
  func_0x00010c0085c0();
  func_0x00010c1f9240(puVar1);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c155a60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x158;
  _objc_loadWeakRetained();
  func_0x00010bef9980(puVar2);
  _objc_release(lVar3);
  _objc_release(puVar2);
  uVar12 = *(ulong *)(param_1 + 0x20);
  puVar2 = puVar1;
  func_0x00010c161980();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar6 = PTR_PTR_1126b1100;
    puVar7 = PTR_PTR_1126b02a8;
    if (iVar13 == 0) {
      _objc_retain(uVar12);
      _objc_alloc(puVar6);
      puVar1 = puVar6;
      func_0x000107ce6c58();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar1;
      func_0x000108f728c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c043040(puVar6);
      _objc_release(puVar7);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126b4328;
      _objc_alloc(PTR_PTR_1126b4328);
      func_0x00010c04f820();
    }
    else {
      _objc_retain(uVar12);
      _objc_alloc(puVar7);
      func_0x00010c01b460();
      puVar6 = puVar7;
      func_0x000107ce6c70();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b0c00;
      _objc_alloc(PTR_PTR_1126b0c00);
      puVar1 = puVar4;
      func_0x000107ce6c58();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x000108f72910();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c043040(puVar4);
      _objc_release(puVar5);
      _objc_release(puVar1);
      func_0x00010c161980(puVar4);
      puVar1 = PTR_PTR_1126b4328;
      _objc_alloc(PTR_PTR_1126b4328);
      func_0x00010c04f820();
      _objc_release(puVar4);
      _objc_release(puVar6);
      puVar6 = puVar7;
    }
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126b4330;
    _objc_alloc();
    puVar7 = puVar2 + 0x158;
    _objc_loadWeakRetained(puVar7);
    func_0x00010bff3160();
    _objc_release(puVar7);
    puVar7 = puVar6;
    func_0x00010c14fc00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d2560(puVar1);
    _objc_release(puVar7);
    uVar8 = uVar12;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    puVar7 = PTR_PTR_1126b1700;
    _objc_opt_class(PTR_PTR_1126b1700);
    uVar9 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar7);
    uVar12 = uVar8;
    if ((uVar9 & 1) == 0) {
      uVar12 = 0;
    }
    _objc_retain(uVar12);
    _objc_release(uVar8);
    uVar8 = uVar12;
    func_0x00010bf9c100(uVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    func_0x00010c0c3680(uVar8);
    puVar4 = PTR_PTR_1126b4338;
    _objc_alloc(PTR_PTR_1126b4338);
    puVar7 = puVar2 + 0x30;
    _objc_loadWeakRetained(puVar7);
    func_0x00010c008fe0(puVar4);
    func_0x00010c1f9240(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar7);
    puVar7 = puVar1;
    func_0x00010c155a60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar2 + 0x158;
    _objc_loadWeakRetained(puVar2);
    func_0x00010bef9980(puVar7);
    _objc_release(puVar2);
    _objc_release(puVar7);
    puVar2 = PTR_PTR_1126b4218;
    _objc_alloc(PTR_PTR_1126b4218);
    ppuVar10 = &PTR____CFConstantStringClassReference_110db8398;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db8398,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = &PTR____CFConstantStringClassReference_110dc37b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc37b8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c046420(puVar2);
    func_0x00010c222a60(puVar1);
    _objc_release(puVar2);
    _objc_release(ppuVar11);
    _objc_release(ppuVar10);
    func_0x00010c161980(puVar1);
    func_0x00010c1f9620(puVar1);
    _objc_release(uVar8);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105052884; end: 105052c67; -[SCGroupUnifiedProfileSectionCreator _membersSection:addToGroupSection:] */

void FUN_105052884(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  
  puVar4 = PTR_PTR_1126b1100;
  puVar5 = PTR_PTR_1126b02a8;
  if (param_4 == 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar4);
    puVar5 = puVar4;
    func_0x000107ce6c58();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x000108f728c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043040(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar6 = PTR_PTR_1126b4328;
    _objc_alloc(PTR_PTR_1126b4328);
    func_0x00010c04f820();
  }
  else {
    _objc_retain(param_3);
    _objc_alloc(puVar5);
    func_0x00010c01b460();
    puVar4 = puVar5;
    func_0x000107ce6c70();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b0c00;
    _objc_alloc(PTR_PTR_1126b0c00);
    puVar6 = puVar2;
    func_0x000107ce6c58();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    func_0x000108f72910();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043040(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar6);
    func_0x00010c161980(puVar2);
    puVar6 = PTR_PTR_1126b4328;
    _objc_alloc(PTR_PTR_1126b4328);
    func_0x00010c04f820();
    _objc_release(puVar2);
    _objc_release(puVar4);
    puVar4 = puVar5;
  }
  _objc_release(puVar4);
  puVar5 = PTR_PTR_1126b4330;
  _objc_alloc();
  lVar7 = param_1 + 0x158;
  _objc_loadWeakRetained(lVar7);
  func_0x00010bff3160();
  _objc_release(lVar7);
  puVar4 = puVar5;
  func_0x00010c14fc00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d2560(puVar6);
  _objc_release(puVar4);
  uVar8 = param_3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126b1700;
  _objc_opt_class(PTR_PTR_1126b1700);
  uVar9 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar4);
  uVar1 = uVar8;
  if ((uVar9 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar8);
  uVar8 = uVar1;
  func_0x00010bf9c100(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c0c3680(uVar8);
  puVar4 = PTR_PTR_1126b4338;
  _objc_alloc(PTR_PTR_1126b4338);
  lVar7 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar7);
  func_0x00010c008fe0(puVar4);
  func_0x00010c1f9240(puVar6);
  _objc_release(puVar4);
  _objc_release(lVar7);
  puVar4 = puVar6;
  func_0x00010c155a60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x158;
  _objc_loadWeakRetained(param_1);
  func_0x00010bef9980(puVar4);
  _objc_release(param_1);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b4218;
  _objc_alloc(PTR_PTR_1126b4218);
  ppuVar10 = &PTR____CFConstantStringClassReference_110db8398;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db8398,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = &PTR____CFConstantStringClassReference_110dc37b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc37b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c046420(puVar4);
  func_0x00010c222a60(puVar6);
  _objc_release(puVar4);
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  func_0x00010c161980(puVar6);
  func_0x00010c1f9620(puVar6);
  _objc_release(uVar8);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105052c68; end: 105052e1b; -[SCGroupUnifiedProfileSectionCreator _savedInChatSection] */

void FUN_105052c68(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b1100;
  _objc_alloc();
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc3778;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3778,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x000108f728c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043040();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126b1108;
  _objc_alloc();
  func_0x00010c04f820();
  puVar5 = PTR_PTR_1126b4340;
  _objc_alloc(PTR_PTR_1126b4340);
  func_0x00010c0090c0();
  func_0x00010c1f9240(puVar4);
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010c155a60();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x158;
  _objc_loadWeakRetained();
  func_0x00010bef9980(puVar5);
  _objc_release(param_1);
  _objc_release(puVar5);
  func_0x00010c161980(puVar4);
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar5;
  func_0x00010c1f93c0(puVar4);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126b1100;
    lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar12);
    _objc_alloc();
    ppuVar2 = &PTR____CFConstantStringClassReference_110dc3798;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3798,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x000108f728c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043040();
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    puVar6 = PTR_PTR_1126b4208;
    _objc_alloc();
    uVar7 = *(undefined8 *)(puVar1 + 200);
    func_0x00010c244ac0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(puVar1 + 200);
    func_0x00010c244b40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(puVar1 + 200);
    func_0x00010bfb8b40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(puVar1 + 200);
    func_0x00010c244620(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c049a80();
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    puVar11 = puVar12;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar4 = PTR_PTR_1126b1700;
    _objc_opt_class(PTR_PTR_1126b1700);
    puVar12 = puVar11;
    _objc_opt_isKindOfClass(puVar11,puVar4);
    puVar4 = puVar11;
    if (((ulong)puVar12 & 1) == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(puVar11);
    puVar12 = puVar4;
    func_0x00010bf9c100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c0c3680();
    puVar11 = PTR_PTR_1126b4348;
    _objc_alloc();
    puVar4 = puVar1 + 0x30;
    _objc_loadWeakRetained(puVar4);
    func_0x00010c0192a0();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b1108;
    _objc_alloc();
    func_0x00010c04f820();
    func_0x00010c1f9240();
    puVar13 = PTR_PTR_1126b4218;
    _objc_alloc(PTR_PTR_1126b4218);
    ppuVar2 = &PTR____CFConstantStringClassReference_110db8398;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db8398,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110dc37b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc37b8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c046420(puVar13);
    func_0x00010c222a60(puVar4);
    _objc_release(puVar13);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    puVar1 = puVar1 + 0x158;
    _objc_loadWeakRetained(puVar1);
    func_0x00010bef9980(puVar11);
    _objc_release(puVar1);
    func_0x00010c161980(puVar4);
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f93c0(puVar4);
    _objc_release(puVar1);
    _objc_release(puVar11);
    _objc_release(puVar12);
    _objc_release(puVar6);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
      ___stack_chk_fail();
      puVar1 = PTR_PTR_1126b4220;
      _objc_alloc(PTR_PTR_1126b4220);
      ppuVar2 = &PTR____CFConstantStringClassReference_110dc37d8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc37d8,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar2;
      func_0x000108f728c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c043040(puVar1);
      _objc_release(ppuVar3);
      _objc_release(ppuVar2);
      func_0x00010c161980(puVar1);
      puVar4 = PTR_PTR_1126b4228;
      _objc_alloc(PTR_PTR_1126b4228);
      uVar7 = *(undefined8 *)(puVar5 + 8);
      func_0x00010c15ffa0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = &PTR____CFConstantStringClassReference_110dc38b8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc38b8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03b240(puVar4);
      _objc_release(ppuVar2);
      _objc_release(uVar7);
      puVar12 = PTR_PTR_1126b4350;
      _objc_alloc(PTR_PTR_1126b4350);
      func_0x00010c008e00();
      func_0x00010c17ad80(puVar4);
      _objc_release(puVar12);
      func_0x00010c161980(puVar4);
      func_0x00010c17ad60(puVar4);
      func_0x000108fab168(*(undefined8 *)(puVar5 + 0x140));
      func_0x00010c21d7c0(puVar4);
      _objc_release(puVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105052e1c; end: 1050531c7; -[SCGroupUnifiedProfileSectionCreator _chatAttachmentSection:] */

void FUN_105052e1c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  
  puVar2 = PTR_PTR_1126b1100;
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  ppuVar3 = &PTR____CFConstantStringClassReference_110dc3798;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3798,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x000108f728c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043040();
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  puVar5 = PTR_PTR_1126b4208;
  _objc_alloc();
  uVar6 = *(undefined8 *)(param_1 + 200);
  func_0x00010c244ac0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 200);
  func_0x00010c244b40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 200);
  func_0x00010bfb8b40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 200);
  func_0x00010c244620(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049a80();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar10 = param_3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar11 = PTR_PTR_1126b1700;
  _objc_opt_class(PTR_PTR_1126b1700);
  uVar12 = uVar10;
  _objc_opt_isKindOfClass(uVar10,puVar11);
  uVar1 = uVar10;
  if ((uVar12 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar10);
  uVar10 = uVar1;
  func_0x00010bf9c100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c0c3680();
  puVar11 = PTR_PTR_1126b4348;
  _objc_alloc();
  lVar13 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar13);
  func_0x00010c0192a0();
  _objc_release(lVar13);
  puVar14 = PTR_PTR_1126b1108;
  _objc_alloc();
  func_0x00010c04f820();
  func_0x00010c1f9240();
  puVar15 = PTR_PTR_1126b4218;
  _objc_alloc(PTR_PTR_1126b4218);
  ppuVar3 = &PTR____CFConstantStringClassReference_110db8398;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db8398,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110dc37b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc37b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c046420(puVar15);
  func_0x00010c222a60(puVar14);
  _objc_release(puVar15);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  param_1 = param_1 + 0x158;
  _objc_loadWeakRetained(param_1);
  func_0x00010bef9980(puVar11);
  _objc_release(param_1);
  func_0x00010c161980(puVar14);
  puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f93c0(puVar14);
  _objc_release(puVar15);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126b4220;
    _objc_alloc(PTR_PTR_1126b4220);
    ppuVar3 = &PTR____CFConstantStringClassReference_110dc37d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc37d8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x000108f728c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043040(puVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    func_0x00010c161980(puVar5);
    puVar14 = PTR_PTR_1126b4228;
    _objc_alloc(PTR_PTR_1126b4228);
    uVar6 = *(undefined8 *)(puVar2 + 8);
    func_0x00010c15ffa0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110dc38b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc38b8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03b240(puVar14);
    _objc_release(ppuVar3);
    _objc_release(uVar6);
    puVar11 = PTR_PTR_1126b4350;
    _objc_alloc(PTR_PTR_1126b4350);
    func_0x00010c008e00();
    func_0x00010c17ad80(puVar14);
    _objc_release(puVar11);
    func_0x00010c161980(puVar14);
    func_0x00010c17ad60(puVar14);
    func_0x000108fab168(*(undefined8 *)(puVar2 + 0x140));
    func_0x00010c21d7c0(puVar14);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 1050531c8; end: 10505332b; -[SCGroupUnifiedProfileSectionCreator _charmsSection] */

void FUN_1050531c8(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b4220;
  _objc_alloc(PTR_PTR_1126b4220);
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc37d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc37d8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x000108f728c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043040(puVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  func_0x00010c161980(puVar1);
  puVar4 = PTR_PTR_1126b4228;
  _objc_alloc(PTR_PTR_1126b4228);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c15ffa0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc38b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc38b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03b240(puVar4);
  _objc_release(ppuVar2);
  _objc_release(uVar5);
  puVar6 = PTR_PTR_1126b4350;
  _objc_alloc(PTR_PTR_1126b4350);
  func_0x00010c008e00();
  func_0x00010c17ad80(puVar4);
  _objc_release(puVar6);
  func_0x00010c161980(puVar4);
  func_0x00010c17ad60(puVar4);
  func_0x000108fab168(*(undefined8 *)(param_1 + 0x140));
  func_0x00010c21d7c0(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10505332c; end: 10505348b; -[SCGroupUnifiedProfileSectionCreator _privacyAffirmationSection] */

void FUN_10505332c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  func_0x00010c04f820();
  ppuStack_68 = &PTR____CFConstantStringClassReference_110eb4ff8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110f12438;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_60,&ppuStack_68,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f93c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b4358;
  _objc_alloc(PTR_PTR_1126b4358);
  uVar6 = *(undefined8 *)(param_1 + 8);
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x158;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c008e80(puVar2,param_2,uVar6,lVar4,lVar5,*(undefined8 *)(param_1 + 0x150));
  func_0x00010c1f9240(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_loadWeakRetained(lVar3 + 0x158);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10505348c; end: 1050534a3; -[SCGroupUnifiedProfileSectionCreator lifecycleAnnouncer] */

void FUN_10505348c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x158);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050534a4; end: 1050534af; -[SCGroupUnifiedProfileSectionCreator setLifecycleAnnouncer:] */

void FUN_1050534a4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x158,param_3);
  return;
}



/* Entry: 1050534b0; end: 1050536b3; -[SCGroupUnifiedProfileSectionCreator .cxx_destruct] */

void FUN_1050534b0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x158);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
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
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050536b4; end: 105053973; -[SCGroupUnifiedProfileFactory initWithUserSession:snapchatterServices:userInfoProvider:storiesDataAccess:remoteStoriesDataProvider:friendsFeedDataAccess:groupServices:circumstanceEngine:conversationServices:legacySnapchatterServices:friendStorySettingMutator:messagingExperimentService:] */

undefined8 *
FUN_1050536b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_68 = PTR_PTR_1126e5c58;
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



/* Entry: 105053974; end: 105053b9f; -[SCGroupUnifiedProfileFactory groupUnifiedProfileDataSourceWithGroupId:groupMembers:] */

void FUN_105053974(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar2 = PTR_PTR_1126b42d8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar15 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfcf8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfcf900();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfcf2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfb8b40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05dac0(puVar2,param_2,uVar15,uVar3,uVar5,param_3,param_4,uVar7,uVar9,uVar10,uVar1,
                      uVar11,uVar12,uVar13,uVar14,*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x58));
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105053ba0; end: 105053beb; -[SCGroupUnifiedProfileFactory groupUnifiedActionMenuActionHandlerWithSourcePageType:] */

void FUN_105053ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b4360;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04aae0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105053bec; end: 105053d13; -[SCGroupUnifiedProfileFactory groupActionSheetDataWithGroupProfileData:sourcePageType:attributedPage:hideRecursiveOptions:memberNames:] */

void FUN_105053bec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b4368;
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfcf8c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bfceb20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019380(puVar1,param_2,uVar2,uVar3,param_4,param_6,param_7,uVar4,param_5,
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x60));
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105053d14; end: 105053dbb; -[SCGroupUnifiedProfileFactory .cxx_destruct] */

void FUN_105053d14(long param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105053dbc; end: 105054247; -[SCMyUnifiedProfilePostRegistrationActionHandler initWithStartChatDelegate:profilePageActionHandler:featureSettingsService:snapchatterServices:groupServices:legacySnapchattersServices:userInfoServices:userBlizzardServices:grapheneServices:findFriendsScopeExposer:findFriendsScopeServices:permissionRequestService:notificationsPermissionRequester:reauthenticationServices:passwordNetworkRequester:createChatScopeExposer:webBrowsingScopeExposer:emailSettingsScopeExposer:myFriendsScopeExposer:settingsScopeExposer:settingsScopeServices:circumstanceEngine:] */

undefined8 *
FUN_105053dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

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
  puStack_70 = PTR_PTR_1126e5c60;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_4);
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
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[4];
    puVar1[4] = param_12;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 5,param_13);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    _objc_release(uVar2);
  }
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



/* Entry: 105054248; end: 105054577; -[SCMyUnifiedProfilePostRegistrationActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_105054248(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar3 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  if ((int)uVar1 == 0) {
    uVar3 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    if ((int)uVar1 == 0) {
      uVar3 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      if ((int)uVar1 == 0) {
        uVar3 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        if ((int)uVar1 != 0) {
          func_0x00010bebbbc0(param_1);
          goto LAB_105054370;
        }
        uVar3 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        if ((int)uVar1 == 0) {
          uVar3 = param_4;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar3;
          func_0x00010c0720c0();
          _objc_release(uVar3);
          if ((int)uVar1 == 0) {
            uVar3 = param_4;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar1 = uVar3;
            func_0x00010c0720c0();
            _objc_release(uVar3);
            if ((int)uVar1 == 0) {
              uVar3 = param_4;
              func_0x00010bfe5ec0();
              _objc_retainAutoreleasedReturnValue();
              uVar1 = uVar3;
              func_0x00010c0720c0();
              _objc_release(uVar3);
              if ((int)uVar1 == 0) {
                uVar3 = param_4;
                func_0x00010bfe5ec0();
                _objc_retainAutoreleasedReturnValue();
                uVar1 = uVar3;
                func_0x00010c0720c0();
                _objc_release(uVar3);
                if ((int)uVar1 == 0) {
                  uVar3 = param_4;
                  func_0x00010bfe5ec0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar1 = uVar3;
                  func_0x00010c0720c0();
                  _objc_release(uVar3);
                  if ((int)uVar1 == 0) {
                    uVar3 = param_4;
                    func_0x00010bfe5ec0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar1 = uVar3;
                    func_0x00010c0720c0();
                    _objc_release(uVar3);
                    if ((int)uVar1 != 0) {
                      func_0x00010beb8e00(param_1);
                    }
                  }
                  else {
                    func_0x00010beb9f20(param_1);
                  }
                }
                else {
                  puVar2 = PTR_PTR_1126b02a8;
                  _objc_alloc(PTR_PTR_1126b02a8);
                  func_0x00010c01b460();
                  param_1 = param_1 + 0x10;
                  _objc_loadWeakRetained(param_1);
                  func_0x00010bfd0140();
                  _objc_release(param_1);
                  _objc_release(puVar2);
                }
              }
              else {
                func_0x00010beb7f00(param_1);
              }
            }
            else {
              func_0x00010beb87e0(param_1);
            }
          }
          else {
            func_0x00010beba960(param_1,param_2,param_5);
          }
          goto LAB_105054370;
        }
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
      func_0x00010bebb5c0(param_1,param_2,uVar3);
    }
    else {
      func_0x00010beba7c0(param_1);
    }
  }
  else {
    func_0x00010beb8e40(param_1);
  }
LAB_105054370:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return 0;
}



/* Entry: 105054578; end: 10505466b; -[SCMyUnifiedProfilePostRegistrationActionHandler _showRegisterToVotePageWithSourceView:] */

void FUN_105054578(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  ppuVar1 = *(undefined ***)(param_1 + 0x18);
  func_0x00010c269d40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c127300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c06d500();
  if ((int)puVar3 != 0) {
    _objc_release(ppuVar2);
    ppuVar2 = &PTR____CFConstantStringClassReference_110dc38d8;
  }
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0xb8;
  _objc_loadWeakRetained(lVar4);
  func_0x000108065c5c(puVar3,lVar4,1,*(undefined8 *)(param_1 + 0x88),param_1,0xf,0);
  _objc_release(lVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e9720();
  _objc_release(uVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 10505466c; end: 10505472b; -[SCMyUnifiedProfilePostRegistrationActionHandler _showCreateGroupPage] */

void FUN_10505466c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = param_1 + 0xb8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b4370;
  _objc_alloc(PTR_PTR_1126b4370);
  puVar4 = PTR_PTR_1126b27d8;
  func_0x00010c0d8980(PTR_PTR_1126b27d8);
  func_0x00010c056d00(puVar3,param_2,puVar1,puVar4,0,param_1,0xffffffffffffffff,0);
  _objc_release(puVar4);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x80),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


