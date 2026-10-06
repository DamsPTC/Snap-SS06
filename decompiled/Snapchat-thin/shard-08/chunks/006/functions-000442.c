/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106445e1c; end: 106445ecb; -[SCAdTrackerHelper fireProfileOpenTerminalTrackWithPageId:swipeStartLocation:swipeEndLocation:] */

void FUN_106445e1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1 + 0x100;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x100;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfb0580();
    _objc_release(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106445ecc; end: 106445ed3; -[SCAdTrackerHelper onBrandNameProfileDisplay:profileId:] */

void FUN_106445ecc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e2b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onBrandNameProfileDisplay_profil_1126164e8);
  return;
}



/* Entry: 106445ed4; end: 106445edb; -[SCAdTrackerHelper onTaggedProfileDisplay:profileId:] */

void FUN_106445ed4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e6ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onTaggedProfileDisplay_profileId_1126175c8);
  return;
}



/* Entry: 106445edc; end: 106446033; -[SCAdTrackerHelper updateVideoLoadingInfo:loadedOnEntry:loadedOnExit:mediaWaitTimeInSec:] */

void FUN_106445edc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_2 + 0x48);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf1f480();
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined *)0x0;
    func_0x000106458ea4(0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126b91f8;
    func_0x00010c0c57c0(PTR_PTR_1126b91f8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar5);
  puVar3 = puVar2;
  func_0x00010c2a7860(puVar2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010c2b38e0(puVar3,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c2b3900(puVar2,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010c2b3bc0(param_1,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e2380();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106446034; end: 10644603b; -[SCAdTrackerHelper didChangeAudioVolume:adRequestClientId:snapIndex:] */

void FUN_106446034(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e29f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onAudioChangeInteractionUpdate_s_112616490);
  return;
}



/* Entry: 10644603c; end: 10644611f; -[SCAdTrackerHelper webTrackingHelper] */

void FUN_10644603c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar3 = *(long *)(param_1 + 0xf8);
  if (lVar3 == 0) {
    _objc_initWeak(auStack_38,param_1);
    puVar1 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0xf8);
    *(undefined **)(param_1 + 0xf8) = puVar1;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    lVar3 = *(long *)(param_1 + 0xf8);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106446120; end: 10644615f;  */

void FUN_106446120(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf5be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106446160; end: 106446167; -[SCAdTrackerHelper onSurveyLeave:snapIndex:answer:] */

void FUN_106446160(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e6dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onSurveyAnswerUpdate_snapIndex_a_112617588);
  return;
}



/* Entry: 106446168; end: 10644616f; -[SCAdTrackerHelper onStickersMetadataChange:snapIndex:stickerMetadataArray:] */

void FUN_106446168(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e6a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onStickersStateUpdate_snapIndex__1126174b8);
  return;
}



/* Entry: 106446170; end: 106446177; -[SCAdTrackerHelper onAdSurveyResponseChanged:snapIndex:surveyResponse:] */

void FUN_106446170(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e2630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onAdSurveyResponseChanged_snapIn_1126163a0);
  return;
}



/* Entry: 106446178; end: 10644617f; -[SCAdTrackerHelper onReminderLocalBannerTapped:snapIndex:] */

void FUN_106446178(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e5f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onReminderLocalBannerTapped_snap_1126171e0);
  return;
}



/* Entry: 106446180; end: 106446187; -[SCAdTrackerHelper onReminderCountdownIdUpdate:snapIndex:reminderCountdownId:] */

void FUN_106446180(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e5f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onReminderCountdownIdUpdate_snap_1126171d8);
  return;
}



/* Entry: 106446188; end: 10644618f; -[SCAdTrackerHelper onReminderScheduled:snapIndex:] */

void FUN_106446188(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e5f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onReminderScheduled_snapIndex__1126171e8);
  return;
}



/* Entry: 106446190; end: 106446197; -[SCAdTrackerHelper onWakeUpTap:snapIndex:source:] */

void FUN_106446190(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e7a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onWakeUpTap_snapIndex_source__112617898);
  return;
}



/* Entry: 106446198; end: 10644619f; -[SCAdTrackerHelper onAdShareOpen:snapIndex:] */

void FUN_106446198(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e2570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onAdShareOpen_snapIndex__112616370);
  return;
}



/* Entry: 1064461a0; end: 1064461a7; -[SCAdTrackerHelper onAdShareSend:snapIndex:] */

void FUN_1064461a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e2590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onAdShareSend_snapIndex__112616378);
  return;
}



/* Entry: 1064461a8; end: 1064461b3; -[SCAdTrackerHelper onAdSubscribed:adIdentifier:snapIndex:] */

void FUN_1064461a8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xf1) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c0e2610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onAdSubscribed_adIdentifier_snap_112616398);
  return;
}



/* Entry: 1064461b4; end: 1064461bb; -[SCAdTrackerHelper onAdSubscribeButtonTapped:timestampMs:snapIndex:] */

void FUN_1064461b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e25f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onAdSubscribeButtonTapped_timest_112616390);
  return;
}



/* Entry: 1064461bc; end: 1064461c7; -[SCAdTrackerHelper setInitialAdSubscribed:adIdentifier:snapIndex:] */

void FUN_1064461bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xf2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1ac830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setInitialAdSubscribed_adIdentif_112648c30);
  return;
}



/* Entry: 1064461c8; end: 1064461cf; -[SCAdTrackerHelper onAdFavorited:timestampMs:source:adIdentifier:snapIndex:] */

void FUN_1064461c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e2250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onAdFavorited_timestampMs_source_1126162a8);
  return;
}



/* Entry: 1064461d0; end: 1064461d7; -[SCAdTrackerHelper onAdFavoritedUpdate:adIdentifier:snapIndex:] */

void FUN_1064461d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e2270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onAdFavoritedUpdate_adIdentifier_1126162b0);
  return;
}



/* Entry: 1064461d8; end: 1064461df; -[SCAdTrackerHelper onInitialEngagementState:reposted:adIdentifier:snapIndex:] */

void FUN_1064461d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e48b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onInitialEngagementState_reposte_112616c40);
  return;
}



/* Entry: 1064461e0; end: 1064461e7; -[SCAdTrackerHelper onAdReposted:timestampMs:adIdentifier:snapIndex:] */

void FUN_1064461e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e23b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onAdReposted_timestampMs_adIdent_112616300);
  return;
}



/* Entry: 1064461e8; end: 10644623b; -[SCAdTrackerHelper setCanShowMultiSegmentExperience:adIdentifier:snapIndex:] */

