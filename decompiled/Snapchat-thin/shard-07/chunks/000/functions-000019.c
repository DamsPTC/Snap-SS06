/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10505472c; end: 105054847; -[SCMyUnifiedProfilePostRegistrationActionHandler _showBirthdayPage] */

void FUN_10505472c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126b4378;
  _objc_alloc(PTR_PTR_1126b4378);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf1a840(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf1a6e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c127bc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c121fe0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7940(puVar1,param_2,uVar2,uVar3,uVar4,uVar5,*(undefined8 *)(param_1 + 0x18),0,
                      *(undefined8 *)(param_1 + 0xb0));
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  param_1 = param_1 + 0xb8;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(lVar6);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105054848; end: 10505487b; -[SCMyUnifiedProfilePostRegistrationActionHandler _showEnableMicrophonePage] */

void FUN_105054848(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf38240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10505487c; end: 10505491b; -[SCMyUnifiedProfilePostRegistrationActionHandler _showPushNotificationsPage] */

void FUN_10505487c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c135f60();
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e99a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10505491c; end: 105054ac7; -[SCMyUnifiedProfilePostRegistrationActionHandler _showSyncContactsPageForSecurePhone:] */

void FUN_10505491c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105054ac8;
  puStack_78 = &UNK_110849680;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010c0311a0(puVar1);
  puVar2 = PTR_PTR_1126ae600;
  _objc_alloc(PTR_PTR_1126ae600);
  func_0x00010c01fb20();
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf23c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20));
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 105054ac8; end: 105054ba3;  */

void FUN_105054ac8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0xb8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c10eda0();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105054ba4; end: 105054caf; -[SCMyUnifiedProfilePostRegistrationActionHandler _showVerifyEmailPage] */

void FUN_105054ba4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0311a0(puVar1);
  puVar2 = PTR_PTR_1126ae610;
  _objc_alloc(PTR_PTR_1126ae610);
  func_0x00010c0582c0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x90));
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105054cb0; end: 105054d33;  */

void FUN_105054cb0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0xb8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11c520();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105054d34; end: 105054d47;  */

void FUN_105054d34(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105054d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 0x10))(param_2);
    return;
  }
  return;
}



/* Entry: 105054d48; end: 105054ddb; -[SCMyUnifiedProfilePostRegistrationActionHandler _showMyFriendsPage] */

void FUN_105054d48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = param_1 + 0xb8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126ae620;
  _objc_alloc(PTR_PTR_1126ae620);
  func_0x00010c0575e0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x98),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105054ddc; end: 105054e6f; -[SCMyUnifiedProfilePostRegistrationActionHandler _showEnableContactBookMessaging] */

void FUN_105054ddc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = param_1 + 0xb8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010bf22f40(uVar3,param_2,param_1,0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0xa0),param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105054e70; end: 105054e8f; -[SCMyUnifiedProfilePostRegistrationActionHandler didDismissMyFriends] */

void FUN_105054e70(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x98));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105054e90; end: 105054ed7; -[SCMyUnifiedProfilePostRegistrationActionHandler findFriendsWorkflowCompleted] */

void FUN_105054e90(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105054ed8; end: 105054f0f; -[SCMyUnifiedProfilePostRegistrationActionHandler createChatScopeWantsToDismiss:] */

void FUN_105054ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c27ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105054f10; end: 105054f2f; -[SCMyUnifiedProfilePostRegistrationActionHandler createChatScopeDidDismiss:] */

void FUN_105054f10(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x80));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105054f30; end: 10505503b; -[SCMyUnifiedProfilePostRegistrationActionHandler createChatScope:wantsToDismissWithNewChat:] */

void FUN_105054f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010c27ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010bf6f440(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10505503c; end: 10505506f;  */

void FUN_10505503c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be62180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105055070; end: 1050550e7; -[SCMyUnifiedProfilePostRegistrationActionHandler _navigateToChat:] */

void FUN_105055070(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c183a80();
  _objc_release(param_3);
  _objc_release(lVar1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0d5fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050550e8; end: 10505512f; -[SCMyUnifiedProfilePostRegistrationActionHandler webBrowserDidDismiss:] */

void FUN_1050550e8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x88);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x88));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105055130; end: 10505514f; -[SCMyUnifiedProfilePostRegistrationActionHandler emailSettingsDidComplete] */

void FUN_105055130(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x90));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105055150; end: 10505519f; -[SCMyUnifiedProfilePostRegistrationActionHandler settingsScopeWantsDismiss] */

void FUN_105055150(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c150520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050551a0; end: 1050551e7; -[SCMyUnifiedProfilePostRegistrationActionHandler settingsScopeDidDismiss] */

void FUN_1050551a0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xa0);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xa0));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1050551e8; end: 1050551ff; -[SCMyUnifiedProfilePostRegistrationActionHandler presentingViewController] */

void FUN_1050551e8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105055200; end: 10505520b; -[SCMyUnifiedProfilePostRegistrationActionHandler setPresentingViewController:] */

void FUN_105055200(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xb8,param_3);
  return;
}



/* Entry: 10505520c; end: 105055327; -[SCMyUnifiedProfilePostRegistrationActionHandler .cxx_destruct] */

void FUN_10505520c(long param_1)

{
  _objc_destroyWeak(param_1 + 0xb8);
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
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105055328; end: 10505609b; -[SCMyProfilePageActionHandler initWithNavigationDelegate:spotlightNavigationDelegate:startChatDelegate:userSession:myStoriesDataCoordinator:myStoriesPlaybackDataProvider:playbackManagementDataProvider:remoteStoriesDataProvider:readReceiptCoordinator:saveStoryScopeExposer:deleteStorySnapScopeExposer:storyShareScopeExposer:friendProfileScopeExposer:myStorySettingsScopeExposer:customStoryMenuScopeExposer:webBrowsingScopeExposer:customStoryMembersScopeExposer:storyPrivacySettingsScopeExposer:standardExternalContentShareScopeExposer:safetyReportScopeExposer:circumstanceEngine:storiesServices:legacySnapchatterServices:userInfoServices:snapchatterServices:authenticatedNetworkServices:screenshotSharingService:addToStoryCameraScopeLauncher:addToStoryCameraScopeBuilder:chatCameraScopeLauncher:chatCameraScopeBuilder:storiesBlizzardLogger:notificationPool:externalLinkSendingService:operaSessionScopeExposer:saveFriendStoryOperaPluginProvider:plusServices:activityFeedScopeExposer:snapProPreferencesManager:snapProUserProfileIdProvider:snapProProfilesProvider:editDisplayNameScopeExposer:spotlightRepliesScopeExposer:profileManagementScopeExposer:memoriesQuickPostScopeExposer:storyBoostService:applicationLifecycleEvents:resourceDownloader:bloopsReportScopeExposer:featureSettingsService:temporaryFileWriter:showRecentStoryOnOpen:showRecentPublicStoryOnOpen:ourStoriesAttributionManager:notificationOSSettingsRetriever:offPlatformShareServices:spotlightShareSender:spotlightPlatformAnalyticsCreator:contentProductPlaybackScopeExposer:contentProductPlaybackScopeServices:optInDataProvider:discoverFeedEventsController:offPlatformLinkGenerationService:userTrackedLogger:creatorsSubmissionScopeExposerV2:creatorsSubmissionScopeServicesV2:storiesConfigProvider:creatorSubscriptionsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105055328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
             undefined8 param_53,undefined4 param_54,undefined4 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
             undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
             undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
             undefined8 param_69,undefined8 param_70)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
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
  _objc_retain();
  _objc_retain(param_57);
  _objc_retain(param_58);
  _objc_retain(param_59);
  _objc_retain(param_60);
  _objc_retain(param_61);
  _objc_retain(param_62);
  _objc_retain(param_63);
  _objc_retain(param_64);
  _objc_retain();
  _objc_retain(param_66);
  _objc_retain(param_67);
  _objc_retain(param_68);
  _objc_retain(param_69);
  _objc_retain(param_70);
  puStack_70 = PTR_PTR_1126e5c68;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar13 = (long)_DAT_11271aa14;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_6;
    _objc_release(uVar2);
    lVar13 = (long)_DAT_11271aa18;
    _objc_retain(param_25);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_25;
    _objc_release(uVar2);
    lVar13 = (long)_DAT_11271aa1c;
    _objc_retain(param_26);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_26;
    _objc_release(uVar2);
    lVar13 = (long)_DAT_11271aa20;
    _objc_retain(param_27);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_27;
    _objc_release(uVar2);
    lVar13 = (long)_DAT_11271aa24;
    _objc_retain(param_28);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_28;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271aa28);
    *(undefined **)((long)puVar1 + (long)_DAT_11271aa28) = puVar3;
    _objc_release(uVar2);
    lVar13 = (long)_DAT_11271aa2c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_7;
    _objc_release(uVar2);
    lVar13 = (long)_DAT_11271aa30;
    _objc_retain(param_56);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_56;
    _objc_release(uVar2);
    lVar13 = (long)_DAT_11271aa34;
    _objc_retain(param_42);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_42;
    _objc_release(uVar2);
    lVar13 = (long)_DAT_11271aa38;
    _objc_retain(param_58);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_58;
    _objc_release(uVar2);
    lVar13 = (long)_DAT_11271aa3c;
    _objc_retain(param_65);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_65;
    _objc_release(uVar2);
    lVar13 = (long)_DAT_11271aa40;
    _objc_retain(param_35);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_35;
    _objc_release(uVar2);
    lVar13 = (long)_DAT_11271aa44;
    _objc_retain(param_66);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_66;
    _objc_release(uVar2);
    lVar13 = (long)_DAT_11271aa48;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b10e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271aa4c);
    *(undefined **)((long)puVar1 + (long)_DAT_11271aa4c) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b40b8;
    _objc_alloc();
    uVar2 = param_24;
    func_0x00010c258580();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_24;
    func_0x00010c2587e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_27;
    func_0x00010c244d60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_24;
    func_0x00010bf62060();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_24;
    func_0x00010bf620a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_24;
    func_0x00010bf62080();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_27;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_27;
    func_0x00010c244620();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_27;
    func_0x00010bf1d740();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05de20();
    lVar13 = (long)_DAT_11271aa50;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined **)((long)puVar1 + lVar13) = puVar3;
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar11);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar12);
    _objc_release(uVar2);
    func_0x00010bef9980(*(undefined8 *)((long)puVar1 + lVar13));
    lVar13 = (long)_DAT_11271aa54;
    _objc_retain(param_23);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_23;
    _objc_release(uVar2);
    lVar13 = (long)_DAT_11271aa58;
    _objc_retain(param_70);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_70;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b4070;
    _objc_alloc();
    uVar2 = param_42;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar2;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_70;
    func_0x00010bf5b4a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_24;
    func_0x00010bf62060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05daa0();
    lVar13 = (long)_DAT_11271aa5c;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined **)((long)puVar1 + lVar13) = puVar3;
    _objc_release(uVar11);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar12);
    _objc_release(uVar2);
    func_0x00010bef9980(*(undefined8 *)((long)puVar1 + lVar13));
    puVar3 = PTR_PTR_1126b4380;
    _objc_alloc();
    uVar2 = param_24;
    func_0x00010c243de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c048ba0();
    lVar13 = (long)_DAT_11271aa60;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined **)((long)puVar1 + lVar13) = puVar3;
    _objc_release(uVar12);
    _objc_release(uVar2);
    func_0x00010c1d9000(*(undefined8 *)((long)puVar1 + lVar13));
    lVar13 = (long)_DAT_11271aa64;
    _objc_retain(param_29);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_29;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271aa68);
    *(undefined **)((long)puVar1 + (long)_DAT_11271aa68) = puVar3;
    _objc_release(uVar2);
    lVar13 = (long)_DAT_11271aa6c;
    _objc_retain(param_44);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_44;
    _objc_release(uVar2);
    if (param_54._1_1_ == '\0') {
      if ((char)param_54 != '\0') {
        func_0x00010beba8a0(puVar1);
      }
    }
    else {
      func_0x00010beba8c0(puVar1);
    }
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
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



