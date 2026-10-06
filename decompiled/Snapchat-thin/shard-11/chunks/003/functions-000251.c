/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10849c8d0; end: 10849c8d7; -[SCAdSnapViewingStatus webViewTrackInfo] */

void FUN_10849c8d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a4430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_webViewTrackInfo_112686b30);
  return;
}



/* Entry: 10849c8d8; end: 10849c8df; -[SCAdSnapViewingStatus loadedOnEntry] */

undefined1 FUN_10849c8d8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x78);
}



/* Entry: 10849c8e0; end: 10849c8e7; -[SCAdSnapViewingStatus loadedOnExit] */

undefined1 FUN_10849c8e0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x79);
}



/* Entry: 10849c8e8; end: 10849c8ef; -[SCAdSnapViewingStatus visiblePageLoadTimeSeconds] */

undefined8 FUN_10849c8e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10849c8f0; end: 10849c8f7; -[SCAdSnapViewingStatus deepLinkFromCardCount] */

undefined1 FUN_10849c8f0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x8a);
}



/* Entry: 10849c8f8; end: 10849c8ff; -[SCAdSnapViewingStatus deepLinkFallBackToWebview] */

undefined1 FUN_10849c8f8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x89);
}



/* Entry: 10849c900; end: 10849c907; -[SCAdSnapViewingStatus deepLinkFallBackToDefaultBrowser] */

undefined1 FUN_10849c900(long param_1)

{
  return *(undefined1 *)(param_1 + 0x8c);
}



/* Entry: 10849c908; end: 10849c90f; -[SCAdSnapViewingStatus deepLinkFallBackToAppStoreCount] */

undefined1 FUN_10849c908(long param_1)

{
  return *(undefined1 *)(param_1 + 0x8b);
}



/* Entry: 10849c910; end: 10849c937; -[SCAdSnapViewingStatus deepLinkURI] */

void FUN_10849c910(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10849c938; end: 10849c93f; -[SCAdSnapViewingStatus collectionItemInteractions] */

void FUN_10849c938(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be45ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__itemInteractionsWithInteraction_11256f158,
             *(undefined8 *)(param_1 + 0xf0));
  return;
}



/* Entry: 10849c940; end: 10849c947; -[SCAdSnapViewingStatus totalCollectionItemInteractions] */

void FUN_10849c940(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be45ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__itemInteractionsWithInteraction_11256f158,
             *(undefined8 *)(param_1 + 0xf8));
  return;
}



/* Entry: 10849c948; end: 10849cacf; -[SCAdSnapViewingStatus _itemInteractionsWithInteractions:] */

