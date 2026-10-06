/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b87d200; end: 10b87d5d7; -[SIGTrayPullBar initWithFrame:pullBarType:backgroundColor:handleBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10b87d200(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
             long param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_a8 = PTR_PTR_11270b758;
  puVar1 = &uStack_b0;
  uStack_b0 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112795448) = 0x4024000000000000;
    if (param_8 == (undefined8 *)0x0) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar1);
      _objc_release(puVar2);
    }
    else {
      func_0x00010c16e440(puVar1);
    }
    func_0x00010c219b60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x3fc99999a0000000);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4010000000000000);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(0,0,0x4045000000000000,0x4014000000000000);
    lVar11 = (long)_DAT_11279544c;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar2;
    _objc_release(uVar10);
    if (param_9 == 0) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar11));
      _objc_release(puVar2);
    }
    else {
      func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar11));
    }
    uVar10 = *(undefined8 *)((long)puVar1 + lVar11);
    func_0x00010c08c0e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4004000000000000);
    _objc_release(uVar10);
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar11));
    func_0x00010c288fc0(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar11);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf34860(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar10;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar11);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf49420(0x4045000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar6;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar11);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 5.0;
    uVar8 = uVar7;
    func_0x00010bf49420();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = uVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar10);
    _objc_release(puVar3);
    _objc_release(uVar4);
  }
  _objc_release(param_9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar1;
  }
  ___stack_chk_fail();
  if (*(double *)((long)param_8 + (long)_DAT_112795448) != param_1) {
    *(double *)((long)param_8 + (long)_DAT_112795448) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bedb2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return param_8;
  }
  return param_8;
}



/* Entry: 10b87d5d8; end: 10b87d5f7; -[SIGTrayPullBar setCornerRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b87d5d8(double param_1,long param_2)

{
  if (*(double *)(param_2 + _DAT_112795448) != param_1) {
    *(double *)(param_2 + _DAT_112795448) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bedb2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__updateMask_112594658);
    return;
  }
  return;
}



/* Entry: 10b87d5f8; end: 10b87d607; -[SIGTrayPullBar updateHandleBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b87d5f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16e450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11279544c),PTR_s_setBackgroundColor__112639330);
  return;
}



/* Entry: 10b87d608; end: 10b87d803; -[SIGTrayPullBar updatePullBarType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b87d608(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  
  *(long *)(param_1 + _DAT_112795450) = param_3;
  lVar2 = param_1;
  if (param_3 == 2) {
    lVar6 = (long)_DAT_112795454;
    if (*(long *)(param_1 + lVar6) != 0) {
      func_0x00010c162480(*(long *)(param_1 + lVar6),param_2,0);
    }
    uVar1 = *(undefined8 *)(param_1 + _DAT_11279544c);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf1ff80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = uVar7;
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(uVar1);
    func_0x00010c162480(*(undefined8 *)(param_1 + lVar6));
    plVar5 = (long *)(param_1 + _DAT_112795458);
    if (*plVar5 != 0) {
      func_0x00010c162480();
    }
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0x402a000000000000;
  }
  else {
    if (param_3 != 1) goto LAB_10b87d7ec;
    lVar6 = (long)_DAT_112795454;
    if (*(long *)(param_1 + lVar6) != 0) {
      func_0x00010c162480(*(long *)(param_1 + lVar6),param_2,0);
    }
    uVar1 = *(undefined8 *)(param_1 + _DAT_11279544c);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c274200(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010bf493c0(0x4022000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = uVar7;
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(uVar1);
    func_0x00010c162480(*(undefined8 *)(param_1 + lVar6));
    plVar5 = (long *)(param_1 + _DAT_112795458);
    if (*plVar5 != 0) {
      func_0x00010c162480();
    }
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0x4037000000000000;
  }
  lVar6 = lVar2;
  func_0x00010bf49420(uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *plVar5;
  *plVar5 = lVar6;
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c162480(*plVar5);
LAB_10b87d7ec:
                    /* WARNING: Could not recover jumptable at 0x00010bedb2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateMask_112594658);
  return;
}



/* Entry: 10b87d804; end: 10b87d84b; -[SIGTrayPullBar layoutSublayersOfLayer:] */

