/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ee83dc; end: 105ee83e7; -[SCMapFriendStoriesPresenter operaPresenterDidFinishDismissing:] */

void FUN_105ee83dc(long param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bddf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanupAfterDismissal_1125556b8);
  return;
}



/* Entry: 105ee83e8; end: 105ee83eb; -[SCMapFriendStoriesPresenter operaPresenterDidTearDown:] */

void FUN_105ee83e8(void)

{
  return;
}



/* Entry: 105ee83ec; end: 105ee83ef; -[SCMapFriendStoriesPresenter operaPresenter:didBeginPlayingPlaylistGroupDataModel:] */

void FUN_105ee83ec(void)

{
  return;
}



/* Entry: 105ee83f0; end: 105ee83f3; -[SCMapFriendStoriesPresenter operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:] */

void FUN_105ee83f0(void)

{
  return;
}



/* Entry: 105ee83f4; end: 105ee840b; -[SCMapFriendStoriesPresenter delegate] */

void FUN_105ee83f4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x120);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ee840c; end: 105ee8417; -[SCMapFriendStoriesPresenter setDelegate:] */

void FUN_105ee840c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x120,param_3);
  return;
}



/* Entry: 105ee8418; end: 105ee85bf; -[SCMapFriendStoriesPresenter .cxx_destruct] */

void FUN_105ee8418(long param_1)

{
  _objc_destroyWeak(param_1 + 0x120);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ee85c0; end: 105ee85e7;  */

void FUN_105ee85c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2814b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_unlockableViewTracker_11267df50);
  return;
}



/* Entry: 105ee85e8; end: 105ee8f97; -[SCMapStoryPresenter initWithUserSession:mapLoggerSession:navigationServices:storiesDataCoordinator:storiesPlaybackDataProvider:myStoriesPlaybackDataProvider:playbackManagementDataProvider:readReceiptCoordinator:storiesMediaCoordinator:myStoriesDataCoordinator:snapViewerDataCoordinator:saveStoryScopeExposer:deleteStorySnapScopeExposer:deleteStorySnapScopeServices:storyShareScopeExposer:friendProfileScopeExposer:myStorySettingsScopeExposer:myStorySettingsScopeServices:standardExternalContentShareScopeExposer:debugViewer:circumstanceEngine:adPluginProvider:mapStoryPlaybackScopeExposer:snapchattersSynchronousDataFetcher:webBrowsingScopeExposer:sharedStorySnapManager:safetyReportScopeExposer:externalLinkSendingService:contextOperaPluginProvider:operaSessionScopeExposer:operaSessionScopeServices:saveFriendStoryOperaPluginProvider:applicationLifecycleEvents:bloopsReportScopeExposer:temporaryFileWriter:notificationOSSettingsRetriever:offPlatformShareServices:spotlightShareSender:spotlightPlatformAnalyticsCreator:remixOperaPluginProvider:musicContentRestrictionServices:networkConnectivityMonitor:userBlizzardLogger:storiesUsageLogger:avatarFactory:pageLauncher:legacyStoryMediaCache:lazyDiscoverFeedEventsController:settingsScopeServices:storyShareScopeServices:lazyDiscoverFeedInteractionHistoryManager:] */

undefined8 *
FUN_105ee85e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
             undefined8 param_53)

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
  puStack_70 = PTR_PTR_1126ede60;
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
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_41;
    _objc_release(uVar2);
    _objc_retain(param_42);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_42;
    _objc_release(uVar2);
    _objc_retain(param_43);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_43;
    _objc_release(uVar2);
    _objc_retain(param_44);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_45;
    _objc_release(uVar2);
    _objc_retain(param_47);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_47;
    _objc_release(uVar2);
    _objc_retain(param_46);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_46;
    _objc_release(uVar2);
    _objc_retain(param_48);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_48;
    _objc_release(uVar2);
    _objc_retain(param_49);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_49;
    _objc_release(uVar2);
    _objc_retain(param_50);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_50;
    _objc_release(uVar2);
    _objc_retain(param_53);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_53;
    _objc_release(uVar2);
    _objc_retain(param_51);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_51;
    _objc_release(uVar2);
    _objc_retain(param_52);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_52;
    _objc_release(uVar2);
  }
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



/* Entry: 105ee8f98; end: 105ee90fb; -[SCMapStoryPresenter presentFriendStoryOnViewController:baseView:person:sourceType:mapStoryType:] */

void FUN_105ee8f98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined **param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar2 = param_5;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c08fa60();
  _objc_release(ppuVar2);
  puVar1 = PTR_PTR_1126afca8;
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110db9c98;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db9c98,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237520(puVar1);
  }
  else {
    ppuVar2 = param_5;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c2923e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    _objc_release(ppuVar2);
    ppuVar2 = param_5;
    func_0x00010c2923e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    if ((int)ppuVar3 == 0) {
      func_0x00010be14da0(param_1);
    }
    else {
      func_0x00010be12c40();
    }
  }
  _objc_release(ppuVar2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ee90fc; end: 105ee9103; -[SCMapStoryPresenter clearTemporarilyCachedData] */

void FUN_105ee90fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3acf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x178),PTR_s_clearCachedMediaNotNeeded_1125ac4e0);
  return;
}



/* Entry: 105ee9104; end: 105ee914f; -[SCMapStoryPresenter dismissStory] */

void FUN_105ee9104(long param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010bf84610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x110),PTR_s_dismissStory_1125beb28);
  return;
}



/* Entry: 105ee9150; end: 105ee919f; -[SCMapStoryPresenter isPresenting] */

bool FUN_105ee9150(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x110);
  func_0x00010c07fce0();
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0xa0);
    func_0x00010c150520(lVar3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 != 0;
    _objc_release();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 105ee91a0; end: 105ee932b; -[SCMapStoryPresenter _fetchMyStoryAndPresentOnViewController:storyId:baseView:sourceType:mapStoryType:] */

void FUN_105ee91a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_68 = param_6;
  uStack_60 = param_7;
  func_0x00010c11d5e0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ee932c; end: 105ee9387;  */

void FUN_105ee932c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be136a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ee9388; end: 105ee959f; -[SCMapStoryPresenter _fetchReadReceiptAndPlayMyStory:viewController:storyId:baseView:sourceType:mapStoryType:] */

void FUN_105ee9388(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  ppuVar2 = param_3;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bf529e0();
  _objc_release(ppuVar2);
  puVar1 = PTR_PTR_1126afca8;
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110db9c98;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db9c98,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237520(puVar1);
  }
  else {
    ppuVar3 = param_3;
    func_0x00010c25b340(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    func_0x000100504554();
    _objc_release(ppuVar3);
    _objc_initWeak(auStack_68,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_68);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_6);
    uStack_78 = param_7;
    uStack_70 = param_8;
    func_0x00010c121840(uVar4);
    _objc_release(uVar4);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(ppuVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ee95a0; end: 105ee95a7;  */

void FUN_105ee95a0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15f2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_serverId_1126356d8);
  return;
}



/* Entry: 105ee95a8; end: 105ee969f;  */

void FUN_105ee95a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105ee96a0;
  puStack_70 = &UNK_1108a0d90;
  _objc_copyWeak(auStack_48,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_68 = uVar1;
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = param_2;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar1;
  _objc_retain(uVar2);
  uStack_38 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = uVar2;
  func_0x000100162d98("APPSTORE",&puStack_88);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 105ee96a0; end: 105ee96db;  */

void FUN_105ee96a0(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7cb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ee96dc; end: 105ee98db; -[SCMapStoryPresenter _presentMyStory:serverIdToViewStates:viewController:baseView:sourceType:mapStoryType:] */

void FUN_105ee96dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c5b48;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c039500(puVar1,*(undefined8 *)(param_1 + 0x168),param_5,*(undefined8 *)(param_1 + 8),
                      *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x118),
                      *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x120),
                      *(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),
                      *(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),
                      *(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xe8),
                      *(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x100),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x108),
                      *(undefined8 *)(param_1 + 0x128),*(undefined8 *)(param_1 + 0x130),
                      *(undefined8 *)(param_1 + 0x138),*(undefined8 *)(param_1 + 0x140),
                      *(undefined8 *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x150),
                      *(undefined8 *)(param_1 + 0x158),*(undefined8 *)(param_1 + 0x168),
                      *(undefined8 *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x170),
                      *(undefined8 *)(param_1 + 0x180),*(undefined8 *)(param_1 + 400),
                      *(undefined8 *)(param_1 + 0x198),*(undefined8 *)(param_1 + 0x1a0),
                      *(undefined8 *)(param_1 + 0x188));
  _objc_release(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x110);
  *(undefined **)(param_1 + 0x110) = puVar1;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x110));
  puVar1 = PTR_PTR_1126c5b50;
  _objc_alloc(PTR_PTR_1126c5b50);
  func_0x00010c15ffa0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c0bac20(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c0285e0(0,0,0,puVar1);
  func_0x00010c10d2c0(*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x90),param_3,
                      param_4,param_6,puVar1,*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),
                      *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                      *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),
                      *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0xa8),
                      *(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0x90),
                      *(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xf0));
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ee98dc; end: 105ee9aa3; -[SCMapStoryPresenter _fetchSummaryInfoAndPresentStoryOnViewController:storyId:baseView:sourceType:mapStoryType:] */

void FUN_105ee98dc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined1 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = param_4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105ee9aa4;
  puStack_a0 = &UNK_1108f57d0;
  _objc_retain(param_4);
  puVar4 = auStack_68;
  uStack_98 = param_4;
  _objc_copyWeak(auStack_80);
  _objc_retain(param_5);
  uStack_90 = param_5;
  uStack_78 = param_6;
  uStack_70 = param_7;
  _objc_retain(param_3);
  lStack_88 = param_3;
  func_0x00010c25b4c0(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(lStack_88);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_80);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  lVar3 = param_3;
  __Unwind_Resume();
  pcStack_c8 = FUN_105ee9aa4;
  uStack_f0 = param_7;
  uStack_e8 = param_5;
  uStack_e0 = param_4;
  lStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_105ee9bb0;
  puStack_130 = &UNK_1108a0d90;
  _objc_retain(puVar4);
  uVar1 = *(undefined8 *)(lVar3 + 0x20);
  puStack_128 = puVar4;
  _objc_retain(uVar1);
  uStack_120 = uVar1;
  _objc_copyWeak(auStack_108,lVar3 + 0x38);
  uVar5 = *(undefined8 *)(lVar3 + 0x28);
  _objc_retain(uVar5);
  uStack_f8 = *(undefined8 *)(lVar3 + 0x48);
  uStack_100 = *(undefined8 *)(lVar3 + 0x40);
  uVar1 = *(undefined8 *)(lVar3 + 0x30);
  uStack_118 = uVar5;
  _objc_retain(uVar1);
  uStack_110 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_148);
  _objc_release(uStack_110);
  _objc_release(uStack_118);
  _objc_destroyWeak(auStack_108);
  _objc_release(uStack_120);
  _objc_release(puStack_128);
  _objc_release(puVar4);
  return;
}



