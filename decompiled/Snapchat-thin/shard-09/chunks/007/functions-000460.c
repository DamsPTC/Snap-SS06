/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10701949c; end: 107019503; -[SCCameraTimerImpl onCaptureColorChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701949c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127629dc);
  *(undefined8 *)(param_1 + _DAT_1127629dc) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c178e20(*(undefined8 *)(param_1 + _DAT_1127629b8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107019504; end: 107019513; -[SCCameraTimerImpl onRecordingRingStyleChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107019504(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ee4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127629b8),PTR_s_setRingStyle__112659358);
  return;
}



/* Entry: 107019514; end: 107019537; -[SCCameraTimerImpl onCustomCaptureButtonDataChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107019514(long param_1,undefined8 param_2,long param_3)

{
  *(bool *)(param_1 + _DAT_1127629c8) = param_3 != 0;
                    /* WARNING: Could not recover jumptable at 0x00010c188310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127629b8),PTR_s_setCustomCaptureButtonData__11263fae0);
  return;
}



/* Entry: 107019538; end: 10701958f; -[SCCameraTimerImpl showInnerCircleWithAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107019538(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bde98a0();
  if (((int)lVar1 != 0) && (*(long *)(param_1 + _DAT_11276296c) != 9)) {
                    /* WARNING: Could not recover jumptable at 0x00010c237e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_1127629b8),PTR_s_showInnerCircleAnimated__11266b9c0,
               param_3);
    return;
  }
  return;
}



/* Entry: 107019590; end: 1070195e7; -[SCCameraTimerImpl hideInnerCircleWithAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107019590(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bde98a0();
  if (((int)lVar1 != 0) && (*(long *)(param_1 + _DAT_11276296c) != 9)) {
                    /* WARNING: Could not recover jumptable at 0x00010bfe2110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_1127629b8),PTR_s_hideInnerCircleAnimated__1125d6200,
               param_3);
    return;
  }
  return;
}



/* Entry: 1070195e8; end: 10701963f; -[SCCameraTimerImpl updateHandsFreeInterstitialFillForLensCarouselActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070195e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bde98a0();
  if (((int)lVar1 != 0) && (*(long *)(param_1 + _DAT_11276296c) != 9)) {
                    /* WARNING: Could not recover jumptable at 0x00010c1bad50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_1127629b8),PTR_s_setLensCarouselActive__11264c578,
               param_3);
    return;
  }
  return;
}



/* Entry: 107019640; end: 1070197d7; -[SCCameraTimerImpl animateLensAssetToScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107019640(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*(char *)(param_2 + _DAT_1127629d4) == '\x01') {
    _CGAffineTransformMakeScale(&uStack_80,param_1,param_1);
    lVar3 = (long)_DAT_1127629c0;
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    func_0x00010c219960(*(undefined8 *)(param_2 + lVar3),param_3,&uStack_b0);
    puVar1 = *(undefined **)(param_2 + lVar3);
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c103b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (puVar2 == (undefined *)0x0) {
      puVar2 = PTR_PTR_1126c4230;
      func_0x00010bf04100(PTR_PTR_1126c4230,param_3,&PTR____CFConstantStringClassReference_110ee3ff8
                         );
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297180(param_1,param_1,PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216920(puVar2,param_3,puVar1);
      _objc_release(puVar1);
      func_0x00010c208f20(0x4034000000000000,puVar2);
      func_0x00010c208f00(0x4024000000000000,puVar2);
      func_0x00010c17c660(puVar2,param_3,2);
      puVar1 = *(undefined **)(param_2 + lVar3);
      func_0x00010c08c0e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c103a40();
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297180(param_1,param_1,PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216920(puVar2,param_3,puVar1);
    }
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 1070197d8; end: 107019823; -[SCCameraTimerImpl removeOverlayIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070197d8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127629d0;
  if (param_3 != *(long *)(param_1 + lVar2)) {
    return;
  }
  func_0x00010c12c960(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107019824; end: 107019a0b; -[SCCameraTimerImpl setOverlayIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107019824(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar9 = (long)_DAT_1127629d0;
  if (param_4 != *(long *)(param_2 + lVar9)) {
    func_0x00010c12c960();
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_2 + lVar9);
    *(long *)(param_2 + lVar9) = param_4;
    _objc_release(uVar2);
    if (*(long *)(param_2 + lVar9) != 0) {
      func_0x00010befbb60(param_2);
      func_0x00010bf20c00(param_2);
      _CGRectGetMidX();
      uVar2 = param_1;
      func_0x00010bf20c00(param_2);
      _CGRectGetMidY();
      func_0x00010c17a6a0(param_1,uVar2,*(undefined8 *)(param_2 + lVar9));
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar3 = *(undefined8 *)(param_2 + lVar9);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_2;
      func_0x00010bf34860(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_2 + lVar9);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf348e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1);
      _objc_release(puVar7);
      _objc_release(uVar6);
      _objc_release(param_2);
      _objc_release(uVar5);
      _objc_release(uVar2);
      _objc_release(lVar4);
      _objc_release(uVar3);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c10a310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_4 + _DAT_1127629b4),PTR_s_prepareTransitionIn_1126202e0);
  return;
}



/* Entry: 107019a0c; end: 107019a1b; -[SCCameraTimerImpl prepareForDirectorModeTransitionIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107019a0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10a310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127629b4),PTR_s_prepareTransitionIn_1126202e0);
  return;
}



/* Entry: 107019a1c; end: 107019b0b; -[SCCameraTimerImpl beginDirectorModeTransitionInWithInitialSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107019a1c(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_3,
                      &PTR____CFConstantStringClassReference_110dc8938);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 / 88.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  func_0x00010c216920(puVar1,param_3,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9be0);
  func_0x00010c192d40(0x3fc999999999999a,puVar1);
  func_0x00010c1ea580(puVar1,param_3,1);
  lVar4 = (long)_DAT_1127629b4;
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(uVar3);
  func_0x00010bf19380(*(undefined8 *)(param_2 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107019b0c; end: 107019b1b; -[SCCameraTimerImpl prepareForDirectorModeTransitionOut] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107019b0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10a330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127629b4),PTR_s_prepareTransitionOut_1126202e8);
  return;
}



/* Entry: 107019b1c; end: 107019c73; -[SCCameraTimerImpl beginDirectorModeTransitionOutWithTargetSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107019b1c(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_d0 [128];
  
  param_1 = param_1 / 88.0;
  _CATransform3DMakeScale(auStack_d0,param_1,param_1,0x3ff0000000000000);
  lVar4 = (long)_DAT_1127629b4;
  uVar1 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_3,
                      &PTR____CFConstantStringClassReference_110dc8938);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar2,param_3,puVar3);
  _objc_release(puVar3);
  func_0x00010c192d40(0x3fc999999999999a,puVar2);
  func_0x00010c1ea580(puVar2,param_3,1);
  uVar1 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(uVar1);
  func_0x00010bf193a0(*(undefined8 *)(param_2 + lVar4));
  _objc_release(puVar2);
  return;
}



/* Entry: 107019c74; end: 107019c83; -[SCCameraTimerImpl setContinuousCaptureCompletedSegmentsDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107019c74(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11276299c) = param_1;
  return;
}



/* Entry: 107019c84; end: 107019ccb; -[SCCameraTimerImpl resetContinuousCaptureSpinnerToCompletedSegments] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107019c84(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bde98a0();
  if ((int)lVar1 != 0) {
    *(undefined8 *)(param_1 + _DAT_112762998) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf80fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_1127629b8),
               PTR_s_discardCurrentContinuousCaptureS_1125bdd98);
    return;
  }
  return;
}



/* Entry: 107019ccc; end: 107019d07; -[SCCameraTimerImpl discardLastCompletedContinuousCaptureSegment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107019ccc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bde98a0();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf81030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_1127629b8),
               PTR_s_discardLastCompletedContinuousCa_1125bddb0);
    return;
  }
  return;
}



/* Entry: 107019d08; end: 107019f1b; -[SCCameraTimerImpl continuousCaptureStateDidChange:] */

/* WARNING: Possible PIC construction at 0x000107019e2c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107019d08(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *(long *)(param_1 + _DAT_112762994) = param_3;
  if (param_3 < 3) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        lVar5 = param_1;
        func_0x00010bde98a0();
        if ((int)lVar5 == 0) {
          return;
        }
        lVar5 = (long)_DAT_1127629b8;
        func_0x00010c236c20(*(undefined8 *)(param_1 + lVar5));
        uVar1 = *(undefined8 *)(param_1 + lVar5);
        func_0x00010be5dce0(param_1);
        func_0x00010c24e6c0(uVar1);
        uVar1 = *(undefined8 *)(param_1 + lVar5);
        uVar2 = *(undefined8 *)(param_1 + _DAT_1127629c0);
        goto code_r0x00010c066f80;
      }
      if (param_3 != 2) {
        return;
      }
    }
  }
  else {
    if (1 < param_3 - 5U) {
      if (param_3 == 3) {
        lVar5 = param_1;
        func_0x00010bde98a0();
        if ((int)lVar5 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00010c13d3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(undefined8 *)(param_1 + _DAT_112762978),
                   *(undefined8 *)(param_1 + _DAT_1127629b8),
                   PTR_s_resumeContinuousCaptureSpinnerWi_11262cf10);
        return;
      }
      if (param_3 != 4) {
        return;
      }
      lVar5 = param_1;
      func_0x00010bde98a0();
      if ((int)lVar5 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010c0f5cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + _DAT_1127629b8),
                 PTR_s_pauseContinuousCaptureSpinner_11261b148);
      return;
    }
    lVar5 = (long)_DAT_1127629b8;
    func_0x00010c236c20(*(undefined8 *)(param_1 + lVar5),param_2,0,1);
    func_0x00010c138620(*(undefined8 *)(param_1 + lVar5));
  }
  lVar3 = (long)_DAT_1127629b8;
  func_0x00010c236c20(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c138620(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1838e0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c12aaa0(*(undefined8 *)(param_1 + lVar3));
  lVar4 = (long)_DAT_1127629c0;
  func_0x00010c219960(*(undefined8 *)(param_1 + lVar4));
  lVar5 = param_1;
  func_0x00010bde98a0();
  if ((int)lVar5 == 0) {
    func_0x00010bea1e80(param_1);
    *(undefined1 *)(param_1 + _DAT_112762990) = 0;
    *(undefined8 *)(param_1 + _DAT_112762998) = 0;
    *(undefined8 *)(param_1 + _DAT_11276299c) = 0;
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
code_r0x00010c066f80:
                    /* WARNING: Could not recover jumptable at 0x00010c066f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_insertSubview_aboveSubview__1125f75f0,uVar1,uVar2);
  return;
}



/* Entry: 107019f1c; end: 10701a07f; -[SCCameraTimerImpl handsFreeViewStateDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107019f1c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_3 < 3) {
    if (param_3 == 0) {
      func_0x00010c1a5520(param_1,param_2,0);
      goto LAB_10701a06c;
    }
    if (param_3 != 1) {
      if (param_3 == 2) {
        func_0x00010bea1e80(param_1,param_2,3,1);
        lVar1 = param_1;
        func_0x00010bde98a0();
        if ((int)lVar1 != 0) {
          func_0x00010bf96a40(*(undefined8 *)(param_1 + _DAT_1127629b8));
        }
      }
      goto LAB_10701a06c;
    }
LAB_10701a018:
    lVar1 = param_1;
    func_0x00010bde98a0();
    if ((int)lVar1 == 0) goto LAB_10701a06c;
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127629b8);
  }
  else {
    if (2 < param_3 - 5U) {
      if (param_3 != 3) {
        if (param_3 == 4) {
          func_0x00010c1a5520(param_1,param_2,1);
          func_0x00010c177360(param_1);
          lVar1 = param_1;
          func_0x00010bde98a0();
          if (((int)lVar1 == 0) || (lVar1 = param_1, func_0x00010beb40e0(), (int)lVar1 != 0)) {
            uVar2 = 0;
          }
          else {
            uVar2 = 0x3fe999999999999a;
          }
          func_0x00010bf02f00(uVar2,param_1);
          func_0x00010bea1e80(param_1);
          func_0x00010c24eee0(*(undefined8 *)(param_1 + _DAT_1127629b8));
        }
        goto LAB_10701a06c;
      }
      func_0x00010bea1e80(param_1,param_2,2,1);
      goto LAB_10701a018;
    }
    lVar1 = param_1;
    func_0x00010bde98a0();
    if ((int)lVar1 == 0) goto LAB_10701a06c;
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127629b8);
  }
  func_0x00010bf9b800(uVar2);
LAB_10701a06c:
                    /* WARNING: Could not recover jumptable at 0x00010be9b7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__scheduleSyncCoolRecordingPrevie_112584790,param_3);
  return;
}



/* Entry: 10701a080; end: 10701a0e7; -[SCCameraTimerImpl setHandsFreeHoverPreview:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701a080(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bde98a0();
  if ((int)lVar1 == 0) {
    return;
  }
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf96a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_1127629b8),
               PTR_s_enterHandsFreePreviewAnimated__1125c3438);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf9b810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127629b8),PTR_s_exitHandsFreePreviewAnimated__1125c47a8
             ,param_4);
  return;
}



/* Entry: 10701a0e8; end: 10701a247; -[SCCameraTimerImpl animateToCameraTargetView:targetPosition:alongWithAnimation:completion:] */

void FUN_10701a0e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c1e8f40(param_3,param_4,0);
  func_0x00010bea1e80(param_3,param_4,1,0);
  func_0x00010c1677c0(0,param_3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10701a248;
  puStack_80 = &UNK_1108846d8;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10701a2ac;
  puStack_a8 = &UNK_110842508;
  uStack_a0 = param_7;
  uStack_78 = param_3;
  uStack_70 = param_5;
  uStack_68 = param_6;
  uStack_60 = param_1;
  uStack_58 = param_2;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bf03460(0x3fd999999999999a,0,0x3fef0a3d70a3d70a,0,puVar1,param_4,2,&puStack_98,
                      &puStack_c0);
  _objc_release(uStack_a0);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 10701a248; end: 10701a2ab;  */

void FUN_10701a248(long param_1)

{
  func_0x00010c17a6a0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x20));
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20));
  func_0x00010c17a6a0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x28));
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010701a29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10701a2ac; end: 10701a2bf;  */