/* Entry: 10505609c; end: 1050560db;  */

void FUN_10505609c(long param_1)

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



/* Entry: 1050560dc; end: 1050560e7; +[SCMyProfilePageActionHandler announcerIdentifier] */

undefined ** FUN_1050560dc(void)

{
  return &PTR____CFConstantStringClassReference_110dc3918;
}



/* Entry: 1050560e8; end: 1050560f7; -[SCMyProfilePageActionHandler addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050560e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271aa28),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1050560f8; end: 105056107; -[SCMyProfilePageActionHandler removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050560f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271aa28),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105056108; end: 105056193; -[SCMyProfilePageActionHandler setUnifiedProfileViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105056108(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_setUnifiedProfileViewController__1126647c8;
  puStack_38 = PTR_PTR_1126e5c68;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  func_0x00010c1e1580(*(undefined8 *)(param_1 + _DAT_11271aa50));
  func_0x00010c21b680(*(undefined8 *)(param_1 + _DAT_11271aa5c));
  _objc_release(param_3);
  return;
}



/* Entry: 105056194; end: 1050562b7; -[SCMyProfilePageActionHandler handleActionWithSender:actionModel:fromSourceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_105056194(undefined *param_1,undefined8 param_2,undefined **param_3,long param_4,
             undefined *param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puStack_110;
  undefined *puStack_108;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 == 0) {
    uVar5 = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      return (undefined *)0x0;
    }
  }
  else {
    _objc_retain(param_4);
    puVar1 = param_1;
    func_0x00010be25340();
    uVar7 = *(undefined8 *)(param_1 + _DAT_11271aa28);
    param_3 = &PTR____CFConstantStringClassReference_110eb73f8;
    param_1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0;
    param_5 = param_1;
    func_0x00010bf7dbc0(uVar7);
    _objc_release(param_4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      return puVar1;
    }
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = (undefined **)0x0;
  if (param_3 != (undefined **)0x0) {
    uVar7 = *(undefined8 *)(param_1 + _DAT_11271aa28);
    ppuVar8 = &PTR____CFConstantStringClassReference_110eb73f8;
    _objc_retain(param_3);
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0;
    param_5 = puVar1;
    func_0x00010bf7dbc0(uVar7);
    _objc_release(param_3);
    _objc_release();
    param_1 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return param_1;
  }
  ___stack_chk_fail();
  ppuVar9 = &puStack_110;
  _objc_retain(ppuVar8);
  _objc_retain(uVar5);
  _objc_retain(param_5);
  uVar2 = *(ulong *)(param_1 + _DAT_11271aa50);
  func_0x00010bfd0140();
  if ((uVar2 & 1) == 0) {
    uVar2 = *(ulong *)(param_1 + _DAT_11271aa5c);
    func_0x00010bfd0140();
    if ((uVar2 & 1) == 0) {
      uVar7 = uVar5;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar7;
      func_0x00010c0720c0();
      _objc_release(uVar7);
      if ((int)uVar3 == 0) {
        uVar2 = *(ulong *)(param_1 + _DAT_11271aa60);
        func_0x00010bfd0140();
        if ((uVar2 & 1) == 0) {
          uVar7 = uVar5;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar7;
          func_0x00010c0720c0();
          if ((int)uVar3 == 0) {
            uVar3 = uVar5;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            func_0x00010c0720c0();
            _objc_release(uVar3);
            _objc_release(uVar7);
            if ((int)uVar4 == 0) {
              puStack_108 = PTR_PTR_1126e5c68;
              puStack_110 = param_1;
              _objc_msgSendSuper2(&puStack_110,PTR_s_handleActionWithSender_actionMod_1125d19f8,
                                  ppuVar8,uVar5,param_5);
              goto LAB_1050564ec;
            }
          }
          else {
            _objc_release(uVar7);
          }
          func_0x00010be2f880(param_1);
        }
      }
      else {
        func_0x00010be28c60(param_1);
      }
    }
  }
  ppuVar9 = (undefined **)0x1;
LAB_1050564ec:
  _objc_release(param_5);
  _objc_release(uVar5);
  _objc_release(ppuVar8);
  return (undefined *)ppuVar9;
}



/* Entry: 1050562b8; end: 10505638f; -[SCMyProfilePageActionHandler announceUnifiedProfileActionForMetricWithActionModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1050562b8(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined *param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = (undefined **)0x0;
  if (param_3 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_11271aa28);
    ppuVar7 = &PTR____CFConstantStringClassReference_110eb73f8;
    _objc_retain(param_3);
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_4 = 0;
    param_5 = puVar1;
    func_0x00010bf7dbc0(uVar6);
    _objc_release(param_3);
    _objc_release();
    param_1 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_b0;
  _objc_retain(ppuVar7);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = *(ulong *)(param_1 + _DAT_11271aa50);
  func_0x00010bfd0140();
  if ((uVar2 & 1) == 0) {
    uVar2 = *(ulong *)(param_1 + _DAT_11271aa5c);
    func_0x00010bfd0140();
    if ((uVar2 & 1) == 0) {
      uVar6 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar6;
      func_0x00010c0720c0();
      _objc_release(uVar6);
      if ((int)uVar3 == 0) {
        uVar2 = *(ulong *)(param_1 + _DAT_11271aa60);
        func_0x00010bfd0140();
        if ((uVar2 & 1) == 0) {
          uVar6 = param_4;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar6;
          func_0x00010c0720c0();
          if ((int)uVar3 == 0) {
            uVar3 = param_4;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            func_0x00010c0720c0();
            _objc_release(uVar3);
            _objc_release(uVar6);
            if ((int)uVar4 == 0) {
              puStack_a8 = PTR_PTR_1126e5c68;
              puStack_b0 = param_1;
              _objc_msgSendSuper2(&puStack_b0,PTR_s_handleActionWithSender_actionMod_1125d19f8,
                                  ppuVar7,param_4,param_5);
              goto LAB_1050564ec;
            }
          }
          else {
            _objc_release(uVar6);
          }
          func_0x00010be2f880(param_1);
        }
      }
      else {
        func_0x00010be28c60(param_1);
      }
    }
  }
  ppuVar8 = (undefined **)0x1;
LAB_1050564ec:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(ppuVar7);
  return (undefined *)ppuVar8;
}



/* Entry: 105056390; end: 105056553; -[SCMyProfilePageActionHandler _handleActionWithSender:actionModel:fromSourceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105056390(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lStack_60;
  undefined *puStack_58;
  
  plVar5 = &lStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_1 + _DAT_11271aa50);
  func_0x00010bfd0140();
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + _DAT_11271aa5c);
    func_0x00010bfd0140();
    if ((uVar1 & 1) == 0) {
      uVar2 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      if ((int)uVar3 == 0) {
        uVar1 = *(ulong *)(param_1 + _DAT_11271aa60);
        func_0x00010bfd0140();
        if ((uVar1 & 1) == 0) {
          uVar2 = param_4;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c0720c0();
          if ((int)uVar3 == 0) {
            uVar3 = param_4;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            func_0x00010c0720c0();
            _objc_release(uVar3);
            _objc_release(uVar2);
            if ((int)uVar4 == 0) {
              puStack_58 = PTR_PTR_1126e5c68;
              lStack_60 = param_1;
              _objc_msgSendSuper2(&lStack_60,PTR_s_handleActionWithSender_actionMod_1125d19f8,
                                  param_3,param_4,param_5);
              goto LAB_1050564ec;
            }
          }
          else {
            _objc_release(uVar2);
          }
          func_0x00010be2f880(param_1);
        }
      }
      else {
        func_0x00010be28c60(param_1);
      }
    }
  }
  plVar5 = (long *)0x1;
LAB_1050564ec:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)plVar5;
}



/* Entry: 105056554; end: 1050566c3; -[SCMyProfilePageActionHandler _handleEditName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105056554(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271aa54);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110dc38f8,0,0);
  if ((int)uVar1 == 0) {
    puVar4 = PTR_PTR_1126b4390;
    _objc_alloc(PTR_PTR_1126b4390);
    uVar7 = *(undefined8 *)(param_1 + _DAT_11271aa14);
    uVar5 = *(undefined8 *)(param_1 + _DAT_11271aa18);
    func_0x00010c2928c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c293a00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05e5c0(puVar4,param_2,uVar7,uVar6,*(undefined8 *)(param_1 + _DAT_11271aa1c),
                        *(undefined8 *)(param_1 + _DAT_11271aa20));
    _objc_release(uVar6);
    _objc_release(uVar1);
    _objc_release(uVar5);
    func_0x00010c235bc0(puVar4);
  }
  else {
    puVar4 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar2 = param_1;
    func_0x00010c2800a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40(puVar4,param_2,lVar2,1);
    _objc_release(lVar2);
    puVar3 = PTR_PTR_1126b4388;
    _objc_alloc(PTR_PTR_1126b4388);
    func_0x00010c056640();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11271aa6c),param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1050566c4; end: 1050567e7; -[SCMyProfilePageActionHandler _showRecentMyStoryOnOpen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050566c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271aa2c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271aa14);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c11d5e0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1050567e8; end: 105056953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050567e8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126b11d0;
      _objc_alloc(PTR_PTR_1126b11d0);
      lVar1 = param_2;
      func_0x00010c259cc0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bf3cf60(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010c15f2e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e320(puVar3);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar1);
      puVar6 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      func_0x00010c01b460();
      func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_11271aa50));
      _objc_release(puVar6);
      _objc_release(puVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105056954; end: 105056a6f; -[SCMyProfilePageActionHandler _showRecentPendingSnapProSnapOnOpen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105056954(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271aa2c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271aa34);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c11d940(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105056a70; end: 105056adf;  */

