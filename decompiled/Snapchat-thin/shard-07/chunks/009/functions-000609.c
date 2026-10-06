/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105b5026c; end: 105b5051b; -[SCFriendsFeedTableViewCell handleTap:] */

void FUN_105b5026c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c29a8;
  _objc_opt_class(PTR_PTR_1126c29a8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x000105bb4db8();
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar1;
    func_0x000105bb4e38();
    iVar8 = (int)uVar2;
  }
  else {
    iVar8 = 1;
  }
  uVar2 = uVar1;
  func_0x000105bb4eb8();
  uVar4 = uVar1;
  func_0x000105bb4e38();
  if ((int)uVar4 == 0) {
    uVar9 = 0;
  }
  else {
    uVar4 = uVar1;
    func_0x000105bb4ccc();
    uVar9 = (uint)uVar4 ^ 1;
  }
  uVar4 = uVar1;
  if (iVar8 == 0) {
    func_0x000105bb52c4();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfd5ca0();
    if ((int)uVar2 == 0) {
      uVar2 = param_1;
      func_0x00010c29d560();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c22dd60();
      _objc_release(uVar2);
      if ((int)uVar5 == 0) {
        uVar2 = param_1;
        func_0x00010c29d560();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        func_0x00010bfddd60();
        _objc_release(uVar2);
        if ((int)uVar5 != 0) {
          func_0x00010be31ae0(param_1);
        }
        goto LAB_105b504f0;
      }
      uVar2 = param_1;
      func_0x00010c13f300();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010bfa3920(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c268c60();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_3;
      func_0x00010c29bf00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd0140(uVar2);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar2);
LAB_105b504e8:
      func_0x00010bf207a0(param_1);
      goto LAB_105b504f0;
    }
LAB_105b50440:
    func_0x00010bfc1940(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf33c40();
  }
  else {
    uVar5 = uVar1;
    func_0x000105bb5374();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 == 0) {
      func_0x000105bb54d4(uVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(uVar5);
      uVar4 = uVar5;
    }
    _objc_release(uVar5);
    uVar5 = uVar1;
    func_0x00010bfd5ca0();
    if ((uVar5 & 1) != 0) goto LAB_105b50440;
    uVar5 = param_1;
    func_0x00010bfc1940(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf33de0();
    _objc_release(uVar5);
    if ((int)uVar2 == 0) {
      if (uVar9 == 0) goto LAB_105b504f0;
      goto LAB_105b504e8;
    }
    func_0x00010bfc1940(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf33da0();
  }
  _objc_release(param_1);
LAB_105b504f0:
  _objc_release(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b5051c; end: 105b50553; -[SCFriendsFeedTableViewCell handleDoubleTap:] */

void FUN_105b5051c(undefined8 param_1)

{
  func_0x00010bfc1940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf33c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b50554; end: 105b50557; -[SCFriendsFeedTableViewCell handleDelayedTap:] */

void FUN_105b50554(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be31af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleTapActionWithGestureRecog_11256a058);
  return;
}



/* Entry: 105b50558; end: 105b506c7; -[SCFriendsFeedTableViewCell handleLongPress:] */

void FUN_105b50558(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c29d560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf33f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c29a8;
  _objc_opt_class(PTR_PTR_1126c29a8);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  lVar6 = param_3;
  func_0x00010c252440();
  _objc_release(param_3);
  if (lVar6 != 1) goto LAB_105b506a8;
  uVar3 = uVar1;
  func_0x000105bb5dc4();
  uVar5 = uVar1;
  if ((int)uVar3 == 0) {
    uVar3 = uVar1;
    func_0x000105bb50e0();
    func_0x00010bfc1940(param_1);
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar3 != 0) {
      func_0x000105bb5164(uVar1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105b50670;
    }
    func_0x00010bf33c80(param_1);
  }
  else {
    func_0x00010bfc1940(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000105bb5e48(uVar1);
    _objc_retainAutoreleasedReturnValue();
LAB_105b50670:
    func_0x00010bf337e0(param_1);
    _objc_release(uVar5);
  }
  _objc_release(param_1);
LAB_105b506a8:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b506c8; end: 105b507db; -[SCFriendsFeedTableViewCell handlePressOnRetryButton:] */

void FUN_105b506c8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c29a8;
  _objc_opt_class(PTR_PTR_1126c29a8);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar4 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c13f300(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bfa3920(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010c112c80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfd0140(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf207b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_bounce_1125a5b90);
  return;
}



/* Entry: 105b507dc; end: 105b50813; -[SCFriendsFeedTableViewCell _handleTapActionWithGestureRecognizer:] */

void FUN_105b507dc(undefined8 param_1)

{
  func_0x00010bfc1940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf33da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b50814; end: 105b508df; -[SCFriendsFeedTableViewCell additionalS2RDebugOutput] */

undefined1 * FUN_105b50814(undefined **param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined ***pppuVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e1f4f8;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_1;
  func_0x00010bf33f20();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_40 = &PTR____CFConstantStringClassReference_110e0a478;
  if (ppuVar1 != (undefined **)0x0) {
    ppuStack_40 = ppuVar1;
  }
  pppuVar5 = &ppuStack_40;
  pppuVar6 = &ppuStack_48;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  pppuVar3 = &ppuStack_90;
  _objc_retain(pppuVar5);
  _objc_retain(pppuVar6);
  puStack_88 = PTR_PTR_1126ec0c0;
  ppuStack_90 = param_1;
  _objc_msgSendSuper2(&ppuStack_90,PTR_s_init_1125d9248);
  if (pppuVar3 != (undefined ***)0x0) {
    _objc_retain(pppuVar5);
    uVar4 = *(undefined8 *)((long)pppuVar3 + 8);
    *(undefined ****)((long)pppuVar3 + 8) = pppuVar5;
    _objc_release(uVar4);
    _objc_retain(pppuVar6);
    uVar4 = *(undefined8 *)((long)pppuVar3 + 0x10);
    *(undefined ****)((long)pppuVar3 + 0x10) = pppuVar6;
    _objc_release(uVar4);
  }
  _objc_release(pppuVar6);
  _objc_release(pppuVar5);
  return (undefined1 *)pppuVar3;
}



/* Entry: 105b508e0; end: 105b50983; -[SCFriendsFeedInteractionStateProvider initWithLastInteractionDataService:performer:] */

undefined1 *
FUN_105b508e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ec0c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b50984; end: 105b50a7b; -[SCFriendsFeedInteractionStateProvider interactionStateObservable] */

void FUN_105b50984(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c089160();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c089160();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar2 = uVar3;
  func_0x00010bf41860(uVar3,param_2,uVar1,&PTR___NSConcreteGlobalBlock_1108d6f80);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105b50a7c; end: 105b50a8f;  */

void FUN_105b50a7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0dcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c29b0,PTR_s__extractStateFromFriendInteracti_1125610d0,param_2,param_3);
  return;
}



/* Entry: 105b50a90; end: 105b50b27; +[SCFriendsFeedInteractionStateProvider _extractStateFromFriendInteractions:groupInteractions:] */

void FUN_105b50a90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be0dce0(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
  func_0x00010be0dce0(param_1,param_2,param_4,puVar1);
  _objc_release(param_4);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105b50b28; end: 105b50ba7; +[SCFriendsFeedInteractionStateProvider _extractStateFromInteractions:into:] */

void FUN_105b50b28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105b50ba8;
  puStack_30 = &UNK_1108d6fa0;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x00010bf97ce0(param_3,param_2,&puStack_48);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105b50ba8; end: 105b50c97;  */

void FUN_105b50ba8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c29b8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c08a0a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c08a160(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c088500(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c021880(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b50c98; end: 105b50cc7; -[SCFriendsFeedInteractionStateProvider .cxx_destruct] */

void FUN_105b50c98(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b50cc8; end: 105b50d57;  */

long FUN_105b50cc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0e00e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = -1;
  }
  else {
    func_0x00010c0e00e0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c067fc0();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 105b50d58; end: 105b524bf; -[SCConversationFeedDataSource initWithUserSession:userInfoServices:featureSettingsService:friendsFeedDataCoordinator:friendsFeedReadyLogger:ghostToFeedLogger:friendsFeedFirstRenderLatencyLogger:delegate:storiesReplayManager:substituteAnimationStateProvider:snapReplayAnimationStateProvider:sponsoredSnapAdResponseParser:playableCTAProvider:peekAPeekAnimationStateProvider:conversationManager:snapCountDownManager:circumstanceEngine:graphene:friendsFeedGrapheneV2:friendmojiDataProvider:friendmojiPresenter:friendmojiDataCoordinator:creatorSubscriptionsInfoProvider:lastInteractionDataService:contextPostSnapFeedDataFetcher:lensFriendsFeedContextDataFetcher:lensFriendsFeedContextConfigFetcher:friendsFeedActionTextGenerator:friendsFeedIconGenerator:shortcutsDataFetcher:friendsFeedShortcutsLogger:messagingExperimentService:storiesConfigProvider:pageLoadMetricManager:notificationToMessageReadyLogger:feedInitialRenderPublisher:plusFeatureGating:mapContextInFriendsFeedProvider:saturnFriendsFeedProvider:mapPersonLocationsProvider:friendshipFlashbacksDataManager:friendsFeedTracker:simpleSnapchatExperimentConfigProvider:platformUIExperimentsService:streakProvider:recentlyActiveRecordRepository:suggestionInFriendsFeedEnabled:myAIInGroupChatEnabled:renderStyleProvider:nglStudySettings:animationTriggerGatingEnabled:snapCountdownProviderEnabled:] */

undefined8 *
FUN_105b50d58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
             undefined4 param_53)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_2f8 [8];
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  code *pcStack_2e0;
  undefined *puStack_2d8;
  undefined1 auStack_2d0 [8];
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  code *pcStack_2b8;
  undefined *puStack_2b0;
  undefined1 auStack_2a8 [8];
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  undefined1 auStack_280 [8];
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined1 auStack_258 [8];
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined1 auStack_230 [8];
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined1 auStack_208 [8];
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
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
  undefined8 *puStack_160;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
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
  _objc_retain();
  _objc_retain();
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain();
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain();
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
  puStack_80 = PTR_PTR_1126ec0c8;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 0x4e) = 0;
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfef240();
    uVar10 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar10);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_retain(param_3);
    uVar10 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar10);
    _objc_retain(param_4);
    uVar10 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar10);
    _objc_retain(param_6);
    uVar10 = puVar1[0xb];
    puVar1[0xb] = param_6;
    _objc_release(uVar10);
    _objc_retain(param_5);
    uVar10 = puVar1[0x37];
    puVar1[0x37] = param_5;
    _objc_release(uVar10);
    _objc_retain(param_7);
    uVar10 = puVar1[0xc];
    puVar1[0xc] = param_7;
    _objc_release(uVar10);
    _objc_retain(param_8);
    uVar10 = puVar1[0xd];
    puVar1[0xd] = param_8;
    _objc_release(uVar10);
    _objc_retain(param_9);
    uVar10 = puVar1[0xe];
    puVar1[0xe] = param_9;
    _objc_release(uVar10);
    _objc_storeWeak(puVar1 + 0x6a,param_10);
    _objc_retain(param_11);
    uVar10 = puVar1[0xf];
    puVar1[0xf] = param_11;
    _objc_release(uVar10);
    _objc_retain(param_13);
    uVar10 = puVar1[0x15];
    puVar1[0x15] = param_13;
    _objc_release(uVar10);
    _objc_retain(param_18);
    uVar10 = puVar1[0x17];
    puVar1[0x17] = param_18;
    _objc_release(uVar10);
    *(undefined1 *)(puVar1 + 0x19) = (undefined1)param_53;
    *(char *)((long)puVar1 + 0xc9) = param_53._1_1_;
    _objc_retain(param_14);
    uVar10 = puVar1[0x39];
    puVar1[0x39] = param_14;
    _objc_release(uVar10);
    _objc_retain(param_15);
    uVar10 = puVar1[0x3a];
    puVar1[0x3a] = param_15;
    _objc_release(uVar10);
    _objc_retain(param_17);
    uVar10 = puVar1[0x48];
    puVar1[0x48] = param_17;
    _objc_release(uVar10);
    _objc_retain(param_19);
    uVar10 = puVar1[0x49];
    puVar1[0x49] = param_19;
    _objc_release(uVar10);
    _objc_retain(param_20);
    uVar10 = puVar1[0x26];
    puVar1[0x26] = param_20;
    _objc_release(uVar10);
    _objc_retain(param_21);
    uVar10 = puVar1[0x27];
    puVar1[0x27] = param_21;
    _objc_release(uVar10);
    _objc_retain(param_22);
    uVar10 = puVar1[0x43];
    puVar1[0x43] = param_22;
    _objc_release(uVar10);
    _objc_retain(param_23);
    uVar10 = puVar1[0x44];
    puVar1[0x44] = param_23;
    _objc_release(uVar10);
    _objc_retain(param_24);
    uVar10 = puVar1[0x45];
    puVar1[0x45] = param_24;
    _objc_release(uVar10);
    _objc_retain(param_25);
    uVar10 = puVar1[0x46];
    puVar1[0x46] = param_25;
    _objc_release(uVar10);
    _objc_retain(param_27);
    uVar10 = puVar1[0x4a];
    puVar1[0x4a] = param_27;
    _objc_release(uVar10);
    _objc_retain(param_28);
    uVar10 = puVar1[0x28];
    puVar1[0x28] = param_28;
    _objc_release(uVar10);
    _objc_retain(param_29);
    uVar10 = puVar1[0x29];
    puVar1[0x29] = param_29;
    _objc_release(uVar10);
    _objc_retain(param_30);
    uVar10 = puVar1[0x4b];
    puVar1[0x4b] = param_30;
    _objc_release(uVar10);
    _objc_retain(param_31);
    uVar10 = puVar1[0x4c];
    puVar1[0x4c] = param_31;
    _objc_release(uVar10);
    uVar10 = param_32;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = puVar1[0x2f];
    puVar1[0x2f] = uVar10;
    _objc_release(uVar11);
    _objc_retain(param_33);
    uVar10 = puVar1[0x36];
    puVar1[0x36] = param_33;
    _objc_release(uVar10);
    _objc_retain(param_34);
    uVar10 = puVar1[0x2b];
    puVar1[0x2b] = param_34;
    _objc_release(uVar10);
    _objc_retain(param_35);
    uVar10 = puVar1[0x4d];
    puVar1[0x4d] = param_35;
    _objc_release(uVar10);
    _objc_retain(param_36);
    uVar10 = puVar1[0x38];
    puVar1[0x38] = param_36;
    _objc_release(uVar10);
    _objc_retain(param_37);
    uVar10 = puVar1[0x3b];
    puVar1[0x3b] = param_37;
    _objc_release(uVar10);
    _objc_retain(param_38);
    uVar10 = puVar1[0x51];
    puVar1[0x51] = param_38;
    _objc_release(uVar10);
    _objc_retain(param_39);
    uVar10 = puVar1[0x55];
    puVar1[0x55] = param_39;
    _objc_release(uVar10);
    _objc_retain(param_40);
    uVar10 = puVar1[0x56];
    puVar1[0x56] = param_40;
    _objc_release(uVar10);
    _objc_retain(param_41);
    uVar10 = puVar1[0x59];
    puVar1[0x59] = param_41;
    _objc_release(uVar10);
    _objc_retain(param_42);
    uVar10 = puVar1[0x58];
    puVar1[0x58] = param_42;
    _objc_release(uVar10);
    _objc_retain(param_43);
    uVar10 = puVar1[0x60];
    puVar1[0x60] = param_43;
    _objc_release(uVar10);
    _objc_retain(param_44);
    uVar10 = puVar1[0x5b];
    puVar1[0x5b] = param_44;
    _objc_release(uVar10);
    _objc_retain(param_45);
    uVar10 = puVar1[0x5c];
    puVar1[0x5c] = param_45;
    _objc_release(uVar10);
    _objc_retain(param_46);
    uVar10 = puVar1[0x5d];
    puVar1[0x5d] = param_46;
    _objc_release(uVar10);
    _objc_retain(param_48);
    uVar10 = puVar1[99];
    puVar1[99] = param_48;
    _objc_release(uVar10);
    _objc_retain(param_49);
    uVar10 = puVar1[0x5e];
    puVar1[0x5e] = param_49;
    _objc_release(uVar10);
    _objc_retain(param_50);
    uVar10 = puVar1[0x5f];
    puVar1[0x5f] = param_50;
    _objc_release(uVar10);
    _objc_retain(param_52);
    uVar10 = puVar1[0x2c];
    puVar1[0x2c] = param_52;
    _objc_release(uVar10);
    uVar10 = param_17;
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = puVar1[0x25];
    puVar1[0x25] = uVar10;
    _objc_release(uVar11);
    puVar2 = PTR_PTR_1126c29b0;
    _objc_alloc();
    func_0x00010c021740();
    uVar10 = puVar1[0x52];
    puVar1[0x52] = puVar2;
    _objc_release(uVar10);
    puVar2 = PTR_PTR_1126c29c0;
    _objc_alloc();
    func_0x00010c02b980();
    uVar10 = puVar1[0x1a];
    puVar1[0x1a] = puVar2;
    _objc_release(uVar10);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar10 = puVar1[0x23];
    puVar1[0x23] = puVar2;
    _objc_release(uVar10);
    _objc_retain(param_51);
    uVar10 = puVar1[0x24];
    puVar1[0x24] = param_51;
    _objc_release(uVar10);
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new();
    uVar10 = puVar1[0x13];
    puVar1[0x13] = puVar2;
    _objc_release(uVar10);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new();
    uVar10 = puVar1[0x2a];
    puVar1[0x2a] = puVar2;
    _objc_release(uVar10);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new();
    uVar10 = puVar1[0x57];
    puVar1[0x57] = puVar2;
    _objc_release(uVar10);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new();
    uVar10 = puVar1[0x5a];
    puVar1[0x5a] = puVar2;
    _objc_release(uVar10);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new();
    uVar10 = puVar1[0x61];
    puVar1[0x61] = puVar2;
    _objc_release(uVar10);
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = puVar1[100];
    puVar1[100] = puVar2;
    _objc_release(uVar10);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new();
    uVar10 = puVar1[0x54];
    puVar1[0x54] = puVar2;
    _objc_release(uVar10);
    puVar1[0x2e] = 0;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new();
    uVar10 = puVar1[0x62];
    puVar1[0x62] = puVar2;
    _objc_release(uVar10);
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new();
    uVar10 = puVar1[0x11];
    puVar1[0x11] = puVar2;
    _objc_release(uVar10);
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new();
    uVar10 = puVar1[0x16];
    puVar1[0x16] = puVar2;
    _objc_release(uVar10);
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new();
    uVar10 = puVar1[0x12];
    puVar1[0x12] = puVar2;
    _objc_release(uVar10);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new();
    uVar10 = puVar1[0x18];
    puVar1[0x18] = puVar2;
    _objc_release(uVar10);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar10 = puVar1[0x1c];
    puVar1[0x1c] = puVar2;
    _objc_release(uVar10);
    func_0x00010c0d9840(puVar1[0x1c]);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar10 = puVar1[0x41];
    puVar1[0x41] = puVar2;
    _objc_release(uVar10);
    func_0x00010c0d9840(puVar1[0x41]);
    puVar1[0x65] = 0x32;
    puVar3 = PTR_PTR_1126ae720;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_105b524c0;
    puStack_98 = &UNK_1108429c8;
    _objc_retain(param_34);
    uStack_90 = param_34;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = puVar1[0x4f];
    puVar1[0x4f] = puVar3;
    _objc_release(uVar10);
    puVar3 = PTR_PTR_1126ae720;
    puStack_d8 = puVar2;
    uStack_d0 = 0xc2000000;
    uStack_c8 = 0x105b5251c;
    puStack_c0 = &UNK_1108429c8;
    _objc_retain(param_34);
    uStack_b8 = param_34;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = puVar1[0x67];
    puVar1[0x67] = puVar3;
    _objc_release(uVar10);
    puVar3 = PTR_PTR_1126ae720;
    puStack_100 = puVar2;
    uStack_f8 = 0xc2000000;
    uStack_f0 = 0x105b52578;
    puStack_e8 = &UNK_1108429c8;
    _objc_retain(param_34);
    uStack_e0 = param_34;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = puVar1[0x68];
    puVar1[0x68] = puVar3;
    _objc_release(uVar10);
    puVar3 = PTR_PTR_1126ae720;
    puStack_128 = puVar2;
    uStack_120 = 0xc2000000;
    uStack_118 = 0x105b525d4;
    puStack_110 = &UNK_1108429c8;
    _objc_retain(param_39);
    uStack_108 = param_39;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = puVar1[0x47];
    puVar1[0x47] = puVar3;
    _objc_release(uVar10);
    puVar2 = PTR_PTR_1126c29c8;
    _objc_alloc();
    uVar10 = puVar1[2];
    func_0x00010c2923e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010be974a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c034b60();
    uVar11 = puVar1[0x1d];
    puVar1[0x1d] = puVar2;
    _objc_release(uVar11);
    _objc_release(puVar5);
    _objc_release(uVar10);
    func_0x00010c18b5e0(puVar1[0x1d]);
    _objc_initWeak(auStack_130,puVar1);
    puStack_148 = &uStack_150;
    uStack_150 = 0;
    uStack_140 = 0x2020000000;
    uStack_138 = 0;
    uVar6 = puVar1[0xb];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar6;
    func_0x00010bfba0a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_180 = 0xc2000000;
    pcStack_178 = FUN_105b52644;
    puStack_170 = &UNK_1108d6fd0;
    _objc_copyWeak(auStack_158,auStack_130);
    puStack_160 = &uStack_150;
    _objc_retain(param_6);
    uVar10 = uVar11;
    uStack_168 = param_6;
    func_0x00010c25ff60(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar10);
    _objc_release(uVar11);
    _objc_release(uVar6);
    uVar11 = param_11;
    func_0x00010c269d40(param_11);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar11;
    func_0x00010c1006e0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar6;
    func_0x00010c0e0ec0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1b0 = puVar2;
    uStack_1a8 = 0xc2000000;
    pcStack_1a0 = FUN_105b526ec;
    puStack_198 = &UNK_11086a720;
    _objc_copyWeak(auStack_190,auStack_130);
    uVar7 = uVar10;
    func_0x00010c25ff60(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar10);
    _objc_release(uVar6);
    _objc_release(uVar11);
    uVar7 = param_47;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010c25c400();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1d8 = puVar2;
    uStack_1d0 = 0xc2000000;
    uStack_1c8 = 0x105b52734;
    puStack_1c0 = &UNK_1108531d0;
    _objc_copyWeak(auStack_1b8,auStack_130);
    uVar6 = uVar11;
    func_0x00010c25ff60(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar7);
    uVar10 = param_24;
    func_0x00010c269d40(param_24);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bfb9980();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar11;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfad7a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_200 = puVar2;
    uStack_1f8 = 0xc2000000;
    pcStack_1f0 = FUN_105b52784;
    puStack_1e8 = &UNK_110842a38;
    _objc_copyWeak(auStack_1e0,auStack_130);
    uVar9 = uVar7;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar11);
    _objc_release(uVar10);
    uVar10 = param_12;
    func_0x00010bf86ba0(param_12);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c26d5a0(0x3fb999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puStack_228 = puVar2;
    uStack_220 = 0xc2000000;
    uStack_218 = 0x105b527b0;
    puStack_210 = &UNK_11086a720;
    _objc_copyWeak(auStack_208,auStack_130);
    uVar6 = uVar11;
    func_0x00010c25ff60(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar11);
    _objc_release(uVar10);
    uVar6 = puVar1[0x15];
    func_0x00010bf61000();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar6;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_250 = puVar2;
    uStack_248 = 0xc2000000;
    uStack_240 = 0x105b527f8;
    puStack_238 = &UNK_11086a720;
    _objc_copyWeak(auStack_230,auStack_130);
    uVar11 = uVar10;
    func_0x00010c25ff60(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar6);
    uVar10 = param_16;
    func_0x00010bf60f60(param_16);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_278 = puVar2;
    uStack_270 = 0xc2000000;
    uStack_268 = 0x105b52840;
    puStack_260 = &UNK_11086a720;
    _objc_copyWeak(auStack_258,auStack_130);
    uVar6 = uVar11;
    func_0x00010c25ff60(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar11);
    _objc_release(uVar10);
    if (param_53._1_1_ != '\0') {
      uVar10 = param_18;
      func_0x00010c269d40(param_18);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010bef0780();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar11;
      func_0x00010c0e0ea0();
      _objc_retainAutoreleasedReturnValue();
      puStack_2a0 = puVar2;
      uStack_298 = 0xc2000000;
      uStack_290 = 0x105b52888;
      puStack_288 = &UNK_1108531d0;
      _objc_copyWeak(auStack_280,auStack_130);
      uVar7 = uVar6;
      func_0x00010c25ff60(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_destroyWeak(auStack_280);
    }
    uVar8 = puVar1[3];
    func_0x00010bf1a840(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c28d760();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar11;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_2c8 = puVar2;
    uStack_2c0 = 0xc2000000;
    pcStack_2b8 = FUN_105b528d0;
    puStack_2b0 = &UNK_11084eff0;
    _objc_copyWeak(auStack_2a8,auStack_130);
    uVar9 = uVar7;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar8);
    uVar9 = puVar1[0x3b];
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c0dcae0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar10;
    func_0x00010c0e0ea0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    puStack_2f0 = puVar2;
    uStack_2e8 = 0xc2000000;
    pcStack_2e0 = FUN_105b52940;
    puStack_2d8 = &UNK_1108d7020;
    _objc_copyWeak(auStack_2d0,auStack_130);
    uVar7 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    uVar10 = puVar1[1];
    _objc_copyWeak(auStack_2f8,auStack_130);
    func_0x00010c0f7fc0(uVar10);
    _objc_destroyWeak(auStack_2f8);
    _objc_destroyWeak(auStack_2d0);
    _objc_destroyWeak(auStack_2a8);
    _objc_destroyWeak(auStack_258);
    _objc_destroyWeak(auStack_230);
    _objc_destroyWeak(auStack_208);
    _objc_destroyWeak(auStack_1e0);
    _objc_destroyWeak(auStack_1b8);
    _objc_destroyWeak(auStack_190);
    _objc_release(uStack_168);
    _objc_destroyWeak(auStack_158);
    __Block_object_dispose(&uStack_150,8);
    _objc_destroyWeak(auStack_130);
    _objc_release(uStack_108);
    _objc_release(uStack_e0);
    _objc_release(uStack_b8);
    _objc_release(uStack_90);
  }
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



/* Entry: 105b524c0; end: 105b52643;  */

void FUN_105b524c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8fac0();
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105b52644; end: 105b526eb;  */

void FUN_105b52644(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be72ce0();
  _objc_release(param_2);
  _objc_release(lVar1);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11bd40();
    _objc_release(uVar2);
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  }
  return;
}



/* Entry: 105b526ec; end: 105b5277b;  */

void FUN_105b526ec(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4b40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b5277c; end: 105b52783;  */

void FUN_105b5277c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 105b52784; end: 105b528cf;  */

void FUN_105b52784(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be88de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b528d0; end: 105b5293f;  */

void FUN_105b528d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bee4ee0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b52940; end: 105b529b3;  */

void FUN_105b52940(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be81a40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b529b4; end: 105b52ae7; -[SCConversationFeedDataSource _initSubscriptions] */

void FUN_105b529b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010bec7bc0();
  func_0x00010be66d60(param_1);
  func_0x00010bec5c40(param_1);
  func_0x00010bec82a0(param_1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x288);
  func_0x00010c268560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105b52ae8; end: 105b52b5f;  */

void FUN_105b52ae8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bec7ce0();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bec7cc0();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bec8320();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec7700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b52b60; end: 105b52b93; -[SCConversationFeedDataSource dealloc] */

void FUN_105b52b60(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ec0c8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105b52b94; end: 105b52c4b; -[SCConversationFeedDataSource resumeViewModelUpdates:] */

void FUN_105b52b94(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105b52c4c; end: 105b52c7f;  */

void FUN_105b52c4c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be95c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b52c80; end: 105b52ce7; -[SCConversationFeedDataSource _resumeFetchFriendsFeedItemsIfNeeded:] */

void FUN_105b52c80(long param_1,undefined8 param_2,uint param_3)

{
  *(undefined1 *)(param_1 + 0xca) = 0;
  func_0x00010be72ac0(param_1,param_2,param_3 ^ 1);
  if ((param_3 & 1) == 0) {
    func_0x00010be11600(0,param_1,param_2,0,1,0,0,&PTR____CFConstantStringClassReference_110ddd1b8,0
                        ,1);
  }
  return;
}



/* Entry: 105b52ce8; end: 105b52cff; -[SCConversationFeedDataSource hasUpdatedViewModels:] */

undefined1 FUN_105b52ce8(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = 0x200;
  if (param_3 == 0) {
    lVar1 = 0xd8;
  }
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 105b52d00; end: 105b52d37; -[SCConversationFeedDataSource hasUpdatedViewModelsObservable:] */

void FUN_105b52d00(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0x208;
  if (param_3 == 0) {
    lVar1 = 0xe0;
  }
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105b52d38; end: 105b52daf; -[SCConversationFeedDataSource _processNotificationToMessageReadyLifecycleEvent:] */

void FUN_105b52d38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105b52db0;
  puStack_20 = &UNK_110855e40;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105b52dc8;
  puStack_48 = &UNK_110842e18;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bd6e0(param_3,param_2,&puStack_38,&puStack_60);
  return;
}



/* Entry: 105b52db0; end: 105b52dd3;  */

void FUN_105b52db0(long param_1,long param_2)

{
  if (param_2 != 0) {
    return;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x1e0) = 1;
  return;
}



/* Entry: 105b52dd4; end: 105b52dfb; -[SCConversationFeedDataSource quickAddSnapchatters] */

void FUN_105b52dd4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b52dfc; end: 105b52e23; -[SCConversationFeedDataSource incomingSnapchatters] */

void FUN_105b52dfc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b52e24; end: 105b52e4b; -[SCConversationFeedDataSource contactSnapchatters] */

void FUN_105b52e24(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b52e4c; end: 105b52e73; -[SCConversationFeedDataSource contactNonSnapchatters] */

void FUN_105b52e4c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b52e74; end: 105b52eab; -[SCConversationFeedDataSource viewModels:] */

void FUN_105b52e74(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0x1e8;
  if (param_3 == 0) {
    lVar1 = 0x20;
  }
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105b52eac; end: 105b52eef; -[SCConversationFeedDataSource setViewModels:updateIsForCommunityFeed:] */

void FUN_105b52eac(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf51e00();
  lVar1 = 0x1e8;
  if (param_4 == 0) {
    lVar1 = 0x20;
  }
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b52ef0; end: 105b52f07; -[SCConversationFeedDataSource friendsFeedViewModelIndexes] */

void FUN_105b52ef0(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b52f08; end: 105b52f67; -[SCConversationFeedDataSource indexForCellIdentifier:] */

long FUN_105b52f08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010bfecc80(lVar1,param_2,param_3);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x50);
    func_0x00010bfecc80(lVar1,param_2,param_3);
  }
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 105b52f68; end: 105b52fbf; -[SCConversationFeedDataSource resetFeedConversationsState] */

void FUN_105b52f68(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105b52fc0;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 105b52fc0; end: 105b530b3;  */

void FUN_105b52fc0(long param_1)

{
  long lVar1;
  long lVar2;
  
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x348) = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bdc9de0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000100504554();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c139760(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x128));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105b530b4; end: 105b532c3; -[SCConversationFeedDataSource resetFeedConversationsStateExcludingConversationId:] */

void FUN_105b530b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105b53144;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105b532c4; end: 105b53327; -[SCConversationFeedDataSource updateForViewDidFullyDisappear] */

void FUN_105b532c4(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0xe8) != 0) {
    func_0x00010c138e00();
    func_0x00010c138de0(*(undefined8 *)(param_1 + 0xe8));
  }
  lVar1 = param_1;
  func_0x00010bde2600();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c138e00(lVar1);
    func_0x00010c138de0(lVar1);
  }
  func_0x00010be72c80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b53328; end: 105b5332b; -[SCConversationFeedDataSource updateForViewWillPresentFullscreenOverlay] */

void FUN_105b53328(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be72c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__performUnsubscribeFromInteracti_11257a4c0);
  return;
}



/* Entry: 105b5332c; end: 105b53333; -[SCConversationFeedDataSource updateForViewDidDismissFullscreenOverlay] */

void FUN_105b5332c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be72ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__performSubscribeToInteractionSt_11257a450,0)
  ;
  return;
}



/* Entry: 105b53334; end: 105b53373; -[SCConversationFeedDataSource resetLastFinishedViewingSnap] */

void FUN_105b53334(long param_1)

{
  func_0x00010c138de0(*(undefined8 *)(param_1 + 0xe8));
  func_0x00010bde2600(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c138de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b53374; end: 105b5337b; -[SCConversationFeedDataSource resetLastSentSnapWithConversationId:] */

void FUN_105b53374(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c138e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xe8),PTR_s_resetLastSentSnapWithConversatio_11262bdb0);
  return;
}



/* Entry: 105b5337c; end: 105b5345b; -[SCConversationFeedDataSource didSelectShortcutWithShortcutId:shortcutType:] */

void FUN_105b5337c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105b5345c; end: 105b53493;  */

void FUN_105b5345c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b53494; end: 105b53653; -[SCConversationFeedDataSource _didSelectShortcutWithShortcutId:shortcutType:] */

void FUN_105b53494(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  *(undefined8 *)(param_1 + 0x170) = param_4;
  if (param_3 == 0) {
    func_0x00010bed1f80(param_1);
  }
  else {
    lVar1 = param_1;
    func_0x00010beb3aa0();
    if ((int)lVar1 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 400);
      *(undefined8 *)(param_1 + 400) = 0;
      _objc_release(uVar2);
      _objc_initWeak(auStack_48,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x178);
      func_0x00010c22d6a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c0e0ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_58,auStack_48);
      _objc_retain(param_3);
      uVar4 = uVar2;
      uStack_50 = param_4;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x180);
      *(undefined8 *)(param_1 + 0x180) = uVar4;
      _objc_release(uVar5);
      _objc_release(uVar2);
      _objc_release(uVar3);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_58);
      _objc_destroyWeak(auStack_48);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x180);
      *(undefined8 *)(param_1 + 0x180) = 0;
      _objc_release(uVar2);
      func_0x00010bed8020(param_1);
      func_0x00010be66a80(param_1);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x1b0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1239e0();
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105b53654; end: 105b536cb;  */

void FUN_105b53654(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c122f00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be16040(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b536cc; end: 105b537e7; -[SCConversationFeedDataSource _observeShortcutPluginsForRegistration] */

void FUN_105b536cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x178);
  func_0x00010c1278e0(uVar1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = uVar1;
  func_0x00010c0e0ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  return;
}



/* Entry: 105b537e8; end: 105b5382f;  */

void FUN_105b537e8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be89d60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b53830; end: 105b538bb; -[SCConversationFeedDataSource _registerShortcutPlugins:] */

void FUN_105b53830(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108d70f0);
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b538bc; end: 105b53963; -[SCConversationFeedDataSource _shouldFetchFriendsFeedItemsForCurrentlySelectedShortcutType:] */

bool FUN_105b538bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x188);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  uStack_38 = 0x105b53934;
  puStack_30 = &UNK_1108d7110;
  uStack_28 = param_3;
  func_0x0001006372a4(lVar1,&puStack_48);
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  return lVar2 != 0;
}



/* Entry: 105b53964; end: 105b53c57; -[SCConversationFeedDataSource _observePluginFriendsFeedItemsWithPreviouslySelectedShortcutType:currentlySelectedShortcutType:] */

void FUN_105b53964(long param_1,undefined8 param_2,long param_3,undefined **param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **unaff_x23;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined *puStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  undefined8 *puStack_228;
  undefined1 auStack_220 [8];
  undefined8 uStack_218;
  undefined8 *puStack_210;
  undefined8 uStack_208;
  undefined1 uStack_200;
  undefined1 auStack_1f8 [8];
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 != 0) {
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    ppuVar4 = *(undefined ***)(param_1 + 0x188);
    _objc_retain(ppuVar4);
    unaff_x23 = ppuVar4;
    func_0x00010bf52a60();
    if (unaff_x23 != (undefined **)0x0) {
      lVar7 = *plStack_1a0;
      do {
        ppuVar8 = (undefined **)0x0;
        do {
          if (*plStack_1a0 != lVar7) {
            _objc_enumerationMutation(ppuVar4);
          }
          lVar5 = *(long *)(lStack_1a8 + (long)ppuVar8 * 8);
          lVar3 = lVar5;
          func_0x00010c22d760();
          if (param_3 == lVar3) {
            func_0x00010bf6e8c0(lVar5);
            goto LAB_105b53a4c;
          }
          ppuVar8 = (undefined **)((long)ppuVar8 + 1);
        } while (unaff_x23 != ppuVar8);
        unaff_x23 = ppuVar4;
        func_0x00010bf52a60();
      } while (unaff_x23 != (undefined **)0x0);
    }
LAB_105b53a4c:
    _objc_release(ppuVar4);
  }
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  lVar3 = *(long *)(param_1 + 0x188);
  _objc_retain(lVar3);
  lVar7 = lVar3;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar5 = *plStack_1e0;
    do {
      lVar6 = 0;
      do {
        if (*plStack_1e0 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        unaff_x23 = *(undefined ***)(lStack_1e8 + lVar6 * 8);
        ppuVar4 = unaff_x23;
        func_0x00010c22d760();
        if (ppuVar4 == param_4) {
          func_0x00010c159020(unaff_x23);
          _objc_initWeak(auStack_1f8,param_1);
          puStack_210 = &uStack_218;
          uStack_218 = 0;
          uStack_208 = 0x2020000000;
          uStack_200 = 0;
          func_0x00010bfba080();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = unaff_x23;
          func_0x00010c0e0ea0();
          _objc_retainAutoreleasedReturnValue();
          puStack_248 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_240 = 0xc2000000;
          pcStack_238 = FUN_105b53c58;
          puStack_230 = &UNK_11086b240;
          _objc_copyWeak(auStack_220,auStack_1f8);
          puStack_228 = &uStack_218;
          ppuVar8 = ppuVar4;
          func_0x00010c25ff60();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = *(undefined8 *)(param_1 + 400);
          *(undefined ***)(param_1 + 400) = ppuVar8;
          _objc_release(uVar2);
          _objc_release(ppuVar4);
          _objc_release(unaff_x23);
          _objc_destroyWeak(auStack_220);
          __Block_object_dispose(&uStack_218,8);
          _objc_destroyWeak(auStack_1f8);
          unaff_x23 = &puStack_248;
          goto LAB_105b53bdc;
        }
        lVar6 = lVar6 + 1;
      } while (lVar7 != lVar6);
      lVar7 = lVar3;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
LAB_105b53bdc:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_destroyWeak(unaff_x23 + 5);
    uVar1 = 8;
    __Block_object_dispose(&uStack_218,8);
    _objc_destroyWeak(auStack_1f8);
    __Unwind_Resume();
    _objc_retain(uVar1);
    lVar7 = lVar3 + 0x28;
    _objc_loadWeakRetained(lVar7);
    uVar2 = uVar1;
    func_0x00010bf51e00(uVar1);
    _objc_release(uVar1);
    func_0x00010be300c0(lVar7);
    _objc_release(uVar2);
    _objc_release(lVar7);
    *(undefined1 *)(*(long *)(*(long *)(lVar3 + 0x20) + 8) + 0x18) = 1;
    return;
  }
  return;
}



/* Entry: 105b53c58; end: 105b53cdf;  */

void FUN_105b53c58(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_2;
  func_0x00010bf51e00(param_2);
  _objc_release(param_2);
  func_0x00010be300c0(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105b53ce0; end: 105b53d7b; -[SCConversationFeedDataSource _handleShortcutPluginFeedItemUpdate:canRenderFeedEmptyState:] */

void FUN_105b53ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c29d0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c016460();
  _objc_release(param_3);
  func_0x00010be72ce0(param_1,param_2,puVar1,1,&PTR____CFConstantStringClassReference_110e1f618,1,
                      param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b53d7c; end: 105b53f07; -[SCConversationFeedDataSource _unselectShortcut] */

void FUN_105b53d7c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x180) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 400);
  *(undefined8 *)(param_1 + 400) = 0;
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010be08aa0();
  if ((int)lVar2 != 0) {
    _os_unfair_lock_lock(param_1 + 0x270);
    uVar1 = *(undefined8 *)(param_1 + 0x1f0);
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x280);
    *(undefined8 *)(param_1 + 0x280) = 0;
    _objc_release(uVar1);
    _os_unfair_lock_unlock(param_1 + 0x270);
    uVar1 = *(undefined8 *)(param_1 + 0x1f8);
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    _objc_release(uVar1);
    _objc_initWeak(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_105b53f08;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  *(undefined8 *)(param_1 + 0x170) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x198) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x1b0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0af860();
  _objc_release(uVar1);
  lVar2 = param_1 + 0x350;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf64460();
  _objc_release(lVar2);
  func_0x00010be72ce0(param_1);
  return;
}



/* Entry: 105b53f08; end: 105b53f33;  */

void FUN_105b53f08(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed2080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b53f34; end: 105b53f5f; -[SCConversationFeedDataSource _unsetShortcutViewModels] */

void FUN_105b53f34(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1e8);
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x200) = 0;
  return;
}



/* Entry: 105b53f60; end: 105b5402b; -[SCConversationFeedDataSource _filterFeedByUpdatedShortcutRecipients:shortcutId:shortcutType:] */

void FUN_105b53f60(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1b0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec800();
  _objc_release(uVar1);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    func_0x00010bed1f80(param_1);
  }
  else {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x198);
    *(long *)(param_1 + 0x198) = param_3;
    _objc_release(uVar1);
    lVar2 = param_1 + 0x350;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf64460();
    _objc_release(lVar2);
    func_0x00010be72ce0(param_1,param_2,0,0,&PTR____CFConstantStringClassReference_110e1f618,
                        param_5 == 0xc,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b5402c; end: 105b54323; -[SCConversationFeedDataSource _sortFeedItems:] */

void FUN_105b5402c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  long lStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  long lStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x198);
  func_0x000100817178(uVar1,&PTR___NSConcreteGlobalBlock_1108d7150);
  uVar6 = *(undefined8 *)(param_1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1a8) = uVar1;
  _objc_release(uVar6);
  ppuVar5 = &PTR___NSConcreteGlobalBlock_1108d7170;
  lStack_200 = param_3;
  func_0x00010050471c(param_3,&PTR___NSConcreteGlobalBlock_1108d7170,
                      &PTR___NSConcreteGlobalBlock_1108d7190);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_1f8 = puVar2;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar10 = *(long *)(param_1 + 0x198);
  _objc_retain(lVar10);
  lVar3 = lVar10;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar9 = *plStack_1a0;
    do {
      lVar8 = 0;
      do {
        if (*plStack_1a0 != lVar9) {
          _objc_enumerationMutation(lVar10);
        }
        uVar1 = *(undefined8 *)(lStack_1a8 + lVar8 * 8);
        FUN_105b5432c(uVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          func_0x00010befa120(puVar7);
          func_0x00010befa120(puStack_1f8);
        }
        _objc_release(lVar4);
        _objc_release(uVar1);
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar10;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar10);
  puVar2 = puStack_1f8;
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x1a0);
  *(undefined **)(param_1 + 0x1a0) = puVar2;
  _objc_release(uVar1);
  lVar3 = lStack_200;
  func_0x00010bf529e0();
  lVar10 = lVar3;
  func_0x00010c25e980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  _objc_retain(lVar10);
  lVar3 = lVar10;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar9 = *plStack_1e0;
    do {
      lVar8 = 0;
      do {
        if (*plStack_1e0 != lVar9) {
          _objc_enumerationMutation(lVar10);
        }
        uVar1 = *(undefined8 *)(lStack_1e8 + lVar8 * 8);
        uVar11 = *(ulong *)(param_1 + 0x1a8);
        func_0x00010bfa3d00(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900();
        _objc_release(uVar1);
        if ((uVar11 & 1) == 0) {
          func_0x00010befa120(puVar7);
        }
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar10;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar10);
  _objc_release(puStack_1f8);
  _objc_release(param_3);
  _objc_release(lVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_208 = FUN_105b54324;
    lStack_220 = param_3;
    lStack_218 = param_1;
    puStack_210 = &stack0xfffffffffffffff0;
    _objc_retain();
    puStack_248 = &uStack_250;
    uStack_250 = 0;
    uStack_240 = 0x3032000000;
    pcStack_238 = FUN_105b59900;
    uStack_230 = 0x105b59910;
    uStack_228 = 0;
    func_0x00010c0c0000(ppuVar5);
    puVar7 = (undefined *)puStack_248[5];
    _objc_retain(puVar7);
    __Block_object_dispose(&uStack_250,8);
    _objc_release(uStack_228);
    _objc_release(ppuVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105b54324; end: 105b5432b;  */

void FUN_105b54324(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105b59900;
  uStack_30 = 0x105b59910;
  uStack_28 = 0;
  func_0x00010c0c0000(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b5432c; end: 105b54423;  */

void FUN_105b5432c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105b59900;
  uStack_30 = 0x105b59910;
  uStack_28 = 0;
  func_0x00010c0c0000(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b54424; end: 105b5442b;  */

void FUN_105b54424(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa3d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_feedId_1125c68e8);
  return;
}



/* Entry: 105b5442c; end: 105b54453;  */

void FUN_105b5442c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105b54454; end: 105b54533; -[SCConversationFeedDataSource _updateWithUserBirthday:] */

void FUN_105b54454(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0xa0);
  _objc_retain(lVar3);
  _objc_retain(param_3);
  if (lVar3 == param_3) {
    _objc_release(param_3);
    _objc_release(lVar3);
  }
  else {
    if ((param_3 == 0) || (lVar3 == 0)) {
      _objc_release(param_3);
      _objc_release(lVar3);
    }
    else {
      lVar1 = lVar3;
      func_0x00010bf433a0(lVar3,param_2,param_3);
      _objc_release(param_3);
      _objc_release(lVar3);
      if (lVar1 == 0) goto LAB_105b54520;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    *(long *)(param_1 + 0xa0) = param_3;
    _objc_release(uVar2);
    lVar3 = param_1;
    func_0x00010bee9f40(param_1);
    func_0x00010be72ce0(param_1,param_2,0,0,&PTR____CFConstantStringClassReference_110dc7958,lVar3,1
                       );
  }
LAB_105b54520:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b54534; end: 105b54607; -[SCConversationFeedDataSource _updateWithDisplayedSubstituteAnimationIdentifiers:] */

void FUN_105b54534(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar4 = *(ulong *)(param_1 + 0x88);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  if (uVar4 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar4);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c072060(uVar4,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_105b545f4;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    *(ulong *)(param_1 + 0x88) = param_3;
    _objc_release(uVar2);
    lVar3 = param_1;
    func_0x00010bee9f40(param_1);
    func_0x00010be72ce0(param_1,param_2,0,0,&PTR____CFConstantStringClassReference_110e1f638,lVar3,1
                       );
  }
LAB_105b545f4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b54608; end: 105b546db; -[SCConversationFeedDataSource _updateWithCurrentlyReplayingSnapConversationIds:] */

void FUN_105b54608(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar4 = *(ulong *)(param_1 + 0xb0);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  if (uVar4 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar4);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c072060(uVar4,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_105b546c8;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xb0);
    *(ulong *)(param_1 + 0xb0) = param_3;
    _objc_release(uVar2);
    lVar3 = param_1;
    func_0x00010bee9f40(param_1);
    func_0x00010be72ce0(param_1,param_2,0,0,&PTR____CFConstantStringClassReference_110e1f678,lVar3,1
                       );
  }
LAB_105b546c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b546dc; end: 105b547a7; -[SCConversationFeedDataSource _updateWithCurrentlyPeekingFeedIds:] */

void FUN_105b546dc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x90);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar1 = uVar3;
      func_0x00010c072060(uVar3,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((uVar1 & 1) != 0) goto LAB_105b54794;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    *(ulong *)(param_1 + 0x90) = param_3;
    _objc_release(uVar2);
    func_0x00010be72ce0(param_1,param_2,0,0,&PTR____CFConstantStringClassReference_110e1f698,0,1);
  }
LAB_105b54794:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b547a8; end: 105b5485b; -[SCConversationFeedDataSource updateViewModelsForAppBackground] */

void FUN_105b547a8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(char *)(param_1 + 0xc9) == '\x01') {
    _objc_initWeak(auStack_28,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c0f7fc0(uVar1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 105b5485c; end: 105b54887;  */

void FUN_105b5485c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee3b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b54888; end: 105b548d7; -[SCConversationFeedDataSource _updateViewModelsForAppBackground] */

void FUN_105b54888(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0xca) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0xca) = 1;
  lVar1 = param_1;
  func_0x00010bee9f40();
                    /* WARNING: Could not recover jumptable at 0x00010be72cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__performUpdateFriendsFeedViewMod_11257a4d8,0,0,
             &PTR____CFConstantStringClassReference_110e1f6b8,lVar1,1);
  return;
}



/* Entry: 105b548d8; end: 105b549ab; -[SCConversationFeedDataSource _updateWithActiveSnapCountdowns:] */

void FUN_105b548d8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar4 = *(ulong *)(param_1 + 0xc0);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  if (uVar4 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar4);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071ae0(uVar4,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_105b54998;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    *(ulong *)(param_1 + 0xc0) = param_3;
    _objc_release(uVar2);
    lVar3 = param_1;
    func_0x00010bee9f40(param_1);
    func_0x00010be72ce0(param_1,param_2,0,0,&PTR____CFConstantStringClassReference_110e1f6d8,lVar3,1
                       );
  }
LAB_105b54998:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b549ac; end: 105b54a7f; -[SCConversationFeedDataSource _updateWithPlayedStoryIds:] */

void FUN_105b549ac(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar4 = *(ulong *)(param_1 + 0x80);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  if (uVar4 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar4);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c072060(uVar4,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_105b54a6c;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    *(ulong *)(param_1 + 0x80) = param_3;
    _objc_release(uVar2);
    lVar3 = param_1;
    func_0x00010bee9f40(param_1);
    func_0x00010be72ce0(param_1,param_2,0,0,&PTR____CFConstantStringClassReference_110e1f658,lVar3,1
                       );
  }
LAB_105b54a6c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b54a80; end: 105b54baf; -[SCConversationFeedDataSource _subscribeToMapBackgroundUpdates] */

void FUN_105b54a80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010be2bfa0();
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x2c0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09fa60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105b54bb0; end: 105b54bdb;  */

void FUN_105b54bb0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2bfa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b54bdc; end: 105b54d23; -[SCConversationFeedDataSource _handleMapPersonLocationUpdates] */

void FUN_105b54bdc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x2c0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf00660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf51e00();
  _objc_release(uVar5);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar5 = uVar2;
  func_0x000100504554(uVar2,&PTR___NSConcreteGlobalBlock_1108d7200);
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar6 = *(undefined **)(param_1 + 0x98);
  _objc_retain(puVar6);
  _objc_retain(puVar3);
  if (puVar6 == puVar3) {
    _objc_release(puVar3);
    _objc_release(puVar6);
  }
  else {
    if (puVar3 == (undefined *)0x0) {
      _objc_release(puVar6);
    }
    else {
      puVar4 = puVar6;
      func_0x00010c072060();
      _objc_release(puVar3);
      _objc_release(puVar6);
      if (((ulong)puVar4 & 1) != 0) goto LAB_105b54d04;
    }
    _objc_retain(puVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x98);
    *(undefined **)(param_1 + 0x98) = puVar3;
    _objc_release(uVar5);
    func_0x00010be72ce0(param_1);
  }
LAB_105b54d04:
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b54d24; end: 105b54d2b;  */

void FUN_105b54d24(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 105b54d2c; end: 105b54e57; -[SCConversationFeedDataSource _subscribeToMapFriendContextsUpdates] */

void FUN_105b54d2c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x2b0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2925a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105b54e58; end: 105b54e9f;  */

void FUN_105b54e58(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2bf20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b54ea0; end: 105b54f73; -[SCConversationFeedDataSource _handleMapFriendContextUpdatesWithUpdate:] */

void FUN_105b54ea0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar4 = *(ulong *)(param_1 + 0x2b8);
  _objc_retain(param_3);
  _objc_retain(uVar4);
  if (param_3 == uVar4) {
    _objc_release(uVar4);
    _objc_release(param_3);
  }
  else {
    if (uVar4 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071d00(param_3,param_2,uVar4);
      _objc_release(uVar4);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_105b54f60;
    }
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + 0x2b8);
    *(ulong *)(param_1 + 0x2b8) = uVar4;
    _objc_release(uVar3);
    lVar2 = param_1;
    func_0x00010bee9f40(param_1);
    func_0x00010be72ce0(param_1,param_2,0,0,&PTR____CFConstantStringClassReference_110e1f598,lVar2,1
                       );
  }
LAB_105b54f60:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b54f74; end: 105b550a7; -[SCConversationFeedDataSource _subscribeToSaturnContextUpdates] */

void FUN_105b54f74(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0x2c8) != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x2c8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c292600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e0ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 105b550a8; end: 105b550ef;  */

void FUN_105b550a8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2f720();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b550f0; end: 105b551c3; -[SCConversationFeedDataSource _handleSaturnContextUpdatesWithUpdate:] */

void FUN_105b550f0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar4 = *(ulong *)(param_1 + 0x2d0);
  _objc_retain(param_3);
  _objc_retain(uVar4);
  if (param_3 == uVar4) {
    _objc_release(uVar4);
    _objc_release(param_3);
  }
  else {
    if (uVar4 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071d00(param_3,param_2,uVar4);
      _objc_release(uVar4);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_105b551b0;
    }
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + 0x2d0);
    *(ulong *)(param_1 + 0x2d0) = uVar4;
    _objc_release(uVar3);
    lVar2 = param_1;
    func_0x00010bee9f40(param_1);
    func_0x00010be72ce0(param_1,param_2,0,0,&PTR____CFConstantStringClassReference_110e1f5b8,lVar2,1
                       );
  }
LAB_105b551b0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b551c4; end: 105b5531f; -[SCConversationFeedDataSource _subscribeToLensContextualSuggestionUpdates] */

void FUN_105b551c4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if ((*(long *)(param_1 + 0x140) != 0) && (lVar1 = *(long *)(param_1 + 0x148), lVar1 != 0)) {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c097260();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      _objc_initWeak(auStack_48,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x140);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0972a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0e0ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      uVar6 = uVar5;
      func_0x00010c25ff60(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  return;
}



/* Entry: 105b55320; end: 105b553c7;  */

void FUN_105b55320(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bf0a0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b553c8; end: 105b5540f;  */

void FUN_105b553c8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2b420();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b55410; end: 105b554e7; -[SCConversationFeedDataSource _handleLensFriendsFeedContextDataFetcherUpdate:] */

void FUN_105b55410(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar4 = *(ulong *)(param_1 + 0x150);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  if (uVar4 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar4);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071d00(uVar4,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_105b554d4;
    }
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + 0x150);
    *(ulong *)(param_1 + 0x150) = uVar4;
    _objc_release(uVar3);
    lVar2 = param_1;
    func_0x00010bee9f40(param_1);
    func_0x00010be72ce0(param_1,param_2,0,0,&PTR____CFConstantStringClassReference_110e1f578,lVar2,1
                       );
  }
LAB_105b554d4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b554e8; end: 105b5559f; -[SCConversationFeedDataSource _performSubscribeToInteractionStateUpdatesWithSkipFirstSyncUpdate:] */

void FUN_105b554e8(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f88c0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105b555a0; end: 105b555d3;  */

void FUN_105b555a0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec7ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b555d4; end: 105b55757; -[SCConversationFeedDataSource _subscribeToInteractionStateUpdatesWithSkipFirstSyncUpdate:] */

void FUN_105b555d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  if (*(long *)(param_1 + 0x298) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = *(undefined8 *)(param_1 + 0x298);
    *(undefined **)(param_1 + 0x298) = puVar1;
    _objc_release(uVar4);
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 1;
    _objc_initWeak(auStack_68,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x290);
    func_0x00010c0688a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e0ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_78,auStack_68);
    uVar3 = uVar4;
    uStack_70 = param_3;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar2);
    *(undefined1 *)(puStack_58 + 3) = 0;
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
    __Block_object_dispose(&uStack_60,8);
  }
  return;
}



/* Entry: 105b55758; end: 105b557b7;  */

void FUN_105b55758(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2ade0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b557b8; end: 105b558b3; -[SCConversationFeedDataSource _handleInteractionStateUpdates:skipFirstSyncUpdate:isSync:] */

void FUN_105b557b8(long param_1,undefined8 param_2,ulong param_3,int param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar4 = *(ulong *)(param_1 + 0x2a0);
  _objc_retain(uVar4);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 0x2a0);
  *(ulong *)(param_1 + 0x2a0) = uVar1;
  _objc_release(uVar3);
  if ((param_4 == 0) || ((param_5 & 1) == 0)) {
    _objc_retain(uVar4);
    _objc_retain(param_3);
    if (uVar4 == param_3) {
      _objc_release(param_3);
      _objc_release(uVar4);
    }
    else {
      if (param_3 == 0) {
        _objc_release();
      }
      else {
        uVar1 = uVar4;
        func_0x00010c071d00(uVar4,param_2,param_3);
        _objc_release(param_3);
        _objc_release(uVar4);
        if ((uVar1 & 1) != 0) goto LAB_105b55894;
      }
      lVar2 = param_1;
      func_0x00010bee9f40(param_1);
      func_0x00010be72ce0(param_1,param_2,0,0,&PTR____CFConstantStringClassReference_110e1f5f8,lVar2
                          ,1);
    }
  }
LAB_105b55894:
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b558b4; end: 105b5595b; -[SCConversationFeedDataSource _performUnsubscribeFromInteractionStateUpdates] */

void FUN_105b558b4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f88c0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105b5595c; end: 105b55987;  */

void FUN_105b5595c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed2120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b55988; end: 105b55997; -[SCConversationFeedDataSource _unsubscribeFromInteractionStateUpdates] */

void FUN_105b55988(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x298);
  *(undefined8 *)(param_1 + 0x298) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


