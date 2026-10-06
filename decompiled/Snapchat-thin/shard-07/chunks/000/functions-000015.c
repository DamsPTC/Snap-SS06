/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105039a94; end: 105039a9b; -[SCVideoCallFriendAction actionSheetCell] */

undefined8 FUN_105039a94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105039a9c; end: 105039aa3; -[SCVideoCallFriendAction position] */

undefined8 FUN_105039a9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105039aa4; end: 105039af7; -[SCVideoCallFriendAction .cxx_destruct] */

void FUN_105039aa4(long param_1)

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



/* Entry: 105039af8; end: 105039bf3; -[SCEditSnapchatterDisplayNameActionHandler initWithSnapchattersDataMutator:snapchattersDataFetcher:notificationServices:uiContainer:] */

undefined1 *
FUN_105039af8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e5bb0;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105039bf4; end: 105039e5f; -[SCEditSnapchatterDisplayNameActionHandler handleActionWithSender:actionModel:fromSourceView:] */

bool FUN_105039bf4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_4;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b4048;
  _objc_opt_class(PTR_PTR_1126b4048);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    puVar3 = PTR_PTR_1126b15c0;
    _objc_alloc(PTR_PTR_1126b15c0);
    uVar4 = uVar2;
    func_0x00010c244280(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008d20(puVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x18));
    _objc_initWeak(auStack_68,param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c244280(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(uVar2);
    func_0x00010c2448c0(uVar6);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1 != 0;
}



/* Entry: 105039e60; end: 105039eeb;  */

void FUN_105039e60(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (param_2 == 0) {
    func_0x00010c244280(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7b1a0(lVar1);
    _objc_release(uVar2);
  }
  else {
    func_0x00010be7b1a0(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105039eec; end: 10503a1a3; -[SCEditSnapchatterDisplayNameActionHandler _presentEditDialogWithSnapchatter:actionData:] */

void FUN_105039eec(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010506bc9c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_3;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(uVar1);
  ppuVar2 = param_3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar4 = param_3;
    func_0x00010bf85d80(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar2);
  puVar5 = auStack_68;
  _objc_initWeak(puVar5,param_1);
  puVar6 = PTR_PTR_1126aed70;
  func_0x00010506bccc();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  func_0x00010beff480(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar7 = PTR_PTR_1126aed70;
  func_0x00010506bc84();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar8 = PTR_PTR_1126aed78;
  func_0x00010bf8c520(PTR_PTR_1126aed78);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c2132c0();
  func_0x00010506bcb4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193940(puVar8);
  _objc_release(puVar9);
  func_0x00010c193900(puVar8);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(ppuVar4);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10503a1a4; end: 10503a277;  */

void FUN_10503a1a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  func_0x00010bf84b00(param_2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_2;
  func_0x00010c26bc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c114ac0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  if ((int)puVar3 == 0) {
    func_0x00010bed7060(param_1);
  }
  else {
    func_0x00010be044e0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10503a278; end: 10503a287;  */

void FUN_10503a278(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 10503a288; end: 10503a407; -[SCEditSnapchatterDisplayNameActionHandler _updateDisplayName:of:] */

void FUN_10503a288(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126afde0;
  func_0x00010506bc6c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf54760(puVar2,param_2,uVar4,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010c25f340(uVar1,param_2,puVar2);
  puVar3 = PTR_PTR_1126ae5c0;
  func_0x00010c1900e0(PTR_PTR_1126ae5c0,param_2,param_4,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10503a408;
  puStack_50 = &UNK_110841f20;
  uStack_48 = uVar1;
  _objc_retain(uVar1);
  func_0x00010c18fd20(uVar4,param_2,puVar3,PTR___dispatch_main_q_11034be20,&puStack_68);
  _objc_release(uVar4);
  _objc_release(uStack_48);
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 10503a408; end: 10503a47f;  */

void FUN_10503a408(long param_1,uint param_2)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126afde0;
  if ((param_2 & 1) != 0) {
    return;
  }
  lVar1 = param_1;
  func_0x00010506bb34();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55ce0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010c25f340(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10503a480; end: 10503a5c3; -[SCEditSnapchatterDisplayNameActionHandler _displayEmptyNameDialog] */

void FUN_10503a480(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010506bce4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = puVar3;
  func_0x00010506bcfc();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010506bd14();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 10503a5c4; end: 10503a5d3;  */

void FUN_10503a5c4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 10503a5d4; end: 10503a5db; -[SCEditSnapchatterDisplayNameActionHandler addFriendsActionEventObservable] */

undefined8 FUN_10503a5d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10503a5dc; end: 10503a60b; -[SCEditSnapchatterDisplayNameActionHandler setAddFriendsActionEventObservable:] */

void FUN_10503a5dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10503a60c; end: 10503a65f; -[SCEditSnapchatterDisplayNameActionHandler .cxx_destruct] */

void FUN_10503a60c(long param_1)

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



/* Entry: 10503a660; end: 10503a673; -[SCFriendProfilePageActionHandler tag] */

void FUN_10503a660(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 10503a674; end: 10503b7fb; -[SCFriendProfilePageActionHandler initWithFriendUnifiedProfileDataSource:snapchatterServices:userInfoProvider:storiesMediaCoordinator:readReceiptCoordinator:friendsFeedDataAccess:conversationServices:startChatDelegate:navigationDelegate:userSession:profileChatMediaDataSource:charmsDataCoordinator:charmsViewingDataCoordinator:charmsBlizzardLogger:circumstanceEngine:shareFriendScopeExposer:featureSettingsService:conversationServicesPerformer:friendActionSheetScopeExposer:immediateUserFeatureLaunchServices:operaSessionScopeExposer:operaSessionScopeServices:chatLogger:userBlizzardServices:grapheneServices:attributionServices:storiesCachedSummaryInfoProvider:notificationServices:auraFriendProfileScopeExposer:contextOperaPluginProvider:creatorSettingsService:discoverFeedNotificationServices:leaveCustomStoryLauncher:leaveCustomStoryScopeServices:webBrowsingScopeExposer:authenticatedNetworkServices:contentDelivery:chatMediaFetcher:musicContentRestrictionServices:addToStoryCameraScopeLauncher:addToStoryCameraScopeBuilder:chatCameraScopeLauncher:chatCameraScopeBuilder:photoPermissionCoordinator:filterFactory:previewURLVideoProvider:eraseMessageScopeExposer:eraseMessageScopeServices:safetyReportScopeExposer:externalLinkSendingService:saveFriendStoryOperaPluginProvider:contextOperaChromeLayerPluginProvider:discoverOperaPluginCreator:applicationLifecycleEvents:chatCustomizationHubScopeExposer:chatCustomizationHubScopeServices:bloopsReportScopeExposer:bitmojiEditAvatarBuilderPresenter:bitmojiEditAvatarBuilderScopeServices:temporaryFileWriter:ourStoriesAttributionManager:notificationOSSettingsRetriever:offPlatformShareServices:spotlightShareSender:spotlightPlatformAnalyticsCreator:snapSaver:shareFriendProfileScopeExposer:friendProfileSharingScopeServices:contentProductPlaybackScopeExposer:contentProductPlaybackScopeServices:pageLauncherServices:chatAttachmentHandlerScopeExposer:creatorsProfileImageScopeExposer:creatorsProfileImageScopeServices:snapchatter:discoverFeedEventsController:sourcePageType:friendProfileServices:bitmojiOutfitSharingLogger:bitmojiStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10503a674(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             ulong param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
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
  undefined *puVar3;
  ulong uVar4;
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
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
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
  _objc_retain();
  _objc_retain(param_68);
  _objc_retain(param_69);
  _objc_retain(param_70);
  _objc_retain(in_stack_000001f0);
  _objc_retain(in_stack_000001f8);
  _objc_retain(in_stack_00000200);
  _objc_retain();
  _objc_retain();
  _objc_retain(in_stack_00000218);
  _objc_retain();
  _objc_retain(in_stack_00000228);
  _objc_retain();
  _objc_retain(in_stack_00000240);
  puStack_70 = PTR_PTR_1126e5bb8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar8 = (long)_DAT_11271a128;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_3;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11271a12c;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_9;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_11271a130;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_12;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_11271a134;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_4;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_11271a138;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_6;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_11271a13c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11271a140,param_10);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11271a144,param_11);
    lVar11 = (long)_DAT_11271a148;
    _objc_retain(param_21);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_21;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_11271a14c;
    _objc_retain(param_22);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_22;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_11271a150;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(ulong *)((long)puVar1 + lVar11) = param_17;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_11271a154;
    _objc_retain(param_37);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_37;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_11271a158;
    _objc_retain(param_38);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_38;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_11271a15c;
    _objc_retain(param_52);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_52;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_11271a160;
    _objc_retain(param_51);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_51;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_11271a164;
    _objc_retain(param_23);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_23;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_11271a168;
    _objc_retain(param_24);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_24;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_11271a16c;
    _objc_retain(param_62);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_62;
    _objc_release(uVar2);
    func_0x00010befc780(*(undefined8 *)((long)puVar1 + lVar8));
    lVar11 = (long)_DAT_11271a170;
    _objc_retain(param_53);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_53;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_11271a174;
    _objc_retain(param_55);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_55;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_11271a178;
    _objc_retain(param_56);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_56;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_11271a17c;
    _objc_retain(param_63);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_63;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_11271a180;
    _objc_retain(param_64);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_64;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_11271a184;
    _objc_retain(param_65);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_65;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_11271a188;
    _objc_retain(param_66);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_66;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_11271a18c;
    _objc_retain(param_67);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_67;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271a190);
    *(undefined **)((long)puVar1 + (long)_DAT_11271a190) = puVar3;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_11271a194;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_18;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_11271a198;
    _objc_retain(in_stack_00000220);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = in_stack_00000220;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_11271a19c;
    _objc_retain(in_stack_00000228);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = in_stack_00000228;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_11271a1a0;
    _objc_retain(param_41);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_41;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271a1a4) = in_stack_00000248;
    puVar3 = PTR_PTR_1126b4050;
    _objc_alloc();
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c004d40();
    lVar11 = (long)_DAT_11271a1a8;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar11));
    puVar3 = PTR_PTR_1126b4058;
    _objc_alloc();
    func_0x00010c015d60();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271a1ac);
    *(undefined **)((long)puVar1 + (long)_DAT_11271a1ac) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b4060;
    _objc_alloc();
    uVar2 = param_4;
    func_0x00010bf1d740();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_4;
    func_0x00010c244ae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05d060();
    lVar11 = (long)_DAT_11271a1b0;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar3;
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    lVar10 = (long)_DAT_11271a1b4;
    _objc_retain(in_stack_00000240);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = in_stack_00000240;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar11));
    puVar3 = PTR_PTR_1126b4068;
    _objc_alloc();
    uVar6 = param_4;
    func_0x00010c244be0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_4;
    func_0x00010c244ae0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05da20();
    lVar11 = (long)_DAT_11271a1b8;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar3;
    _objc_release(uVar7);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar6);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar11));
    puVar3 = PTR_PTR_1126b4070;
    _objc_alloc();
    func_0x00010c05daa0();
    lVar11 = (long)_DAT_11271a1bc;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar11));
    puVar3 = PTR_PTR_1126b4078;
    _objc_alloc();
    uVar5 = param_4;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_30;
    func_0x00010c0dc640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03ada0();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271a1c0);
    *(undefined **)((long)puVar1 + (long)_DAT_11271a1c0) = puVar3;
    _objc_release(uVar7);
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126b4080;
    _objc_alloc();
    uVar5 = *(undefined8 *)((long)puVar1 + lVar9);
    func_0x00010bf50600(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffd900();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271a1c4);
    *(undefined **)((long)puVar1 + (long)_DAT_11271a1c4) = puVar3;
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar5);
    lVar9 = (long)_DAT_11271a1c8;
    _objc_retain(in_stack_000001f0);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = in_stack_000001f0;
    _objc_release(uVar2);
    lVar9 = (long)_DAT_11271a1cc;
    _objc_retain(in_stack_000001f8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = in_stack_000001f8;
    _objc_release(uVar2);
    uVar2 = param_34;
    func_0x00010c0ebe80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271a1d0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271a1d0) = uVar2;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126b4088;
    _objc_alloc();
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05e2e0();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271a1d4);
    *(undefined **)((long)puVar1 + (long)_DAT_11271a1d4) = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b4090;
    _objc_alloc();
    func_0x00010c022060();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271a1d8);
    *(undefined **)((long)puVar1 + (long)_DAT_11271a1d8) = puVar3;
    _objc_release(uVar2);
    lVar8 = (long)_DAT_11271a1dc;
    _objc_retain(param_59);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_59;
    _objc_release(uVar2);
    lVar8 = (long)_DAT_11271a1e0;
    _objc_retain(in_stack_00000210);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = in_stack_00000210;
    _objc_release(uVar2);
    lVar8 = (long)_DAT_11271a1e4;
    _objc_retain(in_stack_00000218);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = in_stack_00000218;
    _objc_release(uVar2);
    uVar4 = param_17;
    func_0x000108435fdc();
    if ((uVar4 & 1) != 0) {
      puVar3 = PTR_PTR_1126b4098;
      _objc_alloc();
      func_0x00010bff57c0();
      lVar8 = (long)_DAT_11271a1e8;
      uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
      *(undefined **)((long)puVar1 + lVar8) = puVar3;
      _objc_release(uVar2);
      func_0x00010c18fa00(*(undefined8 *)((long)puVar1 + lVar8));
    }
    func_0x00010befbae0(puVar1);
    lVar8 = (long)_DAT_11271a1ec;
    _objc_retain(in_stack_00000238);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = in_stack_00000238;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b40a0;
    _objc_alloc();
    func_0x00010c008e60();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271a1f0);
    *(undefined **)((long)puVar1 + (long)_DAT_11271a1f0) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(in_stack_00000240);
  _objc_release(in_stack_00000238);
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



