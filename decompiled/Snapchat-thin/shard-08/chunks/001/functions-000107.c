/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105dbadc8; end: 105dbb143; -[SCPreviewFeatureSwipeDownDismissAnimator _finishTransitionAnimationFromInteractiveTransitioning:] */

void FUN_105dbadc8(undefined8 param_1,double param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  double dStack_68;
  
  lVar2 = param_3;
  func_0x00010c27aa80();
  if (lVar2 == 0) {
    lVar2 = param_3 + 0x70;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c219a60(param_3);
      lVar2 = param_3 + 0x70;
      _objc_loadWeakRetained();
      lVar3 = lVar2;
      func_0x00010c29ce60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      func_0x00010c21e900(lVar3);
      lVar2 = param_3 + 0x48;
      _objc_loadWeakRetained(lVar2);
      func_0x00010bf042e0();
      _objc_release(lVar2);
      lVar2 = param_3 + 0x50;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c1677c0(0);
      _objc_release(lVar2);
      lVar2 = param_3 + 0x38;
      _objc_loadWeakRetained(lVar2);
      lVar4 = lVar2;
      func_0x00010c2be8a0();
      _objc_retainAutoreleasedReturnValue();
      dVar9 = 0.0;
      func_0x00010c1677c0();
      _objc_release(lVar4);
      _objc_release(lVar2);
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3 + 0x70;
      _objc_loadWeakRetained(lVar2);
      lVar4 = lVar2;
      func_0x00010bf4b2a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(puVar5);
      lVar2 = param_3 + 0x68;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c12c960();
      _objc_release(lVar2);
      lVar2 = param_3 + 0x70;
      _objc_loadWeakRetained(lVar2);
      lVar6 = lVar2;
      func_0x00010bf4b2a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetHeight();
      lVar4 = param_3 + 0x38;
      _objc_loadWeakRetained(lVar4);
      func_0x00010bf345e0();
      dVar9 = dVar9 - param_2;
      lVar7 = param_3 + 0x70;
      _objc_loadWeakRetained(lVar7);
      lVar8 = lVar7;
      func_0x00010bf4b2a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf345e0();
      dVar10 = 50.0;
      dVar9 = dVar9 + param_2 + 50.0;
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar4);
      _objc_release(lVar6);
      _objc_release(lVar2);
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      lVar2 = param_3 + 0x78;
      _objc_loadWeakRetained(lVar2);
      lVar4 = param_3 + 0x38;
      _objc_loadWeakRetained(lVar4);
      func_0x00010c297a00(lVar2);
      puVar5 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_105dbb144;
      puStack_78 = &UNK_110848c48;
      lStack_70 = param_3;
      dStack_68 = dVar9;
      func_0x00010bf03460(0x3fd999999999999a,0,0x3ff0000000000000,(dVar10 * 0.4) / dVar9,puVar1);
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_initWeak(auStack_98,param_3);
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      puStack_c0 = puVar5;
      uStack_b8 = 0xc2000000;
      pcStack_b0 = FUN_105dbb1d4;
      puStack_a8 = &UNK_110842e18;
      lStack_a0 = param_3;
      _objc_copyWeak(auStack_c8,auStack_98);
      _objc_retain(lVar3);
      func_0x00010bf03440(0x3fd3333333333333,0,puVar1);
      _objc_release(lVar3);
      _objc_destroyWeak(auStack_c8);
      _objc_destroyWeak(auStack_98);
      _objc_release(lVar3);
    }
  }
  return;
}



/* Entry: 105dbb144; end: 105dbb1d3;  */

