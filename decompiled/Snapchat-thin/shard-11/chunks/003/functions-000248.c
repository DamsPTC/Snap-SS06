/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108499990; end: 1084999ef; -[SCAdInteractionHistoryTracker adViewingStatusForAdIdentifier:] */

void FUN_108499990(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0e00e0(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1084999f0; end: 108499a7f; -[SCAdInteractionHistoryTracker onBrandNameProfileDisplay:profileId:] */

void FUN_1084999f0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010bef6380(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (param_1 != 0) {
      func_0x00010c1d4f80(param_1,param_2,1);
      func_0x00010c1d5280(param_1,param_2,param_4);
    }
    _objc_release(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108499a80; end: 108499b0f; -[SCAdInteractionHistoryTracker onTaggedProfileDisplay:profileId:] */

void FUN_108499a80(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010bef6380(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (param_1 != 0) {
      func_0x00010c1d5140(param_1,param_2,1);
      func_0x00010c1d5280(param_1,param_2,param_4);
    }
    _objc_release(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108499b10; end: 108499b8b; -[SCAdInteractionHistoryTracker onStoreDisplay:snapIndex:customProductPageEnabled:] */

void FUN_108499b10(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010bef6380(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (param_1 != 0) {
      func_0x00010c188700(param_1,param_2,param_5,param_4);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108499b8c; end: 108499bfb; -[SCAdInteractionHistoryTracker onSurveyAnswerUpdate:snapIndex:answer:] */

void FUN_108499b8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x00010bef6380(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c210420(param_1,param_2,param_5,param_4);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108499bfc; end: 108499c6b; -[SCAdInteractionHistoryTracker onStickersStateUpdate:snapIndex:stickerMetadataArray:] */

void FUN_108499bfc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x00010bef6380(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c20b380(param_1,param_2,param_5,param_4);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108499c6c; end: 108499cbb; -[SCAdInteractionHistoryTracker onAdSurveyResponseChanged:snapIndex:surveyResponse:] */

void FUN_108499c6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c164a60(param_1,param_2,param_5,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108499cbc; end: 108499d2b; -[SCAdInteractionHistoryTracker onStickerInfoUpdate:snapIndex:stickerInfo:] */

void FUN_108499cbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x00010bef6380(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c20b180(param_1,param_2,param_5,param_4);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108499d2c; end: 108499d6b; -[SCAdInteractionHistoryTracker onReminderLocalBannerTapped:snapIndex:] */

void FUN_108499d2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c1e9d60(param_1,param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108499d6c; end: 108499ddb; -[SCAdInteractionHistoryTracker onReminderCountdownIdUpdate:snapIndex:reminderCountdownId:] */

void FUN_108499d6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x00010bef6380(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c1e9d20(param_1,param_2,param_5,param_4);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108499ddc; end: 108499e1b; -[SCAdInteractionHistoryTracker onReminderScheduled:snapIndex:] */

void FUN_108499ddc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c1e9da0(param_1,param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108499e1c; end: 108499e6b; -[SCAdInteractionHistoryTracker onWakeUpTap:snapIndex:source:] */

void FUN_108499e1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c2245e0(param_1,param_2,param_5,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108499e6c; end: 108499eab; -[SCAdInteractionHistoryTracker onAdShareOpen:snapIndex:] */

void FUN_108499e6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c1646a0(param_1,param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108499eac; end: 108499eeb; -[SCAdInteractionHistoryTracker onAdShareSend:snapIndex:] */

void FUN_108499eac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c164720(param_1,param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108499eec; end: 108499f3f; -[SCAdInteractionHistoryTracker onAdSubscribed:adIdentifier:snapIndex:] */

void FUN_108499eec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010bef6380(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c164a20(param_1,param_2,param_3,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108499f40; end: 108499f8f; -[SCAdInteractionHistoryTracker onAdSubscribeButtonTapped:timestampMs:snapIndex:] */

void FUN_108499f40(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    func_0x00010c1649e0(param_1,param_2,param_3,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108499f90; end: 108499fe3; -[SCAdInteractionHistoryTracker setInitialAdSubscribed:adIdentifier:snapIndex:] */

void FUN_108499f90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010bef6380(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c1ac840(param_1,param_2,param_3,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108499fe4; end: 10849a05b; -[SCAdInteractionHistoryTracker onAdFavorited:timestampMs:source:adIdentifier:snapIndex:] */

void FUN_108499fe4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x00010bef6380(param_2,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    func_0x00010c1635c0(param_1,param_2,param_3,param_4,param_7);
    func_0x00010c163540(param_2,param_3,param_5,param_7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10849a05c; end: 10849a0af; -[SCAdInteractionHistoryTracker onAdFavoritedUpdate:adIdentifier:snapIndex:] */

void FUN_10849a05c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010bef6380(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c163580(param_1,param_2,param_3,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10849a0b0; end: 10849a113; -[SCAdInteractionHistoryTracker onAdReposted:timestampMs:adIdentifier:snapIndex:] */

void FUN_10849a0b0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x00010bef6380(param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    func_0x00010c164220(param_1,param_2,param_3,param_4,param_6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10849a114; end: 10849a1c7; -[SCAdInteractionHistoryTracker onInitialEngagementState:reposted:adIdentifier:snapIndex:] */

void FUN_10849a114(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bef6380(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    if (param_3 != 0) {
      lVar1 = param_3;
      func_0x00010bf1f3c0(param_3);
      func_0x00010c1ac7a0(param_1,param_2,lVar1,param_6);
    }
    if (param_4 != 0) {
      lVar1 = param_4;
      func_0x00010bf1f3c0(param_4);
      func_0x00010c1ac7e0(param_1,param_2,lVar1,param_6);
    }
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10849a1c8; end: 10849a207; -[SCAdInteractionHistoryTracker onContextMenuOpen:snapIndex:] */

void FUN_10849a1c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c1831c0(param_1,param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10849a208; end: 10849a257; -[SCAdInteractionHistoryTracker onAppInActivityTriggered:snapIndex:timestampMs:] */

void FUN_10849a208(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    func_0x00010c168b80(param_1,param_2,param_3,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10849a258; end: 10849a293; -[SCAdInteractionHistoryTracker onAdNotInterested:snapIndex:] */

void FUN_10849a258(long param_1,undefined8 param_2)

{
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c163c20(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10849a294; end: 10849a2e3; -[SCAdInteractionHistoryTracker _onLongformVideoViewed:snapIndex:mediaDurationInMillis:viewedDurationInMillis:] */

void FUN_10849a294(undefined8 param_1)

{
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10849a2e4; end: 10849a333; -[SCAdInteractionHistoryTracker _onTopSnapVideoViewed:snapIndex:mediaDurationInMillis:viewedDurationInMillis:] */

void FUN_10849a2e4(undefined8 param_1)

{
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10849a334; end: 10849a37f; -[SCAdInteractionHistoryTracker _onObstructed:snapIndex:fromPanel:] */

void FUN_10849a334(undefined8 param_1)

{
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10849a380; end: 10849a3d3; -[SCAdInteractionHistoryTracker _onUnobstructed:snapIndex:fromPanel:] */

void FUN_10849a380(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c281c00(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10849a3d4; end: 10849a44b; -[SCAdInteractionHistoryTracker _onHide:snapIndex:viewContext:isUnskippableAd:] */

void FUN_10849a3d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x00010bef6380(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef2b00();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10849a44c; end: 10849a4ef; -[SCAdInteractionHistoryTracker _onSnapHide:snapIndex:skipEvent:exitEventSwipeInfo:adPanel:dismissDuration:] */

void FUN_10849a44c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010bef6380(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef5340(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10849a4f0; end: 10849a903; -[SCAdInteractionHistoryTracker _generateAdViewingStatusFromAdResponseV2:] */

void FUN_10849a4f0(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bef60a0();
  uVar2 = param_4;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (uVar1 == 5) {
    uVar19 = param_4;
    func_0x00010c258fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar19;
    func_0x00010bf45420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar19);
  }
  else {
    uVar2 = uVar3;
    func_0x00010bf5ac40();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR_PTR_1126d9980;
  _objc_alloc(PTR_PTR_1126d9980);
  func_0x00010c13b0c0(param_4);
  uVar19 = param_4;
  func_0x00010bef4240(param_4);
  func_0x00010bff2100(param_1,(float)*(double *)(param_2 + 0x18),(float)*(double *)(param_2 + 0x20),
                      (float)*(double *)(param_2 + 0x18),(float)*(double *)(param_2 + 0x20),puVar4,
                      param_3,uVar1,uVar2,uVar19);
  uVar19 = param_4;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar19;
  func_0x00010bf529e0();
  _objc_release(uVar19);
  if (uVar5 != 0) {
    uVar19 = 0;
    do {
      uVar5 = param_4;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      uVar5 = uVar6;
      func_0x00010c242040();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c274c60();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf5d240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      _objc_release(uVar5);
      puVar9 = PTR_PTR_1126d9988;
      _objc_alloc();
      uVar5 = uVar6;
      func_0x00010bef60a0();
      uVar7 = param_4;
      func_0x00010bef4240();
      uVar10 = uVar6;
      func_0x00010bf5ac40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar6;
      func_0x00010c242040();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010c274c60();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x00010c0c4bc0();
      func_0x00010c13b0c0(param_4);
      uVar14 = uVar8;
      func_0x00010bfed9a0();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar14;
      func_0x00010c2a5040();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar8;
      func_0x00010bfed9a0();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar16;
      func_0x00010bfe0640();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar8;
      func_0x00010c106c20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff2140(param_1,puVar9,param_3,uVar5,uVar7,uVar10,uVar19,uVar13,0,uVar15,uVar17,
                          uVar18);
      _objc_release(uVar18);
      _objc_release(uVar17);
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      func_0x00010bef6aa0(puVar4,param_3,puVar9);
      _objc_release(puVar9);
      _objc_release(uVar8);
      _objc_release(uVar6);
      uVar19 = uVar19 + 1;
      uVar5 = param_4;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf529e0();
      _objc_release(uVar5);
    } while (uVar19 < uVar6);
  }
  if (uVar1 == 5) {
    uVar1 = param_4;
    func_0x00010c0dac40();
    if (0 < (long)uVar1) {
      uVar19 = param_4;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar19;
      func_0x00010bf529e0();
      _objc_release(uVar19);
      if ((long)uVar1 <= (long)uVar5) {
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,uVar1 - 1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1986c0(puVar4,param_3,puVar9);
        _objc_release(puVar9);
      }
    }
  }
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10849a904; end: 10849a96b; -[SCAdInteractionHistoryTracker onComposerDpaDisplay:snapIndex:dpaMetadata:] */

void FUN_10849a904(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x00010bef6380(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c191580();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10849a96c; end: 10849a9a3; -[SCAdInteractionHistoryTracker onSwipeAttempt:snapIndex:] */

void FUN_10849a96c(undefined8 param_1)

{
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10849a9a4; end: 10849a9db; -[SCAdInteractionHistoryTracker onAnySwipeAttempt:snapIndex:] */

void FUN_10849a9a4(undefined8 param_1)

{
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1685a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10849a9dc; end: 10849aa43; -[SCAdInteractionHistoryTracker onTryOnAdDisplayed:adIdentifier:snapIndex:] */

void FUN_10849a9dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010bef6380(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21a7c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10849aa44; end: 10849aa8b; -[SCAdInteractionHistoryTracker onTryOnTrigger:snapIndex:arExperienceResumed:] */

void FUN_10849aa44(undefined8 param_1)

{
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21a800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10849aa8c; end: 10849aac3; -[SCAdInteractionHistoryTracker onTryOnAttachmentClicked:snapIndex:] */

void FUN_10849aa8c(undefined8 param_1)

{
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21a720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10849aac4; end: 10849ab2b; -[SCAdInteractionHistoryTracker onTryOnLensSessionStarted:adIdentifier:snapIndex:] */

void FUN_10849aac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010bef6380(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf07200();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10849ab2c; end: 10849ab93; -[SCAdInteractionHistoryTracker onClickInteraction:adRequestClientId:snapIndex:] */

void FUN_10849ab2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010bef6380(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e2e60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10849ab94; end: 10849abdb; -[SCAdInteractionHistoryTracker addAttachmentTriggeredTsMsToLastClickInteraction:adRequestClientId:snapIndex:] */

void FUN_10849ab94(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6ee0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10849abdc; end: 10849ac23; -[SCAdInteractionHistoryTracker addAttachmentFullyVisibleTsMsToLastClickInteraction:adRequestClientId:snapIndex:] */

void FUN_10849abdc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6e80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10849ac24; end: 10849ac5b; -[SCAdInteractionHistoryTracker didExpandAdWithClientId:atIndex:] */

void FUN_10849ac24(undefined8 param_1)

{
  func_0x00010bef6380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18d660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10849ac5c; end: 10849acc3; -[SCAdInteractionHistoryTracker onValdiAdTrackEvent:adRequestClientId:snapIndex:] */

void FUN_10849ac5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010bef6380(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e77a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10849acc4; end: 10849ad17; -[SCAdInteractionHistoryTracker onPharmaDisclaimerRendered:adIdentifier:snapIndex:] */

void FUN_10849acc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010bef6380(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c1dafc0(param_1,param_2,param_3,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10849ad18; end: 10849ad6b; -[SCAdInteractionHistoryTracker onPharmaDisclaimerClicked:adIdentifier:snapIndex:] */

void FUN_10849ad18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010bef6380(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c1daf40(param_1,param_2,param_3,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10849ad6c; end: 10849ad73; -[SCAdInteractionHistoryTracker adIdentifierToViewngStatusMap] */

undefined8 FUN_10849ad6c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10849ad74; end: 10849ada3; -[SCAdInteractionHistoryTracker setAdIdentifierToViewngStatusMap:] */

void FUN_10849ad74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10849ada4; end: 10849adab; -[SCAdInteractionHistoryTracker audioOutputVolume] */

undefined8 FUN_10849ada4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10849adac; end: 10849adb3; -[SCAdInteractionHistoryTracker setAudioOutputVolume:] */

void FUN_10849adac(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 10849adb4; end: 10849adbb; -[SCAdInteractionHistoryTracker screenWidth] */

undefined8 FUN_10849adb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10849adbc; end: 10849adc3; -[SCAdInteractionHistoryTracker setScreenWidth:] */

void FUN_10849adbc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 10849adc4; end: 10849adcb; -[SCAdInteractionHistoryTracker screenHeight] */

undefined8 FUN_10849adc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10849adcc; end: 10849add3; -[SCAdInteractionHistoryTracker setScreenHeight:] */

void FUN_10849adcc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 10849add4; end: 10849addf; -[SCAdInteractionHistoryTracker .cxx_destruct] */

void FUN_10849add4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10849ade0; end: 10849af9f;  */

void FUN_10849ade0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = param_3;
  func_0x00010bef53e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d9990;
  _objc_alloc();
  func_0x00010bef4240();
  _objc_release(param_3);
  func_0x00010c274ca0(uVar1);
  func_0x00010c274e60(uVar1);
  uVar4 = param_1;
  func_0x00010c274c40(uVar1);
  uVar5 = uVar4;
  func_0x00010c274e00(uVar1);
  uVar6 = uVar5;
  func_0x00010c274e40(uVar1);
  uVar7 = uVar6;
  func_0x00010c274c40(uVar1);
  uVar8 = uVar7;
  func_0x00010c274e20(uVar1);
  func_0x00010c274980(uVar1);
  func_0x00010c2a23e0(uVar1);
  func_0x00010c26f760(uVar1);
  func_0x00010bef29c0(uVar1);
  func_0x00010bfb1ae0();
  uVar3 = uVar1;
  func_0x00010bf0f920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff17e0(param_1,uVar4,uVar5,uVar6,uVar7,uVar8,puVar2);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10849afa0; end: 10849afff; -[SCAdInteractionTimer initWithMediaDurationMillis:] */

undefined1 * FUN_10849afa0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fca48;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c137fe0(puVar1);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10849b000; end: 10849b027; -[SCAdInteractionTimer initWithMediaDurationMillis:accumulatedDurationMillis:] */

void FUN_10849b000(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c0293c0();
  if (param_3 != 0) {
    *(undefined8 *)(param_3 + 0x30) = param_2;
  }
  return;
}



/* Entry: 10849b028; end: 10849b05b; -[SCAdInteractionTimer start] */

void FUN_10849b028(undefined8 param_1,long param_2)

{
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    func_0x00010bfcb380();
    *(undefined8 *)(param_2 + 0x28) = param_1;
    *(undefined1 *)(param_2 + 8) = 1;
  }
  return;
}



/* Entry: 10849b05c; end: 10849b0ab; -[SCAdInteractionTimer stop] */

void FUN_10849b05c(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    func_0x00010bfcb380();
    func_0x00010bed9de0(param_2);
    func_0x00010bee27a0(param_1,param_2);
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



/* Entry: 10849b0ac; end: 10849b0bf; -[SCAdInteractionTimer reset] */

void FUN_10849b0ac(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 10849b0c0; end: 10849b107; -[SCAdInteractionTimer getAccurateAccumulatedDurationMillis] */

double FUN_10849b0c0(double param_1,long param_2)

{
  double dVar1;
  
  dVar1 = *(double *)(param_2 + 0x30);
  if (*(char *)(param_2 + 8) == '\x01') {
    func_0x00010bfcb380();
    dVar1 = (dVar1 + param_1) - *(double *)(param_2 + 0x28);
  }
  return dVar1;
}



/* Entry: 10849b108; end: 10849b10f; -[SCAdInteractionTimer getTotalMillis] */

void FUN_10849b108(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be236f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__getTotalDurationMillisWithCapAt_112566758,1)
  ;
  return;
}



/* Entry: 10849b110; end: 10849b117; -[SCAdInteractionTimer getMaxDurationMillis] */

void FUN_10849b110(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be206b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__getMaxDurationMillisWithCapAtDu_112565b48,1)
  ;
  return;
}



/* Entry: 10849b118; end: 10849b11f; -[SCAdInteractionTimer getUncappedTotalDurationMillis] */

void FUN_10849b118(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be236f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__getTotalDurationMillisWithCapAt_112566758,0)
  ;
  return;
}



/* Entry: 10849b120; end: 10849b127; -[SCAdInteractionTimer getUncappedMaxDurationMillis] */

void FUN_10849b120(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be206b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__getMaxDurationMillisWithCapAtDu_112565b48,0)
  ;
  return;
}



/* Entry: 10849b128; end: 10849b15f; -[SCAdInteractionTimer getCurrentDurationMillis] */

double FUN_10849b128(long param_1)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00010bfcb380(0);
    dVar1 = dVar1 - *(double *)(param_1 + 0x28);
  }
  return dVar1;
}



/* Entry: 10849b160; end: 10849b1bb; -[SCAdInteractionTimer _getTotalDurationMillisWithCapAtDuration:] */

double FUN_10849b160(double param_1,long param_2,undefined8 param_3,int param_4)

{
  double dVar1;
  
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    dVar1 = *(double *)(param_2 + 0x20);
  }
  else {
    func_0x00010bfcb380(param_2);
    dVar1 = *(double *)(param_2 + 0x20) + (param_1 - *(double *)(param_2 + 0x28));
    *(double *)(param_2 + 0x20) = dVar1;
  }
  if ((param_4 != 0) && (*(double *)(param_2 + 0x10) <= dVar1)) {
    dVar1 = *(double *)(param_2 + 0x10);
  }
  return dVar1;
}



/* Entry: 10849b1bc; end: 10849b20b; -[SCAdInteractionTimer _getMaxDurationMillisWithCapAtDuration:] */

double FUN_10849b1bc(long param_1,undefined8 param_2,int param_3)

{
  double dVar1;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00010bfcb380(param_1);
    func_0x00010bed9de0(param_1);
  }
  dVar1 = *(double *)(param_1 + 0x18);
  if ((param_3 != 0) && (*(double *)(param_1 + 0x10) <= dVar1)) {
    dVar1 = *(double *)(param_1 + 0x10);
  }
  return dVar1;
}



/* Entry: 10849b20c; end: 10849b213; -[SCAdInteractionTimer setMediaDurationMillis:] */

void FUN_10849b20c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 10849b214; end: 10849b23b; -[SCAdInteractionTimer _updateIntervalMillis:] */

void FUN_10849b214(double param_1,long param_2)

{
  param_1 = param_1 - *(double *)(param_2 + 0x28);
  if (*(double *)(param_2 + 0x18) < param_1) {
    *(double *)(param_2 + 0x18) = param_1;
  }
  *(double *)(param_2 + 0x30) = param_1 + *(double *)(param_2 + 0x30);
  return;
}



/* Entry: 10849b23c; end: 10849b24f; -[SCAdInteractionTimer _updateTotalMillis:] */

void FUN_10849b23c(double param_1,long param_2)

{
  *(double *)(param_2 + 0x20) =
       *(double *)(param_2 + 0x20) + (param_1 - *(double *)(param_2 + 0x28));
  return;
}



/* Entry: 10849b250; end: 10849b2ab; -[SCAdInteractionTimer getTimeStamp] */

undefined8 FUN_10849b250(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afec0;
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c155420(puVar1);
  _objc_release(puVar2);
  return param_1;
}



/* Entry: 10849b2ac; end: 10849b2b3; -[SCAdInteractionTimer isActive] */

undefined1 FUN_10849b2ac(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10849b2b4; end: 10849b2bb; -[SCAdInteractionTimer setIsActive:] */

void FUN_10849b2b4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10849b2bc; end: 10849b2c3; -[SCAdInteractionTimer mediaDurationMillis] */

undefined8 FUN_10849b2bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10849b2c4; end: 10849b2cb; -[SCAdInteractionTimer maxDurationMillis] */

undefined8 FUN_10849b2c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10849b2cc; end: 10849b2d3; -[SCAdInteractionTimer setMaxDurationMillis:] */

void FUN_10849b2cc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 10849b2d4; end: 10849b2db; -[SCAdInteractionTimer totalDurationMillis] */

undefined8 FUN_10849b2d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10849b2dc; end: 10849b2e3; -[SCAdInteractionTimer setTotalDurationMillis:] */

void FUN_10849b2dc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 10849b2e4; end: 10849b2eb; -[SCAdInteractionTimer startTimeStamp] */

undefined8 FUN_10849b2e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10849b2ec; end: 10849b2f3; -[SCAdInteractionTimer setStartTimeStamp:] */

void FUN_10849b2ec(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 10849b2f4; end: 10849b2fb; -[SCAdInteractionTimer accumulatedDurationMillis] */

undefined8 FUN_10849b2f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10849b2fc; end: 10849b303; -[SCAdInteractionTimer setAccumulatedDurationMillis:] */

void FUN_10849b2fc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x30) = param_1;
  return;
}



/* Entry: 10849b304; end: 10849b447; -[SCAdSnapInteraction initWithAdType:adProductType:adKey:snapIndex:topSnapMediaDurationMillis:responseReceiveTimeInMillis:longformMediaDurationMillis:preferredWidthDp:preferredHeightDp:preferredImageSizeDp:] */

undefined8 *
FUN_10849b304(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_6);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000010);
  puStack_78 = PTR_PTR_1126fca50;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = param_5;
    puVar2 = PTR_PTR_1126d9998;
    _objc_alloc();
    func_0x00010bff2120(param_1);
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126d99a0;
    _objc_alloc();
    func_0x00010bff21a0();
    uVar3 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000008);
  _objc_release(in_stack_00000000);
  _objc_release(param_6);
  return puVar1;
}



/* Entry: 10849b448; end: 10849b48b; -[SCAdSnapInteraction timeSinceAdRenderMillis] */

long FUN_10849b448(double param_1,long param_2)

{
  double dVar1;
  
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  dVar1 = param_1;
  func_0x00010bef29c0(*(undefined8 *)(param_2 + 8));
  return (long)(param_1 - dVar1);
}



/* Entry: 10849b48c; end: 10849b493; -[SCAdSnapInteraction deltaInMillis] */

void FUN_10849b48c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6d3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_deltaInMillis_1125b8e90)
  ;
  return;
}



/* Entry: 10849b494; end: 10849b49b; -[SCAdSnapInteraction adFirstRenderTimestamp] */

void FUN_10849b494(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef29d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_adFirstRenderTimestamp_11259a418);
  return;
}



/* Entry: 10849b49c; end: 10849b4a3; -[SCAdSnapInteraction snapIndex] */

void FUN_10849b49c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2415b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_snapIndex_11266df90);
  return;
}



/* Entry: 10849b4a4; end: 10849b4ab; -[SCAdSnapInteraction adKey] */

void FUN_10849b4a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef31d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_adKey_11259a618);
  return;
}



/* Entry: 10849b4ac; end: 10849b4b3; -[SCAdSnapInteraction adType] */

void FUN_10849b4ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef60b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_adType_11259b1d0);
  return;
}



/* Entry: 10849b4b4; end: 10849b4bb; -[SCAdSnapInteraction skipEvent] */

void FUN_10849b4b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_skipEvent_11266d270);
  return;
}



/* Entry: 10849b4bc; end: 10849b4c3; -[SCAdSnapInteraction exitEventSwipeInfo] */

void FUN_10849b4bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9b770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_exitEventSwipeInfo_1125c4780);
  return;
}



/* Entry: 10849b4c4; end: 10849b4cb; -[SCAdSnapInteraction swipeCount] */

void FUN_10849b4c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c264650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_swipeCount_112676bb8);
  return;
}



/* Entry: 10849b4cc; end: 10849b4d3; -[SCAdSnapInteraction isAudioOn] */

void FUN_10849b4cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_isAudioOn_1125f8c68);
  return;
}



/* Entry: 10849b4d4; end: 10849b4db; -[SCAdSnapInteraction audioQuadrantStates] */

void FUN_10849b4d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0f930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_audioQuadrantStates_1125a17f0);
  return;
}



/* Entry: 10849b4dc; end: 10849b4e3; -[SCAdSnapInteraction maxMediaVolumeForMediaPlayback] */

void FUN_10849b4dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c2670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_maxMediaVolumeForMediaPlayback_11260e3b0);
  return;
}



/* Entry: 10849b4e4; end: 10849b4eb; -[SCAdSnapInteraction topSnapMediaDurationMillis] */

void FUN_10849b4e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c274cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_topSnapMediaDurationMillis_11267ad50);
  return;
}



/* Entry: 10849b4ec; end: 10849b4f3; -[SCAdSnapInteraction topSnapTimeViewedMillis] */

void FUN_10849b4ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c274df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_topSnapTimeViewedMillis_11267ada0);
  return;
}



/* Entry: 10849b4f4; end: 10849b4fb; -[SCAdSnapInteraction topSnapCappedMaxViewDurationMillis] */

void FUN_10849b4f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c274990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_topSnapCappedMaxViewDurationMill_11267ac88);
  return;
}



/* Entry: 10849b4fc; end: 10849b503; -[SCAdSnapInteraction topSnapUnCappedMaxViewDurationMillis] */

void FUN_10849b4fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c274e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_topSnapUnCappedMaxViewDurationMi_11267adc8);
  return;
}