/* Entry: 10503b7fc; end: 10503b807; +[SCFriendProfilePageActionHandler announcerIdentifier] */

undefined ** FUN_10503b7fc(void)

{
  return &PTR____CFConstantStringClassReference_110dc3698;
}



/* Entry: 10503b808; end: 10503b817; -[SCFriendProfilePageActionHandler addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10503b808(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271a190),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10503b818; end: 10503b827; -[SCFriendProfilePageActionHandler removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10503b818(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271a190),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10503b828; end: 10503b923; -[SCFriendProfilePageActionHandler setUnifiedProfileViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10503b828(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_setUnifiedProfileViewController__1126647c8;
  puStack_38 = PTR_PTR_1126e5bb8;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  func_0x00010c21b680(*(undefined8 *)(param_1 + _DAT_11271a1b0));
  func_0x00010c21b680(*(undefined8 *)(param_1 + _DAT_11271a1bc));
  func_0x00010c1e1580(*(undefined8 *)(param_1 + _DAT_11271a1ac));
  func_0x00010c1e1580(*(undefined8 *)(param_1 + _DAT_11271a1b8));
  func_0x00010c1e1580(*(undefined8 *)(param_1 + _DAT_11271a1c0));
  func_0x00010c21b680(*(undefined8 *)(param_1 + _DAT_11271a1c4));
  func_0x00010c21b680(*(undefined8 *)(param_1 + _DAT_11271a1d4));
  func_0x00010c1e1580(*(undefined8 *)(param_1 + _DAT_11271a1d8));
  func_0x00010c1e1580(*(undefined8 *)(param_1 + _DAT_11271a1e8));
  _objc_release(param_3);
  return;
}



/* Entry: 10503b924; end: 10503b9af; -[SCFriendProfilePageActionHandler setLoggingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10503b924(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_setLoggingService__11264dc20;
  puStack_38 = PTR_PTR_1126e5bb8;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  func_0x00010c1c07e0(*(undefined8 *)(param_1 + _DAT_11271a1c0));
  func_0x00010c1c07e0(*(undefined8 *)(param_1 + _DAT_11271a1d4));
  _objc_release(param_3);
  return;
}



/* Entry: 10503b9b0; end: 10503bae7; -[SCFriendProfilePageActionHandler handleActionWithSender:actionModel:fromSourceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10503b9b0(long param_1,undefined8 param_2,undefined **param_3,ulong param_4,undefined *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined ***pppuVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined ***pppuVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  undefined **ppuStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar16 = param_3;
  uVar10 = param_4;
  puVar11 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 == 0) ||
     (lVar1 = param_1, ppuVar16 = param_3, uVar10 = param_4, puVar11 = param_5,
     func_0x00010be25340(), (int)lVar1 == 0)) {
    puVar13 = (undefined1 *)0x0;
  }
  else {
    uVar15 = *(undefined8 *)(param_1 + _DAT_11271a190);
    ppuVar16 = &PTR____CFConstantStringClassReference_110eb73f8;
    puVar13 = (undefined1 *)0x1;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = 0;
    puVar11 = puVar2;
    func_0x00010bf7dbc0(uVar15);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return puVar13;
  }
  ___stack_chk_fail();
  pppuVar14 = &ppuStack_f0;
  _objc_retain(ppuVar16);
  _objc_retain(uVar10);
  _objc_retain(puVar11);
  puVar2 = PTR_s_handleActionWithSender_actionMod_1125d19f8;
  puStack_d8 = PTR_PTR_1126e5bb8;
  pppuVar3 = &ppuStack_e0;
  ppuStack_e0 = param_3;
  _objc_msgSendSuper2(pppuVar3,PTR_s_handleActionWithSender_actionMod_1125d19f8,ppuVar16,uVar10,
                      puVar11);
  if (((ulong)pppuVar3 & 1) == 0) {
    uVar4 = *(ulong *)((long)param_3 + (long)_DAT_11271a1ac);
    func_0x00010bfd0140();
    if ((uVar4 & 1) == 0) {
      uVar4 = *(ulong *)((long)param_3 + (long)_DAT_11271a1b0);
      func_0x00010bfd0140();
      if ((uVar4 & 1) == 0) {
        uVar4 = *(ulong *)((long)param_3 + (long)_DAT_11271a1bc);
        func_0x00010bfd0140();
        if ((uVar4 & 1) == 0) {
          uVar4 = *(ulong *)((long)param_3 + (long)_DAT_11271a1c0);
          func_0x00010bfd0140();
          if ((uVar4 & 1) == 0) {
            uVar4 = *(ulong *)((long)param_3 + (long)_DAT_11271a1c4);
            func_0x00010bfd0140();
            if ((uVar4 & 1) == 0) {
              uVar4 = *(ulong *)((long)param_3 + (long)_DAT_11271a1b8);
              func_0x00010bfd0140();
              if ((uVar4 & 1) == 0) {
                uVar4 = *(ulong *)((long)param_3 + (long)_DAT_11271a1d4);
                func_0x00010bfd0140();
                if ((uVar4 & 1) == 0) {
                  uVar4 = uVar10;
                  func_0x00010bfe5ec0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar5 = uVar4;
                  func_0x00010c0720c0();
                  _objc_release(uVar4);
                  if ((int)uVar5 == 0) {
                    uVar4 = uVar10;
                    func_0x00010bfe5ec0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar5 = uVar4;
                    func_0x00010c0720c0();
                    _objc_release(uVar4);
                    if ((int)uVar5 == 0) {
                      uVar4 = uVar10;
                      func_0x00010bfe5ec0();
                      _objc_retainAutoreleasedReturnValue();
                      uVar5 = uVar4;
                      func_0x00010c0720c0();
                      _objc_release(uVar4);
                      if ((int)uVar5 == 0) {
                        uVar4 = uVar10;
                        func_0x00010bfe5ec0();
                        _objc_retainAutoreleasedReturnValue();
                        uVar5 = uVar4;
                        func_0x00010c0720c0();
                        _objc_release(uVar4);
                        if ((int)uVar5 == 0) {
                          uVar4 = uVar10;
                          func_0x00010bfe5ec0();
                          _objc_retainAutoreleasedReturnValue();
                          uVar5 = uVar4;
                          func_0x00010c0720c0();
                          _objc_release(uVar4);
                          if ((int)uVar5 != 0) {
                            pppuVar14 = *(undefined ****)((long)param_3 + (long)_DAT_11271a1d8);
                            func_0x00010bfd0140(pppuVar14);
                            goto LAB_10503bff4;
                          }
                          uVar4 = uVar10;
                          func_0x00010bfe5ec0();
                          _objc_retainAutoreleasedReturnValue();
                          uVar5 = uVar4;
                          func_0x00010c0720c0();
                          _objc_release(uVar4);
                          if ((int)uVar5 != 0) {
                            uVar4 = uVar10;
                            func_0x00010beee2e0();
                            _objc_retainAutoreleasedReturnValue();
                            puVar6 = PTR_PTR_1126afdb8;
                            _objc_opt_class(PTR_PTR_1126afdb8);
                            uVar7 = uVar4;
                            _objc_opt_isKindOfClass(uVar4,puVar6);
                            uVar5 = uVar4;
                            if ((uVar7 & 1) == 0) {
                              uVar5 = 0;
                            }
                            _objc_retain(uVar5);
                            _objc_release(uVar4);
                            if (uVar5 != 0) {
                              uVar8 = uVar4;
                              func_0x00010beee2e0();
                              _objc_retainAutoreleasedReturnValue();
                              puVar6 = PTR_PTR_1126b40b0;
                              _objc_opt_class(PTR_PTR_1126b40b0);
                              uVar9 = uVar8;
                              _objc_opt_isKindOfClass(uVar8,puVar6);
                              uVar7 = uVar8;
                              if ((uVar9 & 1) == 0) {
                                uVar7 = 0;
                              }
                              _objc_retain(uVar7);
                              _objc_release(uVar8);
                              if (uVar7 != 0) {
                                lVar12 = (long)param_3 + (long)_DAT_11271a1f8;
                                _objc_loadWeakRetained(lVar12);
                                uVar5 = uVar8;
                                func_0x00010c122a80(uVar8);
                                _objc_retainAutoreleasedReturnValue();
                                func_0x00010c0c3fe0(uVar8);
                                func_0x00010bfb87c0(lVar12);
                                _objc_release(uVar5);
                                _objc_release(lVar12);
                                _objc_release(uVar8);
                                goto LAB_10503bfec;
                              }
                            }
                            _objc_release(uVar5);
                          }
                          puStack_e8 = PTR_PTR_1126e5bb8;
                          ppuStack_f0 = param_3;
                          _objc_msgSendSuper2(&ppuStack_f0,puVar2,ppuVar16,uVar10,puVar11);
                          goto LAB_10503bff4;
                        }
                        uVar5 = uVar10;
                        func_0x00010beee2e0();
                        _objc_retainAutoreleasedReturnValue();
                        puVar2 = PTR_PTR_1126b40a8;
                        _objc_opt_class(PTR_PTR_1126b40a8);
                        uVar7 = uVar5;
                        _objc_opt_isKindOfClass(uVar5,puVar2);
                        uVar4 = uVar5;
                        if ((uVar7 & 1) == 0) {
                          uVar4 = 0;
                        }
                        _objc_retain(uVar4);
                        _objc_release(uVar5);
                        uVar5 = uVar4;
                        func_0x00010c244280();
                        _objc_retainAutoreleasedReturnValue();
                        _objc_release();
                        uVar7 = uVar4;
                        if (uVar5 == 0) {
                          uVar5 = uVar4;
                          func_0x00010c2923e0();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release();
                          if (uVar5 == 0) goto LAB_10503bfec;
                          func_0x00010c2923e0(uVar4);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010beba6c0(param_3);
                        }
                        else {
                          func_0x00010c244280();
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010beba6a0(param_3);
                        }
                        _objc_release(uVar7);
                      }
                      else {
                        uVar4 = uVar10;
                        func_0x00010beee2e0();
                        _objc_retainAutoreleasedReturnValue();
                        puVar2 = PTR_PTR_1126b3fe0;
                        _objc_opt_class(PTR_PTR_1126b3fe0);
                        uVar7 = uVar4;
                        _objc_opt_isKindOfClass(uVar4,puVar2);
                        uVar5 = uVar4;
                        if ((uVar7 & 1) == 0) {
                          uVar5 = 0;
                        }
                        _objc_retain(uVar5);
                        _objc_release(uVar4);
                        uVar4 = uVar5;
                        func_0x00010c244280(uVar5);
                        _objc_retainAutoreleasedReturnValue();
                        _objc_release(uVar5);
                        func_0x00010beb7720(param_3);
                      }
LAB_10503bfec:
                      _objc_release(uVar4);
                    }
                    else {
                      func_0x00010be0c320(param_3);
                    }
                  }
                  else {
                    func_0x00010bea9840(param_3);
                    func_0x00010bfd0140(*(undefined8 *)((long)param_3 + (long)_DAT_11271a1f4));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  pppuVar14 = (undefined ***)0x1;
LAB_10503bff4:
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(ppuVar16);
  return (undefined1 *)pppuVar14;
}



/* Entry: 10503bae8; end: 10503c063; -[SCFriendProfilePageActionHandler _handleActionWithSender:actionModel:fromSourceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10503bae8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  plVar9 = &lStack_80;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar4 = PTR_s_handleActionWithSender_actionMod_1125d19f8;
  puStack_68 = PTR_PTR_1126e5bb8;
  plVar1 = &lStack_70;
  lStack_70 = param_1;
  _objc_msgSendSuper2(plVar1,PTR_s_handleActionWithSender_actionMod_1125d19f8,param_3,param_4,
                      param_5);
  if (((ulong)plVar1 & 1) == 0) {
    uVar2 = *(ulong *)(param_1 + _DAT_11271a1ac);
    func_0x00010bfd0140();
    if ((uVar2 & 1) == 0) {
      uVar2 = *(ulong *)(param_1 + _DAT_11271a1b0);
      func_0x00010bfd0140();
      if ((uVar2 & 1) == 0) {
        uVar2 = *(ulong *)(param_1 + _DAT_11271a1bc);
        func_0x00010bfd0140();
        if ((uVar2 & 1) == 0) {
          uVar2 = *(ulong *)(param_1 + _DAT_11271a1c0);
          func_0x00010bfd0140();
          if ((uVar2 & 1) == 0) {
            uVar2 = *(ulong *)(param_1 + _DAT_11271a1c4);
            func_0x00010bfd0140();
            if ((uVar2 & 1) == 0) {
              uVar2 = *(ulong *)(param_1 + _DAT_11271a1b8);
              func_0x00010bfd0140();
              if ((uVar2 & 1) == 0) {
                uVar2 = *(ulong *)(param_1 + _DAT_11271a1d4);
                func_0x00010bfd0140();
                if ((uVar2 & 1) == 0) {
                  uVar2 = param_4;
                  func_0x00010bfe5ec0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar3 = uVar2;
                  func_0x00010c0720c0();
                  _objc_release(uVar2);
                  if ((int)uVar3 == 0) {
                    uVar2 = param_4;
                    func_0x00010bfe5ec0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar3 = uVar2;
                    func_0x00010c0720c0();
                    _objc_release(uVar2);
                    if ((int)uVar3 == 0) {
                      uVar2 = param_4;
                      func_0x00010bfe5ec0();
                      _objc_retainAutoreleasedReturnValue();
                      uVar3 = uVar2;
                      func_0x00010c0720c0();
                      _objc_release(uVar2);
                      if ((int)uVar3 == 0) {
                        uVar2 = param_4;
                        func_0x00010bfe5ec0();
                        _objc_retainAutoreleasedReturnValue();
                        uVar3 = uVar2;
                        func_0x00010c0720c0();
                        _objc_release(uVar2);
                        if ((int)uVar3 == 0) {
                          uVar2 = param_4;
                          func_0x00010bfe5ec0();
                          _objc_retainAutoreleasedReturnValue();
                          uVar3 = uVar2;
                          func_0x00010c0720c0();
                          _objc_release(uVar2);
                          if ((int)uVar3 != 0) {
                            plVar9 = *(long **)(param_1 + _DAT_11271a1d8);
                            func_0x00010bfd0140(plVar9);
                            goto LAB_10503bff4;
                          }
                          uVar2 = param_4;
                          func_0x00010bfe5ec0();
                          _objc_retainAutoreleasedReturnValue();
                          uVar3 = uVar2;
                          func_0x00010c0720c0();
                          _objc_release(uVar2);
                          if ((int)uVar3 != 0) {
                            uVar2 = param_4;
                            func_0x00010beee2e0();
                            _objc_retainAutoreleasedReturnValue();
                            puVar5 = PTR_PTR_1126afdb8;
                            _objc_opt_class(PTR_PTR_1126afdb8);
                            uVar6 = uVar2;
                            _objc_opt_isKindOfClass(uVar2,puVar5);
                            uVar3 = uVar2;
                            if ((uVar6 & 1) == 0) {
                              uVar3 = 0;
                            }
                            _objc_retain(uVar3);
                            _objc_release(uVar2);
                            if (uVar3 != 0) {
                              uVar7 = uVar2;
                              func_0x00010beee2e0();
                              _objc_retainAutoreleasedReturnValue();
                              puVar5 = PTR_PTR_1126b40b0;
                              _objc_opt_class(PTR_PTR_1126b40b0);
                              uVar8 = uVar7;
                              _objc_opt_isKindOfClass(uVar7,puVar5);
                              uVar6 = uVar7;
                              if ((uVar8 & 1) == 0) {
                                uVar6 = 0;
                              }
                              _objc_retain(uVar6);
                              _objc_release(uVar7);
                              if (uVar6 != 0) {
                                param_1 = param_1 + _DAT_11271a1f8;
                                _objc_loadWeakRetained(param_1);
                                uVar3 = uVar7;
                                func_0x00010c122a80(uVar7);
                                _objc_retainAutoreleasedReturnValue();
                                func_0x00010c0c3fe0(uVar7);
                                func_0x00010bfb87c0(param_1);
                                _objc_release(uVar3);
                                _objc_release(param_1);
                                _objc_release(uVar7);
                                goto LAB_10503bfec;
                              }
                            }
                            _objc_release(uVar3);
                          }
                          puStack_78 = PTR_PTR_1126e5bb8;
                          lStack_80 = param_1;
                          _objc_msgSendSuper2(&lStack_80,puVar4,param_3,param_4,param_5);
                          goto LAB_10503bff4;
                        }
                        uVar3 = param_4;
                        func_0x00010beee2e0();
                        _objc_retainAutoreleasedReturnValue();
                        puVar4 = PTR_PTR_1126b40a8;
                        _objc_opt_class(PTR_PTR_1126b40a8);
                        uVar6 = uVar3;
                        _objc_opt_isKindOfClass(uVar3,puVar4);
                        uVar2 = uVar3;
                        if ((uVar6 & 1) == 0) {
                          uVar2 = 0;
                        }
                        _objc_retain(uVar2);
                        _objc_release(uVar3);
                        uVar3 = uVar2;
                        func_0x00010c244280();
                        _objc_retainAutoreleasedReturnValue();
                        _objc_release();
                        uVar6 = uVar2;
                        if (uVar3 == 0) {
                          uVar3 = uVar2;
                          func_0x00010c2923e0();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release();
                          if (uVar3 == 0) goto LAB_10503bfec;
                          func_0x00010c2923e0(uVar2);
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010beba6c0(param_1);
                        }
                        else {
                          func_0x00010c244280();
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010beba6a0(param_1);
                        }
                        _objc_release(uVar6);
                      }
                      else {
                        uVar2 = param_4;
                        func_0x00010beee2e0();
                        _objc_retainAutoreleasedReturnValue();
                        puVar4 = PTR_PTR_1126b3fe0;
                        _objc_opt_class(PTR_PTR_1126b3fe0);
                        uVar6 = uVar2;
                        _objc_opt_isKindOfClass(uVar2,puVar4);
                        uVar3 = uVar2;
                        if ((uVar6 & 1) == 0) {
                          uVar3 = 0;
                        }
                        _objc_retain(uVar3);
                        _objc_release(uVar2);
                        uVar2 = uVar3;
                        func_0x00010c244280(uVar3);
                        _objc_retainAutoreleasedReturnValue();
                        _objc_release(uVar3);
                        func_0x00010beb7720(param_1);
                      }
LAB_10503bfec:
                      _objc_release(uVar2);
                    }
                    else {
                      func_0x00010be0c320(param_1);
                    }
                  }
                  else {
                    func_0x00010bea9840(param_1);
                    func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_11271a1f4));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  plVar9 = (long *)0x1;
LAB_10503bff4:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)plVar9;
}



/* Entry: 10503c064; end: 10503c25f; -[SCFriendProfilePageActionHandler _setUpPlayStoryActionHandlerIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10503c064(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar9 = (long)_DAT_11271a1f4;
  if (*(long *)(param_1 + lVar9) == 0) {
    puVar1 = PTR_PTR_1126b40b8;
    _objc_alloc();
    uVar7 = *(undefined8 *)(param_1 + _DAT_11271a130);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11271a128);
    func_0x00010c12a480(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + _DAT_11271a138);
    uVar11 = *(undefined8 *)(param_1 + _DAT_11271a13c);
    lVar3 = param_1 + _DAT_11271a140;
    _objc_loadWeakRetained(lVar3);
    lVar4 = param_1 + _DAT_11271a144;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + _DAT_11271a150);
    uVar6 = *(undefined8 *)(param_1 + _DAT_11271a134);
    func_0x00010c244d60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05e400(puVar1,*(undefined8 *)(param_1 + _DAT_11271a18c),uVar7,uVar2,uVar8,uVar11,
                        lVar3,lVar5,param_1,uVar10,uVar6,*(undefined8 *)(param_1 + _DAT_11271a15c),
                        *(undefined8 *)(param_1 + _DAT_11271a160),
                        *(undefined8 *)(param_1 + _DAT_11271a170),
                        *(undefined8 *)(param_1 + _DAT_11271a174),
                        *(undefined8 *)(param_1 + _DAT_11271a178),
                        *(undefined8 *)(param_1 + _DAT_11271a1dc),
                        *(undefined8 *)(param_1 + _DAT_11271a16c),
                        *(undefined8 *)(param_1 + _DAT_11271a17c),
                        *(undefined8 *)(param_1 + _DAT_11271a180),
                        *(undefined8 *)(param_1 + _DAT_11271a184),
                        *(undefined8 *)(param_1 + _DAT_11271a188),
                        *(undefined8 *)(param_1 + _DAT_11271a18c),
                        *(undefined8 *)(param_1 + _DAT_11271a1c8),
                        *(undefined8 *)(param_1 + _DAT_11271a1cc),
                        *(undefined8 *)(param_1 + _DAT_11271a1d0),
                        *(undefined8 *)(param_1 + _DAT_11271a154),
                        *(undefined8 *)(param_1 + _DAT_11271a19c));
    uVar7 = *(undefined8 *)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar1;
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uVar2);
  }
  lVar3 = param_1;
  func_0x00010c2800a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e1580(*(undefined8 *)(param_1 + lVar9));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10503c260; end: 10503c263; -[SCFriendProfilePageActionHandler _presentingViewController] */

