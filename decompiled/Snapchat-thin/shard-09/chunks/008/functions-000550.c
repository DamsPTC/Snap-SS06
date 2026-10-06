/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072413d8; end: 1072414cb; -[SCMapLoggerEventSender mapViewFriendClusterWithSensitiveActionmoji:actionType:actionmojiStickerId:ghostTargetUserGuid:actionmojiAutoAssigned:] */

void FUN_1072413d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d5490;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc_init(puVar1);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  func_0x00010724330c(param_3);
  func_0x00010c206c40(puVar1,param_2,param_3);
  func_0x00010c161620(puVar1,param_2,param_4);
  func_0x00010c212220(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c2125e0(puVar1,param_2,param_6);
  _objc_release(param_6);
  func_0x00010c162060(puVar1,param_2,param_7);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1072414cc; end: 107241597; -[SCMapLoggerEventSender mapViewCompassTappedWithDistance:friendsOnMap:friendsInViewport:] */

void FUN_1072414cc(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d5498;
  _objc_alloc_init(PTR_PTR_1126d5498);
  lVar2 = param_2 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_3,lVar3);
  _objc_release(lVar2);
  func_0x00010c161620(puVar1,param_3,5);
  func_0x00010c190b00((double)(float)(int)(param_1 * 1000.0) / 1000.0,puVar1);
  func_0x00010c1c20e0(puVar1,param_3,param_4);
  func_0x00010c223380(puVar1,param_3,param_5);
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 8),param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107241598; end: 1072416cb; -[SCMapLoggerEventSender logGestureCountsWithNumberOfTaps:numberOfDoubleTaps:numberOfLongPresses:numberOfPinches:numberOfPans:numberOfZoomSliderUses:numberOfSingleTapZooms:numberOfTwoFingerTaps:numberOfTilts:numberOfRotates:] */

void FUN_107241598(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d54a0;
  _objc_alloc_init(PTR_PTR_1126d54a0);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  func_0x00010c1d0100(puVar1,param_2,param_3);
  func_0x00010c1cfa00(puVar1,param_2,param_4);
  func_0x00010c1cfd00(puVar1,param_2,param_5);
  func_0x00010c1cfe60(puVar1,param_2,param_6);
  func_0x00010c1cfe40(puVar1,param_2,param_7);
  func_0x00010c1d02a0(puVar1,param_2,param_8);
  func_0x00010c1d0080(puVar1,param_2,param_9);
  func_0x00010c1d01e0(puVar1,param_2,param_10);
  func_0x00010c1d0140(puVar1,param_2,param_11);
  func_0x00010c1cffc0(puVar1,param_2,param_12);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1072416cc; end: 10724179b; -[SCMapLoggerEventSender mapDidFinishLoadingWithZoom:friendCount:friendWithBitmojiCount:storyThumbnailCount:heatPointCount:] */

void FUN_1072416cc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d54a8;
  _objc_alloc_init(PTR_PTR_1126d54a8);
  lVar2 = param_2 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_3,lVar3);
  _objc_release(lVar2);
  func_0x00010c227aa0(param_1,puVar1);
  func_0x00010c223380(puVar1,param_3,param_4);
  func_0x00010c223400(puVar1,param_3,param_5);
  func_0x00010c1d00c0(puVar1,param_3,param_6);
  func_0x00010c1cfc00(puVar1,param_3,param_7);
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 8),param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10724179c; end: 107241813; -[SCMapLoggerEventSender mapUIItemViewed:] */

void FUN_10724179c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d54b0;
  _objc_alloc_init(PTR_PTR_1126d54b0);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  func_0x00010c1b5d40(puVar1,param_2,param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107241814; end: 1072418a3; -[SCMapLoggerEventSender mapScreenshotCapturedWithAction:friendsInViewport:] */

void FUN_107241814(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d54b8;
  _objc_alloc_init(PTR_PTR_1126d54b8);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  func_0x00010c161620(puVar1,param_2,param_3);
  func_0x00010c223380(puVar1,param_2,param_4);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1072418a4; end: 107241a73; -[SCMapLoggerEventSender mapViewZoomWithMapZoomId:zoomLevel:mapZoomType:openType:initialViewportLogicType:closeType:action:] */

void FUN_1072418a4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9
                  )

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126d54c0;
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  uVar2 = param_4;
  func_0x00010c0b4ca0(param_4);
  _objc_release(param_4);
  func_0x00010c1c29a0(puVar1,param_3,uVar2);
  lVar3 = param_2 + 0x10;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_3,lVar4);
  _objc_release(lVar3);
  func_0x00010c227aa0(param_1,puVar1);
  if (param_5 < 3) {
    if (param_5 == 1) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110ea3ed8;
    }
    else {
      if (param_5 != 2) goto LAB_1072419c8;
      ppuVar5 = &PTR____CFConstantStringClassReference_110ea3ef8;
    }
  }
  else {
    if (param_5 == 4) {
      func_0x00010c1c29e0(puVar1,param_3,&PTR____CFConstantStringClassReference_110ea3f18);
      if (param_6 - 1U < 3) {
        puVar6 = (&PTR_PTR_110994ad8)[param_6 - 1U];
      }
      else {
        puVar6 = (undefined *)0x0;
      }
      func_0x00010c1d51a0(puVar1,param_3,puVar6);
      func_0x00010c1acf80(puVar1,param_3,param_7);
      goto LAB_107241a2c;
    }
    if (param_5 == 3) {
      func_0x00010c1c29e0(puVar1,param_3,&PTR____CFConstantStringClassReference_110ea3eb8);
      func_0x00010c17d620(puVar1,param_3,param_8);
      func_0x00010c161620(puVar1,param_3,param_9);
      goto LAB_107241a2c;
    }
LAB_1072419c8:
    ppuVar5 = &PTR____CFConstantStringClassReference_110ea3e98;
  }
  func_0x00010c1c29e0(puVar1,param_3,ppuVar5);
LAB_107241a2c:
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 8),param_3,puVar1);
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 107241a74; end: 107241b4f; -[SCMapLoggerEventSender buttonTappedWithType:badgeState:] */