void FUN_10701a2ac(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010701a2b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10701a2c0; end: 10701a41f; -[SCCameraTimerImpl animateToCapturePreviewToTargetView:targetPosition:alongWithAnimation:completion:] */

void FUN_10701a2c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  float fVar2;
  undefined8 uVar3;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar3 = param_1;
  _objc_retain(param_5);
  fVar2 = (float)uVar3;
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c1e8f40(param_3,param_4,0);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010c0861e0(PTR_PTR_1126c84e0);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10701a420;
  puStack_90 = &UNK_1108846d8;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x10701a4b0;
  puStack_c0 = &UNK_110858070;
  uStack_b8 = param_3;
  uStack_b0 = param_7;
  uStack_88 = param_3;
  uStack_80 = param_5;
  uStack_78 = param_6;
  uStack_70 = param_1;
  uStack_68 = param_2;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bf03460((double)fVar2,0,0x3fef0a3d70a3d70a,0x3fe51eb851eb851f,puVar1,param_4,2,
                      &puStack_a8,&puStack_d8);
  _objc_release(uStack_b0);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 10701a420; end: 10701a507;  */

void FUN_10701a420(long param_1,undefined8 param_2)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010c17a6a0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x20));
  _CGAffineTransformMakeScale(&uStack_50,0x3fe0000000000000,0x3fe0000000000000);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x20));
  func_0x00010c17a6a0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x28));
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x30) != 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  }
  return;
}