/* Entry: 105ee9aa4; end: 105ee9baf;  */

void FUN_105ee9aa4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105ee9bb0;
  puStack_70 = &UNK_1108a0d90;
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = param_2;
  _objc_retain(uVar1);
  uStack_60 = uVar1;
  _objc_copyWeak(auStack_48,param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_38 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar2;
  _objc_retain(uVar1);
  uStack_50 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_88);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_2);
  return;
}



/* Entry: 105ee9bb0; end: 105ee9c67;  */

void FUN_105ee9bb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0(lVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR_PTR_1126afca8;
  if (lVar2 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110db9c98;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db9c98,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237520(puVar1);
  }
  else {
    ppuVar4 = (undefined **)(param_1 + 0x40);
    _objc_loadWeakRetained(ppuVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7ec80(ppuVar4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return;
}



/* Entry: 105ee9c68; end: 105ee9e0b; -[SCMapStoryPresenter _presentStoryWithSummaryInfo:baseView:sourceType:mapStoryType:viewController:] */

void FUN_105ee9c68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c5b48;
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c039500();
  _objc_release(param_7);
  uVar2 = *(undefined8 *)(param_1 + 0x110);
  *(undefined **)(param_1 + 0x110) = puVar1;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x110));
  puVar1 = PTR_PTR_1126c5b50;
  _objc_alloc(PTR_PTR_1126c5b50);
  func_0x00010c15ffa0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c0bac20(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c0285e0(0,0,0,puVar1);
  func_0x00010c10e680(*(undefined8 *)(param_1 + 0x110));
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ee9e0c; end: 105ee9e43; -[SCMapStoryPresenter friendStoryPresenterDidAppear:] */

void FUN_105ee9e0c(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25a9e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ee9e44; end: 105ee9e7b; -[SCMapStoryPresenter friendStoryPresenterDidDisappear:] */

void FUN_105ee9e44(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25aa00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ee9e7c; end: 105ee9ee3; -[SCMapStoryPresenter mapStoryDidDismiss] */

void FUN_105ee9e7c(long param_1)

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
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25aa00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ee9ee4; end: 105ee9efb; -[SCMapStoryPresenter delegate] */

void FUN_105ee9ee4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ee9efc; end: 105ee9f07; -[SCMapStoryPresenter setDelegate:] */

void FUN_105ee9efc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1a8,param_3);
  return;
}



/* Entry: 105ee9f08; end: 105eea197; -[SCMapStoryPresenter .cxx_destruct] */

void FUN_105ee9f08(long param_1)

{
  _objc_destroyWeak(param_1 + 0x1a8);
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



/* Entry: 105eea198; end: 105eea2c3; -[SCMapTapToPlayResponderProvider mapTapToPlayAnywhereResponderForMapView:mapViewport:presentationDelegate:mapSessionInfoProvider:tapToPlayLogger:mapStoryPlaybackScopeExposer:mapStoryPlaybackScopeServices:mapStoryFetcher:mapStoryMediaFetcher:] */

void FUN_105eea198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c5b58;
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0507a0();
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105eea2c4; end: 105eeb707; -[SCMapViewController initWithUserBlizzardLogger:featureSettingsService:locationProvider:mapPersonLocationsProvider:mapBitmojiAvatarGenerator:bitmojiAvatarBuilderScopeExposer:mapChatPresenter:mapDeepLinkHandler:mapLoggerSession:mapPeopleFriendsProvider:mapProfilePresenter:mapStatusStore:mapStoryPresenter:mapTapToPlayResponderProvider:mapUserPreferences:mapViewLoggerTooltipStateProvider:sharingPreferencesProvider:currentPageTracker:addFriendsScopeExposer:addFriendsScopeServices:circumstanceEngine:mapGestureManager:multiTrayManager:mapInstanceView:storyPlaybackScopeExposer:storyPlaybackScopeServices:userId:options:mapViewLogger:webBrowsingScopeExposer:headerItem:mapStoryFetcher:mapStoryPreviewFetcher:mapStoryMediaFetcher:unifiedGRPCClientFactory:focusViewScopeExposer:groupFocusViewScopeExposer:userLocationPermissionsManager:deviceLocationPermissionsManager:placesBasemapLayer:mapBitmojiTrayScopeServices:mapBitmojiTrayScopeExposer:focusedDropScopeServices:focusedDropScopeExposer:mapViewportItemDestinationHandler:placeDiscoveryScopeExposer:addressSelectionScopeServices:addressSelectionScopeExposer:mapWidgetOnboardingFactoryServices:destinationObservable:placeProfileV2ScopeExposer:tapToPlayLogger:bitmojiLayerManager:shouldRenderBitmojiShadows:pageLauncher:mapInitialViewportGrapheneMetricReporter:reactionAnimationContainerView:homeProfileScopeServices:homeProfileScopeExposer:stateComplianceTakeoverFactoryServices:footerItemConfig:cameraScopeExposer:caasCameraScopeBuilderServices:mapFootstepsTrayFactoryServices:mapMemoriesWorkflowServices:mapScreenshotScopeExposer:mapChromeV2Services:mapFocusCardsFactoryServices:mapInferredSchoolOnboardingFactoryService:shareLocationFlowFactoryServices:musicTopicViewerScopeExposer:musicTopicViewerScopeBuilderServices:externalMusicTrackSavingService:externalMusicNowPlayingService:petPreferencesFetcher:settingsScopeLauncher:settingsScopeServices:mapPlaceProfileFactoryServices:arrivalNotificationsUpsellFactoryService:requestRealTimeLocationFactoryService:ukUnder18ComplianceChecker:mapViewLifecycleBroadcaster:mapDestinationService:customizationTrayFactoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105eea2c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined1 param_56,
             undefined4 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
             undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
             undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
             undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
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
  _objc_retain(param_54);
  _objc_retain(param_55);
  _objc_retain();
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
  _objc_retain(in_stack_00000230);
  _objc_retain(in_stack_00000238);
  _objc_retain(in_stack_00000240);
  _objc_retain(in_stack_00000248);
  _objc_retain(in_stack_00000250);
  _objc_retain(in_stack_00000258);
  _objc_retain(in_stack_00000260);
  _objc_retain(in_stack_00000268);
  puVar1 = PTR_PTR_1126bc310;
  func_0x00010c277640();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR_PTR_1126ede68;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar2 != (undefined8 *)0x0) {
    lVar8 = (long)_DAT_112739fbc;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_3;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_112739fc0;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_4;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_112739fc4;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_5;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_112739fc8;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_6;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_112739fcc;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_7;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_112739fd0;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_8;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_112739fd4;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_9;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_112739fd8;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_10;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_112739fdc;
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_11;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_112739fe0;
    _objc_retain(param_12);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_12;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_112739fe4;
    _objc_retain(param_13);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_13;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_112739fe8;
    _objc_retain(param_14);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_14;
    _objc_release(uVar3);
    lVar10 = (long)_DAT_112739fec;
    _objc_retain(param_15);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar10);
    *(undefined8 *)((long)puVar2 + lVar10) = param_15;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_112739ff0;
    _objc_retain(param_16);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_16;
    _objc_release(uVar3);
    lVar9 = (long)_DAT_112739ff4;
    _objc_retain(param_17);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined8 *)((long)puVar2 + lVar9) = param_17;
    _objc_release(uVar3);
    lVar9 = (long)_DAT_112739ff8;
    _objc_retain(param_18);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined8 *)((long)puVar2 + lVar9) = param_18;
    _objc_release(uVar3);
    lVar9 = (long)_DAT_112739ffc;
    _objc_retain(param_19);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined8 *)((long)puVar2 + lVar9) = param_19;
    _objc_release(uVar3);
    lVar9 = (long)_DAT_11273a000;
    _objc_retain(param_20);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined8 *)((long)puVar2 + lVar9) = param_20;
    _objc_release(uVar3);
    lVar9 = (long)_DAT_11273a004;
    _objc_retain(param_21);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined8 *)((long)puVar2 + lVar9) = param_21;
    _objc_release(uVar3);
    lVar9 = (long)_DAT_11273a008;
    _objc_retain(param_22);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined8 *)((long)puVar2 + lVar9) = param_22;
    _objc_release(uVar3);
    lVar9 = (long)_DAT_11273a00c;
    _objc_retain(param_23);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined8 *)((long)puVar2 + lVar9) = param_23;
    _objc_release(uVar3);
    uVar3 = param_29;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar2 + (long)_DAT_11273a010);
    *(undefined8 *)((long)puVar2 + (long)_DAT_11273a010) = uVar3;
    _objc_release(uVar6);
    lVar9 = (long)_DAT_11273a014;
    _objc_retain(param_24);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined8 *)((long)puVar2 + lVar9) = param_24;
    _objc_release(uVar3);
    lVar9 = (long)_DAT_11273a018;
    _objc_retain(param_25);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined8 *)((long)puVar2 + lVar9) = param_25;
    _objc_release(uVar3);
    lVar9 = (long)_DAT_11273a01c;
    _objc_retain(param_26);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined8 *)((long)puVar2 + lVar9) = param_26;
    _objc_release(uVar3);
    lVar9 = (long)_DAT_11273a020;
    _objc_retain(param_30);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined8 *)((long)puVar2 + lVar9) = param_30;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126c1838;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11273a024);
    *(undefined **)((long)puVar2 + (long)_DAT_11273a024) = puVar4;
    _objc_release(uVar3);
    lVar9 = (long)_DAT_11273a028;
    _objc_retain(param_27);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined8 *)((long)puVar2 + lVar9) = param_27;
    _objc_release(uVar3);
    lVar9 = (long)_DAT_11273a02c;
    _objc_retain(param_28);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined8 *)((long)puVar2 + lVar9) = param_28;
    _objc_release(uVar3);
    lVar9 = (long)_DAT_11273a030;
    _objc_retain(param_31);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined8 *)((long)puVar2 + lVar9) = param_31;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a034;
    _objc_retain(param_32);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = param_32;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a038;
    _objc_retain(param_33);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = param_33;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a03c;
    _objc_retain(param_34);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = param_34;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a040;
    _objc_retain(param_35);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = param_35;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a044;
    _objc_retain(param_36);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = param_36;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a048;
    _objc_retain(param_38);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = param_38;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a04c;
    _objc_retain(param_39);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = param_39;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a050;
    _objc_retain(param_40);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = param_40;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a054;
    _objc_retain(param_41);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = param_41;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a058;
    _objc_retain(param_42);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = param_42;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a05c;
    _objc_retain(param_43);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = param_43;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a060;
    _objc_retain(param_44);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = param_44;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a064;
    _objc_retain(param_45);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = param_45;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a068;
    _objc_retain(param_46);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = param_46;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a06c;
    _objc_retain(param_47);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = param_47;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a070;
    _objc_retain(param_49);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = param_49;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a074;
    _objc_retain(param_50);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = param_50;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a078;
    _objc_retain(param_51);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = param_51;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a07c;
    _objc_retain(param_53);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = param_53;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a080;
    _objc_retain(param_54);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = param_54;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a084;
    _objc_retain(param_55);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = param_55;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a088;
    _objc_retain(param_59);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = param_59;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a08c;
    _objc_retain(param_60);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = param_60;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a090;
    _objc_retain(param_48);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = param_48;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a094;
    _objc_retain(param_63);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = param_63;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a098;
    _objc_retain(param_70);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = param_70;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a09c;
    _objc_retain(param_69);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = param_69;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a0a0;
    _objc_retain(param_71);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = param_71;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a0a4;
    _objc_retain(in_stack_000001f0);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = in_stack_000001f0;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a0a8;
    _objc_retain(in_stack_000001f8);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = in_stack_000001f8;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a0ac;
    _objc_retain(in_stack_00000200);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = in_stack_00000200;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a0b0;
    _objc_retain(in_stack_00000208);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = in_stack_00000208;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a0b4;
    _objc_retain(in_stack_00000210);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = in_stack_00000210;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a0b8;
    _objc_retain(in_stack_00000218);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = in_stack_00000218;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a0bc;
    _objc_retain(in_stack_00000220);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = in_stack_00000220;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a0c0;
    _objc_retain(in_stack_00000228);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = in_stack_00000228;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a0c4;
    _objc_retain(in_stack_00000230);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = in_stack_00000230;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a0c8;
    _objc_retain(in_stack_00000240);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = in_stack_00000240;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a0cc;
    _objc_retain(in_stack_00000248);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = in_stack_00000248;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a0d0;
    _objc_retain(in_stack_00000250);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = in_stack_00000250;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a0d4;
    _objc_retain(in_stack_00000268);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = in_stack_00000268;
    _objc_release();
    func_0x0001090218e4();
    *(undefined8 *)((long)puVar2 + (long)_DAT_11273a0d8) = uVar3;
    *(undefined1 *)((long)puVar2 + (long)_DAT_11273a0dc) = 0;
    lVar12 = (long)_DAT_11273a0e0;
    _objc_retain(param_61);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = param_61;
    _objc_release(uVar3);
    lVar12 = (long)_DAT_11273a0e4;
    _objc_retain(param_62);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = param_62;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11273a0e8);
    *(undefined **)((long)puVar2 + (long)_DAT_11273a0e8) = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11273a0ec);
    *(undefined **)((long)puVar2 + (long)_DAT_11273a0ec) = puVar4;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar9);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28cae0();
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar2 + (long)_DAT_11273a0f0) = param_56;
    lVar12 = (long)_DAT_11273a0f4;
    _objc_retain(in_stack_00000260);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar12);
    *(undefined8 *)((long)puVar2 + lVar12) = in_stack_00000260;
    _objc_release(uVar3);
    func_0x00010c189400(puVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar2 + lVar10));
    func_0x00010c1c8b80(puVar2);
    uVar3 = param_30;
    func_0x00010c077460();
    *(char *)((long)puVar2 + (long)_DAT_11273a0f8) = (char)uVar3;
    *(undefined1 *)((long)puVar2 + (long)_DAT_11273a0fc) = 0;
    _objc_initWeak(auStack_80,puVar2);
    _objc_copyWeak(auStack_88,auStack_80);
    uVar3 = param_52;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar2 + (long)_DAT_11273a100);
    *(undefined8 *)((long)puVar2 + (long)_DAT_11273a100) = uVar3;
    _objc_release(uVar6);
    puVar4 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11273a104);
    *(undefined **)((long)puVar2 + (long)_DAT_11273a104) = puVar4;
    _objc_release(uVar3);
    uVar3 = param_26;
    func_0x00010c269d40(param_26);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bf06540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be89100(puVar2);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_storeWeak((long)puVar2 + (long)_DAT_11273a108,param_58);
    lVar9 = (long)_DAT_11273a10c;
    _objc_retain(param_65);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined8 *)((long)puVar2 + lVar9) = param_65;
    _objc_release(uVar3);
    lVar9 = (long)_DAT_11273a110;
    _objc_retain(param_66);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined8 *)((long)puVar2 + lVar9) = param_66;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126c5b60;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11273a114);
    *(undefined **)((long)puVar2 + (long)_DAT_11273a114) = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11273a118);
    *(undefined **)((long)puVar2 + (long)_DAT_11273a118) = puVar4;
    _objc_release(uVar3);
    lVar9 = (long)_DAT_11273a11c;
    _objc_retain(param_67);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined8 *)((long)puVar2 + lVar9) = param_67;
    _objc_release(uVar3);
    lVar9 = (long)_DAT_11273a120;
    _objc_retain(param_68);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar9);
    *(undefined8 *)((long)puVar2 + lVar9) = param_68;
    _objc_release(uVar3);
    uVar11 = *(undefined8 *)((long)puVar2 + lVar8);
    uVar5 = param_26;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_26;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c0baae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ba160();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_11273a124);
    *(undefined8 *)((long)puVar2 + (long)_DAT_11273a124) = uVar11;
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar5);
    lVar8 = (long)_DAT_11273a128;
    _objc_retain(in_stack_00000238);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = in_stack_00000238;
    _objc_release(uVar3);
    lVar8 = (long)_DAT_11273a12c;
    _objc_retain(in_stack_00000258);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = in_stack_00000258;
    _objc_release(uVar3);
    func_0x00010bf77500(*(undefined8 *)((long)puVar2 + lVar8));
    func_0x00010c1c2820(*(undefined8 *)((long)puVar2 + lVar12));
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(puVar1);
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
  return puVar2;
}