void FUN_105dbb144(undefined8 param_1,double param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  lVar1 = *(long *)(param_3 + 0x20) + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf345e0();
  lVar2 = *(long *)(param_3 + 0x20) + 0x38;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf345e0();
  dVar4 = *(double *)(param_3 + 0x28);
  lVar3 = *(long *)(param_3 + 0x20) + 0x38;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c17a6a0(param_1,param_2 + dVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105dbb1d4; end: 105dbb207;  */

void FUN_105dbb1d4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x60;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1677c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105dbb208; end: 105dbb2db;  */

void FUN_105dbb208(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x38;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c12c960();
    _objc_release(lVar2);
    lVar2 = lVar1 + 0x50;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c12c960();
    _objc_release(lVar2);
    lVar2 = lVar1 + 0x60;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c12c960();
    _objc_release(lVar2);
    lVar2 = lVar1 + 0x70;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bfaf8e0();
    _objc_release(lVar2);
    lVar2 = lVar1 + 0x70;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf43bc0();
    _objc_release(lVar2);
    func_0x00010c21e900(*(undefined8 *)(param_1 + 0x20),param_2,1);
    func_0x00010c219a60(lVar1,param_2,0);
    func_0x00010bddfb00(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105dbb2dc; end: 105dbb303; -[SCPreviewFeatureSwipeDownDismissAnimator animateTransition:] */

void FUN_105dbb2dc(undefined8 param_1)

{
  func_0x00010bea9c20();
                    /* WARNING: Could not recover jumptable at 0x00010be17470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__finishTransitionAnimationFromIn_1125636b8,0)
  ;
  return;
}



/* Entry: 105dbb304; end: 105dbb30f; -[SCPreviewFeatureSwipeDownDismissAnimator transitionDuration:] */

undefined8 FUN_105dbb304(void)

{
  return 0x3fd3333333333333;
}



/* Entry: 105dbb310; end: 105dbb55f; -[SCPreviewFeatureSwipeDownDismissAnimator startInteractiveTransition:] */

void FUN_105dbb310(double param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_5);
  lVar1 = param_3 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf1fbc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c274560();
  *(bool *)(param_3 + 0x80) = param_1 == 0.0;
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bea9c20(param_3);
  func_0x00010bea9da0(param_3);
  lVar1 = param_3 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c2be8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0();
  *(double *)(param_3 + 8) = param_1;
  *(undefined8 *)(param_3 + 0x10) = param_2;
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c2be8a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3 + 0x38;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010c2be8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar11 = param_1 * 0.5;
  lVar5 = param_3 + 0x38;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c2be8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  param_1 = param_1 * 0.5;
  lVar7 = param_3 + 0x50;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf512a0(lVar3);
  *(double *)(param_3 + 0x18) = dVar11;
  *(double *)(param_3 + 0x20) = param_1;
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_initWeak(auStack_78,param_3);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105dbb560;
  puStack_88 = &UNK_1108434b0;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar9 = 0;
  func_0x0001008553e8(0,&puStack_a0);
  uVar10 = *(undefined8 *)(param_3 + 0xb0);
  *(undefined8 *)(param_3 + 0xb0) = uVar9;
  _objc_release(uVar10);
  func_0x000100c749e0(0x3f000000,"APPSTORE",*(undefined8 *)(param_3 + 0xb0));
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  return;
}



/* Entry: 105dbb560; end: 105dbb58b;  */

void FUN_105dbb560(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddafe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dbb58c; end: 105dbb61f; -[SCPreviewFeatureSwipeDownDismissAnimator _cancelTransitionIfNecessary] */

void FUN_105dbb58c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x70;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1 + 0x48;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf04280();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      lVar1 = param_1 + 0x78;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c195460();
      _objc_release(lVar1);
      func_0x00010bf2f380(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdda470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__cancelAutoCancelTransitionBlock_1125542b8);
      return;
    }
  }
  return;
}



/* Entry: 105dbb620; end: 105dbb65b; -[SCPreviewFeatureSwipeDownDismissAnimator _cancelAutoCancelTransitionBlock] */

void FUN_105dbb620(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0xb0) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xb0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105dbb65c; end: 105dbb663; -[SCPreviewFeatureSwipeDownDismissAnimator overscrollThresholdForDismissalReached] */

undefined1 FUN_105dbb65c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb8);
}



/* Entry: 105dbb664; end: 105dbb6db; -[SCPreviewFeatureSwipeDownDismissAnimator .cxx_destruct] */

void FUN_105dbb664(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x38);
  return;
}



/* Entry: 105dbb6dc; end: 105dbb7bb; -[SCPreviewFeatureSwipeDownDismissImpl initWithConfiguration:creativeToolsMenu:blizzardLogger:] */

undefined1 *
FUN_105dbb6dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ed170;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    puVar2 = PTR_PTR_1126c4a30;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105dbb7bc; end: 105dbb7c3; -[SCPreviewFeatureSwipeDownDismissImpl responderChainPriority] */

undefined8 FUN_105dbb7bc(void)

{
  return 0x7fffffff;
}



/* Entry: 105dbb7c4; end: 105dbb89f; -[SCPreviewFeatureSwipeDownDismissImpl configureWithView:] */

void FUN_105dbb7c4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x18,param_3);
  func_0x00010beacc40(param_1);
  puVar2 = PTR_PTR_1126c4a38;
  _objc_alloc();
  puVar3 = PTR_PTR_1126c4a40;
  _objc_retain(param_3);
  _objc_opt_class(puVar3);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  lVar5 = param_1 + 8;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c039dc0();
  _objc_release(uVar1);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar2;
  _objc_release(uVar6);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105dbb8a0; end: 105dbb8a7; -[SCPreviewFeatureSwipeDownDismissImpl snapEditor:didChangeToolBarButtonItemType:selected:] */

void FUN_105dbb8a0(undefined8 param_1)

{
  uint in_w4;
  
                    /* WARNING: Could not recover jumptable at 0x00010c19a9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setFeatureEnabled__112644488,in_w4 ^ 1);
  return;
}



/* Entry: 105dbb8a8; end: 105dbb8af; -[SCPreviewFeatureSwipeDownDismissImpl exitPreviewCancelled] */

void FUN_105dbb8a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2f390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_cancelTransitionAnimation_1125a9688);
  return;
}



/* Entry: 105dbb8b0; end: 105dbb8b7; -[SCPreviewFeatureSwipeDownDismissImpl setFeatureEnabled:] */