void FUN_10849c948(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar13 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar17 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar15 = *plStack_120;
    do {
      lVar16 = 0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(param_3);
        }
        lVar14 = *(long *)(lStack_128 + lVar16 * 8);
        _objc_retain(lVar14);
        lVar3 = lVar14;
        func_0x00010bf0d600();
        lVar4 = lVar14;
        if (lVar3 == 3) {
          lVar4 = param_1;
          func_0x00010bed9d00(param_1,param_2,lVar14);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar14);
        }
        func_0x00010befa120(puVar1,param_2,lVar4);
        _objc_release(lVar4);
        lVar16 = lVar16 + 1;
      } while (lVar2 != lVar16);
      lVar2 = param_3;
      puVar13 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar5 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_retain(puVar13);
    puVar6 = (undefined1 *)puVar13;
    func_0x00010bf3fec0(puVar13);
    func_0x00010c0df780(puVar1,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beeac20(param_3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar5 = PTR_PTR_1126b9328;
    _objc_alloc();
    puVar6 = (undefined1 *)puVar13;
    func_0x00010bf0d600();
    puVar7 = (undefined1 *)puVar13;
    func_0x00010bf3fec0();
    func_0x00010c0b54e0(puVar13);
    lVar2 = param_3;
    uVar18 = uVar17;
    func_0x00010c2a4420(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined1 *)puVar13;
    func_0x00010bf67d40(puVar13);
    puVar9 = (undefined1 *)puVar13;
    func_0x00010bf67ce0(puVar13);
    puVar10 = (undefined1 *)puVar13;
    func_0x00010bf67e60(puVar13);
    puVar11 = (undefined1 *)puVar13;
    func_0x00010bf67d20();
    puVar12 = (undefined1 *)puVar13;
    func_0x00010c23b160();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf05600();
    func_0x00010bf05620();
    func_0x00010bf05720(puVar13);
    _objc_release(puVar13);
    func_0x00010bff4c80(uVar17,uVar18,puVar5,param_2,puVar6,puVar7,lVar2,puVar8,puVar9,puVar10,
                        (char)puVar11);
    _objc_release(puVar12);
    _objc_release(lVar2);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10849cad0; end: 10849cc7b; -[SCAdSnapViewingStatus _updateInteractionRecordWithWebViewInfo:] */

void FUN_10849cad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf3fec0(param_4);
  func_0x00010c0df780(puVar2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beeac20(param_2,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b9328;
  _objc_alloc();
  uVar1 = param_4;
  func_0x00010bf0d600();
  uVar3 = param_4;
  func_0x00010bf3fec0();
  func_0x00010c0b54e0(param_4);
  uVar4 = param_2;
  uVar10 = param_1;
  func_0x00010c2a4420(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010bf67d40(param_4);
  uVar6 = param_4;
  func_0x00010bf67ce0(param_4);
  uVar7 = param_4;
  func_0x00010bf67e60(param_4);
  uVar8 = param_4;
  func_0x00010bf67d20();
  uVar9 = param_4;
  func_0x00010c23b160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf05600();
  func_0x00010bf05620();
  func_0x00010bf05720(param_4);
  _objc_release(param_4);
  func_0x00010bff4c80(param_1,uVar10,puVar2,param_3,uVar1,uVar3,uVar4,uVar5,uVar6,uVar7,(char)uVar8)
  ;
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10849cc7c; end: 10849cc83; -[SCAdSnapViewingStatus wasBoosted] */

undefined1 FUN_10849cc7c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x39);
}



/* Entry: 10849cc84; end: 10849cc8b; -[SCAdSnapViewingStatus didCall] */

undefined1 FUN_10849cc84(long param_1)

{
  return *(undefined1 *)(param_1 + 0x108);
}



/* Entry: 10849cc8c; end: 10849cc93; -[SCAdSnapViewingStatus didMessage] */

undefined1 FUN_10849cc8c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x109);
}



/* Entry: 10849cc94; end: 10849cd3f; -[SCAdSnapViewingStatus arShoppingExperienceTrack] */

void FUN_10849cc94(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  func_0x00010be922a0();
  if (*(long *)(param_1 + 0x1b8) == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126d99b0;
    _objc_alloc(PTR_PTR_1126d99b0);
    uVar1 = *(undefined1 *)(param_1 + 0x1b0);
    lVar6 = *(long *)(param_1 + 0x1c8);
    uVar5 = *(undefined8 *)(param_1 + 0x1b8);
    uVar2 = *(undefined1 *)(param_1 + 0x1b1);
    uVar3 = *(undefined8 *)(param_1 + 0x1d0);
    func_0x00010bf00560(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0557a0((double)lVar6,puVar4,param_2,uVar1,uVar5,uVar2,uVar3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10849cd40; end: 10849cdc7; -[SCAdSnapViewingStatus adShowOnTopSnap:onBottomSnap:currentMediaVolumePercent:] */

void FUN_10849cd40(undefined8 param_1,long param_2,undefined8 param_3,int param_4,int param_5)

{
  double dVar1;
  
  dVar1 = *(double *)(param_2 + 0xe0);
  if (dVar1 == -1.0) {
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    *(double *)(param_2 + 0xe0) = dVar1;
    *(long *)(param_2 + 0xe8) = (long)(dVar1 - *(double *)(param_2 + 0xd8));
  }
  if (param_4 != 0) {
    func_0x00010bec1d40(param_1,param_2);
  }
  if (param_5 != 0) {
    func_0x00010c24d960(*(undefined8 *)(param_2 + 0x98));
  }
                    /* WARNING: Could not recover jumptable at 0x00010be922b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__resetArExperienceViewTime_112582248);
  return;
}



/* Entry: 10849cdc8; end: 10849cdf7; -[SCAdSnapViewingStatus adHideWithSkipEvent:] */

void FUN_10849cdc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10849cdf8; end: 10849ce83; -[SCAdSnapViewingStatus adSnapHideOnTopSnap:skipEvent:exitEventSwipeInfo:dismissDuration:] */

void FUN_10849cdf8(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_4;
  _objc_release(uVar1);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_5;
  _objc_release(uVar1);
  if (param_3 == 0) {
    func_0x00010c255780(*(undefined8 *)(param_1 + 0x98));
  }
  else {
    func_0x00010bec3a20(param_1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10849ce84; end: 10849cf1f; -[SCAdSnapViewingStatus swipedFromTopSnap:exitEvent:currentMediaVolumePercent:] */

void FUN_10849ce84(undefined8 param_1,long param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  if (param_4 == 0) {
    func_0x00010c255780(*(undefined8 *)(param_2 + 0x98));
    func_0x00010bec1d40(param_1,param_2);
  }
  else {
    func_0x00010bec3a20(param_2);
    *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x30) + 1;
    if (*(long *)(param_2 + 0x10) == 1) {
      _objc_retain(param_5);
      uVar1 = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_2 + 0x20) = param_5;
      _objc_release(uVar1);
    }
    func_0x00010c24d960(*(undefined8 *)(param_2 + 0x98));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10849cf20; end: 10849cf97; -[SCAdSnapViewingStatus didReceiveWebViewContext:collectionItemIndex:] */

void FUN_10849cf20(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_3);
  if (param_4 == 0) {
    param_1 = *(long *)(param_1 + 0x70);
    _objc_retain(param_1);
  }
  else {
    func_0x00010beeac20(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf79640(param_1,param_2,param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10849cf98; end: 10849d00f; -[SCAdSnapViewingStatus onWebBrowserSessionEvent:collectionItemIndex:] */

void FUN_10849cf98(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_3);
  if (param_4 == 0) {
    param_1 = *(long *)(param_1 + 0x70);
    _objc_retain(param_1);
  }
  else {
    func_0x00010beeac20(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0e7a40(param_1,param_2,param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10849d010; end: 10849d0fb; -[SCAdSnapViewingStatus onAudibilityChange:] */

void FUN_10849d010(double param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  if ((bool)*(char *)(param_2 + 0xa0) != 0.0 < param_1) {
    *(bool *)(param_2 + 0xa0) = 0.0 < param_1;
    func_0x00010bf604a0(param_2);
    uVar1 = param_2;
    func_0x00010bfc8080();
    if (uVar1 != 0xffffffffffffffff) {
      uVar2 = *(ulong *)(param_2 + 0x280);
      func_0x00010bf529e0();
      if (uVar1 < uVar2) {
        do {
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d04c0(*(undefined8 *)(param_2 + 0x280));
          _objc_release(puVar3);
          uVar1 = uVar1 + 1;
          uVar2 = *(ulong *)(param_2 + 0x280);
          func_0x00010bf529e0();
        } while (uVar1 < uVar2);
      }
    }
  }
  if (*(char *)(param_2 + 0xd0) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bedb7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,param_2,PTR_s__updateMediaVolumePercent__112594790);
    return;
  }
  return;
}



/* Entry: 10849d0fc; end: 10849d10b; -[SCAdSnapViewingStatus obstructedOnTopSnap:] */

void FUN_10849d0fc(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec3a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopTopSnapTimer_11258e830);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c255790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x98),PTR_s_stop_112673008);
  return;
}



/* Entry: 10849d10c; end: 10849d11b; -[SCAdSnapViewingStatus unobstructedOnTopSnap:currentMediaVolumePercent:] */

void FUN_10849d10c(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec1d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startTopSnapTimer__11258e0f8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c24d970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x98),PTR_s_start_112671080);
  return;
}



/* Entry: 10849d11c; end: 10849d11f; -[SCAdSnapViewingStatus adLongPressed] */

void FUN_10849d11c(void)

{
  return;
}



/* Entry: 10849d120; end: 10849d123; -[SCAdSnapViewingStatus adScreenshotTaken] */

void FUN_10849d120(void)

{
  return;
}



/* Entry: 10849d124; end: 10849d12b; -[SCAdSnapViewingStatus adBoosted:] */

void FUN_10849d124(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x39) = param_3;
  return;
}



/* Entry: 10849d12c; end: 10849d16b; -[SCAdSnapViewingStatus resetForIntermediateTracking] */

void FUN_10849d12c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined **)(param_1 + 0xf0) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10849d16c; end: 10849d16f; -[SCAdSnapViewingStatus resetForExitTracking] */

void FUN_10849d16c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setDefaultValue_1125866e8);
  return;
}



/* Entry: 10849d170; end: 10849d197; -[SCAdSnapViewingStatus skOverlayTrackInfo] */

void FUN_10849d170(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10849d198; end: 10849d19f; -[SCAdSnapViewingStatus customProductPageEnabled] */

undefined1 FUN_10849d198(long param_1)

{
  return *(undefined1 *)(param_1 + 0x180);
}



/* Entry: 10849d1a0; end: 10849d1bf; -[SCAdSnapViewingStatus setTopSnapMediaDurationMillis:topSnapReportedViewDurationMillis:] */

void FUN_10849d1a0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (0 < param_3) {
    *(long *)(param_1 + 0x40) = param_3;
  }
  if (*(long *)(param_1 + 0x58) < param_4) {
    *(long *)(param_1 + 0x58) = param_4;
  }
  return;
}



/* Entry: 10849d1c0; end: 10849d1cf; -[SCAdSnapViewingStatus swipeUpToCard] */

void FUN_10849d1c0(long param_1)

{
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  return;
}



/* Entry: 10849d1d0; end: 10849d1df; -[SCAdSnapViewingStatus swipeUpAttempt] */

void FUN_10849d1d0(long param_1)

{
  *(long *)(param_1 + 0x240) = *(long *)(param_1 + 0x240) + 1;
  return;
}



/* Entry: 10849d1e0; end: 10849d1ef; -[SCAdSnapViewingStatus anySwipeAttempt] */

void FUN_10849d1e0(long param_1)

{
  *(long *)(param_1 + 0x248) = *(long *)(param_1 + 0x248) + 1;
  return;
}



/* Entry: 10849d1f0; end: 10849d217; -[SCAdSnapViewingStatus dpaMetadata] */

void FUN_10849d1f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10849d218; end: 10849d247; -[SCAdSnapViewingStatus setDpaMetadata:] */

void FUN_10849d218(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10849d248; end: 10849d29f; -[SCAdSnapViewingStatus setSKOverlayTrackInfo:] */

void FUN_10849d248(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c10eb20(*(undefined8 *)(param_1 + 0x188));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010c10f8a0(*(undefined8 *)(param_1 + 0x188));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10849d2a0; end: 10849d2a7; -[SCAdSnapViewingStatus setCustomProductPageEnabled:] */

void FUN_10849d2a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x180) = param_3;
  return;
}



/* Entry: 10849d2a8; end: 10849d2cf; -[SCAdSnapViewingStatus gestureParameters] */

void FUN_10849d2a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10849d2d0; end: 10849d2ff; -[SCAdSnapViewingStatus setGestureParameters:] */

void FUN_10849d2d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10849d300; end: 10849d31f; -[SCAdSnapViewingStatus setLongformMediaDurationMillis:longformMediaDurationMillis:] */

void FUN_10849d300(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (0 < param_3) {
    *(long *)(param_1 + 0x60) = param_3;
  }
  if (*(long *)(param_1 + 0x68) < param_4) {
    *(long *)(param_1 + 0x68) = param_4;
  }
  return;
}



/* Entry: 10849d320; end: 10849d45b; -[SCAdSnapViewingStatus setLoadedOnEntry:loadedOnExit:visiblePageLoadTimeSeconds:collectionItemIndex:initialPageStatusCode:] */

void FUN_10849d320(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b9328;
  if (param_6 == 0) {
    param_2 = *(long *)(param_2 + 0x70);
    _objc_retain(param_2);
  }
  else {
    _objc_retain(param_6);
    _objc_alloc(puVar1);
    lVar2 = param_6;
    func_0x00010c067fc0(param_6);
    func_0x00010bfc4500(*(undefined8 *)(param_2 + 0x98));
    func_0x00010bff4c80(puVar1,param_3,3,lVar2,0,0,0,0,0);
    func_0x00010befa120(*(undefined8 *)(param_2 + 0xf0),param_3,puVar1);
    func_0x00010befa120(*(undefined8 *)(param_2 + 0xf8),param_3,puVar1);
    func_0x00010beeac20(param_2,param_3,param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(puVar1);
  }
  func_0x00010c1bea60(param_1,param_2,param_3,param_4,param_5,param_7);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10849d45c; end: 10849d463; -[SCAdSnapViewingStatus setPixelCookieAvailability:] */

void FUN_10849d45c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 10849d464; end: 10849d5a7; -[SCAdSnapViewingStatus setDeepLinkFromCard:deepLinkFallBackToAppStore:deepLinkFallBackToWebview:deepLinkFallBackToDefaultBrowser:deepLinkURI:collectionItemIndex:] */

void FUN_10849d464(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,long param_7,long param_8)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_8 == 0) {
    if ((int)param_3 != 0) {
      *(undefined1 *)(param_1 + 0x8a) = 1;
    }
    if ((int)param_4 != 0) {
      *(undefined1 *)(param_1 + 0x8b) = 1;
    }
    if ((int)param_5 != 0) {
      *(undefined1 *)(param_1 + 0x89) = 1;
    }
    if (param_6 != 0) {
      *(undefined1 *)(param_1 + 0x8c) = 1;
    }
    lVar1 = param_7;
    func_0x00010c08fa60();
    if (lVar1 == 0) goto LAB_10849d558;
    _objc_retain(param_7);
    puVar2 = *(undefined **)(param_1 + 0x90);
    *(long *)(param_1 + 0x90) = param_7;
  }
  else {
    puVar2 = PTR_PTR_1126b9328;
    _objc_alloc(PTR_PTR_1126b9328);
    lVar1 = param_8;
    func_0x00010c067fc0(param_8);
    func_0x00010bff4c80(0,0,puVar2,param_2,5,lVar1,0,param_5,param_4,param_3,(char)param_6);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0xf0),param_2,puVar2);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0xf8),param_2,puVar2);
  }
  _objc_release(puVar2);
LAB_10849d558:
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10849d5a8; end: 10849d68b; -[SCAdSnapViewingStatus setAppInstallWithCollectionItemIndex:loadedOnEntry:loadedOnExit:visiblePageLoadTimeSeconds:] */

void FUN_10849d5a8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b9328;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  uVar2 = param_4;
  func_0x00010c067fc0(param_4);
  _objc_release(param_4);
  func_0x00010bfc4500(*(undefined8 *)(param_2 + 0x98));
  func_0x00010bff4c80(puVar1,param_3,4,uVar2,0,0,0,0,0);
  func_0x00010befa120(*(undefined8 *)(param_2 + 0xf0),param_3,puVar1);
  func_0x00010befa120(*(undefined8 *)(param_2 + 0xf8),param_3,puVar1);
  *(undefined1 *)(param_2 + 0x78) = param_5;
  *(undefined1 *)(param_2 + 0x79) = param_6;
  *(undefined8 *)(param_2 + 0x80) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10849d68c; end: 10849d75b; -[SCAdSnapViewingStatus setShowcase:collectionItemIndex:] */

void FUN_10849d68c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b9328;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_4;
  func_0x00010c067fc0(param_4);
  _objc_release(param_4);
  func_0x00010bff4c80(0,0,puVar1,param_2,0xc,uVar2,0,0,0,0,0);
  _objc_release(param_3);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0xf0),param_2,puVar1);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0xf8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10849d75c; end: 10849d81b; -[SCAdSnapViewingStatus setCommercePdpViewedWithSnapIndex:collectionItemIndex:] */