/* Entry: 105eeb708; end: 105eeb793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eeb708(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + _DAT_11273a0f4) == 0)) {
    func_0x00010c18c2a0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105eeb794; end: 105eeb7f3; -[SCMapViewController dealloc] */

void FUN_105eeb794(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c277640(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e30938);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puStack_28 = PTR_PTR_1126ede68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105eeb7f4; end: 105eeb7fb; -[SCMapViewController pageViewName] */

undefined8 FUN_105eeb7f4(void)

{
  return 0x93;
}



/* Entry: 105eeb7fc; end: 105eec397; -[SCMapViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eeb7fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  long lStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e30958);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29cac0(*(undefined8 *)(param_1 + _DAT_11273a12c));
  _objc_initWeak(auStack_b0,param_1);
  puStack_b8 = PTR_PTR_1126ede68;
  lStack_c0 = param_1;
  _objc_msgSendSuper2(&lStack_c0,PTR_s_viewDidLoad_112684cd8);
  puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar15);
  _objc_release(puVar16);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273a018);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_105eec398;
  puStack_d0 = &UNK_1108f5820;
  _objc_copyWeak(auStack_c8,auStack_b0);
  func_0x00010c1d91c0(uVar2);
  _objc_release(uVar2);
  puVar16 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0(PTR_PTR_1126b7f68);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b19f8;
  func_0x00010c0b85e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c183600(puVar16);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar16);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273a014);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_11273a130;
  uVar12 = *(undefined8 *)(param_1 + lVar15);
  *(undefined8 *)(param_1 + lVar15) = uVar2;
  _objc_release(uVar12);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar15));
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273a01c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_11273a134;
  uVar12 = *(undefined8 *)(param_1 + lVar20);
  *(undefined8 *)(param_1 + lVar20) = uVar2;
  _objc_release(uVar12);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar20));
  lVar15 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar15);
  func_0x00010c14c940(*(undefined8 *)(param_1 + lVar20));
  lVar17 = (long)_DAT_11273a08c;
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar17));
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar17));
  lVar15 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar15);
  func_0x00010c14c940(*(undefined8 *)(param_1 + lVar17));
  uVar2 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c0b8d20();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + _DAT_11273a138);
  *(undefined8 *)(param_1 + _DAT_11273a138) = uVar2;
  _objc_release(uVar12);
  uVar2 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c0b8da0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + _DAT_11273a13c);
  *(undefined8 *)(param_1 + _DAT_11273a13c) = uVar2;
  _objc_release(uVar12);
  uVar2 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c0baae0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_11273a140;
  uVar12 = *(undefined8 *)(param_1 + lVar17);
  *(undefined8 *)(param_1 + lVar17) = uVar2;
  _objc_release(uVar12);
  uVar12 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c1530a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar12;
  func_0x00010bfc3540();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + _DAT_11273a144);
  *(undefined8 *)(param_1 + _DAT_11273a144) = uVar2;
  _objc_release(uVar13);
  _objc_release(uVar12);
  lVar15 = (long)_DAT_11273a0f4;
  if (*(long *)(param_1 + lVar15) == 0) {
    uVar12 = *(undefined8 *)(param_1 + _DAT_11273a098);
    func_0x00010c0b8ca0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(uVar2);
    _objc_release(uVar12);
  }
  lVar5 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_11273a148;
  uVar2 = *(undefined8 *)(param_1 + lVar18);
  *(long *)(param_1 + lVar18) = lVar6;
  _objc_release(uVar2);
  _objc_release(lVar5);
  if (*(char *)(param_1 + _DAT_11273a0dc) == '\x01') {
    func_0x00010c188560(*(undefined8 *)(param_1 + _DAT_11273a038));
  }
  else {
    uVar13 = *(undefined8 *)(param_1 + _DAT_11273a098);
    func_0x00010c0b8ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar2;
    func_0x00010c0b8c80();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = (long)_DAT_11273a14c;
    uVar14 = *(undefined8 *)(param_1 + lVar19);
    *(undefined8 *)(param_1 + lVar19) = uVar12;
    _objc_release(uVar14);
    _objc_release(uVar2);
    _objc_release(uVar13);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19));
    lVar5 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar5);
    puVar16 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar14 = *(undefined8 *)(param_1 + lVar19);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar19);
    uStack_a0 = uVar2;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010c08e400(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + lVar19);
    uStack_98 = uVar12;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010c1408a0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = uVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar16);
    _objc_release(puVar3);
    _objc_release(uVar13);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar12);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar2);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(uVar14);
    puVar16 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar12 = *(undefined8 *)(param_1 + lVar19);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_a8 = uVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar16);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(uVar12);
  }
  uVar13 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c0b9a20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar13;
  func_0x00010c0b9a00();
  _objc_retainAutoreleasedReturnValue();
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x105eec40c;
  puStack_f8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_f0,auStack_b0);
  uVar12 = uVar2;
  func_0x00010c25ff20();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11273a150);
  *(undefined8 *)(param_1 + _DAT_11273a150) = uVar12;
  _objc_release(uVar14);
  _objc_release(uVar2);
  _objc_release(uVar13);
  uVar12 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c29f500();
  _objc_retainAutoreleasedReturnValue();
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x105eec438;
  puStack_120 = &UNK_110858ee0;
  _objc_copyWeak(auStack_118,auStack_b0);
  uVar2 = uVar12;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + _DAT_11273a154);
  *(undefined8 *)(param_1 + _DAT_11273a154) = uVar2;
  _objc_release(uVar13);
  _objc_release(uVar12);
  uVar12 = *(undefined8 *)(param_1 + _DAT_112739fc8);
  func_0x00010c09fa60();
  _objc_retainAutoreleasedReturnValue();
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x105eec480;
  puStack_148 = &UNK_1108d71b0;
  _objc_copyWeak(auStack_140,auStack_b0);
  uVar2 = uVar12;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + _DAT_11273a158);
  *(undefined8 *)(param_1 + _DAT_11273a158) = uVar2;
  _objc_release(uVar13);
  _objc_release(uVar12);
  uVar12 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c2795c0();
  _objc_retainAutoreleasedReturnValue();
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  uStack_178 = 0x105eec4ac;
  puStack_170 = &UNK_1108f5850;
  _objc_copyWeak(auStack_168,auStack_b0);
  uVar2 = uVar12;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + _DAT_11273a15c);
  *(undefined8 *)(param_1 + _DAT_11273a15c) = uVar2;
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_copyWeak(auStack_190,auStack_b0);
  puVar16 = PTR_PTR_1126c5b68;
  func_0x00010c22b860(PTR_PTR_1126c5b68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a53a0();
  _objc_release(puVar16);
  lVar17 = param_1;
  func_0x00010c09ea60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8fa0();
  _objc_release(lVar17);
  if (*(long *)(param_1 + _DAT_11273a038) != 0) {
    func_0x00010bde5e00(param_1);
  }
  func_0x00010c2775c0(PTR_PTR_1126bc310);
  lVar17 = param_1;
  func_0x00010bf6eb60();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar17 == 0) || (lVar17 = *(long *)(param_1 + lVar15), _objc_release(), lVar17 != 0)) {
    if ((*(byte *)(param_1 + _DAT_11273a160) & 1) == 0) {
      if (*(long *)(param_1 + lVar15) != 0) goto LAB_105eec224;
      func_0x00010bdc5340(param_1);
    }
    else if (*(long *)(param_1 + lVar15) != 0) {
LAB_105eec224:
      func_0x00010c29cac0();
    }
  }
  else {
    func_0x00010be5e000(param_1);
  }
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(auStack_168);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_118);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_b0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_168);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_118);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_b0);
  __Unwind_Resume();
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained();
  if ((puVar1 != (undefined *)0x0) && (*(long *)(puVar1 + _DAT_11273a0f4) == 0)) {
    uVar11 = *(ulong *)(puVar1 + _DAT_11273a00c);
    func_0x000109021a7c();
    if ((uVar11 & 1) == 0) {
      puVar16 = puVar1;
      func_0x00010bee6e80(puVar1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105eec3dc;
    }
  }
  puVar16 = (undefined *)0x0;
LAB_105eec3dc:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 105eec398; end: 105eec4f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eec398(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + _DAT_11273a0f4) == 0)) {
    uVar1 = *(ulong *)(param_1 + _DAT_11273a00c);
    func_0x000109021a7c();
    if ((uVar1 & 1) == 0) {
      lVar2 = param_1;
      func_0x00010bee6e80(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105eec3dc;
    }
  }
  lVar2 = 0;
LAB_105eec3dc:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105eec4f4; end: 105eec5df;  */

void FUN_105eec4f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  func_0x00010c0e51e0(lVar1);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105eec5e0; end: 105eec613;  */

void FUN_105eec5e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105eec614; end: 105eec69b; -[SCMapViewController viewWillAppear:] */

void FUN_105eec614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e309d8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126ede68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewWillAppear__1126853f0,param_3);
  func_0x00010be33200(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 105eec69c; end: 105eec76f; -[SCMapViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eec69c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e309f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126ede68;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidAppear__112684bd0,param_3);
  func_0x00010be33200(param_1);
  lVar3 = (long)_DAT_11273a164;
  lVar2 = param_1 + lVar3;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 == 0) {
    if (*(long *)(param_1 + _DAT_11273a0f4) != 0) {
      func_0x00010c29c680();
    }
  }
  else {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c29c680();
    _objc_release(param_1);
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 105eec770; end: 105eec7d7; -[SCMapViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eec770(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ede68;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLayoutSubviews_112684cc8);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273a018);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f3d60();
  _objc_release(uVar1);
  return;
}