void FUN_1064461e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010bef6380(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c177d80(param_1,param_2,param_3,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10644623c; end: 106446293; -[SCAdTrackerHelper onEndCardDisplayed:snapIndex:endCardType:overrideExistingValue:] */

void FUN_10644623c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6)

{
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c195de0(param_1,param_2,param_4,param_5,param_6 ^ 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106446294; end: 1064462e7; -[SCAdTrackerHelper onEndCardTapped:adIdentifier:snapIndex:] */

void FUN_106446294(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010bef6380(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c195e60(param_1,param_2,param_3,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064462e8; end: 106446357; -[SCAdTrackerHelper onPollEndCardOptionTap:adIdentifier:snapIndex:] */

void FUN_1064462e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  func_0x00010bef6380(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c1dec00(param_1,param_2,param_3,param_5);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106446358; end: 10644635f; -[SCAdTrackerHelper onAppInActiveForAdIdentifier:snapIndex:timestampMs:] */

void FUN_106446358(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e2870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onAppInActivityTriggered_snapInd_112616430);
  return;
}



/* Entry: 106446360; end: 106446367; -[SCAdTrackerHelper onUpdateAppInstallStoreKitLoadInfo:snapIndex:loadedOnEntry:loadedOnExit:visiblePageLoadTimeSeconds:collectionItemIndex:] */

void FUN_106446360(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e2890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onAppInstallInteractionUpdate_sn_112616438);
  return;
}



/* Entry: 106446368; end: 10644636f; -[SCAdTrackerHelper onSwipeAttempt:snapIndex:] */

void FUN_106446368(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e6df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onSwipeAttempt_snapIndex__112617590);
  return;
}



/* Entry: 106446370; end: 106446377; -[SCAdTrackerHelper onAnySwipeAttempt:snapIndex:] */

void FUN_106446370(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e2770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onAnySwipeAttempt_snapIndex__1126163f0);
  return;
}



/* Entry: 106446378; end: 10644637f; -[SCAdTrackerHelper onTryOnTrigger:snapIndex:arExperienceResumed:] */

void FUN_106446378(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e73f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onTryOnTrigger_snapIndex_arExper_112617710);
  return;
}



/* Entry: 106446380; end: 106446387; -[SCAdTrackerHelper onTryOnAdDisplayed:adIdentifier:snapIndex:] */

void FUN_106446380(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e7390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onTryOnAdDisplayed_adIdentifier__1126176f8);
  return;
}



/* Entry: 106446388; end: 10644638f; -[SCAdTrackerHelper onTryOnAttachmentClicked:snapIndex:] */

void FUN_106446388(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e73b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onTryOnAttachmentClicked_snapInd_112617700);
  return;
}



/* Entry: 106446390; end: 106446397; -[SCAdTrackerHelper onTryOnLensSessionStarted:adIdentifier:snapIndex:] */

void FUN_106446390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e73d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onTryOnLensSessionStarted_adIden_112617708);
  return;
}



/* Entry: 106446398; end: 10644639f; -[SCAdTrackerHelper onContextMenuOpen:snapIndex:] */

void FUN_106446398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e3230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onContextMenuOpen_snapIndex__1126166a0);
  return;
}



/* Entry: 1064463a0; end: 1064463a7; -[SCAdTrackerHelper onAdNotInterested:snapIndex:] */

void FUN_1064463a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e2370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onAdNotInterested_snapIndex__1126162f0);
  return;
}



/* Entry: 1064463a8; end: 1064464bb; -[SCAdTrackerHelper onDeepLinkSwiped:snapIndex:deepLinkSucceeded:fallbackType:deepLinkUri:collectionItemIndex:] */

void FUN_1064463a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (((param_5 & 1) != 0) || (param_6 == 3)) {
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ca300;
    func_0x00010bf9b480(PTR_PTR_1126ca300,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e4e20(uVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  func_0x00010c0e3560(*(undefined8 *)(param_1 + 0x20),param_2,param_3,param_4,param_5,param_6 == 2,
                      param_6 == 1,param_6 == 3,param_7,param_8);
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064464bc; end: 1064464f3; -[SCAdTrackerHelper onExternalWebViewOpen:snapIndex:collectionItemIndex:] */

void FUN_1064464bc(long param_1)

{
  func_0x00010c0e5f80(0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1064464f4; end: 1064464fb; -[SCAdTrackerHelper onClickInteraction:adRequestClientId:snapIndex:] */

void FUN_1064464f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e2e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onClickInteraction_adRequestClie_1126165a8);
  return;
}



/* Entry: 1064464fc; end: 106446503; -[SCAdTrackerHelper addAttachmentTriggeredTsMsToLastClickInteraction:adRequestClientId:snapIndex:] */

void FUN_1064464fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef6ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addAttachmentTriggeredTsMsToLast_11259b558);
  return;
}



/* Entry: 106446504; end: 10644650b; -[SCAdTrackerHelper addAttachmentFullyVisibleTsMsToLastClickInteraction:adRequestClientId:snapIndex:] */

void FUN_106446504(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef6e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addAttachmentFullyVisibleTsMsToL_11259b540);
  return;
}



/* Entry: 10644650c; end: 106446513; -[SCAdTrackerHelper onValdiAdTrackEvent:adRequestClientId:snapIndex:] */

void FUN_10644650c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e7790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onValdiAdTrackEvent_adRequestCli_1126177f8);
  return;
}



/* Entry: 106446514; end: 106446517; -[SCAdTrackerHelper updateIndexedStoryWebviewViewed:params:snapIndex:] */

void FUN_106446514(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee4390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateWebViewViewed_params_snap_112596a88);
  return;
}



/* Entry: 106446518; end: 10644651f; -[SCAdTrackerHelper onPharmaDisclaimerRendered:adRequestClientId:snapIndex:] */

void FUN_106446518(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e57b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onPharmaDisclaimerRendered_adIde_112617000);
  return;
}



/* Entry: 106446520; end: 106446527; -[SCAdTrackerHelper onPharmaDisclaimerClicked:adRequestClientId:snapIndex:] */

void FUN_106446520(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e5770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onPharmaDisclaimerClicked_adIden_112616ff0);
  return;
}



/* Entry: 106446528; end: 106446577; -[SCAdTrackerHelper _createWebTrackingHelper] */

void FUN_106446528(void)