void FUN_105dbb8b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_setEnabled__112642f38);
  return;
}



/* Entry: 105dbb8b8; end: 105dbb8f3; -[SCPreviewFeatureSwipeDownDismissImpl gestureRecognizer:shouldReceiveTouch:] */

bool FUN_105dbb8b8(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x00010c09ef00(param_6,param_4,0);
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  return param_1 < param_2;
}



/* Entry: 105dbb8f4; end: 105dbb993; -[SCPreviewFeatureSwipeDownDismissImpl gestureRecognizerShouldBegin:] */

bool FUN_105dbb8f4(undefined8 param_1,double param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  param_3 = param_3 + 0x18;
  _objc_loadWeakRetained(param_3);
  func_0x00010c297a00(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_5);
  return 0.0 < param_2;
}



/* Entry: 105dbb994; end: 105dbb9e3; -[SCPreviewFeatureSwipeDownDismissImpl gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

uint FUN_105dbb994(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_retain(in_x3);
  _objc_opt_class(puVar1);
  uVar2 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar1);
  _objc_release(in_x3);
  return (uint)uVar2 & 1;
}



/* Entry: 105dbb9e4; end: 105dbba67; -[SCPreviewFeatureSwipeDownDismissImpl _setupGestureHandling] */

void FUN_105dbb9e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_alloc();
  func_0x00010c050900();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1c3c20(*(undefined8 *)(param_1 + 0x38),param_2,1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x38),param_2,param_1);
  func_0x00010c195460(*(undefined8 *)(param_1 + 0x38),param_2,0);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bef9040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dbba68; end: 105dbbb3b; -[SCPreviewFeatureSwipeDownDismissImpl _handleGesture:] */

void FUN_105dbba68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c2be8a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c082800();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c27acc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010010fab4(lVar2,PTR_DAT_1126a5220);
    _objc_release(lVar2);
    if (((int)lVar1 == 0) || (lVar2 == 0)) {
      func_0x00010c14c8a0(param_3);
    }
    else {
      func_0x00010bf781e0(*(undefined8 *)(param_1 + 0x10));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105dbbb3c; end: 105dbbb43; -[SCPreviewFeatureSwipeDownDismissImpl finishTransition] */

void FUN_105dbbb3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_finishInteractiveTransitionAnima_1125c97e8);
  return;
}



/* Entry: 105dbbb44; end: 105dbbb77; -[SCPreviewFeatureSwipeDownDismissImpl animatorDismissPreviewWithSwipeDown:] */

void FUN_105dbbb44(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf842e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dbbb78; end: 105dbbc9f; -[SCPreviewFeatureSwipeDownDismissImpl animatorShouldStartInteractiveTransitionOnGestureBegan:] */

void FUN_105dbbb78(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c06d1a0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_1 + 0x30;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c06d1e0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = param_1 + 0x30;
      _objc_loadWeakRetained();
      lVar4 = lVar3;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar3);
      if (lVar4 == 0) {
        lVar3 = param_1 + 0x30;
        _objc_loadWeakRetained();
        lVar4 = lVar3;
        func_0x00010c27acc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        lVar5 = lVar4;
        func_0x00010010fab4(lVar4,PTR_DAT_1126a5220);
        lVar3 = lVar4;
        if ((int)lVar5 == 0) {
          lVar3 = 0;
        }
        _objc_retain(lVar3);
        _objc_release(lVar4);
        func_0x00010c188220(lVar3);
        func_0x00010c188520(lVar3);
        _objc_release(lVar3);
        param_1 = param_1 + 0x30;
        _objc_loadWeakRetained(param_1);
        func_0x00010bf84b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(param_1);
        return;
      }
    }
  }
  return;
}



/* Entry: 105dbbca0; end: 105dbbd6f; -[SCPreviewFeatureSwipeDownDismissImpl animatorDidCancelTransition:] */