/* Entry: 105eec7d8; end: 105eec85b; -[SCMapViewController viewWillDisappear:] */

void FUN_105eec7d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e30a18);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126ede68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewWillDisappear__112685438,param_3);
  func_0x00010be33280(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 105eec85c; end: 105eec8df; -[SCMapViewController viewDidDisappear:] */

void FUN_105eec85c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e30a38);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126ede68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidDisappear__112684c48,param_3);
  func_0x00010be33280(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 105eec8e0; end: 105eec95f; -[SCMapViewController supportedInterfaceOrientations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eec8e0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11273a118);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    puStack_38 = PTR_PTR_1126ede68;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_supportedInterfaceOrientations_112676698);
  }
  return;
}



/* Entry: 105eec960; end: 105eec97f; -[SCMapViewController preferredScreenEdgesDeferringSystemGestures] */

undefined8 FUN_105eec960(int param_1)

{
  undefined8 uVar1;
  
  func_0x00010be42e60();
  uVar1 = 0xf;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 105eec980; end: 105eec9f3; -[SCMapViewController _handleTraitCollectionChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eec980(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bc310;
  func_0x00010c277640(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e30a58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273a168);
  *(undefined8 *)(param_1 + _DAT_11273a168) = param_3;
  _objc_release(uVar2);
  func_0x00010bee0ac0(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105eec9f4; end: 105eecc63; -[SCMapViewController _handleViewDisappearWithFinished:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eec9f4(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  uVar8 = *(undefined8 *)(param_1 + _DAT_11273a12c);
  if (param_3 == 0) {
    func_0x00010c29e820(uVar8);
  }
  else {
    lVar2 = param_1;
    func_0x00010c10f940(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29c940(uVar8);
    _objc_release(lVar2);
  }
  func_0x00010bf2dd60(*(undefined8 *)(param_1 + _DAT_11273a130));
  func_0x00010bf86d40(*(undefined8 *)(param_1 + _DAT_11273a16c));
  if (param_3 != 0) {
    lVar9 = (long)_DAT_11273a030;
    uVar8 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28cae0();
    _objc_release(uVar8);
    puVar3 = PTR_PTR_1126b6b08;
    func_0x00010c22b6a0(PTR_PTR_1126b6b08);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e20();
    _objc_release(puVar3);
    lVar2 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010be02e20(param_1);
      func_0x00010bf3c360(*(undefined8 *)(param_1 + _DAT_112739fec));
      func_0x00010bfb3280(*(undefined8 *)(param_1 + _DAT_112739fe8));
      func_0x00010bdfaee0(param_1);
      uVar4 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3dea0(param_1);
      uVar5 = *(undefined8 *)(param_1 + _DAT_11273a084);
      func_0x00010bfedde0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + _DAT_11273a134);
      func_0x00010c1530a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010bfcae40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar8;
      func_0x00010c25e140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29c900(uVar4);
      _objc_release(uVar7);
      _objc_release(uVar8);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      func_0x00010be03940(param_1);
      iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11273a00c);
      func_0x0001090222b4();
      if (iVar1 == 0) {
        func_0x00010be54d60(param_1);
      }
      else {
        lVar2 = param_1 + _DAT_11273a170;
        _objc_loadWeakRetained(lVar2);
        func_0x00010c255780();
        _objc_release(lVar2);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bddda70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__checkIfMapIsFullyVisible_112555038);
  return;
}



/* Entry: 105eecc64; end: 105eed043; -[SCMapViewController _handleViewAppearedWithFinished:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eecc64(char *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  char *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  char *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  char *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == 0) {
    func_0x00010c29e700(*(undefined8 *)(param_1 + _DAT_11273a12c));
    func_0x00010bee0ac0(param_1);
    func_0x00010bee0ac0(param_1);
    puVar4 = PTR_PTR_1126b6b20;
    func_0x00010c22ba80(PTR_PTR_1126b6b20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27ab40();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b7f68;
    func_0x00010c22b6a0(PTR_PTR_1126b7f68);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b19f8;
    func_0x00010c0b85e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_58 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c183600(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    pcVar7 = param_1;
    func_0x00010c09ea60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c8fa0();
  }
  else {
    func_0x00010c29c680();
    func_0x00010bee0ac0(param_1);
    puVar4 = PTR_PTR_1126b6b08;
    func_0x00010c22b6a0(PTR_PTR_1126b6b08);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e20();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b7f68;
    func_0x00010c22b6a0(PTR_PTR_1126b7f68);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b19f8;
    func_0x00010c0b85e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c183600(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010be5e2a0(param_1);
    func_0x00010bea6800(param_1);
    lVar2 = *(long *)(param_1 + _DAT_11273a090);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      pcVar7 = param_1;
      func_0x00010c0b9900(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + _DAT_11273a058);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18b5e0();
      _objc_release(uVar3);
      _objc_release(pcVar7);
    }
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105eed044;
    puStack_68 = &UNK_110842e18;
    pcStack_60 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_80);
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11273a00c);
    func_0x0001090224b8();
    if (iVar1 == 0) {
      if (*(long *)(param_1 + _DAT_11273a0f4) == 0) {
        pcVar7 = param_1;
        func_0x00010c09ea60(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c238240();
        _objc_release(pcVar7);
      }
    }
    else if (*(long *)(param_1 + _DAT_11273a0f4) == 0) {
      puStack_a8 = puVar4;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_105eed04c;
      puStack_90 = &UNK_110842e18;
      pcStack_88 = param_1;
      func_0x000100c749e0(0x3f000000,"APPSTORE",&puStack_a8);
    }
    func_0x00010c1cbd20(*(undefined8 *)(param_1 + _DAT_11273a174));
    param_1[_DAT_11273a178] = '\x01';
    pcVar7 = *(char **)(param_1 + _DAT_11273a018);
    func_0x00010c269d40(pcVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f3d00();
  }
  _objc_release(pcVar7);
  pcVar7 = param_1;
  func_0x00010beb2aa0();
  if (((int)pcVar7 != 0) && (*(long *)(param_1 + _DAT_11273a0f4) == 0)) {
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_105eed080;
    puStack_b8 = &UNK_110842e18;
    pcVar7 = "APPSTORE";
    pcStack_b0 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_d0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bddda70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(pcVar7 + 0x20),PTR_s__checkIfMapIsFullyVisible_112555038);
  return;
}



/* Entry: 105eed044; end: 105eed04b;  */

void FUN_105eed044(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddda70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__checkIfMapIsFullyVisible_112555038);
  return;
}



/* Entry: 105eed04c; end: 105eed07f;  */

void FUN_105eed04c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09ea60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105eed080; end: 105eed16f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eed080(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11273a17c;
  if (*(long *)(*(long *)(param_1 + 0x20) + lVar6) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar2 = PTR_PTR_1126c5b70;
  _objc_alloc(PTR_PTR_1126c5b70);
  func_0x00010c0582c0();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273a094);
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf21f80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  func_0x00010c10ae00(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105eed170; end: 105eed25b; -[SCMapViewController _isMapFullyVisible] */

uint FUN_105eed170(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c29d0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  if (uVar2 != 0) {
    uVar1 = param_1;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((uVar1 == 0) ||
       ((((uVar1 = param_1, func_0x00010c06d1a0(), (uVar1 & 1) == 0 &&
          (uVar1 = param_1, func_0x00010c06d1e0(), (uVar1 & 1) == 0)) &&
         (uVar1 = param_1, func_0x00010c077fe0(), (uVar1 & 1) == 0)) &&
        (uVar1 = param_1, func_0x00010c077fc0(), (uVar1 & 1) == 0)))) {
      uVar1 = param_1;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar1 == 0) {
        func_0x00010c09ea60(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_1;
        func_0x00010c07df40();
        _objc_release(param_1);
        return (uint)uVar1 ^ 1;
      }
    }
  }
  return 0;
}



/* Entry: 105eed25c; end: 105eed2b7; -[SCMapViewController _checkIfMapIsFullyVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eed25c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be41c00();
  if ((uint)*(byte *)(param_1 + _DAT_112739fb4) == (uint)lVar1) {
    return;
  }
  *(char *)(param_1 + _DAT_112739fb4) = (char)lVar1;
  if ((uint)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be5c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__mapBecameFullyVisible_112574c00);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be5ced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__mapStoppedBeingFullyVisible_112574d50);
  return;
}



/* Entry: 105eed2b8; end: 105eed3e7; -[SCMapViewController _mapBecameFullyVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eed2b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010be89580();
  func_0x00010be5e000(param_1);
  func_0x00010bed96a0(param_1);
  lVar3 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    lVar3 = (long)_DAT_11273a030;
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273a084);
    func_0x00010bfedde0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29c780(uVar1,param_2,uVar2,PTR____NSArray0__struct_11034ab48);
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010c286f00(*(undefined8 *)(param_1 + _DAT_112739ff8));
    if (((*(char *)(param_1 + _DAT_11273a160) == '\x01') &&
        (*(char *)(param_1 + _DAT_11273a0fc) == '\x01')) &&
       (*(long *)(param_1 + _DAT_11273a180) == 0)) {
      uVar1 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0aa060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 105eed3e8; end: 105eed427; -[SCMapViewController _mapStoppedBeingFullyVisible] */

void FUN_105eed3e8(undefined8 param_1)

{
  func_0x00010bed96a0();
  func_0x00010c09ea60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105eed428; end: 105eed493; -[SCMapViewController handleUserTriggeredNavigationAction:] */

void FUN_105eed428(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c09ea60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07df40();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  func_0x00010be03940(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc5350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__activelyCenterMapOnUserRegionAn_11254ee70,1)
  ;
  return;
}



/* Entry: 105eed494; end: 105eed49b; -[SCMapViewController didTapNewTabToDismiss] */

void FUN_105eed494(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCloseType__11263cfa8,3);
  return;
}



/* Entry: 105eed49c; end: 105eed4df; -[SCMapViewController totalBottomInset] */

undefined8
FUN_105eed49c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c148fc0();
  _objc_release(param_4);
  return param_3;
}



/* Entry: 105eed4e0; end: 105eed543; -[SCMapViewController clusterZoomEdgeInsets] */

double FUN_105eed4e0(double param_1,undefined8 param_2)

{
  double dVar1;
  
  func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
  dVar1 = param_1 + 52.0;
  func_0x00010bdd4780(param_2);
  return param_1 + dVar1 + 20.0;
}



/* Entry: 105eed544; end: 105eed54b; -[SCMapViewController _headerHeight] */

undefined8 FUN_105eed544(void)

{
  return 0;
}



/* Entry: 105eed54c; end: 105eed5ef; -[SCMapViewController focusedMeTrayEdgeInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_105eed54c(double param_1,long param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11273a018);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b8940();
  dVar2 = param_1;
  _objc_release(uVar1);
  func_0x00010be34d40(param_2);
  func_0x000109021d38(*(undefined8 *)(param_2 + _DAT_11273a00c));
  return param_1 + dVar2;
}



/* Entry: 105eed5f0; end: 105eed603; -[SCMapViewController _measureAndReportMapReady] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eed5f0(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11273a0fc) = 1;
  return;
}



/* Entry: 105eed604; end: 105eed6ab; -[SCMapViewController setDestination:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eed604(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11273a184;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010c0834c0();
  if ((int)lVar2 == 0) {
    func_0x00010c11c620(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e30af8);
    lVar2 = (long)_DAT_11273a180;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
  }
  else {
    func_0x00010c11c620(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110e30ad8);
    func_0x00010be5e000(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105eed6ac; end: 105eed92b; -[SCMapViewController _maybeFlyToDestination] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eed6ac(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  ulong uStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  ulong uStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  if (*(long *)(param_1 + (long)_DAT_11273a0f4) != 0) {
    return;
  }
  uVar2 = param_1;
  func_0x00010bf6eb60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 == 0) {
    return;
  }
  uVar2 = param_1;
  func_0x00010c0834c0();
  if ((int)uVar2 == 0) {
    return;
  }
  uVar2 = param_1;
  func_0x00010c09ea60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c07df40();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    return;
  }
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 1;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  uVar2 = param_1;
  puStack_88 = &uStack_90;
  puStack_68 = &uStack_70;
  func_0x00010bf6eb60(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105eed92c;
  puStack_a0 = &UNK_110847658;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_105eed940;
  puStack_d0 = &UNK_1108f58b0;
  uStack_c8 = param_1;
  puStack_c0 = &uStack_70;
  puStack_98 = &uStack_90;
  func_0x00010c0bd3e0();
  _objc_release(uVar2);
  if ((*(byte *)(puStack_68 + 3) & 1) == 0) goto LAB_105eed8e8;
  puStack_118 = puVar1;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_105eed9b4;
  puStack_100 = &UNK_11084b9d0;
  puStack_f0 = &uStack_90;
  ppuVar4 = &puStack_118;
  uStack_f8 = param_1;
  _objc_retainBlock();
  uVar2 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
LAB_105eed8c0:
    (*(code *)ppuVar4[2])(ppuVar4);
  }
  else {
    uVar3 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c06d1a0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar5 & 1) != 0) goto LAB_105eed8c0;
    func_0x00010bf84b00(param_1);
  }
  _objc_release(ppuVar4);
LAB_105eed8e8:
  __Block_object_dispose(&uStack_90,8);
  __Block_object_dispose(&uStack_70,8);
  return;
}



/* Entry: 105eed92c; end: 105eed93f;  */

void FUN_105eed92c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105eed940; end: 105eed98f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eed940(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112739fc8);
  func_0x00010c0fa5c0(lVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = lVar1 != 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105eed990; end: 105eed9b3;  */

void FUN_105eed990(void)

{
  return;
}



/* Entry: 105eed9b4; end: 105eeda53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eed9b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010be02e20(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be03940(*(undefined8 *)(param_1 + 0x20));
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) & 1) == 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273a188) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273a160) = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = uVar2;
  func_0x00010bf6eb60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc5420(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c18c2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setDestination__112640ac8,0);
  return;
}



/* Entry: 105eeda54; end: 105eedd63; -[SCMapViewController _actuallyFlyToDestination:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eeda54(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  undefined1 auStack_268 [8];
  undefined1 auStack_260 [8];
  undefined *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  long lStack_238;
  undefined8 *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined8 *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined1 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined1 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  lVar4 = *(long *)(param_1 + _DAT_11273a180);
  bVar2 = lVar4 == param_3;
  if (bVar2) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273a088);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a8aa0();
    _objc_release(uVar3);
    func_0x00010be54d60(param_1);
  }
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273a06c);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd17e0();
  _objc_release(uVar3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105eedd64;
  puStack_88 = &UNK_11084b9d0;
  puStack_230 = &uStack_70;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_105eedd80;
  puStack_b8 = &UNK_1108f5ad0;
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x105eee1f8;
  puStack_e8 = &UNK_1108f5b00;
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  uStack_118 = 0x105eee2f8;
  puStack_110 = &UNK_1108f5b30;
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  uStack_140 = 0x105eee300;
  puStack_138 = &UNK_1108f5b60;
  puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_170 = 0xc2000000;
  pcStack_168 = FUN_105eee334;
  puStack_160 = &UNK_1108f5b90;
  puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_105eee4d0;
  puStack_188 = &UNK_1108f5bc0;
  puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c0 = 0xc2000000;
  uStack_1b8 = 0x105eee4e0;
  puStack_1b0 = &UNK_110850398;
  puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f0 = 0xc2000000;
  pcStack_1e8 = FUN_105eee4f0;
  puStack_1e0 = &UNK_110869400;
  puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_220 = 0xc2000000;
  pcStack_218 = FUN_105eee624;
  puStack_210 = &UNK_11084b9d0;
  puStack_258 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_250 = 0xc2000000;
  pcStack_248 = FUN_105eee724;
  puStack_240 = &UNK_11084b9d0;
  lStack_238 = param_1;
  lStack_208 = param_1;
  puStack_200 = puStack_230;
  lStack_1d8 = param_1;
  puStack_1d0 = puStack_230;
  lStack_1a8 = param_1;
  lStack_180 = param_1;
  lStack_158 = param_1;
  lStack_130 = param_1;
  lStack_108 = param_1;
  lStack_e0 = param_1;
  uStack_d8 = bVar2;
  lStack_b0 = param_1;
  uStack_a8 = bVar2;
  lStack_80 = param_1;
  puStack_78 = puStack_230;
  func_0x00010c0bd3e0(param_3);
  if ((lVar4 == param_3) && ((*(byte *)(puStack_68 + 3) & 1) == 0)) {
    _objc_initWeak(auStack_260,param_1);
    puStack_288 = puVar1;
    uStack_280 = 0xc2000000;
    pcStack_278 = FUN_105eee7b4;
    puStack_270 = &UNK_1108434b0;
    _objc_copyWeak(auStack_268,auStack_260);
    func_0x000100c749e0(0x3f800000,"APPSTORE",&puStack_288);
    _objc_destroyWeak(auStack_268);
    _objc_destroyWeak(auStack_260);
  }
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_3);
  return;
}



/* Entry: 105eedd64; end: 105eedd7f;  */

void FUN_105eedd64(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc5350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__activelyCenterMapOnUserRegionAn_11254ee70,0);
  return;
}



/* Entry: 105eedd80; end: 105eee04f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eedd80(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [8];
  ulong uStack_a0;
  byte bStack_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273a050);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c076e60();
  _objc_release(uVar2);
  uVar4 = param_2;
  func_0x00010c0720c0();
  if (((int)uVar4 == 0) || ((uVar3 & 1) != 0)) {
    lVar8 = (long)_DAT_112739fc8;
    lVar5 = *(long *)(*(long *)(param_1 + 0x20) + lVar8);
    func_0x00010c0fa5c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar6 = param_3;
    func_0x00010bf529e0();
    if (lVar5 == 0) {
      if ((lVar6 != 0) || (lVar6 = param_4, func_0x00010bf529e0(), lVar6 != 0)) {
        func_0x00010bdc5340(*(undefined8 *)(param_1 + 0x20));
      }
    }
    else {
      if (lVar6 == 0) {
        lVar6 = param_4;
        func_0x00010bf529e0();
        bVar1 = lVar6 != 0;
      }
      else {
        bVar1 = true;
      }
      uVar7 = *(ulong *)(*(long *)(param_1 + 0x20) + lVar8);
      func_0x00010c0fa580();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar7;
      func_0x00010c0fa5e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010bf529e0();
      _objc_release(uVar3);
      _objc_initWeak(auStack_90,*(undefined8 *)(param_1 + 0x20));
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d8 = 0xc2000000;
      pcStack_d0 = FUN_105eee084;
      puStack_c8 = &UNK_1108f5aa0;
      _objc_copyWeak(auStack_a8,auStack_90);
      _objc_retain(param_2);
      uStack_c0 = param_2;
      uStack_a0 = param_5;
      bStack_98 = bVar1 | param_5 < 0xb & (byte)(0x414 >> (ulong)((uint)param_5 & 0x1f));
      _objc_retain(param_3);
      lStack_b8 = param_3;
      _objc_retain(param_4);
      uStack_96 = *(undefined1 *)(param_1 + 0x28);
      lStack_b0 = param_4;
      uStack_97 = 1 < uVar2;
      func_0x0001000d76cc("APPSTORE",&puStack_e0);
      _objc_release(lStack_b0);
      _objc_release(lStack_b8);
      _objc_release(uStack_c0);
      _objc_destroyWeak(auStack_a8);
      _objc_destroyWeak(auStack_90);
      _objc_release(uVar7);
    }
  }
  else {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105eee050;
    puStack_70 = &UNK_110842e18;
    uStack_68 = *(undefined8 *)(param_1 + 0x20);
    func_0x000100c749e0(0x3f000000,"APPSTORE",&puStack_88);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105eee050; end: 105eee083;  */

void FUN_105eee050(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09ea60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105eee084; end: 105eee2bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eee084(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *unaff_x21;
  undefined8 unaff_x22;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  byte bStack_70;
  byte bStack_6f;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(lVar2 + _DAT_11273a00c);
    func_0x000109021ae4();
    unaff_x21 = *(undefined **)(param_1 + 0x20);
    if (iVar1 == 0) {
      unaff_x22 = *(undefined8 *)(param_1 + 0x40);
      FUN_105efba08(unaff_x22);
      uStack_80 = *(undefined1 *)(param_1 + 0x48);
      bStack_70 = *(byte *)(param_1 + 0x4a);
      bStack_6f = bStack_70 ^ 1;
      uStack_60 = *(undefined8 *)(param_1 + 0x28);
      uStack_58 = *(undefined8 *)(param_1 + 0x30);
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_68 = 0;
      uStack_78 = 0x7c;
      param_3 = (undefined *)0x0;
      param_4 = unaff_x21;
      func_0x00010bddc580(lVar2);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_40 = unaff_x21;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      param_4 = (undefined *)(ulong)((*(byte *)(param_1 + 0x48) ^ 1) & 1);
      param_3 = puVar3;
      func_0x00010be7b5e0(lVar2);
      _objc_release(puVar3);
      unaff_x21 = puVar3;
    }
  }
  lVar4 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  uStack_88 = 0x105eee1f8;
  uStack_b0 = unaff_x22;
  puStack_a8 = unaff_x21;
  lStack_a0 = param_1;
  lStack_98 = lVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_105eee2c0;
  puStack_e0 = &UNK_1108b0960;
  uStack_d8 = *(undefined8 *)(lVar4 + 0x20);
  uStack_b8 = *(undefined1 *)(lVar4 + 0x28);
  uStack_d0 = param_2;
  puStack_c8 = param_3;
  puStack_c0 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x0001000d76cc("APPSTORE",&puStack_f8);
  _objc_release(puStack_c8);
  _objc_release(uStack_d0);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105eee2c0; end: 105eee333;  */

void FUN_105eee2c0(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = *(long *)(param_1 + 0x38) - 1;
  if (uVar2 < 0xb) {
    uVar1 = *(undefined8 *)(&UNK_10ddd1578 + uVar2 * 8);
  }
  else {
    uVar1 = 9;
  }
                    /* WARNING: Could not recover jumptable at 0x00010becf6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__travelToGroupWithUserIds_name_i_112591760,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined1 *)(param_1 + 0x40),uVar1);
  return;
}



/* Entry: 105eee334; end: 105eee4cf;  */

void FUN_105eee334(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_5);
  func_0x00010c0b9900(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3de80();
  _objc_release(uVar2);
  lVar1 = param_6;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b1ee0;
    _objc_alloc(PTR_PTR_1126b1ee0);
    func_0x00010c036140();
  }
  func_0x00010c1dc600(puVar3,param_4,param_7);
  func_0x00010c16b640(puVar3,param_4,param_8);
  _objc_release(param_8);
  func_0x00010c1dbf40(puVar3,param_4,param_9);
  _objc_release(param_9);
  func_0x00010c1bf620(puVar3,param_4,param_10);
  _objc_release(param_10);
  func_0x00010c21e620(puVar3,param_4,param_5);
  _objc_release(param_5);
  func_0x00010be0cf60(param_1,param_2,*(undefined8 *)(param_3 + 0x20),param_4,puVar3,param_11,
                      param_12,0);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(puVar3);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 105eee4d0; end: 105eee4ef;  */

void FUN_105eee4d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0cd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__exposeDropScopeWithDrop_openSou_112560d00,
             param_2,param_3);
  return;
}



/* Entry: 105eee4f0; end: 105eee623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eee4f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  lVar3 = *(long *)(param_1 + 0x20);
  lVar4 = (long)_DAT_11273a164;
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar3 = lVar3 + lVar4;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar3 == 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273a030);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aaf80();
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(uVar1);
    func_0x00010bdc5340(*(undefined8 *)(param_1 + 0x20));
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d6e0();
  }
  else {
    puVar2 = PTR_PTR_1126c5b78;
    _objc_alloc(PTR_PTR_1126c5b78);
    func_0x00010c02fe00();
    _objc_release(param_3);
    _objc_release(param_2);
    lVar4 = *(long *)(param_1 + 0x20) + lVar4;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c0d5ea0();
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105eee624; end: 105eee71b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eee624(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  lVar3 = (long)_DAT_11273a164;
  lVar1 = *(long *)(param_1 + 0x20) + lVar3;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c5b80;
    _objc_alloc_init(PTR_PTR_1126c5b80);
    lVar3 = *(long *)(param_1 + 0x20) + lVar3;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c0d5ea0();
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  func_0x00010bdc5340(*(undefined8 *)(param_1 + 0x20));
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105eee71c;
  puStack_40 = &UNK_110842e18;
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100c749e0(0x3e800000,"APPSTORE",&puStack_58);
  return;
}



/* Entry: 105eee71c; end: 105eee723;  */

void FUN_105eee71c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7a2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentArrivalNotificationsTray_11257c248);
  return;
}



/* Entry: 105eee724; end: 105eee7ab;  */

void FUN_105eee724(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  func_0x00010bdc5340(*(undefined8 *)(param_1 + 0x20),param_2,0);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105eee7ac;
  puStack_30 = &UNK_110842e18;
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100c749e0(0x3e800000,"APPSTORE",&puStack_48);
  return;
}



/* Entry: 105eee7ac; end: 105eee7b3;  */

void FUN_105eee7ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7b410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentExternalMusicDeepLinkFlo_11257c6a0);
  return;
}



/* Entry: 105eee7b4; end: 105eee7df;  */

void FUN_105eee7b4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be559c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105eee7e0; end: 105eee823; -[SCMapViewController _logMapZoomForMapDeeplinkDestination] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eee7e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273a030);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aa060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105eee824; end: 105eeebf3; -[SCMapViewController _travelToGroupWithUserIds:name:isInitialDestination:source:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eee824(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010bf529e0(param_4);
  func_0x00010c225ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105eeebf4;
  puStack_a0 = &UNK_1108f5bf0;
  lStack_98 = param_2;
  _objc_retain(puVar3);
  puStack_90 = puVar3;
  _objc_retain(puVar2);
  puStack_88 = puVar2;
  _objc_retain(puVar4);
  puStack_80 = puVar4;
  func_0x00010bf97e80(param_4);
  _objc_initWeak(auStack_c0,param_2);
  puStack_e8 = puVar10;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_105eeeca4;
  puStack_d0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_c8,auStack_c0);
  ppuVar5 = &puStack_e8;
  _objc_retainBlock();
  puVar10 = puVar4;
  func_0x00010bf529e0();
  if (puVar10 == (undefined *)0x1) {
    puVar10 = puVar4;
    func_0x00010bf04a20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar10;
    func_0x00010bf3e6e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar10 = puVar6;
    func_0x00010c08fa60();
    if (puVar10 == (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar6);
      puVar10 = puVar6;
    }
    _objc_release(puVar6);
  }
  else {
    puVar10 = (undefined *)0x0;
  }
  puVar6 = puVar2;
  func_0x00010bf00560(puVar2);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_2 + _DAT_11273a00c);
  func_0x000109021ae4();
  if (iVar1 == 0) {
    FUN_105efbe08(*(undefined8 *)(param_2 + _DAT_11273a114),1);
    puVar7 = PTR_PTR_1126c5b88;
    _objc_alloc();
    lVar8 = param_2;
    func_0x00010be6ddc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c2bf200(*(undefined8 *)(param_2 + _DAT_11273a140));
    func_0x00010c2905c0();
    func_0x00010c00a3e0(param_1);
    uVar9 = *(undefined8 *)(param_2 + _DAT_11273a18c);
    *(undefined **)(param_2 + _DAT_11273a18c) = puVar7;
    _objc_release(uVar9);
    _objc_release(lVar8);
    func_0x00010bf9d620(*(undefined8 *)(param_2 + _DAT_11273a04c));
    if (param_7 == 6) {
      uVar9 = *(undefined8 *)(param_2 + _DAT_11273a134);
      func_0x00010bf218e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19c800();
      _objc_release(uVar9);
    }
  }
  else {
    func_0x00010be7b5e0(param_2);
  }
  _objc_release(puVar6);
  _objc_release(puVar10);
  _objc_release(ppuVar5);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_c0);
  _objc_release(puStack_80);
  _objc_release(puStack_88);
  _objc_release(puStack_90);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105eeebf4; end: 105eeeca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eeebf4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = (long)_DAT_112739fc8;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + lVar2);
  func_0x00010c0fa5c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + lVar2);
    func_0x00010c0fa580();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x38));
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105eeeca4; end: 105eeecd3;  */

