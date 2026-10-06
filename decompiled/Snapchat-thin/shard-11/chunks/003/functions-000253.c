/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1084a1b2c; end: 1084a1c9b; -[SCAdViewingStatus swipedFromTopSnap:snapIndex:viewContext:currentMediaVolumePercent:attachmentTriggerType:] */

void FUN_1084a1b2c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_6);
  lVar1 = param_2;
  func_0x00010bef53e0(param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_6;
  func_0x00010c0e00e0(param_6,param_3,&PTR____CFConstantStringClassReference_110ea1f58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c265440(param_1,lVar1,param_3,param_4,uVar2);
  _objc_release(uVar2);
  lVar3 = param_2;
  func_0x00010bf60ca0(param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_6;
  func_0x00010c0e00e0(param_6,param_3,&PTR____CFConstantStringClassReference_110ea1f58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c265440(param_1,lVar3,param_3,param_4,uVar2);
  _objc_release(uVar2);
  _objc_release(lVar3);
  if (*(long *)(param_2 + 0x30) == 0) {
    *(undefined8 *)(param_2 + 0x30) = param_7;
  }
  lVar3 = lVar1;
  func_0x00010bef60a0();
  if ((int)param_4 == 0) {
    if (lVar3 == 1) {
      func_0x00010bef5140(param_1,param_2,param_3,param_5,1,0,*(undefined1 *)(param_2 + 0x51));
    }
  }
  else if (lVar3 == 1) {
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x38) = uVar2;
    _objc_release(uVar4);
    func_0x00010c255780(*(undefined8 *)(param_2 + 0x28));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1084a1c9c; end: 1084a1d03; -[SCAdViewingStatus swipeUpToCardAtSnapIndex:attachmentTriggerType:] */

void FUN_1084a1c9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x30) = param_4;
  lVar1 = param_1;
  func_0x00010bef53e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c265240();
  func_0x00010bf60ca0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c265240();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1084a1d04; end: 1084a1e07; -[SCAdViewingStatus onProfileAttachmentTriggeredAtSnapIndex:attachmentTriggerType:attachmentTriggeredTimestampMs:] */

void FUN_1084a1d04(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_2;
  func_0x00010bef53e0();
  _objc_retainAutoreleasedReturnValue();
  *(undefined8 *)(param_2 + 0x30) = param_5;
  func_0x00010c265240();
  lVar2 = param_2;
  func_0x00010bf60ca0(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c265240();
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010bf3c940();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    func_0x00010bef6ea0(param_1,lVar1);
  }
  func_0x00010bf60ca0(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf3c940();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    func_0x00010bef6ea0(param_1,param_2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1084a1e08; end: 1084a1eb3; -[SCAdViewingStatus onWebBrowserSessionEvent:collectionItemIndex:snapIndex:] */

void FUN_1084a1e08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7a60();
  func_0x00010bf60ca0(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7a60();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a1eb4; end: 1084a1f87; -[SCAdViewingStatus adoptWebViewTrackInfo:collectionItemIndex:snapIndex:] */

void FUN_1084a1eb4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bef53e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
    func_0x00010befdd60(uVar1);
  }
  func_0x00010bf60ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
    func_0x00010befdd60(param_1);
  }
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1084a1f88; end: 1084a2033; -[SCAdViewingStatus didReceiveWebViewContext:collectionItemIndex:snapIndex:] */

void FUN_1084a1f88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf79660();
  func_0x00010bf60ca0(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf79660();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a2034; end: 1084a2063; -[SCAdViewingStatus setViewContext:] */

void FUN_1084a2034(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a2064; end: 1084a20c7; -[SCAdViewingStatus adLongPressedAtSnapIndex:] */

void FUN_1084a2064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef3500();
  func_0x00010bf60ca0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef3500();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a20c8; end: 1084a212b; -[SCAdViewingStatus adScreenshotAtSnapIndex:] */

void FUN_1084a20c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4d00();
  func_0x00010bf60ca0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4d00();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a212c; end: 1084a219b; -[SCAdViewingStatus adBoostAtSnapIndex:wasBoosted:] */

void FUN_1084a212c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef20a0();
  func_0x00010bf60ca0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef20a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a219c; end: 1084a227f; -[SCAdViewingStatus setDidExpandAdAtIndex:] */

void FUN_1084a219c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar1;
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18d660(lVar2,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf60ca0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18d660();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1084a2280; end: 1084a22e3; -[SCAdViewingStatus resetForIntermediateTrackingForSnapIndex:] */

void FUN_1084a2280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef63a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c138b00();
  func_0x00010bef53e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c138b00();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a22e4; end: 1084a23e3; -[SCAdViewingStatus resetForExitTracking] */

void FUN_1084a22e4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bea3500();
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  lVar3 = *(long *)(param_1 + 8);
  _objc_retain(lVar3);
  uVar2 = 0x10;
  lVar1 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar1 != 0) {
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(lVar3);
        }
        func_0x00010c138a60(*(undefined8 *)(lStack_108 + lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      uVar2 = 0x10;
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = lVar3;
  func_0x00010bef53e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217660();
  func_0x00010bf60ca0(lVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217660();
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1084a23e4; end: 1084a246b; -[SCAdViewingStatus setTopSnapMediaDurationMillis:topSnapReportedViewDurationMillis:snapIndex:] */

void FUN_1084a23e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217660();
  func_0x00010bf60ca0(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217660();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a246c; end: 1084a24f3; -[SCAdViewingStatus setLongformMediaDurationMillis:longformMediaDurationMillis:snapIndex:] */

void FUN_1084a246c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0da0();
  func_0x00010bf60ca0(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0da0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a24f4; end: 1084a25d3; -[SCAdViewingStatus setLoadedOnEntry:loadedOnExit:visiblePageLoadTimeSeconds:snapIndex:collectionItemIndex:initialPageStatusCode:] */

void FUN_1084a24f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  uVar1 = param_2;
  func_0x00010bef53e0(param_2,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bea40(param_1);
  func_0x00010bf60ca0(param_2,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bea40(param_1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a25d4; end: 1084a2647; -[SCAdViewingStatus setPixelCookieAvailability:snapIndex:] */

void FUN_1084a25d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc040();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc040();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a2648; end: 1084a26bf; -[SCAdViewingStatus setAppInActivityTriggeredTimestampMs:snapIndex:] */

void FUN_1084a2648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x00010bef53e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168b60(param_1);
  func_0x00010bf60ca0(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168b60(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a26c0; end: 1084a27ab; -[SCAdViewingStatus setDeepLinkFromCard:deepLinkFallBackToAppStore:deepLinkFallBackToWebview:deepLinkFallBackToDefaultBrowser:deepLinkURI:snapIndex:collectionItemIndex:] */

void FUN_1084a26c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  
  _objc_retain(in_stack_00000000);
  _objc_retain(in_x6);
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,in_x7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18a860();
  func_0x00010bf60ca0(param_1,param_2,in_x7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18a860();
  _objc_release(in_stack_00000000);
  _objc_release(in_x6);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a27ac; end: 1084a2867; -[SCAdViewingStatus setAppInstallFromSnapIndex:collectionItemIndex:loadedOnEntry:loadedOnExit:visiblePageLoadTimeSeconds:] */

void FUN_1084a27ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  uVar1 = param_2;
  func_0x00010bef53e0(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168cc0(param_1);
  func_0x00010bf60ca0(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168cc0(param_1);
  _objc_release(param_5);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a2868; end: 1084a2913; -[SCAdViewingStatus setShowcase:snapIndex:collectionItemIndex:] */

void FUN_1084a2868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c202260();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c202260();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a2914; end: 1084a299b; -[SCAdViewingStatus setSubmittedLead:snapIndex:] */

void FUN_1084a2914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f2e0();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f2e0();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a299c; end: 1084a2a23; -[SCAdViewingStatus setFormInteraction:snapIndex:] */

void FUN_1084a299c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19ebc0();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19ebc0();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a2a24; end: 1084a2a97; -[SCAdViewingStatus setDidCall:snapIndex:] */

void FUN_1084a2a24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18d540();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18d540();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a2a98; end: 1084a2b0b; -[SCAdViewingStatus setDidMessage:snapIndex:] */

void FUN_1084a2a98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18d8e0();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18d8e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a2b0c; end: 1084a2b83; -[SCAdViewingStatus onAudibilityChange:snapIndex:] */

void FUN_1084a2b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x00010bef53e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e29a0(param_1);
  func_0x00010bf60ca0(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e29a0(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a2b84; end: 1084a2bf7; -[SCAdViewingStatus obstructedOnTopSnap:snapIndex:] */

void FUN_1084a2b84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1460();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1460();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a2bf8; end: 1084a2c7f; -[SCAdViewingStatus unobstructedOnTopSnap:currentMediaVolumePercent:snapIndex:] */

void FUN_1084a2bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x00010bef53e0(param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c281be0(param_1);
  func_0x00010bf60ca0(param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c281be0(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a2c80; end: 1084a2d07; -[SCAdViewingStatus setSurveyAnswer:snapIndex:] */

void FUN_1084a2c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210400();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210400();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a2d08; end: 1084a2d7b; -[SCAdViewingStatus setAdSurveyResponse:snapIndex:] */

void FUN_1084a2d08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164a40();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164a40();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a2d7c; end: 1084a2e03; -[SCAdViewingStatus setStickerMetadataArray:snapIndex:] */

void FUN_1084a2d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b360();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b360();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a2e04; end: 1084a2e8b; -[SCAdViewingStatus setStickerInfo:snapIndex:] */

void FUN_1084a2e04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b160();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b160();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a2e8c; end: 1084a2eef; -[SCAdViewingStatus setReminderLocalBannerTapped:] */

void FUN_1084a2e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e9d40();
  func_0x00010bf60ca0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e9d40();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a2ef0; end: 1084a2f77; -[SCAdViewingStatus setReminderCountdownId:snapIndex:] */

void FUN_1084a2ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e9d00();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e9d00();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a2f78; end: 1084a2fdb; -[SCAdViewingStatus setReminderScheduled:] */

void FUN_1084a2f78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e9d80();
  func_0x00010bf60ca0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e9d80();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a2fdc; end: 1084a304f; -[SCAdViewingStatus setWakeUpTapWithSource:snapIndex:] */

void FUN_1084a2fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2245c0();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2245c0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a3050; end: 1084a30b3; -[SCAdViewingStatus setAdShareOpenedWithSnapIndex:] */

void FUN_1084a3050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164660();
  func_0x00010bf60ca0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164660();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a30b4; end: 1084a3117; -[SCAdViewingStatus setAdShareSentWithSnapIndex:] */

void FUN_1084a30b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1646e0();
  func_0x00010bf60ca0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1646e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a3118; end: 1084a318b; -[SCAdViewingStatus setAdSubscribed:snapIndex:] */

void FUN_1084a3118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164a00();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164a00();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a318c; end: 1084a3203; -[SCAdViewingStatus setAdSubscribeButtonTappedTimestampMs:snapIndex:] */

void FUN_1084a318c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x00010bef53e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1649c0(param_1);
  func_0x00010bf60ca0(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1649c0(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a3204; end: 1084a3277; -[SCAdViewingStatus setInitialAdSubscribed:snapIndex:] */

void FUN_1084a3204(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ac800();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ac800();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a3278; end: 1084a32ff; -[SCAdViewingStatus setAdFavorited:timestampMs:snapIndex:] */

void FUN_1084a3278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x00010bef53e0(param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1635a0(param_1);
  func_0x00010bf60ca0(param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1635a0(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a3300; end: 1084a3373; -[SCAdViewingStatus setAdFavorited:snapIndex:] */

void FUN_1084a3300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163560();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163560();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a3374; end: 1084a33e7; -[SCAdViewingStatus setAdFavoriteTapSource:snapIndex:] */

void FUN_1084a3374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163520();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a33e8; end: 1084a345b; -[SCAdViewingStatus setInitialAdFavorited:snapIndex:] */

void FUN_1084a33e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ac780();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ac780();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a345c; end: 1084a34cf; -[SCAdViewingStatus setInitialAdReposted:snapIndex:] */

void FUN_1084a345c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ac7c0();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ac7c0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a34d0; end: 1084a3557; -[SCAdViewingStatus setAdReposted:timestampMs:snapIndex:] */

void FUN_1084a34d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x00010bef53e0(param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164200(param_1);
  func_0x00010bf60ca0(param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164200(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a3558; end: 1084a35df; -[SCAdViewingStatus setTapToPauseEvent:snapIndex:] */

void FUN_1084a3558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211ea0();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211ea0();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a35e0; end: 1084a3653; -[SCAdViewingStatus setCanShowMultiSegmentExperience:snapIndex:] */

void FUN_1084a35e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c177d40();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c177d40();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a3654; end: 1084a36d7; -[SCAdViewingStatus setEndCardDisplayed:endCardType:onlyIfUnset:] */

void FUN_1084a3654(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195e00();
  func_0x00010bf60ca0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195e00();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a36d8; end: 1084a374b; -[SCAdViewingStatus setEndCardTapped:snapIndex:] */

void FUN_1084a36d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195e40();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195e40();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a374c; end: 1084a37d3; -[SCAdViewingStatus setPollStickerSelectedOptionsIds:snapIndex:] */

void FUN_1084a374c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1debe0();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1debe0();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a37d4; end: 1084a3847; -[SCAdViewingStatus setPharmaDisclaimerRendered:snapIndex:] */

void FUN_1084a37d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dafa0();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dafa0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a3848; end: 1084a38bb; -[SCAdViewingStatus setPharmaDisclaimerClicked:snapIndex:] */

void FUN_1084a3848(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1daf20();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1daf20();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a38bc; end: 1084a391f; -[SCAdViewingStatus setSwipeAttempt:] */

void FUN_1084a38bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c265120();
  func_0x00010bf60ca0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c265120();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a3920; end: 1084a3983; -[SCAdViewingStatus setAnySwipeAttempt:] */

void FUN_1084a3920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04a60();
  func_0x00010bf60ca0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04a60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a3984; end: 1084a39e7; -[SCAdViewingStatus setContextMenuOpenedWithSnapIndex:] */

void FUN_1084a3984(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1831a0();
  func_0x00010bf60ca0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1831a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a39e8; end: 1084a3a6f; -[SCAdViewingStatus setTryOnLensId:snapIndex:] */

void FUN_1084a39e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21a7a0();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21a7a0();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a3a70; end: 1084a3adf; -[SCAdViewingStatus setTryOnOpenedWithSnapIndex:arExperienceResumed:] */

void FUN_1084a3a70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21a7e0();
  func_0x00010bf60ca0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21a7e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a3ae0; end: 1084a3b43; -[SCAdViewingStatus setTryOnAttachmentClickedWithSnapIndex:] */

void FUN_1084a3ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21a700();
  func_0x00010bf60ca0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21a700();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a3b44; end: 1084a3bcb; -[SCAdViewingStatus appendTryOnLensSessionId:snapIndex:] */

void FUN_1084a3b44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf071e0();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf071e0();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a3bcc; end: 1084a3c53; -[SCAdViewingStatus onClickInteraction:snapIndex:] */

void FUN_1084a3bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e2e20();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e2e20();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a3c54; end: 1084a3ccb; -[SCAdViewingStatus addAttachmentTriggeredTsMsToLastClickInteraction:snapIndex:] */

void FUN_1084a3c54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x00010bef53e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6ea0(param_1);
  func_0x00010bf60ca0(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6ea0(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a3ccc; end: 1084a3d43; -[SCAdViewingStatus addAttachmentFullyVisibleTsMsToLastClickInteraction:snapIndex:] */

void FUN_1084a3ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x00010bef53e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6e40(param_1);
  func_0x00010bf60ca0(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6e40(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a3d44; end: 1084a3dcb; -[SCAdViewingStatus onValdiAdTrackEvent:snapIndex:] */

void FUN_1084a3d44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7760();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7760();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a3dcc; end: 1084a3e0f; -[SCAdViewingStatus getTileWidth] */

undefined4 FUN_1084a3dcc(long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x58) == 5) && (lVar1 = param_1, func_0x00010c29f440(), lVar1 == 0)) {
    lVar1 = 0x40;
  }
  else {
    lVar1 = 0x48;
  }
  return *(undefined4 *)(param_1 + lVar1);
}



/* Entry: 1084a3e10; end: 1084a3e53; -[SCAdViewingStatus getTileHeight] */

undefined4 FUN_1084a3e10(long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x58) == 5) && (lVar1 = param_1, func_0x00010c29f440(), lVar1 == 0)) {
    lVar1 = 0x44;
  }
  else {
    lVar1 = 0x4c;
  }
  return *(undefined4 *)(param_1 + lVar1);
}



/* Entry: 1084a3e54; end: 1084a3e5b; -[SCAdViewingStatus getScreenWidth] */

undefined4 FUN_1084a3e54(long param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



/* Entry: 1084a3e5c; end: 1084a3e63; -[SCAdViewingStatus getScreenHeight] */

undefined4 FUN_1084a3e5c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



/* Entry: 1084a3e64; end: 1084a3f03; -[SCAdViewingStatus viewContext] */

void FUN_1084a3e64(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c0d3c80();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x30)
                       );
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b92c8;
    func_0x00010bf0d4e0(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(lVar1,param_2,puVar2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  lVar4 = lVar1;
  func_0x00010bf51e00(lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1084a3f04; end: 1084a3f77; -[SCAdViewingStatus _setDefaultValue] */

void FUN_1084a3f04(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ca510;
  _objc_alloc();
  func_0x00010c0293c0(0x43e0000000000000);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar2);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x52) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x88) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1084a3f78; end: 1084a3fbb; -[SCAdViewingStatus _setViewedSnapIndex:] */

void FUN_1084a3f78(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010bf529e0();
  if (param_3 < uVar2) {
    uVar2 = *(ulong *)(param_1 + 0x78);
    uVar1 = *(ulong *)(param_1 + 0x80);
    *(ulong *)(param_1 + 0x80) = uVar1 ^ (uVar1 ^ param_3) & -(ulong)((long)uVar1 < (long)param_3);
    *(ulong *)(param_1 + 0x78) = uVar2 ^ (uVar2 ^ param_3) & -(ulong)((long)uVar2 < (long)param_3);
  }
  return;
}



/* Entry: 1084a3fbc; end: 1084a3fc3; -[SCAdViewingStatus addAdSnapViewingStatus:] */

void FUN_1084a3fbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_addObject__11259c1f0)
  ;
  return;
}



/* Entry: 1084a3fc4; end: 1084a404b; -[SCAdViewingStatus setDpaMetadata:snapIndex:] */

void FUN_1084a3fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c191560();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c191560();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a404c; end: 1084a40bf; -[SCAdViewingStatus setCustomProductPageEnabled:snapIndex:] */

void FUN_1084a404c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1886e0();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1886e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a40c0; end: 1084a4147; -[SCAdViewingStatus setSKOverlayTrackInfo:snapIndex:] */

void FUN_1084a40c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f5040();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f5040();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a4148; end: 1084a41cf; -[SCAdViewingStatus setGestureParameters:snapIndex:] */

void FUN_1084a4148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a2f80();
  func_0x00010bf60ca0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a2f80();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a41d0; end: 1084a425f; -[SCAdViewingStatus setCommercePdpViewedWithSnapIndex:collectionItemIndex:] */

void FUN_1084a41d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bef53e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f260();
  func_0x00010bf60ca0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f260();
  _objc_release(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a4260; end: 1084a4267; -[SCAdViewingStatus adType] */

undefined8 FUN_1084a4260(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1084a4268; end: 1084a426f; -[SCAdViewingStatus adKey] */

undefined8 FUN_1084a4268(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1084a4270; end: 1084a4277; -[SCAdViewingStatus adProductType] */

undefined8 FUN_1084a4270(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1084a4278; end: 1084a427f; -[SCAdViewingStatus wasShown] */

undefined1 FUN_1084a4278(long param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}



/* Entry: 1084a4280; end: 1084a4287; -[SCAdViewingStatus setWasShown:] */

void FUN_1084a4280(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 1084a4288; end: 1084a428f; -[SCAdViewingStatus topSnapMedia] */

undefined8 FUN_1084a4288(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1084a4290; end: 1084a4297; -[SCAdViewingStatus maxViewedSnapIndex] */

undefined8 FUN_1084a4290(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1084a4298; end: 1084a429f; -[SCAdViewingStatus maxViewedSnapIndexSinceReset] */

undefined8 FUN_1084a4298(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1084a42a0; end: 1084a42a7; -[SCAdViewingStatus isUnSkippableAd] */

undefined1 FUN_1084a42a0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x51);
}



/* Entry: 1084a42a8; end: 1084a42af; -[SCAdViewingStatus setIsUnSkippableAd:] */

void FUN_1084a42a8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x51) = param_3;
  return;
}



/* Entry: 1084a42b0; end: 1084a42b7; -[SCAdViewingStatus openProfilePage] */

undefined1 FUN_1084a42b0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x52);
}



/* Entry: 1084a42b8; end: 1084a42bf; -[SCAdViewingStatus setOpenProfilePage:] */

void FUN_1084a42b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x52) = param_3;
  return;
}



/* Entry: 1084a42c0; end: 1084a42c7; -[SCAdViewingStatus openTaggedProfilePage] */

undefined1 FUN_1084a42c0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x53);
}



/* Entry: 1084a42c8; end: 1084a42cf; -[SCAdViewingStatus setOpenTaggedProfilePage:] */

void FUN_1084a42c8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x53) = param_3;
  return;
}



/* Entry: 1084a42d0; end: 1084a42d7; -[SCAdViewingStatus adNotInterested] */

undefined1 FUN_1084a42d0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x54);
}



/* Entry: 1084a42d8; end: 1084a42df; -[SCAdViewingStatus setAdNotInterested:] */

void FUN_1084a42d8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x54) = param_3;
  return;
}



/* Entry: 1084a42e0; end: 1084a42e7; -[SCAdViewingStatus didExpandAdAtIndex] */

undefined8 FUN_1084a42e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 1084a42e8; end: 1084a42ef; -[SCAdViewingStatus expandButtonDisplaySnapIndex] */

undefined8 FUN_1084a42e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1084a42f0; end: 1084a431f; -[SCAdViewingStatus setExpandButtonDisplaySnapIndex:] */

void FUN_1084a42f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084a4320; end: 1084a4327; -[SCAdViewingStatus openedProfileId] */

undefined8 FUN_1084a4320(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 1084a4328; end: 1084a432f; -[SCAdViewingStatus setOpenedProfileId:] */

void FUN_1084a4328(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1084a4330; end: 1084a43a7; -[SCAdViewingStatus .cxx_destruct] */

void FUN_1084a4330(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