void FUN_10849d75c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b9328;
  if (param_5 != 0) {
    _objc_retain(param_5);
    _objc_alloc(puVar1);
    lVar2 = param_5;
    func_0x00010c067fc0(param_5);
    _objc_release(param_5);
    func_0x00010bfc4500(*(undefined8 *)(param_2 + 0x98));
    func_0x00010bff4c80(param_1,0,puVar1,param_3,0xe,lVar2,0,0,0,0,0);
    func_0x00010befa120(*(undefined8 *)(param_2 + 0xf0),param_3,puVar1);
    func_0x00010befa120(*(undefined8 *)(param_2 + 0xf8),param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10849d81c; end: 10849d82b; -[SCAdSnapViewingStatus setDidCall:] */

void FUN_10849d81c(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    *(undefined1 *)(param_1 + 0x108) = 1;
  }
  return;
}



/* Entry: 10849d82c; end: 10849d833; -[SCAdSnapViewingStatus setDidMessage:] */

void FUN_10849d82c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x109) = param_3;
  return;
}



/* Entry: 10849d834; end: 10849d85b; -[SCAdSnapViewingStatus submittedLead] */

void FUN_10849d834(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10849d85c; end: 10849d89f; -[SCAdSnapViewingStatus setSubmittedLead:] */

void FUN_10849d85c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x110);
    *(long *)(param_1 + 0x110) = param_3;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10849d8a0; end: 10849d8c7; -[SCAdSnapViewingStatus formInteraction] */