void FUN_105dbbca0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c0b3c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18d5e0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0b3c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be57340(param_1,param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c112100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188520();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c112100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188220();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dbbd70; end: 105dbbe07; -[SCPreviewFeatureSwipeDownDismissImpl animatorWillFinishTransition:isInteractive:] */

void FUN_105dbbd70(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    lVar1 = param_1;
    func_0x00010c0b3c20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18d5e0();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0b3c20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be57340(param_1,param_2,lVar1);
    _objc_release(lVar1);
  }
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c112100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24e200();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dbbe08; end: 105dbbf03; -[SCPreviewFeatureSwipeDownDismissImpl animatorWillRespondToGestureBegan:] */

void FUN_105dbbe08(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c4a30;
  _objc_alloc_init();
  uVar5 = *(undefined8 *)(param_3 + 0x40);
  *(undefined **)(param_3 + 0x40) = puVar1;
  _objc_release(uVar5);
  _CACurrentMediaTime();
  lVar2 = param_3;
  func_0x00010c0b3c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a3040(param_1);
  _objc_release(lVar2);
  uVar5 = *(undefined8 *)(param_3 + 0x38);
  lVar2 = param_3 + 0x18;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(uVar5,param_4,lVar3);
  lVar4 = param_3;
  func_0x00010c0b3c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209540(param_1,param_2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 105dbbf04; end: 105dbbfc3; -[SCPreviewFeatureSwipeDownDismissImpl animatorWillRespondToGestureCompleted:] */

void FUN_105dbbf04(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _CACurrentMediaTime();
  lVar1 = param_3;
  func_0x00010c0b3c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a2ee0(param_1);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_3 + 0x38);
  lVar1 = param_3 + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(uVar3,param_4,lVar2);
  func_0x00010c0b3c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195ea0(param_1,param_2);
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105dbbfc4; end: 105dbbffb; -[SCPreviewFeatureSwipeDownDismissImpl animatorShouldRespondToGestureCompleted:] */

long FUN_105dbbfc4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c06d1a0();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 105dbbffc; end: 105dbc1c7; -[SCPreviewFeatureSwipeDownDismissImpl _logPreviewSwipeDismissActionWithLoggingParameters:] */

void FUN_105dbbffc(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  puVar1 = PTR_PTR_1126c4a48;
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  uVar3 = param_4;
  func_0x00010bf02820(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167ce0(puVar1,param_3,uVar3);
  _objc_release(uVar3);
  func_0x00010bfc1980(param_4);
  dVar4 = param_1;
  func_0x00010bfc1c60(param_4);
  dVar7 = 1000.0;
  dVar5 = (param_1 - dVar4) * 1000.0;
  func_0x00010c218340(puVar1,param_3,(long)dVar5);
  uVar3 = param_4;
  func_0x00010bf74ac0(param_4);
  func_0x00010c1b0780(puVar1,param_3,uVar3);
  uVar3 = param_4;
  func_0x00010c245fa0(param_4);
  func_0x00010c1a6da0(puVar1,param_3,uVar3);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar4 = dVar5;
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  dVar6 = dVar4;
  _objc_release(puVar2);
  func_0x00010c24e6e0(param_4);
  func_0x00010c2097a0((dVar6 * 100.0) / dVar5,puVar1);
  func_0x00010c24e6e0(param_4);
  dVar6 = (dVar7 * 100.0) / dVar4;
  func_0x00010c2097c0(dVar6,puVar1);
  func_0x00010bf94520(param_4);
  func_0x00010c196040((dVar6 * 100.0) / dVar5,puVar1);
  func_0x00010bf94520(param_4);
  _objc_release(param_4);
  func_0x00010c196060((dVar7 * 100.0) / dVar4,puVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105dbc1c8; end: 105dbc1df; -[SCPreviewFeatureSwipeDownDismissImpl swipeDownDismissDelegate] */

void FUN_105dbc1c8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105dbc1e0; end: 105dbc1eb; -[SCPreviewFeatureSwipeDownDismissImpl setSwipeDownDismissDelegate:] */

void FUN_105dbc1e0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 105dbc1ec; end: 105dbc1f3; -[SCPreviewFeatureSwipeDownDismissImpl swipeGesture] */

undefined8 FUN_105dbc1ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105dbc1f4; end: 105dbc1fb; -[SCPreviewFeatureSwipeDownDismissImpl loggingParameters] */

undefined8 FUN_105dbc1f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105dbc1fc; end: 105dbc267; -[SCPreviewFeatureSwipeDownDismissImpl .cxx_destruct] */

void FUN_105dbc1fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105dbc268; end: 105dbc3cb; -[SCPreviewFeatureSwipeDownDismissServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dbc268(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  lVar1 = param_1;
  FUN_105dbc3cc();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf30e80();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126ae720;
  uStack_40 = lVar3 != 4;
  _objc_copyWeak(auStack_48,auStack_38);
  func_0x00010bf11fe0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c4a50;
  _objc_alloc(PTR_PTR_1126c4a50);
  func_0x00010c04fae0();
  uVar6 = 0;
  if (param_1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_1127365cc);
  }
  _objc_retain(uVar6);
  func_0x00010bf9d660(uVar6);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105dbc3cc; end: 105dbc3ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dbc3cc(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127365c4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105dbc3f0; end: 105dbc443;  */

void FUN_105dbc3f0(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bec9320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    lVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105dbc444; end: 105dbc543; -[SCPreviewFeatureSwipeDownDismissServicesEntryPoint _swipeDownDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dbc444(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = param_1;
  FUN_105dbc3cc();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_1127365c8;
    _objc_loadWeakRetained(lVar4);
  }
  lVar2 = lVar4;
  func_0x00010bf5afe0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  puVar3 = PTR_PTR_1126c4a58;
  _objc_alloc(PTR_PTR_1126c4a58);
  param_1 = param_1 + _DAT_1127365c0;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0017c0(puVar3,param_2,lVar1,lVar2,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105dbc544; end: 105dbc597; -[SCPreviewFeatureSwipeDownDismissServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dbc544(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127365cc,0);
  _objc_destroyWeak(param_1 + _DAT_1127365c0);
  _objc_destroyWeak(param_1 + _DAT_1127365c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127365c4);
  return;
}



/* Entry: 105dbc598; end: 105dbc643; -[SCPreviewFeatureSwipeDownDismissServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dbc598(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_1127365d0;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_1127365d8;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c2647e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105dbc644; end: 105dbc687; -[SCPreviewFeatureSwipeDownDismissServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dbc644(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127365d8);
  _objc_destroyWeak(param_1 + _DAT_1127365d4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127365d0);
  return;
}



/* Entry: 105dbc688; end: 105dbc70b; -[SCPreviewSwipeDismissLoggingParameters init] */

undefined1 * FUN_105dbc688(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ed178;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _CACurrentMediaTime();
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    _CACurrentMediaTime();
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    uVar3 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
    uVar2 = *(undefined8 *)PTR__CGPointZero_110347540;
    *(undefined8 *)((long)puVar1 + 0x30) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    *(undefined8 *)((long)puVar1 + 0x40) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    *(undefined2 *)((long)puVar1 + 8) = 0;
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined ***)((long)puVar1 + 0x20) = &PTR____CFConstantStringClassReference_110db1158;
    _objc_release(uVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105dbc70c; end: 105dbc713; -[SCPreviewSwipeDismissLoggingParameters gestureStartTime] */

undefined8 FUN_105dbc70c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105dbc714; end: 105dbc71b; -[SCPreviewSwipeDismissLoggingParameters setGestureStartTime:] */

void FUN_105dbc714(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 105dbc71c; end: 105dbc723; -[SCPreviewSwipeDismissLoggingParameters gestureEndTime] */

undefined8 FUN_105dbc71c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105dbc724; end: 105dbc72b; -[SCPreviewSwipeDismissLoggingParameters setGestureEndTime:] */

void FUN_105dbc724(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 105dbc72c; end: 105dbc733; -[SCPreviewSwipeDismissLoggingParameters startCoordinate] */

undefined1  [16] FUN_105dbc72c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x28);
}



/* Entry: 105dbc734; end: 105dbc73b; -[SCPreviewSwipeDismissLoggingParameters setStartCoordinate:] */

void FUN_105dbc734(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x28) = param_1;
  *(undefined8 *)(param_3 + 0x30) = param_2;
  return;
}



/* Entry: 105dbc73c; end: 105dbc743; -[SCPreviewSwipeDismissLoggingParameters endCoordinate] */

undefined1  [16] FUN_105dbc73c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x38);
}



/* Entry: 105dbc744; end: 105dbc74b; -[SCPreviewSwipeDismissLoggingParameters setEndCoordinate:] */

void FUN_105dbc744(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x38) = param_1;
  *(undefined8 *)(param_3 + 0x40) = param_2;
  return;
}



/* Entry: 105dbc74c; end: 105dbc753; -[SCPreviewSwipeDismissLoggingParameters didDismiss] */

undefined1 FUN_105dbc74c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105dbc754; end: 105dbc75b; -[SCPreviewSwipeDismissLoggingParameters setDidDismiss:] */

void FUN_105dbc754(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 105dbc75c; end: 105dbc763; -[SCPreviewSwipeDismissLoggingParameters snapsterpieceAlertDidAppear] */

undefined1 FUN_105dbc75c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105dbc764; end: 105dbc76b; -[SCPreviewSwipeDismissLoggingParameters setSnapsterpieceAlertDidAppear:] */

void FUN_105dbc764(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 105dbc76c; end: 105dbc773; -[SCPreviewSwipeDismissLoggingParameters analyticsVersion] */

undefined8 FUN_105dbc76c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105dbc774; end: 105dbc77f; -[SCPreviewSwipeDismissLoggingParameters .cxx_destruct] */

void FUN_105dbc774(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 105dbc780; end: 105dbc96f; -[SCPreviewFeatureTextToSpeechImpl initWithPreviewConfiguration:snapEditor:videoPlayback:textToSpeechServices:featureSettingsService:snapDocEditor:legacySnapEditor:audioEffectsMixingConfigProvider:temporaryFileWriter:] */

undefined1 *
FUN_105dbc780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ed180;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_11;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x68) = 0;
  }
  _objc_release(param_11);
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



/* Entry: 105dbc970; end: 105dbcb17; -[SCPreviewFeatureTextToSpeechImpl activate] */

void FUN_105dbc970(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c083340();
  if (iVar1 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c070a20();
    if (iVar1 != 0) {
      _objc_initWeak(auStack_48,param_1);
      *(undefined1 *)(param_1 + 0x68) = 0;
      func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x38));
      puVar2 = PTR_PTR_1126ae810;
      _objc_opt_new();
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      *(undefined **)(param_1 + 0x38) = puVar2;
      _objc_release(uVar7);
      lVar3 = param_1;
      func_0x00010c26c940();
      if ((int)lVar3 != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010bf51de0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar7;
        func_0x00010c27d240();
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_50,auStack_48);
        uVar5 = uVar6;
        func_0x00010c25ff60(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1a3e0();
        _objc_release(uVar5);
        _objc_release(uVar6);
        _objc_release(uVar7);
        _objc_release(uVar4);
        _objc_destroyWeak(auStack_50);
      }
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010bf51de0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28ae40();
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_destroyWeak(auStack_48);
    }
  }
  return;
}



/* Entry: 105dbcb18; end: 105dbcb5f;  */

void FUN_105dbcb18(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedbd40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dbcb60; end: 105dbcbf3; -[SCPreviewFeatureTextToSpeechImpl snapEditor:updateLoggingWithBuilder:] */

void FUN_105dbcb60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf51de0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c26c920();
  func_0x00010c2bae60(param_4,param_2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c2bae80(param_4,param_2,*(undefined1 *)(param_1 + 0x68));
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105dbcbf4; end: 105dbcc3b; -[SCPreviewFeatureTextToSpeechImpl textToSpeechEnabled] */

undefined8 FUN_105dbcbf4(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x48);
  func_0x00010c230740();
  if ((uVar2 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c083340();
    if (iVar1 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010c070a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_isDirectorMode_1125f9c98);
      return uVar3;
    }
  }
  return 0;
}



/* Entry: 105dbcc3c; end: 105dbcd9f; -[SCPreviewFeatureTextToSpeechImpl canShowTextToSpeechUIForCaption:] */

bool FUN_105dbcc3c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c26c940();
  if ((int)uVar2 == 0) {
    bVar1 = false;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 0;
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf5ffa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0be120();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((*(byte *)(puStack_58 + 3) & 1) == 0) {
      func_0x00010bddb280();
      if ((param_1 & 1) == 0) {
        uVar4 = param_3;
        func_0x00010c0ff520(param_3);
        bVar1 = (int)uVar4 == -1;
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = false;
    }
    __Block_object_dispose(&uStack_60,8);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105dbcda0; end: 105dbcdb3;  */

void FUN_105dbcda0(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105dbcdb4; end: 105dbcddb; -[SCPreviewFeatureTextToSpeechImpl currentTtsData] */

void FUN_105dbcdb4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105dbcddc; end: 105dbce67; -[SCPreviewFeatureTextToSpeechImpl textToSpeechExistsForCaption:] */

undefined8 FUN_105dbcddc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf51de0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0ff520(param_3);
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010c27d260(uVar1,param_2,uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  return uVar3;
}



/* Entry: 105dbce68; end: 105dbcef3; -[SCPreviewFeatureTextToSpeechImpl textToSpeechPreviewExistsForCaption:] */

undefined8 FUN_105dbce68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf51de0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0ff520(param_3);
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010c27d280(uVar1,param_2,uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  return uVar3;
}



/* Entry: 105dbcef4; end: 105dbd07b; -[SCPreviewFeatureTextToSpeechImpl removeTextToSpeechForCaption:completion:] */

void FUN_105dbcef4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c083340();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6160();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2381a0();
    _objc_release(uVar2);
  }
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf51de0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ff520(param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010c12ea80(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105dbd07c; end: 105dbd13b;  */

void FUN_105dbd07c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(lVar1);
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105dbd13c; end: 105dbd207;  */

void FUN_105dbd13c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 == 0) goto LAB_105dbd1f4;
    pcVar5 = *(code **)(lVar4 + 0x10);
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(lVar2 + 8);
    func_0x00010c083340();
    if (iVar1 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x20);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c157120();
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(lVar2 + 0x18);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12cfe0();
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(lVar2 + 0x20);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13dae0();
      _objc_release(uVar3);
    }
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 == 0) goto LAB_105dbd1f4;
    pcVar5 = *(code **)(lVar4 + 0x10);
    uVar3 = 1;
  }
  (*pcVar5)(lVar4,uVar3);
LAB_105dbd1f4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105dbd208; end: 105dbd3ff; -[SCPreviewFeatureTextToSpeechImpl requestTextToSpeechForCaption:completion:] */

void FUN_105dbd208(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_68 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_70 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_60 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uVar2 = param_1;
  func_0x00010beba4e0();
  if ((uVar2 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c083340();
    if (iVar1 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f6160();
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2381a0();
      _objc_release(uVar3);
    }
    _objc_initWeak(&uStack_70,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf51de0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ff520(param_3);
    _objc_copyWeak(auStack_78,&uStack_70);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c136a60(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(&uStack_70);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105dbd400; end: 105dbd453;  */

void FUN_105dbd400(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed0600();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dbd454; end: 105dbd65b; -[SCPreviewFeatureTextToSpeechImpl requestTextToSpeechPreviewForCaption:startOffsetMs:completion:] */

void FUN_105dbd454(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uStack_68 = param_4[1];
  uStack_70 = *param_4;
  uStack_60 = param_4[2];
  uVar2 = param_1;
  func_0x00010beba4e0();
  if ((uVar2 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c083340();
    if (iVar1 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f6160();
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2381a0();
      _objc_release(uVar3);
    }
    _objc_initWeak(auStack_78,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf51de0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ff520(param_3);
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_3);
    _objc_retain(param_5);
    uStack_68 = param_4[1];
    uStack_70 = *param_4;
    uStack_60 = param_4[2];
    func_0x00010c136aa0(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105dbd65c; end: 105dbd6af;  */

void FUN_105dbd65c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed0600();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dbd6b0; end: 105dbd72f; -[SCPreviewFeatureTextToSpeechImpl commitTextToSpeechPreviewForCaption:] */

void FUN_105dbd6b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf51de0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0ff520(param_3);
  _objc_release(param_3);
  func_0x00010bf42860(uVar1,param_2,uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105dbd730; end: 105dbd77b; -[SCPreviewFeatureTextToSpeechImpl removeTextToSpeechPreview] */

void FUN_105dbd730(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf51de0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12eaa0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105dbd77c; end: 105dbd7f3; -[SCPreviewFeatureTextToSpeechImpl updateTextToSpeechPreviewStartOffset:] */

void FUN_105dbd77c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf51de0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28ae80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105dbd7f4; end: 105dbd9af; -[SCPreviewFeatureTextToSpeechImpl generateTextToSpeechPreviewForCaption:startOffset:completion:] */

void FUN_105dbd7f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c083340();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6160();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2381a0();
    _objc_release(uVar2);
  }
  _objc_initWeak(auStack_58,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf51de0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ff520(param_3);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010bfc03e0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105dbd9b0; end: 105dbda03;  */

void FUN_105dbd9b0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed0600();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dbda04; end: 105dbda5f; -[SCPreviewFeatureTextToSpeechImpl shouldIgnoreSnapdocUpdates:] */

void FUN_105dbda04(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf51de0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2007e0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105dbda60; end: 105dbdb4b; -[SCPreviewFeatureTextToSpeechImpl _captionIsOnSnapdocGlobalSegment:] */

long FUN_105dbda60(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
    func_0x00010bf926c0();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (iVar1 != 0) {
      lVar5 = param_3;
      func_0x00010c0ff520(param_3);
      func_0x00010c0df820(puVar2,param_2,lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(param_1 + 0x30);
      puVar3 = PTR_PTR_1126affe8;
      func_0x00010bfccec0(PTR_PTR_1126affe8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ff560(lVar4,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      if (lVar4 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = lVar4;
        func_0x00010bf4b900(lVar4,param_2,puVar2);
      }
      _objc_release(lVar4);
      _objc_release(puVar2);
      goto LAB_105dbdb2c;
    }
  }
  lVar5 = 0;
LAB_105dbdb2c:
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 105dbdb4c; end: 105dbdc97; -[SCPreviewFeatureTextToSpeechImpl _ttsRequestCompletedWithError:caption:completion:] */

void FUN_105dbdb4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = auStack_48;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105dbdc98; end: 105dbdd7f;  */

void FUN_105dbdc98(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 == 0) goto LAB_105dbdd6c;
    pcVar5 = *(code **)(lVar4 + 0x10);
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(lVar2 + 8);
    func_0x00010c083340();
    if (iVar1 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x20);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c157120();
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(lVar2 + 0x18);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12cfe0();
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(lVar2 + 0x20);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13dae0();
      _objc_release(uVar3);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      *(undefined1 *)(lVar2 + 0x68) = 1;
      func_0x00010beb8ee0(lVar2);
    }
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 == 0) goto LAB_105dbdd6c;
    pcVar5 = *(code **)(lVar4 + 0x10);
    uVar3 = 1;
  }
  (*pcVar5)(lVar4,uVar3);
LAB_105dbdd6c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105dbdd80; end: 105dbde7f; -[SCPreviewFeatureTextToSpeechImpl _updateMultiSnapStateWithAudioData:] */

void FUN_105dbdd80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126c4a60;
  uVar2 = param_3;
  func_0x00010c0ec5e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf63a00(puVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105dbde80; end: 105dbdff7;  */

void FUN_105dbde80(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    puVar1 = *(undefined **)(param_1 + 0x60);
    *(long *)(param_1 + 0x60) = param_2;
    _objc_release(puVar1);
    if (param_2 == 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar1 = PTR_PTR_1126c4a68;
      _objc_alloc();
      func_0x00010b056d1c();
      puVar2 = puVar1;
    }
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    func_0x00010c0f7fc0(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 105dbdff8; end: 105dbe19f; -[SCPreviewFeatureTextToSpeechImpl _showErrorDialogForCaption:completion:] */

void FUN_105dbdff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126c4a70;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105dbe1a0;
  puStack_78 = &UNK_110848378;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  uStack_70 = param_3;
  _objc_retain(param_4);
  uStack_68 = param_4;
  func_0x00010c26c9a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_58);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar1);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105dbe1a0; end: 105dbe1d3;  */

void FUN_105dbe1a0(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c136a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dbe1d4; end: 105dbe24f;  */

void FUN_105dbe1d4(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c0f3ce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0f3d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10eda0();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dbe250; end: 105dbe447; -[SCPreviewFeatureTextToSpeechImpl _showPermissionsDialogForCaptionIfNeeded:isPreview:startOffsetMs:completion:] */

uint FUN_105dbe250(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beecbe0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    _objc_initWeak(auStack_68,param_1);
    puVar3 = PTR_PTR_1126c4a70;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_105dbe448;
    puStack_a8 = &UNK_1108e90d0;
    _objc_copyWeak(auStack_90,auStack_68);
    uStack_70 = param_4;
    _objc_retain(param_3);
    uStack_80 = param_5[1];
    uStack_88 = *param_5;
    uStack_78 = param_5[2];
    uStack_a0 = param_3;
    _objc_retain(param_6);
    uStack_98 = param_6;
    func_0x00010c26c9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_c8,auStack_68);
    _objc_retain(puVar3);
    func_0x00010c0f7fc0(puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_c8);
    _objc_release(puVar3);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105dbe448; end: 105dbe5cb;  */

void FUN_105dbe448(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105dbe5cc;
    puStack_70 = &UNK_1108434b0;
    _objc_copyWeak(auStack_68,param_1 + 0x30);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    uStack_90 = *(undefined1 *)(param_1 + 0x50);
    _objc_copyWeak(auStack_b0,param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uStack_a0 = *(undefined8 *)(param_1 + 0x40);
    uStack_a8 = *(undefined8 *)(param_1 + 0x38);
    uStack_98 = *(undefined8 *)(param_1 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    func_0x00010c0f8520(uVar2);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105dbe5cc; end: 105dbe61b;  */

void FUN_105dbe5cc(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160d80();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dbe61c; end: 105dbe72b;  */

void FUN_105dbe61c(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  cVar1 = *(char *)(param_1 + 0x50);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  if (cVar1 == '\x01') {
    uStack_48 = *(undefined8 *)(param_1 + 0x40);
    uStack_50 = *(undefined8 *)(param_1 + 0x38);
    uStack_40 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c136a80(lVar2,param_2,*(undefined8 *)(param_1 + 0x20),&uStack_50,
                        *(undefined8 *)(param_1 + 0x28));
    _objc_release(lVar2);
    return;
  }
  func_0x00010c136a40(lVar2,param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28))
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105dbe72c; end: 105dbe743; -[SCPreviewFeatureTextToSpeechImpl parentViewControllerDelegate] */

void FUN_105dbe72c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105dbe744; end: 105dbe74f; -[SCPreviewFeatureTextToSpeechImpl setParentViewControllerDelegate:] */

void FUN_105dbe744(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 105dbe750; end: 105dbe7ff; -[SCPreviewFeatureTextToSpeechImpl .cxx_destruct] */

void FUN_105dbe750(long param_1)

{
  _objc_destroyWeak(param_1 + 0x70);
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



/* Entry: 105dbe800; end: 105dbe997; -[SCPreviewFeatureTextToSpeechServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dbe800(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_1 + _DAT_112736640;
    _objc_loadWeakRetained();
  }
  uVar1 = uVar5;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar5 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c4a80;
  _objc_alloc(PTR_PTR_1126c4a80);
  func_0x00010c051b20();
  uVar6 = 0;
  if (param_1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_11273664c);
  }
  _objc_retain(uVar6);
  func_0x00010bf9d660(uVar6);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar5);
  return;
}



/* Entry: 105dbe998; end: 105dbebbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dbe998(long param_1,undefined8 param_2)

{
  long lVar1;
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
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar17 = PTR_PTR_1126c4a78;
    _objc_alloc();
    uVar16 = *(undefined8 *)(param_1 + 0x20);
    lVar18 = (long)_DAT_112736630;
    lVar2 = lVar1 + lVar18;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c240640();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1 + _DAT_112736634;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1 + _DAT_112736638;
    _objc_loadWeakRetained();
    lVar7 = lVar1 + _DAT_11273663c;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1 + _DAT_112736640;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar1 + lVar18;
    _objc_loadWeakRetained();
    lVar11 = lVar18;
    func_0x00010c08f640();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar1 + _DAT_112736644;
    _objc_loadWeakRetained();
    lVar13 = lVar12;
    func_0x00010bf0f020();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar1 + _DAT_112736648;
    _objc_loadWeakRetained();
    lVar15 = lVar14;
    func_0x00010c26b280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c039940(puVar17,param_2,uVar16,lVar3,lVar5,lVar6,lVar8,lVar10,lVar11,lVar13,lVar15);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar18);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 105dbebc0; end: 105dbec43; -[SCPreviewFeatureTextToSpeechServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dbebc0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273664c,0);
  _objc_destroyWeak(param_1 + _DAT_112736648);
  _objc_destroyWeak(param_1 + _DAT_112736644);
  _objc_destroyWeak(param_1 + _DAT_11273663c);
  _objc_destroyWeak(param_1 + _DAT_112736634);
  _objc_destroyWeak(param_1 + _DAT_112736638);
  _objc_destroyWeak(param_1 + _DAT_112736630);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112736640);
  return;
}