/* Entry: 10701a508; end: 10701a513; -[SCCameraTimerImpl transitionToLockAppearance] */

void FUN_10701a508(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea1e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setAppearanceType_animated__112586148,3,1);
  return;
}



/* Entry: 10701a514; end: 10701a59b; -[SCCameraTimerImpl insertSnappablesPlayButtonIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701a514(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_1127629e0;
  if (param_3 != *(long *)(param_1 + lVar2)) {
    if (*(long *)(param_1 + lVar2) != 0) {
      func_0x00010c12c960();
    }
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar2));
    if (*(long *)(param_1 + _DAT_1127629d0) != 0) {
      func_0x00010bf21300(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10701a59c; end: 10701a657; -[SCCameraTimerImpl borderFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10701a59c(double param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_4 + _DAT_1127629b4);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_4 + _DAT_1127629b8);
    if (lVar1 == 0) {
      lVar1 = *(long *)(param_4 + _DAT_1127629bc);
    }
  }
  _objc_retain(lVar1);
  func_0x00010bf20c00(lVar1);
  _CGRectGetWidth();
  func_0x00010bf20c00(lVar1);
  _CGRectGetHeight();
  func_0x00010bf20c00(param_4);
  func_0x00010bf20c00(param_4);
  _objc_release(lVar1);
  return (param_3 - param_1) * 0.5;
}



/* Entry: 10701a658; end: 10701a6a3; -[SCCameraTimerImpl borderLineWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10701a658(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  
  lVar1 = (long)_DAT_1127629ac;
  func_0x00010bf2a620(*(undefined8 *)(param_2 + lVar1));
  dVar2 = param_1;
  func_0x00010bf2a600(*(undefined8 *)(param_2 + lVar1));
  return (param_1 - dVar2) * 0.5;
}



/* Entry: 10701a6a4; end: 10701a923; -[SCCameraTimerImpl setHandsFreeRecordingStopButtonVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701a6a4(ulong param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = param_1;
  func_0x00010bde98a0();
  if ((uVar1 & 1) == 0) {
    if (*(byte *)(param_1 + (long)_DAT_1127629ec) != param_3) {
      *(char *)(param_1 + (long)_DAT_1127629ec) = (char)param_3;
      lVar8 = (long)_DAT_1127629f0;
      lVar7 = *(long *)(param_1 + lVar8);
      if (lVar7 == 0) {
        puVar2 = PTR__OBJC_CLASS___CALayer_1126b1750;
        func_0x00010c08c0e0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_1 + lVar8);
        *(undefined **)(param_1 + lVar8) = puVar2;
        _objc_release(uVar6);
        dVar9 = 24.0;
        dVar10 = 24.0;
        func_0x00010c1739e0(0,0,0x4038000000000000,0x4038000000000000,
                            *(undefined8 *)(param_1 + lVar8));
        uVar3 = *(undefined8 *)(param_1 + lVar8);
        func_0x00010c1842e0(0x4010000000000000,uVar3);
        FUN_10703d8cc();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar3;
        _objc_retainAutorelease();
        func_0x00010bdc0fe0();
        func_0x00010c16e440(*(undefined8 *)(param_1 + lVar8),param_2,uVar6);
        _objc_release(uVar3);
        func_0x00010bf20c00(param_1);
        func_0x00010bf20c00(param_1);
        func_0x00010c1dee80(dVar9 * 0.5,dVar10 * 0.5,*(undefined8 *)(param_1 + lVar8));
        uVar1 = param_1;
        func_0x00010c08c0e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb20();
        _objc_release(uVar1);
      }
      uVar1 = param_1;
      func_0x00010bfd35a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      func_0x00010c16e440(*(undefined8 *)(param_1 + lVar8),param_2,uVar4);
      _objc_release(uVar1);
      func_0x00010c1d4bc0((float)param_3,*(undefined8 *)(param_1 + lVar8));
      uStack_98 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x48);
      uStack_a0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x40);
      uStack_88 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x58);
      uStack_90 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x50);
      uStack_78 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x68);
      uStack_80 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x60);
      uStack_68 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x78);
      uStack_70 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x70);
      uStack_d8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 8);
      uStack_e0 = *(undefined8 *)PTR__CATransform3DIdentity_110346c58;
      uStack_c8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x18);
      uStack_d0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x10);
      uStack_b8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x28);
      uStack_c0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x20);
      uStack_a8 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x38);
      uStack_b0 = *(undefined8 *)(PTR__CATransform3DIdentity_110346c58 + 0x30);
      func_0x00010c219960(*(undefined8 *)(param_1 + lVar8),param_2,&uStack_e0);
      puVar2 = PTR_PTR_1126c4230;
      func_0x00010bf04100(PTR_PTR_1126c4230,param_2,&PTR____CFConstantStringClassReference_110ee3ff8
                         );
      _objc_retainAutoreleasedReturnValue();
      if ((param_3 != 0) && (lVar7 == 0)) {
        puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c297180(*(undefined8 *)PTR__CGPointZero_110347540,
                            *(undefined8 *)(PTR__CGPointZero_110347540 + 8),
                            PTR__OBJC_CLASS___NSValue_1126afdf8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a1180(puVar2,param_2,puVar5);
        _objc_release(puVar5);
      }
      puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297180((double)param_3,(double)param_3,PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216920(puVar2,param_2,puVar5);
      _objc_release(puVar5);
      func_0x00010c208f20(0x4034000000000000,puVar2);
      uVar6 = 0x4024000000000000;
      if (param_3 == 0) {
        uVar6 = 0;
      }
      func_0x00010c208f00(uVar6,puVar2);
      func_0x00010c103a40(*(undefined8 *)(param_1 + lVar8),param_2,puVar2,
                          &PTR____CFConstantStringClassReference_110ee3ff8);
      _objc_release(puVar2);
    }
  }
  return;
}



/* Entry: 10701a924; end: 10701a973; -[SCCameraTimerImpl handsFreeStopButtonColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701a924(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bde98a0();
  if ((int)lVar1 == 0) {
    FUN_10703d8cc();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = *(long *)(param_1 + _DAT_1127629dc);
    _objc_retain(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10701a974; end: 10701ab3b; -[SCCameraTimerImpl _handleDirectorModeRingAppearance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701a974(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar6 = (long)_DAT_1127629c4;
  if ((param_4 != 0) && (*(long *)(param_2 + lVar6) != 0)) {
    lVar5 = param_2;
    func_0x00010bdeace0(param_2,param_3,&PTR____CFConstantStringClassReference_110dc8938);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar1 = *(long *)(param_2 + lVar6);
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c10f4e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
    }
    else {
      func_0x00010c27a460(&uStack_e0,lVar2);
    }
    param_1 = uStack_e0;
    func_0x00010c0df720(uStack_e0,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180(lVar5,param_3,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c249f00(*(undefined8 *)(param_2 + _DAT_1127629ac));
    func_0x00010c0df720(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216920(lVar5,param_3,puVar3);
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)(param_2 + lVar6);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(uVar4);
    _objc_release(lVar5);
  }
  if (*(long *)(param_2 + lVar6) != 0) {
    lVar5 = (long)_DAT_1127629ac;
    func_0x00010c249f00(*(undefined8 *)(param_2 + lVar5));
    uVar4 = param_1;
    func_0x00010c249f00(*(undefined8 *)(param_2 + lVar5));
    _CGAffineTransformMakeScale(&uStack_110,param_1,uVar4);
    uStack_d8 = uStack_108;
    uStack_e0 = uStack_110;
    uStack_c8 = uStack_f8;
    uStack_d0 = uStack_100;
    uStack_b8 = uStack_e8;
    uStack_c0 = uStack_f0;
    func_0x00010c219960(*(undefined8 *)(param_2 + lVar6),param_3,&uStack_e0);
  }
  return;
}



/* Entry: 10701ab3c; end: 10701b0c7; -[SCCameraTimerImpl _handleRegularRingAppearance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701ab3c(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((param_4 & 1) == 0) {
    lVar13 = (long)_DAT_1127629ac;
  }
  else {
    lVar12 = (long)_DAT_1127629bc;
    uVar1 = *(undefined8 *)(param_2 + lVar12);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12aaa0();
    _objc_release(uVar1);
    lVar2 = param_2;
    func_0x00010bdeace0(param_2,param_3,&PTR____CFConstantStringClassReference_110dc8938);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar3 = *(long *)(param_2 + lVar12);
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar3;
    func_0x00010c10f4e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar13 == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
    }
    else {
      func_0x00010c27a460(&uStack_100,lVar13);
    }
    param_1 = uStack_100;
    func_0x00010c0df720(uStack_100,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180(lVar2,param_3,puVar4);
    _objc_release(puVar4);
    _objc_release(lVar13);
    _objc_release(lVar3);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar13 = (long)_DAT_1127629ac;
    func_0x00010bf2a660(*(undefined8 *)(param_2 + lVar13));
    func_0x00010c0df720(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216920(lVar2,param_3,puVar4);
    _objc_release(puVar4);
    uVar1 = *(undefined8 *)(param_2 + lVar12);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(uVar1);
    lVar3 = param_2;
    func_0x00010bdebba0(param_2,param_3,1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2;
    func_0x00010bdeace0(param_2,param_3,&PTR____CFConstantStringClassReference_110dbfab8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + lVar12);
    func_0x00010c22a660(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010c10f4e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar1;
    func_0x00010c0f5800();
    func_0x00010c1a1180(lVar5,param_3,uVar8);
    _objc_release(uVar1);
    _objc_release(uVar6);
    lVar7 = lVar3;
    _objc_retainAutorelease(lVar3);
    func_0x00010bdc1040();
    func_0x00010c216920(lVar5,param_3,lVar7);
    uVar1 = *(undefined8 *)(param_2 + lVar12);
    func_0x00010c22a660(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(uVar1);
    lVar7 = param_2;
    func_0x00010bdeace0(param_2,param_3,&PTR____CFConstantStringClassReference_110dbf678);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar8 = *(undefined8 *)(param_2 + lVar12);
    func_0x00010c08c0e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar8;
    func_0x00010c10f4e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e8ca0();
    func_0x00010c0df740(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180(lVar7,param_3,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar1);
    _objc_release(uVar8);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf2a640(*(undefined8 *)(param_2 + lVar13));
    func_0x00010c0df720(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216920(lVar7,param_3,puVar4);
    _objc_release(puVar4);
    uVar1 = *(undefined8 *)(param_2 + lVar12);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(uVar1);
    lVar12 = (long)_DAT_1127629c4;
    if (*(long *)(param_2 + lVar12) != 0) {
      lVar9 = param_2;
      func_0x00010bdeace0(param_2,param_3,&PTR____CFConstantStringClassReference_110dc8938);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar10 = *(long *)(param_2 + lVar12);
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c10f4e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar11 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
      }
      else {
        func_0x00010c27a460(&uStack_100,lVar11);
      }
      param_1 = uStack_100;
      func_0x00010c0df720(uStack_100,puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a1180(lVar9,param_3,puVar4);
      _objc_release(puVar4);
      _objc_release(lVar11);
      _objc_release(lVar10);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c249f00(*(undefined8 *)(param_2 + lVar13));
      func_0x00010c0df720(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216920(lVar9,param_3,puVar4);
      _objc_release(puVar4);
      uVar1 = *(undefined8 *)(param_2 + lVar12);
      func_0x00010c08c0e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6c20();
      _objc_release(uVar1);
      _objc_release(lVar9);
    }
    _objc_release(lVar7);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  func_0x00010bf2a660(*(undefined8 *)(param_2 + lVar13));
  uVar1 = param_1;
  func_0x00010bf2a660(*(undefined8 *)(param_2 + lVar13));
  _CGAffineTransformMakeScale(&uStack_130,param_1,uVar1);
  lVar3 = (long)_DAT_1127629bc;
  uStack_f8 = uStack_128;
  uStack_100 = uStack_130;
  uStack_e8 = uStack_118;
  uStack_f0 = uStack_120;
  uStack_d8 = uStack_108;
  uStack_e0 = uStack_110;
  func_0x00010c219960(*(undefined8 *)(param_2 + lVar3),param_3,&uStack_100);
  lVar2 = param_2;
  func_0x00010bdebba0(param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar1 = *(undefined8 *)(param_2 + lVar3);
  func_0x00010c22a660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar1);
  func_0x00010bf2a640(*(undefined8 *)(param_2 + lVar13));
  func_0x00010c1677c0(*(undefined8 *)(param_2 + lVar3));
  lVar3 = (long)_DAT_1127629c4;
  if (*(long *)(param_2 + lVar3) != 0) {
    uVar1 = uStack_110;
    func_0x00010c249f00(*(undefined8 *)(param_2 + lVar13));
    uVar8 = uVar1;
    func_0x00010c249f00(*(undefined8 *)(param_2 + lVar13));
    _CGAffineTransformMakeScale(&uStack_160,uVar1,uVar8);
    uStack_f8 = uStack_158;
    uStack_100 = uStack_160;
    uStack_e8 = uStack_148;
    uStack_f0 = uStack_150;
    uStack_d8 = uStack_138;
    uStack_e0 = uStack_140;
    func_0x00010c219960(*(undefined8 *)(param_2 + lVar3),param_3,&uStack_100);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 10701b0c8; end: 10701b1e3; -[SCCameraTimerImpl _createCameraRingBezierPathForAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701b0c8(double param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  lVar4 = (long)_DAT_1127629bc;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar4));
  func_0x00010bf199a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_1127629ac;
  func_0x00010bf2a600(*(undefined8 *)(param_2 + lVar5));
  if ((param_4 == 0) || (0.0 < param_1)) {
    if (param_1 <= 0.0) goto LAB_10701b1bc;
  }
  else {
    func_0x00010bf2a600(*(undefined8 *)(param_2 + lVar5));
    if (param_1 != 0.0) goto LAB_10701b1bc;
  }
  func_0x00010bf2a600(*(undefined8 *)(param_2 + lVar5));
  dVar7 = param_1;
  if (param_1 == 0.0) {
    dVar7 = 0.1;
  }
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar4));
  _CGRectGetWidth();
  dVar6 = (param_1 - dVar7) * 0.5;
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199a0(dVar6,dVar6,dVar7,dVar7,PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf19940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06f40(puVar1,param_3,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
LAB_10701b1bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10701b1e4; end: 10701b20f; -[SCCameraTimerImpl defaultTimingFunction] */