void FUN_10849d8a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10849d8c8; end: 10849d90b; -[SCAdSnapViewingStatus setFormInteraction:] */

void FUN_10849d8c8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x118);
    *(long *)(param_1 + 0x118) = param_3;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10849d90c; end: 10849d933; -[SCAdSnapViewingStatus surveyAnswer] */

void FUN_10849d90c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10849d934; end: 10849d963; -[SCAdSnapViewingStatus setSurveyAnswer:] */

void FUN_10849d934(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10849d964; end: 10849d96b; -[SCAdSnapViewingStatus adSurveyResponse] */

undefined8 FUN_10849d964(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



/* Entry: 10849d96c; end: 10849d973; -[SCAdSnapViewingStatus setAdSurveyResponse:] */

void FUN_10849d96c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x138) = param_3;
  return;
}



/* Entry: 10849d974; end: 10849d99b; -[SCAdSnapViewingStatus stickerMetadataArray] */

void FUN_10849d974(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x140);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10849d99c; end: 10849d9cb; -[SCAdSnapViewingStatus setStickerInfo:] */

void FUN_10849d99c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x148) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10849d9cc; end: 10849d9f3; -[SCAdSnapViewingStatus stickerInfo] */

void FUN_10849d9cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x148);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10849d9f4; end: 10849da23; -[SCAdSnapViewingStatus setStickerMetadataArray:] */