void FUN_107241a74(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d54c8;
  _objc_alloc_init(PTR_PTR_1126d54c8);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0bac20();
  func_0x00010c1c2900(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  func_0x00010c174ae0(puVar1,param_2,param_3);
  func_0x00010c16ed40(puVar1,param_2,param_4);
  if (param_3 + 1U < 0xd) {
    uVar4 = *(undefined8 *)(&UNK_10de20cc8 + (param_3 + 1U) * 8);
  }
  else {
    uVar4 = 0;
  }
  func_0x00010c1749a0(puVar1,param_2,uVar4);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107241b50; end: 107241bfb; -[SCMapLoggerEventSender mapViewOpenedToOnboardingWithSource:type:] */

void FUN_107241b50(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d54d0;
  _objc_alloc_init(PTR_PTR_1126d54d0);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  func_0x00010c206c40(puVar1,param_2,param_3);
  if (param_4 - 1U < 5) {
    uVar4 = *(undefined8 *)(&UNK_10de20d30 + (param_4 - 1U) * 8);
  }
  else {
    uVar4 = 6;
  }
  func_0x00010c161620(puVar1,param_2,uVar4);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107241bfc; end: 107241c93; -[SCMapLoggerEventSender onboardingDidComplete] */

void FUN_107241bfc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d54d8;
  _objc_alloc_init(PTR_PTR_1126d54d8);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  func_0x00010c206c40(puVar1,param_2,0x22);
  func_0x00010c1d7e80(puVar1,param_2,0x37);
  func_0x00010c1d84e0(puVar1,param_2,4);
  func_0x00010c222d20(0,puVar1);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107241c94; end: 107241d33; -[SCMapLoggerEventSender skippableLocationPromptShownWithAccepted:source:type:] */

void FUN_107241c94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d54e0;
  _objc_alloc_init(PTR_PTR_1126d54e0);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  func_0x00010c160c40(puVar1,param_2,param_3);
  func_0x00010c206c40(puVar1,param_2,param_4);
  func_0x00010c21acc0(puVar1,param_2,param_5);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107241d34; end: 107241e3b; -[SCMapLoggerEventSender tapToPlayAnywhereAttemptForCoordinate:zoomLevel:result:distanceFromUser:distanceFromClosestFriend:] */

void FUN_107241d34(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  double param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d54e8;
  _objc_alloc_init(PTR_PTR_1126d54e8);
  lVar2 = param_6 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_7,lVar3);
  _objc_release(lVar2);
  lVar2 = param_6 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0bac20();
  func_0x00010c1c2900(puVar1,param_7,lVar3);
  _objc_release(lVar2);
  func_0x00010c1b9120(param_1,puVar1);
  func_0x00010c1be5e0(param_2,puVar1);
  func_0x00010c227aa0(param_3,puVar1);
  func_0x00010c1c27c0(puVar1,param_7,param_8);
  func_0x00010c190ae0(param_4,puVar1);
  if (param_5 <= param_4) {
    param_4 = param_5;
  }
  func_0x00010c190a40(param_4,puVar1);
  func_0x00010c0b2e60(*(undefined8 *)(param_6 + 8),param_7,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107241e3c; end: 107241f6f; -[SCMapLoggerEventSender tapToPlayPoiAttemptForPoiId:coordinate:zoomLevel:result:distanceFromUser:distanceFromClosestFriend:] */

void FUN_107241e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  double param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d54e8;
  _objc_retain(param_8);
  _objc_alloc_init(puVar1);
  lVar2 = param_6 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_7,lVar3);
  _objc_release(lVar2);
  lVar2 = param_6 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0bac20();
  func_0x00010c1c2900(puVar1,param_7,lVar3);
  _objc_release(lVar2);
  func_0x00010c1b9120(param_1,puVar1);
  func_0x00010c1be5e0(param_2,puVar1);
  func_0x00010c227aa0(param_3,puVar1);
  func_0x00010c1c27c0(puVar1,param_7,param_9);
  func_0x00010c1c2460(puVar1,param_7,param_8);
  _objc_release(param_8);
  func_0x00010c190ae0(param_4,puVar1);
  if (param_5 <= param_4) {
    param_4 = param_5;
  }
  func_0x00010c190a40(param_4,puVar1);
  func_0x00010c0b2e60(*(undefined8 *)(param_6 + 8),param_7,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107241f70; end: 107242037; -[SCMapLoggerEventSender mapStatusOnboardingPageViewWithDuration:pageName:source:] */

void FUN_107241f70(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d54d8;
  _objc_alloc_init(PTR_PTR_1126d54d8);
  lVar2 = param_2 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_3,lVar3);
  _objc_release(lVar2);
  func_0x00010c222d20((double)(float)(int)(param_1 * 10.0) / 10.0,puVar1);
  func_0x00010c206c40(puVar1,param_3,param_5);
  func_0x00010c1d7e80(puVar1,param_3,0x39);
  func_0x00010c1d84e0(puVar1,param_3,param_4);
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 8),param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107242038; end: 107242167; -[SCMapLoggerEventSender mapStatusOpenedWithSource:statusSessionId:currentStatusCount:statusOptionsCount:mapFooterActionId:isSnapchatPlus:locationSharingSetting:] */

void FUN_107242038(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126d54f0;
  _objc_alloc_init(PTR_PTR_1126d54f0);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0bac20();
  func_0x00010c1c2900(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  func_0x00010c20a4a0(puVar1,param_2,param_4);
  func_0x00010c207200(puVar1,param_2,param_3);
  func_0x00010c187b60(puVar1,param_2,param_5);
  func_0x00010c20a480(puVar1,param_2,param_6);
  func_0x00010c1c2020(puVar1,param_2,param_7);
  func_0x00010c1b47c0(puVar1,param_2,param_8);
  lVar2 = param_9;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c1bfd20(puVar1,param_2,param_9);
  }
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_9);
  return;
}



/* Entry: 107242168; end: 1072422b3; -[SCMapLoggerEventSender mapStatusActionWithStatusSessionId:action:actionStatus:itemType:itemGridIndex:itemID:] */

void FUN_107242168(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126d54f8;
  _objc_retain(param_5);
  _objc_alloc_init(puVar1);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  func_0x00010c20a4a0(puVar1,param_2,param_3);
  func_0x00010c161620(puVar1,param_2,param_4);
  func_0x00010c161e40(puVar1,param_2,param_5);
  _objc_release(param_5);
  lVar2 = param_6;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c1b6340(puVar1,param_2,param_6);
  }
  lVar2 = param_7;
  func_0x00010bf529e0();
  if (lVar2 == 2) {
    func_0x00010c1b5ee0(puVar1,param_2,param_7);
  }
  lVar2 = param_8;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c1b5f20(puVar1,param_2,param_8);
  }
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1072422b4; end: 10724236b; -[SCMapLoggerEventSender mapStatusDidTapOptionWithType:optionIndex:statusSessionId:availableStickerCount:] */

void FUN_1072422b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d5500;
  _objc_alloc_init(PTR_PTR_1126d5500);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  func_0x00010c20a4a0(puVar1,param_2,param_5);
  func_0x00010c20a460(puVar1,param_2,param_3);
  func_0x00010c1abfe0(puVar1,param_2,param_4);
  func_0x00010c20a860(puVar1,param_2,param_6);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10724236c; end: 10724246f; -[SCMapLoggerEventSender mapStatusDidSetOptionWithType:optionIndex:statusSessionId:availableStickerCount:chosenStickerId:chosenOptionId:] */

void FUN_10724236c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d5508;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_alloc_init(puVar1);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  func_0x00010c20a4a0(puVar1,param_2,param_5);
  func_0x00010c20a460(puVar1,param_2,param_3);
  func_0x00010c1abfe0(puVar1,param_2,param_4);
  func_0x00010c20a860(puVar1,param_2,param_6);
  func_0x00010c17c480(puVar1,param_2,param_7);
  _objc_release(param_7);
  func_0x00010c1d5e20(puVar1,param_2,param_8);
  _objc_release(param_8);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107242470; end: 107242517; -[SCMapLoggerEventSender mapStatusDidDeleteStatusWithType:viewCount:statusSessionId:] */

void FUN_107242470(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d5510;
  _objc_alloc_init(PTR_PTR_1126d5510);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  func_0x00010c20a4a0(puVar1,param_2,param_5);
  func_0x0001072433a4(param_3);
  func_0x00010c20a520(puVar1,param_2,param_3 & 0xffffffff);
  func_0x00010c222500(puVar1,param_2,param_4);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107242518; end: 1072426d7; -[SCMapLoggerEventSender mapStatusClosedWithDuration:statusSessionId:currentStatusCount:statusOptionsCount:actionmojiStickerID:carID:petID:homeGridIndex:homeName:] */

void FUN_107242518(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8,long param_9,
                  long param_10,long param_11)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar1 = PTR_PTR_1126d5518;
  _objc_alloc_init(PTR_PTR_1126d5518);
  lVar2 = param_2 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_3,lVar3);
  _objc_release(lVar2);
  func_0x00010c20a4a0(puVar1,param_3,param_4);
  func_0x00010c222d20((double)(float)(int)(param_1 * 10.0) / 10.0,puVar1);
  func_0x00010c187b60(puVar1,param_3,param_5);
  func_0x00010c20a480(puVar1,param_3,param_6);
  lVar2 = param_7;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c162100(puVar1,param_3,param_7);
  }
  lVar2 = param_8;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c179560(puVar1,param_3,param_8);
  }
  lVar2 = param_9;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c1dae40(puVar1,param_3,param_9);
  }
  lVar2 = param_11;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c1a8de0(puVar1,param_3,param_11);
  }
  if (param_10 != 0) {
    func_0x00010c1a8d60(puVar1,param_3,param_10);
  }
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 8),param_3,puVar1);
  _objc_release(puVar1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1072426d8; end: 1072427cf; -[SCMapLoggerEventSender mapReadyWithSource:sourcePage:type:mapOpenState:latencyMs:] */

void FUN_1072426d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d5520;
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  if (param_5 - 1U < 5) {
    uVar4 = *(undefined8 *)(&UNK_10de20d30 + (param_5 - 1U) * 8);
  }
  else {
    uVar4 = 6;
  }
  func_0x00010c161620(puVar1,param_2,uVar4);
  func_0x00010c1b92e0(puVar1,param_2,param_7);
  func_0x00010c1c2360(puVar1,param_2,param_6);
  func_0x00010c206c40(puVar1,param_2,param_3);
  func_0x00010c206f20(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1072427d0; end: 1072428b7; -[SCMapLoggerEventSender mapFriendLoadWithSource:sourcePage:mapOpenState:totalLatencyMs:friendsRenderPrepLatencyMs:locationFetchLatencyMs:] */

void FUN_1072427d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d5528;
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  func_0x00010c206c40();
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  func_0x00010c1b92e0(puVar1,param_2,param_6);
  func_0x00010c1a0b00(puVar1,param_2,param_7);
  func_0x00010c1bf9e0(puVar1,param_2,param_8);
  func_0x00010c1c2360(puVar1,param_2,param_5);
  func_0x00010c206f20(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1072428b8; end: 10724296b; -[SCMapLoggerEventSender mapTapToPlayLatencyWithSource:sourcePage:latencyMs:mapOpenState:] */

void FUN_1072428b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d5530;
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  func_0x00010c1b92e0(puVar1,param_2,param_5);
  func_0x00010c1c2360(puVar1,param_2,param_6);
  func_0x00010c206f20(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10724296c; end: 1072429e3; -[SCMapLoggerEventSender mapPlaceProfileReadyWithMapSessionId:placeProfileSessionId:latencyMs:] */

void FUN_10724296c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5538;
  _objc_alloc_init(PTR_PTR_1126d5538);
  func_0x00010c1c25a0();
  func_0x00010c1dc740(puVar1,param_2,param_4);
  func_0x00010c1b92e0(puVar1,param_2,param_5);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1072429e4; end: 107242a5b; -[SCMapLoggerEventSender mapPlaceDiscoveryReadyWithMapSessionId:discoverySessionId:latencyMs:] */

void FUN_1072429e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5540;
  _objc_alloc_init(PTR_PTR_1126d5540);
  func_0x00010c1c25a0();
  func_0x00010c18f260(puVar1,param_2,param_4);
  func_0x00010c1b92e0(puVar1,param_2,param_5);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107242a5c; end: 107242b13; -[SCMapLoggerEventSender shareLocationPromptOpenedWithSharingSetting:mapBestFriendCount:mapFriendCount:promptType:] */

void FUN_107242a5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d5548;
  _objc_alloc_init(PTR_PTR_1126d5548);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  func_0x00010c1bfd20(puVar1,param_2,param_3);
  func_0x00010c1c1ec0(puVar1,param_2,param_4);
  func_0x00010c1c20e0(puVar1,param_2,param_5);
  func_0x00010c1e4f40(puVar1,param_2,param_6);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107242b14; end: 107242c0b; -[SCMapLoggerEventSender shareLocationPromptClosedWithAction:sharingSetting:mapBestFriendBitmojiDisplayCount:mapBestFriendCount:mapFriendCount:promptType:viewTime:] */

void FUN_107242b14(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d5550;
  _objc_alloc_init(PTR_PTR_1126d5550);
  lVar2 = param_2 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_3,lVar3);
  _objc_release(lVar2);
  func_0x00010c161620(puVar1,param_3,param_4);
  func_0x00010c1bfd20(puVar1,param_3,param_5);
  func_0x00010c1c1ea0(puVar1,param_3,param_6);
  func_0x00010c1c1ec0(puVar1,param_3,param_7);
  func_0x00010c1c20e0(puVar1,param_3,param_8);
  func_0x00010c1e4f40(puVar1,param_3,param_9);
  func_0x00010c222d20(param_1,puVar1);
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 8),param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107242c0c; end: 107242c97; -[SCMapLoggerEventSender mapBannerDidDisplayWithSessionId:bannerType:ghostTargetUserGuid:] */

void FUN_107242c0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c5f40;
  _objc_retain(param_5);
  _objc_alloc_init(puVar1);
  func_0x00010c16f140();
  func_0x00010c16f180(puVar1,param_2,param_4);
  func_0x00010c212400(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107242c98; end: 107242cf7; -[SCMapLoggerEventSender mapBannerActionWithBannerSessionId:bannerActionType:] */

void FUN_107242c98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cb708;
  _objc_alloc_init(PTR_PTR_1126cb708);
  func_0x00010c16f140();
  func_0x00010c161fe0(puVar1,param_2,param_4);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107242cf8; end: 107242daf; -[SCMapLoggerEventSender mapDialogPromptOpenedWithStatusSessionId:dialogId:type:source:] */

void FUN_107242cf8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d5558;
  _objc_alloc_init(PTR_PTR_1126d5558);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  func_0x00010c20a4a0(puVar1,param_2,param_3);
  func_0x00010c18d460(puVar1,param_2,param_4);
  func_0x00010c21acc0(puVar1,param_2,param_5);
  func_0x00010c206c40(puVar1,param_2,param_6);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107242db0; end: 107242e4f; -[SCMapLoggerEventSender mapDialogPromptClosedWithStatusSessionId:dialogId:closeMethod:] */

void FUN_107242db0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d5560;
  _objc_alloc_init(PTR_PTR_1126d5560);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ffa0();
  func_0x00010c1c25a0(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  func_0x00010c20a4a0(puVar1,param_2,param_3);
  func_0x00010c18d460(puVar1,param_2,param_4);
  func_0x00010c17d580(puVar1,param_2,param_5);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107242e50; end: 107242eeb; -[SCMapLoggerEventSender notificationWithID:type:actionType:] */

void FUN_107242e50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5568;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1ce180();
  _objc_release(param_3);
  func_0x00010c1ce740(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c161fe0(puVar1,param_2,param_5);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107242eec; end: 107242f17; -[SCMapLoggerEventSender .cxx_destruct] */

void FUN_107242eec(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107242f18; end: 1072430bb; -[SCMapLoggerSession initWithBlizzardLogger:mapPersonLocationsProvider:userLocationProvider:] */

undefined1 *
FUN_107242f18(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f8d00;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f3c0();
    *(long *)((long)puVar1 + 0x18) = (long)(param_1 * 1000.0);
    _objc_release(puVar3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126d5570;
    _objc_alloc();
    func_0x00010bff8b00();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1072430bc; end: 1072430c3; -[SCMapLoggerSession sessionId] */

undefined8 FUN_1072430bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1072430c4; end: 1072430eb; -[SCMapLoggerSession sessionIDObservable] */

void FUN_1072430c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1072430ec; end: 107243113; -[SCMapLoggerSession sessionResetObservable] */

void FUN_1072430ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107243114; end: 10724313b; -[SCMapLoggerSession mapViewportSessionIdObservable] */

void FUN_107243114(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10724313c; end: 107243143; -[SCMapLoggerSession mapPersonLocationsProvider] */

void FUN_10724313c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 107243144; end: 10724314b; -[SCMapLoggerSession userLocationProvider] */

void FUN_107243144(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_target_112678178);
  return;
}



/* Entry: 10724314c; end: 107243173; -[SCMapLoggerSession eventSender] */

void FUN_10724314c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107243174; end: 10724323b; -[SCMapLoggerSession resetSessionId:] */

void FUN_107243174(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3c0();
  *(long *)(param_2 + 0x18) = (long)(param_1 * 1000.0);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,*(undefined8 *)(param_2 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_3,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10724323c; end: 107243283; -[SCMapLoggerSession setMapViewportSessionId:] */

void FUN_10724323c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 0x40) = param_3;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107243284; end: 10724328b; -[SCMapLoggerSession mapViewportSessionId] */

undefined8 FUN_107243284(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10724328c; end: 1072432eb; -[SCMapLoggerSession .cxx_destruct] */

void FUN_10724328c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1072432ec; end: 10724346b;  */

undefined8 FUN_1072432ec(ulong param_1)

{
  if (param_1 < 6) {
    return *(undefined8 *)(&UNK_10de20d58 + param_1 * 8);
  }
  return 6;
}



/* Entry: 10724346c; end: 107243777;  */

undefined8 FUN_10724346c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c08fa60();
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea4098);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea40b8);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_1;
        func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea40d8);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_1;
          func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea40f8);
          if ((uVar1 & 1) == 0) {
            uVar1 = param_1;
            func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea4118);
            if ((uVar1 & 1) == 0) {
              uVar1 = param_1;
              func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e5b458);
              if ((uVar1 & 1) == 0) {
                uVar1 = param_1;
                func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea4138
                                   );
                if ((uVar1 & 1) == 0) {
                  uVar1 = param_1;
                  func_0x00010c0720c0(param_1,param_2,
                                      &PTR____CFConstantStringClassReference_110ea4158);
                  if ((uVar1 & 1) == 0) {
                    uVar1 = param_1;
                    func_0x00010c0720c0(param_1,param_2,
                                        &PTR____CFConstantStringClassReference_110ea4178);
                    if ((uVar1 & 1) == 0) {
                      uVar1 = param_1;
                      func_0x00010c0720c0(param_1,param_2,
                                          &PTR____CFConstantStringClassReference_110ea4198);
                      if ((uVar1 & 1) == 0) {
                        uVar1 = param_1;
                        func_0x00010c0720c0(param_1,param_2,
                                            &PTR____CFConstantStringClassReference_110ea41b8);
                        if ((uVar1 & 1) == 0) {
                          uVar1 = param_1;
                          func_0x00010c0720c0(param_1,param_2,
                                              &PTR____CFConstantStringClassReference_110ea41d8);
                          if ((uVar1 & 1) == 0) {
                            uVar1 = param_1;
                            func_0x00010c0720c0(param_1,param_2,
                                                &PTR____CFConstantStringClassReference_110ea41f8);
                            if ((uVar1 & 1) == 0) {
                              uVar1 = param_1;
                              func_0x00010c0720c0(param_1,param_2,
                                                  &PTR____CFConstantStringClassReference_110ea4218);
                              if ((uVar1 & 1) == 0) {
                                uVar1 = param_1;
                                func_0x00010c0720c0(param_1,param_2,
                                                    &PTR____CFConstantStringClassReference_110ea4238
                                                   );
                                if ((uVar1 & 1) == 0) {
                                  uVar1 = param_1;
                                  func_0x00010c0720c0(param_1,param_2,
                                                      &
                                                  PTR____CFConstantStringClassReference_110ea42b8);
                                  if ((uVar1 & 1) == 0) {
                                    uVar1 = param_1;
                                    func_0x00010c0720c0(param_1,param_2,
                                                        &
                                                  PTR____CFConstantStringClassReference_110ea4258);
                                    if ((uVar1 & 1) == 0) {
                                      uVar1 = param_1;
                                      func_0x00010c0720c0(param_1,param_2,
                                                          &
                                                  PTR____CFConstantStringClassReference_110ea4278);
                                      if ((uVar1 & 1) == 0) {
                                        uVar1 = param_1;
                                        func_0x00010c0720c0(param_1,param_2,
                                                            &
                                                  PTR____CFConstantStringClassReference_110ea4298);
                                        if ((uVar1 & 1) == 0) {
                                          uVar1 = param_1;
                                          func_0x00010c0720c0(param_1,param_2,
                                                              &
                                                  PTR____CFConstantStringClassReference_110ea42f8);
                                          if ((uVar1 & 1) == 0) {
                                            uVar1 = param_1;
                                            func_0x00010c0720c0(param_1,param_2,
                                                                &
                                                  PTR____CFConstantStringClassReference_110ea4318);
                                            if ((uVar1 & 1) == 0) {
                                              uVar1 = param_1;
                                              func_0x00010c0720c0(param_1,param_2,
                                                                  &
                                                  PTR____CFConstantStringClassReference_110ea4358);
                                              if ((uVar1 & 1) == 0) {
                                                uVar1 = param_1;
                                                func_0x00010c0720c0(param_1,param_2,
                                                                    &
                                                  PTR____CFConstantStringClassReference_110ea4378);
                                                uVar2 = 0x19;
                                                if ((int)uVar1 == 0) {
                                                  uVar2 = 0;
                                                }
                                              }
                                              else {
                                                uVar2 = 0x18;
                                              }
                                            }
                                            else {
                                              uVar2 = 0xd;
                                            }
                                          }
                                          else {
                                            uVar2 = 0x17;
                                          }
                                        }
                                        else {
                                          uVar2 = 0x15;
                                        }
                                      }
                                      else {
                                        uVar2 = 0x14;
                                      }
                                    }
                                    else {
                                      uVar2 = 0x13;
                                    }
                                  }
                                  else {
                                    uVar2 = 0x12;
                                  }
                                }
                                else {
                                  uVar2 = 0x11;
                                }
                              }
                              else {
                                uVar2 = 0x10;
                              }
                            }
                            else {
                              uVar2 = 0xf;
                            }
                          }
                          else {
                            uVar2 = 0xc;
                          }
                        }
                        else {
                          uVar2 = 0xb;
                        }
                      }
                      else {
                        uVar2 = 10;
                      }
                    }
                    else {
                      uVar2 = 9;
                    }
                  }
                  else {
                    uVar2 = 8;
                  }
                }
                else {
                  uVar2 = 7;
                }
              }
              else {
                uVar2 = 6;
              }
            }
            else {
              uVar2 = 5;
            }
          }
          else {
            uVar2 = 4;
          }
        }
        else {
          uVar2 = 3;
        }
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107243778; end: 1072437fb; -[SCMapStoriesInfo initWithMapSessionId:mapViewportSessionId:mapSourceType:mapStoryType:mapZoomLevel:distanceFromUser:distanceFromClosestFriend:] */

void FUN_107243778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126f8d08;
  uStack_60 = param_4;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    *(undefined8 *)((long)puVar1 + 0x10) = param_7;
    *(undefined8 *)((long)puVar1 + 0x18) = param_8;
    *(undefined8 *)((long)puVar1 + 0x20) = param_9;
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    *(undefined8 *)((long)puVar1 + 0x30) = param_2;
    *(undefined8 *)((long)puVar1 + 0x38) = param_3;
  }
  return;
}



/* Entry: 1072437fc; end: 107243803; -[SCMapStoriesInfo mapSessionId] */

undefined8 FUN_1072437fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107243804; end: 10724380b; -[SCMapStoriesInfo mapViewportSessionId] */

undefined8 FUN_107243804(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10724380c; end: 107243813; -[SCMapStoriesInfo mapSourceType] */

undefined8 FUN_10724380c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107243814; end: 10724381b; -[SCMapStoriesInfo mapStoryType] */

undefined8 FUN_107243814(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10724381c; end: 107243823; -[SCMapStoriesInfo mapZoomLevel] */

undefined8 FUN_10724381c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107243824; end: 10724382b; -[SCMapStoriesInfo distanceFromUser] */

undefined8 FUN_107243824(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10724382c; end: 107243833; -[SCMapStoriesInfo distanceFromClosestFriend] */

undefined8 FUN_10724382c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107243834; end: 10724391f; +[SCMapViewLoggerUtil personLocationsInCurrentViewport:mapPersonLocationsProvider:] */

void FUN_107243834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_7);
  func_0x00010bf00660(param_8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_8;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  func_0x00010c29fd40(param_7);
  _objc_release(param_7);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc0000000;
  pcStack_80 = FUN_107243920;
  puStack_78 = &UNK_110994c28;
  uVar2 = uVar1;
  uStack_70 = param_1;
  uStack_68 = param_2;
  uStack_60 = param_3;
  uStack_58 = param_4;
  func_0x00010bfaea20(uVar1,param_6,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107243920; end: 10724396f;  */

bool FUN_107243920(double param_1,double param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  double dVar5;
  
  func_0x00010bf51c80(param_4);
  dVar5 = *(double *)(param_3 + 0x30);
  bVar2 = false;
  bVar3 = true;
  if (*(double *)(param_3 + 0x20) <= param_1) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(param_1) && !NAN(dVar5)) {
      bVar2 = param_1 == dVar5;
      bVar3 = dVar5 <= param_1;
    }
  }
  bVar1 = true;
  bVar4 = false;
  if (!bVar3 || bVar2) {
    bVar1 = false;
    bVar4 = true;
    if (!NAN(param_2) && !NAN(*(double *)(param_3 + 0x28))) {
      bVar1 = param_2 < *(double *)(param_3 + 0x28);
      bVar4 = false;
    }
  }
  if (bVar1 == bVar4) {
    bVar2 = param_2 <= *(double *)(param_3 + 0x38);
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 107243970; end: 107243ae3; +[SCMapViewLoggerUtil distanceBetweenClosestFriendAndCoordinate:mapPersonLocationsProvider:] */

double FUN_107243970(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar11 = param_1;
  uVar8 = param_2;
  func_0x00010bf00660();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_5;
  func_0x00010bf04a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51c80();
  dVar12 = param_1;
  uVar15 = param_2;
  func_0x000108d312a8(param_1,param_2,dVar11,uVar8);
  _objc_release(lVar1);
  dVar13 = 0.0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_5);
  puVar7 = auStack_e8;
  uVar8 = 0x10;
  lVar1 = param_5;
  func_0x00010bf52a60(param_5,param_4,&uStack_130,puVar7,0x10);
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      dVar14 = dVar13;
      uVar8 = uVar15;
      dVar16 = dVar12;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_5);
        }
        func_0x00010bf51c80(*(undefined8 *)(lStack_128 + lVar10 * 8));
        dVar13 = param_1;
        uVar15 = param_2;
        dVar11 = dVar14;
        func_0x000108d312a8(param_1,param_2,dVar14,uVar8);
        dVar12 = dVar13;
        if (dVar16 <= dVar13) {
          dVar12 = dVar16;
        }
        lVar10 = lVar10 + 1;
        dVar14 = dVar13;
        uVar8 = uVar15;
        dVar16 = dVar12;
      } while (lVar1 != lVar10);
      puVar7 = auStack_e8;
      uVar8 = 0x10;
      lVar1 = param_5;
      puVar6 = &uStack_130;
      func_0x00010bf52a60(param_5,param_4,&uStack_130,puVar7,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_5);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return dVar12;
  }
  ___stack_chk_fail();
  dVar12 = dVar13;
  _objc_retain(puVar6);
  puVar2 = (undefined1 *)puVar6;
  func_0x00010c292d40(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c292ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bf51c80(puVar3);
  func_0x000108d312a8();
  puVar2 = (undefined1 *)puVar6;
  func_0x00010c0b97a0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf86ec0(dVar13,uVar15,param_5,param_4,puVar2);
  _objc_release(puVar2);
  puVar4 = PTR_PTR_1126c5b50;
  _objc_alloc(PTR_PTR_1126c5b50);
  puVar2 = (undefined1 *)puVar6;
  func_0x00010c15ffa0(puVar6);
  puVar5 = (undefined1 *)puVar6;
  func_0x00010c0bac20(puVar6);
  _objc_release(puVar6);
  dVar14 = dVar12;
  if (dVar13 <= dVar12) {
    dVar14 = dVar13;
  }
  func_0x00010c0285e0(dVar11,dVar12,dVar14,puVar4,param_4,puVar2,puVar5,puVar7,uVar8);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return dVar11;
}



/* Entry: 107243ae4; end: 107243c27; +[SCMapViewLoggerUtil mapStoriesInfoForLoggerSession:storyCoordinate:mapSourceType:mapStoryType:mapZoomLevel:] */

void FUN_107243ae4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = param_1;
  _objc_retain(param_6);
  uVar1 = param_6;
  func_0x00010c292d40(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c292ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bf51c80(uVar2);
  func_0x000108d312a8();
  uVar1 = param_6;
  func_0x00010c0b97a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf86ec0(param_1,param_2,param_4,param_5,uVar1);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c5b50;
  _objc_alloc(PTR_PTR_1126c5b50);
  uVar1 = param_6;
  func_0x00010c15ffa0(param_6);
  uVar4 = param_6;
  func_0x00010c0bac20(param_6);
  _objc_release(param_6);
  dVar6 = dVar5;
  if (param_1 <= dVar5) {
    dVar6 = param_1;
  }
  func_0x00010c0285e0(param_3,dVar5,dVar6,puVar3,param_5,uVar1,uVar4,param_7,param_8);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107243c28; end: 107243d4b; -[SCMapLoggingServices initWithMapLoggerSessionInfoProvider:mapViewLogger:lifecycleLoggingInfoProvider:tapToPlayLogger:mapInitialViewportGrapheneMetricReporter:] */

undefined1 *
FUN_107243c28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f8d10;
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
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107243d4c; end: 107243d53; -[SCMapLoggingServices mapLoggerSessionInfoProvider] */

undefined8 FUN_107243d4c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107243d54; end: 107243d5b; -[SCMapLoggingServices mapViewLogger] */

undefined8 FUN_107243d54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107243d5c; end: 107243d63; -[SCMapLoggingServices lifecycleLoggingInfoProvider] */

undefined8 FUN_107243d5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107243d64; end: 107243d6b; -[SCMapLoggingServices tapToPlayLogger] */

undefined8 FUN_107243d64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107243d6c; end: 107243d73; -[SCMapLoggingServices mapInitialViewportGrapheneMetricReporter] */

undefined8 FUN_107243d6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107243d74; end: 107243dc7; -[SCMapLoggingServices .cxx_destruct] */

void FUN_107243d74(long param_1)

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



/* Entry: 107243dc8; end: 107243e87;  */

void FUN_107243dc8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  
  lVar2 = param_1;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010beec820(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110ea4398;
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ea4398,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar1,param_2,ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    FUN_107243e88();
    _objc_release(lVar2);
  }
  else {
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107243e88; end: 107243e93;  */

void FUN_107243e88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 107243e94; end: 107243fcb;  */

void FUN_107243e94(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = PTR_PTR_1126d5578;
  _objc_opt_class(PTR_PTR_1126d5578);
  uVar2 = param_1;
  func_0x00010bf249e0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfedc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  func_0x0001072440b8();
  if ((uVar4 & 1) == 0) {
    uVar3 = uVar2;
    func_0x00010c0f5960(uVar2,param_2,&PTR____CFConstantStringClassReference_110ea4418,
                        &PTR____CFConstantStringClassReference_110e3fdf8);
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 == 0) {
      func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                          &PTR____CFConstantStringClassReference_110ea43b8,
                          &PTR____CFConstantStringClassReference_110ea4438);
    }
    else {
      func_0x00010bf24ca0(param_1,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010724409c();
      uVar2 = param_1;
    }
    func_0x0001072440b8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107243fcc; end: 107244013;  */

void FUN_107243fcc(void)

{
  func_0x00010c0ccfe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_10724409c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107244014; end: 107244053;  */

void FUN_107244014(void)

{
  func_0x00010c0ccfc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfedc40();
  _objc_retainAutoreleasedReturnValue();
  FUN_10724409c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107244054; end: 10724409b;  */

void FUN_107244054(void)

{
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf24a60();
  _objc_retainAutoreleasedReturnValue();
  FUN_10724409c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10724409c; end: 1072440bf;  */

void FUN_10724409c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1072440c0; end: 1072444f3; +[MGLAttributionInfo attributionInfosFromHTMLString:fontSize:linkColor:] */

void FUN_1072440c0(double param_1,undefined *param_2,undefined **param_3,long param_4,long param_5)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  undefined *puStack_160;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  
  func_0x000107245624();
  uStack_80 = extraout_x8;
  func_0x0001072455bc();
  func_0x000107245658();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_4 != 0) {
    uStack_a0 = *(undefined8 *)PTR__NSDocumentTypeDocumentAttribute_1103457e0;
    uStack_90 = *(undefined8 *)PTR__NSHTMLTextDocumentType_110345800;
    uStack_98 = *(undefined8 *)PTR__NSCharacterEncodingDocumentAttribute_1103457c8;
    ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cac78;
    puStack_160 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25da60();
    _objc_retainAutoreleasedReturnValue();
    in_ZR = param_1 == 0.0;
    ppuVar2 = param_3;
    if (!(bool)in_ZR) {
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06ba0(puVar1);
      func_0x00010724559c();
      ppuVar2 = param_3;
    }
    if (param_5 != 0) {
      func_0x00010bfc9760(param_5);
      func_0x00010bf06ba0(puVar1);
    }
    param_2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_2;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = &uStack_e8;
    uStack_e8 = 0;
    uStack_d8 = 0x3032000000;
    pcStack_d0 = FUN_1072444f4;
    uStack_c8 = 0x107244504;
    uStack_c0 = 0;
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_10724450c;
    puStack_108 = &UNK_110994c48;
    puStack_e0 = puStack_f0;
    _objc_retain();
    puStack_100 = puVar1;
    _objc_retain(puStack_160);
    param_3 = &puStack_120;
    puStack_f8 = puStack_160;
    _objc_retainBlock();
    puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x00010bf60460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c077480();
    func_0x00010724559c();
    if (((ulong)puVar1 & 1) == 0) {
      func_0x00010006eaa4(PTR___dispatch_main_q_11034be20);
    }
    else {
      (*(code *)param_3[2])(param_3);
      param_3 = ppuVar2;
    }
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puStack_e0[5];
    func_0x00010c0cd080(uVar3);
    _objc_retain(puVar1);
    func_0x00010bf97b00(uVar3);
    _objc_release(puVar1);
    func_0x000107245614();
    _objc_release(puStack_f8);
    _objc_release(puStack_100);
    func_0x0001072455cc(&uStack_e8);
    _objc_release(uStack_c0);
    func_0x0001072455ac();
    _objc_release();
    func_0x0001072455c4();
    func_0x00010724559c();
  }
  func_0x0001072455b4();
  func_0x000107245594();
  func_0x0001072455dc(uStack_80);
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  func_0x00010724559c();
  func_0x00010724561c();
  _objc_release(puStack_160);
  func_0x000107245660();
  func_0x000107245594();
  __Unwind_Resume();
  *(undefined **)(param_2 + 0x28) = param_3[5];
  param_3[5] = (undefined *)0x0;
  return;
}



/* Entry: 1072444f4; end: 10724450b;  */

void FUN_1072444f4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10724450c; end: 107244553;  */

void FUN_10724450c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc();
  func_0x00010c008460();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107244554; end: 1072447eb;  */

void FUN_107244554(float param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *unaff_x19;
  long unaff_x20;
  
  func_0x000107245604();
  if (unaff_x19 != (undefined *)0x0) {
    _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_opt_isKindOfClass();
    param_2 = unaff_x19;
    if (((ulong)unaff_x19 & 1) == 0) {
      puVar1 = PTR_PTR_1126c5b68;
      func_0x00010c22b860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b3b60();
      param_2 = (undefined *)0x0;
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126c5b68;
        func_0x00010c22b860();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b3b60();
        param_2 = puVar1;
        func_0x0001072455ac();
        func_0x00010724559c();
        if ((long)puVar1 < 1) goto LAB_10724459c;
        param_2 = PTR_PTR_1126c5b68;
        func_0x00010c22b860();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a1f00();
      }
      func_0x00010724559c();
    }
  }
LAB_10724459c:
  func_0x000107245634();
  func_0x00010bf0dde0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  if (100.0 < param_1) {
    func_0x000107245634();
    func_0x00010c12b3c0();
  }
  func_0x000107245634();
  func_0x00010bf0e4e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ccfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001072455ac();
  func_0x0001072455a4();
  puVar1 = param_2;
  func_0x00010c08fa60();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c0d3c80(param_2);
    func_0x00010c0cd080();
    func_0x00010c12b3c0(param_2);
    _objc_alloc(PTR_PTR_1126d5580);
    func_0x00010c052be0();
    func_0x00010c19b2a0();
    func_0x00010befa120(*(undefined8 *)(unaff_x20 + 0x20));
    func_0x0001072455ac();
    func_0x0001072455a4();
  }
  func_0x0001072455c4();
  func_0x00010724559c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1072447ec; end: 10724488b; -[MGLAttributionInfo initWithTitle:URL:] */

undefined1 *
FUN_1072447ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x0001072455bc();
  func_0x000107245658();
  puStack_38 = PTR_PTR_1126f8d18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107245668();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    func_0x000107245658();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
  }
  func_0x0001072455b4();
  func_0x000107245594();
  return (undefined1 *)puVar1;
}



/* Entry: 10724488c; end: 1072448db; -[MGLAttributionInfo copyWithZone:] */

undefined8 FUN_10724488c(undefined8 param_1)

{
  _objc_opt_class();
  func_0x00010bf00e40();
  func_0x00010c052be0();
  func_0x00010c19b2a0();
  return param_1;
}



/* Entry: 1072448dc; end: 1072448eb; -[MGLAttributionInfo feedbackURLAtCenterCoordinate:zoomLevel:] */

void FUN_1072448dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa4590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_feedbackURLForStyleURL_atCenterC_1125c6b08,0)
  ;
  return;
}