void FUN_105eeeca4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddc680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105eeecd4; end: 105eeedf3; -[SCMapViewController _userLocationCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eeecd4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112739fc4;
  lVar1 = *(long *)(param_3 + lVar6);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126c5a00;
    _objc_alloc(PTR_PTR_1126c5a00);
    uVar3 = *(undefined8 *)(param_3 + lVar6);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51c80();
    _objc_retain(0);
    _objc_release(0);
    func_0x00010bffd4e0(param_1,param_2,0,0,0x40d1940000000000,puVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105eeedf4; end: 105eeef53; -[SCMapViewController _flyToUserLocationWithDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eeedf4(double param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = (long)_DAT_11273a144;
  iVar1 = (int)*(undefined8 *)(param_2 + lVar5);
  func_0x00010c071800();
  if (iVar1 == 0) {
    func_0x00010c1dbe20(0,*(undefined8 *)(param_2 + _DAT_11273a140));
  }
  else {
    puVar2 = PTR_PTR_1126b1dc8;
    func_0x00010bf2a160(PTR_PTR_1126b1dc8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d17a0(*(undefined8 *)(param_2 + lVar5));
    _objc_release(puVar2);
  }
  lVar6 = (long)_DAT_112739fc4;
  lVar3 = *(long *)(param_2 + lVar6);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar5 != 0) {
    puVar2 = PTR_PTR_1126c5b90;
    _objc_alloc(PTR_PTR_1126c5b90);
    uVar4 = *(undefined8 *)(param_2 + lVar6);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11273a140;
    func_0x00010c026f20(param_1,puVar2);
    func_0x00010c2121a0(*(undefined8 *)(param_2 + lVar5));
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc5350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s__activelyCenterMapOnUserRegionAn_11254ee70,0.0 < param_1);
  return;
}



/* Entry: 105eeef54; end: 105eef087; -[SCMapViewController _flyToUserLocationWithAutomaticDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eeef54(double param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  undefined8 uVar9;
  
  uVar1 = *(ulong *)(param_3 + _DAT_11273a00c);
  func_0x0001090222b4();
  if ((uVar1 & 1) != 0) {
    return;
  }
  lVar7 = (long)_DAT_112739fc4;
  lVar2 = *(long *)(param_3 + lVar7);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    uVar9 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51c80();
    uVar6 = *(undefined8 *)(param_3 + _DAT_11273a140);
    dVar8 = param_1;
    uVar9 = param_2;
    func_0x00010bf28e60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf34640();
    func_0x000108d312a8(param_1,param_2,dVar8,uVar9);
    uVar9 = 0x3fe0000000000000;
    if (10000.0 < param_1) {
      uVar9 = 0;
    }
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be184b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar9,param_3,PTR_s__flyToUserLocationWithDuration__112563ac8);
  return;
}



/* Entry: 105eef088; end: 105eef0ef; -[SCMapViewController _centerCameraAndSelectUserId:source:actionType:isCluster:focusViewSource:openSingleFocusView:launchSource:isInitialDestination:animated:footerActionId:reaction:reactionImages:browsingContextClusterID:tappedUserIDs:] */

void FUN_105eef088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  func_0x00010bddc580(param_1,param_2,1,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Entry: 105eef0f0; end: 105eef35f; -[SCMapViewController _centerCamera:andSelectUserId:source:actionType:isCluster:focusViewSource:openSingleFocusView:launchSource:isInitialDestination:animated:footerActionId:reaction:reactionImages:browsingContextClusterID:tappedUserIDs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eef0f0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 in_x7;
  long lVar6;
  undefined1 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined1 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  _objc_retain(param_5);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000030);
  _objc_retain(in_stack_00000038);
  lVar6 = param_5;
  func_0x00010c08fa60();
  if (lVar6 == 0) goto LAB_105eef318;
  uVar1 = *(ulong *)(param_2 + _DAT_11273a190);
  if (uVar1 == 0) {
LAB_105eef1c0:
    uVar3 = *(undefined8 *)(param_2 + _DAT_11273a018);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12b140();
    _objc_release(uVar3);
  }
  else {
    func_0x00010c0b9700();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) goto LAB_105eef1c0;
  }
  uVar3 = *(undefined8 *)(param_2 + _DAT_11273a084);
  func_0x00010bfedde0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0826a0();
  _objc_release(uVar3);
  lVar6 = (long)_DAT_11273a140;
  func_0x00010c2bf200(*(undefined8 *)(param_2 + lVar6));
  func_0x00010be03940(param_2,param_3,2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,in_stack_00000018);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + lVar6);
  func_0x00010bf28e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb92e0(param_2,param_3,param_5,in_x7,in_stack_00000000,in_stack_00000008,
                      in_stack_00000010,puVar4,uVar3,in_stack_00000020,in_stack_00000028,
                      in_stack_00000030,in_stack_00000038);
  _objc_release(uVar3);
  _objc_release(puVar4);
  func_0x00010be5d9e0(param_2,param_3,param_5);
  uVar3 = *(undefined8 *)(param_2 + _DAT_112739fc8);
  func_0x00010c0fa580(uVar3,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + _DAT_11273a030);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29ec80(param_1);
  _objc_release(uVar5);
  _objc_release(uVar3);
LAB_105eef318:
  _objc_release(in_stack_00000038);
  _objc_release(in_stack_00000030);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105eef360; end: 105eef48f; -[SCMapViewController _flyToCoordinate:zoomLevel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eef360(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = (long)_DAT_11273a164;
  lVar2 = param_4 + lVar3;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126c5b98;
    _objc_alloc(PTR_PTR_1126c5b98);
    func_0x00010bffd4a0(param_1,param_2,param_3);
    param_4 = param_4 + lVar3;
    _objc_loadWeakRetained(param_4);
    func_0x00010c0d5ec0();
    _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  lVar2 = (long)_DAT_11273a140;
  uVar4 = param_1;
  func_0x00010bf8b7e0(param_1,param_2,param_3,PTR_PTR_1126b1e08,param_5,
                      *(undefined8 *)(param_4 + lVar2),*(undefined8 *)(param_4 + _DAT_11273a134));
  func_0x00010bfb3460(param_1,param_2,param_3,0,uVar4,*(undefined8 *)(param_4 + lVar2),param_5,0);
  return;
}



/* Entry: 105eef490; end: 105eef643; -[SCMapViewController _activelyCenterMapOnUserRegionAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eef490(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar4 = (long)_DAT_11273a188;
  *(undefined1 *)(param_1 + lVar4) = 1;
  func_0x00010bddc680();
  if (*(char *)(param_1 + lVar4) == '\x01') {
    lVar5 = (long)_DAT_112739fc4;
    lVar1 = *(long *)(param_1 + lVar5);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar4 == 0) {
      _objc_initWeak(auStack_48,param_1);
      uVar2 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126aebf0;
      _objc_alloc(PTR_PTR_1126aebf0);
      _objc_opt_class(param_1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c011b80(puVar3);
      _objc_retain(PTR___dispatch_main_q_11034be20);
      _objc_copyWeak(auStack_58,auStack_48);
      uStack_50 = param_3;
      func_0x00010c135ca0(0x4024000000000000,uVar2);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(puVar3);
      _objc_release(param_1);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_58);
      _objc_destroyWeak(auStack_48);
    }
  }
  return;
}



/* Entry: 105eef644; end: 105eef693;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eef644(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(char *)(lVar1 + _DAT_11273a188) == '\x01')) {
    func_0x00010bddc680(lVar1,param_2,*(undefined1 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105eef694; end: 105eef80b; -[SCMapViewController _usersToCenterMapOn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eef694(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_112739fc8;
  uVar1 = *(ulong *)(param_1 + lVar8);
  func_0x00010bf00660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + _DAT_112739fc4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release();
  func_0x000109022190();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0720c0();
  _objc_release(lVar3);
  if (lVar7 == 0 || (int)lVar4 != 0) {
    uVar1 = 3;
    if (lVar7 != 0) {
      uVar1 = 1;
    }
    uVar5 = *(ulong *)(param_1 + lVar8);
    func_0x00010bf19520(uVar5,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0d3c80();
    _objc_release(uVar5);
    uVar5 = uVar6;
    func_0x00010bf529e0();
    if (uVar1 <= uVar5) {
      if (lVar7 != 0) {
        lVar7 = *(long *)(param_1 + lVar8);
        func_0x00010c0fa5c0(lVar7,param_2,*(undefined8 *)(param_1 + _DAT_11273a010));
        _objc_retainAutoreleasedReturnValue();
        if (lVar7 != 0) {
          func_0x00010befa120(uVar6,param_2,lVar7);
        }
        _objc_release(lVar7);
      }
      goto LAB_105eef7a8;
    }
    _objc_release(uVar6);
  }
  _objc_retain(uVar2);
  uVar6 = uVar2;
LAB_105eef7a8:
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 105eef80c; end: 105ef0117; -[SCMapViewController _centerMapOnUserRegionAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eef80c(undefined8 param_1,ulong param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  int iVar16;
  byte bVar17;
  int iVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [16];
  
  lVar13 = (long)_DAT_11273a164;
  lVar15 = param_2 + lVar13;
  _objc_loadWeakRetained();
  if (lVar15 != 0) {
    lVar15 = (long)_DAT_11273a160;
    bVar17 = *(byte *)(param_2 + lVar15);
    _objc_release();
    if ((bVar17 & 1) == 0) {
      puVar4 = PTR_PTR_1126c5ba0;
      func_0x00010bf6aa00(PTR_PTR_1126c5ba0);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = param_2 + lVar13;
      _objc_loadWeakRetained(lVar13);
      func_0x00010c0d5ec0();
      _objc_release(lVar13);
      *(undefined1 *)(param_2 + (long)_DAT_11273a188) = 0;
      *(undefined1 *)(param_2 + lVar15) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar4);
      return;
    }
  }
  lVar15 = (long)_DAT_11273a00c;
  iVar16 = (int)*(undefined8 *)(param_2 + lVar15);
  func_0x0001090222b4();
  if ((iVar16 != 0) && (lVar13 = (long)_DAT_11273a160, (*(byte *)(param_2 + lVar13) & 1) == 0)) {
    lVar15 = param_2 + (long)_DAT_11273a170;
    _objc_loadWeakRetained(lVar15);
    func_0x00010c24d960();
    _objc_release(lVar15);
    *(undefined1 *)(param_2 + (long)_DAT_11273a188) = 0;
    *(undefined1 *)(param_2 + lVar13) = 1;
    return;
  }
  lVar2 = *(long *)(param_2 + (long)_DAT_112739fc4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar2;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uVar3 = param_2;
  func_0x00010bee7320();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar3;
  if (lVar13 == 0) {
    uVar5 = uVar3;
    func_0x00010bf529e0();
    if (uVar5 != 0) {
      func_0x00010c0b8620();
      _objc_retainAutoreleasedReturnValue();
      iVar18 = _DAT_11273a140;
      iVar16 = _DAT_11273a134;
      dVar20 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
      dVar25 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
      dVar26 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
      dVar27 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
      func_0x00010c063cc0(dVar20,dVar25,dVar26,dVar27,0x4010000000000000,0x4028000000000000,
                          PTR_PTR_1126b1e08);
      goto LAB_105eefa60;
    }
    uVar14 = *(undefined8 *)(param_2 + (long)_DAT_11273a030);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = 0;
    func_0x0001072433f8(0,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aa060(uVar14);
    _objc_release(uVar19);
    _objc_release(uVar14);
    func_0x00010be54d40(param_2);
    uVar12 = *(ulong *)(param_2 + (long)_DAT_11273a050);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar12;
    func_0x00010c076e60();
    if ((uVar5 & 1) == 0) {
      iVar16 = (int)*(undefined8 *)(param_2 + (long)_DAT_112739fc8);
      func_0x00010bfd7a20();
      _objc_release(uVar12);
      if (iVar16 != 0) {
        func_0x00010be54d60(param_2);
      }
      goto LAB_105eeff90;
    }
  }
  else {
    func_0x00010c0b8620();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010902219c(*(undefined8 *)(param_2 + lVar15));
    uVar14 = param_1;
    func_0x0001090221fc(*(undefined8 *)(param_2 + lVar15));
    iVar18 = _DAT_11273a140;
    iVar16 = _DAT_11273a134;
    dVar20 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
    dVar25 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
    dVar26 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    dVar27 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
    func_0x00010c063ce0(dVar20,dVar25,dVar26,dVar27,param_1,uVar14,PTR_PTR_1126b1e08);
LAB_105eefa60:
    lVar15 = (long)_DAT_11273a144;
    iVar1 = (int)*(undefined8 *)(param_2 + lVar15);
    dVar22 = dVar20;
    dVar24 = dVar25;
    dVar23 = dVar26;
    dVar29 = dVar27;
    func_0x00010c071800();
    if (iVar1 == 0) {
      _objc_initWeak(auStack_b0,param_2);
      puVar4 = PTR_PTR_1126b1e08;
      func_0x00010bf3e820(param_2);
      _objc_copyWeak(auStack_f0,auStack_b0);
      _objc_retain(lVar13);
      _objc_retain(uVar12);
      func_0x00010bf34760(dVar20,dVar25,dVar26,dVar27,dVar22,dVar24,dVar23,dVar29,puVar4);
      _objc_release(uVar12);
      _objc_release(lVar13);
      _objc_destroyWeak(auStack_f0);
      _objc_destroyWeak(auStack_b0);
    }
    else {
      uVar14 = *(undefined8 *)(param_2 + (long)iVar18);
      func_0x00010bf3e820(param_2);
      dVar21 = dVar20;
      dVar28 = dVar27;
      func_0x00010bf2b200(dVar20,dVar25,dVar26,dVar27,dVar22,dVar24,dVar23,dVar29);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf01f00();
      dVar22 = dVar21;
      func_0x00010c0fc7c0(uVar14);
      dVar24 = dVar22;
      func_0x00010bf34640(uVar14);
      func_0x00010bf20c00(*(undefined8 *)(param_2 + (long)iVar16));
      dVar22 = (dVar22 * 3.141592653589793) / -180.0 + 1.5707963267948966;
      _sin();
      dVar23 = 0.2617993877991494;
      _tan();
      dVar24 = (dVar24 * 3.141592653589793) / 180.0;
      _cos();
      dVar24 = ((dVar24 * 6.283185307179586 * 6378137.0) /
               ((dVar23 * (dVar21 / dVar22 + dVar21 / dVar22)) / dVar28)) * 0.001953125;
      _log2();
      dVar22 = dVar24;
      func_0x00010bdd4780(param_2);
      _exp2(dVar24);
      dVar29 = 75.0 / (dVar24 * 512.0);
      func_0x000108d31494(dVar20,dVar25);
      dVar25 = (dVar25 * -2.0 + 1.0) * 3.141592653589793;
      _sinh(dVar25);
      _atan();
      dVar23 = (dVar20 - dVar29) * 360.0 + -180.0;
      dVar20 = (dVar25 * 180.0) / 3.141592653589793;
      _CLLocationCoordinate2DMake(dVar20,dVar23);
      func_0x000108d31494(dVar26,dVar27);
      dVar25 = ((dVar27 - ABS(dVar22 + 20.0) / (dVar24 * 512.0)) * -2.0 + 1.0) * 3.141592653589793;
      _sinh(dVar25);
      _atan();
      dVar27 = (dVar26 + dVar29) * 360.0 + -180.0;
      dVar26 = (dVar25 * 180.0) / 3.141592653589793;
      _CLLocationCoordinate2DMake(dVar26,dVar27);
      puVar4 = PTR_PTR_1126c5ba8;
      _objc_alloc(PTR_PTR_1126c5ba8);
      func_0x00010c0219a0(dVar20,dVar23);
      puVar6 = PTR_PTR_1126c5ba8;
      _objc_alloc();
      func_0x00010c0219a0(dVar26,dVar27);
      puVar7 = PTR_PTR_1126c5bb0;
      _objc_alloc(PTR_PTR_1126c5bb0);
      func_0x00010c04faa0();
      puVar8 = PTR_PTR_1126b1dc8;
      func_0x00010bf2a0e0(PTR_PTR_1126b1dc8);
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_b0,param_2);
      puVar9 = PTR_PTR_1126c5bb8;
      _objc_alloc(PTR_PTR_1126c5bb8);
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      dVar20 = 1.60807493534087e-314;
      uStack_e0 = 0xc2000000;
      pcStack_d8 = FUN_105ef0188;
      puStack_d0 = &UNK_110848218;
      _objc_copyWeak(auStack_b8,auStack_b0);
      _objc_retain(lVar13);
      lStack_c8 = lVar13;
      _objc_retain(uVar12);
      uStack_c0 = uVar12;
      func_0x00010bff8d00(puVar9);
      func_0x00010bf3e820(param_2);
      func_0x00010bf3e820(param_2);
      uVar19 = *(undefined8 *)(param_2 + lVar15);
      puVar10 = PTR_PTR_1126b1dc8;
      func_0x00010c271cc0((dVar20 - dVar22) + -20.0,0,PTR_PTR_1126b1dc8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c193420(uVar19);
      _objc_release(puVar10);
      uVar19 = 0x3fd3333333333333;
      if (param_4 == 0) {
        uVar19 = 0;
      }
      puVar10 = PTR_PTR_1126b1dc8;
      func_0x00010bf03e60(uVar19,PTR_PTR_1126b1dc8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d1820(*(undefined8 *)(param_2 + lVar15));
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(uStack_c0);
      _objc_release(lStack_c8);
      _objc_destroyWeak(auStack_b8);
      _objc_destroyWeak(auStack_b0);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(uVar14);
    }
    bVar17 = 1;
    *(undefined1 *)(param_2 + (long)_DAT_11273a160) = 1;
    uVar11 = *(ulong *)(param_2 + (long)_DAT_11273a050);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar11;
    func_0x00010c076e60();
    _objc_release(uVar11);
    if ((lVar13 != 0) || ((uVar5 & 1) == 0)) {
      bVar17 = (byte)*(undefined8 *)(param_2 + (long)_DAT_112739fc8);
      func_0x00010bfd7a20();
      bVar17 = bVar17 ^ 1;
    }
    *(byte *)(param_2 + (long)_DAT_11273a188) = bVar17;
    func_0x00010be54d40(param_2);
  }
  _objc_release(uVar12);
LAB_105eeff90:
  _objc_release(uVar3);
  _objc_release(lVar13);
  return;
}



/* Entry: 105ef0118; end: 105ef0187;  */

void FUN_105ef0118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010bf51c80(param_4);
  func_0x00010bf51c80(param_4);
  _objc_release(param_4);
  func_0x00010c021a60(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ef0188; end: 105ef0397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ef0188(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    uVar3 = *(ulong *)(param_1 + 0x28);
    func_0x00010bf529e0(uVar3);
    uVar6 = (ulong)(lVar1 != 0);
    uVar4 = *(undefined8 *)(lVar2 + _DAT_11273a088);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bf200(*(undefined8 *)(lVar2 + _DAT_11273a140));
    func_0x00010c0a8ac0(uVar4);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(lVar2 + _DAT_11273a030);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0;
    func_0x0001072433f8(0,uVar6,uVar6 < uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aa060(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar4);
    if ((*(byte *)(lVar2 + _DAT_11273a188) & 1) == 0) {
      func_0x00010be54d60(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105ef0398; end: 105ef04c7; -[SCMapViewController _currentInitialViewportDataState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_105ef0398(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  
  lVar2 = *(long *)(param_1 + _DAT_112739fc4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273a050);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c076e60();
  _objc_release(uVar4);
  lVar11 = (long)_DAT_112739fc8;
  uVar6 = *(ulong *)(param_1 + lVar11);
  func_0x00010bf00660();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + lVar11);
  func_0x00010c0fa5c0(lVar2,param_2,*(undefined8 *)(param_1 + _DAT_11273a010));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar7 = uVar6;
  func_0x00010bf529e0();
  iVar1 = (int)*(undefined8 *)(param_1 + lVar11);
  func_0x00010bfd7a20();
  uVar8 = 0x1000000;
  if (iVar1 == 0) {
    uVar8 = 0;
  }
  uVar9 = 0x10000;
  if (uVar7 <= (lVar2 != 0)) {
    uVar9 = 0;
  }
  uVar10 = 0x100;
  if ((int)uVar5 == 0) {
    uVar10 = 0;
  }
  if (lVar3 != 0) {
    uVar10 = uVar10 + 1;
  }
  _objc_release(uVar6);
  return uVar10 | uVar8 | uVar9;
}