void FUN_10849d9f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x140) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10849da24; end: 10849da2b; -[SCAdSnapViewingStatus reminderLocalBannerTapCount] */

undefined8 FUN_10849da24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



/* Entry: 10849da2c; end: 10849da3b; -[SCAdSnapViewingStatus setReminderLocalBannerTapped] */

void FUN_10849da2c(long param_1)

{
  *(long *)(param_1 + 0x150) = *(long *)(param_1 + 0x150) + 1;
  return;
}



/* Entry: 10849da3c; end: 10849da63; -[SCAdSnapViewingStatus reminderCountdownId] */

void FUN_10849da3c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10849da64; end: 10849da93; -[SCAdSnapViewingStatus setReminderCountdownId:] */

void FUN_10849da64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x158) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10849da94; end: 10849da9b; -[SCAdSnapViewingStatus reminderScheduledCount] */

undefined8 FUN_10849da94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x160);
}



/* Entry: 10849da9c; end: 10849daab; -[SCAdSnapViewingStatus setReminderScheduled] */

void FUN_10849da9c(long param_1)

{
  *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + 1;
  return;
}



/* Entry: 10849daac; end: 10849dad3; -[SCAdSnapViewingStatus setWakeUpTapWithSource:] */

void FUN_10849daac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
    lVar1 = 0x170;
  }
  else {
    if (param_3 != 1) {
      return;
    }
    lVar1 = 0x168;
  }
  *(long *)(param_1 + lVar1) = *(long *)(param_1 + lVar1) + 1;
  return;
}