void FUN_10503c260(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2800b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_unifiedProfileViewController_11267da50);
  return;
}



/* Entry: 10503c264; end: 10503c37b; -[SCFriendProfilePageActionHandler _showActionSheetForSnapchatter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10503c264(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  if (param_3 != 0) {
    lVar4 = (long)_DAT_11271a148;
    lVar3 = *(long *)(param_1 + lVar4);
    _objc_retain(param_3);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar4));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar3 = param_1;
    func_0x00010c2800a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40(puVar1,param_2,lVar3,0);
    _objc_release(lVar3);
    puVar2 = PTR_PTR_1126b2860;
    _objc_alloc(PTR_PTR_1126b2860);
    func_0x00010c0589a0();
    _objc_release(param_3);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10503c37c; end: 10503c4d3; -[SCFriendProfilePageActionHandler _showProfileForSnapchatter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10503c37c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar6 = (long)_DAT_11271a1fc;
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = 0;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar3 = param_1;
    func_0x00010c2800a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40(puVar2,param_2,lVar3,1);
    _objc_release(lVar3);
    puVar5 = PTR_PTR_1126b3fa0;
    _objc_alloc();
    if (puVar5 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      func_0x00010c0159e0();
    }
    puVar4 = PTR__OBJC_CLASS___NSObject_1126b1300;
    _objc_alloc_init();
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar4;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_11271a14c);
    func_0x00010bfb8800(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b7c0();
    _objc_release(uVar1);
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10503c4d4; end: 10503c8cf; -[SCFriendProfilePageActionHandler _expandProfilePictureWithActionModel:fromSourceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10503c4d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,ulong param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined *puVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar18 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar2 = param_5;
  func_0x00010c2800a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar1 != 0) {
    lVar22 = (long)_DAT_11271a1e0;
    lVar2 = *(long *)(param_5 + lVar22);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_5 + lVar22));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    uVar20 = param_7;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
    uVar4 = uVar20;
    _objc_opt_isKindOfClass(uVar20,puVar3);
    uVar18 = uVar20;
    if ((uVar4 & 1) == 0) {
      uVar18 = 0;
    }
    _objc_retain();
    _objc_release(uVar20);
    func_0x00010bf20c00(param_8);
    func_0x00010bf51460(param_8);
    puVar21 = PTR_PTR_1126b40c0;
    uVar17 = param_1;
    uVar23 = param_2;
    uVar24 = param_3;
    uVar25 = param_4;
    _objc_alloc_init();
    func_0x00010befbb60(lVar1);
    func_0x00010c219b60(puVar21);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar21;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar21;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar21;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar1;
    func_0x00010c274200(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar21;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar1;
    func_0x00010bf1ff80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(lVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(lVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(lVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar2);
    _objc_release(puVar5);
    uVar20 = *(ulong *)(param_5 + _DAT_11271a1e4);
    func_0x00010bfb68e0(lVar1);
    func_0x00010bf23d20(param_1,param_2,param_3,param_4,uVar17,uVar23,uVar24,uVar25);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar18);
    uVar18 = uVar20;
    func_0x00010bf9d620(*(undefined8 *)(param_5 + lVar22));
    _objc_release(uVar20);
    _objc_release(puVar21);
  }
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar18);
  if (uVar18 != 0) {
    lVar2 = (long)_DAT_11271a1fc;
    uVar17 = *(undefined8 *)(param_7 + lVar2);
    *(undefined8 *)(param_7 + lVar2) = 0;
    _objc_release(uVar17);
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    uVar20 = param_7;
    func_0x00010c2800a0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40(puVar3);
    _objc_release(uVar20);
    puVar21 = PTR_PTR_1126b3fa0;
    _objc_alloc();
    if (puVar21 == (undefined *)0x0) {
      puVar21 = (undefined *)0x0;
    }
    else {
      func_0x00010c015a00();
    }
    puVar5 = PTR__OBJC_CLASS___NSObject_1126b1300;
    _objc_alloc_init();
    uVar17 = *(undefined8 *)(param_7 + lVar2);
    *(undefined **)(param_7 + lVar2) = puVar5;
    _objc_release(uVar17);
    uVar17 = *(undefined8 *)(param_7 + (long)_DAT_11271a14c);
    func_0x00010bfb8800(uVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b7c0();
    _objc_release(uVar17);
    _objc_release(puVar21);
    _objc_release(puVar3);
  }
  _objc_release(uVar18);
  return;
}



/* Entry: 10503c8d0; end: 10503ca27; -[SCFriendProfilePageActionHandler _showProfileWithUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10503c8d0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar6 = (long)_DAT_11271a1fc;
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = 0;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar3 = param_1;
    func_0x00010c2800a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40(puVar2,param_2,lVar3,1);
    _objc_release(lVar3);
    puVar5 = PTR_PTR_1126b3fa0;
    _objc_alloc();
    if (puVar5 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      func_0x00010c015a00();
    }
    puVar4 = PTR__OBJC_CLASS___NSObject_1126b1300;
    _objc_alloc_init();
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar4;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_11271a14c);
    func_0x00010bfb8800(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b7c0();
    _objc_release(uVar1);
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10503ca28; end: 10503cba3; -[SCFriendProfilePageActionHandler didUpdateWithAnnouncerIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10503ca28(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if (((((uVar1 & 1) == 0) && (uVar1 = param_3, func_0x00010c0720c0(), (uVar1 & 1) == 0)) &&
      (uVar1 = param_3, func_0x00010c0720c0(), (uVar1 & 1) == 0)) &&
     (uVar1 = param_3, func_0x00010c0720c0(), (int)uVar1 == 0)) {
    uVar1 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + _DAT_11271a1f0);
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_10503cbf0;
      puStack_70 = &UNK_110842e18;
      uStack_68 = uVar2;
      _objc_retain(uVar2);
      func_0x0001000d76cc("APPSTORE",&puStack_88);
      _objc_release(uVar2);
    }
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10503cba4;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10503cba4; end: 10503cbef;  */