{
  _objc_alloc(PTR_PTR_1126ca8b8);
  func_0x00010c018680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106446578; end: 10644662f; -[SCAdTrackerHelper _updateTopSnapImageViewed:params:snapIndex:] */

void FUN_106446578(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b2348;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfe74e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar2;
  func_0x00010c067fc0(uVar2);
  func_0x00010c0e7280(uVar4,param_2,param_3,param_5,0,uVar3);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106446630; end: 10644682f; -[SCAdTrackerHelper _updateTopSnapVideoViewed:params:snapIndex:] */

void FUN_106446630(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_PTR_1126b2348;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0c4a80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126b2348;
  func_0x00010c068800(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar3 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126b2348;
  func_0x00010bf8b340(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar4 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar5);
  func_0x00010c067fc0(uVar1);
  _objc_release(uVar1);
  func_0x00010c067fc0(uVar3);
  _objc_release(uVar3);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c067fc0(uVar4);
  _objc_release(uVar4);
  func_0x00010c0e7880(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106446830; end: 1064468e7; -[SCAdTrackerHelper _updateTopSnapWebpageViewed:params:snapIndex:] */

void FUN_106446830(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b2348;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0c4a80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar2;
  func_0x00010c067fc0(uVar2);
  func_0x00010c0e72c0(uVar4,param_2,param_3,param_5,0,uVar3);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1064468e8; end: 106446b17; -[SCAdTrackerHelper _updateComposerDpaMetadataWithPage:adRequestClientId:params:snapIndex:] */

void FUN_1064468e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126ca2b0;
  func_0x00010c118b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06eec0();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126ca8d8;
  if ((int)puVar2 != 0) {
    _objc_retain(param_5);
    func_0x00010bf89580(puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126ca8e0;
    _objc_opt_class(PTR_PTR_1126ca8e0);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar1 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ca8e8;
    _objc_alloc(PTR_PTR_1126ca8e8);
    if (uVar1 == 0) {
      func_0x00010bff40e0(puVar2);
    }
    else {
      uVar5 = uVar4;
      func_0x00010bf0aca0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c072940(uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0ddf40(uVar4);
      func_0x00010c0df720(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26b160(uVar4);
      func_0x00010bf14620(uVar4);
      func_0x00010bff40e0(puVar2);
      _objc_release(puVar3);
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
    _objc_release(uVar1);
    func_0x00010c0e3060(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106446b18; end: 106446b1f; -[SCAdTrackerHelper updateGestureParameters:snapIndex:gestureParameters:] */

void FUN_106446b18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e46f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onGestureParametersUpdate_snapIn_112616bd0);
  return;
}



/* Entry: 106446b20; end: 106446bf7; -[SCAdTrackerHelper _updateStoreSettingsWithPage:adRequestClientId:params:snapIndex:] */

void FUN_106446b20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126ca2b0;
  uVar1 = param_3;
  func_0x00010c118b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07fba0(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ca2b0;
  if ((int)puVar2 != 0) {
    uVar1 = param_3;
    func_0x00010c118b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c070000(puVar3,param_2,uVar1);
    _objc_release(uVar1);
    func_0x00010c0e6b00(*(undefined8 *)(param_1 + 0x20),param_2,param_4,param_6,puVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106446bf8; end: 106446e23; -[SCAdTrackerHelper _updateDeepLinkSwiped:params:snapIndex:] */

void FUN_106446bf8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  
  puVar1 = PTR_PTR_1126c9cc0;
  uVar17 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfbaae0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  puVar4 = PTR_PTR_1126c9cc0;
  func_0x00010bfa0360();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c0e00e0(param_4,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1f3c0();
  puVar7 = PTR_PTR_1126c9cc0;
  func_0x00010bfa03a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010c0e00e0(param_4,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf1f3c0();
  puVar10 = PTR_PTR_1126ca2f8;
  func_0x00010bf68e80(PTR_PTR_1126ca2f8);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_4;
  func_0x00010c0e00e0(param_4,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf1f3c0();
  puVar13 = PTR_PTR_1126ca8c0;
  func_0x00010bf68260(PTR_PTR_1126ca8c0);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_4;
  func_0x00010c0e00e0(param_4,param_2,puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126ca1a8;
  func_0x00010c089020(PTR_PTR_1126ca1a8);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_4;
  func_0x00010c0e00e0(param_4,param_2,puVar15);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0e3560(uVar17,param_2,param_3,param_5,uVar3 & 0xffffffff,uVar6 & 0xffffffff,
                      uVar9 & 0xffffffff,uVar12,uVar14,uVar16);
  _objc_release(param_3);
  _objc_release(uVar16);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(puVar13);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106446e24; end: 106446fc3; -[SCAdTrackerHelper _updateAppInstallSwiped:params:snapIndex:] */

void FUN_106446e24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  
  puVar1 = PTR_PTR_1126c7d88;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f1720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0e00e0(param_5,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  puVar4 = PTR_PTR_1126c7d88;
  func_0x00010c0f1740(PTR_PTR_1126c7d88);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_5;
  func_0x00010c0e00e0(param_5,param_3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1f3c0();
  puVar7 = PTR_PTR_1126c7d88;
  func_0x00010c0f2320(PTR_PTR_1126c7d88);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_5;
  func_0x00010c0e00e0(param_5,param_3,puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  puVar9 = PTR_PTR_1126ca1a8;
  func_0x00010c089020(PTR_PTR_1126ca1a8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_5;
  func_0x00010c0e00e0(param_5,param_3,puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c0e7560(param_1,param_2,param_3,param_4,param_6,uVar3 & 0xffffffff,uVar6,uVar10);
  _objc_release(param_4);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106446fc4; end: 1064471eb; -[SCAdTrackerHelper _updateWebViewViewed:params:snapIndex:] */

void FUN_106446fc4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  double dVar16;
  
  puVar1 = PTR_PTR_1126c9ab0;
  uVar15 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f1720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0e00e0(param_5,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  puVar4 = PTR_PTR_1126c9ab0;
  func_0x00010c0f1740();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_5;
  func_0x00010c0e00e0(param_5,param_3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1f3c0();
  puVar7 = PTR_PTR_1126c9ab0;
  func_0x00010c0f2320();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_5;
  func_0x00010c0e00e0(param_5,param_3,puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  puVar9 = PTR_PTR_1126ca1a8;
  dVar16 = param_1;
  func_0x00010c089020(PTR_PTR_1126ca1a8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_5;
  func_0x00010c0e00e0(param_5,param_3,puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126c9ab0;
  func_0x00010c0f2340(PTR_PTR_1126c9ab0);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_5;
  func_0x00010c0e00e0(param_5,param_3,puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  puVar13 = PTR_PTR_1126c9ab0;
  func_0x00010c0f1620(PTR_PTR_1126c9ab0);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_5;
  func_0x00010c0e00e0(param_5,param_3,puVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c0e5f80(param_1,uVar15,param_3,param_4,param_6,uVar3 & 0xffffffff,uVar6 & 0xffffffff,
                      uVar10,(long)dVar16,uVar14);
  _objc_release(param_4);
  _objc_release(uVar14);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1064471ec; end: 1064472df; -[SCAdTrackerHelper _updateShowcaseViewed:params:snapIndex:] */

void FUN_1064471ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bef5e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR_PTR_1126ca1a8;
  func_0x00010c089020(PTR_PTR_1126ca1a8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0e00e0(param_4,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0e6760(uVar3,param_2,param_3,param_5,uVar4,uVar1);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064472e0; end: 1064487b7; -[SCAdTrackerHelper trackWebViewPerformanceMetrics:adId:adProductType:adServeRequestId:serveItemId:page:adRequestClientId:snapIndex:] */

void FUN_1064472e0(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined *param_9,
                  undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
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
  undefined8 uVar25;
  undefined8 uStack_e8;
  undefined8 uStack_a8;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar2 = PTR_PTR_1126b2340;
  puVar1 = param_9;
  func_0x00010c118b40(param_9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0771c0(puVar2,param_3,puVar1);
  if ((int)puVar2 != 0) {
    puVar2 = param_9;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bfe00;
    func_0x00010bf3fe60(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c0e00e0(puVar2,param_3,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c067fc0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (puVar5 == (undefined *)0x2) goto LAB_10644876c;
    puVar1 = PTR_PTR_1126ca8c8;
    _objc_opt_new(PTR_PTR_1126ca8c8);
    func_0x00010c163720();
    func_0x0001084b952c(param_6);
    func_0x00010c163f80(puVar1,param_3,param_6);
    puVar2 = PTR_PTR_1126c9ab0;
    func_0x00010c0f1be0(PTR_PTR_1126c9ab0);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    lVar7 = lVar6;
    func_0x00010beec820(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1acfa0(puVar1,param_3,lVar7);
    _objc_release(lVar7);
    puVar2 = PTR_PTR_1126c9ab0;
    func_0x00010c0f1f20(PTR_PTR_1126c9ab0);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c067fc0();
    func_0x00010c21e3e0(puVar1,param_3,lVar8);
    _objc_release(lVar7);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c9ab0;
    func_0x00010c0f1f40(PTR_PTR_1126c9ab0);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c067fc0();
    func_0x00010c21eaa0(puVar1,param_3,lVar8);
    _objc_release(lVar7);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c9ab0;
    func_0x00010c0f1700(PTR_PTR_1126c9ab0);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c067fc0();
    func_0x00010c2250e0(puVar1,param_3,lVar8);
    _objc_release(lVar7);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c9ab0;
    func_0x00010c0f15e0(PTR_PTR_1126c9ab0);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c067fc0();
    func_0x00010c2250a0(puVar1,param_3,lVar8);
    _objc_release(lVar7);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c9ab0;
    func_0x00010c0f1760(PTR_PTR_1126c9ab0);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    param_1 = param_1 * 100.0;
    func_0x00010c1e4680(puVar1,param_3,(long)param_1);
    _objc_release(lVar7);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c9ab0;
    func_0x00010c0f16c0(PTR_PTR_1126c9ab0);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c067fc0();
    func_0x00010c1e9240(puVar1,param_3,lVar8);
    _objc_release(lVar7);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c9ab0;
    func_0x00010c0f1600(PTR_PTR_1126c9ab0);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c067fc0();
    _objc_release(lVar7);
    _objc_release(puVar2);
    if (lVar8 != 0) {
      puVar2 = PTR_PTR_1126c9ab0;
      func_0x00010c0f1600(PTR_PTR_1126c9ab0);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_4;
      func_0x00010c0e00e0(param_4,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c067fc0();
      func_0x00010c196fe0(puVar1,param_3,lVar8);
      _objc_release(lVar7);
      _objc_release(puVar2);
    }
    func_0x00010c1644c0(puVar1,param_3,param_7);
    func_0x00010c164480(puVar1,param_3,param_8);
    puVar2 = PTR_PTR_1126ca1a8;
    func_0x00010c089020(PTR_PTR_1126ca1a8);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c9ab0;
    func_0x00010c0f14a0(PTR_PTR_1126c9ab0);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (lVar8 == 0) {
      uStack_a8 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR_PTR_1126b9450;
      func_0x00010c0f9820(PTR_PTR_1126b9450);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c0e00e0(lVar8,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c067fc0();
      func_0x00010c21ea80(puVar1,param_3,lVar10);
      _objc_release(lVar9);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126b9450;
      func_0x00010c0867e0(PTR_PTR_1126b9450);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c0e00e0(lVar8,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c067fc0();
      func_0x00010c1a3da0(puVar1,param_3,lVar10);
      _objc_release(lVar9);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126b9450;
      func_0x00010c086800(PTR_PTR_1126b9450);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c0e00e0(lVar8,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c067fc0();
      func_0x00010c1a3d80(puVar1,param_3,lVar10);
      _objc_release(lVar9);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126b9450;
      func_0x00010c0f9840(PTR_PTR_1126b9450);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c0e00e0(lVar8,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bde58;
      func_0x00010c0d6ba0(PTR_PTR_1126bde58);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c0e00e0(lVar9,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c067fc0();
      func_0x00010c1cb9e0(puVar1,param_3,lVar11);
      _objc_release(lVar10);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bde58;
      func_0x00010c280aa0(PTR_PTR_1126bde58);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c0e00e0(lVar9,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c067fc0();
      func_0x00010c21ba80(puVar1,param_3,lVar11);
      _objc_release(lVar10);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bde58;
      func_0x00010c280a80(PTR_PTR_1126bde58);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c0e00e0(lVar9,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c067fc0();
      func_0x00010c21ba60(puVar1,param_3,lVar11);
      _objc_release(lVar10);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bde58;
      func_0x00010c124a20(PTR_PTR_1126bde58);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c0e00e0(lVar9,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c067fc0();
      func_0x00010c1e92a0(puVar1,param_3,lVar11);
      _objc_release(lVar10);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bde58;
      func_0x00010c1249a0(PTR_PTR_1126bde58);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c0e00e0(lVar9,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c067fc0();
      func_0x00010c1e9260(puVar1,param_3,lVar11);
      _objc_release(lVar10);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bde58;
      func_0x00010bfaa6e0(PTR_PTR_1126bde58);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c0e00e0(lVar9,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c067fc0();
      func_0x00010c19b500(puVar1,param_3,lVar11);
      _objc_release(lVar10);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bde58;
      func_0x00010bf87ee0(PTR_PTR_1126bde58);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c0e00e0(lVar9,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c067fc0();
      func_0x00010c190f60(puVar1,param_3,lVar11);
      _objc_release(lVar10);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bde58;
      func_0x00010bf87ea0(PTR_PTR_1126bde58);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c0e00e0(lVar9,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c067fc0();
      func_0x00010c190f20(puVar1,param_3,lVar11);
      _objc_release(lVar10);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bde58;
      func_0x00010bf48340(PTR_PTR_1126bde58);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c0e00e0(lVar9,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c067fc0();
      func_0x00010c180cc0(puVar1,param_3,lVar11);
      _objc_release(lVar10);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bde58;
      func_0x00010bf482a0(PTR_PTR_1126bde58);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c0e00e0(lVar9,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c067fc0();
      func_0x00010c180c80(puVar1,param_3,lVar11);
      _objc_release(lVar10);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bde58;
      func_0x00010c156c20(PTR_PTR_1126bde58);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c0e00e0(lVar9,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c067fc0();
      func_0x00010c1f99c0(puVar1,param_3,lVar11);
      _objc_release(lVar10);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bde58;
      func_0x00010c136740(PTR_PTR_1126bde58);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c0e00e0(lVar9,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c067fc0();
      func_0x00010c1ec0e0(puVar1,param_3,lVar11);
      _objc_release(lVar10);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bde58;
      func_0x00010c13bc60(PTR_PTR_1126bde58);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c0e00e0(lVar9,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c067fc0();
      func_0x00010c1ed120(puVar1,param_3,lVar11);
      _objc_release(lVar10);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bde58;
      func_0x00010c13b840(PTR_PTR_1126bde58);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c0e00e0(lVar9,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c067fc0();
      func_0x00010c1ecfc0(puVar1,param_3,lVar11);
      _objc_release(lVar10);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bde58;
      func_0x00010bf87da0(PTR_PTR_1126bde58);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c0e00e0(lVar9,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c067fc0();
      func_0x00010c190e40(puVar1,param_3,lVar11);
      _objc_release(lVar10);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bde58;
      func_0x00010bf87ce0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar9;
      func_0x00010c0e00e0(lVar9,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar11;
      func_0x00010c067fc0();
      func_0x00010c190de0(puVar1,param_3,lVar10);
      _objc_release(lVar11);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bde58;
      func_0x00010bf87b80();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar9;
      func_0x00010c0e00e0(lVar9,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar11;
      func_0x00010c067fc0();
      func_0x00010c190d40(puVar1,param_3,lVar10);
      _objc_release(lVar11);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bde58;
      func_0x00010bf87b60();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar9;
      func_0x00010c0e00e0(lVar9,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar11;
      func_0x00010c067fc0();
      func_0x00010c190d20(puVar1,param_3,lVar10);
      _objc_release(lVar11);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bde58;
      func_0x00010bf87aa0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar9;
      func_0x00010c0e00e0(lVar9,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar11;
      func_0x00010c067fc0();
      func_0x00010c190ce0(puVar1,param_3,lVar10);
      _objc_release(lVar11);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bde58;
      func_0x00010c09b4a0(PTR_PTR_1126bde58);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c0e00e0(lVar9,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c067fc0();
      func_0x00010c1be680(puVar1,param_3,lVar11);
      _objc_release(lVar10);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bde58;
      func_0x00010c09b460();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c0e00e0(lVar9,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c067fc0();
      func_0x00010c1be660(puVar1,param_3,lVar11);
      _objc_release(lVar10);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126b9450;
      func_0x00010c0f97e0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar8;
      func_0x00010c0e00e0(lVar8,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar10;
      func_0x00010c0b4ca0();
      _objc_release(lVar10);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bde58;
      func_0x00010c0d6ba0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c0e00e0(lVar9,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar10;
      func_0x00010c0b4ca0();
      _objc_release(lVar10);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bde58;
      func_0x00010c13b840();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar9;
      func_0x00010c0e00e0(lVar9,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar11;
      func_0x00010c0b4ca0();
      lVar14 = param_2;
      func_0x00010beeabe0(param_2,param_3,lVar10,lVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bde58;
      func_0x00010bf87b80();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar9;
      func_0x00010c0e00e0(lVar9,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar11;
      func_0x00010c0b4ca0();
      lVar15 = param_2;
      func_0x00010beeabe0(param_2,param_3,lVar10,lVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bde58;
      func_0x00010c09b460(PTR_PTR_1126bde58);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c0e00e0(lVar9,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c0b4ca0();
      lVar16 = param_2;
      func_0x00010beeabe0(param_2,param_3,lVar11,lVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bde58;
      func_0x00010bf87ce0(PTR_PTR_1126bde58);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c0e00e0(lVar9,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c0b4ca0();
      lVar17 = param_2;
      func_0x00010beeabe0(param_2,param_3,lVar11,lVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bde58;
      func_0x00010bf87b80();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar9;
      func_0x00010c0e00e0(lVar9,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar11;
      func_0x00010c0b4ca0();
      lVar18 = param_2;
      func_0x00010beeabe0(param_2,param_3,lVar10,lVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bde58;
      func_0x00010bf87aa0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar9;
      func_0x00010c0e00e0(lVar9,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar11;
      func_0x00010c0b4ca0();
      lVar19 = param_2;
      func_0x00010beeabe0(param_2,param_3,lVar10,lVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bde58;
      func_0x00010c13bc60();
      _objc_retainAutoreleasedReturnValue();
      lVar20 = lVar9;
      func_0x00010c0e00e0(lVar9,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar20;
      func_0x00010c0b4ca0();
      lVar10 = param_2;
      func_0x00010beeabe0(param_2,param_3,lVar11,lVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar20);
      _objc_release(puVar2);
      if (lVar12 < 1) {
        uStack_e8 = (undefined *)0x0;
      }
      else {
        uStack_e8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,lVar12);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar2 = PTR_PTR_1126b9450;
      func_0x00010c0867c0(PTR_PTR_1126b9450);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_4;
      func_0x00010c0e00e0(param_4,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar3 = PTR_PTR_1126b9450;
      func_0x00010c0865e0(PTR_PTR_1126b9450);
      _objc_retainAutoreleasedReturnValue();
      lVar20 = param_4;
      func_0x00010c0e00e0(param_4,param_3,puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      func_0x00010c0df720(param_1 * 100.0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar20);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126b9450;
      func_0x00010c0f9880(PTR_PTR_1126b9450);
      _objc_retainAutoreleasedReturnValue();
      lVar20 = lVar8;
      func_0x00010c0e00e0(lVar8,param_3,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126b9450;
      func_0x00010c0f9860(PTR_PTR_1126b9450);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar8;
      func_0x00010c0e00e0(lVar8,param_3,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126ca408;
      func_0x00010c15f4a0(PTR_PTR_1126ca408);
      _objc_retainAutoreleasedReturnValue();
      lVar21 = param_4;
      func_0x00010c0e00e0(param_4,param_3,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126ca408;
      func_0x00010c15f4e0(PTR_PTR_1126ca408);
      _objc_retainAutoreleasedReturnValue();
      lVar22 = param_4;
      func_0x00010c0e00e0(param_4,param_3,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126ca408;
      func_0x00010c15f500(PTR_PTR_1126ca408);
      _objc_retainAutoreleasedReturnValue();
      lVar23 = param_4;
      func_0x00010c0e00e0(param_4,param_3,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      uStack_a8 = PTR_PTR_1126b9318;
      _objc_alloc();
      lVar24 = lVar6;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,lVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00e280(uStack_a8,param_3,lVar14,lVar15,uStack_e8,lVar16,puVar2,lVar11,lVar20,
                          lVar24,puVar3,lVar10,lVar17,lVar18,lVar19,lVar12,lVar21,lVar22,lVar23,0);
      _objc_release(puVar3);
      _objc_release(lVar24);
      puVar3 = PTR_PTR_1126b9450;
      func_0x00010c0f9800(PTR_PTR_1126b9450);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar8;
      func_0x00010c0e00e0(lVar8,param_3,puVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar24 = lVar13;
      func_0x00010bf1f3c0();
      _objc_release(lVar13);
      _objc_release(puVar3);
      if ((int)lVar24 != 0) {
        uVar25 = *(undefined8 *)(param_2 + 0x20);
        puVar3 = PTR_PTR_1126ca410;
        func_0x00010bfbca80(PTR_PTR_1126ca410);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e7a80(uVar25,param_3,puVar3,lVar7,param_10,param_11);
        _objc_release(puVar3);
      }
      uVar25 = *(undefined8 *)(param_2 + 0xb8);
      func_0x00010c269d40(uVar25);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b92c0;
      func_0x00010c1203c0(PTR_PTR_1126b92c0,param_3,lVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c78a0(uVar25,param_3,puVar3);
      _objc_release(puVar3);
      _objc_release(uVar25);
      _objc_release(lVar23);
      _objc_release(lVar22);
      _objc_release(lVar21);
      _objc_release(lVar12);
      _objc_release(lVar20);
      _objc_release(puVar2);
      _objc_release(lVar11);
      _objc_release(uStack_e8);
      _objc_release(lVar10);
      _objc_release(lVar19);
      _objc_release(lVar18);
      _objc_release(lVar17);
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(lVar14);
      _objc_release(lVar9);
    }
    puVar2 = PTR_PTR_1126ca408;
    func_0x00010bf21840(PTR_PTR_1126ca408);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c2827c0();
    _objc_release(lVar9);
    _objc_release(puVar2);
    if (lVar10 != 4) {
      uVar25 = *(undefined8 *)(param_2 + 0x20);
      puVar2 = PTR_PTR_1126ca410;
      func_0x00010c2a4140(PTR_PTR_1126ca410,param_3,uStack_a8,lVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e7a80(uVar25,param_3,puVar2,lVar7,param_10,param_11);
      _objc_release(puVar2);
    }
    puVar2 = PTR_PTR_1126ca1e0;
    func_0x00010c0ebe60(PTR_PTR_1126ca1e0);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf1f3c0();
    func_0x00010c1d5c60(puVar1,param_3,lVar10);
    _objc_release(lVar9);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ca1e0;
    func_0x00010bf912e0(PTR_PTR_1126ca1e0);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf1f3c0();
    func_0x00010c1ecd60(puVar1,param_3,lVar10);
    _objc_release(lVar9);
    _objc_release(puVar2);
    uVar25 = *(undefined8 *)(param_2 + 0x68);
    func_0x00010c269d40(uVar25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar25);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(uStack_a8);
    _objc_release(lVar6);
  }
  _objc_release(puVar1);
LAB_10644876c:
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1064487b8; end: 106448853; -[SCAdTrackerHelper onInstantPageUpdateLoadInfo:collectionItemIndex:adIdentifier:snapIndex:] */

void FUN_1064487b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ca410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c2a4140(puVar1,param_2,param_3,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7a80(uVar2,param_2,puVar1,param_4,param_5,param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106448854; end: 1064488eb; -[SCAdTrackerHelper onInstantPageDismiss:collectionItemIndex:adIdentifier:snapIndex:] */

void FUN_106448854(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ca410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf85020(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7a80(uVar2,param_2,puVar1,param_4,param_5,param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1064488ec; end: 10644897b; -[SCAdTrackerHelper onWebviewDidTapExbButtonWithCollectionItemIndex:Identifier:snapIndex:] */

void FUN_1064488ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ca410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf7ca80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7a80(uVar2,param_2,puVar1,param_3,param_4,param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10644897c; end: 106448a0b; -[SCAdTrackerHelper onWebviewDidTapCopyLinkWithCollectionItemIndex:Identifier:snapIndex:] */

void FUN_10644897c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ca410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf7c880(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7a80(uVar2,param_2,puVar1,param_3,param_4,param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106448a0c; end: 106448a43; -[SCAdTrackerHelper _webViewLatencyValue:startTimestamp:] */

void FUN_106448a0c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  if ((0 < param_4) && (param_4 <= param_3)) {
    func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3 - param_4);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106448a44; end: 106448dc7; -[SCAdTrackerHelper _swipedFromTopSnap:adResponse:snapIndex:adViewContext:adSessionId:page:params:attachmentTriggerType:triggerType:option:lastInteraction:] */

void FUN_106448a44(long param_1,undefined8 param_2,uint param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000020);
  lVar1 = param_4;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a180();
  func_0x00010c0e5700(*(undefined8 *)(param_1 + 0x20));
  uVar7 = in_stack_00000018;
  if (((param_3 ^ 1) & 1) != 0) goto LAB_106448d74;
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bef60c0();
  uVar4 = uVar3;
  FUN_106442044();
  if (((uVar4 & 1) == 0) && (1 < uVar3 - 0xd)) {
    lVar5 = param_4;
    func_0x00010c257640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) goto LAB_106448b74;
  }
  else {
LAB_106448b74:
    puVar6 = PTR_PTR_1126b8da0;
    func_0x00010c115b80(PTR_PTR_1126b8da0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2804a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(in_stack_00000018);
    _objc_release(puVar6);
  }
  puVar6 = PTR_PTR_1126b8da0;
  func_0x00010c115b80(PTR_PTR_1126b8da0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf4b4c0();
  if ((int)uVar8 == 0) {
    puVar9 = PTR_PTR_1126b8da0;
    func_0x00010c2499a0(PTR_PTR_1126b8da0);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf4b4c0();
    _objc_release(puVar9);
    _objc_release(puVar6);
    if ((int)uVar8 != 0) goto LAB_106448c2c;
  }
  else {
    _objc_release(puVar6);
LAB_106448c2c:
    func_0x00010be69760(0,param_1);
  }
  if (uVar3 == 3) {
    puVar6 = PTR_PTR_1126b8d98;
    func_0x00010c0fca40(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar6;
    func_0x00010c2ac460(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar10);
    _objc_release(puVar9);
    uVar12 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar12;
    func_0x00010bef2aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar8);
    _objc_release(uVar12);
    func_0x00010c2a3b60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7c420();
    _objc_release(lVar5);
    _objc_release(param_1);
    _objc_release(puVar11);
  }
  _objc_release(uVar2);
LAB_106448d74:
  _objc_release(lVar1);
  _objc_release(in_stack_00000020);
  _objc_release(uVar7);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106448dc8; end: 106448e2f; -[SCAdTrackerHelper _updateWindowFocusChange:page:snapIndex:adIdentifier:] */

void FUN_106448dc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_6);
  func_0x00010643afcc(param_4);
  func_0x00010c0e7c80(uVar1,param_2,param_6,param_5,param_4,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 106448e30; end: 10644915f; -[SCAdTrackerHelper _reportPlaybackStreamingMetrics:adRequestClientId:] */

void FUN_106448e30(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar6 = PTR_PTR_1126b2348;
  func_0x00010c276c80(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,puVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  _objc_release(lVar1);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126afec0;
  puVar3 = PTR_PTR_1126b2348;
  func_0x00010c064440(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c155420(puVar6);
  lVar10 = (long)param_1;
  _objc_release(lVar1);
  _objc_release(puVar3);
  if (0 < lVar2 || lVar10 != 0) {
    uVar4 = *(ulong *)(param_2 + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf1f480();
    if ((uVar5 & 1) == 0) {
      puVar6 = (undefined *)0x1;
      func_0x000106458ea4(1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar6 = PTR_PTR_1126b91f8;
      func_0x00010c25c8a0(PTR_PTR_1126b91f8);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar4);
    puVar3 = puVar6;
    func_0x00010c2a7860(puVar6,param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar7 = puVar3;
    func_0x00010c2b3a60(puVar3,param_3,lVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar6 = PTR_PTR_1126afec0;
    puVar3 = PTR_PTR_1126b2348;
    func_0x00010c064460(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c155420(puVar6);
    puVar8 = puVar7;
    func_0x00010c2b3800(puVar7,param_3,(long)param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(lVar1);
    _objc_release(puVar3);
    puVar6 = PTR_PTR_1126afec0;
    puVar3 = PTR_PTR_1126b2348;
    func_0x00010c276ca0(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c155420(puVar6);
    puVar6 = puVar8;
    func_0x00010c2b3ac0(puVar8,param_3,(long)param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(lVar1);
    _objc_release(puVar3);
    puVar3 = puVar6;
    func_0x00010c2b3aa0(puVar6,param_3,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126afec0;
    puVar7 = PTR_PTR_1126b2348;
    func_0x00010c064440(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_4;
    func_0x00010c0e00e0(param_4,param_3,puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c155420(puVar6);
    puVar6 = puVar3;
    func_0x00010c2b37e0(puVar3,param_3,(long)param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(lVar1);
    _objc_release(puVar7);
    uVar9 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e2380();
    _objc_release(uVar9);
    _objc_release(puVar6);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106449160; end: 106449207; -[SCAdTrackerHelper _checkAudioMuted] */

void FUN_106449160(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126aed60;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf5e0c0(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106449208; end: 106449243;  */

void FUN_106449208(long param_1,long param_2)

{
  if (param_2 == 1) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c283900(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106449244; end: 10644924b; -[SCAdTrackerHelper updateAudioVolume:] */

void FUN_106449244(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2838b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_updateAudioOutputVolume__11267e850);
  return;
}



/* Entry: 10644924c; end: 106449333; -[SCAdTrackerHelper _trackAd:adTrackInfo:triggerType:option:] */

void FUN_10644924c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x0001084b926c(param_3,param_4,uVar2,uVar3,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c278880();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106449334; end: 10644938f; -[SCAdTrackerHelper onLifecycleEvent:] */

void FUN_106449334(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bed96e0(param_1,param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e4e20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106449390; end: 1064493d3; -[SCAdTrackerHelper _updateIfOnAttachment:] */

void FUN_106449390(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010c079060();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bf1f3c0();
    *(char *)(param_1 + 0xf0) = (char)lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064493d4; end: 106449433; -[SCAdTrackerHelper onTopSnapPlaybackBegin:snapIndex:] */

void FUN_1064493d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e72a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106449434; end: 10644943b; -[SCAdTrackerHelper onTapToPauseInteraction:adRequestClientId:snapIndex:] */

void FUN_106449434(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e7110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onTapToPauseInteraction_adReques_112617658);
  return;
}



/* Entry: 10644943c; end: 1064494f7; -[SCAdTrackerHelper _updateAdLifecycleTimestampsTrackerTimestampsForAdIdentifier:snapIndex:params:] */

void FUN_10644943c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4bc0();
  uVar2 = param_1;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef3060();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0xa0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c285de0(param_1,uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064494f8; end: 1064494ff; -[SCAdTrackerHelper adViewingStatusForAdIdentifier:] */

void FUN_1064494f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef6390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_adViewingStatusForAdIdentifier__11259b288);
  return;
}



/* Entry: 106449500; end: 1064496ff; -[SCAdTrackerHelper logDpaLayerInteractionEventForAdRequestClientId:collectionItems:tileIndex:collectionItemIndex:defaultAttachmentIndex:interactionSource:attachmentTriggered:interactionTimestamp:sourceRelativeLocation:screenRelativeLocation:screenLocation:scrollDepth:scrollOffset:] */

void FUN_106449500(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  lVar1 = param_1;
  func_0x00010bef6380(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29f440();
  lVar3 = lVar1;
  func_0x00010c29f440();
  lVar3 = lVar3 - (ulong)(0 < lVar2);
  if (-1 < lVar3) {
    uVar5 = *(undefined8 *)(param_1 + 0xd0);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef94a0(uVar5,param_2,param_3,param_9,puVar4,param_4,param_5,param_6,param_7,param_8
                        ,param_11,param_12,param_13,param_14,param_15,param_16);
    _objc_release(puVar4);
  }
  _objc_release(lVar1);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106449700; end: 106449707; -[SCAdTrackerHelper didExpandAdWithClientId:atIndex:] */

void FUN_106449700(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf76110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didExpandAdWithClientId_atIndex__1125bb1e8);
  return;
}



/* Entry: 106449708; end: 106449857; -[SCAdTrackerHelper logInteractiveStickerInfoWithAdRequestClientId:snapIndex:stickerInfo:] */

void FUN_106449708(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_3);
    uStack_50 = param_4;
    _objc_retain(param_5);
    func_0x00010bdc7ca0(param_1);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  else {
    func_0x00010c0e6a20(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106449858; end: 106449897;  */

void FUN_106449858(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c0e6a20(*(undefined8 *)(lVar1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106449898; end: 106449983; -[SCAdTrackerHelper _addPendingAdShownActionForAdRequestIdentifier:snapIndex:actionBlock:] */

void FUN_106449898(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_3 != 0) {
    puVar2 = *(undefined **)(param_1 + 0xe8);
    _objc_retain(param_5);
    _objc_retain(param_3);
    func_0x00010c0e00e0(puVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    }
    else {
      _objc_retain(puVar2);
      puVar1 = puVar2;
    }
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ca8d0;
    _objc_alloc(PTR_PTR_1126ca8d0);
    func_0x00010c048080();
    _objc_release(param_5);
    func_0x00010befa120(puVar1,param_2,puVar2);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xe8),param_2,puVar1,param_3);
    _objc_release(param_3);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106449984; end: 10644998b; -[SCAdTrackerHelper interactionInfosForAdRequestClientId:] */

void FUN_106449984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c068730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xd0),PTR_s_interactionInfosForAdRequestClie_1125f7bd8);
  return;
}



/* Entry: 10644998c; end: 1064499bb; -[SCAdTrackerHelper setWebTrackingHelper:] */

void FUN_10644998c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064499bc; end: 1064499d3; -[SCAdTrackerHelper delegate] */

void FUN_1064499bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x100);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064499d4; end: 1064499df; -[SCAdTrackerHelper setDelegate:] */

void FUN_1064499d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x100,param_3);
  return;
}



/* Entry: 1064499e0; end: 106449b57; -[SCAdTrackerHelper .cxx_destruct] */

void FUN_1064499e0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x100);
  _objc_storeStrong(param_1 + 0xf8,0);
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
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106449b58; end: 106449d0b;  */

undefined8 FUN_106449b58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain();
  puVar2 = PTR_PTR_1126b2340;
  uVar1 = param_1;
  func_0x00010c118b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c083240(puVar2,param_2,uVar1);
  if ((int)puVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = param_1;
    func_0x00010c118b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf1f3c0();
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 106449d0c; end: 106449dbf;  */

uint FUN_106449d0c(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126bdd28;
  _objc_opt_class(PTR_PTR_1126bdd28);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    _objc_retain(param_2);
    uVar2 = param_2;
    func_0x00010bef3720();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bef51a0();
    uVar4 = param_2;
    func_0x00010c07dec0(param_2);
    _objc_release(param_2);
    puVar1 = PTR_PTR_1126b8ca8;
    func_0x00010bf922c0(PTR_PTR_1126b8ca8);
    uVar5 = (uint)uVar4 & (uint)puVar1;
    if (uVar3 == 2) {
      uVar5 = 1;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_2);
  return uVar5;
}



/* Entry: 106449dc0; end: 106449e3f;  */

uint FUN_106449dc0(undefined8 param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b8ca8;
  func_0x00010bf922c0(PTR_PTR_1126b8ca8);
  uVar1 = 0;
  if (param_3 == 2) {
    uVar1 = (uint)puVar2;
  }
  return param_2 | uVar1;
}



/* Entry: 106449e40; end: 10644a2b7;  */

void FUN_106449e40(double param_1,int param_2,ulong param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  
  dVar9 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf529e0();
  _objc_release(uVar4);
  if (uVar5 < 2) {
    uVar4 = uVar3;
    func_0x00010c242040();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c274c60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0c6c20();
    _objc_release(uVar5);
    _objc_release(uVar4);
    if (uVar6 == 2) {
      uVar4 = param_3;
      func_0x00010bef4240();
      if (uVar4 == 2) {
        lVar8 = param_5;
        func_0x00010c067f60();
        if (lVar8 == 0) goto LAB_10644a1d0;
        dVar10 = (double)lVar8;
      }
      else {
        if (param_2 == 0) goto LAB_10644a1d0;
        uVar5 = uVar3;
        func_0x00010c082160();
        uVar4 = 0;
        if ((int)uVar5 == 0) {
          uVar4 = 2;
        }
        uVar7 = param_4;
        func_0x00010bf8fa80();
        uVar5 = uVar3;
        func_0x00010bef51c0();
        dVar10 = -1.0;
        if (((uVar5 == 1) && ((int)uVar7 != 0)) && (func_0x00010c282940(uVar3), 0.0 < dVar9)) {
          uVar4 = uVar3;
          func_0x00010bef51c0();
          func_0x00010c282940(uVar3);
          dVar10 = dVar9;
        }
        if (1 < uVar4) goto LAB_10644a1d0;
      }
      func_0x00010bef60a0(uVar3);
      func_0x00010c0da220();
      uVar4 = uVar3;
      func_0x00010bef5620();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf66880();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c2a1780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a1800();
      uVar7 = param_6;
      func_0x00010bf9e980(dVar10,param_1,param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(puVar1);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
  }
LAB_10644a1d0:
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10644a2b8; end: 10644a377;  */

undefined8 FUN_10644a2b8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar3 = PTR_PTR_1126ca3f8;
  _objc_opt_class(PTR_PTR_1126ca3f8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126afec0;
  if (uVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010c1177a0(uVar2);
    func_0x00010c155420(puVar3);
  }
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10644a378; end: 10644a503; +[SCAdViewExitMethodConverter toExitEvent:verticalNavigationSwipeLeftToShowAttachment:] */

void FUN_10644a378(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  func_0x00010c27dd80();
  switch(param_3) {
  case 1:
    func_0x00010bf11220(PTR_PTR_1126ca8f0);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 2:
    func_0x00010bf13c20(PTR_PTR_1126ca8f0);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 3:
    func_0x00010c0b4f80(PTR_PTR_1126ca8f0);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 4:
    func_0x00010c2690c0(PTR_PTR_1126ca8f0);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 5:
    func_0x00010c269320(PTR_PTR_1126ca8f0);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 6:
    func_0x00010c2647c0(PTR_PTR_1126ca8f0);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 7:
    goto code_r0x00010644a48c;
  case 8:
    func_0x00010c264da0(PTR_PTR_1126ca8f0);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 9:
code_r0x00010644a4ec:
    func_0x00010c2650a0(PTR_PTR_1126ca8f0);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 10:
  case 0xc:
    if ((param_4 & 1) == 0) goto code_r0x00010644a4ec;
code_r0x00010644a48c:
    func_0x00010c264ce0(PTR_PTR_1126ca8f0);
    _objc_retainAutoreleasedReturnValue();
    break;
  default:
    func_0x00010c0ede40(PTR_PTR_1126ca8f0);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xe:
    func_0x00010c0e9020(PTR_PTR_1126ca8f0);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x10:
    func_0x00010c269200(PTR_PTR_1126ca8f0);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x11:
  case 0x12:
    func_0x00010c268e40(PTR_PTR_1126ca8f0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10644a504; end: 10644a6fb; +[SCAdViewExitMethodConverter toExitEventSwipeInfo:] */

void FUN_10644a504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c27dd80();
  if (lVar1 - 4U < 6) {
    puVar10 = PTR_PTR_1126ca8f8;
    _objc_alloc(PTR_PTR_1126ca8f8);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c24f260(param_5);
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c24f200(param_5);
    func_0x00010c0df720(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c24f280(param_5);
    func_0x00010c0df720(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c24f200(param_5);
    func_0x00010c0df720(param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf94ce0(param_5);
    func_0x00010c0df720(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf94cc0(param_5);
    func_0x00010c0df720(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf94d00(param_5);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf94cc0(param_5);
    func_0x00010c0df720(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011040(puVar10,param_4,puVar2,puVar3,puVar4,puVar5,puVar6,puVar7,puVar8,puVar9);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    puVar10 = (undefined *)0x0;
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10644a6fc; end: 10644a8a3; -[SCAdWebTrackingHelper initWithGrapheneRegistry:interactionHistoryTracker:userTrackedLogger:userNotTrackedLogger:adShake2ReportLogger:adLifecycleTimestampsTracker:webviewMetricsValidator:queuePerformer:] */

undefined1 *
FUN_10644a6fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_68 = PTR_PTR_1126f1308;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
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



/* Entry: 10644a8a4; end: 10644a8ab; -[SCAdWebTrackingHelper didReceiveWebViewContext:collectionItemIndex:adRequestClientId:snapIndex:] */

void FUN_10644a8a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf79690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_didReceiveWebViewContext_collect_1125bbf48);
  return;
}



/* Entry: 10644a8ac; end: 10644a8b3; -[SCAdWebTrackingHelper didCloseWebViewWithTrackInfo:collectionItemIndex:adRequestClientId:snapIndex:] */

void FUN_10644a8ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e7ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_onWebViewClosedWithTrackInfo_col_1126178c8);
  return;
}



/* Entry: 10644a8b4; end: 10644a8bb; -[SCAdWebTrackingHelper didReceiveWebBrowserSessionEvent:collectionItemIndex:adRequestClientId:snapIndex:] */

void FUN_10644a8b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e7a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_onWebBrowserSessionEvent_collect_1126178b8);
  return;
}



/* Entry: 10644a8bc; end: 10644a92f; -[SCAdWebTrackingHelper didSwipeUpRemoteWebPage:] */

void FUN_10644a8bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  *(undefined1 *)(param_2 + 0x48) = 1;
  _objc_retain(param_4);
  func_0x00010028941c();
  *(undefined8 *)(param_2 + 0x50) = param_1;
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c2a3b40(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be08700(param_2,param_3,puVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10644a930; end: 10644a9f3; -[SCAdWebTrackingHelper didLoadURLInBrowser:adResponse:] */

void FUN_10644a930(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR_PTR_1126b8d98;
    func_0x00010c2a3a20(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be08700(param_1,param_2,puVar2,param_4);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b8d98;
    func_0x00010c2a3a40(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc8a00(param_1,param_2,puVar2,param_4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10644a9f4; end: 10644aa4b; -[SCAdWebTrackingHelper didLoadURLInExternalBrowser:snapIndex:attachmentTriggerType:] */

void FUN_10644a9f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e6e00(uVar1,param_2,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