void FUN_10b87d804(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b758;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSublayersOfLayer__1125377f8);
  func_0x00010bedb2c0(param_1);
  return;
}



/* Entry: 10b87d84c; end: 10b87d99f; -[SIGTrayPullBar _updateMask] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b87d84c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  lVar4 = *(long *)(param_1 + _DAT_112795450);
  if (lVar4 != 0) {
    dVar5 = 1.0;
    if (lVar4 == 1) {
      dVar5 = 24.0;
    }
    dVar8 = 14.0;
    if (lVar4 != 2) {
      dVar8 = dVar5;
    }
    puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00(param_1);
    _CGRectGetMinX();
    dVar6 = dVar5;
    func_0x00010bf20c00(param_1);
    _CGRectGetMinY();
    dVar7 = dVar6;
    func_0x00010bf20c00(param_1);
    _CGRectGetWidth();
    dVar9 = *(double *)(param_1 + _DAT_112795448);
    if (dVar8 <= dVar9 + dVar9) {
      dVar8 = dVar9 + dVar9;
    }
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199e0(dVar5,dVar6,dVar7,dVar8,dVar9,dVar9,PTR__OBJC_CLASS___UIBezierPath_1126aec18
                        ,param_2,3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    func_0x00010c1d9820(puVar1,param_2,puVar3);
    _objc_release(puVar2);
    lVar4 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(lVar4);
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10b87d9a0; end: 10b87d9af; -[SIGTrayPullBar cornerRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b87d9a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112795448);
}



/* Entry: 10b87d9b0; end: 10b87da0f; -[SIGTrayPullBar .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b87d9b0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11279545c,0);
  _objc_storeStrong(param_1 + _DAT_11279544c,0);
  _objc_storeStrong(param_1 + _DAT_112795458,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112795454,0);
  return;
}



/* Entry: 10b87da10; end: 10b87da37; -[SIGTrayTransition animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_10b87da10(void)

{
  _objc_alloc(PTR_PTR_1126e1690);
  func_0x00010c055440(0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b87da38; end: 10b87da5f; -[SIGTrayTransition animationControllerForDismissedController:] */

void FUN_10b87da38(void)