/* Entry: 10849dad4; end: 10849daef; -[SCAdSnapViewingStatus setPharmaDisclaimerRendered:] */

void FUN_10849dad4(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 5) {
    *(undefined1 *)(param_1 + param_3 + 0x22f) = 1;
  }
  return;
}



/* Entry: 10849daf0; end: 10849db0b; -[SCAdSnapViewingStatus setPharmaDisclaimerClicked:] */

void FUN_10849daf0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 5) {
    *(undefined1 *)(param_1 + param_3 + 0x234) = 1;
  }
  return;
}



/* Entry: 10849db0c; end: 10849dc3b; -[SCAdSnapViewingStatus pharmaTrackInfo] */

void FUN_10849db0c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (((((*(byte *)(param_1 + 0x230) & 1) == 0) && ((*(byte *)(param_1 + 0x231) & 1) == 0)) &&
      ((*(byte *)(param_1 + 0x232) & 1) == 0)) &&
     (((*(byte *)(param_1 + 0x233) & 1) == 0 && (*(char *)(param_1 + 0x234) != '\x01')))) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d99b8;
    _objc_alloc(PTR_PTR_1126d99b8);
    func_0x00010c01d3a0();
    puVar2 = PTR_PTR_1126d99c0;
    _objc_alloc(PTR_PTR_1126d99c0);
    func_0x00010c01d3a0();
    puVar3 = PTR_PTR_1126d99c8;
    _objc_alloc(PTR_PTR_1126d99c8);
    func_0x00010c01d4a0();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10849dc3c; end: 10849dc43; -[SCAdSnapViewingStatus wakeUpUiTapsFromTopsnap] */