void FUN_10503cba4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c2800a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf849e0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10503cbf0; end: 10503cbf7;  */

void FUN_10503cbf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf852b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_dispatchUpdateObservingScreenCap_1125bee50);
  return;
}



/* Entry: 10503cbf8; end: 10503cc67; -[SCFriendProfilePageActionHandler navigateToChatActionHandlerNavigateToChat:deepLinkURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10503cbf8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11271a1f8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb87a0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10503cc68; end: 10503cc6f; -[SCFriendProfilePageActionHandler showCameraActionHandler:canHandleShowCameraForGroupId:] */

undefined8 FUN_10503cc68(void)

{
  return 0;
}



/* Entry: 10503cc70; end: 10503cc73; -[SCFriendProfilePageActionHandler showCameraActionHandler:showCameraForGroupId:] */

void FUN_10503cc70(void)

{
  return;
}



/* Entry: 10503cc74; end: 10503ccbb; -[SCFriendProfilePageActionHandler showCameraActionHandler:canHandleShowCameraForSnapchatter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10503cc74(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11271a1f8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  _objc_opt_respondsToSelector();
  _objc_release(param_1);
  return (uint)lVar1 & 1;
}



/* Entry: 10503ccbc; end: 10503cd17; -[SCFriendProfilePageActionHandler showCameraActionHandler:showCameraForSnapchatter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10503ccbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11271a1f8;
  _objc_retain(param_4);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb8780();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10503cd18; end: 10503cd1b; -[SCFriendProfilePageActionHandler dismissLeavePrivateStoryActionMenu] */

void FUN_10503cd18(void)

{
  return;
}



/* Entry: 10503cd1c; end: 10503cd4b; -[SCFriendProfilePageActionHandler willClearFriendConversation:presentingViewController:] */

void FUN_10503cd1c(undefined8 param_1)