{
  _objc_alloc(PTR_PTR_1126e1698);
  func_0x00010c055440(0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b87da60; end: 10b87da67; -[SIGTrayTransition gestureRecognizer:shouldReceivePress:] */

undefined8 FUN_10b87da60(void)

{
  return 0;
}



/* Entry: 10b87da68; end: 10b87da6f; -[SIGTrayTransition gestureRecognizer:shouldReceiveTouch:] */

undefined8 FUN_10b87da68(void)

{
  return 1;
}



/* Entry: 10b87da70; end: 10b87da77; -[SIGTrayTransition gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

undefined8 FUN_10b87da70(void)

{
  return 0;
}



/* Entry: 10b87da78; end: 10b87da7f; -[SIGTrayTransition gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

undefined8 FUN_10b87da78(void)

{
  return 0;
}



/* Entry: 10b87da80; end: 10b87da87; -[SIGTrayTransition gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_10b87da80(void)

{
  return 0;
}



/* Entry: 10b87da88; end: 10b87dc57; -[SIGTrayWrapperViewController initWithTray:withPullBar:withDefaultTrayHeightPercentage:withInitialPosition:trayHostDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b87da88(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_11270b760;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1c8b80(puVar1);
    uVar2 = param_4;
    func_0x00010c0f4d60();
    if (((int)uVar2 != 0) && (uVar2 = param_4, func_0x00010c2a5920(), (uVar2 & 1) == 0)) {
      puVar3 = PTR_PTR_1126dbc18;
      _objc_opt_new(PTR_PTR_1126dbc18);
      func_0x00010c222380(puVar1);
      _objc_release(puVar3);
      puVar4 = (undefined1 *)puVar1;
      func_0x00010c29bf00(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c219b60();
      _objc_release(puVar4);
      puVar4 = (undefined1 *)puVar1;
      func_0x00010c29bf00(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2d20();
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    puVar3 = PTR_PTR_1126e18e8;
    _objc_alloc_init();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112795460);
    *(undefined **)((long)puVar1 + (long)_DAT_112795460) = puVar3;
    _objc_release(uVar6);
    func_0x00010c219b20(puVar1);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112795464),param_4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112795468) = param_5;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11279546c) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112795470) = param_6;
    _objc_retain();
    func_0x00010c219e20(param_4);
    _objc_release(param_4);
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b87dc58; end: 10b87dcf3; -[SIGTrayWrapperViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b87dc58(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_11270b760;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidAppear__112684bd0);
  lVar2 = (long)_DAT_112795474;
  if ((*(byte *)(param_1 + lVar2) & 1) == 0) {
    lVar1 = param_1 + _DAT_112795464;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c10c5c0(*(undefined8 *)(param_1 + _DAT_11279546c));
    _objc_release(lVar1);
    *(undefined1 *)(param_1 + lVar2) = 1;
  }
  return;
}



/* Entry: 10b87dcf4; end: 10b87ddaf; -[SIGTrayWrapperViewController defaultProjectNameV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b87dcf4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112795464;
  uVar1 = param_1 + lVar5;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c27b3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    lVar5 = 0;
  }
  else {
    param_1 = param_1 + lVar5;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010c27b3c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf6a400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 10b87ddb0; end: 10b87ddf7; -[SIGTrayWrapperViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b87ddb0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112795478);
  _objc_destroyWeak(param_1 + _DAT_112795464);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112795460,0);
  return;
}



/* Entry: 10b87ddf8; end: 10b87de43; -[SIGUIContainerDimissingTransition initWithTransitionDuration:backgroundOpacity:] */

void FUN_10b87ddf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b768;
  uStack_30 = param_3;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
  }
  return;
}



/* Entry: 10b87de44; end: 10b87de4b; -[SIGUIContainerDimissingTransition transitionDuration:] */

undefined8 FUN_10b87de44(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b87de4c; end: 10b87e0e3; -[SIGUIContainerDimissingTransition animateTransition:] */

void FUN_10b87de4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar3 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  uVar3 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c29c220(param_3,param_2,
                      *(undefined8 *)PTR__UITransitionContextFromViewControllerKey_110345e48);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c06c000();
  if ((int)uVar3 == 0) {
    func_0x00010c12c960(puVar2);
    uVar3 = param_3;
    func_0x00010c27ac00(param_3);
    func_0x00010bf43bc0(param_3,param_2,(uint)uVar3 ^ 1);
  }
  else {
    uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_80 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    func_0x00010c219960(uVar5,param_2,&uStack_80);
    uVar6 = (ulong)(uint)(float)*(double *)(param_1 + 0x10);
    puVar4 = puVar2;
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4bc0(uVar6);
    _objc_release(puVar4);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x00010c27a940(param_1,param_2,0);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10b87e0e4;
    puStack_a0 = &UNK_110848ba8;
    _objc_retain(param_3);
    uStack_98 = param_3;
    _objc_retain(uVar5);
    uStack_90 = uVar5;
    _objc_retain(puVar2);
    puStack_e8 = puVar4;
    uStack_e0 = 0xc2000000;
    uStack_d8 = 0x10b87e194;
    puStack_d0 = &UNK_110848bd8;
    puStack_88 = puVar2;
    _objc_retain(puVar2);
    puStack_c8 = puVar2;
    _objc_retain(param_3);
    uStack_c0 = param_3;
    func_0x00010bf03420(uVar6,puVar1,param_2,&puStack_b8,&puStack_e8);
    _objc_release(uStack_c0);
    _objc_release(puStack_c8);
    _objc_release(puStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
  }
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10b87e0e4; end: 10b87e1cb;  */

void FUN_10b87e0e4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 in_d3;
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
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c075b60();
  if (iVar1 != 0) {
    func_0x00010c1680e0(PTR__OBJC_CLASS___UIView_1126aec20,param_2,3);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b2a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGAffineTransformMakeTranslation(&uStack_50,0,in_d3);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x28),param_2,&uStack_80);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(uVar2);
  return;
}



