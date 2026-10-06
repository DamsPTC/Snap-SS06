/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b82c01c; end: 10b82c08b; -[SIGActionSheetSubscribeButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82c01c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112794520,0);
  _objc_storeStrong(param_1 + _DAT_112794518,0);
  _objc_storeStrong(param_1 + _DAT_112794524,0);
  _objc_storeStrong(param_1 + _DAT_112794514,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794510,0);
  return;
}



/* Entry: 10b82c08c; end: 10b82c0ef; -[SIGActionSheetTransition init] */

undefined1 * FUN_10b82c08c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b3a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIPercentDrivenInteractiveTransition_1126c2cb8;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b82c0f0; end: 10b82c19f; -[SIGActionSheetTransition installPullToDismissGestureRecognizerOnView:] */

void FUN_10b82c0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c050900();
  func_0x00010c1ec5c0();
  func_0x00010c178280(puVar1,param_2,0);
  func_0x00010c18b5a0(puVar1,param_2,0);
  func_0x00010c18b5c0(puVar1,param_2,0);
  func_0x00010c18b5e0(puVar1,param_2,param_1);
  func_0x00010c1c3c20(puVar1,param_2,1);
  func_0x00010bef9040(param_3,param_2,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b82c1a0; end: 10b82c44f; -[SIGActionSheetTransition _pullToDismissGestureUpdated:] */

void FUN_10b82c1a0(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27adc0(param_5);
  dVar6 = param_2;
  _objc_release(lVar2);
  _objc_release(lVar1);
  dVar8 = *(double *)(param_3 + 0x20);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  dVar5 = param_1;
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297a00(param_5);
  dVar7 = dVar6;
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27adc0(param_5);
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c252440();
  if (lVar1 < 3) {
    if (lVar1 == 1) {
      *(undefined1 *)(param_3 + 0x18) = 1;
      *(double *)(param_3 + 0x20) = param_2;
      param_3 = param_3 + 0x28;
      _objc_loadWeakRetained(param_3);
      lVar1 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef080(param_3);
      _objc_release(lVar1);
      _objc_release(param_3);
    }
    else if (lVar1 == 2) {
      param_1 = (param_2 - dVar8) / param_1;
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      dVar5 = 1.0;
      if (param_1 <= 1.0) {
        dVar5 = param_1;
      }
      func_0x00010c286a00(dVar5,*(undefined8 *)(param_3 + 0x10));
    }
  }
  else {
    if (lVar1 == 3) {
      if ((dVar7 / dVar5 <= 0.2) || (dVar6 <= 0.0)) {
        func_0x00010bf2e5a0(*(undefined8 *)(param_3 + 0x10));
      }
      else {
        uVar3 = param_3 + 0x28;
        _objc_loadWeakRetained();
        uVar4 = uVar3;
        _objc_opt_respondsToSelector();
        _objc_release(uVar3);
        if ((uVar4 & 1) != 0) {
          lVar1 = param_3 + 0x28;
          _objc_loadWeakRetained(lVar1);
          lVar2 = param_5;
          func_0x00010c29bf00(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef060(lVar1);
          _objc_release(lVar2);
          _objc_release(lVar1);
        }
        func_0x00010bfaf8e0(*(undefined8 *)(param_3 + 0x10));
      }
    }
    else if (lVar1 != 4) goto LAB_10b82c430;
    *(undefined1 *)(param_3 + 0x18) = 0;
    *(undefined8 *)(param_3 + 0x20) = 0;
  }
LAB_10b82c430:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10b82c450; end: 10b82c48b; -[SIGActionSheetTransition interactionControllerForDismissal:] */

void FUN_10b82c450(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(uVar1);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b82c48c; end: 10b82c4bb; -[SIGActionSheetTransition animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_10b82c48c(void)

{
  _objc_alloc(PTR_PTR_1126e1690);
  func_0x00010c055440(0x3fc999999999999a,0x3fd999999999999a);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b82c4bc; end: 10b82c4eb; -[SIGActionSheetTransition animationControllerForDismissedController:] */

void FUN_10b82c4bc(void)

{
  _objc_alloc(PTR_PTR_1126e1698);
  func_0x00010c055440(0x3fc999999999999a,0x3fd999999999999a);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b82c4ec; end: 10b82c4f3; -[SIGActionSheetTransition gestureRecognizer:shouldReceivePress:] */

undefined8 FUN_10b82c4ec(void)

{
  return 0;
}



/* Entry: 10b82c4f4; end: 10b82c4fb; -[SIGActionSheetTransition gestureRecognizer:shouldReceiveTouch:] */

undefined8 FUN_10b82c4f4(void)

{
  return 1;
}



/* Entry: 10b82c4fc; end: 10b82c503; -[SIGActionSheetTransition gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

undefined8 FUN_10b82c4fc(void)

{
  return 0;
}



/* Entry: 10b82c504; end: 10b82c50b; -[SIGActionSheetTransition gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

undefined8 FUN_10b82c504(void)

{
  return 0;
}



/* Entry: 10b82c50c; end: 10b82c513; -[SIGActionSheetTransition gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_10b82c50c(void)

{
  return 0;
}



/* Entry: 10b82c514; end: 10b82c52b; -[SIGActionSheetTransition delegate] */

void FUN_10b82c514(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b82c52c; end: 10b82c537; -[SIGActionSheetTransition setDelegate:] */

void FUN_10b82c52c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 10b82c538; end: 10b82c53f; -[SIGActionSheetTransition height] */

undefined8 FUN_10b82c538(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b82c540; end: 10b82c547; -[SIGActionSheetTransition setHeight:] */

void FUN_10b82c540(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 10b82c548; end: 10b82c573; -[SIGActionSheetTransition .cxx_destruct] */

void FUN_10b82c548(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b82c574; end: 10b82c5bf; +[SIGActionButton actionButtonWithTitle:] */

void FUN_10b82c574(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c2580;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c216240();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b82c5c0; end: 10b82c90b; -[SIGActionButton init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b82c5c0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puVar6;
  
  puVar2 = &uStack_70;
  puStack_68 = PTR_PTR_11270b3a8;
  uVar9 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  uStack_70 = param_1;
  _objc_msgSendSuper2(uVar9,uVar10,uVar11,uVar12,&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined1 *)puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4039000000000000);
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x4008000000000000);
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4020000000000000);
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3d8f5c29);
    _objc_release(puVar3);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar3 = (undefined1 *)puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(puVar3);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    FUN_10b83340c(0x88);
    func_0x00010c23ba80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar4);
    func_0x00010c219b60(puVar2);
    func_0x00010c160fc0(puVar2);
    puVar5 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
    func_0x00010c219b60();
    puVar6 = puVar5;
    func_0x00010c21ad00();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    iVar1 = (int)puVar6;
    func_0x00010b88a460();
    if ((iVar1 != 0) && (lRam00000001138466f0 < 3)) {
      plVar7 = (long *)&UNK_10e5f30e8;
      do {
        lVar8 = *plVar7;
        if (lVar8 == 0) goto LAB_10b82c7f8;
        plVar7 = plVar7 + 1;
      } while (lVar8 != 0x88);
      plVar7 = (long *)&UNK_10e5f3128;
      do {
        lVar8 = *plVar7;
        if (lVar8 == 0xd5) break;
        plVar7 = plVar7 + 1;
      } while (lVar8 != 0);
    }
LAB_10b82c7f8:
    func_0x00010c23ba80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar5);
    _objc_release(puVar4);
    func_0x00010c1cfce0(puVar5);
    func_0x00010c213040(puVar5);
    uVar9 = *(undefined8 *)((long)puVar2 + (long)_DAT_11279453c);
    *(undefined **)((long)puVar2 + (long)_DAT_11279453c) = puVar5;
    _objc_retain(puVar5);
    _objc_release(uVar9);
    func_0x00010befbb60(puVar2);
    puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  return (undefined1 *)puVar2;
}



/* Entry: 10b82c90c; end: 10b82ca2b; -[SIGActionButton setEnabled:] */

void FUN_10b82c90c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b3a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setEnabled__112642f38);
  func_0x00010bf03400(0x3fc3333333333333,PTR__OBJC_CLASS___UIView_1126aec20);
  return;
}



/* Entry: 10b82ca2c; end: 10b82ca8b; -[SIGActionButton intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82ca2c(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_4;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c23d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3 + -40.0,0,*(undefined8 *)(param_4 + _DAT_11279453c),
             PTR_s_sizeThatFits__11266cf90);
  return;
}



/* Entry: 10b82ca8c; end: 10b82ceb3; -[SIGActionButton didMoveToWindow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82ca8c(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b8 = PTR_PTR_11270b3a8;
  lStack_c0 = param_5;
  _objc_msgSendSuper2(&lStack_c0,PTR_s_didMoveToWindow_112527020);
  lVar2 = param_5;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_5;
    func_0x00010c2a71e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd5520(param_5);
    lVar5 = lVar2;
    func_0x00010bf493c0(-param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = (long)_DAT_112794544;
    uVar14 = *(undefined8 *)(param_5 + lVar16);
    *(long *)(param_5 + lVar16) = lVar5;
    _objc_release(uVar14);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_5;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_5;
    func_0x00010c2a71e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08cee0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uStack_b0 = *(undefined8 *)(param_5 + lVar16);
    lVar2 = param_5;
    lStack_a8 = lVar3;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_5;
    func_0x00010c262ca0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar17 = -20.0;
    _objc_release(lVar4);
    func_0x00010c0699c0(param_5);
    dVar19 = 150.0;
    dVar18 = param_3 + -20.0;
    if (dVar17 + 150.0 <= param_3 + -20.0) {
      dVar18 = dVar17 + 150.0;
    }
    lVar4 = lVar2;
    func_0x00010bf49420(dVar18);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_5;
    lStack_a0 = lVar4;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_5;
    func_0x00010c262ca0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(lVar6);
    func_0x00010c0699c0(param_5);
    if (dVar19 + 30.0 <= param_4) {
      param_4 = dVar19 + 30.0;
    }
    lVar6 = lVar5;
    func_0x00010bf49420(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = (long)_DAT_11279453c;
    uVar7 = *(undefined8 *)(param_5 + lVar15);
    lStack_98 = lVar6;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_5;
    func_0x00010bf34860(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_5 + lVar15);
    uStack_90 = uVar14;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_5 + lVar15);
    uStack_88 = uVar10;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_80 = uVar12;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(param_5);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(lVar9);
    _objc_release(uVar8);
    _objc_release(uVar14);
    _objc_release(lVar16);
    _objc_release(uVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x00010bf495c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65be0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10b82ceb4; end: 10b82cef3; -[SIGActionButton willMoveToSuperview:] */

void FUN_10b82ceb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x00010bf495c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65be0(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b82cef4; end: 10b82cfef; -[SIGActionButton layoutSubviews] */

void FUN_10b82cef4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_11270b3a8;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_layoutSubviews_112600e60);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(param_5);
  uVar1 = param_5;
  uVar3 = param_1;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf525a0();
  func_0x00010bf19a00(param_1,param_2,param_3,param_4,uVar3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_retainAutorelease(puVar2);
  func_0x00010bdc1040();
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(param_5);
  _objc_release(puVar2);
  return;
}



/* Entry: 10b82cff0; end: 10b82d047; -[SIGActionButton setTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82cff0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x00010bf51e00(param_3);
  lVar1 = (long)_DAT_11279453c;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar1));
  _objc_release(param_3);
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return;
}



/* Entry: 10b82d048; end: 10b82d057; -[SIGActionButton title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82d048(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11279453c),PTR_s_text_1126787e8);
  return;
}



/* Entry: 10b82d058; end: 10b82d0bb; -[SIGActionButton setBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82d058(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf51e00();
  lVar2 = (long)_DAT_112794540;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_11270b3a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setBackgroundColor__112639330,
                      *(undefined8 *)(param_1 + lVar2));
  return;
}



/* Entry: 10b82d0bc; end: 10b82d157; -[SIGActionButton traitCollectionDidChange:] */

void FUN_10b82d0bc(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_11270b3a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_traitCollectionDidChange__11267bf88);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740();
  _objc_release(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 10b82d158; end: 10b82d1a7; -[SIGActionButton _bottomMargin] */

double FUN_10b82d158(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c148fc0();
  _objc_release(param_4);
  return param_3 + 10.0;
}



/* Entry: 10b82d1a8; end: 10b82d2ef; -[SIGActionButton _keyboardWillShow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82d1a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_7);
  uVar1 = param_7;
  func_0x00010c292820(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_7;
  func_0x00010c292820(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c067fc0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_7;
  func_0x00010c292820(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  uVar2 = uVar1;
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1080();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c181140(-20.0 - param_4,*(undefined8 *)(param_5 + _DAT_112794544));
                    /* WARNING: Could not recover jumptable at 0x00010bedd890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_5,PTR_s__updatePositionRelativeToKeyboar_112594fc8,uVar3);
  return;
}



/* Entry: 10b82d2f0; end: 10b82d3eb; -[SIGActionButton _keyboardWillHide:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82d2f0(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c292820(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  dVar4 = param_1;
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c292820(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = uVar1;
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c067fc0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bdd5520(param_2);
  func_0x00010c181140(-dVar4,*(undefined8 *)(param_2 + _DAT_112794544));
                    /* WARNING: Could not recover jumptable at 0x00010bedd890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,PTR_s__updatePositionRelativeToKeyboar_112594fc8,uVar3);
  return;
}



/* Entry: 10b82d3ec; end: 10b82d457; -[SIGActionButton _updatePositionRelativeToKeyboardWithDuration:curve:] */

void FUN_10b82d3ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b82d458;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_2;
  func_0x00010bf03440(param_1,0,PTR__OBJC_CLASS___UIView_1126aec20,param_3,param_4 << 0x10 | 4,
                      &puStack_38,0);
  return;
}



/* Entry: 10b82d458; end: 10b82d48b;  */

void FUN_10b82d458(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c262ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b82d48c; end: 10b82d4db; -[SIGActionButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82d48c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112794540,0);
  _objc_storeStrong(param_1 + _DAT_11279453c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794544,0);
  return;
}



/* Entry: 10b82d4dc; end: 10b82d69f; -[SIGButtonModel modelWithOverrides:] */

void FUN_10b82d4dc(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined1 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e16a0;
  _objc_alloc_init(PTR_PTR_1126e16a0);
  uVar4 = param_3;
  func_0x00010beed360();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  if (uVar4 == 0) {
    uVar3 = *(ulong *)(param_1 + 0x10);
  }
  func_0x00010c161280(puVar1,param_2,uVar3);
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  if (uVar4 == 0) {
    uVar3 = *(ulong *)(param_1 + 0x18);
  }
  func_0x00010c1a9f00(puVar1,param_2,uVar3);
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010bfe8e00();
  if (uVar4 == 0) {
    uVar4 = *(ulong *)(param_1 + 0x20);
  }
  func_0x00010c1aab20(puVar1,param_2,uVar4);
  uVar4 = param_3;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  if (uVar4 == 0) {
    uVar3 = *(ulong *)(param_1 + 0x28);
  }
  func_0x00010c216240(puVar1,param_2,uVar3);
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c271240();
  if (uVar4 == 0) {
    uVar4 = *(ulong *)(param_1 + 0x30);
  }
  func_0x00010c216360(puVar1,param_2,uVar4);
  uVar4 = param_3;
  func_0x00010bf13d40();
  if (uVar4 == 0) {
    uVar4 = *(ulong *)(param_1 + 0x38);
  }
  func_0x00010c16e440(puVar1,param_2,uVar4);
  uVar4 = param_3;
  func_0x00010c249ee0();
  if (uVar4 == 0) {
    uVar4 = *(ulong *)(param_1 + 0x40);
  }
  func_0x00010c207e40(puVar1,param_2,uVar4);
  uVar4 = param_3;
  func_0x00010bf1fb20();
  if (uVar4 == 0) {
    uVar4 = *(ulong *)(param_1 + 0x48);
  }
  func_0x00010c173280(puVar1,param_2,uVar4);
  func_0x00010bf1fc80(param_3);
  func_0x00010c1733a0(puVar1);
  uVar4 = param_3;
  func_0x00010bfdbf60();
  if ((uVar4 & 1) == 0) {
    uVar2 = *(undefined1 *)(param_1 + 8);
  }
  else {
    uVar2 = 1;
  }
  func_0x00010c1a6d20(puVar1,param_2,uVar2);
  uVar4 = param_3;
  func_0x00010bf015c0();
  if ((uVar4 & 1) == 0) {
    uVar2 = *(undefined1 *)(param_1 + 9);
  }
  else {
    uVar2 = 1;
  }
  func_0x00010c1672e0(puVar1,param_2,uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b82d6a0; end: 10b82d6a7; -[SIGButtonModel accessoryView] */

undefined8 FUN_10b82d6a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b82d6a8; end: 10b82d6d7; -[SIGButtonModel setAccessoryView:] */

void FUN_10b82d6a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b82d6d8; end: 10b82d6df; -[SIGButtonModel image] */

undefined8 FUN_10b82d6d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b82d6e0; end: 10b82d6e7; -[SIGButtonModel setImage:] */

void FUN_10b82d6e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b82d6e8; end: 10b82d6ef; -[SIGButtonModel imageTintColor] */

undefined8 FUN_10b82d6e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b82d6f0; end: 10b82d6f7; -[SIGButtonModel setImageTintColor:] */

void FUN_10b82d6f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b82d6f8; end: 10b82d6ff; -[SIGButtonModel title] */

undefined8 FUN_10b82d6f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b82d700; end: 10b82d707; -[SIGButtonModel setTitle:] */

void FUN_10b82d700(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b82d708; end: 10b82d70f; -[SIGButtonModel titleColor] */

undefined8 FUN_10b82d708(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b82d710; end: 10b82d717; -[SIGButtonModel setTitleColor:] */

void FUN_10b82d710(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10b82d718; end: 10b82d71f; -[SIGButtonModel backgroundColor] */

undefined8 FUN_10b82d718(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b82d720; end: 10b82d727; -[SIGButtonModel setBackgroundColor:] */

void FUN_10b82d720(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 10b82d728; end: 10b82d72f; -[SIGButtonModel spinnerColor] */

undefined8 FUN_10b82d728(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b82d730; end: 10b82d737; -[SIGButtonModel setSpinnerColor:] */

void FUN_10b82d730(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 10b82d738; end: 10b82d73f; -[SIGButtonModel borderColor] */

undefined8 FUN_10b82d738(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b82d740; end: 10b82d747; -[SIGButtonModel setBorderColor:] */

void FUN_10b82d740(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 10b82d748; end: 10b82d74f; -[SIGButtonModel borderWidth] */

undefined8 FUN_10b82d748(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b82d750; end: 10b82d757; -[SIGButtonModel setBorderWidth:] */

void FUN_10b82d750(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x50) = param_1;
  return;
}



/* Entry: 10b82d758; end: 10b82d75f; -[SIGButtonModel hasShadow] */

undefined1 FUN_10b82d758(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b82d760; end: 10b82d767; -[SIGButtonModel setHasShadow:] */

void FUN_10b82d760(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b82d768; end: 10b82d76f; -[SIGButtonModel allowTwoLineButtonText] */

undefined1 FUN_10b82d768(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b82d770; end: 10b82d777; -[SIGButtonModel setAllowTwoLineButtonText:] */

void FUN_10b82d770(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10b82d778; end: 10b82d7b3; -[SIGButtonModel .cxx_destruct] */

void FUN_10b82d778(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b82d7b4; end: 10b82da7f; -[SIGButtonAccessoryView initWithType:] */

/* WARNING: Possible PIC construction at 0x00010b82daa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b82daa4) */
/* WARNING: Removing unreachable block (ram,0x00010b82daa8) */
/* WARNING: Removing unreachable block (ram,0x00010b82daac) */
/* WARNING: Removing unreachable block (ram,0x00010b82dab0) */
/* WARNING: Removing unreachable block (ram,0x00010b82dab4) */
/* WARNING: Removing unreachable block (ram,0x00010b82daf4) */
/* WARNING: Removing unreachable block (ram,0x00010b82dacc) */
/* WARNING: Removing unreachable block (ram,0x00010b82dafc) */
/* WARNING: Removing unreachable block (ram,0x00010b82db00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b82d7b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_11270b3b0;
  puVar17 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar17,
                      PTR_s_initWithFrame__1125e2948);
  puVar4 = (undefined *)0x0;
  if (puVar17 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar17 + (long)_DAT_112794584) = param_3;
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    uVar3 = *(undefined8 *)((long)puVar17 + (long)_DAT_112794588);
    *(undefined **)((long)puVar17 + (long)_DAT_112794588) = puVar2;
    _objc_release(uVar3);
    _objc_retain(puVar2);
    func_0x00010c219b60(puVar2);
    func_0x00010c182220(puVar2);
    func_0x00010befbb60(puVar17);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar17;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    puStack_88 = puVar6;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar17;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar2;
    puStack_80 = puVar9;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar17;
    func_0x00010c08e400(puVar17);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar2;
    puStack_78 = puVar12;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar17;
    func_0x00010c1408a0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar15;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar17 = *(undefined8 **)(puVar4 + _DAT_11279458c);
    if (puVar17 == (undefined8 *)0x0) {
      puVar17 = *(undefined8 **)(puVar4 + _DAT_112794588);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar17,PTR_s_intrinsicContentSize_1125f8080);
    return puVar17;
  }
  return puVar17;
}



/* Entry: 10b82da80; end: 10b82db0b; -[SIGButtonAccessoryView intrinsicContentSize] */

/* WARNING: Possible PIC construction at 0x00010b82daa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b82daa4) */
/* WARNING: Removing unreachable block (ram,0x00010b82daa8) */
/* WARNING: Removing unreachable block (ram,0x00010b82daac) */
/* WARNING: Removing unreachable block (ram,0x00010b82dab0) */
/* WARNING: Removing unreachable block (ram,0x00010b82dab4) */
/* WARNING: Removing unreachable block (ram,0x00010b82daf4) */
/* WARNING: Removing unreachable block (ram,0x00010b82dacc) */
/* WARNING: Removing unreachable block (ram,0x00010b82dafc) */
/* WARNING: Removing unreachable block (ram,0x00010b82db00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82da80(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11279458c);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + _DAT_112794588);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0699d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_intrinsicContentSize_1125f8080);
  return;
}



/* Entry: 10b82db0c; end: 10b82ddbf; -[SIGButtonAccessoryView setAccessoryView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82db0c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
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
  undefined *puVar14;
  long lVar15;
  long lVar16;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar16 = (long)_DAT_11279458c;
  if (*(long *)(param_1 + lVar16) != param_3) {
    func_0x00010c12c960();
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar16);
    *(long *)(param_1 + lVar16) = param_3;
    _objc_release(uVar2);
    if (param_3 != 0) {
      func_0x00010c219b60(param_3);
      func_0x00010befbb60(param_1);
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      lVar16 = param_3;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar16;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_3;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_1;
      func_0x00010c08e400(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_3;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = param_1;
      func_0x00010c1408a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar11;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1);
      _objc_release(puVar14);
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
      _objc_release(lVar16);
      lVar16 = (long)_DAT_112794588;
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar16));
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar16));
    }
    func_0x00010c069fa0(param_1);
    func_0x00010c1cbe20(param_1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfe6ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + _DAT_112794588),PTR_s_image_1125d7478);
  return;
}



/* Entry: 10b82ddc0; end: 10b82ddcf; -[SIGButtonAccessoryView image] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82ddc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe6ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794588),PTR_s_image_1125d7478);
  return;
}



/* Entry: 10b82ddd0; end: 10b82de77; -[SIGButtonAccessoryView setImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82ddd0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112794588;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != param_3) {
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar3),param_2,param_3);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,param_3 == 0);
    if (param_3 != 0) {
      lVar1 = (long)_DAT_11279458c;
      func_0x00010c12c960(*(undefined8 *)(param_1 + lVar1));
      uVar2 = *(undefined8 *)(param_1 + lVar1);
      *(undefined8 *)(param_1 + lVar1) = 0;
      _objc_release(uVar2);
    }
    func_0x00010c069fa0(param_1);
    func_0x00010c1cbe20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b82de78; end: 10b82de87; -[SIGButtonAccessoryView imageTintColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82de78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c270f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794588),PTR_s_tintColor_112679df0);
  return;
}



/* Entry: 10b82de88; end: 10b82de97; -[SIGButtonAccessoryView setImageTintColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82de88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c216170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112794588),PTR_s_setTintColor__112663280);
  return;
}



/* Entry: 10b82de98; end: 10b82dea7; -[SIGButtonAccessoryView accessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b82de98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279458c);
}



/* Entry: 10b82dea8; end: 10b82dee7; -[SIGButtonAccessoryView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82dea8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11279458c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112794588,0);
  return;
}



/* Entry: 10b82dee8; end: 10b82df17; +[SIGButton buttonWithType:] */

void FUN_10b82dee8(void)

{
  _objc_alloc(PTR_PTR_1126e16a8);
  func_0x00010c055880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b82df18; end: 10b82df73; +[SIGButton buttonWithType:customizeLabelBlock:] */

void FUN_10b82df18(void)

{
  undefined *puVar1;
  undefined8 in_x3;
  
  puVar1 = PTR_PTR_1126e16a8;
  _objc_retain(in_x3);
  _objc_alloc(puVar1);
  func_0x00010c055a00();
  _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b82df74; end: 10b82e45f; -[SIGButton initWithType:customizeLabelBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b82df74(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_a0;
  undefined *puStack_98;
  
  puVar1 = &uStack_a0;
  _objc_retain(param_4);
  puStack_98 = PTR_PTR_11270b3b8;
  uVar11 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  uStack_a0 = param_1;
  _objc_msgSendSuper2(uVar11,uVar12,uVar13,uVar14,&uStack_a0,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_112794590) = 1;
    *(bool *)((long)puVar1 + (long)_DAT_112794594) = param_3 == 0;
    *(long *)((long)puVar1 + (long)_DAT_112794598) = param_3;
    func_0x00010c198860(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11279459c);
    *(undefined **)((long)puVar1 + (long)_DAT_11279459c) = puVar2;
    _objc_release(uVar3);
    _objc_retain(puVar2);
    func_0x00010c1c3080(puVar2);
    func_0x00010c21b4a0(puVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    lVar10 = (long)_DAT_1127945a0;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined **)((long)puVar1 + lVar10) = puVar4;
    _objc_release(uVar3);
    lVar5 = param_3;
    FUN_10b82e460(param_3,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)((long)puVar1 + lVar10));
    _objc_release(lVar5);
    lVar5 = param_3;
    FUN_10b82e460(param_3,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)((long)puVar1 + lVar10));
    _objc_release(lVar5);
    uVar3 = 0x4039000000000000;
    if (param_3 - 2U < 3) {
      uVar3 = *(undefined8 *)(&UNK_10e5f2fc0 + (param_3 - 2U) * 8);
    }
    puVar6 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(uVar3);
    _objc_release(puVar6);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar10);
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf13d40();
    FUN_10b83340c();
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar4);
    func_0x00010bedfc40(puVar1);
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar11,uVar12,uVar13,uVar14);
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127945a4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127945a4) = puVar4;
    _objc_release(uVar3);
    _objc_retain(puVar4);
    func_0x00010c219b60(puVar4);
    func_0x00010c21e900(puVar4);
    puVar7 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127945a8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127945a8) = puVar7;
    _objc_release(uVar3);
    _objc_retain(puVar7);
    func_0x00010c219b60(puVar7);
    puVar8 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar11,uVar12,uVar13,uVar14);
    uVar11 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127945ac);
    *(undefined **)((long)puVar1 + (long)_DAT_1127945ac) = puVar8;
    _objc_release(uVar11);
    _objc_retain(puVar8);
    func_0x00010c219b60(puVar8);
    func_0x00010c21ad00(puVar8);
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,puVar8);
    }
    puVar9 = PTR_PTR_1126e16b0;
    _objc_alloc();
    func_0x00010c055880();
    uVar11 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127945b0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127945b0) = puVar9;
    _objc_release(uVar11);
    _objc_retain(puVar9);
    func_0x00010c219b60(puVar9);
    func_0x00010c21e900(puVar9);
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(puVar4);
    func_0x00010befbb60(puVar4);
    func_0x00010befbb60(puVar4);
    func_0x00010beb13a0(puVar1);
    func_0x00010befbd60(puVar1);
    func_0x00010befbd60(puVar1);
    func_0x00010befbd60(puVar1);
    func_0x00010befbd60(puVar1);
    func_0x00010befbd60(puVar1);
    func_0x00010befbd60(puVar1);
    _objc_release(puVar9);
    func_0x00010bed85c0(puVar1);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b82e460; end: 10b82e587;  */

void FUN_10b82e460(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if ((long)param_1 < 3) {
    if (1 < param_1) {
      if (param_1 != 2) goto LAB_10b82e578;
LAB_10b82e4ec:
      if (param_2 != 4) goto LAB_10b82e4f4;
      puVar1 = PTR_PTR_1126e16a0;
      _objc_alloc_init(PTR_PTR_1126e16a0);
      func_0x00010c1aab20();
      func_0x00010c216360(puVar1);
      func_0x00010c16e440(puVar1);
      goto LAB_10b82e574;
    }
    if ((param_2 & 3) == 0) {
      puVar1 = PTR_PTR_1126e16a0;
      _objc_alloc_init(PTR_PTR_1126e16a0);
      func_0x00010c1aab20();
      func_0x00010c216360(puVar1);
      func_0x00010c16e440(puVar1);
      func_0x00010c207e40(puVar1);
      func_0x00010c1a6d20(puVar1);
      goto LAB_10b82e578;
    }
  }
  else {
    if (param_1 == 3) goto LAB_10b82e4ec;
    if (param_1 != 4) goto LAB_10b82e578;
LAB_10b82e4f4:
    if (param_2 == 0) {
      puVar1 = PTR_PTR_1126e16a0;
      _objc_alloc_init(PTR_PTR_1126e16a0);
      func_0x00010c1aab20();
      func_0x00010c216360(puVar1);
      func_0x00010c16e440(puVar1);
LAB_10b82e574:
      func_0x00010c207e40(puVar1);
      goto LAB_10b82e578;
    }
  }
  puVar1 = (undefined *)0x0;
LAB_10b82e578:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b82e588; end: 10b82e58f; -[SIGButton initWithType:] */

void FUN_10b82e588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c055a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithType_customizeLabelBlock_1125f3090,param_3,0);
  return;
}



/* Entry: 10b82e590; end: 10b82e6bf; -[SIGButton setAccessoryView:forState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82e590(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_1127945a0;
  puVar4 = *(undefined **)(param_1 + lVar6);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(puVar4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar4;
  func_0x00010beed360();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c071ae0();
  _objc_release(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126e16a0;
      _objc_alloc_init(PTR_PTR_1126e16a0);
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar5,param_2,puVar4,puVar1);
      _objc_release(puVar1);
    }
    func_0x00010c161280(puVar4,param_2,param_3);
    uVar3 = param_1;
    func_0x00010c252440();
    if ((param_4 & (uVar3 ^ 0xffffffffffffffff)) == 0) {
      func_0x00010bed85c0(param_1);
    }
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b82e6c0; end: 10b82e6df; -[SIGButton setAccessoryPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82e6c0(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_112794574) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_112794574) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bed85d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateForState_112593b18);
  return;
}



/* Entry: 10b82e6e0; end: 10b82e80f; -[SIGButton setImage:forState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82e6e0(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_1127945a0;
  puVar4 = *(undefined **)(param_1 + lVar6);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(puVar4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar4;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c071ae0();
  _objc_release(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126e16a0;
      _objc_alloc_init(PTR_PTR_1126e16a0);
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar5,param_2,puVar4,puVar1);
      _objc_release(puVar1);
    }
    func_0x00010c1a9f00(puVar4,param_2,param_3);
    uVar3 = param_1;
    func_0x00010c252440();
    if ((param_4 & (uVar3 ^ 0xffffffffffffffff)) == 0) {
      func_0x00010bed85c0(param_1);
    }
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b82e810; end: 10b82e93f; -[SIGButton setTitle:forState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82e810(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_1127945a0;
  puVar4 = *(undefined **)(param_1 + lVar6);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(puVar4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar4;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c071ae0();
  _objc_release(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126e16a0;
      _objc_alloc_init(PTR_PTR_1126e16a0);
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar5,param_2,puVar4,puVar1);
      _objc_release(puVar1);
    }
    func_0x00010c216240(puVar4,param_2,param_3);
    uVar3 = param_1;
    func_0x00010c252440();
    if ((param_4 & (uVar3 ^ 0xffffffffffffffff)) == 0) {
      func_0x00010bed85c0(param_1);
    }
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b82e940; end: 10b82e9c3; -[SIGButton setBackgroundColor:forState:] */

void FUN_10b82e940(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea21a0(param_1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c252440();
  if ((param_4 & (uVar2 ^ 0xffffffffffffffff)) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bed85d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateForState_112593b18);
    return;
  }
  return;
}



/* Entry: 10b82e9c4; end: 10b82ea47; -[SIGButton setTitleColor:forState:] */

void FUN_10b82e9c4(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea8780(param_1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c252440();
  if ((param_4 & (uVar2 ^ 0xffffffffffffffff)) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bed85d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateForState_112593b18);
    return;
  }
  return;
}



/* Entry: 10b82ea48; end: 10b82eacb; -[SIGButton setBorderColor:forState:] */

void FUN_10b82ea48(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea2500(param_1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c252440();
  if ((param_4 & (uVar2 ^ 0xffffffffffffffff)) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bed85d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateForState_112593b18);
    return;
  }
  return;
}



/* Entry: 10b82eacc; end: 10b82eb4f; -[SIGButton setImageTintColor:forState:] */

void FUN_10b82eacc(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea48e0(param_1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c252440();
  if ((param_4 & (uVar2 ^ 0xffffffffffffffff)) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bed85d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateForState_112593b18);
    return;
  }
  return;
}



/* Entry: 10b82eb50; end: 10b82ebd3; -[SIGButton setLoadingIndicatorColor:forState:] */

void FUN_10b82eb50(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea55a0(param_1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c252440();
  if ((param_4 & (uVar2 ^ 0xffffffffffffffff)) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bed85d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateForState_112593b18);
    return;
  }
  return;
}



/* Entry: 10b82ebd4; end: 10b82ed53; -[SIGButton setStyle:] */

void FUN_10b82ebd4(undefined8 param_1)

{
  func_0x00010bdd22c0();
  func_0x00010bea21c0(param_1);
  func_0x00010be01e00(param_1);
  func_0x00010bea21c0(param_1);
  func_0x00010becc3e0(param_1);
  func_0x00010bea87a0(param_1);
  func_0x00010be01e80(param_1);
  func_0x00010bea8780(param_1);
  func_0x00010becc3e0(param_1);
  func_0x00010bea4900(param_1);
  func_0x00010be01e80(param_1);
  func_0x00010bea48e0(param_1);
  func_0x00010be4f0c0(param_1);
  func_0x00010bea55c0(param_1);
  func_0x00010be01e20(param_1);
  func_0x00010bea55a0(param_1);
  func_0x00010bdd5320(param_1);
  func_0x00010bea2520(param_1);
  func_0x00010bdd53c0(param_1);
  func_0x00010bea2580(param_1);
  func_0x00010be34720(param_1);
  func_0x00010bea4560(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bed85d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateForState_112593b18);
  return;
}



/* Entry: 10b82ed54; end: 10b82edd7; -[SIGButton setLoading:] */

/* WARNING: Possible PIC construction at 0x00010b82edb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b82edbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82ed54(long param_1,undefined8 param_2,undefined8 param_3)

{
  if ((uint)*(byte *)(param_1 + _DAT_1127945b4) == (uint)param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_1127945b4) = (char)param_3;
  if ((uint)param_3 == 0) {
    func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_1127945a8));
  }
  else {
    func_0x00010c24dbc0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127945b0),PTR_s_setHidden__1126479f8,param_3);
  return;
}



/* Entry: 10b82edd8; end: 10b82ef6b; -[SIGButton performStateChangesWithAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82edd8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(ulong *)(param_1 + _DAT_112794598) < 2) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3,param_1);
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11279459c);
    _objc_retain(param_3);
    func_0x00010befa3a0(uVar1);
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b82ef6c; end: 10b82f137;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82ef6c(long param_1,undefined8 param_2)

{
  long lVar1;
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
  
  _CGAffineTransformMakeScale(&uStack_50,0x3fe0000000000000,0x3fe0000000000000);
  lVar1 = (long)_DAT_1127945a4;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1),param_2,&uStack_80);
  func_0x00010c1677c0(0,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1));
  return;
}



/* Entry: 10b82f138; end: 10b82f147; -[SIGButton maximumFontSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82f138(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c3470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127945ac),PTR_s_maximumFontSize_11260e730);
  return;
}



/* Entry: 10b82f148; end: 10b82f1a7; -[SIGButton setMaximumFontSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82f148(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  
  lVar1 = (long)_DAT_1127945ac;
  dVar2 = param_1;
  func_0x00010c0c3460(*(undefined8 *)(param_2 + lVar1));
  if (dVar2 != param_1) {
    func_0x00010c1c3ae0(param_1,*(undefined8 *)(param_2 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bed85d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__updateForState_112593b18);
    return;
  }
  return;
}



/* Entry: 10b82f1a8; end: 10b82f1b7; -[SIGButton adjustsFontForContentSizeCategory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82f1a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befdb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127945ac),
             PTR_s_adjustsFontForContentSizeCategor_11259d070);
  return;
}



/* Entry: 10b82f1b8; end: 10b82f217; -[SIGButton setAdjustsFontForContentSizeCategory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82f1b8(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127945ac;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010befdb20();
  if (param_3 != iVar1) {
    func_0x00010c165e00(*(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010bed85d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateForState_112593b18);
    return;
  }
  return;
}



/* Entry: 10b82f218; end: 10b82f24f; -[SIGButton setOnTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82f218(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127945bc);
  *(undefined8 *)(param_1 + _DAT_1127945bc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b82f250; end: 10b82f26b; -[SIGButton _triggerOnTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82f250(long param_1)

{
  if (*(long *)(param_1 + _DAT_1127945bc) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b82f264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + _DAT_1127945bc) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b82f26c; end: 10b82f33b; -[SIGButton gestureRecognizerShouldBegin:] */

ulong FUN_10b82f26c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_opt_class(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    uVar3 = param_3;
    func_0x00010c0df520();
    uVar4 = param_3;
    func_0x00010c0df4e0();
    uVar5 = param_3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c071ae0();
    _objc_release(uVar5);
    if (((uVar3 == 1) && (uVar4 == 1)) && ((int)uVar6 == 0)) goto LAB_10b82f314;
  }
  uVar6 = 1;
LAB_10b82f314:
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 10b82f33c; end: 10b82f40f; -[SIGButton pointInside:withEvent:] */

undefined1 *
FUN_10b82f33c(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 **ppuVar2;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_50;
  _objc_retain(param_5);
  puVar1 = param_3;
  func_0x00010bf9c0e0();
  if (((puVar1 == (undefined1 *)0x0) || (puVar1 = param_3, func_0x00010c071800(), (int)puVar1 == 0))
     || (puVar1 = param_3, func_0x00010c074c20(), (int)puVar1 != 0)) {
    puStack_48 = PTR_PTR_11270b3b8;
    puStack_50 = param_3;
    _objc_msgSendSuper2(param_1,param_2,&puStack_50,PTR_s_pointInside_withEvent__11261e4e8,param_5);
    param_3 = (undefined1 *)ppuVar2;
  }
  else {
    func_0x00010bf9c0e0(param_3);
    func_0x00010bf20c00(param_3);
    _CGRectInset();
    _CGRectContainsPoint();
  }
  _objc_release(param_5);
  return param_3;
}



/* Entry: 10b82f410; end: 10b82f5cb; -[SIGButton traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82f410(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_50;
  undefined *puStack_48;
  
  puVar3 = PTR_s_traitCollectionDidChange__11267bf88;
  puStack_48 = PTR_PTR_11270b3b8;
  lStack_50 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_50,puVar3,param_3);
  lVar1 = param_1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfd64c0();
  _objc_release(param_3);
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    lVar1 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(lVar1);
    _objc_release(puVar3);
    lVar1 = param_1;
    func_0x00010be071c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1fb20();
    func_0x00010c23ba80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    lVar2 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(lVar2);
    _objc_release(puVar3);
    uVar6 = *(undefined8 *)(param_1 + _DAT_1127945a8);
    lVar2 = lVar1;
    func_0x00010c249ee0(lVar1);
    lVar4 = lVar1;
    func_0x00010bf13d40(lVar1);
    lVar5 = lVar4;
    func_0x00010b88a460();
    FUN_10b833398(lVar2,lVar4,lVar5,2 < lRam00000001138466f0);
    func_0x00010c216160(uVar6);
    func_0x00010bedfc40(param_1);
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 10b82f5cc; end: 10b82f69b; -[SIGButton _animateTouchDown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82f5cc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x00010bf918e0();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    if (1 < *(ulong *)(param_1 + _DAT_112794598)) {
      lVar1 = *(long *)(param_1 + _DAT_1127945a4);
    }
    _objc_retain(lVar1);
    *(undefined1 *)(param_1 + _DAT_1127945b8) = 1;
    uVar2 = *(undefined8 *)(param_1 + _DAT_11279459c);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10b82f69c;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    lStack_38 = lVar1;
    _objc_retain(lVar1);
    func_0x00010befa3a0(uVar2,param_2,&puStack_60);
    _objc_release(lStack_38);
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 10b82f69c; end: 10b82f777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82f69c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010c2104a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11279459c),param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10b82f778;
  puStack_58 = &UNK_110841f80;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  puStack_98 = puVar1;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10b82f7d4;
  puStack_80 = &UNK_110841f20;
  uStack_78 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar3;
  uStack_48 = uVar4;
  func_0x00010bf03420(0x3fb999999999999a,puVar2,param_2,&puStack_70,&puStack_98);
  _objc_release(uStack_48);
  return;
}



/* Entry: 10b82f778; end: 10b82f7d3;  */

void FUN_10b82f778(long param_1,undefined8 param_2)

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
  
  func_0x00010c08cdc0(*(undefined8 *)(param_1 + 0x20));
  _CGAffineTransformMakeScale(&uStack_50,0x3ff0cccccccccccd,0x3ff0cccccccccccd);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x28),param_2,&uStack_80);
  return;
}



/* Entry: 10b82f7d4; end: 10b82f7eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82f7d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2104b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11279459c),
             PTR_s_setSuspended__112661b50,0);
  return;
}



/* Entry: 10b82f7ec; end: 10b82f853; -[SIGButton _animateTouchUpInside] */

void FUN_10b82f7ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x00010bf918e0();
  if ((int)uVar1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10b82f854;
    puStack_30 = &UNK_110d62460;
    uStack_28 = param_1;
    func_0x00010c0f9000(param_1,param_2,&puStack_48);
  }
  return;
}



/* Entry: 10b82f854; end: 10b82f873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b82f854(long param_1)

{
  if (*(ulong *)(*(long *)(param_1 + 0x20) + (long)_DAT_112794598) < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdcb270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x20),PTR_s__animateTouchCancelled_112550638);
    return;
  }
  return;
}