/* Entry: 1072448ec; end: 107244d9b; -[MGLAttributionInfo feedbackURLForStyleURL:atCenterCoordinate:zoomLevel:direction:pitch:] */

void FUN_1072448ec(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 extraout_x8;
  undefined *puVar5;
  undefined *unaff_x25;
  undefined *unaff_x28;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  
  puVar1 = param_3;
  func_0x000107245624();
  uStack_a0 = extraout_x8;
  func_0x0001072455bc();
  func_0x00010c072cc0();
  if (((ulong)param_1 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    func_0x00010bf44760(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8,param_2,
                        &PTR____CFConstantStringClassReference_110ea4518);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110ea4538);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19efe0(puVar5,param_2,puVar1);
    func_0x00010724559c();
    puVar2 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
    puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c0ccf80(PTR__OBJC_CLASS___NSBundle_1126aea78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11d4c0(puVar2,param_2,&PTR____CFConstantStringClassReference_110dcbe78,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001072455c4();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010c1504a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    if (((ulong)puVar2 & 1) == 0) {
      func_0x0001072455a4();
    }
    else {
      unaff_x25 = param_3;
      func_0x00010bfe4420();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      func_0x0001072455ac();
      func_0x0001072455a4();
      if ((int)unaff_x25 != 0) {
        func_0x00010c0f5860();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = param_3;
        func_0x00010bf529e0();
        puVar2 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
        in_ZR = puVar3 == (undefined *)0x3;
        if ((undefined *)0x2 < puVar3) {
          puStack_c8 = param_3;
          func_0x00010c0dfd40(param_3,param_2,1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c11d4c0(puVar2,param_2,&PTR____CFConstantStringClassReference_110ea4598);
          _objc_retainAutoreleasedReturnValue();
          puStack_e0 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
          puStack_c0 = puVar2;
          func_0x00010c0dfd40(param_3,param_2,2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c11d4c0(puStack_e0,param_2,&PTR____CFConstantStringClassReference_110dbf6f8);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
          puStack_b8 = puStack_e0;
          func_0x00010beecce0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c11d4c0(puVar3,param_2,&PTR____CFConstantStringClassReference_110e18ef8);
          _objc_retainAutoreleasedReturnValue();
          unaff_x28 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
          unaff_x25 = PTR__OBJC_CLASS___NSBundle_1126aea78;
          puStack_b0 = puVar3;
          func_0x00010c0ccfe0(PTR__OBJC_CLASS___NSBundle_1126aea78);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = unaff_x25;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c11d4c0(unaff_x28,param_2,&PTR____CFConstantStringClassReference_110ea45b8,
                              puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_a8 = unaff_x28;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_c0,4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar1,param_2,puVar3);
          func_0x000107245614();
          _objc_release(unaff_x28);
          func_0x00010724561c();
          _objc_release(unaff_x25);
          func_0x0001072455ac();
          func_0x000107245660();
          _objc_release(puStack_e0);
          _objc_release(param_3);
          _objc_release(puVar2);
          _objc_release(puStack_c8);
          puStack_d8 = param_3;
          puStack_d0 = puVar2;
        }
        func_0x0001072455a4();
      }
    }
    func_0x00010c1e6460(puVar5);
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    param_1 = puVar5;
    func_0x0001072455c4();
    func_0x00010724559c();
    func_0x0001072455b4();
  }
  func_0x000107245594();
  func_0x0001072455dc(uStack_a0);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107245614();
    _objc_release(unaff_x28);
    func_0x00010724561c();
    _objc_release(unaff_x25);
    func_0x0001072455ac();
    func_0x000107245660();
    _objc_release(puStack_e0);
    _objc_release(puStack_d8);
    _objc_release(puStack_d0);
    _objc_release(puStack_c8);
    func_0x0001072455a4();
    func_0x0001072455c4();
    func_0x00010724559c();
    func_0x0001072455b4();
    func_0x000107245594();
    __Unwind_Resume(param_1);
    puVar3 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c0ccfc0(PTR__OBJC_CLASS___NSBundle_1126aea78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09e800();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001072455b4();
    puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c0ccfc0(PTR__OBJC_CLASS___NSBundle_1126aea78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09e800();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001072455a4();
    puVar5 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc();
    func_0x00010c2711a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff4f40(puVar5,param_2,param_1);
    func_0x0001072455a4();
    puVar4 = puVar5;
    func_0x00010c25cd40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    func_0x00010c12b3c0(puVar5,param_2,*(undefined8 *)PTR__NSUnderlineStyleAttributeName_110345880,0
                        ,puVar4);
    func_0x0001072455a4();
    puVar4 = puVar5;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11f420();
    func_0x0001072455a4();
    if (puVar4 != (undefined *)0x7fffffffffffffff) {
      puVar4 = puVar5;
      func_0x00010c0d3de0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      if (puVar1 != (undefined *)0x1) {
        puVar2 = puVar3;
      }
      puVar1 = puVar5;
      func_0x00010c0d3de0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      func_0x00010c130f80(puVar4,param_2,&PTR____CFConstantStringClassReference_110ea4618,puVar2,1,0
                          ,puVar1);
      func_0x0001072455c4();
      func_0x0001072455a4();
    }
    func_0x0001072455b4();
    func_0x000107245594();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107244d9c; end: 107244fdb; -[MGLAttributionInfo titleWithStyle:] */

void FUN_107244d9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0ccfc0(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09e800();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001072455b4();
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0ccfc0(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09e800();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001072455a4();
  puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc();
  func_0x00010c2711a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4f40(puVar3,param_2,param_1);
  func_0x0001072455a4();
  puVar4 = puVar3;
  func_0x00010c25cd40(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010c12b3c0(puVar3,param_2,*(undefined8 *)PTR__NSUnderlineStyleAttributeName_110345880,0,
                      puVar4);
  func_0x0001072455a4();
  puVar4 = puVar3;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11f420();
  func_0x0001072455a4();
  if (puVar4 != (undefined *)0x7fffffffffffffff) {
    puVar4 = puVar3;
    func_0x00010c0d3de0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    if (param_3 != 1) {
      puVar2 = puVar1;
    }
    puVar1 = puVar3;
    func_0x00010c0d3de0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    func_0x00010c130f80(puVar4,param_2,&PTR____CFConstantStringClassReference_110ea4618,puVar2,1,0,
                        puVar1);
    func_0x0001072455c4();
    func_0x0001072455a4();
  }
  func_0x0001072455b4();
  func_0x000107245594();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107244fdc; end: 1072450fb; -[MGLAttributionInfo isEqual:] */

ulong FUN_107244fdc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  func_0x0001072455bc();
  uVar2 = param_1;
  _objc_opt_class(param_1);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,uVar2);
  if ((uVar3 & 1) == 0) {
    param_3 = 0;
  }
  else {
    uVar3 = param_3;
    func_0x00010c2711a0();
    iVar1 = (int)uVar3;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2711a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0();
    if (iVar1 == 0) {
      param_3 = 0;
    }
    else {
      func_0x00010bdc2b80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc2b80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071ae0(param_3);
      func_0x0001072455ac();
      func_0x0001072455a4();
    }
    func_0x00010724559c();
    func_0x0001072455b4();
  }
  func_0x000107245594();
  return param_3;
}



/* Entry: 1072450fc; end: 10724516f; -[MGLAttributionInfo hash] */

long FUN_1072450fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x00010bdc2b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x00010724559c();
  func_0x000107245594();
  return param_1 + lVar1;
}



/* Entry: 107245170; end: 10724525b; -[MGLAttributionInfo subsetCompare:] */

long FUN_107245170(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong unaff_x19;
  ulong unaff_x20;
  long lVar2;
  
  FUN_107245584();
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010724559c();
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001072455c4();
  uVar1 = unaff_x20;
  func_0x00010bf4bb00(unaff_x20,param_2,unaff_x19);
  if ((uVar1 & 1) == 0) {
    func_0x00010bf4bb00(unaff_x19,param_2,unaff_x20);
    lVar2 = -(unaff_x19 & 1);
  }
  else {
    lVar2 = 1;
  }
  func_0x00010724559c();
  func_0x0001072455b4();
  func_0x000107245594();
  return lVar2;
}



/* Entry: 10724525c; end: 107245263; -[MGLAttributionInfo title] */

undefined8 FUN_10724525c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107245264; end: 107245283; -[MGLAttributionInfo setTitle:] */

void FUN_107245264(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_107245584();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107245284; end: 10724528b; -[MGLAttributionInfo URL] */

undefined8 FUN_107245284(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10724528c; end: 1072452ab; -[MGLAttributionInfo setURL:] */

void FUN_10724528c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_107245584();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1072452ac; end: 1072452b3; -[MGLAttributionInfo isFeedbackLink] */

undefined1 FUN_1072452ac(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1072452b4; end: 1072452bb; -[MGLAttributionInfo setFeedbackLink:] */

void FUN_1072452b4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1072452bc; end: 1072452eb; -[MGLAttributionInfo .cxx_destruct] */

void FUN_1072452bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1072452ec; end: 1072453f3;  */

void FUN_1072452ec(void)

{
  undefined8 unaff_x19;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  FUN_107245584();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 1;
  func_0x000107245668();
  func_0x00010bf97e80();
  if ((*(char *)(puStack_68 + 3) == '\x01') && ((*(byte *)(puStack_48 + 3) & 1) == 0)) {
    func_0x00010befa120();
  }
  _objc_release(unaff_x19);
  func_0x0001072455cc(&uStack_70);
  func_0x0001072455cc(&uStack_50);
  func_0x000107245594();
  return;
}



/* Entry: 1072453f4; end: 10724549f;  */

void FUN_1072453f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107245604();
  lVar1 = *(long *)(unaff_x20 + 0x20);
  func_0x00010c260b60();
  if (lVar1 == -1) {
    *(undefined1 *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 8) + 0x18) = 0;
    *param_4 = 1;
  }
  else if (lVar1 == 1) {
    if (*(char *)(*(long *)(*(long *)(unaff_x20 + 0x30) + 8) + 0x18) == '\x01') {
      func_0x00010c12d3c0(*(undefined8 *)(unaff_x20 + 0x28),param_2,param_3);
    }
    else {
      func_0x00010c130f40(*(undefined8 *)(unaff_x20 + 0x28),param_2,param_3,
                          *(undefined8 *)(unaff_x20 + 0x20));
      *(undefined1 *)(*(long *)(*(long *)(unaff_x20 + 0x30) + 8) + 0x18) = 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1072454a0; end: 107245583;  */

void FUN_1072454a0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  ulong uVar5;
  
  uVar2 = param_1;
  uVar4 = param_3;
  func_0x000107245624();
  func_0x0001072455bc();
  func_0x000107245668();
  func_0x0001072455f0();
  lVar1 = lRam0000000000000000;
  while (uVar2 != 0) {
    uVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar4 = *(undefined8 *)(uVar5 * 8);
      uVar3 = param_1;
      func_0x00010bfcf9c0(param_1,param_2,uVar4);
      uVar5 = uVar5 + 1;
      in_ZR = uVar5 == uVar2;
    } while (uVar5 < uVar2);
    func_0x0001072455f0();
    uVar2 = uVar3;
  }
  func_0x000107245594();
  func_0x000107245594();
  func_0x0001072455dc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107245594();
  func_0x000107245594();
  func_0x0001072455d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar4);
  return;
}



/* Entry: 107245584; end: 107245677;  */

void FUN_107245584(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 107245678; end: 107245693;  */

undefined1  [16] FUN_107245678(ulong param_1)

{
  undefined1 auVar1 [16];
  
  func_0x00010c08fa60();
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1 << 0x40;
}



/* Entry: 107245694; end: 1072456c7;  */

void FUN_107245694(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c08fa60();
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = param_1;
  }
  _objc_retain(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1072456c8; end: 10724582b;  */

void FUN_1072456c8(void)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  func_0x000107245d60();
  func_0x00010c0d3c80();
  puVar1 = PTR__OBJC_CLASS___NSOrthography_1126d5588;
  func_0x00010c09e220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69e40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107245d70();
  func_0x00010c0cd080(unaff_x20);
  func_0x000107245d84();
  _objc_retain();
  func_0x00010bf97da0(unaff_x20);
  func_0x000107245d84();
  func_0x000107245d50();
  _objc_release(unaff_x20);
  func_0x000107245d40();
  func_0x000107245d7c();
  func_0x000107245d48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 10724582c; end: 107245a43;  */

void FUN_10724582c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c260c80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  if ((uVar2 < 4) &&
     ((((func_0x000107245d38(), (uVar2 & 1) != 0 || (func_0x000107245d38(), (uVar2 & 1) != 0)) ||
       (func_0x000107245d38(), (uVar2 & 1) != 0)) ||
      ((func_0x000107245d38(), (uVar2 & 1) != 0 || (func_0x000107245d38(), (uVar2 & 1) != 0))))))
  goto LAB_1072459c4;
  func_0x00010bf2fae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf35920();
  func_0x000107245d58();
  uVar2 = uVar1;
  func_0x00010c260c00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfda7c0();
  if (((int)uVar1 == 0) || (uVar1 = uVar2, func_0x00010c08fa60(), uVar1 == 0)) {
LAB_10724592c:
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107245d40();
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c28ed60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf35920(uVar2);
    puVar4 = puVar3;
    func_0x00010bf359c0();
    _objc_release(puVar3);
    if (((ulong)puVar4 & 1) == 0) goto LAB_10724592c;
  }
  func_0x000107245d58();
LAB_1072459c4:
  func_0x00010c130d20(*(undefined8 *)(param_1 + 0x20));
  func_0x000107245d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