/* Entry: 10b87e1cc; end: 10b87e217; -[SIGUIContainerPresentingTransition initWithTransitionDuration:backgroundOpacity:] */

void FUN_10b87e1cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b770;
  uStack_30 = param_3;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
  }
  return;
}



/* Entry: 10b87e218; end: 10b87e21f; -[SIGUIContainerPresentingTransition transitionDuration:] */

undefined8 FUN_10b87e218(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b87e220; end: 10b87e577; -[SIGUIContainerPresentingTransition animateTransition:] */

void FUN_10b87e220(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 in_d3;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined **ppuStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  uVar2 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c29c220(param_3,param_2,
                      *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_a0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(uVar4,param_2,&uStack_a0);
  uVar2 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar2);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_10b87e578;
  puStack_b8 = &UNK_110841f80;
  _objc_retain(puVar1);
  puStack_b0 = puVar1;
  _objc_retain(param_3);
  ppuVar5 = &puStack_d0;
  uStack_a8 = param_3;
  _objc_retainBlock();
  uVar2 = param_3;
  func_0x00010c06c000();
  if (((int)uVar2 == 0) || (*(double *)(param_1 + 8) == 0.0)) {
    (*(code *)ppuVar5[2])(ppuVar5);
  }
  else {
    uVar2 = param_3;
    func_0x00010bf4b2a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGAffineTransformMakeTranslation(&uStack_100,0,in_d3);
    uStack_98 = uStack_f8;
    uStack_a0 = uStack_100;
    uStack_88 = uStack_e8;
    uStack_90 = uStack_f0;
    uStack_78 = uStack_d8;
    uStack_80 = uStack_e0;
    func_0x00010c219960(uVar4,param_2,&uStack_a0);
    _objc_release(uVar2);
    puVar6 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 0;
    func_0x00010c1d4bc0(0);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x00010c27a940(param_1,param_2,0);
    puStack_140 = puVar3;
    uStack_138 = 0xc2000000;
    pcStack_130 = FUN_10b87e5a4;
    puStack_128 = &UNK_11084c4a0;
    _objc_retain(param_3);
    uStack_120 = param_3;
    _objc_retain(uVar4);
    uStack_118 = uVar4;
    _objc_retain(puVar1);
    puStack_168 = puVar3;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_10b87e63c;
    puStack_150 = &UNK_110842508;
    puStack_110 = puVar1;
    lStack_108 = param_1;
    _objc_retain(ppuVar5);
    ppuStack_148 = ppuVar5;
    func_0x00010bf03420(uVar2,puVar6,param_2,&puStack_140,&puStack_168);
    _objc_release(ppuStack_148);
    _objc_release(puStack_110);
    _objc_release(uStack_118);
    _objc_release(uStack_120);
  }
  _objc_release(ppuVar5);
  _objc_release(uStack_a8);
  _objc_release(puStack_b0);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10b87e578; end: 10b87e5a3;  */

void FUN_10b87e578(long param_1)

{
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bf43bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_completeTransition__1125ae898,1);
  return;
}



/* Entry: 10b87e5a4; end: 10b87e63b;  */

void FUN_10b87e5a4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c075b60();
  if (iVar1 != 0) {
    func_0x00010c1680e0(PTR__OBJC_CLASS___UIView_1126aec20,param_2,3);
  }
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_60 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x28),param_2,&uStack_60);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  dVar3 = *(double *)(*(long *)(param_1 + 0x38) + 0x10);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0((float)dVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10b87e63c; end: 10b87e683;  */

void FUN_10b87e63c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b87e644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10b87e684; end: 10b87e6cf; +[SIGObjectWeakContainer newWithObject:] */

undefined * FUN_10b87e684(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e18f8;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c224b00();
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b87e6d0; end: 10b87e6e7; -[SIGObjectWeakContainer weakObject] */

void FUN_10b87e6d0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b87e6e8; end: 10b87e6f3; -[SIGObjectWeakContainer setWeakObject:] */

void FUN_10b87e6e8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 10b87e6f4; end: 10b87e6fb; -[SIGObjectWeakContainer .cxx_destruct] */

void FUN_10b87e6f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10b87e6fc; end: 10b87e77f;  */

void FUN_10b87e6fc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_getAssociatedObject(param_1,&UNK_10f7bc031);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c2a2b40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  _objc_opt_class(PTR__OBJC_CLASS___UILayoutGuide_1126af090);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b87e780; end: 10b87e7c7;  */

void FUN_10b87e780(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e18f8;
  func_0x00010c0d9600(PTR_PTR_1126e18f8);
  _objc_setAssociatedObject(param_1,&UNK_10f7bc031,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b87e7c8; end: 10b87e8f7;  */

void FUN_10b87e7c8(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = param_1;
  func_0x00010bebc000();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    _objc_alloc_init(PTR__OBJC_CLASS___UILayoutGuide_1126af090);
    func_0x00010bef9680(param_1,param_2,puVar1);
    func_0x00010bebc020(param_1,param_2,puVar1);
    puVar2 = PTR_PTR_1126e1900;
    _objc_alloc(PTR_PTR_1126e1900);
    func_0x00010c021c60();
    func_0x00010befbb60(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
  puVar2 = puVar1;
  func_0x00010c274200(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b87e8f8; end: 10b87e93f;  */

void FUN_10b87e8f8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e18f8;
  func_0x00010c0d9600(PTR_PTR_1126e18f8);
  _objc_setAssociatedObject(param_1,&UNK_10f7bc048,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b87e940; end: 10b87ec63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b87e940(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *unaff_x20;
  undefined *unaff_x22;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010bebc040();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126e1908;
    _objc_alloc_init();
    func_0x00010c067880();
    puStack_90 = puVar2;
    _objc_setAssociatedObject(param_1,&UNK_10f7bc063,puVar2,1);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c1248c0(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar3);
    func_0x00010c1a7f60(puVar1);
    func_0x00010c219b60(puVar1);
    func_0x00010befbb60(param_1);
    func_0x00010c15cda0(param_1);
    puStack_c0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = puVar3;
    func_0x00010c086ba0();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    puStack_a8 = puVar3;
    puStack_88 = puVar3;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    puStack_b0 = puVar2;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    puStack_80 = puVar2;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = param_1;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    puStack_78 = unaff_x20;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010bf1ff80(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_c0);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(unaff_x20);
    _objc_release(unaff_x22);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puStack_b8);
    _objc_release(puStack_b0);
    _objc_release(puStack_a8);
    _objc_release(puStack_a0);
    _objc_release(puStack_98);
    param_3 = puVar1;
    func_0x00010bebc060(param_1);
    _objc_release(puStack_90);
  }
  puVar2 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_100;
  pcStack_c8 = FUN_10b87ec64;
  puStack_f0 = unaff_x22;
  puStack_e8 = puVar1;
  puStack_e0 = unaff_x20;
  puStack_d8 = puVar2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  puStack_f8 = PTR_PTR_11270b778;
  puStack_100 = puVar3;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&puStack_100,
                      PTR_s_initWithFrame__1125e2948);
  if (ppuVar8 != (undefined **)0x0) {
    func_0x00010c1a7f60(ppuVar8);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1e540(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(ppuVar8);
    _objc_release(puVar1);
    func_0x00010c219b60(ppuVar8);
    _objc_storeWeak((undefined1 *)((long)ppuVar8 + (long)_DAT_112795490),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)ppuVar8;
}



/* Entry: 10b87ec64; end: 10b87ed33; -[SIGKeyboardAnchorViewWindowObserver initWithLayoutGuide:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b87ec64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270b778;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1a7f60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1e540(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c219b60(puVar1);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112795490),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b87ed34; end: 10b87ed37; -[SIGKeyboardAnchorViewWindowObserver willMoveToWindow:] */

void FUN_10b87ed34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c280430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_uninstallConstraints_11267db30);
  return;
}



/* Entry: 10b87ed38; end: 10b87ed3b; -[SIGKeyboardAnchorViewWindowObserver didMoveToWindow] */

void FUN_10b87ed38(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_installConstraints_1125f7820);
  return;
}



/* Entry: 10b87ed3c; end: 10b87edef; -[SIGKeyboardAnchorViewWindowObserver willMoveToSuperview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b87ed3c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112795490;
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0f0780();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar4 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar4);
    lVar3 = lVar4;
    func_0x00010c0f0780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0();
    _objc_release(lVar3);
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (param_3 == 0) {
    func_0x00010c280420(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b87edf0; end: 10b87ee2b; -[SIGKeyboardAnchorViewWindowObserver uninstallConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b87edf0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112795494;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b87ee2c; end: 10b87f247; -[SIGKeyboardAnchorViewWindowObserver installConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b87ee2c(long param_1)

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
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined *puVar26;
  long lVar27;
  undefined8 uVar28;
  
  lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + _DAT_112795490;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0f0780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c280420(param_1);
  lVar3 = lVar2;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c23bca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar4 == 0) {
    lVar3 = lVar2;
    func_0x00010c149040();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  lVar3 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar2;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar2;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar17;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar1;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar2;
  func_0x00010c08e400(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar1;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar2;
  func_0x00010c1408a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar23;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_1 + _DAT_112795494);
  *(undefined **)(param_1 + _DAT_112795494) = puVar26;
  _objc_release(uVar28);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  func_0x00010c1cbe20(lVar2);
  func_0x00010c08cdc0(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar27) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar1 + _DAT_112795494,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(lVar1 + _DAT_112795490);
  return;
}



/* Entry: 10b87f248; end: 10b87f283; -[SIGKeyboardAnchorViewWindowObserver .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b87f248(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112795494,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112795490);
  return;
}



/* Entry: 10b87f284; end: 10b87f34f;  */

void FUN_10b87f284(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f350; end: 10b87f44b;  */

void FUN_10b87f350(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_class();
  func_0x00010bf249e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137fbcc0;
  puRam00000001137fbcc0 = puVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b87f44c; end: 10b87f4af; -[SIGControlStylesDefaults init] */

undefined1 * FUN_10b87f44c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b780;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x000107c30a88();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b87f4b0; end: 10b87f4b7; -[SIGControlStylesDefaults fontForStyle:] */

void FUN_10b87f4b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb3e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_fontForStyle__1125ca938)
  ;
  return;
}



/* Entry: 10b87f4b8; end: 10b87f4bf; -[SIGControlStylesDefaults fontForStyle:scaleForAccessibility:] */

void FUN_10b87f4b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb3e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_fontForStyle_scaleForAccessibili_1125ca940);
  return;
}



/* Entry: 10b87f4c0; end: 10b87f4c7; -[SIGControlStylesDefaults fontForStyle:scaleForAccessibility:maximumFontSize:] */

void FUN_10b87f4c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb3e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_fontForStyle_scaleForAccessibili_1125ca948);
  return;
}