undefined8 FUN_10849dc3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x168);
}



/* Entry: 10849dc44; end: 10849dc4b; -[SCAdSnapViewingStatus wakeUpUiTapsFromCard] */

undefined8 FUN_10849dc44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x170);
}



/* Entry: 10849dc4c; end: 10849dc57; -[SCAdSnapViewingStatus setAdShareOpen] */

void FUN_10849dc4c(long param_1)

{
  *(undefined1 *)(param_1 + 400) = 1;
  return;
}



/* Entry: 10849dc58; end: 10849dc63; -[SCAdSnapViewingStatus setAdShareSend] */

void FUN_10849dc58(long param_1)

{
  *(undefined1 *)(param_1 + 0x191) = 1;
  return;
}



/* Entry: 10849dc64; end: 10849dc6b; -[SCAdSnapViewingStatus adShareOpen] */

undefined1 FUN_10849dc64(long param_1)

{
  return *(undefined1 *)(param_1 + 400);
}



/* Entry: 10849dc6c; end: 10849dc73; -[SCAdSnapViewingStatus adShareSend] */

undefined1 FUN_10849dc6c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x191);
}



/* Entry: 10849dc74; end: 10849dcb7; -[SCAdSnapViewingStatus setAppInActivityTriggeredTimestampMs:] */