void FUN_10701b1e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbc0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ec28f5c,0x3ed1eb85,0x3e8f5c29,0x3f70a3d7,
             PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,
             PTR_s_functionWithControlPoints___1125cc9d8);
  return;
}



/* Entry: 10701b210; end: 10701b27f; -[SCCameraTimerImpl _createAnimationWithKeyPath:] */

void FUN_10701b210(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6a780(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar1,param_2,param_1);
  _objc_release(param_1);
  func_0x00010c192d40(0x3fd083126e978d50,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10701b280; end: 10701b2bb; -[SCCameraTimerImpl sizeThatFits:] */

undefined1  [16] FUN_10701b280(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  func_0x00010bdd9500();
  uVar1 = param_1;
  func_0x00010bdd9500(param_2);
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10701b2bc; end: 10701b3cf; -[SCCameraTimerImpl copyWithZone:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10701b2bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d40c0;
  _objc_alloc();
  func_0x00010bfb68e0(param_5);
  uVar3 = param_1;
  func_0x00010c0c3620(param_5);
  func_0x00010c0148e0(param_1,param_2,param_3,param_4,uVar3,puVar1,param_6,
                      *(undefined8 *)(param_5 + _DAT_11276296c),
                      *(undefined8 *)(param_5 + _DAT_112762980),
                      *(undefined8 *)(param_5 + _DAT_112762970),
                      *(undefined1 *)(param_5 + _DAT_112762984),
                      *(undefined1 *)(param_5 + _DAT_112762988),
                      *(undefined8 *)(param_5 + _DAT_11276298c),
                      *(undefined8 *)(param_5 + _DAT_1127629a0),
                      *(undefined8 *)(param_5 + _DAT_1127629a4),
                      *(undefined8 *)(param_5 + _DAT_11276297c));
  lVar2 = param_5;
  func_0x00010c123d40(param_5);
  func_0x00010c1e8f40(puVar1,param_6,lVar2);
  *(undefined8 *)(puVar1 + _DAT_1127629cc) = *(undefined8 *)(param_5 + _DAT_1127629cc);
  *(undefined8 *)(puVar1 + _DAT_1127629a8) = *(undefined8 *)(param_5 + _DAT_1127629a8);
  func_0x00010bf01b40(param_5);
  func_0x00010c1677c0(puVar1);
  return puVar1;
}



/* Entry: 10701b3d0; end: 10701b3d7; -[SCCameraTimerImpl actionType] */

undefined8 FUN_10701b3d0(void)

{
  return 4;
}



/* Entry: 10701b3d8; end: 10701b3df; -[SCCameraTimerImpl cameraUIItem] */

undefined8 FUN_10701b3d8(void)

{
  return 0x13;
}



/* Entry: 10701b3e0; end: 10701b3e3; -[SCCameraTimerImpl accessibilityActivationPoint] */

void FUN_10701b3e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf345f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_center_1125aab20);
  return;
}



/* Entry: 10701b3e4; end: 10701b583; -[SCCameraTimerImpl accessibilityElements] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701b3e4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + _DAT_1127629e0) != 0) {
    func_0x00010befa120(puVar1);
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        lVar8 = *(long *)(lStack_128 + lVar10 * 8);
        lVar3 = lVar8;
        func_0x00010c06b4e0();
        if ((int)lVar3 != 0) {
          func_0x00010befa120(puVar1);
        }
        lVar3 = lVar8;
        func_0x00010beece40();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf529e0();
        _objc_release(lVar3);
        if (lVar4 != 0) {
          func_0x00010beece40(lVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar1);
          _objc_release(lVar8);
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = param_1;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(param_1 + _DAT_1127629f4) = 0;
  lVar2 = param_1;
  func_0x00010bde98a0();
  if ((int)lVar2 == 0) {
    return;
  }
  if ((long)puVar6 < 3) {
    if (puVar6 == (undefined8 *)0x1) {
LAB_10701b5fc:
      uVar5 = *(undefined8 *)(param_1 + _DAT_1127629b8);
      uVar7 = 1;
      goto LAB_10701b620;
    }
    if (puVar6 == (undefined8 *)0x2) {
                    /* WARNING: Could not recover jumptable at 0x00010bf96a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + _DAT_1127629b8),
                 PTR_s_enterHandsFreePreviewAnimated__1125c3438,1);
      return;
    }
  }
  else {
    if (puVar6 == (undefined8 *)0x3) goto LAB_10701b5fc;
    if (puVar6 == (undefined8 *)0x4) {
      return;
    }
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127629b8);
  uVar7 = 0;
LAB_10701b620:
                    /* WARNING: Could not recover jumptable at 0x00010bf9b810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar5,PTR_s_exitHandsFreePreviewAnimated__1125c47a8,uVar7);
  return;
}



/* Entry: 10701b584; end: 10701b62b; -[SCCameraTimerImpl _syncCoolRecordingPreviewForState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701b584(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + _DAT_1127629f4) = 0;
  lVar1 = param_1;
  func_0x00010bde98a0();
  if ((int)lVar1 == 0) {
    return;
  }
  if (param_3 < 3) {
    if (param_3 == 1) {
LAB_10701b5fc:
      uVar2 = *(undefined8 *)(param_1 + _DAT_1127629b8);
      uVar3 = 1;
      goto LAB_10701b620;
    }
    if (param_3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bf96a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + _DAT_1127629b8),
                 PTR_s_enterHandsFreePreviewAnimated__1125c3438,1);
      return;
    }
  }
  else {
    if (param_3 == 3) goto LAB_10701b5fc;
    if (param_3 == 4) {
      return;
    }
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127629b8);
  uVar3 = 0;
LAB_10701b620:
                    /* WARNING: Could not recover jumptable at 0x00010bf9b810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_exitHandsFreePreviewAnimated__1125c47a8,uVar3);
  return;
}



/* Entry: 10701b62c; end: 10701b713; -[SCCameraTimerImpl _scheduleSyncCoolRecordingPreview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701b62c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  if ((*(byte *)(param_1 + _DAT_1127629f4) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_1127629f4) = 1;
    puVar1 = auStack_38;
    _objc_initWeak(puVar1,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,auStack_38);
    uStack_40 = param_3;
    func_0x00010c0f7fc0(puVar1);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 10701b714; end: 10701b76b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701b714(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010c123d40();
    if ((uVar2 & 1) == 0) {
      *(undefined1 *)(uVar1 + (long)_DAT_1127629f4) = 0;
    }
    else {
      func_0x00010bec98a0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10701b76c; end: 10701b7d3; -[SCCameraTimerImpl _maxRecordingDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10701b76c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11276298c);
  func_0x00010bf7f280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c2420();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10701b7d4; end: 10701b7e3; -[SCCameraTimerImpl maximumRecordingLength] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10701b7d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762968);
}



/* Entry: 10701b7e4; end: 10701b7f3; -[SCCameraTimerImpl setMaximumRecordingLength:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701b7e4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112762968) = param_1;
  return;
}



/* Entry: 10701b7f4; end: 10701b803; -[SCCameraTimerImpl recording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10701b7f4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127629e4);
}



/* Entry: 10701b804; end: 10701b813; -[SCCameraTimerImpl startRecordingAnimationTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10701b804(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127629e8);
}



/* Entry: 10701b814; end: 10701b823; -[SCCameraTimerImpl setStartRecordingAnimationTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701b814(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_1127629e8) = param_1;
  return;
}



/* Entry: 10701b824; end: 10701b833; -[SCCameraTimerImpl continuousCaptureElapsedTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10701b824(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762998);
}



/* Entry: 10701b834; end: 10701b843; -[SCCameraTimerImpl setContinuousCaptureElapsedTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701b834(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112762998) = param_1;
  return;
}



/* Entry: 10701b844; end: 10701b853; -[SCCameraTimerImpl handsFreeRecordingStopButtonVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10701b844(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127629ec);
}



/* Entry: 10701b854; end: 10701b863; -[SCCameraTimerImpl lensImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10701b854(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127629c0);
}



/* Entry: 10701b864; end: 10701b993; -[SCCameraTimerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701b864(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127629c0,0);
  _objc_storeStrong(param_1 + _DAT_11276297c,0);
  _objc_storeStrong(param_1 + _DAT_1127629a4,0);
  _objc_storeStrong(param_1 + _DAT_1127629a0,0);
  _objc_storeStrong(param_1 + _DAT_11276298c,0);
  _objc_storeStrong(param_1 + _DAT_1127629dc,0);
  _objc_storeStrong(param_1 + _DAT_1127629b8,0);
  _objc_storeStrong(param_1 + _DAT_1127629b4,0);
  _objc_storeStrong(param_1 + _DAT_1127629e0,0);
  _objc_storeStrong(param_1 + _DAT_112762980,0);
  _objc_storeStrong(param_1 + _DAT_1127629ac,0);
  _objc_storeStrong(param_1 + _DAT_1127629b0,0);
  _objc_storeStrong(param_1 + _DAT_112762974,0);
  _objc_storeStrong(param_1 + _DAT_1127629f0,0);
  _objc_storeStrong(param_1 + _DAT_1127629d0,0);
  _objc_storeStrong(param_1 + _DAT_1127629c4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127629bc,0);
  return;
}



/* Entry: 10701b994; end: 10701b9b3; -[SCFeatureMemoriesImpl delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701b994(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112762a40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10701b9b4; end: 10701b9fb; -[SCFeatureMemoriesImpl isTransitioning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10701b9b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762a2c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0817e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10701b9fc; end: 10701ba4b; -[SCFeatureMemoriesImpl percentVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10701b9fc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112762a2c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7de0();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10701ba4c; end: 10701baab; -[SCFeatureMemoriesImpl _setTransitioningToMemories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701ba4c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010c07ab40();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112762a08);
    func_0x00010bfa1820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7dc0(param_1);
    func_0x00010c081800(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10701baac; end: 10701bb07; -[SCFeatureMemoriesImpl lockAllScrollWithKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701baac(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c09fdc0(param_1,param_2,param_3);
  param_1 = param_1 + _DAT_112762a28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09fde0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10701bb08; end: 10701bb63; -[SCFeatureMemoriesImpl unlockAllScrollWithKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701bb08(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c280d80(param_1,param_2,param_3);
  param_1 = param_1 + _DAT_112762a28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c280da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10701bb64; end: 10701bb73; -[SCFeatureMemoriesImpl removeAllScrollLocks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701bb64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112762a04),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10701bb74; end: 10701bbdb; -[SCFeatureMemoriesImpl dismiss:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701bb74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762a2c);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82f80();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10701bbdc; end: 10701bc2b; -[SCFeatureMemoriesImpl galleryViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701bbdc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762a2c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbde40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10701bc2c; end: 10701bd8b; -[SCFeatureMemoriesImpl scrollToGalleryFromCameraAnimated:openSource:notificationId:notificationName:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701bc2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010bfeef00(param_1);
  lVar5 = (long)_DAT_112762a2c;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07ab40();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)(param_1 + _DAT_112762a14) = param_4;
    lVar4 = (long)_DAT_112762a20;
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c61a0();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce180();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce360();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10ae40();
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10701bd8c; end: 10701be47; -[SCFeatureMemoriesImpl scrollToSnapFeedFromCameraAnimated:openSource:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701bd8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_5);
  func_0x00010bfeef00(param_1);
  lVar4 = (long)_DAT_112762a2c;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07ab40();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)(param_1 + _DAT_112762a14) = param_4;
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10ae40();
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10701be48; end: 10701beaf; -[SCFeatureMemoriesImpl scrollToCameraAnimated:reason:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701be48(long param_1)

{
  undefined8 in_x4;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762a2c);
  _objc_retain(in_x4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82f80();
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10701beb0; end: 10701beeb; -[SCFeatureMemoriesImpl scrollGalleryToSpectaclesTab] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701beb0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762a2c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1527e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10701beec; end: 10701bf27; -[SCFeatureMemoriesImpl scrollGalleryToFeaturedTab] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701beec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762a2c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1523e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10701bf28; end: 10701bf63; -[SCFeatureMemoriesImpl scrollGalleryToScreenshotsTab] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701bf28(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762a2c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10701bf64; end: 10701bf9f; -[SCFeatureMemoriesImpl openQuickCut] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701bf64(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762a2c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10701bfa0; end: 10701c067; -[SCFeatureMemoriesImpl scrollGalleryToDreamsTabWithSnapIds:generationIds:notificationId:notificationType:dreamsPackId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701bfa0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762a2c);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152380();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10701c068; end: 10701c1b7; -[SCFeatureMemoriesImpl handleDeeplinkWithDestinationInfo:notificationId:notificationName:openSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701c068(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762a24);
  _objc_retain(uVar1);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(uVar1);
  _objc_retain(param_3);
  func_0x00010c152480(param_1);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10701c1b8; end: 10701c283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701c1b8(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    func_0x00010bfb0140(PTR_PTR_1126b24e0,param_2,&PTR____CFConstantStringClassReference_110ef8998,
                        &PTR____CFConstantStringClassReference_110ef8ab8,
                        *(undefined8 *)(param_1 + 0x20));
  }
  else {
    lVar3 = lVar2;
    func_0x00010bfbde40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR_PTR_110ac58d0;
    if (lVar3 != 0) {
      ppuVar1 = &PTR_PTR_110ac58b8;
    }
    func_0x00010bfb0140(PTR_PTR_1126b24e0,param_2,&PTR____CFConstantStringClassReference_110ef8998,
                        *ppuVar1,*(undefined8 *)(lVar2 + _DAT_112762a24));
    func_0x00010bf68a20(lVar3,param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10701c284; end: 10701c40b; -[SCFeatureMemoriesImpl timelineModeDidBecomeActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701c284(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_112762a44;
  *(undefined1 *)(param_1 + lVar7) = param_3;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762a0c);
  func_0x00010c270180();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf049e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar6 != 0) {
    lVar3 = param_1;
    func_0x00010c0c98c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0c9880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c272980();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    if ((*(byte *)(param_1 + _DAT_112762a18) & 1) == 0) {
      uVar6 = *(undefined8 *)(param_1 + _DAT_112762a08);
      func_0x00010bfa1820(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar6;
      func_0x00010c0c9880();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(0x3fd999999999999a);
      _objc_release(uVar2);
      _objc_release(uVar6);
    }
    if ((*(byte *)(param_1 + lVar7) & 1) == 0) {
      uVar6 = *(undefined8 *)(param_1 + _DAT_112762a08);
      func_0x00010bfa1820(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar6;
      func_0x00010c0c9880();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(0x3ff0000000000000);
      _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar6);
      return;
    }
  }
  return;
}



/* Entry: 10701c40c; end: 10701c48b; -[SCFeatureMemoriesImpl timelineModeDidChangeDuration:contentImportEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701c40c(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(char *)(param_1 + _DAT_112762a18) = (char)param_3;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762a08);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c9880();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x3ff0000000000000;
  if (param_3 == 0) {
    uVar3 = 0x3fd999999999999a;
  }
  func_0x00010c1677c0(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10701c48c; end: 10701c4ff; -[SCFeatureMemoriesImpl isSnapTabVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701c48c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010bfbdee0();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112762a2c);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfbde40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07ec40();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 10701c500; end: 10701c567; -[SCFeatureMemoriesImpl isDisplayingFeaturedBadge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10701c500(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762a08);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c9880();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c070c80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 10701c568; end: 10701c56b; -[SCFeatureMemoriesImpl activate] */

void FUN_10701c568(void)

{
  return;
}



/* Entry: 10701c56c; end: 10701c75b; -[SCFeatureMemoriesImpl _didTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701c56c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + _DAT_112762a44) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112762a0c);
    func_0x00010c270180();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf049e0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 == 0) goto LAB_10701c620;
    if (*(char *)(param_1 + _DAT_112762a18) != '\x01') goto LAB_10701c744;
    param_1 = param_1 + _DAT_112762a40;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfa2620();
  }
  else {
LAB_10701c620:
    func_0x00010c152480(param_1);
    lVar7 = (long)_DAT_112762a08;
    uVar1 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0c9880();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c070c80();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 == 0) {
      lVar4 = *(long *)(param_1 + lVar7);
      func_0x00010bfa1820();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0c9880();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar6 = lVar5;
      func_0x00010010fab4(lVar5,PTR_DAT_1126a5908);
      lVar4 = lVar5;
      if ((int)lVar6 == 0) {
        lVar4 = 0;
      }
      _objc_retain(lVar4);
      _objc_release(lVar5);
      if (lVar4 != 0) {
        func_0x00010c252440();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bf70fe0();
        _objc_release(lVar5);
        if (lVar6 != 1) {
          func_0x00010c152060(param_1);
        }
      }
      _objc_release(lVar4);
    }
    else {
      func_0x00010c152020(param_1);
    }
    param_1 = *(long *)(param_1 + lVar7);
    func_0x00010bfa1820(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7c520();
  }
  _objc_release(param_1);
LAB_10701c744:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10701c75c; end: 10701c76b; -[SCFeatureMemoriesImpl lockScrollWithKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701c75c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112762a04),PTR_s_addObject__11259c1f0);
  return;
}



/* Entry: 10701c76c; end: 10701c80b; -[SCFeatureMemoriesImpl shouldLockScrollForLensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10701c76c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112762a34;
  _objc_retain(param_3);
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,lVar1);
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(param_1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 10701c80c; end: 10701c833; -[SCFeatureMemoriesImpl scrollToCameraFromGalleryAnimated:completion:withTapButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701c80c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  if (param_5 != 0) {
    *(undefined8 *)(param_1 + _DAT_112762a10) = 0xc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1522f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_scrollToCameraAnimated_reason_co_1126322d8,param_3,
             &PTR____CFConstantStringClassReference_110e98b18,param_4);
  return;
}



/* Entry: 10701c834; end: 10701ca0f; -[SCFeatureMemoriesImpl transitionCoordinator:shouldBeginTransitionType:gestureRecognizer:interactive:viewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10701c834(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,uint param_6,undefined8 param_7)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  if (param_4 == 1) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112762a2c);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c07ab40();
    uVar10 = 0;
    uVar7 = (uint)uVar5 ^ 1;
    uVar8 = 1;
  }
  else {
    if (param_4 != 2) {
      uVar7 = 0;
      uVar10 = 0;
      uVar8 = 0;
      goto LAB_10701c904;
    }
    uVar3 = *(undefined8 *)(param_1 + _DAT_112762a2c);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c07ab40();
    uVar10 = (uint)uVar5;
    uVar8 = 0;
    uVar7 = uVar10;
  }
  _objc_release(uVar3);
LAB_10701c904:
  lVar9 = (long)_DAT_112762a14;
  uVar6 = *(ulong *)(param_1 + lVar9);
  uVar1 = param_6 ^ 1 | uVar10;
  if (0xc < uVar6 || (1L << (uVar6 & 0x3f) & 0x1190U) == 0) {
    uVar1 = 0;
  }
  uVar2 = uVar6 == 1 | uVar1;
  if (((uVar6 == 1) == 0 && (uVar1 & 1) == 0) && (((uVar10 ^ 1) & 1) == 0)) {
    lVar4 = param_1;
    func_0x00010c230fe0();
    uVar2 = (uint)lVar4;
  }
  lVar4 = *(long *)(param_1 + _DAT_112762a04);
  func_0x00010bf529e0();
  uVar7 = (lVar4 == 0 | uVar2) & uVar7;
  if ((uVar7 & 1) == 0) {
    lVar9 = (long)_DAT_112762a2c;
    uVar5 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07ab40();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c077a80();
    _objc_release(uVar5);
  }
  else if ((param_6 & uVar8) == 1) {
    *(undefined8 *)(param_1 + lVar9) = 0;
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return uVar7 & 1;
}



/* Entry: 10701ca10; end: 10701cca7; -[SCFeatureMemoriesImpl transitionCoordinator:willBeginWithTransitionType:viewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701ca10(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 == 2) {
    lVar1 = *(long *)(param_1 + (long)_DAT_112762a04);
    func_0x00010bf529e0();
    if ((lVar1 != 0) && (uVar2 = param_1, func_0x00010c230fe0(), (uVar2 & 1) == 0)) {
      uVar3 = *(undefined8 *)(param_1 + (long)_DAT_112762a38);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf920c0();
      _objc_release(uVar3);
      if ((int)uVar4 != 0) {
        func_0x00010c12b080(param_1);
      }
    }
    uVar4 = 0x1c;
    if (*(long *)(param_1 + (long)_DAT_112762a10) != -1) {
      uVar4 = 0xc;
    }
    func_0x00010c198340(*(undefined8 *)(param_1 + (long)_DAT_112762a30),param_2,uVar4);
    lVar11 = (long)_DAT_112762a40;
    lVar1 = param_1 + lVar11;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bfa2640();
    _objc_release(lVar1);
    lVar10 = (long)_DAT_112762a0c;
    lVar1 = *(long *)(param_1 + lVar10);
    func_0x00010c0ce100();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c077a00();
    if ((int)lVar6 == 0) {
      _objc_release(lVar5);
    }
    else {
      uVar2 = param_1;
      func_0x00010be3e9e0();
      if ((int)uVar2 == 0) {
        uVar7 = *(ulong *)(param_1 + lVar10);
        func_0x00010c0ce100();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar7;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar2;
        func_0x00010bf926c0();
        _objc_release(uVar2);
        _objc_release(uVar7);
        _objc_release(lVar5);
        _objc_release(lVar1);
        if ((uVar8 & 1) != 0) goto LAB_10701cc1c;
      }
      else {
        _objc_release(lVar5);
        _objc_release(lVar1);
      }
      lVar1 = param_1 + lVar11;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bfa2600();
    }
  }
  else {
    if (param_4 != 1) goto LAB_10701cc1c;
    uVar4 = 0xc;
    if (*(long *)(param_1 + (long)_DAT_112762a14) != 1) {
      uVar4 = 0x1c;
    }
    func_0x00010c198340(*(undefined8 *)(param_1 + (long)_DAT_112762a30),param_2,uVar4);
    lVar1 = param_1 + (long)_DAT_112762a40;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bfa2660();
  }
  _objc_release(lVar1);
LAB_10701cc1c:
  func_0x00010c1070e0(param_5);
  puVar9 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a2e0();
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010c106ec0(param_5);
  func_0x00010c14dc60(puVar9,param_2,uVar4);
  _objc_release(puVar9);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10701cca8; end: 10701cdef; -[SCFeatureMemoriesImpl _isCameraPresented] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10701cca8(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  param_1 = param_1 + _DAT_112762a00;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b68c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c07ab20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf86d40();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  uVar1 = *(undefined1 *)(puStack_58 + 3);
  __Block_object_dispose(&uStack_60,8);
  return uVar1;
}



/* Entry: 10701cdf0; end: 10701ce1f;  */

void FUN_10701cdf0(long param_1,undefined1 param_2)

{
  func_0x00010bf1f3c0();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 10701ce20; end: 10701ce2f; -[SCFeatureMemoriesImpl transitionCoordinator:didBeginWithTransitionType:viewController:] */

void FUN_10701ce20(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bea8ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setTransitioningToMemories_112587c58);
    return;
  }
  return;
}