/* Entry: 10b87f4c8; end: 10b87f4cf; -[SIGControlStylesDefaults fontForStyle:scaleForAccessibility:maximumFontSize:compatibleWithTraitCollection:] */

void FUN_10b87f4c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb3eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_fontForStyle_scaleForAccessibili_1125ca950);
  return;
}



/* Entry: 10b87f4d0; end: 10b87f4d7; -[SIGControlStylesDefaults colorForStyle:] */

void FUN_10b87f4d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf40f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_colorForStyle__1125add80);
  return;
}



/* Entry: 10b87f4d8; end: 10b87f4e3; -[SIGControlStylesDefaults clearButtonImage] */

void FUN_10b87f4d8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8ac98);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f4e4; end: 10b87f4ef; -[SIGControlStylesDefaults searchImage] */

void FUN_10b87f4e4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110e607f8);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f4f0; end: 10b87f4f3; -[SIGControlStylesDefaults dismissButtonImage] */

void FUN_10b87f4f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissIconImage_11255e478);
  return;
}



/* Entry: 10b87f4f4; end: 10b87f4ff; -[SIGControlStylesDefaults backButtonImage] */

void FUN_10b87f4f4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110dc1ab8);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f500; end: 10b87f50b; -[SIGControlStylesDefaults flatBackButtonImage] */

