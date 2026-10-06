/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1061aee6c; end: 1061aeed7; -[SCFeatureZoomingImpl _didChangeZoomFactorForDevicePosition:capturerState:] */

void FUN_1061aee6c(float param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  int *piVar1;
  
  _objc_retain(param_5);
  if (param_4 == 1) {
    piVar1 = (int *)&DAT_112741854;
  }
  else {
    if (param_4 != 0) goto LAB_1061aeec4;
    piVar1 = (int *)&DAT_112741858;
  }
  func_0x00010c2bf100(param_5);
  *(double *)(param_2 + *piVar1) = (double)param_1;
LAB_1061aeec4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1061aeed8; end: 1061af297; -[SCFeatureZoomingToastAnimator showToastWithType:duration:onView:] */

void FUN_1061aeed8(double param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  if ((0.0 < param_1 && param_4 != 0) && param_5 != 0) {
    if (*(long *)(param_2 + 8) == 0) {
      puVar1 = PTR_PTR_1126aea58;
      _objc_alloc_init();
      uVar7 = *(undefined8 *)(param_2 + 8);
      *(undefined **)(param_2 + 8) = puVar1;
      _objc_release(uVar7);
      func_0x00010c21ad00(*(undefined8 *)(param_2 + 8));
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(*(undefined8 *)(param_2 + 8));
      _objc_release(puVar1);
      func_0x00010befbb60(param_5);
      func_0x00010c219b60(*(undefined8 *)(param_2 + 8));
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar2 = *(undefined8 *)(param_2 + 8);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_5;
      func_0x00010bf348e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar2;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_2 + 8);
      uStack_88 = uVar7;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_5;
      func_0x00010bf34860(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar4;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_80 = uVar8;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1);
      _objc_release(puVar6);
      _objc_release(uVar8);
      _objc_release(lVar5);
      _objc_release(uVar4);
      _objc_release(uVar7);
      _objc_release(lVar3);
      _objc_release(uVar2);
    }
    uVar7 = 0;
    if (*(long *)(param_2 + 0x10) != 0) {
      func_0x00010c2559c0();
      puVar9 = (undefined8 *)(param_2 + 0x10);
      func_0x00010bfaf6c0(*puVar9);
      uVar7 = *puVar9;
      *puVar9 = 0;
      _objc_release(uVar7);
    }
    if (param_4 == 2) {
      func_0x0001061af5fc();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_4 == 1) {
      func_0x0001061af614();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar7 = 0;
    }
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_2 + 8));
    func_0x00010c212f20(*(undefined8 *)(param_2 + 8));
    _objc_initWeak(auStack_90,param_2);
    puVar6 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
    _objc_alloc();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1061af298;
    puStack_a0 = &UNK_1108434b0;
    unaff_x23 = &puStack_b8;
    _objc_copyWeak(auStack_98,auStack_90);
    func_0x00010c00ea00(param_1);
    puVar9 = (undefined8 *)(param_2 + 0x10);
    uVar8 = *puVar9;
    *puVar9 = puVar6;
    _objc_release(uVar8);
    uVar8 = *puVar9;
    puStack_e0 = puVar1;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x1061af2d0;
    puStack_c8 = &UNK_110850658;
    unaff_x24 = &puStack_e0;
    _objc_copyWeak(auStack_c0,auStack_90);
    func_0x00010bef78c0(uVar8);
    func_0x00010c24dc40(*(undefined8 *)(param_2 + 0x10));
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
    _objc_release(uVar7);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x24 + 4);
  _objc_destroyWeak(unaff_x23 + 4);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume();
  param_5 = param_5 + 0x20;
  _objc_loadWeakRetained();
  if (param_5 != 0) {
    func_0x00010c1677c0(0,*(undefined8 *)(param_5 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1061af298; end: 1061af327;  */

void FUN_1061af298(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061af328; end: 1061af367; -[SCFeatureZoomingToastAnimator removeToastImmediately] */

void FUN_1061af328(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010c2559c0(*(long *)(param_1 + 0x10),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bfaf6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_finishAnimationAtPosition__1125c9758,0);
    return;
  }
  return;
}



/* Entry: 1061af368; end: 1061af397; -[SCFeatureZoomingToastAnimator .cxx_destruct] */

void FUN_1061af368(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061af398; end: 1061af39f; -[SCZoomingState init] */

void FUN_1061af398(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c009ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,param_1,PTR_s_initWithDefaultFactor__1125e01c8);
  return;
}



/* Entry: 1061af3a0; end: 1061af3ff; -[SCZoomingState initWithDefaultFactor:] */

undefined1 * FUN_1061af3a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f0230;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    func_0x00010c137fe0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1061af400; end: 1061af41b; -[SCZoomingState reset] */

void FUN_1061af400(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x18) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 1061af41c; end: 1061af427; -[SCZoomingState effectiveScale] */

double FUN_1061af41c(long param_1)

{
  return *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x20);
}



/* Entry: 1061af428; end: 1061af433; -[SCZoomingState setLinearScale:] */

void FUN_1061af428(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdded10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__clampScale__1125554e0);
  return;
}



/* Entry: 1061af434; end: 1061af46f; -[SCZoomingState setExponentialScale:] */

void FUN_1061af434(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(param_2 + 0x20);
  *puVar1 = param_1;
  func_0x00010bdded00(param_2,param_3,puVar1);
  uVar2 = *puVar1;
  func_0x00010bdd88c0(param_2);
  *(undefined8 *)(param_2 + 0x28) = uVar2;
  return;
}



/* Entry: 1061af470; end: 1061af493; -[SCZoomingState setTotalOffsetForExpScale:] */

void FUN_1061af470(undefined8 param_1)

{
  func_0x00010bdd8600();
                    /* WARNING: Could not recover jumptable at 0x00010c198eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setExponentialScale__112643dc8);
  return;
}



/* Entry: 1061af494; end: 1061af4d7; -[SCZoomingState _calculateExponentialScaleWithRelativeOffset:] */

double FUN_1061af494(double param_1)

{
  double dVar1;
  
  param_1 = param_1 * 80.0;
  func_0x00010be9a8c0(param_1);
  dVar1 = (param_1 + -1.5) * 3.35;
  _exp(dVar1);
  return dVar1 + 0.812691820518043;
}



/* Entry: 1061af4d8; end: 1061af537; -[SCZoomingState _calculateRelativeOffsetWithExponentialScale:] */

double FUN_1061af4d8(double param_1)

{
  double dVar1;
  
  dVar1 = param_1 + 0.18730817948195702 + -1.0;
  _log(dVar1);
  return ((dVar1 / 3.35 + 1.5 + -1.0) / 5e-05) / 80.0;
}



/* Entry: 1061af538; end: 1061af54b; -[SCZoomingState _scaleChangeForOffset:] */

double FUN_1061af538(double param_1)

{
  return param_1 * 5e-05 + 1.0;
}



/* Entry: 1061af54c; end: 1061af5cb; -[SCZoomingState _clampScale:] */

void FUN_1061af54c(double param_1,undefined8 param_2,undefined8 param_3,double *param_4)

{
  double dVar1;
  
  func_0x00010bf8d000();
  if (param_1 <= 100.0) {
    func_0x00010bf8d000(param_2);
    if (1.0 <= param_1) {
      return;
    }
    func_0x00010bf8d000(param_2);
    param_1 = *param_4 / param_1;
  }
  else {
    dVar1 = *param_4;
    param_1 = dVar1 * 100.0;
    func_0x00010bf8d000(param_2);
    param_1 = param_1 / dVar1;
  }
  *param_4 = param_1;
  return;
}



/* Entry: 1061af5cc; end: 1061af5d3; -[SCZoomingState defaultFactor] */

undefined8 FUN_1061af5cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1061af5d4; end: 1061af5db; -[SCZoomingState initialScale] */

undefined8 FUN_1061af5d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1061af5dc; end: 1061af5e3; -[SCZoomingState setInitialScale:] */

void FUN_1061af5dc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 1061af5e4; end: 1061af5eb; -[SCZoomingState linearScale] */

undefined8 FUN_1061af5e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1061af5ec; end: 1061af5f3; -[SCZoomingState exponentialScale] */

undefined8 FUN_1061af5ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1061af5f4; end: 1061af62b; -[SCZoomingState totalOffsetForExpScale] */

undefined8 FUN_1061af5f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1061af62c; end: 1061af68f; -[SCCapturedMultiSegmentRecoveryData init] */

undefined1 * FUN_1061af62c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0238;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1061af690; end: 1061af857; -[SCCapturedMultiSegmentRecoveryData increaseAttemptedRecoveryCount] */

void FUN_1061af690(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
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
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf51e00();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  lVar3 = lVar1;
  func_0x00010bf529e0(lVar1);
  func_0x00010bffc4a0(puVar2,param_2,lVar3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(lVar1);
  lVar3 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar3 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        lVar8 = *(long *)(lStack_128 + lVar10 * 8);
        puVar4 = PTR_PTR_1126c87e8;
        func_0x00010bf317c0(PTR_PTR_1126c87e8,param_2,lVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0dc00(lVar8);
        puVar5 = puVar4;
        func_0x00010c2a8a60(puVar4,param_2,lVar8 + 1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_2,puVar6);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar1);
  puVar4 = puVar2;
  func_0x00010c0d3c80();
  uVar7 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar4;
  _objc_release(uVar7);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf51e00(*(undefined8 *)(lVar1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061af858; end: 1061af86f; -[SCCapturedMultiSegmentRecoveryData segments] */

void FUN_1061af858(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061af870; end: 1061af89f; -[SCCapturedMultiSegmentRecoveryData setSegments:] */

void FUN_1061af870(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0d3c80();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061af8a0; end: 1061af8a7; -[SCCapturedMultiSegmentRecoveryData addRecoveryData:] */

void FUN_1061af8a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addObject__11259c1f0);
  return;
}



/* Entry: 1061af8a8; end: 1061af8eb; -[SCCapturedMultiSegmentRecoveryData removeSegmentAtIndex:] */

void FUN_1061af8a8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010c12d3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_removeObjectAtIndex__112628f10,param_3);
    return;
  }
  return;
}



/* Entry: 1061af8ec; end: 1061af8f3; -[SCCapturedMultiSegmentRecoveryData removeAllRecoveryData] */

void FUN_1061af8ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 1061af8f4; end: 1061af947; -[SCCapturedMultiSegmentRecoveryData copyWithZone:] */

undefined * FUN_1061af8f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b0028;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0d3c80();
  uVar3 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = uVar2;
  _objc_release(uVar3);
  func_0x00010c205660(puVar1,param_2,*(undefined8 *)(param_1 + 0x10));
  return puVar1;
}



/* Entry: 1061af948; end: 1061af9a7; -[SCCapturedMultiSegmentRecoveryData encodeWithCoder:] */

void FUN_1061af948(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e445b8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e445d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061af9a8; end: 1061afa63; -[SCCapturedMultiSegmentRecoveryData initWithCoder:] */

long FUN_1061af9a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  func_0x00010bfee200();
  if (param_1 != 0) {
    uVar1 = param_3;
    func_0x00010bf67000(param_3,param_2,&PTR____CFConstantStringClassReference_110e445b8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bff4000();
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar2;
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010bf67000(param_3,param_2,&PTR____CFConstantStringClassReference_110e445d8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1061afa64; end: 1061afa6b; -[SCCapturedMultiSegmentRecoveryData snapSessionId] */

undefined8 FUN_1061afa64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1061afa6c; end: 1061afa73; -[SCCapturedMultiSegmentRecoveryData setSnapSessionId:] */

void FUN_1061afa6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1061afa74; end: 1061afaa3; -[SCCapturedMultiSegmentRecoveryData .cxx_destruct] */

void FUN_1061afa74(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061afaa4; end: 1061afaaf; +[SCCCameraZoomFactorPillView componentPath] */

undefined ** FUN_1061afaa4(void)

{
  return &PTR____CFConstantStringClassReference_110e445f8;
}



/* Entry: 1061afab0; end: 1061afae3; -[SCCCameraZoomFactorPillView initWithViewModel:componentContext:runtime:] */

void FUN_1061afab0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f0240;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 1061afae4; end: 1061afb33; -[SCCCameraZoomFactorPillView setViewModel:] */

void FUN_1061afae4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061afb34; end: 1061afb77; -[SCCCameraZoomFactorPillView viewModel] */

void FUN_1061afb34(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061afb78; end: 1061afbb7; -[SCCCameraZoomFactorPillContext initWithZoomRatioStops:] */

void FUN_1061afb78(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f0248;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 1061afbb8; end: 1061afbd7; +[SCCCameraZoomFactorPillContext valdiMarshallableObjectDescriptor] */

void FUN_1061afbb8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110913e28;
  param_1[1] = 0;
  param_1[2] = &PTR_s_od_v_110913df8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061afbd8; end: 1061afbfb;  */

undefined8 FUN_1061afbd8(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],*param_2);
  return 0;
}



/* Entry: 1061afbfc; end: 1061afc7b;  */

void FUN_1061afbfc(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1061afcd0;
  puStack_30 = &UNK_110853170;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1061afc7c; end: 1061afcb7; -[SCCCameraZoomFactorPillViewModel initWithCurrentZoomRatio:] */

void FUN_1061afc7c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f0250;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 1061afcb8; end: 1061afccf; +[SCCCameraZoomFactorPillViewModel valdiMarshallableObjectDescriptor] */

void FUN_1061afcb8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110913e88;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1061afcd0; end: 1061afcfb;  */

void FUN_1061afcd0(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1061afcfc; end: 1061afdaf; -[SCLensARBarPreviewMainCameraOverlayHandlingFeature initWithMainCameraPresentationServices:cameraUIServices:memoriesFeature:] */

undefined1 *
FUN_1061afcfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f0258;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061afdb0; end: 1061afdbf; -[SCLensARBarPreviewMainCameraOverlayHandlingFeature activate] */

void FUN_1061afdb0(long param_1)

{
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010beae710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupObervables_112589368);
  return;
}



/* Entry: 1061afdc0; end: 1061afdc3; -[SCLensARBarPreviewMainCameraOverlayHandlingFeature configureWithView:] */

void FUN_1061afdc0(void)

{
  return;
}



/* Entry: 1061afdc4; end: 1061afdc7; -[SCLensARBarPreviewMainCameraOverlayHandlingFeature resetMetrics] */

void FUN_1061afdc4(void)

{
  return;
}



/* Entry: 1061afdc8; end: 1061afdd3; -[SCLensARBarPreviewMainCameraOverlayHandlingFeature usageMetrics] */

undefined * FUN_1061afdc8(void)

{
  return PTR____NSDictionary0__struct_11034ab58;
}



/* Entry: 1061afdd4; end: 1061aff77; -[SCLensARBarPreviewMainCameraOverlayHandlingFeature _handleLensExplorerPresented:] */

void FUN_1061afdd4(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (((param_3 & 1) == 0) && (*(char *)(param_1 + 0x29) != '\x01')) {
    return;
  }
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0b68a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfe12a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0b68a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0efe80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c1a7f60(lVar5,param_2,param_3);
  func_0x00010c1a7f60(lVar6,param_2,param_3);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  if ((int)param_3 == 0) {
    func_0x00010c280d80();
  }
  else {
    func_0x00010c09fdc0();
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  *(char *)(param_1 + 0x29) = (char)param_3;
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 1061aff78; end: 1061b0107; -[SCLensARBarPreviewMainCameraOverlayHandlingFeature _setupObervables] */

void FUN_1061aff78(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar8);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c0b68a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0938e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c07ab20();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  lVar7 = lVar6;
  func_0x00010c25ff60(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 1061b0108; end: 1061b0167;  */

void FUN_1061b0108(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010be2b400(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061b0168; end: 1061b01a3; -[SCLensARBarPreviewMainCameraOverlayHandlingFeature .cxx_destruct] */

void FUN_1061b0168(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1061b01a4; end: 1061b027f; -[SCMainCameraBottomMenuViewContainerHandlingFeature initWithBottomMenuViewContainer:cameraFeatureCatalog:cameraModeActivationController:mainCameraScreenRouter:] */

undefined1 *
FUN_1061b01a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f0260;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061b0280; end: 1061b02af; -[SCMainCameraBottomMenuViewContainerHandlingFeature activate] */

void FUN_1061b0280(long param_1)

{
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    func_0x00010beae700();
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  return;
}



/* Entry: 1061b02b0; end: 1061b02bb; -[SCMainCameraBottomMenuViewContainerHandlingFeature configureWithView:] */

void FUN_1061b02b0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1061b02bc; end: 1061b02bf; -[SCMainCameraBottomMenuViewContainerHandlingFeature resetMetrics] */

void FUN_1061b02bc(void)

{
  return;
}



/* Entry: 1061b02c0; end: 1061b02cb; -[SCMainCameraBottomMenuViewContainerHandlingFeature usageMetrics] */

undefined * FUN_1061b02c0(void)

{
  return PTR____NSDictionary0__struct_11034ab58;
}



/* Entry: 1061b02cc; end: 1061b0877; -[SCMainCameraBottomMenuViewContainerHandlingFeature _setupObervables] */

void FUN_1061b02cc(long param_1)

{
  undefined *puVar1;
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
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  if (*(long *)(param_1 + 8) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar18 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    _objc_release(uVar18);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c15b000();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c15b080();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c2519e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010befa140(puVar1);
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c270700();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c270840();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010c2519e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010befa140(puVar1);
    lVar2 = param_1 + 0x18;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010bf4fd60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c2519e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar2);
    func_0x00010befa140(puVar1);
    puStack_90 = &uStack_98;
    uStack_98 = 0;
    uStack_88 = 0x2020000000;
    uStack_80 = 0;
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar4 = lVar2;
    func_0x00010bf30b20();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar6;
    func_0x00010c299620();
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    uStack_b0 = 0x1061b097c;
    puStack_a8 = &UNK_110913f98;
    puStack_a0 = &uStack_98;
    lVar10 = lVar9;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c2519e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar2);
    func_0x00010befa140(puVar1);
    puStack_d8 = &uStack_e0;
    uStack_e0 = 0;
    uStack_d0 = 0x2020000000;
    uStack_c8 = 0;
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    lVar4 = lVar2;
    func_0x00010bf30b20();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar6;
    func_0x00010bfe7040();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar10;
    func_0x00010c2519e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar2);
    func_0x00010befa140(puVar1);
    puVar13 = puVar1;
    func_0x00010bf529e0();
    if (puVar13 != (undefined *)0x0) {
      lVar2 = param_1 + 0x30;
      _objc_loadWeakRetained();
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained();
      puVar13 = PTR_PTR_1126ae6b8;
      func_0x00010bf41860(PTR_PTR_1126ae6b8);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010bf870a0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar14;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar14;
      func_0x00010c0e0ea0(puVar14);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lVar2);
      _objc_retain(param_1);
      puVar17 = puVar16;
      func_0x00010c25ff60(puVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(puVar17);
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(param_1);
      _objc_release(lVar2);
      _objc_release(param_1);
      _objc_release(lVar2);
    }
    _objc_release(lVar12);
    __Block_object_dispose(&uStack_e0,8);
    _objc_release(lVar11);
    __Block_object_dispose(&uStack_98,8);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 1061b0878; end: 1061b08d3;  */

void FUN_1061b0878(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c23aa80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c0df6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061b08d4; end: 1061b0907;  */

undefined * FUN_1061b08d4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  
  func_0x00010c067fc0();
  puVar1 = PTR____kCFBooleanFalse_11034ab60;
  if (1 < param_2 - 1U) {
    puVar1 = PTR____kCFBooleanTrue_11034ab68;
  }
  return puVar1;
}



/* Entry: 1061b0908; end: 1061b0a5b;  */

void FUN_1061b0908(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_2;
  func_0x00010c067fc0();
  if (lVar1 != 4) {
    func_0x00010c067fc0(param_2);
  }
  func_0x00010c0df760(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061b0a5c; end: 1061b0a8f;  */

void FUN_1061b0a5c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1061b0a90; end: 1061b0b4b;  */

void FUN_1061b0a90(long param_1,undefined8 param_2)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1061b0b4c;
  puStack_30 = &UNK_110913fc8;
  uStack_78 = *(undefined8 *)(param_1 + 0x20);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x1061b0b60;
  puStack_58 = &UNK_110913ff8;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x1061b0b70;
  puStack_80 = &UNK_110914028;
  uStack_50 = uStack_78;
  uStack_28 = uStack_78;
  func_0x00010c0c17a0(param_2,param_2,&puStack_48,&puStack_70,&puStack_98);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithBool__1126157d0,
             *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18));
  return;
}



/* Entry: 1061b0b4c; end: 1061b0b7f;  */

void FUN_1061b0b4c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1061b0b80; end: 1061b0bb7;  */

void FUN_1061b0b80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf04920(param_2,param_2,&PTR___NSConcreteGlobalBlock_1109140a8);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,param_2);
  return;
}



/* Entry: 1061b0bb8; end: 1061b0bbf;  */

void FUN_1061b0bb8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 1061b0bc0; end: 1061b0c87;  */

void FUN_1061b0bc0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  func_0x00010bf1f3c0(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0(param_2);
  func_0x00010c2380a0(uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010c238500(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061b0c88; end: 1061b0d37; -[SCMainCameraBottomMenuViewContainerHandlingFeature _bottomMenuViewContainerTargetIsVisible] */

uint FUN_1061b0c88(double param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar1 = param_2 + 0x30;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (uVar2 == 0) {
    uVar5 = 0;
  }
  else {
    _objc_retain(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_class(PTR__OBJC_CLASS___UIView_1126aec20);
    uVar1 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar4 = uVar2;
    func_0x00010c074c20();
    if ((uVar1 & 1) == 0) {
      uVar5 = (uint)uVar4 ^ 1;
    }
    else if ((uVar4 & 1) == 0) {
      func_0x00010bf01b40(uVar2);
      uVar5 = (uint)(0.0 < param_1);
    }
    else {
      uVar5 = 0;
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar2);
  return uVar5;
}



/* Entry: 1061b0d38; end: 1061b0e13; -[SCMainCameraBottomMenuViewContainerHandlingFeature shouldBlockTouchAtPoint:] */

void FUN_1061b0d38(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_3;
  func_0x00010bdd5540();
  if ((int)lVar1 != 0) {
    lVar1 = param_3 + 0x30;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3 + 0x28;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf51200(param_1,param_2,lVar2,param_4,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    param_3 = param_3 + 0x30;
    _objc_loadWeakRetained(param_3);
    lVar1 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c102b20(param_1,param_2);
    _objc_release(lVar1);
    _objc_release(param_3);
  }
  return;
}



/* Entry: 1061b0e14; end: 1061b0e5f; -[SCMainCameraBottomMenuViewContainerHandlingFeature .cxx_destruct] */

void FUN_1061b0e14(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061b0e60; end: 1061b0f1b;  */

void FUN_1061b0e60(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126c87f0;
    _objc_alloc(PTR_PTR_1126c87f0);
    uVar5 = *(undefined8 *)(lVar1 + 0x20);
    uVar6 = *(undefined8 *)(lVar1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0c7a40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c027e60(puVar4,param_2,uVar5,uVar6,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1061b0f1c; end: 1061b0f4b;  */

bool FUN_1061b0f1c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1061b0f4c; end: 1061b1057;  */

void FUN_1061b0f4c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126c87f8;
    _objc_alloc(PTR_PTR_1126c87f8);
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c0b68a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf20380();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11a2a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(lVar1 + 0x48);
    uVar6 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c0b6880(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff9440(puVar8,param_2,uVar4,uVar5,uVar7,uVar6);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1061b1058; end: 1061b10bf;  */

undefined8 FUN_1061b1058(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c071800();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1061b10c0; end: 1061b116f; -[SCMainCameraPresentationNavigationFeaturePlugin _isBottomResetFeatureEnabled] */

bool FUN_1061b10c0(long param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  uVar2 = *(ulong *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c237120();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf926c0();
    _objc_release(uVar4);
    if ((int)uVar5 == 0) {
      bVar1 = false;
    }
    else {
      lVar6 = *(long *)(param_1 + 0x28);
      func_0x00010c269d40(lVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf1ff60();
      _objc_release(lVar6);
      bVar1 = lVar7 == 3;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 1061b1170; end: 1061b1207; -[SCMainCameraPresentationNavigationFeaturePlugin .cxx_destruct] */

void FUN_1061b1170(long param_1)

{
  _objc_destroyWeak(param_1 + 0x58);
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



/* Entry: 1061b1208; end: 1061b1213; -[SCLensCrashFuseServices .cxx_destruct] */

void FUN_1061b1208(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061b1214; end: 1061b1743; -[SCCameraAddToStoryCameraLensFeatureProviderPluginWorkflow initWithPrivateFeatureContainer:cameraUIScope:applicationLifecycleEvents:userSession:navigationServices:lensFavoritesServices:lensContentServices:currentPageTracker:grapheneRegistry:lensPerformerServices:lensLoggerServices:lensExplorerConfigurableNavigatonServices:lensExplorerNavigatonServices:lensExplorerDataServices:lensUnlockServices:userNetworkServices:lensMediaDownloaderFactory:userStorageServices:lensExplorerStudySettingsServices:lensFavoritesLoggingServices:lensFavoriteNotificationServices:lensExplorerBadgeServices:lensPickerServices:cameraHardwareResource:deeplinkSendToScopeExposer:offPlatformLinkGenerationService:cameraUIServices:lensCarouselManager:lensInfoButtonVisibility:] */

undefined8 *
FUN_1061b1214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  puStack_70 = PTR_PTR_1126f0278;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_4);
    _objc_storeWeak(puVar1 + 2,param_5);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 4,param_6);
    _objc_storeWeak(puVar1 + 6,param_3);
    _objc_storeWeak(puVar1 + 7,param_8);
    _objc_storeWeak(puVar1 + 9,param_9);
    _objc_storeWeak(puVar1 + 0xb,param_11);
    _objc_storeWeak(puVar1 + 0xe,param_12);
    _objc_storeWeak(puVar1 + 0x12,param_13);
    _objc_storeWeak(puVar1 + 0xf,param_14);
    _objc_storeWeak(puVar1 + 0x10,param_15);
    _objc_storeWeak(puVar1 + 0x13,param_17);
    _objc_storeWeak(puVar1 + 0x14,param_18);
    _objc_storeWeak(puVar1 + 0x15,param_19);
    _objc_storeWeak(puVar1 + 0x16,param_20);
    _objc_storeWeak(puVar1 + 0x17,param_21);
    _objc_storeWeak(puVar1 + 0x11,param_16);
    _objc_storeWeak(puVar1 + 10,param_22);
    _objc_storeWeak(puVar1 + 0x18,param_23);
    _objc_storeWeak(puVar1 + 0xc,param_24);
    _objc_storeWeak(puVar1 + 0xd,param_25);
    _objc_retain(param_26);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_26;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x19,param_27);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_28;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x1a,param_29);
    _objc_retain(param_30);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_31;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_10);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_10);
  }
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



/* Entry: 1061b1744; end: 1061b176b;  */

void FUN_1061b1744(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061b176c; end: 1061b17e3; -[SCCameraAddToStoryCameraLensFeatureProviderPluginWorkflow configureCameraFeatureCapabilities:publicCameraFeatureCatalog:] */

void FUN_1061b176c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c092b00(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1265e0(param_3,param_2,uVar1,10);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1061b17e4; end: 1061b17eb; -[SCCameraAddToStoryCameraLensFeatureProviderPluginWorkflow cameraFeatureCategory] */

undefined8 FUN_1061b17e4(void)

{
  return 0;
}



/* Entry: 1061b17ec; end: 1061b17f3; -[SCCameraAddToStoryCameraLensFeatureProviderPluginWorkflow pluginResolutionOrder] */

undefined8 FUN_1061b17ec(void)

{
  return 2;
}



/* Entry: 1061b17f4; end: 1061b1d43; -[SCCameraAddToStoryCameraLensFeatureProviderPluginWorkflow setupCameraFeaturesWithPublicCameraFeatureCatalog:withActivationServices:publicCameraFeatureCatalogProvider:] */

void FUN_1061b17f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
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
  long lVar26;
  undefined8 uVar27;
  undefined **ppuVar28;
  undefined **ppuVar29;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  byte bStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010bf80f00();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    lVar4 = param_1 + 0x80;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c093320();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9b3e0();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  lVar7 = param_1;
  func_0x00010be4ac40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010be4ac80();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126c8800;
  _objc_alloc();
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar5 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar6 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar10 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar11 = param_1 + 0xc0;
  _objc_loadWeakRetained();
  lVar12 = param_1 + 0x48;
  _objc_loadWeakRetained();
  lVar13 = param_1 + 0x50;
  _objc_loadWeakRetained();
  lVar14 = param_1 + 0x90;
  _objc_loadWeakRetained();
  lVar15 = param_1 + 0x58;
  _objc_loadWeakRetained();
  lVar16 = param_1 + 0x60;
  _objc_loadWeakRetained();
  lVar17 = param_1 + 0x70;
  _objc_loadWeakRetained();
  lVar18 = param_1 + 0x78;
  _objc_loadWeakRetained();
  lVar19 = param_1 + 0x80;
  _objc_loadWeakRetained();
  lVar20 = param_1 + 0x68;
  _objc_loadWeakRetained();
  lVar21 = param_1;
  func_0x00010be4b300();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1;
  func_0x00010be4ab00();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  func_0x00010be4b300();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1;
  func_0x00010be4a740();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + 200;
  _objc_loadWeakRetained();
  lVar26 = param_1 + 0xd0;
  _objc_loadWeakRetained();
  func_0x00010bffbce0();
  uVar27 = *(undefined8 *)(param_1 + 0x100);
  *(undefined **)(param_1 + 0x100) = puVar9;
  _objc_release(uVar27);
  _objc_retain(puVar9);
  _objc_release(lVar26);
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
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010be4a6c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf46f40(puVar9);
  _objc_release(param_5);
  _objc_release(lVar4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1061b1d44;
  puStack_98 = &UNK_1109141b8;
  lStack_90 = param_1;
  _objc_retain(param_4);
  ppuVar28 = &puStack_b0;
  uStack_88 = param_4;
  bStack_80 = (byte)uVar3 ^ 1;
  FUN_1061b1d44(ppuVar28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bb7c0(param_3);
  _objc_release(param_3);
  _objc_release(ppuVar28);
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_1061b2120;
  puStack_c8 = &UNK_11084ea10;
  lStack_c0 = param_1;
  uStack_b8 = param_4;
  _objc_retain(param_4);
  ppuVar29 = &puStack_e0;
  FUN_1061b2120();
  _objc_retainAutoreleasedReturnValue();
  ppuVar28 = ppuVar29;
  func_0x00010bf46aa0();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)ppuVar28[2])();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(ppuVar28);
  _objc_release(ppuVar29);
  _objc_release(uStack_b8);
  _objc_release(uStack_88);
  _objc_release(param_4);
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  return;
}



/* Entry: 1061b1d44; end: 1061b1eb7;  */

void FUN_1061b1d44(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_90 [8];
  undefined1 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0daba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1061b1eb8;
  puStack_68 = &UNK_110914188;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_58);
  uStack_88 = *(undefined1 *)(param_1 + 0x30);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061b1eb8; end: 1061b20e3;  */

void FUN_1061b1eb8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  undefined8 uVar19;
  undefined *puVar20;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar20 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c8808;
    _objc_alloc();
    uVar19 = *(undefined8 *)(param_1 + 0xd8);
    lVar2 = param_1 + 0x60;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c092ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + 0x78;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c092bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010bf2bbc0();
    lVar8 = param_1;
    func_0x00010be4ac40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + 0x90;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010c094e60();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1 + 0x88;
    _objc_loadWeakRetained();
    lVar12 = param_1 + 0x70;
    _objc_loadWeakRetained();
    lVar13 = lVar12;
    func_0x00010c095b60();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_1 + 0xa8;
    _objc_loadWeakRetained();
    lVar15 = param_1 + 0xb0;
    _objc_loadWeakRetained();
    lVar16 = lVar15;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_1 + 0xd0;
    _objc_loadWeakRetained();
    lVar18 = lVar17;
    func_0x00010bf2b640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c022fc0(puVar1,param_2,uVar19,lVar3,lVar5,lVar7,lVar8,lVar10,lVar11,lVar13,lVar14,
                        lVar16,lVar18,0,0);
    puVar20 = puVar1;
    func_0x00010c09ac60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
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
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return;
}



/* Entry: 1061b20e4; end: 1061b211f;  */

byte FUN_1061b20e4(long param_1)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x28);
  }
  _objc_release();
  return bVar2 & 1;
}



/* Entry: 1061b2120; end: 1061b228b;  */

void FUN_1061b2120(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  puVar3 = PTR_PTR_1126b0110;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0daba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1061b228c;
  puStack_68 = &UNK_1109141e8;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010c124f00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1061b228c; end: 1061b2363;  */

void FUN_1061b228c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126c8810;
    _objc_alloc(PTR_PTR_1126c8810);
    uVar6 = *(undefined8 *)(param_1 + 0xd8);
    lVar1 = param_1 + 0x98;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c278c20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + 0x70;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c095b60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c023080(puVar5,param_2,uVar6,lVar2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1061b2364; end: 1061b23db;  */

bool FUN_1061b2364(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1061b23dc; end: 1061b2473; -[SCCameraAddToStoryCameraLensFeatureProviderPluginWorkflow _lensCollectionUIContenders:] */

void FUN_1061b23dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1061b2474;
  puStack_30 = &UNK_110857568;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061b2474; end: 1061b2757;  */

void FUN_1061b2474(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  long lVar23;
  
  puVar4 = PTR_PTR_1126c8818;
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0913e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c140300();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c8818;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c096a80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c140300();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126c8818;
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c093c40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c140300();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c091720();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c093b00();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010c096aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf11ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae720,PTR_s_automaticCreationWithInitializat_1125a21a0,
             &PTR___NSConcreteGlobalBlock_110914238);
  return;
}



/* Entry: 1061b2758; end: 1061b276b; -[SCCameraAddToStoryCameraLensFeatureProviderPluginWorkflow _lensFavoritesLayoutStrategy] */

void FUN_1061b2758(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf11ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae720,PTR_s_automaticCreationWithInitializat_1125a21a0,
             &PTR___NSConcreteGlobalBlock_110914238);
  return;
}



/* Entry: 1061b276c; end: 1061b278f;  */

void FUN_1061b276c(void)

{
  _objc_alloc(PTR_PTR_1126c8820);
  func_0x00010c037be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061b2790; end: 1061b28eb; -[SCCameraAddToStoryCameraLensFeatureProviderPluginWorkflow _lensLeftFromFavoritesButtonLayoutStrategy:isForCollectionsBackButton:] */

void FUN_1061b2790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1061b2838;
  puStack_48 = &UNK_110914258;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_40);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061b28ec; end: 1061b29c7;  */

void FUN_1061b28ec(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11a2a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  _objc_alloc(PTR_PTR_1126b0120);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c03d8e0(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061b29c8; end: 1061b2a37;  */

void FUN_1061b29c8(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c093b00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1061b2a38; end: 1061b2a4b; -[SCCameraAddToStoryCameraLensFeatureProviderPluginWorkflow _lensExplorerButtonStrategy:] */

void FUN_1061b2a38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf11ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae720,PTR_s_automaticCreationWithInitializat_1125a21a0,
             &PTR___NSConcreteGlobalBlock_110914288);
  return;
}