void FUN_105056a70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c089820(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be748c0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105056ae0; end: 105056c1f; -[SCMyProfilePageActionHandler _playRecentPublicStoryWithPendingSnaps:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105056ae0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b11d0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271aa34);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c23f220(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = uVar4;
  func_0x00010bf3cf60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e320(puVar1,param_2,0,uVar3,uVar5,0,0,0);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_11271aa50),param_2,param_1,puVar6,0);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105056c20; end: 105056f0f; -[SCMyProfilePageActionHandler _handleSavePublicStoryForActionModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105056c20(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    func_0x000108f3793c(*(undefined8 *)(param_1 + _DAT_11271aa4c),1);
  }
  else {
    func_0x000108f378c4();
  }
  uVar3 = param_3;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b11d0;
  _objc_opt_class(PTR_PTR_1126b11d0);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  uVar5 = uVar2;
  func_0x00010bf63dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b11d8;
  _objc_opt_class(PTR_PTR_1126b11d8);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar4);
  uVar3 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar7 = param_1;
  func_0x00010c2800a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar4);
  _objc_release(lVar7);
  uVar5 = uVar2;
  func_0x00010c259cc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x000108f51ed0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar8 = PTR_PTR_1126b10b0;
  _objc_alloc(PTR_PTR_1126b10b0);
  uVar5 = uVar2;
  func_0x00010c23f800(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010c242520(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfff0a0(puVar8);
  _objc_release(uVar9);
  _objc_release(uVar5);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11271aa48));
  _objc_initWeak(auStack_68,param_1);
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11271aa54);
  func_0x000108fab1b8();
  if (iVar1 != 0) {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_105056f10;
    puStack_80 = &UNK_110841fb0;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(uVar2);
    uStack_78 = uVar2;
    func_0x000100162d98("APPSTORE",&puStack_98);
    _objc_release(uStack_78);
    _objc_destroyWeak(auStack_70);
  }
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar8);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 105056f10; end: 105056f63;  */

void FUN_105056f10(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259cc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1bf60(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105056f64; end: 1050571b7; -[SCMyProfilePageActionHandler didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105056f64(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_1 + _DAT_11271aa54);
  func_0x000108fab270();
  lVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb7318);
  if ((int)lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb7398);
    if ((int)lVar2 != 0) {
      if ((uVar1 & 1) == 0) {
        func_0x00010bec0cc0(param_1);
      }
      goto LAB_105057074;
    }
    lVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb73b8);
    if (((int)lVar2 != 0) ||
       (lVar2 = param_3,
       func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb7378),
       (int)lVar2 != 0)) {
      if ((uVar1 & 1) == 0) {
        func_0x00010bec3520(param_1);
      }
      goto LAB_105057074;
    }
    lVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb73d8);
    if ((int)lVar2 == 0) goto LAB_105057074;
    puVar7 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    func_0x00010bfd0140(param_1,param_2,param_1,puVar7,0);
  }
  else {
    puVar7 = PTR_PTR_1126b19f8;
    func_0x00010c1164a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_11271aa24);
    func_0x00010bf10b80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1835e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar7);