void FUN_10b87f500(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8acb8);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f50c; end: 10b87f517; -[SIGControlStylesDefaults editingImage] */

void FUN_10b87f50c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8acd8);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f518; end: 10b87f523; -[SIGControlStylesDefaults moreButtonImage] */

void FUN_10b87f518(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110eaafd8);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f524; end: 10b87f52f; -[SIGControlStylesDefaults minusButtonImage] */

void FUN_10b87f524(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8acf8);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f530; end: 10b87f53b; -[SIGControlStylesDefaults plusButtonImage] */

void FUN_10b87f530(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110ea11d8);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f53c; end: 10b87f547; -[SIGControlStylesDefaults deleteButtonImage] */

void FUN_10b87f53c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8ad18);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f548; end: 10b87f553; -[SIGControlStylesDefaults favoritesIndexImage] */

void FUN_10b87f548(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8ad38);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f554; end: 10b87f55f; -[SIGControlStylesDefaults starsIndexImage] */

void FUN_10b87f554(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8ad58);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f560; end: 10b87f56b; -[SIGControlStylesDefaults quickAddsIndexImage] */

void FUN_10b87f560(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8ad78);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f56c; end: 10b87f577; -[SIGControlStylesDefaults groupsIndexImage] */

void FUN_10b87f56c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8ad98);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f578; end: 10b87f583; -[SIGControlStylesDefaults recentsIndexImage] */