{
  func_0x00010c2800a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf849e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10503cd4c; end: 10503cd4f; -[SCFriendProfilePageActionHandler friendUnifiedActionMenuSettingsActionHandlerWillPresentSubscreen:] */

void FUN_10503cd4c(void)

{
  return;
}



/* Entry: 10503cd50; end: 10503cd53; -[SCFriendProfilePageActionHandler friendUnifiedActionMenuSettingsActionHandlerWillDismissSubscreen:] */

void FUN_10503cd50(void)

{
  return;
}



/* Entry: 10503cd54; end: 10503cf33; -[SCFriendProfilePageActionHandler didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10503cd54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar5 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb7318);
  if ((int)uVar5 == 0) {
    uVar5 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb7398);
    if ((int)uVar5 != 0) {
      func_0x00010bf852a0(*(undefined8 *)(param_1 + _DAT_11271a1f0));
      goto LAB_10503ce1c;
    }
    uVar5 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb7378);
    if ((int)uVar5 == 0) {
      uVar5 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb73b8);
      if ((int)uVar5 != 0) {
        func_0x00010bf85240(*(undefined8 *)(param_1 + _DAT_11271a1f0));
      }
      goto LAB_10503ce1c;
    }
    func_0x00010bf85240(*(undefined8 *)(param_1 + _DAT_11271a1f0));
    uVar3 = *(undefined8 *)(param_1 + _DAT_11271a158);
    func_0x00010bf10b80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b19f8;
    func_0x00010c1164a0(PTR_PTR_1126b19f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12ba20(uVar5,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar5);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b3ce8;
    uVar5 = *(undefined8 *)(param_1 + _DAT_11271a1d4);
    puVar1 = *(undefined **)(param_1 + _DAT_11271a128);
    func_0x00010c2923e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb9260(puVar4,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb3000(uVar5,param_2,puVar4);
  }
  else {
    puVar1 = *(undefined **)(param_1 + _DAT_11271a158);
    func_0x00010bf10b80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b19f8;
    func_0x00010c1164a0(PTR_PTR_1126b19f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7ac0(puVar4,param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(puVar4);
  _objc_release(puVar1);
LAB_10503ce1c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10503cf34; end: 10503d08b; -[SCFriendProfilePageActionHandler profileChatMediaCaptureMonitorIsSavedAttachmentCellVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10503cf34(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  
  lVar10 = (long)_DAT_11271a1c0;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar10);
  func_0x00010c06e560();
  if (iVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + lVar10);
    func_0x00010c07aba0();
    if ((uVar2 & 1) == 0) {
      uVar2 = *(ulong *)(param_1 + _DAT_11271a1f4);
      func_0x00010c07ad00();
      if ((uVar2 & 1) == 0) {
        uVar8 = *(undefined8 *)(param_1 + _DAT_11271a1e8);
        func_0x00010c07ac00(uVar8);
        uVar11 = (uint)uVar8 ^ 1;
        goto LAB_10503cf88;
      }
    }
  }
  uVar11 = 0;
LAB_10503cf88:
  lVar10 = param_1;
  func_0x00010c2800a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar10 == 0) {
    uVar9 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x00010c2800a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      lVar5 = param_1;
      func_0x00010c2800a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c0d66a0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c275140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2800a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = (uint)(lVar7 == param_1);
      _objc_release();
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
    }
    else {
      uVar9 = 0;
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar10);
  return uVar11 & uVar9;
}



/* Entry: 10503d08c; end: 10503d09b; -[SCFriendProfilePageActionHandler profileChatMediaCaptureMonitorIsPresentingChatMedia:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10503d08c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07abb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271a1c0),PTR_s_isPresentingChatMedia_1125fc4f8);
  return;
}



/* Entry: 10503d09c; end: 10503d0eb; -[SCFriendProfilePageActionHandler contentWillDisplay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10503d09c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e5bb8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_contentWillDisplay_1125b1150);
  func_0x00010bf85240(*(undefined8 *)(param_1 + _DAT_11271a1f0));
  return;
}



/* Entry: 10503d0ec; end: 10503d13b; -[SCFriendProfilePageActionHandler contentDidTearDown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10503d0ec(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e5bb8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_contentDidTearDown_1125b0a78);
  func_0x00010bf85220(*(undefined8 *)(param_1 + _DAT_11271a1f0));
  return;
}



/* Entry: 10503d13c; end: 10503d13f; -[SCFriendProfilePageActionHandler dismissUnifiedActionMenuWithFriendUnifiedActionMenuActionHandler:showAnimation:] */

void FUN_10503d13c(void)

{
  return;
}



/* Entry: 10503d140; end: 10503d143; -[SCFriendProfilePageActionHandler unifiedActionMenuPresenterDidDismiss:] */

void FUN_10503d140(void)

{
  return;
}



/* Entry: 10503d144; end: 10503d15b; -[SCFriendProfilePageActionHandler friendProfileDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10503d144(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271a1fc);
  *(undefined8 *)(param_1 + _DAT_11271a1fc) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10503d15c; end: 10503d19b; -[SCFriendProfilePageActionHandler friendActionSheetOpenProfile:] */

void FUN_10503d15c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c244280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beba6a0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10503d19c; end: 10503d247; -[SCFriendProfilePageActionHandler friendActionSheetShowCameraForSnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10503d19c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b40c8;
  func_0x00010c244280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb9280(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_11271a1bc),param_2,0,puVar2,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10503d248; end: 10503d29f; -[SCFriendProfilePageActionHandler friendActionSheetDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10503d248(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271a148;
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



/* Entry: 10503d2a0; end: 10503d39b; -[SCFriendProfilePageActionHandler didTapShareProfile:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10503d2a0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11271a194;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar5));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126b40d0;
  _objc_alloc(PTR_PTR_1126b40d0);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11271a198);
  lVar1 = param_1;
  func_0x00010c2800a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c048fa0(puVar2,param_2,uVar4,0,1,0xeb,lVar1,0,0);
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b40d8;
  func_0x00010c22b300(PTR_PTR_1126b40d8,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar5),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10503d39c; end: 10503d4a3; -[SCFriendProfilePageActionHandler didTapReportProfile:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10503d39c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11271a200;
  if (*(long *)(param_1 + lVar4) == 0) {
    puVar1 = PTR_PTR_1126b40e0;
    _objc_alloc();
    lVar2 = param_1;
    func_0x00010c2800a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038da0(puVar1,param_2,lVar2,*(undefined8 *)(param_1 + _DAT_11271a198),
                        *(undefined8 *)(param_1 + _DAT_11271a160),0);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_1;
  func_0x00010c2800a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e14a0(*(undefined8 *)(param_1 + lVar4),param_2,lVar2);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x000107d3ddf8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar3,param_2,param_1,lVar2,param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10503d4a4; end: 10503d4c3; -[SCFriendProfilePageActionHandler delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10503d4a4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271a1f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10503d4c4; end: 10503d4d7; -[SCFriendProfilePageActionHandler setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10503d4c4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271a1f8,param_3);
  return;
}



/* Entry: 10503d4d8; end: 10503d84b; -[SCFriendProfilePageActionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10503d4d8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271a1f8);
  _objc_storeStrong(param_1 + _DAT_11271a1b4,0);
  _objc_storeStrong(param_1 + _DAT_11271a1ec,0);
  _objc_storeStrong(param_1 + _DAT_11271a1f0,0);
  _objc_storeStrong(param_1 + _DAT_11271a1a0,0);
  _objc_storeStrong(param_1 + _DAT_11271a19c,0);
  _objc_storeStrong(param_1 + _DAT_11271a198,0);
  _objc_storeStrong(param_1 + _DAT_11271a194,0);
  _objc_storeStrong(param_1 + _DAT_11271a200,0);
  _objc_storeStrong(param_1 + _DAT_11271a1e4,0);
  _objc_storeStrong(param_1 + _DAT_11271a1e0,0);
  _objc_storeStrong(param_1 + _DAT_11271a1d0,0);
  _objc_storeStrong(param_1 + _DAT_11271a1cc,0);
  _objc_storeStrong(param_1 + _DAT_11271a1c8,0);
  _objc_storeStrong(param_1 + _DAT_11271a18c,0);
  _objc_storeStrong(param_1 + _DAT_11271a188,0);
  _objc_storeStrong(param_1 + _DAT_11271a184,0);
  _objc_storeStrong(param_1 + _DAT_11271a180,0);
  _objc_storeStrong(param_1 + _DAT_11271a17c,0);
  _objc_storeStrong(param_1 + _DAT_11271a16c,0);
  _objc_storeStrong(param_1 + _DAT_11271a1dc,0);
  _objc_storeStrong(param_1 + _DAT_11271a178,0);
  _objc_storeStrong(param_1 + _DAT_11271a174,0);
  _objc_storeStrong(param_1 + _DAT_11271a170,0);
  _objc_storeStrong(param_1 + _DAT_11271a168,0);
  _objc_storeStrong(param_1 + _DAT_11271a164,0);
  _objc_storeStrong(param_1 + _DAT_11271a160,0);
  _objc_storeStrong(param_1 + _DAT_11271a15c,0);
  _objc_storeStrong(param_1 + _DAT_11271a158,0);
  _objc_storeStrong(param_1 + _DAT_11271a154,0);
  _objc_storeStrong(param_1 + _DAT_11271a134,0);
  _objc_storeStrong(param_1 + _DAT_11271a150,0);
  _objc_storeStrong(param_1 + _DAT_11271a1fc,0);
  _objc_storeStrong(param_1 + _DAT_11271a14c,0);
  _objc_storeStrong(param_1 + _DAT_11271a148,0);
  _objc_storeStrong(param_1 + _DAT_11271a1e8,0);
  _objc_storeStrong(param_1 + _DAT_11271a1d8,0);
  _objc_storeStrong(param_1 + _DAT_11271a1d4,0);
  _objc_storeStrong(param_1 + _DAT_11271a1c4,0);
  _objc_storeStrong(param_1 + _DAT_11271a1c0,0);
  _objc_storeStrong(param_1 + _DAT_11271a1f4,0);
  _objc_storeStrong(param_1 + _DAT_11271a1bc,0);
  _objc_storeStrong(param_1 + _DAT_11271a1b0,0);
  _objc_storeStrong(param_1 + _DAT_11271a1b8,0);
  _objc_storeStrong(param_1 + _DAT_11271a1ac,0);
  _objc_storeStrong(param_1 + _DAT_11271a1a8,0);
  _objc_destroyWeak(param_1 + _DAT_11271a144);
  _objc_destroyWeak(param_1 + _DAT_11271a140);
  _objc_storeStrong(param_1 + _DAT_11271a13c,0);
  _objc_storeStrong(param_1 + _DAT_11271a138,0);
  _objc_storeStrong(param_1 + _DAT_11271a130,0);
  _objc_storeStrong(param_1 + _DAT_11271a12c,0);
  _objc_storeStrong(param_1 + _DAT_11271a128,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271a190,0);
  return;
}



/* Entry: 10503d84c; end: 10503dd8b; -[SCFriendUnifiedActionMenuActionHandler initWithUserSession:friendScoreCoordinator:snapchattersDataMutator:snapchattersDataFetcher:userInfoProvider:friendsFeedDataAccess:conversationServices:customStoriesDataFetcher:customStoriesDataSyncer:dataSource:attributedPage:profilePageSourceType:shareFriendScopeExposer:featureSettingsService:userBlizzardServices:notificationServices:creatorSettingsService:discoverFeedNotificationServices:leaveCustomStoryLauncher:leaveCustomStoryScopeServices:plugins:safetyReportScopeExposer:circumstanceEngine:bitmojiEditAvatarBuilderPresenter:bitmojiEditAvatarBuilderScopeServices:shareFriendProfileScopeExposer:friendProfileSharingScopeServices:pageLauncherServices:bitmojiOutfitSharingLogger:bitmojiStyle:webScopeExposer:messagingExperimentService:] */

undefined8 *
FUN_10503d84c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined4 param_33,undefined4 param_34,undefined8 param_35,undefined8 param_36)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  _objc_retain(param_35);
  _objc_retain(param_36);
  puStack_70 = PTR_PTR_1126e5bc0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_17);
    uVar2 = puVar1[10];
    puVar1[10] = param_17;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[2];
    puVar1[2] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[3];
    puVar1[3] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_12;
    _objc_release(uVar2);
    func_0x00010befc780(puVar1[0x14]);
    _objc_retain(param_32);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_36;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b4068;
    _objc_alloc();
    func_0x00010c05da20();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(puVar1[4]);
    puVar3 = PTR_PTR_1126b4090;
    _objc_alloc();
    func_0x00010c022060();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126afdd8;
    func_0x00010bfc8740();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar1[9] = param_13;
  }
  _objc_release(param_36);
  _objc_release(param_35);
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



/* Entry: 10503dd8c; end: 10503dd97; +[SCFriendUnifiedActionMenuActionHandler announcerIdentifier] */

undefined ** FUN_10503dd8c(void)

{
  return &PTR____CFConstantStringClassReference_110dc36d8;
}



/* Entry: 10503dd98; end: 10503dd9f; -[SCFriendUnifiedActionMenuActionHandler addListener:] */

void FUN_10503dd98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10503dda0; end: 10503dda7; -[SCFriendUnifiedActionMenuActionHandler removeListener:] */

void FUN_10503dda0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10503dda8; end: 10503de1b; -[SCFriendUnifiedActionMenuActionHandler setActionMenuPresenter:] */

void FUN_10503dda8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x98,param_3);
  _objc_retain();
  uVar1 = param_3;
  func_0x00010c10f940(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1e1580(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10503de1c; end: 10503df17; -[SCFriendUnifiedActionMenuActionHandler handleActionWithSender:actionModel:fromSourceView:] */

long FUN_10503de1c(long param_1,undefined8 param_2,undefined **param_3,ulong param_4,
                  undefined *param_5)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar10 = param_1;
  uVar7 = param_4;
  func_0x00010be25340();
  if ((int)lVar10 != 0) {
    uVar9 = *(undefined8 *)(param_1 + 8);
    param_3 = &PTR____CFConstantStringClassReference_110eba238;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0;
    param_5 = puVar2;
    func_0x00010bf7dbc0(uVar9);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return lVar10;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(uVar7);
  _objc_retain(param_5);
  uVar3 = uVar7;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  if ((int)uVar4 == 0) {
    iVar1 = (int)*(undefined8 *)(param_4 + 0x20);
    func_0x00010bfd0140();
    uVar3 = uVar7;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    if (iVar1 == 0) {
      uVar4 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      if ((int)uVar4 == 0) {
        uVar3 = uVar7;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        if ((int)uVar4 != 0) {
          uVar3 = param_4 + 0x90;
          _objc_loadWeakRetained(uVar3);
          uVar6 = uVar7;
          func_0x00010beee2e0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_PTR_1126b15c8;
          _objc_opt_class(PTR_PTR_1126b15c8);
          uVar5 = uVar6;
          _objc_opt_isKindOfClass(uVar6,puVar2);
          uVar4 = uVar6;
          if ((uVar5 & 1) == 0) {
            uVar4 = 0;
          }
          _objc_retain(uVar4);
          _objc_release(uVar6);
          func_0x00010c10b560(uVar3);
          goto LAB_10503e19c;
        }
        uVar3 = uVar7;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        if ((int)uVar4 != 0) {
          func_0x00010be7ec20(param_4);
          goto LAB_10503e1ac;
        }
        uVar3 = uVar7;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        if ((int)uVar4 != 0) {
          uVar3 = uVar7;
          func_0x00010beee2e0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_PTR_1126b40e8;
          _objc_opt_class(PTR_PTR_1126b40e8);
          uVar6 = uVar3;
          _objc_opt_isKindOfClass(uVar3,puVar2);
          uVar4 = uVar3;
          if ((uVar6 & 1) == 0) {
            uVar4 = 0;
          }
          _objc_retain(uVar4);
          _objc_release(uVar3);
          uVar3 = uVar4;
          func_0x00010c247b60(uVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          func_0x00010be7c500(param_4);
          goto LAB_10503e1a8;
        }
        uVar3 = uVar7;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        if ((int)uVar4 != 0) goto LAB_10503dff0;
        uVar3 = uVar7;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        if ((int)uVar4 != 0) {
          func_0x00010be7c180(param_4);
          goto LAB_10503e1ac;
        }
        uVar3 = uVar7;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        if ((int)uVar4 != 0) {
          lVar10 = *(long *)(param_4 + 0x30);
          if (lVar10 != 0) {
            func_0x00010c10f940();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1e1580(*(undefined8 *)(param_4 + 0x28));
            _objc_release(lVar10);
            lVar10 = *(long *)(param_4 + 0x28);
            func_0x00010bfd0140(lVar10);
            goto LAB_10503e1b0;
          }
LAB_10503e454:
          lVar10 = 0;
          goto LAB_10503e1b0;
        }
        uVar3 = uVar7;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        if ((int)uVar4 == 0) {
          uVar3 = uVar7;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c0720c0();
          _objc_release(uVar3);
          if ((int)uVar4 == 0) goto LAB_10503e454;
          uVar3 = param_4 + 0x90;
          _objc_loadWeakRetained(uVar3);
          func_0x00010c10cf80();
        }
        else {
          uVar4 = uVar7;
          func_0x00010beee2e0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_PTR_1126b15c8;
          _objc_opt_class(PTR_PTR_1126b15c8);
          uVar6 = uVar4;
          _objc_opt_isKindOfClass(uVar4,puVar2);
          uVar3 = uVar4;
          if ((uVar6 & 1) == 0) {
            uVar3 = 0;
          }
          _objc_retain(uVar3);
          _objc_release(uVar4);
          func_0x00010be35780(param_4);
        }
      }
      else {
        uVar3 = uVar7;
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126b40a8;
        _objc_opt_class(PTR_PTR_1126b40a8);
        uVar4 = uVar3;
        _objc_opt_isKindOfClass(uVar3,puVar2);
        uVar6 = uVar3;
        if ((uVar4 & 1) == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar3);
        uVar3 = param_4 + 0x90;
        _objc_loadWeakRetained(uVar3);
        uVar4 = uVar6;
        func_0x00010c244280(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_4 + 0xa0);
        func_0x00010bf46560(uVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126afdd8;
        func_0x00010bf0e140(uVar6);
        _objc_release(uVar6);
        func_0x00010bfc8740(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c10ec40(uVar3);
        _objc_release(puVar2);
        _objc_release(uVar9);
LAB_10503e19c:
        _objc_release(uVar4);
      }
LAB_10503e1a8:
      _objc_release(uVar3);
    }
    else {
      uVar4 = uVar3;
      func_0x00010c0720c0();
      _objc_release(uVar3);
      if ((int)uVar4 != 0) {
LAB_10503dff0:
        lVar8 = param_4 + 0x90;
        _objc_loadWeakRetained(lVar8);
        lVar10 = 1;
        func_0x00010bf849a0();
        _objc_release(lVar8);
        goto LAB_10503e1b0;
      }
    }
  }
  else {
    func_0x00010bf83100(param_4);
  }
LAB_10503e1ac:
  lVar10 = 1;
LAB_10503e1b0:
  _objc_release(param_5);
  _objc_release(uVar7);
  _objc_release(param_3);
  return lVar10;
}



/* Entry: 10503df18; end: 10503e45b; -[SCFriendUnifiedActionMenuActionHandler _handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_10503df18(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010bfd0140();
    uVar2 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    if (iVar1 == 0) {
      uVar3 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      if ((int)uVar3 == 0) {
        uVar2 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        if ((int)uVar3 != 0) {
          uVar2 = param_1 + 0x90;
          _objc_loadWeakRetained(uVar2);
          uVar7 = param_4;
          func_0x00010beee2e0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR_PTR_1126b15c8;
          _objc_opt_class(PTR_PTR_1126b15c8);
          uVar4 = uVar7;
          _objc_opt_isKindOfClass(uVar7,puVar6);
          uVar3 = uVar7;
          if ((uVar4 & 1) == 0) {
            uVar3 = 0;
          }
          _objc_retain(uVar3);
          _objc_release(uVar7);
          func_0x00010c10b560(uVar2);
          goto LAB_10503e19c;
        }
        uVar2 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        if ((int)uVar3 != 0) {
          func_0x00010be7ec20(param_1);
          goto LAB_10503e1ac;
        }
        uVar2 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        if ((int)uVar3 != 0) {
          uVar2 = param_4;
          func_0x00010beee2e0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR_PTR_1126b40e8;
          _objc_opt_class(PTR_PTR_1126b40e8);
          uVar7 = uVar2;
          _objc_opt_isKindOfClass(uVar2,puVar6);
          uVar3 = uVar2;
          if ((uVar7 & 1) == 0) {
            uVar3 = 0;
          }
          _objc_retain(uVar3);
          _objc_release(uVar2);
          uVar2 = uVar3;
          func_0x00010c247b60(uVar3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
          func_0x00010be7c500(param_1);
          goto LAB_10503e1a8;
        }
        uVar2 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        if ((int)uVar3 != 0) goto LAB_10503dff0;
        uVar2 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        if ((int)uVar3 != 0) {
          func_0x00010be7c180(param_1);
          goto LAB_10503e1ac;
        }
        uVar2 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        if ((int)uVar3 != 0) {
          lVar5 = *(long *)(param_1 + 0x30);
          if (lVar5 != 0) {
            func_0x00010c10f940();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1e1580(*(undefined8 *)(param_1 + 0x28));
            _objc_release(lVar5);
            uVar8 = *(undefined8 *)(param_1 + 0x28);
            func_0x00010bfd0140(uVar8);
            goto LAB_10503e1b0;
          }
LAB_10503e454:
          uVar8 = 0;
          goto LAB_10503e1b0;
        }
        uVar2 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        if ((int)uVar3 == 0) {
          uVar2 = param_4;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c0720c0();
          _objc_release(uVar2);
          if ((int)uVar3 == 0) goto LAB_10503e454;
          uVar2 = param_1 + 0x90;
          _objc_loadWeakRetained(uVar2);
          func_0x00010c10cf80();
        }
        else {
          uVar3 = param_4;
          func_0x00010beee2e0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR_PTR_1126b15c8;
          _objc_opt_class(PTR_PTR_1126b15c8);
          uVar7 = uVar3;
          _objc_opt_isKindOfClass(uVar3,puVar6);
          uVar2 = uVar3;
          if ((uVar7 & 1) == 0) {
            uVar2 = 0;
          }
          _objc_retain(uVar2);
          _objc_release(uVar3);
          func_0x00010be35780(param_1);
        }
      }
      else {
        uVar2 = param_4;
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126b40a8;
        _objc_opt_class(PTR_PTR_1126b40a8);
        uVar3 = uVar2;
        _objc_opt_isKindOfClass(uVar2,puVar6);
        uVar7 = uVar2;
        if ((uVar3 & 1) == 0) {
          uVar7 = 0;
        }
        _objc_retain(uVar7);
        _objc_release(uVar2);
        uVar2 = param_1 + 0x90;
        _objc_loadWeakRetained(uVar2);
        uVar3 = uVar7;
        func_0x00010c244280(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(param_1 + 0xa0);
        func_0x00010bf46560(uVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126afdd8;
        func_0x00010bf0e140(uVar7);
        _objc_release(uVar7);
        func_0x00010bfc8740(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c10ec40(uVar2);
        _objc_release(puVar6);
        _objc_release(uVar8);
LAB_10503e19c:
        _objc_release(uVar3);
      }
LAB_10503e1a8:
      _objc_release(uVar2);
    }
    else {
      uVar3 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      if ((int)uVar3 != 0) {
LAB_10503dff0:
        param_1 = param_1 + 0x90;
        _objc_loadWeakRetained(param_1);
        uVar8 = 1;
        func_0x00010bf849a0();
        _objc_release(param_1);
        goto LAB_10503e1b0;
      }
    }
  }
  else {
    func_0x00010bf83100(param_1);
  }
LAB_10503e1ac:
  uVar8 = 1;
LAB_10503e1b0:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar8;
}



/* Entry: 10503e45c; end: 10503e45f; -[SCFriendUnifiedActionMenuActionHandler willClearFriendConversation:presentingViewController:] */

void FUN_10503e45c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissAllActionMenus_1125be5e8);
  return;
}



/* Entry: 10503e460; end: 10503e4d3; -[SCFriendUnifiedActionMenuActionHandler friendUnifiedActionMenuSettingsActionHandlerWillPresentSubscreen:] */

void FUN_10503e460(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x90;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x90;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfb9060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10503e4d4; end: 10503e547; -[SCFriendUnifiedActionMenuActionHandler friendUnifiedActionMenuSettingsActionHandlerWillDismissSubscreen:] */

void FUN_10503e4d4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x90;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x90;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfb9040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10503e548; end: 10503e54b; -[SCFriendUnifiedActionMenuActionHandler dismissLeavePrivateStoryActionMenu] */

void FUN_10503e548(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf83110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissAllActionMenus_1125be5e8);
  return;
}



/* Entry: 10503e54c; end: 10503e58f; -[SCFriendUnifiedActionMenuActionHandler unifiedActionMenuPresenterDidDismiss:] */

void FUN_10503e54c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  param_1 = param_1 + 0x90;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf849a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10503e590; end: 10503e69b; -[SCFriendUnifiedActionMenuActionHandler didUpdateWithAnnouncerIdentifier:] */

void FUN_10503e590(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if (((((uVar1 & 1) != 0) || (uVar1 = param_3, func_0x00010c0720c0(), (uVar1 & 1) != 0)) ||
      (uVar1 = param_3, func_0x00010c0720c0(), (uVar1 & 1) != 0)) ||
     (uVar1 = param_3, func_0x00010c0720c0(), (int)uVar1 != 0)) {
    _objc_initWeak(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10503e69c;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10503e69c; end: 10503e6c7;  */

void FUN_10503e69c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf83100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10503e6c8; end: 10503e7c3; -[SCFriendUnifiedActionMenuActionHandler _hideFriendStorySuggestionForSnapchatter:] */

void FUN_10503e6c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  func_0x00010bf83100(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bf5b780(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = PTR_PTR_1126b4028;
  func_0x00010bf81ac0(PTR_PTR_1126b4028);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___dispatch_main_q_11034be20;
  func_0x00010c0f9280(uVar3,param_2,4,uVar4,1,puVar5,&PTR___NSConcreteGlobalBlock_110863ef8,
                      PTR___dispatch_main_q_11034be20,&PTR___NSConcreteGlobalBlock_110863f18,
                      PTR___dispatch_main_q_11034be20);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10503e7c4; end: 10503e7cb;  */

void FUN_10503e7c4(void)

{
  return;
}



/* Entry: 10503e7cc; end: 10503e88f; -[SCFriendUnifiedActionMenuActionHandler _presentStorySettingsActionMenu] */

void FUN_10503e7cc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  puVar1 = PTR_PTR_1126b40f0;
  _objc_alloc(PTR_PTR_1126b40f0);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110dc36f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc36f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c015d20(puVar1);
  _objc_release(ppuVar3);
  _objc_release(uVar2);
  func_0x00010be79de0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10503e890; end: 10503ea27; -[SCFriendUnifiedActionMenuActionHandler _presentLeavePrivateStoryMenu] */

void FUN_10503e890(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0x30) != 0) {
    puVar1 = PTR_PTR_1126b40f8;
    _objc_alloc(PTR_PTR_1126b40f8);
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c2923e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c007e20(puVar1);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b1208;
    _objc_alloc();
    func_0x00010c02b180();
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x38));
    func_0x00010bef9980(*(undefined8 *)(param_1 + 0x38));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x30));
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf83dc0(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c10f940(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e1580(*(undefined8 *)(param_1 + 0x28));
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 10503ea28; end: 10503ea53;  */

void FUN_10503ea28(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7db00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10503ea54; end: 10503eaa7; -[SCFriendUnifiedActionMenuActionHandler _presentPrivateStoryMenuWithSettingsActionMenuPresenter] */

void FUN_10503ea54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c10fd00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10d0c0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10503eaa8; end: 10503eb83; -[SCFriendUnifiedActionMenuActionHandler _presentManageFriendshipActionMenu:] */

void FUN_10503eaa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c0774c0();
  if ((int)uVar3 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(param_1 + 0x48) == 0x67;
  }
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126b4100;
  _objc_alloc(PTR_PTR_1126b4100);
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c015d40(puVar2,param_2,uVar4,uVar3,*(undefined8 *)(param_1 + 0x60),param_3,bVar1);
  _objc_release(param_3);
  _objc_release(uVar3);
  func_0x00010be79dc0(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10503eb84; end: 10503ed17; -[SCFriendUnifiedActionMenuActionHandler _presentActionMenuWithDataProvider:] */

void FUN_10503eb84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b1200;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c063540();
  puVar2 = PTR_PTR_1126b1208;
  _objc_alloc();
  func_0x00010c02b1a0();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar2;
  _objc_release(uVar3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x30),param_2,param_1);
  func_0x00010bef9980(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 8));
  *(undefined1 *)(param_1 + 0x88) = 1;
  lVar4 = param_1 + 0x98;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bf83dc0();
  _objc_release(lVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c10f940(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e1580(*(undefined8 *)(param_1 + 0x20),param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 10503ed18; end: 10503f063; -[SCFriendUnifiedActionMenuActionHandler _presentActionMenuWithDataProviderV2:] */

void FUN_10503ed18(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b1200;
  _objc_alloc(PTR_PTR_1126b1200);
  func_0x00010c063540();
  puVar2 = PTR_PTR_1126b1208;
  _objc_alloc();
  func_0x00010c02b1a0();
  uVar9 = *(undefined8 *)(param_3 + 0x30);
  *(undefined **)(param_3 + 0x30) = puVar2;
  _objc_release(uVar9);
  func_0x00010c18b5e0(*(undefined8 *)(param_3 + 0x30));
  func_0x00010bef9980(*(undefined8 *)(param_3 + 0x30));
  puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  ppuVar4 = &PTR____CFConstantStringClassReference_110dbc2f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbc2f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar3);
  _objc_release(ppuVar4);
  puVar5 = PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
  _objc_opt_new(PTR__OBJC_CLASS___NSTextAttachment_1126b2a20);
  puVar6 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc();
  func_0x00010bff4f40();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bcbeb30();
  func_0x00010c23bba0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar5);
  _objc_release(puVar2);
  puVar2 = puVar5;
  func_0x00010bfe6ac0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  puVar7 = puVar5;
  func_0x00010bfe6ac0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  func_0x00010c1739e0(0,0xc000000000000000,param_1,param_2,puVar5);
  _objc_release(puVar7);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x00010bf0e420();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010bcbeb30();
  if (((ulong)puVar7 & 1) == 0) {
    func_0x00010c08fa60(puVar6);
  }
  func_0x00010c066640(puVar6);
  func_0x00010bef69e0(*(undefined8 *)(param_3 + 0x30));
  _objc_initWeak(auStack_78,param_3);
  uVar9 = *(undefined8 *)(param_3 + 0x30);
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010c1a7680(uVar9);
  *(undefined1 *)(param_3 + 0x88) = 1;
  lVar8 = param_3 + 0x98;
  _objc_loadWeakRetained(lVar8);
  func_0x00010bf83dc0();
  _objc_release(lVar8);
  uVar9 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010c10f940(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e1580(*(undefined8 *)(param_3 + 0x20));
  _objc_release(uVar9);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 10503f064; end: 10503f08f;  */

void FUN_10503f064(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10503f090; end: 10503f0eb;  */

void FUN_10503f090(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  lVar1 = *(long *)(param_1 + 0x20) + 0x98;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10d0c0(uVar3,param_2,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10503f0ec; end: 10503f2c7; -[SCFriendUnifiedActionMenuActionHandler _didTapHeaderActionLabel] */

void FUN_10503f0ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  func_0x00010bddf320();
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110dc36b8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae630;
  func_0x00010bfe6000(PTR_PTR_1126ae630);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ad780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010c2b9b80(puVar3,param_2,0xf);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ae560;
  _objc_opt_new(PTR_PTR_1126ae560);
  puVar4 = puVar3;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10503f2c8;
  puStack_60 = &UNK_110842308;
  puVar5 = puVar1;
  puStack_58 = puVar1;
  _objc_retain(puVar1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar4,param_2,&puStack_78,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126ae638;
  _objc_opt_new(PTR_PTR_1126ae638);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c10f8e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf22ba0(puVar4,param_2,puVar2,puVar3,uVar6,param_1,0,0,0,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar4);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x78),param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puStack_58);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 10503f2c8; end: 10503f2df;  */

void FUN_10503f2c8(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 10503f2e0; end: 10503f327; -[SCFriendUnifiedActionMenuActionHandler _cleanUpWebScope] */

void FUN_10503f2e0(long param_1)

{
  long lVar1;
  
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



/* Entry: 10503f328; end: 10503f3a7; -[SCFriendUnifiedActionMenuActionHandler dismissAllActionMenus] */

/* WARNING: Possible PIC construction at 0x00010503f388: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010503f38c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_10503f328(long param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x98;
  _objc_loadWeakRetained();
  if ((lVar2 == 0) || (bVar1 = *(byte *)(param_1 + 0x88), _objc_release(), (bVar1 & 1) != 0)) {
    if ((*(long *)(param_1 + 0x30) == 0) && (*(long *)(param_1 + 0x38) == 0)) {
      return;
    }
  }
  else {
    _objc_loadWeakRetained(param_1 + 0x98);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf83dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10503f3a8; end: 10503f3ab; -[SCFriendUnifiedActionMenuActionHandler webBrowserDidDismiss:] */

void FUN_10503f3a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddf330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanUpWebScope_112555668);
  return;
}



/* Entry: 10503f3ac; end: 10503f3c3; -[SCFriendUnifiedActionMenuActionHandler delegate] */

void FUN_10503f3ac(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10503f3c4; end: 10503f3cf; -[SCFriendUnifiedActionMenuActionHandler setDelegate:] */

void FUN_10503f3c4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x90,param_3);
  return;
}



/* Entry: 10503f3d0; end: 10503f3e7; -[SCFriendUnifiedActionMenuActionHandler actionMenuPresenter] */

void FUN_10503f3d0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10503f3e8; end: 10503f3ef; -[SCFriendUnifiedActionMenuActionHandler dataSource] */

undefined8 FUN_10503f3e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10503f3f0; end: 10503f3f7; -[SCFriendUnifiedActionMenuActionHandler isShowingSubsequentActionSheet] */

undefined1 FUN_10503f3f0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x88);
}



/* Entry: 10503f3f8; end: 10503f3ff; -[SCFriendUnifiedActionMenuActionHandler loggingService] */

undefined8 FUN_10503f3f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10503f400; end: 10503f42f; -[SCFriendUnifiedActionMenuActionHandler setLoggingService:] */

void FUN_10503f400(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10503f430; end: 10503f523; -[SCFriendUnifiedActionMenuActionHandler .cxx_destruct] */

void FUN_10503f430(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_destroyWeak(param_1 + 0x98);
  _objc_destroyWeak(param_1 + 0x90);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 10503f524; end: 10503fa1b; -[SCFriendUnifiedActionMenuSettingsActionHandler initWithUserSession:friendScoreCoordinator:snapchattersDataMutator:snapchattersDataFetcher:userInfoProvider:friendsFeedDataAccess:conversationServices:dataSource:sourcePageType:profilePageSourceType:shareFriendScopeExposer:featureSettingsService:userBlizzardServices:notificationServices:creatorSettingsService:discoverFeedNotificationServices:safetyReportScopeExposer:bitmojiEditAvatarBuilderPresenter:bitmojiEditAvatarBuilderScopeServices:shareFriendProfileScopeExposer:friendProfileSharingScopeServices:pageLauncherServices:bitmojiOutfitSharingLogger:bitmojiStyle:webScopeExposer:messagingExperimentService:] */

undefined8 * FUN_10503f524(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar5;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000038);
  _objc_retain(in_stack_00000050);
  _objc_retain(in_stack_00000058);
  _objc_retain(in_stack_00000060);
  _objc_retain(in_stack_00000068);
  _objc_retain(in_stack_00000070);
  _objc_retain(in_stack_00000078);
  _objc_retain(in_stack_00000080);
  _objc_retain(in_stack_00000090);
  _objc_retain(in_stack_00000098);
  puStack_70 = PTR_PTR_1126e5bc8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(in_x7);
    uVar2 = puVar1[2];
    puVar1[2] = in_x7;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000000);
    uVar2 = puVar1[3];
    puVar1[3] = in_stack_00000000;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000008);
    uVar2 = puVar1[1];
    puVar1[1] = in_stack_00000008;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000020);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = in_stack_00000020;
    _objc_release(uVar2);
    puVar1[0xf] = in_stack_00000010;
    _objc_retain(in_x4);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = in_x4;
    _objc_release(uVar2);
    _objc_retain(in_x5);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = in_x5;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000038);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = in_stack_00000038;
    _objc_release(uVar2);
    uVar2 = in_stack_00000008;
    func_0x00010c244280(in_stack_00000008);
    _objc_retainAutoreleasedReturnValue();
    puVar1[0x18] = in_stack_00000088;
    _objc_retain(in_stack_00000090);
    uVar3 = puVar1[0x19];
    puVar1[0x19] = in_stack_00000090;
    _objc_release(uVar3);
    _objc_retain(in_stack_00000098);
    uVar3 = puVar1[0x1a];
    puVar1[0x1a] = in_stack_00000098;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b40e0;
    _objc_alloc();
    func_0x00010c038da0();
    uVar3 = puVar1[5];
    puVar1[5] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b4108;
    _objc_alloc();
    func_0x00010c038d80();
    uVar3 = puVar1[6];
    puVar1[6] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b4110;
    _objc_alloc();
    func_0x00010c038d80();
    uVar3 = puVar1[7];
    puVar1[7] = puVar4;
    _objc_release(uVar3);
    func_0x00010c18b5e0(puVar1[5]);
    puVar4 = PTR_PTR_1126b4118;
    _objc_alloc();
    func_0x00010c049000();
    uVar3 = puVar1[10];
    puVar1[10] = puVar4;
    _objc_release(uVar3);
    func_0x00010c18b5e0(puVar1[10]);
    uVar3 = in_stack_00000028;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0xb];
    puVar1[0xb] = uVar3;
    _objc_release(uVar5);
    uVar3 = in_stack_00000000;
    func_0x00010bf3afa0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[4];
    puVar1[4] = uVar3;
    _objc_release(uVar5);
    _objc_retain(in_stack_00000058);
    uVar3 = puVar1[0x13];
    puVar1[0x13] = in_stack_00000058;
    _objc_release(uVar3);
    _objc_retain(in_stack_00000060);
    uVar3 = puVar1[0x14];
    puVar1[0x14] = in_stack_00000060;
    _objc_release(uVar3);
    _objc_retain(in_stack_00000068);
    uVar3 = puVar1[0xd];
    puVar1[0xd] = in_stack_00000068;
    _objc_release(uVar3);
    _objc_retain(in_stack_00000070);
    uVar3 = puVar1[0xe];
    puVar1[0xe] = in_stack_00000070;
    _objc_release(uVar3);
    _objc_retain(in_x6);
    uVar3 = puVar1[0x15];
    puVar1[0x15] = in_x6;
    _objc_release(uVar3);
    _objc_retain(in_stack_00000078);
    uVar3 = puVar1[0x16];
    puVar1[0x16] = in_stack_00000078;
    _objc_release(uVar3);
    _objc_retain(in_stack_00000080);
    uVar3 = puVar1[0x17];
    puVar1[0x17] = in_stack_00000080;
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(in_stack_00000098);
  _objc_release(in_stack_00000090);
  _objc_release(in_stack_00000080);
  _objc_release(in_stack_00000078);
  _objc_release(in_stack_00000070);
  _objc_release(in_stack_00000068);
  _objc_release(in_stack_00000060);
  _objc_release(in_stack_00000058);
  _objc_release(in_stack_00000050);
  _objc_release(in_stack_00000038);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000008);
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(in_x4);
  return puVar1;
}



/* Entry: 10503fa1c; end: 10503fa83; -[SCFriendUnifiedActionMenuSettingsActionHandler setPresentingViewController:] */

void FUN_10503fa1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0xd8,param_3);
  func_0x00010c1e14a0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c1e14a0(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c1e14a0(*(undefined8 *)(param_1 + 0x38));
  func_0x00010c1e1580(*(undefined8 *)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10503fa84; end: 105040197; -[SCFriendUnifiedActionMenuSettingsActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_10503fa84(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uVar22;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010bef8ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd0140();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bf8c460();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfd0140();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
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
        if ((int)uVar2 == 0) {
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
            if ((int)uVar2 == 0) {
              uVar1 = param_4;
              func_0x00010bfe5ec0();
              _objc_retainAutoreleasedReturnValue();
              uVar2 = uVar1;
              func_0x00010c0720c0();
              _objc_release(uVar1);
              if ((int)uVar2 != 0) {
                uVar3 = *(undefined8 *)(param_1 + 0x50);
                goto LAB_10503fbd4;
              }
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
                  lVar4 = *(long *)(param_1 + 8);
                  func_0x00010bf2bf20();
                  _objc_retainAutoreleasedReturnValue();
                  if (lVar4 == 0) {
                    lVar21 = *(long *)(param_1 + 8);
                    func_0x00010c244280(lVar21);
                    _objc_retainAutoreleasedReturnValue();
                  }
                  else {
                    _objc_retain(lVar4);
                    lVar21 = lVar4;
                  }
                  _objc_release(lVar4);
                  puVar5 = PTR_PTR_1126b40d0;
                  _objc_alloc(PTR_PTR_1126b40d0);
                  lVar4 = param_1 + 0xd8;
                  _objc_loadWeakRetained(lVar4);
                  uVar3 = 1;
                  func_0x00010c048fa0(puVar5);
                  _objc_release(lVar4);
                  puVar19 = PTR_PTR_1126b40d8;
                  func_0x00010c22b300(PTR_PTR_1126b40d8);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x60));
                  _objc_release(puVar19);
                  _objc_release(puVar5);
                  _objc_release(lVar21);
                  goto LAB_10503fbe8;
                }
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
                    uVar22 = *(undefined8 *)(param_1 + 0xa8);
                    func_0x00010c269d40(uVar22);
                    _objc_retainAutoreleasedReturnValue();
                    uVar3 = uVar22;
                    func_0x00010c293a00();
                    _objc_retainAutoreleasedReturnValue();
                    uVar18 = uVar3;
                    func_0x00010c242760();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(uVar3);
                    _objc_release(uVar22);
                    func_0x00010be2ff20(param_1);
                    _objc_release(uVar18);
                  }
                }
                else {
                  uVar2 = param_4;
                  func_0x00010beee2e0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar5 = PTR_PTR_1126b4120;
                  _objc_opt_class(PTR_PTR_1126b4120);
                  uVar6 = uVar2;
                  _objc_opt_isKindOfClass(uVar2,puVar5);
                  uVar1 = uVar2;
                  if ((uVar6 & 1) == 0) {
                    uVar1 = 0;
                  }
                  _objc_retain(uVar1);
                  _objc_release(uVar2);
                  if (uVar1 != 0) {
                    func_0x00010be588e0(param_1);
                    puVar5 = PTR_PTR_1126aead8;
                    _objc_alloc();
                    lVar4 = param_1 + 0xd8;
                    _objc_loadWeakRetained(lVar4);
                    func_0x00010c038f40();
                    _objc_release(lVar4);
                    uVar22 = *(undefined8 *)(param_1 + 0x70);
                    uVar3 = *(undefined8 *)(param_1 + 8);
                    func_0x00010c244280();
                    _objc_retainAutoreleasedReturnValue();
                    uVar1 = uVar2;
                    func_0x00010bf12fc0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar6 = uVar1;
                    func_0x00010bf12ea0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar7 = uVar2;
                    func_0x00010bf12fc0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar8 = uVar7;
                    func_0x00010bfb7be0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar9 = uVar2;
                    func_0x00010bf12fc0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar10 = uVar9;
                    func_0x00010c0fa820();
                    _objc_retainAutoreleasedReturnValue();
                    uVar11 = uVar2;
                    func_0x00010bf12fc0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar12 = uVar11;
                    func_0x00010bfb8640();
                    _objc_retainAutoreleasedReturnValue();
                    uVar13 = uVar2;
                    func_0x00010bf12fc0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar14 = uVar13;
                    func_0x00010c14fa80();
                    _objc_retainAutoreleasedReturnValue();
                    uVar15 = uVar2;
                    func_0x00010bf93600();
                    _objc_retainAutoreleasedReturnValue();
                    uVar16 = uVar2;
                    func_0x00010bf12fc0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar17 = uVar16;
                    func_0x00010bfb9700();
                    _objc_retainAutoreleasedReturnValue();
                    uVar18 = *(undefined8 *)(param_1 + 8);
                    func_0x00010c15ffa0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar19 = PTR_PTR_1126afdd8;
                    func_0x00010bfc8740();
                    _objc_retainAutoreleasedReturnValue();
                    uVar20 = uVar2;
                    func_0x00010bfa0be0();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf24540();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(uVar20);
                    _objc_release(puVar19);
                    _objc_release(uVar18);
                    _objc_release(uVar17);
                    _objc_release(uVar16);
                    _objc_release(uVar15);
                    _objc_release(uVar14);
                    _objc_release(uVar13);
                    _objc_release(uVar12);
                    _objc_release(uVar11);
                    _objc_release(uVar10);
                    _objc_release(uVar9);
                    _objc_release(uVar8);
                    _objc_release(uVar7);
                    _objc_release(uVar6);
                    _objc_release(uVar1);
                    _objc_release(uVar3);
                    lVar4 = *(long *)(param_1 + 0x68);
                    func_0x00010c150520();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    if (lVar4 != 0) {
                      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x68));
                      _objc_unsafeClaimAutoreleasedReturnValue();
                    }
                    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x68));
                    _objc_release(uVar22);
                    _objc_release(puVar5);
                    _objc_release(uVar2);
                    goto LAB_10503fbe4;
                  }
                }
                uVar3 = 0;
                goto LAB_10503fbe8;
              }
              func_0x00010be7a3a0(param_1);
            }
            else {
              func_0x00010be31b80(param_1);
            }
            goto LAB_10503fbe4;
          }
          uVar3 = *(undefined8 *)(param_1 + 0x38);
        }
        else {
          uVar3 = *(undefined8 *)(param_1 + 0x30);
        }
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x28);
      }
LAB_10503fbd4:
      func_0x00010bfd0140(uVar3);
    }
  }
LAB_10503fbe4:
  uVar3 = 1;
LAB_10503fbe8:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}