/* Entry: 10701ce30; end: 10701cf67; -[SCFeatureMemoriesImpl transitionCoordinator:didFinishWithTransitionType:success:interactive:viewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701ce30(long param_1,undefined8 param_2,undefined8 param_3,long param_4,uint param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  if ((param_4 != 2) == param_5) {
    if (param_4 != 1) goto LAB_10701cf44;
    lVar3 = (long)_DAT_112762a14;
    uVar1 = *(undefined8 *)(param_1 + _DAT_112762a20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c61a0();
    _objc_release(uVar1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112762a38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c235080();
    _objc_release(uVar2);
    if ((int)uVar1 != 0) {
      *(undefined8 *)(param_1 + lVar3) = 0xffffffffffffffff;
    }
    param_1 = param_1 + _DAT_112762a40;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfa25e0();
  }
  else {
    *(undefined8 *)(param_1 + _DAT_112762a10) = 0xffffffffffffffff;
    param_1 = param_1 + _DAT_112762a40;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfa25c0();
  }
  _objc_release(param_1);
LAB_10701cf44:
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10701cf68; end: 10701cfaf; -[SCFeatureMemoriesImpl transitionCoordinator:willFailWithTransitionType:viewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701cf68(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 2) {
    param_1 = param_1 + _DAT_112762a40;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfa25e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10701cfb0; end: 10701d34f; -[SCFeatureMemoriesImpl transitionCoordinator:transitionType:shouldAllowGesture:toRecognizeSimultaneouslyWith:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10701cfb0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 in_x4;
  ulong in_x5;
  uint uVar14;
  long lVar15;
  
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  uVar1 = *(ulong *)(param_1 + _DAT_112762a2c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c077a80();
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    uVar2 = in_x5;
    _objc_opt_isKindOfClass(in_x5,puVar3);
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) goto LAB_10701d0a8;
    puVar3 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    uVar2 = in_x5;
    _objc_opt_isKindOfClass(in_x5,puVar3);
    if ((uVar2 & 1) == 0) {
LAB_10701d30c:
      func_0x00010c1374a0(in_x5);
      uVar14 = 1;
      goto LAB_10701d31c;
    }
    uVar2 = in_x5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d4158;
    _objc_opt_class(PTR_PTR_1126d4158);
    uVar1 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    _objc_release(uVar2);
    if ((uVar1 & 1) == 0) goto LAB_10701d30c;
    func_0x00010c1374a0(in_x4);
  }
  else {
    _objc_release(uVar1);
LAB_10701d0a8:
    uVar4 = *(undefined8 *)(param_1 + _DAT_112762a0c);
    func_0x00010c0ce100();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0c8ac0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    if ((int)uVar6 != 0) {
      uVar2 = in_x5;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = (long)_DAT_112762a00;
      lVar7 = param_1 + lVar15;
      _objc_loadWeakRetained(lVar7);
      lVar8 = lVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c141680();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c070780();
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(uVar2);
      uVar2 = in_x5;
      func_0x00010c29bf00(in_x5);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1 + lVar15;
      _objc_loadWeakRetained(lVar7);
      lVar8 = lVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c0efe80();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar2;
      func_0x00010c070780(uVar2);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(uVar2);
      uVar2 = in_x5;
      func_0x00010c29bf00(in_x5);
      _objc_retainAutoreleasedReturnValue();
      lVar15 = param_1 + lVar15;
      _objc_loadWeakRetained(lVar15);
      lVar7 = lVar15;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bfe12a0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar2;
      func_0x00010c070780(uVar2);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar15);
      _objc_release(uVar2);
      uVar2 = param_1 + _DAT_112762a28;
      _objc_loadWeakRetained(uVar2);
      uVar13 = uVar2;
      func_0x00010c0f36c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar2);
      puVar3 = PTR__OBJC_CLASS___UIPinchGestureRecognizer_1126b3868;
      _objc_opt_class(PTR__OBJC_CLASS___UIPinchGestureRecognizer_1126b3868);
      uVar2 = in_x5;
      _objc_opt_isKindOfClass(in_x5,puVar3);
      uVar14 = ((uint)(uVar13 != in_x5) & ((uint)uVar1 ^ 1) |
               (uint)uVar11 | (uint)uVar12 | (uint)uVar2) ^ 1;
      goto LAB_10701d31c;
    }
  }
  uVar14 = 0;
LAB_10701d31c:
  _objc_release(in_x5);
  _objc_release(in_x4);
  return uVar14 & 1;
}



/* Entry: 10701d350; end: 10701d35f; -[SCFeatureMemoriesImpl cameraViewType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10701d350(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127629f8);
}



/* Entry: 10701d360; end: 10701d36f; -[SCFeatureMemoriesImpl setCameraViewType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701d360(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_1127629f8) = param_3;
  return;
}



/* Entry: 10701d370; end: 10701d37f; -[SCFeatureMemoriesImpl shouldIgnoreScrollLocksOnDismissal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10701d370(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127629fc);
}



/* Entry: 10701d380; end: 10701d38f; -[SCFeatureMemoriesImpl setIgnoreScrollLocksOnDismissal:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701d380(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127629fc) = param_3;
  return;
}



/* Entry: 10701d390; end: 10701d39f; -[SCFeatureMemoriesImpl scrollLocks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10701d390(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762a04);
}



/* Entry: 10701d3a0; end: 10701d3df; -[SCFeatureMemoriesImpl setScrollLocks:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701d3a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762a04;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10701d3e0; end: 10701d3ef; -[SCFeatureMemoriesImpl memoriesSideButtonRef] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10701d3e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762a08);
}



/* Entry: 10701d3f0; end: 10701d42f; -[SCFeatureMemoriesImpl setMemoriesSideButtonRef:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701d3f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762a08;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10701d430; end: 10701d56f; -[SCFeatureMemoriesImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701d430(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112762a08,0);
  _objc_storeStrong(param_1 + _DAT_112762a04,0);
  _objc_storeStrong(param_1 + _DAT_112762a38,0);
  _objc_destroyWeak(param_1 + _DAT_112762a34);
  _objc_destroyWeak(param_1 + _DAT_112762a00);
  _objc_storeStrong(param_1 + _DAT_112762a30,0);
  _objc_storeStrong(param_1 + _DAT_112762a24,0);
  _objc_storeStrong(param_1 + _DAT_112762a20,0);
  _objc_storeStrong(param_1 + _DAT_112762a1c,0);
  _objc_storeStrong(param_1 + _DAT_112762a0c,0);
  _objc_destroyWeak(param_1 + _DAT_112762a40);
  _objc_storeStrong(param_1 + _DAT_112762a2c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112762a28);
  return;
}