void FUN_10b87f578(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8adb8);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f584; end: 10b87f587; -[SIGControlStylesDefaults contactsIndexImage] */

void FUN_10b87f584(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be73750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__personBookStrokeTemplateImage_11257a770);
  return;
}



/* Entry: 10b87f588; end: 10b87f593; -[SIGControlStylesDefaults cellActionSelectOffImage] */

void FUN_10b87f588(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8add8);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f594; end: 10b87f59f; -[SIGControlStylesDefaults cellActionSelectOnImage] */

void FUN_10b87f594(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8adf8);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f5a0; end: 10b87f5ab; -[SIGControlStylesDefaults cellActionSelectOnDisabledImage] */

void FUN_10b87f5a0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8ae18);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f5ac; end: 10b87f5af; -[SIGControlStylesDefaults cellActionRemoveImage] */

void FUN_10b87f5ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be36b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__iconXSignVariantBFillImage_11256b478);
  return;
}



/* Entry: 10b87f5b0; end: 10b87f5b3; -[SIGControlStylesDefaults cellActionDiscloseImage] */

void FUN_10b87f5b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddc390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cellRightIconImage_112554a80);
  return;
}



/* Entry: 10b87f5b4; end: 10b87f5bf; -[SIGControlStylesDefaults cellActionMenuImage] */

void FUN_10b87f5b4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8ae38);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f5c0; end: 10b87f5cb; -[SIGControlStylesDefaults sectionHeaderActionImage] */

void FUN_10b87f5c0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8ae58);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f5cc; end: 10b87f5d7; -[SIGControlStylesDefaults sendToImage] */

void FUN_10b87f5cc(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8ae78);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f5d8; end: 10b87f5e3; -[SIGControlStylesDefaults sendToWhiteImage] */