LAB_105057074:
  lVar6 = *(long *)(param_1 + _DAT_11271aa50);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  lVar2 = lVar6;
  func_0x00010c0720c0();
  _objc_release(lVar6);
  if ((int)uVar5 != 0) {
    lVar2 = param_3;
    func_0x00010bf7dbc0(*(undefined8 *)(param_1 + _DAT_11271aa28),param_2,param_3,param_4,param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar2);
  if (lVar2 != 0) {
    lVar6 = lVar2;
    func_0x00010c24ba60();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010c08fa60();
    _objc_release(lVar6);
    if (lVar8 == 0) {
      lVar6 = lVar2;
      func_0x00010c24b460();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar6;
      func_0x00010c08fa60();
      _objc_release(lVar6);
      if (lVar8 == 0) {
        lVar6 = lVar2;
        func_0x00010bef1560();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar6;
        func_0x00010c08fa60();
        _objc_release(lVar6);
        if (lVar8 == 0) {
          puVar7 = PTR_PTR_1126b43a8;
          _objc_alloc(PTR_PTR_1126b43a8);
          lVar6 = lVar2;
          func_0x00010c292820(lVar2);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar2;
          func_0x00010c15f540(lVar2);
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar2;
          func_0x00010c0dc140(lVar2);
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar2;
          func_0x00010c0dc200(lVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c05c420(puVar7,param_2,lVar6,lVar8,lVar10,lVar11);
          _objc_release(lVar11);
          _objc_release(lVar10);
          _objc_release(lVar8);
          _objc_release(lVar6);
          puVar3 = PTR_PTR_1126b02a8;
          _objc_alloc(PTR_PTR_1126b02a8);
        }
        else {
          puVar7 = PTR_PTR_1126b43a0;
          _objc_alloc(PTR_PTR_1126b43a0);
          lVar6 = lVar2;
          func_0x00010c116a20(lVar2);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar2;
          func_0x00010bef1560(lVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c03ae00(puVar7,param_2,lVar6,lVar8);
          _objc_release(lVar8);
          _objc_release(lVar6);
          puVar3 = PTR_PTR_1126b02a8;
          _objc_alloc(PTR_PTR_1126b02a8);
        }
      }
      else {
        puVar7 = PTR_PTR_1126b4398;
        _objc_alloc(PTR_PTR_1126b4398);
        lVar6 = lVar2;
        func_0x00010c116a20(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar2;
        func_0x00010bef1560(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar2;
        func_0x00010c24b460(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03ae20(puVar7,param_2,lVar6,lVar8,lVar10);
        _objc_release(lVar10);
        _objc_release(lVar8);
        _objc_release(lVar6);
        puVar3 = PTR_PTR_1126b02a8;
        _objc_alloc(PTR_PTR_1126b02a8);
      }
      func_0x00010c01b460();
    }
    else {
      puVar7 = PTR_PTR_1126b10c0;
      _objc_alloc(PTR_PTR_1126b10c0);
      lVar6 = lVar2;
      func_0x00010c24ba60(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar2;
      func_0x00010c24c320(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04d7c0(puVar7,param_2,&PTR____CFConstantStringClassReference_110e43098,lVar6,
                          lVar8,PTR____kCFBooleanTrue_11034ab68);
      _objc_release(lVar8);
      _objc_release(lVar6);
      puVar3 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      puVar9 = PTR_PTR_1126b10c0;
      func_0x00010c100440(PTR_PTR_1126b10c0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01b460(puVar3,param_2,puVar9,puVar7);
      _objc_release(puVar9);
    }
    _objc_release(puVar7);
    func_0x00010bfd0140(param_3,param_2,param_3,puVar3,0);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1050571b8; end: 105057523; -[SCMyProfilePageActionHandler handleNotificationWhenReady:] */

void FUN_1050571b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c24ba60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      lVar1 = param_3;
      func_0x00010c24b460();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c08fa60();
      _objc_release(lVar1);
      if (lVar2 == 0) {
        lVar1 = param_3;
        func_0x00010bef1560();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010c08fa60();
        _objc_release(lVar1);
        if (lVar2 == 0) {
          puVar4 = PTR_PTR_1126b43a8;
          _objc_alloc(PTR_PTR_1126b43a8);
          lVar1 = param_3;
          func_0x00010c292820(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = param_3;
          func_0x00010c15f540(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = param_3;
          func_0x00010c0dc140(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = param_3;
          func_0x00010c0dc200(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c05c420(puVar4,param_2,lVar1,lVar2,lVar5,lVar6);
          _objc_release(lVar6);
          _objc_release(lVar5);
          _objc_release(lVar2);
          _objc_release(lVar1);
          puVar7 = PTR_PTR_1126b02a8;
          _objc_alloc(PTR_PTR_1126b02a8);
        }
        else {
          puVar4 = PTR_PTR_1126b43a0;
          _objc_alloc(PTR_PTR_1126b43a0);
          lVar1 = param_3;
          func_0x00010c116a20(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = param_3;
          func_0x00010bef1560(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c03ae00(puVar4,param_2,lVar1,lVar2);
          _objc_release(lVar2);
          _objc_release(lVar1);
          puVar7 = PTR_PTR_1126b02a8;
          _objc_alloc(PTR_PTR_1126b02a8);
        }
      }
      else {
        puVar4 = PTR_PTR_1126b4398;
        _objc_alloc(PTR_PTR_1126b4398);
        lVar1 = param_3;
        func_0x00010c116a20(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_3;
        func_0x00010bef1560(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_3;
        func_0x00010c24b460(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03ae20(puVar4,param_2,lVar1,lVar2,lVar5);
        _objc_release(lVar5);
        _objc_release(lVar2);
        _objc_release(lVar1);
        puVar7 = PTR_PTR_1126b02a8;
        _objc_alloc(PTR_PTR_1126b02a8);
      }
      func_0x00010c01b460();
    }
    else {
      puVar4 = PTR_PTR_1126b10c0;
      _objc_alloc(PTR_PTR_1126b10c0);
      lVar1 = param_3;
      func_0x00010c24ba60(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c24c320(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04d7c0(puVar4,param_2,&PTR____CFConstantStringClassReference_110e43098,lVar1,
                          lVar2,PTR____kCFBooleanTrue_11034ab68);
      _objc_release(lVar2);
      _objc_release(lVar1);
      puVar7 = PTR_PTR_1126b02a8;
      _objc_alloc(PTR_PTR_1126b02a8);
      puVar3 = PTR_PTR_1126b10c0;
      func_0x00010c100440(PTR_PTR_1126b10c0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01b460(puVar7,param_2,puVar3,puVar4);
      _objc_release(puVar3);
    }
    _objc_release(puVar4);
    func_0x00010bfd0140(param_1,param_2,param_1,puVar7,0);
    _objc_release(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105057524; end: 105057533; -[SCMyProfilePageActionHandler updateOperaDismissBaseView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105057524(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c288210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271aa50),PTR_s_updateOperaDismissBaseView__11267faa8);
  return;
}



/* Entry: 105057534; end: 10505757b; -[SCMyProfilePageActionHandler contentWillDisplay] */

void FUN_105057534(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e5c68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_contentWillDisplay_1125b1150);
  func_0x00010bec3520(param_1);
  return;
}



/* Entry: 10505757c; end: 1050575c3; -[SCMyProfilePageActionHandler contentDidTearDown] */

void FUN_10505757c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e5c68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_contentDidTearDown_1125b0a78);
  func_0x00010bec0cc0(param_1);
  return;
}



/* Entry: 1050575c4; end: 105057823; -[SCMyProfilePageActionHandler _generateStoryLinkAndCopyToClipBoardWithStoryId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050575c4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_2 + _DAT_11271aa1c);
  func_0x00010c2946e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + _DAT_11271aa3c);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfbf8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  iVar1 = (int)*(undefined8 *)(param_2 + _DAT_11271aa54);
  func_0x000108faa914();
  if (iVar1 == 0) {
    puVar5 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
    func_0x00010bfbedc0(PTR__OBJC_CLASS___UIPasteboard_1126b2090);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010beec820(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e7c0(puVar5);
    _objc_release(uVar2);
    uVar6 = *(undefined8 *)(param_2 + _DAT_11271aa40);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126afde0;
    uVar2 = uVar6;
    func_0x00010506bd2c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf54760(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f340(uVar6);
    _objc_release(puVar7);
    _objc_release(uVar2);
    _objc_release(uVar6);
    _CACurrentMediaTime();
    uVar6 = *(undefined8 *)(param_2 + _DAT_11271aa44);
    uVar2 = uVar3;
    func_0x00010beec820(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108f9516c(param_1,0,0x19,0,0,0,uVar6,3,uVar2,0,3,0,6,0,0,0);
    _objc_release(uVar2);
    _objc_release(puVar5);
  }
  else {
    func_0x00010be2f860(param_2);
  }
  _objc_release(uVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105057824; end: 105057a97; -[SCMyProfilePageActionHandler _handleSavePublicStoryAutoCopyLinkViaOPSServiceWithStoryId:url:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105057824(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105057a98;
  puStack_78 = &UNK_110863958;
  uStack_70 = uVar1;
  uStack_68 = param_4;
  _objc_retain(param_4);
  _objc_retain(uVar1);
  func_0x00010bf11fe0(puVar2,param_2,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b2498;
  _objc_alloc(PTR_PTR_1126b2498);
  func_0x00010c037ea0();
  _objc_release(param_3);
  puVar5 = PTR_PTR_1126b0808;
  _objc_alloc(PTR_PTR_1126b0808);
  func_0x00010c051820();
  puVar6 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  func_0x00010c0311a0();
  puVar7 = PTR_PTR_1126b3ee8;
  _objc_alloc(PTR_PTR_1126b3ee8);
  func_0x00010c045aa0();
  uVar8 = *(undefined8 *)(param_1 + _DAT_11271aa38);
  func_0x00010bfa2a40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf57580();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_11271aa70;
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  *(undefined8 *)(param_1 + lVar12) = uVar10;
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar8);
  func_0x00010bfd26e0(*(undefined8 *)(param_1 + lVar12),param_2,0x19);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_4);
  _objc_release(uVar1);
  return;
}



/* Entry: 105057a98; end: 105057b07;  */

void FUN_105057a98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae558;
  puVar1 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  func_0x00010c051840();
  func_0x00010bfe9ca0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105057b08; end: 105057b1f;  */

void FUN_105057b08(void)

{
  return;
}



/* Entry: 105057b20; end: 105057d4b; -[SCMyProfilePageActionHandler _generateScreenshotSharingConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105057b20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  
  lVar11 = (long)_DAT_11271aa1c;
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c2946e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271aa64);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbffa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11271aa14);
  func_0x00010c2923e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf1c0e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar5);
  uVar7 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf1ad00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar7);
  puVar8 = PTR_PTR_1126b43b0;
  _objc_alloc(PTR_PTR_1126b43b0);
  func_0x00010c03b1e0();
  puVar9 = PTR_PTR_1126b43b8;
  _objc_alloc(PTR_PTR_1126b43b8);
  puVar10 = puVar9;
  func_0x00010506bc54();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0538c0(puVar9,param_2,puVar10,uVar3,uVar2,0,puVar8,uVar4,4,0x48,3,0xc,5,9);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105057d4c; end: 105057da7; -[SCMyProfilePageActionHandler _startObservingScreenCapture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105057d4c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271aa64);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24fa60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105057da8; end: 105057de3; -[SCMyProfilePageActionHandler _stopObservingScreenCapture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105057da8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271aa64);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2564e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105057de4; end: 105057e3b; -[SCMyProfilePageActionHandler editDisplayNameDismissed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105057de4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271aa6c;
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



/* Entry: 105057e3c; end: 105057e93; -[SCMyProfilePageActionHandler editDisplayNameSavePressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105057e3c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271aa6c;
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



/* Entry: 105057e94; end: 105057ebb; -[SCMyProfilePageActionHandler didCompleteSaveStoryScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105057e94(long param_1)

{
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + _DAT_11271aa48));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105057ebc; end: 105057ec3; -[SCMyProfilePageActionHandler handleShareDestination:standardExternalContentShareScope:] */

undefined8 FUN_105057ebc(void)

{
  return 0;
}



/* Entry: 105057ec4; end: 105057ec7; -[SCMyProfilePageActionHandler shareSheetDismissedWithShareDestination:] */

void FUN_105057ec4(void)

{
  return;
}



/* Entry: 105057ec8; end: 105058067; -[SCMyProfilePageActionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105057ec8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271aa58,0);
  _objc_storeStrong(param_1 + _DAT_11271aa44,0);
  _objc_storeStrong(param_1 + _DAT_11271aa40,0);
  _objc_storeStrong(param_1 + _DAT_11271aa3c,0);
  _objc_storeStrong(param_1 + _DAT_11271aa4c,0);
  _objc_storeStrong(param_1 + _DAT_11271aa48,0);
  _objc_storeStrong(param_1 + _DAT_11271aa70,0);
  _objc_storeStrong(param_1 + _DAT_11271aa38,0);
  _objc_storeStrong(param_1 + _DAT_11271aa34,0);
  _objc_storeStrong(param_1 + _DAT_11271aa30,0);
  _objc_storeStrong(param_1 + _DAT_11271aa2c,0);
  _objc_storeStrong(param_1 + _DAT_11271aa54,0);
  _objc_storeStrong(param_1 + _DAT_11271aa6c,0);
  _objc_storeStrong(param_1 + _DAT_11271aa68,0);
  _objc_storeStrong(param_1 + _DAT_11271aa64,0);
  _objc_storeStrong(param_1 + _DAT_11271aa24,0);
  _objc_storeStrong(param_1 + _DAT_11271aa20,0);
  _objc_storeStrong(param_1 + _DAT_11271aa1c,0);
  _objc_storeStrong(param_1 + _DAT_11271aa18,0);
  _objc_storeStrong(param_1 + _DAT_11271aa14,0);
  _objc_storeStrong(param_1 + _DAT_11271aa60,0);
  _objc_storeStrong(param_1 + _DAT_11271aa5c,0);
  _objc_storeStrong(param_1 + _DAT_11271aa50,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271aa28,0);
  return;
}



/* Entry: 105058068; end: 10505811f; -[SCMyProfileEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105058068(double param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  puVar2 = puVar1;
  func_0x00010bf5e5e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  *(double *)(param_2 + _DAT_11271aa78) = param_1 * 1000.0;
  _objc_release(puVar2);
  _objc_release(puVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105058120;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  return;
}



/* Entry: 105058120; end: 105058127;  */

void FUN_105058120(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf18750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_beginOnMainThread_1125a3b78);
  return;
}



/* Entry: 105058128; end: 1050581a3; -[SCMyProfileEntryPoint dealloc] */

void FUN_105058128(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  puVar2 = puVar1;
  func_0x00010bf5e5e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puStack_38 = PTR_PTR_1126e5c70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1050581a4; end: 10505821f; -[SCMyProfileEntryPoint beginOnMainThread] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050581a4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010be78f40();
  lVar1 = param_1 + _DAT_11271aa80;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000108fab270();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7ca90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentMyProfile3_11257cc40);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7caf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentMyProfileOnMainThread_11257cc58);
  return;
}



/* Entry: 105058220; end: 1050583fb; -[SCMyProfileEntryPoint _prepareProfileSessionIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105058220(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = (long)_DAT_11271aa7c;
  if (*(long *)(param_1 + lVar6) == 0) {
    lVar7 = param_1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(long *)(param_1 + lVar6) = lVar7;
    _objc_release(uVar5);
    lVar6 = param_1 + _DAT_11271aa84;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010c0f98e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + _DAT_11271aa88);
    *(long *)(param_1 + _DAT_11271aa88) = lVar3;
    _objc_release(uVar5);
    _objc_release(lVar2);
    _objc_release(lVar7);
    _objc_release(lVar6);
    lVar7 = (long)_DAT_11271aa80;
    lVar6 = param_1 + lVar7;
    _objc_loadWeakRetained();
    lVar2 = lVar6;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f440();
    *(char *)(param_1 + _DAT_11271aa8c) = (char)lVar3;
    _objc_release(lVar2);
    _objc_release(lVar6);
    lVar6 = param_1 + _DAT_11271aa90;
    _objc_loadWeakRetained();
    lVar2 = lVar6;
    func_0x00010bf1c460();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf5e220();
    *(long *)(param_1 + _DAT_11271aa94) = lVar4;
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar6);
    lVar7 = param_1 + lVar7;
    _objc_loadWeakRetained();
    lVar6 = lVar7;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010c067f00();
    _objc_release(lVar6);
    _objc_release(lVar7);
    uVar1 = 2;
    if ((int)lVar2 != 2) {
      uVar1 = (ulong)((int)lVar2 == 1);
    }
    *(ulong *)(param_1 + _DAT_11271aa98) = uVar1;
  }
  return;
}



/* Entry: 1050583fc; end: 105058467; -[SCMyProfileEntryPoint _setupABValues] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050583fc(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_11271aa80;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000108fab140();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1b2250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b4160,PTR_s_setIsLayoutOptimisationsEnabled__11264a2b8,0 < lVar2);
  return;
}



/* Entry: 105058468; end: 1050588eb; -[SCMyProfileEntryPoint _presentMyProfileOnMainThread] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105058468(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar9 = param_1;
  func_0x00010beaa520();
  func_0x00010b83741c();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11271aa9c);
  *(long *)(param_1 + _DAT_11271aa9c) = lVar9;
  _objc_release(uVar5);
  lVar11 = (long)_DAT_11271aaa0;
  lVar9 = param_1 + lVar11;
  _objc_loadWeakRetained();
  lVar7 = lVar9;
  func_0x00010bf668c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b0320;
  func_0x00010c0cf9c0(PTR_PTR_1126b0320);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2b5c20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2b52c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac500();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0cfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_11271aaa4;
  uVar5 = *(undefined8 *)(param_1 + lVar12);
  *(long *)(param_1 + lVar12) = lVar8;
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(lVar7);
  _objc_release(lVar9);
  lVar9 = param_1;
  func_0x00010bdf1da0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_11271aaa8;
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  *(long *)(param_1 + lVar7) = lVar9;
  _objc_release(uVar5);
  func_0x00010c219b20(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c1c8b80(*(undefined8 *)(param_1 + lVar7));
  lVar8 = *(long *)(param_1 + lVar7);
  _objc_retain(lVar8);
  uVar5 = *(undefined8 *)(param_1 + lVar12);
  _objc_retain(uVar5);
  puVar1 = PTR_PTR_1126b43c0;
  lVar9 = param_1 + _DAT_11271aa80;
  _objc_loadWeakRetained(lVar9);
  func_0x00010c083aa0();
  _objc_release(lVar9);
  lVar9 = param_1 + lVar11;
  _objc_loadWeakRetained();
  lVar7 = lVar9;
  func_0x00010bf4b2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar9);
  if (((ulong)puVar1 & 1) != 0) {
    if (lVar7 == 0) {
      lVar9 = param_1 + lVar11;
      _objc_loadWeakRetained();
      lVar7 = lVar9;
      func_0x00010c27ece0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = (long)_DAT_11271aaac;
      lVar12 = *(long *)(param_1 + lVar10);
      *(long *)(param_1 + lVar10) = lVar7;
    }
    else {
      puVar1 = PTR_PTR_1126aead8;
      _objc_alloc();
      lVar9 = param_1 + lVar11;
      _objc_loadWeakRetained(lVar9);
      lVar12 = lVar9;
      func_0x00010bf4b2e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1 + lVar11;
      _objc_loadWeakRetained(lVar7);
      func_0x00010bf034a0();
      func_0x00010c038f40();
      lVar10 = (long)_DAT_11271aaac;
      uVar6 = *(undefined8 *)(param_1 + lVar10);
      *(undefined **)(param_1 + lVar10) = puVar1;
      _objc_release(uVar6);
      _objc_release(lVar7);
    }
    _objc_release(lVar12);
    _objc_release(lVar9);
    lVar9 = *(long *)(param_1 + lVar10);
    _objc_retain(lVar9);
    lVar7 = lVar8;
    FUN_1050588ec();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 != 0) {
      lVar11 = param_1 + lVar11;
      _objc_loadWeakRetained(lVar11);
      func_0x00010c0797a0();
      func_0x00010c1b3200(lVar7);
      _objc_release(lVar11);
    }
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1050589c0;
    puStack_88 = &UNK_11084c4a0;
    uStack_80 = uVar5;
    lStack_78 = lVar8;
    lStack_70 = param_1;
    lStack_68 = lVar9;
    func_0x000100162d98("APPSTORE",&puStack_a0);
    _objc_release(lVar7);
    goto LAB_105058880;
  }
  if (lVar7 == 0) {
    if (*(long *)(param_1 + lVar12) == 0) {
      lVar9 = param_1 + lVar11;
      _objc_loadWeakRetained();
      lVar7 = lVar9;
      func_0x00010c27ece0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + _DAT_11271aaac);
      *(long *)(param_1 + _DAT_11271aaac) = lVar7;
      _objc_release(uVar6);
      goto LAB_10505873c;
    }
    func_0x00010c10ed60(uVar5);
    func_0x00010c126960(uVar5);
  }
  else {
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc();
    lVar9 = param_1 + lVar11;
    _objc_loadWeakRetained(lVar9);
    lVar12 = lVar9;
    func_0x00010bf4b2e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + lVar11;
    _objc_loadWeakRetained(lVar7);
    func_0x00010bf034a0();
    func_0x00010c038f40();
    uVar6 = *(undefined8 *)(param_1 + _DAT_11271aaac);
    *(undefined **)(param_1 + _DAT_11271aaac) = puVar1;
    _objc_release(uVar6);
    _objc_release(lVar7);
    _objc_release(lVar12);
LAB_10505873c:
    _objc_release(lVar9);
  }
  lVar9 = lVar8;
  FUN_1050588ec();
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 != 0) {
    lVar11 = param_1 + lVar11;
    _objc_loadWeakRetained(lVar11);
    func_0x00010c0797a0();
    func_0x00010c1b3200(lVar9);
    _objc_release(lVar11);
  }
  func_0x00010bf0c980(*(undefined8 *)(param_1 + _DAT_11271aaac));
LAB_105058880:
  _objc_release(lVar9);
  _objc_release(uVar5);
  _objc_release(lVar8);
  return;
}



/* Entry: 1050588ec; end: 1050589bf;  */

void FUN_1050588ec(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  _objc_retain(param_1);
  puVar1 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_opt_class(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  uVar3 = param_1;
  if ((uVar2 & 1) != 0) {
    func_0x00010c275140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_retain(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_opt_class(PTR__OBJC_CLASS___UIViewController_1126af898);
  uVar2 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar4 = uVar3;
    func_0x00010010fab4(uVar3,PTR_DAT_1126a4ef8);
    uVar2 = uVar3;
    if ((int)uVar4 == 0) {
      uVar2 = 0;
    }
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1050589c0; end: 105058a07;  */

void FUN_1050589c0(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010c10ed60(*(long *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c126970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_registerLifecycleObserver__112627478,
               *(undefined8 *)(param_1 + 0x30));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_attachUI__1125a0c08,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105058a08; end: 105058c9f; -[SCMyProfileEntryPoint _presentMyProfile3] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105058a08(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar10 = (long)_DAT_11271aaa0;
  lVar8 = param_1 + lVar10;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bf668c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b0320;
  func_0x00010c0cf9c0(PTR_PTR_1126b0320);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2b5c20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2b52c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac500();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar9;
  func_0x00010c0cfa00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(lVar9);
  _objc_release(lVar8);
  lVar8 = (long)_DAT_11271aaa4;
  _objc_retain(lVar5);
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  *(long *)(param_1 + lVar8) = lVar5;
  _objc_release(uVar6);
  lVar8 = param_1 + lVar10;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bf4b2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar8);
  if (lVar9 == 0) {
    if (lVar5 != 0) {
      lVar9 = (long)_DAT_11271aaac;
      goto LAB_105058bc0;
    }
    lVar8 = param_1 + lVar10;
    _objc_loadWeakRetained();
    lVar10 = lVar8;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_11271aaac;
    uVar6 = *(undefined8 *)(param_1 + lVar9);
    *(long *)(param_1 + lVar9) = lVar10;
    _objc_release(uVar6);
  }
  else {
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc();
    lVar8 = param_1 + lVar10;
    _objc_loadWeakRetained(lVar8);
    lVar7 = lVar8;
    func_0x00010bf4b2e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1 + lVar10;
    _objc_loadWeakRetained(lVar10);
    func_0x00010bf034a0();
    func_0x00010c038f40();
    lVar9 = (long)_DAT_11271aaac;
    uVar6 = *(undefined8 *)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar1;
    _objc_release(uVar6);
    _objc_release(lVar10);
    _objc_release(lVar7);
  }
  _objc_release(lVar8);
LAB_105058bc0:
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  _objc_retain(uVar6);
  _objc_initWeak(auStack_68,param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105058ca0;
  puStack_80 = &UNK_110841fb0;
  _objc_copyWeak(auStack_70,auStack_68);
  uStack_78 = uVar6;
  func_0x000100162d98("APPSTORE",&puStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar6);
  _objc_release(lVar5);
  return;
}



/* Entry: 105058ca0; end: 105058cd3;  */

void FUN_105058ca0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7db40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105058cd4; end: 105058ddf; -[SCMyProfileEntryPoint _profile3OnCreateOptionRawValueFromOpeningData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_105058cd4(long param_1)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_11271aaa0;
  uVar2 = param_1 + lVar7;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010c236260();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    lVar4 = param_1 + lVar7;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c1165c0();
    _objc_release(lVar4);
    if (lVar5 == 1) {
      ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bea38;
    }
    else {
      lVar7 = param_1 + lVar7;
      _objc_loadWeakRetained();
      lVar4 = lVar7;
      func_0x00010c1165c0();
      _objc_release(lVar7);
      if (lVar4 == 2) {
        ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bea50;
      }
      else {
        func_0x00010c0e9e40();
        _objc_retainAutoreleasedReturnValue();
        if (param_1 == 0) {
          ppuVar6 = (undefined **)0x0;
        }
        else {
          lVar7 = param_1;
          func_0x00010c0f1180();
          ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bea80;
          if (lVar7 != 0xc) {
            ppuVar1 = (undefined **)0x0;
          }
          ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bea68;
          if (lVar7 != 0x1a) {
            ppuVar6 = ppuVar1;
          }
        }
        _objc_release(param_1);
      }
    }
  }
  else {
    ppuVar6 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bea20;
  }
  return ppuVar6;
}



/* Entry: 105058de0; end: 105059183; -[SCMyProfileEntryPoint _presentProfile3WithAttachedUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105058de0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
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
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  lVar1 = param_1;
  func_0x00010be82c20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b43c8;
  _objc_alloc();
  lVar3 = param_1 + _DAT_11271aa80;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11271aab0;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + _DAT_11271aab4);
  lVar7 = param_1 + _DAT_11271aab8;
  _objc_loadWeakRetained();
  uVar19 = *(undefined8 *)(param_1 + _DAT_11271aabc);
  uVar20 = *(undefined8 *)(param_1 + _DAT_11271aac0);
  lVar8 = param_1 + _DAT_11271aac4;
  _objc_loadWeakRetained();
  lVar9 = param_1 + _DAT_11271aac8;
  _objc_loadWeakRetained();
  lVar21 = (long)_DAT_11271aaa0;
  lVar10 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bf4a500();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bf4a560();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + _DAT_11271aacc);
  lVar14 = param_1 + _DAT_11271aad0;
  _objc_loadWeakRetained();
  uVar23 = *(undefined8 *)(param_1 + _DAT_11271aad4);
  uVar22 = *(undefined8 *)(param_1 + _DAT_11271aad8);
  lVar15 = param_1 + _DAT_11271aadc;
  _objc_loadWeakRetained();
  func_0x00010bffeca0(puVar2,param_2,lVar4,lVar6,uVar18,lVar7,uVar19,uVar20,lVar8,lVar9,lVar11,
                      lVar13,uVar24,lVar14,uVar23,uVar22,lVar15,
                      *(undefined8 *)(param_1 + _DAT_11271aae0));
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
  uVar18 = *(undefined8 *)(param_1 + _DAT_11271aae4);
  *(undefined **)(param_1 + _DAT_11271aae4) = puVar2;
  _objc_retain();
  _objc_release(uVar18);
  puVar16 = PTR_PTR_1126b43d0;
  _objc_alloc();
  lVar3 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar8 = lVar3;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar9 = lVar5;
  func_0x00010bf4b2e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar10 = lVar7;
  func_0x00010bf668c0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR_PTR_1126b43d8;
  _objc_alloc(PTR_PTR_1126b43d8);
  func_0x00010c0104a0();
  uVar19 = *(undefined8 *)(param_1 + _DAT_11271aa78);
  uVar18 = *(undefined8 *)(param_1 + _DAT_11271aa7c);
  lVar21 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar12 = lVar21;
  func_0x00010c1164c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4920(uVar19,puVar16,param_2,lVar8,lVar9,lVar10,param_1,param_1,puVar17,lVar1,uVar18
                      ,lVar12,puVar2);
  _objc_release(lVar12);
  _objc_release(lVar21);
  _objc_release(puVar17);
  _objc_release(lVar10);
  _objc_release(lVar7);
  _objc_release(lVar9);
  _objc_release(lVar5);
  _objc_release(lVar8);
  _objc_release(lVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11271aae8),param_2,puVar16);
  _objc_release(puVar2);
  _objc_release(puVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105059184; end: 1050592a7; -[SCMyProfileEntryPoint _createPresentedViewControllerWithDeckContainer:] */

void FUN_105059184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf54540(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c2294e0(param_1,param_2,uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf580c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf59c80(param_1,param_2,uVar1,uVar2,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c2296c0(param_1,param_2,uVar1);
  uVar5 = param_1;
  func_0x00010c0e9e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c228f20(param_1,param_2,uVar4,uVar1,uVar5);
  _objc_release(uVar5);
  func_0x00010c2bd640(param_1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1050592a8; end: 105059d67; -[SCMyProfileEntryPoint createActionHandlerWithDeckContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050592a8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
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
  
  lVar81 = (long)_DAT_11271aaec;
  lVar1 = param_1 + lVar81;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = lVar3;
  func_0x00010010fab4(lVar3,PTR_DAT_1126a4e78);
  lVar1 = lVar3;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain();
  _objc_release(lVar3);
  puVar4 = PTR_PTR_1126b43e0;
  _objc_alloc();
  lVar81 = param_1 + lVar81;
  _objc_loadWeakRetained();
  lVar5 = lVar81;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c24e460();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_11271aab0;
  _objc_loadWeakRetained();
  lVar8 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar76 = (long)_DAT_11271aaf0;
  lVar3 = param_1 + lVar76;
  _objc_loadWeakRetained();
  lVar9 = lVar3;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  lVar80 = (long)_DAT_11271aaf4;
  lVar10 = param_1 + lVar80;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c0d4b40();
  _objc_retainAutoreleasedReturnValue();
  lVar76 = param_1 + lVar76;
  _objc_loadWeakRetained();
  lVar12 = lVar76;
  func_0x00010c0ff720();
  _objc_retainAutoreleasedReturnValue();
  lVar80 = param_1 + lVar80;
  _objc_loadWeakRetained();
  lVar13 = lVar80;
  func_0x00010c12a480();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_11271aaf8;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_11271aa80;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_11271ab28;
  _objc_loadWeakRetained();
  lVar19 = param_1 + _DAT_11271ab2c;
  _objc_loadWeakRetained();
  lVar20 = param_1 + _DAT_11271ab30;
  _objc_loadWeakRetained();
  lVar21 = param_1 + _DAT_11271ab34;
  _objc_loadWeakRetained();
  lVar22 = param_1 + _DAT_11271ab38;
  _objc_loadWeakRetained();
  lVar23 = param_1 + _DAT_11271ab3c;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010c151a20();
  _objc_retainAutoreleasedReturnValue();
  lVar77 = (long)_DAT_11271ab40;
  lVar25 = param_1 + lVar77;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010befc3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + _DAT_11271ac54;
  _objc_loadWeakRetained();
  lVar77 = param_1 + lVar77;
  _objc_loadWeakRetained();
  lVar28 = lVar77;
  func_0x00010bf36100();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  FUN_105059d68();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1 + _DAT_11271ab44;
  _objc_loadWeakRetained();
  lVar31 = lVar30;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1 + _DAT_11271ab48;
  _objc_loadWeakRetained();
  lVar33 = lVar32;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1 + _DAT_11271ab4c;
  _objc_loadWeakRetained();
  lVar35 = lVar34;
  func_0x00010bf9e260();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1 + _DAT_11271ab54;
  _objc_loadWeakRetained();
  lVar37 = lVar36;
  func_0x00010c14a6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_1 + _DAT_11271ab58;
  _objc_loadWeakRetained();
  lVar43 = (long)_DAT_11271ab60;
  lVar39 = param_1 + lVar43;
  _objc_loadWeakRetained();
  lVar40 = lVar39;
  func_0x00010c106840();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1 + lVar43;
  _objc_loadWeakRetained();
  lVar42 = lVar41;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_1 + lVar43;
  _objc_loadWeakRetained();
  lVar44 = lVar43;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = param_1 + _DAT_11271ab70;
  _objc_loadWeakRetained();
  lVar46 = lVar45;
  func_0x00010c2591e0();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = param_1 + _DAT_11271ab74;
  _objc_loadWeakRetained();
  lVar48 = lVar47;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = param_1 + _DAT_11271ab78;
  _objc_loadWeakRetained();
  lVar50 = lVar49;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = param_1 + _DAT_11271ab80;
  _objc_loadWeakRetained();
  lVar52 = lVar51;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = param_1 + _DAT_11271ab84;
  _objc_loadWeakRetained();
  lVar54 = lVar53;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  lVar78 = (long)_DAT_11271aaa0;
  lVar55 = param_1 + lVar78;
  _objc_loadWeakRetained();
  func_0x00010c239820();
  lVar78 = param_1 + lVar78;
  _objc_loadWeakRetained();
  func_0x00010c239800();
  lVar56 = param_1 + _DAT_11271ab88;
  _objc_loadWeakRetained();
  lVar57 = lVar56;
  func_0x00010c0ee220();
  _objc_retainAutoreleasedReturnValue();
  lVar58 = param_1 + _DAT_11271ab8c;
  _objc_loadWeakRetained();
  lVar59 = lVar58;
  func_0x00010c0dc400();
  _objc_retainAutoreleasedReturnValue();
  lVar60 = param_1 + _DAT_11271ab90;
  _objc_loadWeakRetained();
  lVar79 = (long)_DAT_11271ab94;
  lVar61 = param_1 + lVar79;
  _objc_loadWeakRetained();
  lVar62 = lVar61;
  func_0x00010c24c220();
  _objc_retainAutoreleasedReturnValue();
  lVar79 = param_1 + lVar79;
  _objc_loadWeakRetained();
  lVar63 = lVar79;
  func_0x00010c24ba80();
  _objc_retainAutoreleasedReturnValue();
  lVar64 = param_1 + _DAT_11271ab9c;
  _objc_loadWeakRetained();
  lVar65 = param_1 + _DAT_11271aba0;
  _objc_loadWeakRetained();
  lVar66 = lVar65;
  func_0x00010c0ebe80();
  _objc_retainAutoreleasedReturnValue();
  lVar67 = param_1 + _DAT_11271aba4;
  _objc_loadWeakRetained();
  lVar68 = lVar67;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  lVar69 = param_1 + _DAT_11271aba8;
  _objc_loadWeakRetained();
  lVar70 = lVar69;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  lVar71 = param_1 + _DAT_11271abac;
  _objc_loadWeakRetained();
  lVar72 = lVar71;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar73 = param_1 + _DAT_11271ac64;
  _objc_loadWeakRetained();
  lVar74 = param_1 + _DAT_11271abb4;
  _objc_loadWeakRetained();
  lVar75 = lVar74;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11271abb8;
  _objc_loadWeakRetained();
  func_0x00010c02e8a0();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(lVar75);
  _objc_release(lVar74);
  _objc_release(lVar73);
  _objc_release(lVar72);
  _objc_release(lVar71);
  _objc_release(lVar70);
  _objc_release(lVar69);
  _objc_release(lVar68);
  _objc_release(lVar67);
  _objc_release(lVar66);
  _objc_release(lVar65);
  _objc_release(lVar64);
  _objc_release(lVar63);
  _objc_release(lVar79);
  _objc_release(lVar62);
  _objc_release(lVar61);
  _objc_release(lVar60);
  _objc_release(lVar59);
  _objc_release(lVar58);
  _objc_release(lVar57);
  _objc_release(lVar56);
  _objc_release(lVar78);
  _objc_release(lVar55);
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
  _objc_release(lVar77);
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
  _objc_release(lVar80);
  _objc_release(lVar12);
  _objc_release(lVar76);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar81);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105059d68; end: 105059d8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105059d68(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11271ac68);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105059d8c; end: 105059f73; -[SCMyProfileEntryPoint setupSectionExposerWithActionHandler:deckContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105059d8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be78f40(param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271aa7c);
  func_0x00010bf51e00();
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_58,param_1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271aa74);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105059f74;
  puStack_78 = &UNK_1108641d8;
  _objc_retain(param_3);
  uStack_70 = param_3;
  _objc_retain(param_4);
  uStack_68 = param_4;
  _objc_retain(uVar1);
  uStack_60 = uVar1;
  _objc_copyWeak(auStack_98,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(uVar1);
  _objc_retain(puVar2);
  func_0x00010bf9d5c0(uVar3);
  _objc_retain(puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_98);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105059f74; end: 10505a007;  */

void FUN_105059f74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b43e8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b41b8;
  func_0x00010c2bd5e0(PTR_PTR_1126b41b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c037480(puVar1);
  _objc_release(param_2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10505a008; end: 10505a14f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10505a008(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  func_0x00010c0d3c80(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b43f0;
    _objc_alloc(PTR_PTR_1126b43f0);
    lVar3 = lVar1 + _DAT_11271aaa0;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bfe2700();
    func_0x00010c032e40(puVar2);
    _objc_release(lVar3);
    lVar3 = lVar1 + _DAT_11271ac38;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010bf21f80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c101e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    uVar6 = *(undefined8 *)(lVar1 + _DAT_11271abbc);
    *(long *)(lVar1 + _DAT_11271abbc) = lVar5;
    _objc_retain(lVar5);
    _objc_release(uVar6);
    func_0x00010befa160(param_2);
    _objc_release(lVar5);
    _objc_release(puVar2);
  }
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x38));
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10505a150; end: 10505a513; -[SCMyProfileEntryPoint createProfileManagementValdiViewProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10505a150(long param_1)

{
  ulong uVar1;
  ulong uVar2;
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
  undefined *puVar20;
  long lVar21;
  
  uVar1 = param_1 + _DAT_11271aa80;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar8 = param_1 + _DAT_11271abc0;
  lVar3 = lVar8;
  _objc_loadWeakRetained();
  if (lVar3 == 0) {
    uVar1 = uVar2;
    func_0x000108fab17c();
    if ((uVar1 & 1) == 0) {
      puVar20 = (undefined *)0x0;
      goto LAB_10505a4e0;
    }
  }
  else {
    _objc_release();
  }
  lVar21 = (long)_DAT_11271ab60;
  lVar3 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar20 = PTR_PTR_1126b43f8;
  _objc_alloc();
  lVar3 = param_1 + _DAT_11271aab0;
  _objc_loadWeakRetained();
  lVar7 = lVar3;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_loadWeakRetained();
  lVar4 = param_1 + _DAT_11271abc4;
  _objc_loadWeakRetained();
  lVar5 = param_1 + _DAT_11271ab80;
  _objc_loadWeakRetained();
  lVar9 = lVar5;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar10 = lVar21;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  FUN_105059d68();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11271abcc;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c2802a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_11271ab40;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010befc3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_11271abe4;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bf43140();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_11271abe8;
  _objc_loadWeakRetained();
  param_1 = param_1 + _DAT_11271abf0;
  _objc_loadWeakRetained();
  lVar19 = param_1;
  func_0x00010bfb9460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05e320(puVar20);
  _objc_release(lVar19);
  _objc_release(param_1);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar21);
  _objc_release(lVar9);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar6);
LAB_10505a4e0:
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return;
}



/* Entry: 10505a514; end: 10505a8a3; -[SCMyProfileEntryPoint createUnifiedProfileViewControllerWithActionHandler:sectionsPromise:deckContainer:profileManagementComposerViewProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10505a514(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar12 = (long)_DAT_11271abf4;
  lVar1 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c141800();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_11271aaa0;
  lVar4 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0e9e80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar11);
  func_0x00010c236260();
  lVar6 = lVar3;
  func_0x00010bf580e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar7 = PTR__OBJC_CLASS___NSObject_1126b1300;
  _objc_opt_new();
  lVar1 = param_1 + _DAT_11271aa80;
  _objc_loadWeakRetained();
  lVar11 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_initWeak(auStack_70,param_1);
  puVar8 = PTR_PTR_1126b41a8;
  _objc_alloc(PTR_PTR_1126b41a8);
  uVar9 = param_4;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_11271abf8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_70);
  lVar12 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar3 = lVar12;
  func_0x00010c289740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11271abfc;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c25e020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11271ac00;
  _objc_loadWeakRetained();
  lVar10 = param_1;
  func_0x00010bf611e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040380(puVar8);
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar12);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uVar9);
  func_0x00010c21b680(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(lVar11);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10505a8a4; end: 10505a8e3;  */

long FUN_10505a8a4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdc94e0();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 10505a8e4; end: 10505ace3; -[SCMyProfileEntryPoint setupSubActionHandlersForActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10505a8e4(long param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  lVar20 = (long)_DAT_11271aaa0;
  _objc_retain(param_3);
  lVar20 = param_1 + lVar20;
  _objc_loadWeakRetained(lVar20);
  func_0x00010bf86380();
  _objc_release(lVar20);
  puVar1 = PTR_PTR_1126b4400;
  _objc_alloc(PTR_PTR_1126b4400);
  lVar20 = param_1 + _DAT_11271aaec;
  _objc_loadWeakRetained(lVar20);
  lVar2 = lVar20;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_11271aab4;
  lVar16 = (long)_DAT_11271aab8;
  uVar23 = *(undefined8 *)(param_1 + lVar17);
  lVar3 = param_1 + lVar16;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c02e840(puVar1,param_2,lVar2,uVar23,lVar3,*(undefined8 *)(param_1 + _DAT_11271ac04));
  func_0x00010befbae0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar20);
  puVar1 = PTR_PTR_1126b4408;
  _objc_alloc(PTR_PTR_1126b4408);
  lVar22 = (long)_DAT_11271ab2c;
  lVar20 = param_1 + lVar22;
  _objc_loadWeakRetained(lVar20);
  func_0x00010c022500(puVar1,param_2,lVar20,*(undefined8 *)(param_1 + _DAT_11271ac08),param_3);
  func_0x00010befbae0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(lVar20);
  puVar1 = PTR_PTR_1126b4410;
  _objc_alloc();
  lVar4 = param_1;
  func_0x00010c24e460();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_11271ab80;
  _objc_loadWeakRetained();
  lVar5 = lVar20;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11271ab34;
  _objc_loadWeakRetained();
  lVar2 = param_1 + _DAT_11271ac0c;
  _objc_loadWeakRetained();
  lVar22 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar6 = param_1 + _DAT_11271ab30;
  _objc_loadWeakRetained();
  lVar7 = param_1 + _DAT_11271abac;
  _objc_loadWeakRetained();
  lVar8 = param_1 + _DAT_11271ac10;
  _objc_loadWeakRetained();
  uVar23 = *(undefined8 *)(param_1 + _DAT_11271ac14);
  lVar9 = param_1 + _DAT_11271ac18;
  _objc_loadWeakRetained();
  lVar21 = (long)_DAT_11271ac1c;
  lVar10 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c0f9c20();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar12 = lVar21;
  func_0x00010c0dccc0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11271ac20;
  _objc_loadWeakRetained();
  lVar14 = param_1 + _DAT_11271ac24;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c0f54a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + _DAT_11271ac28);
  uVar24 = *(undefined8 *)(param_1 + _DAT_11271ab14);
  uVar25 = *(undefined8 *)(param_1 + _DAT_11271ac2c);
  uVar19 = *(undefined8 *)(param_1 + _DAT_11271ac30);
  uVar26 = *(undefined8 *)(param_1 + lVar17);
  lVar16 = param_1 + lVar16;
  _objc_loadWeakRetained();
  param_1 = param_1 + _DAT_11271aa80;
  _objc_loadWeakRetained();
  lVar17 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04b980(puVar1,param_2,lVar4,param_3,lVar5,lVar3,lVar2,lVar22,lVar6,lVar7,lVar8,uVar23
                      ,lVar9,lVar11,lVar12,lVar13,lVar15,uVar18,uVar24,uVar25,uVar19,uVar26,lVar16,
                      lVar17);
  func_0x00010befbae0(param_3,param_2,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(lVar17);
  _objc_release(param_1);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar21);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar22);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(lVar20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 10505ace4; end: 10505aec3; -[SCMyProfileEntryPoint setupLoggingForViewController:actionHandler:openingData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10505ace4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126b41c8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  lVar8 = (long)_DAT_11271aa7c;
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  lVar2 = param_1 + _DAT_11271ac10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + _DAT_11271abac;
  _objc_loadWeakRetained(lVar3);
  lVar4 = param_1 + _DAT_11271ab30;
  _objc_loadWeakRetained(lVar4);
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  lVar8 = param_1 + _DAT_11271ac34;
  _objc_loadWeakRetained();
  lVar5 = lVar8;
  func_0x00010bf148a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03b300(puVar1,param_2,1,uVar6,param_5,lVar2,lVar3,lVar4,uVar7,1);
  _objc_release(param_5);
  _objc_release(lVar5);
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar6 = param_3;
  func_0x00010bf99b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010bf99b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar6);
  func_0x00010bef9980(param_4,param_2,puVar1);
  func_0x00010c1c07e0(param_4,param_2,puVar1);
  _objc_release(param_4);
  func_0x00010c1797c0(*(undefined8 *)(param_1 + _DAT_11271aa9c),param_2,param_3);
  func_0x00010c18b5e0(param_3,param_2,param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10505aec4; end: 10505b04b; -[SCMyProfileEntryPoint setupLoggingForEventAnnouncer:actionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10505aec4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be78f40(param_1);
  puVar1 = PTR_PTR_1126b41c8;
  _objc_alloc();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11271aa7c);
  lVar2 = param_1;
  func_0x00010c0e9e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11271ac10;
  _objc_loadWeakRetained(lVar3);
  lVar4 = param_1 + _DAT_11271abac;
  _objc_loadWeakRetained(lVar4);
  lVar5 = param_1 + _DAT_11271ab30;
  _objc_loadWeakRetained(lVar5);
  param_1 = param_1 + _DAT_11271ac34;
  _objc_loadWeakRetained();
  lVar6 = param_1;
  func_0x00010bf148a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03b300(puVar1,param_2,1,uVar7,lVar2,lVar3,lVar4,lVar5,0,1);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010bef9980(param_3,param_2,puVar1);
  _objc_release(param_3);
  func_0x00010bef9980(param_4,param_2,puVar1);
  func_0x00010c1c07e0(param_4,param_2,puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10505b04c; end: 10505b097; -[SCMyProfileEntryPoint wrapInNavigationController:] */

void FUN_10505b04c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b41d0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0402e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10505b098; end: 10505b1db; -[SCMyProfileEntryPoint openingData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10505b098(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = (undefined *)(param_1 + _DAT_11271aaa0);
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010c0e9e80();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    param_1 = param_1 + _DAT_11271abf8;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010bf5f860();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126afdd8;
    lVar4 = lVar3;
    func_0x00010bfcbb00();
    func_0x00010bfc8740(puVar5,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bfda7c0();
    if ((int)puVar6 == 0) {
      if (puVar5 == (undefined *)0x0) {
        puVar6 = PTR_PTR_1126afdd8;
        func_0x00010bfc8740(PTR_PTR_1126afdd8,param_2,0x1f);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar5);
        puVar6 = puVar5;
      }
    }
    else {
      puVar6 = (undefined *)0x33;
      func_0x00010bc9107c(0x33);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar5);
    puVar5 = puVar6;
    func_0x000107cdc434(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(lVar3);
    _objc_release(param_1);
  }
  else {
    _objc_retain(puVar2);
    puVar5 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10505b1dc; end: 10505b237; -[SCMyProfileEntryPoint _adjustSectionOrder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10505b1dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + _DAT_11271aa98) == 2) {
    lVar2 = 0x32;
    lVar3 = 0x34;
    lVar4 = 0x33;
  }
  else {
    if (*(long *)(param_1 + _DAT_11271aa98) != 1) {
      return param_3;
    }
    lVar2 = 0x2b;
    lVar3 = 0x2e;
    lVar4 = 0x2d;
  }
  lVar1 = param_3;
  if (param_3 == 0x1c) {
    lVar1 = lVar4;
  }
  if (param_3 != 0x1f) {
    lVar3 = lVar1;
  }
  if (param_3 != 0x1b) {
    lVar2 = lVar3;
  }
  return lVar2;
}



/* Entry: 10505b238; end: 10505b377; -[SCMyProfileEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10505b238(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  lVar3 = param_1 + _DAT_11271aaec;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c116f80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b4418;
  func_0x00010bf82f40(PTR_PTR_1126b4418);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(lVar1);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar4 = (long)_DAT_11271aa74;
  lVar3 = *(long *)(param_1 + lVar4);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar4));
  }
  lVar4 = (long)_DAT_11271aae8;
  lVar3 = *(long *)(param_1 + lVar4);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010be025c0(param_1);
  puStack_48 = PTR_PTR_1126e5c70;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10505b378; end: 10505b383; -[SCMyProfileEntryPoint dismissProfileViewController:animated:completionBlock:] */

void FUN_10505b378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be025d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__dismissAnimated_completion__11255e310,param_4,param_5);
  return;
}



/* Entry: 10505b384; end: 10505b57b; -[SCMyProfileEntryPoint _dismissAnimated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10505b384(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_4);
  puVar4 = PTR_PTR_1126afdd8;
  lVar6 = (long)_DAT_11271aaa4;
  if ((*(long *)(param_1 + lVar6) == 0) && (*(long *)(param_1 + _DAT_11271aaac) == 0)) {
    puVar4 = (undefined *)(param_1 + _DAT_11271aaa0);
    _objc_loadWeakRetained(puVar4);
    FUN_10505b57c();
    goto LAB_10505b530;
  }
  func_0x00010bebe660(param_1);
  func_0x00010bfc8740(puVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + _DAT_11271aaa0;
  _objc_loadWeakRetained();
  lVar7 = (long)_DAT_11271aaac;
  lVar5 = *(long *)(param_1 + lVar7);
  if (lVar5 == 0) {
    lVar5 = *(long *)(param_1 + lVar6);
    if (lVar5 != 0) {
      _objc_retain(param_4);
      func_0x00010bf84b00(lVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar6);
      *(undefined8 *)(param_1 + lVar6) = 0;
      _objc_release(uVar2);
      lVar5 = param_4;
      goto LAB_10505b524;
    }
  }
  else {
    _objc_retain(lVar5);
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    *(undefined8 *)(param_1 + lVar7) = 0;
    _objc_release(uVar2);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10505b5fc;
    puStack_70 = &UNK_11084a9e8;
    lStack_68 = lVar5;
    lStack_60 = lVar1;
    _objc_retain(param_4);
    ppuVar3 = &puStack_88;
    lStack_58 = param_4;
    _objc_retainBlock();
    if (param_3 == 0) {
      func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20);
    }
    else {
      (*(code *)ppuVar3[2])(ppuVar3);
    }
    _objc_release(ppuVar3);
    _objc_release(lStack_58);
LAB_10505b524:
    _objc_release(lVar5);
  }
  _objc_release(lVar1);
LAB_10505b530:
  _objc_release(puVar4);
  _objc_release(param_4);
  return;
}



/* Entry: 10505b57c; end: 10505b5fb;  */

void FUN_10505b57c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d48a0();
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



/* Entry: 10505b5fc; end: 10505b67b;  */

void FUN_10505b5fc(long param_1,undefined8 param_2)

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
  pcStack_40 = FUN_10505b67c;
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



/* Entry: 10505b67c; end: 10505b69b;  */

void FUN_10505b67c(long param_1)

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
  func_0x00010c0d48a0();
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



/* Entry: 10505b69c; end: 10505b70b; -[SCMyProfileEntryPoint profileViewAskedLogOnScrollEventsForScrollViewDelegagte:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10505b69c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11271aaa0;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d4820();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10505b70c; end: 10505b743; -[SCMyProfileEntryPoint profileViewControllerMovedToNilParentOrDealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10505b70c(long param_1)

{
  param_1 = param_1 + _DAT_11271aaa0;
  _objc_loadWeakRetained(param_1);
  FUN_10505b57c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10505b744; end: 10505b823; -[SCMyProfileEntryPoint profileViewWillAppearWhilePresenting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10505b744(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_1126a4ef0;
  uVar6 = *(undefined8 *)(param_1 + _DAT_11271aaa8);
  _objc_retain(uVar6);
  uVar3 = uVar6;
  func_0x00010010fab4(uVar6,puVar2);
  uVar1 = uVar6;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  lVar7 = (long)_DAT_11271aaa0;
  lVar4 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0dbb80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd19c0(uVar1);
  _objc_release(uVar1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  param_1 = param_1 + lVar7;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d4920();
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10505b824; end: 10505b99f; -[SCMyProfileEntryPoint profileViewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10505b824(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  uVar1 = param_1 + _DAT_11271aa80;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010b09cd78();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    lVar6 = param_1 + _DAT_11271abf8;
    _objc_loadWeakRetained(lVar6);
    lVar4 = lVar6;
    func_0x00010bf5f860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24fc40();
    _objc_release(lVar4);
    _objc_release(lVar6);
  }
  lVar6 = (long)_DAT_11271aaa0;
  uVar1 = param_1 + lVar6;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    param_1 = param_1 + lVar6;
    _objc_loadWeakRetained(param_1);
    lVar6 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIViewController_1126af898;
    _objc_retain(param_3);
    _objc_opt_class(puVar5);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    uVar1 = param_3;
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    func_0x00010c0d4880(lVar6);
    _objc_release(uVar1);
    _objc_release(lVar6);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10505b9a0; end: 10505ba4f; -[SCMyProfileEntryPoint profileViewDidLoad:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10505b9a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271aa9c);
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



/* Entry: 10505ba50; end: 10505ba53; -[SCMyProfileEntryPoint profileViewWillDisappear:] */

void FUN_10505ba50(void)

{
  return;
}



/* Entry: 10505ba54; end: 10505ba57; -[SCMyProfileEntryPoint profileViewDidDisappearWhileDismissing] */

void FUN_10505ba54(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf74ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didDismiss_1125bac58);
  return;
}