void FUN_10849dc74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x1a8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10849dcb8; end: 10849dcdf; -[SCAdSnapViewingStatus appInActivityTriggeredTimestampMsArray] */

void FUN_10849dcb8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10849dce0; end: 10849dce7; -[SCAdSnapViewingStatus setAdSubscribed:] */

void FUN_10849dce0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x192) = param_3;
  return;
}



/* Entry: 10849dce8; end: 10849dd2b; -[SCAdSnapViewingStatus setAdSubscribeButtonTappedTimestampMs:] */

void FUN_10849dce8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x198);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10849dd2c; end: 10849dd33; -[SCAdSnapViewingStatus setInitialAdSubscribed:] */

void FUN_10849dd2c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1a0) = param_3;
  return;
}



/* Entry: 10849dd34; end: 10849dd3b; -[SCAdSnapViewingStatus adSubscribed] */

undefined1 FUN_10849dd34(long param_1)

{
  return *(undefined1 *)(param_1 + 0x192);
}



/* Entry: 10849dd3c; end: 10849dd63; -[SCAdSnapViewingStatus adSubscribeButtonTappedTimestampMsArray] */

void FUN_10849dd3c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x198);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10849dd64; end: 10849ddab; -[SCAdSnapViewingStatus setAdFavorited:timestampMs:] */

void FUN_10849dd64(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x1d8) = param_3;
  uVar2 = *(undefined8 *)(param_1 + 0x1e0);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10849ddac; end: 10849ddb3; -[SCAdSnapViewingStatus setAdFavorited:] */

void FUN_10849ddac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1d8) = param_3;
  return;
}



/* Entry: 10849ddb4; end: 10849ddbb; -[SCAdSnapViewingStatus setAdFavoriteTapSource:] */

void FUN_10849ddb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1e8) = param_3;
  return;
}



/* Entry: 10849ddbc; end: 10849de03; -[SCAdSnapViewingStatus setInitialAdFavorited:] */

void FUN_10849ddbc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x1f0) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x1f0);
  *(undefined **)(param_1 + 0x1f0) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10849de04; end: 10849de4b; -[SCAdSnapViewingStatus setInitialAdReposted:] */

void FUN_10849de04(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x1f8) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x1f8);
  *(undefined **)(param_1 + 0x1f8) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10849de4c; end: 10849de73; -[SCAdSnapViewingStatus initialAdFavorited] */

void FUN_10849de4c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1f0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10849de74; end: 10849de9b; -[SCAdSnapViewingStatus initialAdReposted] */

void FUN_10849de74(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1f8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10849de9c; end: 10849df13; -[SCAdSnapViewingStatus setAdReposted:timestampMs:] */

void FUN_10849de9c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x200);
  *(undefined **)(param_2 + 0x200) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x208);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10849df14; end: 10849df3b; -[SCAdSnapViewingStatus adReposted] */

void FUN_10849df14(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x200);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10849df3c; end: 10849df63; -[SCAdSnapViewingStatus adRepostButtonTappedTimestampMsArray] */

void FUN_10849df3c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x208);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10849df64; end: 10849df6b; -[SCAdSnapViewingStatus adFavoriteTapSource] */

undefined8 FUN_10849df64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1e8);
}



/* Entry: 10849df6c; end: 10849df73; -[SCAdSnapViewingStatus setTapToPauseEvent:] */

void FUN_10849df6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x210),PTR_s_addObject__11259c1f0);
  return;
}



/* Entry: 10849df74; end: 10849df8b; -[SCAdSnapViewingStatus tapToPauseInteractionsArray] */

void FUN_10849df74(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x210));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