void FUN_10b87f5d8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8ae98);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f5e4; end: 10b87f5ef; -[SIGControlStylesDefaults sendToBlackImage] */

void FUN_10b87f5e4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8aeb8);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f5f0; end: 10b87f607; -[SIGControlStylesDefaults groupWithPlus] */

void FUN_10b87f5f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe8d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4038000000000000,0x4038000000000000,PTR_PTR_1126b0c40,
             PTR_s_imageTemplateFromIconType_size__1125d7d18,0x1cf);
  return;
}



/* Entry: 10b87f608; end: 10b87f613; -[SIGControlStylesDefaults groupWhiteImage] */

void FUN_10b87f608(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8aed8);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f614; end: 10b87f61f; -[SIGControlStylesDefaults storyWhiteImage] */

void FUN_10b87f614(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8aef8);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f620; end: 10b87f62b; -[SIGControlStylesDefaults officialStarImage] */

void FUN_10b87f620(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8af18);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f62c; end: 10b87f637; -[SIGControlStylesDefaults officialCheckmarkImage] */

void FUN_10b87f62c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8af38);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f638; end: 10b87f643; -[SIGControlStylesDefaults plusBadgeImage] */

void FUN_10b87f638(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8af58);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f644; end: 10b87f64f; -[SIGControlStylesDefaults subscribeImage] */

void FUN_10b87f644(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110ea7d98);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f650; end: 10b87f653; -[SIGControlStylesDefaults subscribedImage] */

void FUN_10b87f650(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be367f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__iconBookmarkFillImage_11256b398);
  return;
}



/* Entry: 10b87f654; end: 10b87f65f; -[SIGControlStylesDefaults pullToRefreshGhostDefault] */

void FUN_10b87f654(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8af78);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f660; end: 10b87f66b; -[SIGControlStylesDefaults pullToRefreshGhostWink] */

void FUN_10b87f660(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8af98);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f66c; end: 10b87f677; -[SIGControlStylesDefaults pullToRefreshGhostShocked] */

void FUN_10b87f66c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8afb8);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f678; end: 10b87f683; -[SIGControlStylesDefaults pullToRefreshGhostRainbow] */

void FUN_10b87f678(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8afd8);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f684; end: 10b87f68f; -[SIGControlStylesDefaults pullToRefreshGhostArms] */

void FUN_10b87f684(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8aff8);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f690; end: 10b87f69b; -[SIGControlStylesDefaults whiteSpectaclesIcon] */

void FUN_10b87f690(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8b018);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f69c; end: 10b87f6a7; -[SIGControlStylesDefaults backupErrorIcon] */

void FUN_10b87f69c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8b038);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f6a8; end: 10b87f6b3; -[SIGControlStylesDefaults backupPendingIcon] */

void FUN_10b87f6a8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8b058);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f6b4; end: 10b87f6b7; -[SIGControlStylesDefaults thumbnailXIcon] */

void FUN_10b87f6b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be36b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__iconXSignVariantAFillImage_11256b470);
  return;
}



/* Entry: 10b87f6b8; end: 10b87f6c3; -[SIGControlStylesDefaults shareIcon] */

void FUN_10b87f6b8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8b078);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f6c4; end: 10b87f6cf; -[SIGControlStylesDefaults actionBarMoreIcon] */

void FUN_10b87f6c4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8b098);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f6d0; end: 10b87f6db; -[SIGControlStylesDefaults viewsIcon] */

void FUN_10b87f6d0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = lRam00000001137fbcc8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x000107c27d9c(0x1137fbcc8,&PTR___NSConcreteGlobalBlock_110d62ed0);
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110f8b0b8);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b87f6dc; end: 10b87f773; -[SIGControlStylesDefaults pullToRefreshThemeGhost] */

void FUN_10b87f6dc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = lRam00000001138466f0;
  func_0x000107c30a90();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c11ba40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar3 = lVar1;
    func_0x00010c11ba40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_10b87f284();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}


