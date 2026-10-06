/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1070117d0; end: 107011837; -[SCCameraOverlayView hidableTopLeftViewContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070117d0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112762880;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126d40d8;
    _objc_alloc();
    func_0x00010bffb1e0();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107011838; end: 1070118c7; -[SCCameraOverlayView bottomViewContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107011838(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112762874;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126d40d0;
    _objc_alloc();
    lVar3 = param_1;
    func_0x00010bf2b240(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c033d80(puVar1,param_2,param_1,lVar3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    _objc_release(lVar3);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1070118c8; end: 10701190b; -[SCCameraOverlayView _createHidableViewContainer:] */

void FUN_1070118c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bdf5820(param_1,param_2,0,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06c20(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10701190c; end: 10701195b; -[SCCameraOverlayView _createHidableFooterViewContainer:] */

void FUN_10701190c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bdf5820(param_1,param_2,0,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06c20(param_1,param_2,uVar1);
  func_0x00010bdcd160(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10701195c; end: 107011c03; -[SCCameraOverlayView hidableBottomLensCollectionViewContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701195c(ulong param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  double dStack_88;
  undefined8 uStack_80;
  
  lVar9 = (long)_DAT_112762884;
  lVar8 = *(long *)(param_1 + lVar9);
  if (lVar8 != 0) {
    _objc_retain(lVar8);
    goto LAB_107011bdc;
  }
  if ((*(char *)(param_1 + (long)_DAT_112762848) == '\x01') &&
     (*(long *)(param_1 + (long)_DAT_1127627ec) == 9)) {
    dVar11 = *(double *)(param_1 + (long)_DAT_112762888) + 23.0;
LAB_107011a70:
    uVar2 = param_1;
    func_0x00010bf2b240(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar10 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x0001008522a8();
    iVar1 = (int)uVar2;
    if ((uVar2 & 1) == 0) {
LAB_107011a48:
      if (*(long *)(param_1 + (long)_DAT_1127627ec) == 9) {
        func_0x000100478f84();
        if (iVar1 != 0) {
          dVar11 = 23.0;
          func_0x0001007f8afc();
          if (iVar1 == 0) goto LAB_107011a70;
        }
        dVar11 = 99.0;
        goto LAB_107011a70;
      }
      uVar2 = param_1;
      func_0x00010bf2b240(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar10 = 0;
      dVar11 = 34.0;
    }
    else {
      uVar2 = param_1;
      func_0x00010be41480();
      iVar1 = (int)uVar2;
      if ((uVar2 & 1) != 0) goto LAB_107011a48;
      if (*(long *)(param_1 + (long)_DAT_1127627ec) == 9) {
        uVar2 = param_1;
        func_0x00010bf2b240(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        uVar10 = 0;
        dVar11 = 23.0;
      }
      else {
        uVar3 = *(ulong *)(param_1 + (long)_DAT_1127627e0);
        func_0x00010bf1ff80(uVar3);
        _objc_retainAutoreleasedReturnValue();
        dVar11 = 26.0;
        uVar10 = 1;
      }
    }
  }
  uVar2 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d40e0;
  _objc_alloc();
  uVar5 = param_1;
  func_0x00010bfe12e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf2b240(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_a8 = 0x4024000000000000;
  uStack_b0 = 0;
  uStack_98 = 0x4024000000000000;
  uStack_a0 = 0;
  uStack_80 = 0x4024000000000000;
  uStack_90 = uVar10;
  dStack_88 = dVar11;
  func_0x00010c033f20(puVar4,param_2,uVar5,uVar3,uVar2,uVar7,&uStack_b0);
  uVar10 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar4;
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  lVar8 = *(long *)(param_1 + lVar9);
  _objc_retain(lVar8);
  _objc_release(uVar2);
  _objc_release(uVar3);
LAB_107011bdc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 107011c04; end: 107011c5f; -[SCCameraOverlayView updateDirectorModeThumbnailOverlapContribution:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107011c04(double param_1,long param_2)

{
  if (((*(char *)(param_2 + _DAT_112762848) == '\x01') && (*(long *)(param_2 + _DAT_1127627ec) == 9)
      ) && (*(double *)(param_2 + _DAT_112762888) != param_1)) {
    *(double *)(param_2 + _DAT_112762888) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c284410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1 + 23.0,*(undefined8 *)(param_2 + _DAT_112762884),
               PTR_s_updateCenterYOffset__11267eb28);
    return;
  }
  return;
}



/* Entry: 107011c60; end: 107011db3; -[SCCameraOverlayView hidableBottomMediaPickerContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107011c60(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_11276288c;
  lVar6 = *(long *)(param_1 + lVar7);
  if (lVar6 == 0) {
    uVar3 = param_1;
    func_0x0001008522a8();
    uVar2 = param_1;
    if (((int)uVar3 == 0) || (uVar3 = param_1, func_0x00010be41480(), (uVar3 & 1) != 0)) {
      puVar1 = PTR_PTR_1126d40e8;
      _objc_alloc();
      func_0x00010bfe12e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010bf1ff80(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010bf34860(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c033d60(puVar1,param_2,uVar2,uVar3,uVar4);
    }
    else {
      puVar1 = PTR_PTR_1126d40e8;
      _objc_alloc();
      func_0x00010bfe12e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)_DAT_1127627e0;
      uVar3 = *(ulong *)(param_1 + lVar6);
      func_0x00010bf1ff80(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(ulong *)(param_1 + lVar6);
      func_0x00010bf34860(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c033f40(puVar1,param_2,uVar2,uVar3,uVar4);
    }
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar1;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar6 = *(long *)(param_1 + lVar7);
  }
  _objc_retain(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 107011db4; end: 107011df7; -[SCCameraOverlayView _isIpad] */

bool FUN_107011db4(long param_1)

{
  long lVar1;
  
  func_0x000100478fc4();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x0001007f8b88();
  _objc_release(param_1);
  return lVar1 - 3U < 2;
}



/* Entry: 107011df8; end: 107011dff; -[SCCameraOverlayView isAccessibilityElement] */

undefined8 FUN_107011df8(void)

{
  return 0;
}



/* Entry: 107011e00; end: 107011e07; -[SCCameraOverlayView convertPointIntoWindowPoint:] */

void FUN_107011e00(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf512b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_convertPoint_toView__1125b1e50,0);
  return;
}



/* Entry: 107011e08; end: 107011f6b; -[SCCameraOverlayView normalizedPointsForLensGesture:] */

void FUN_107011e08(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  double dVar5;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  _objc_retain(param_7);
  func_0x00010c094220(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  if ((param_3 <= 0.0) || (param_4 <= 0.0)) {
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    func_0x00010bf20c00(param_5);
    param_3 = 1.0 / param_3;
    func_0x00010bf20c00(param_5);
    param_4 = 1.0 / param_4;
    _CGAffineTransformMakeScale(&dStack_80,param_3,param_4);
    uVar4 = param_7;
    func_0x00010c0df520();
    if (uVar4 != 0) {
      uVar4 = 0;
      do {
        func_0x00010c09f140(param_7,param_6,uVar4,param_5);
        dVar5 = dStack_78 * param_3;
        param_3 = dStack_60 + dStack_70 * param_4 + dStack_80 * param_3;
        param_4 = dStack_58 + dStack_68 * param_4 + dVar5;
        puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c297180(param_3,PTR__OBJC_CLASS___NSValue_1126afdf8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_6,puVar3);
        _objc_release(puVar3);
        uVar4 = uVar4 + 1;
        uVar2 = param_7;
        func_0x00010c0df520();
      } while (uVar4 < uVar2);
    }
    puVar3 = puVar1;
    func_0x00010bf51e00(puVar1);
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107011f6c; end: 10701233b; -[SCCameraOverlayView updateLensGestureViewFrameWithFrameRenderRegion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107011f6c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = (long)_DAT_112762828;
  dVar17 = param_1;
  if (*(long *)(param_5 + lVar12) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar1 = *(undefined8 *)(param_5 + lVar12);
    *(undefined8 *)(param_5 + lVar12) = 0;
    _objc_release(uVar1);
  }
  lVar10 = (long)_DAT_1127627e0;
  uVar1 = *(undefined8 *)(param_5 + lVar10);
  func_0x00010c0f0780(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(uVar1);
  func_0x00010c08cd20(*(undefined8 *)(param_5 + lVar10));
  _CGRectGetWidth();
  dVar13 = dVar17;
  func_0x00010c08cd20(*(undefined8 *)(param_5 + lVar10));
  _CGRectGetHeight();
  dVar14 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar15 = param_1;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  dVar16 = dVar15;
  func_0x00010c08cd20(*(undefined8 *)(param_5 + lVar10));
  _CGRectGetWidth();
  if (0.0 < dVar16) {
    func_0x00010c08cd20(*(undefined8 *)(param_5 + lVar10));
    _CGRectGetHeight();
    if ((0.0 < dVar16) && (dVar17 = (dVar17 / dVar13) * (dVar14 / dVar15), 0.0 < dVar17)) {
      _CGRectGetWidth(param_1,param_2,param_3,param_4);
      lVar11 = (long)_DAT_112762818;
      uVar1 = *(undefined8 *)(param_5 + lVar11);
      if (param_1 == 1.0) {
        func_0x00010c2a5060();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *(undefined8 *)(param_5 + lVar10);
        func_0x00010c2a5060(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar1;
        func_0x00010bf493a0(uVar1,param_6,uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_5 + lVar11);
        uStack_c8 = uVar5;
        func_0x00010c2a5060();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_5 + lVar11);
        func_0x00010bfe0660(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar3;
        func_0x00010bf493e0(dVar17,uVar3,param_6,uVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = &uStack_c8;
        uStack_c0 = uVar6;
      }
      else {
        func_0x00010bfe0660();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *(undefined8 *)(param_5 + lVar10);
        func_0x00010bfe0660(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar1;
        func_0x00010bf493a0(uVar1,param_6,uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_5 + lVar11);
        uStack_d8 = uVar5;
        func_0x00010c2a5060();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_5 + lVar11);
        func_0x00010bfe0660(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar3;
        func_0x00010bf493e0(dVar17,uVar3,param_6,uVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = &uStack_d8;
        uStack_d0 = uVar6;
      }
      goto LAB_1070121fc;
    }
  }
  lVar11 = (long)_DAT_112762818;
  uVar1 = *(undefined8 *)(param_5 + lVar11);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_5 + lVar10);
  func_0x00010bfe0660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf493a0(uVar1,param_6,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_5 + lVar11);
  uStack_b8 = uVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_5 + lVar10);
  func_0x00010c2a5060(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf493a0(uVar3,param_6,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = &uStack_b8;
  uStack_b0 = uVar6;
LAB_1070121fc:
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,puVar8,2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_5 + lVar12);
  *(undefined **)(param_5 + lVar12) = puVar7;
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_6,
                      *(undefined8 *)(param_5 + lVar12));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c116620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0697e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 10701233c; end: 10701236b; -[SCCameraOverlayView interruptButtonTouchesBeforeRecording] */

void FUN_10701233c(undefined8 param_1)

{
  func_0x00010c116620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0697e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10701236c; end: 1070123db; -[SCCameraOverlayView setAlpha:] */

void FUN_10701236c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f83c8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setAlpha__112637810);
  func_0x00010bfe4860(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1070123dc; end: 10701241f; -[SCCameraOverlayView cameraSystemSafeAreaLayoutGuide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070123dc(long param_1)

{
  if (*(char *)(param_1 + _DAT_112762848) == '\x01') {
    func_0x00010c267240(*(undefined8 *)(param_1 + _DAT_11276284c));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107012420; end: 107012463; -[SCCameraOverlayView cameraDirectorModeTopLayoutGuide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107012420(long param_1)

{
  if (*(char *)(param_1 + _DAT_112762848) == '\x01') {
    func_0x00010bf7f800(*(undefined8 *)(param_1 + _DAT_11276284c));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107012464; end: 1070124a3;  */

void FUN_107012464(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf25c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1070124a4; end: 1070126b3; -[SCCameraOverlayView _createReplyCameraBackButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070124a4(double param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  bVar4 = *(long *)(param_2 + _DAT_1127627ec) == 9;
  bVar1 = bVar4 & *(byte *)(param_2 + _DAT_112762848);
  bVar2 = !bVar4 & *(byte *)(param_2 + _DAT_112762848);
  if ((bVar4) && (bVar1 == 0)) {
    func_0x0001091fffc8();
    dVar9 = 16.0;
  }
  else {
    if (bVar2 != 0) {
      uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
      uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
      uVar10 = *(undefined8 *)PTR__CGRectZero_110347608;
      param_1 = *(double *)(PTR__CGRectZero_110347608 + 8);
      goto LAB_107012540;
    }
    func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
    dVar9 = 5.0;
  }
  param_1 = param_1 + dVar9;
  uVar10 = 0x4020000000000000;
  uVar11 = 0x4044000000000000;
  uVar12 = 0x4044000000000000;
LAB_107012540:
  puVar5 = PTR_PTR_1126b6138;
  _objc_alloc(PTR_PTR_1126b6138);
  func_0x00010c013de0(uVar10,param_1,uVar11,uVar12);
  lVar6 = param_2;
  func_0x00010bf6b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd40(puVar5);
  _objc_release(lVar6);
  func_0x00010c1a7f60(puVar5);
  func_0x00010bdc87e0(param_2);
  if (bVar1 == 0) {
    if (bVar2 != 0) {
      func_0x00010c0679c0(*(undefined8 *)(param_2 + _DAT_11276284c));
    }
  }
  else {
    func_0x00010c0679a0(*(undefined8 *)(param_2 + _DAT_11276284c));
  }
  ppuVar7 = &PTR____CFConstantStringClassReference_110e1b618;
  func_0x00010c160fc0(puVar5);
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1b618,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(puVar5);
  _objc_release(ppuVar7);
  puVar3 = PTR_PTR_1126b08d8;
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100b74f58(0x3ff0000000000000,0x3fe0000000000000,0,0x3fe0000000000000,puVar3,puVar5,
                      puVar8);
  _objc_release(puVar8);
  func_0x00010c21d680(puVar5);
  func_0x00010c1aac60(puVar5);
  func_0x00010bea6c60(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1070126b4; end: 107012717; -[SCCameraOverlayView setReplyCameraBackButtonStyle:] */

void FUN_1070126b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c131ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea6c60(param_1,param_2,uVar2,param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107012718; end: 10701283f; -[SCCameraOverlayView _setReplyCameraBackButton:withStyle:] */

void FUN_107012718(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c21e900(param_3,param_2,1);
  if (param_4 == 2) {
    func_0x00010c1a9f00(param_3,param_2,0);
    func_0x00010c21e900(param_3,param_2,0);
  }
  else {
    if (param_4 == 1) {
      puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                          &PTR____CFConstantStringClassReference_110db68f8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00(param_3,param_2,puVar1);
    }
    else {
      if (param_4 != 0) goto LAB_107012828;
      func_0x00010b87f3b0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf833a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c14d100(puVar2,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00(param_3,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
  }
LAB_107012828:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107012840; end: 10701289f; -[SCCameraOverlayView setCameraPermissionMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107012840(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112762894;
  lVar1 = *(long *)(param_1 + lVar3);
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010bdebb60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = lVar1;
    _objc_release(uVar2);
    lVar1 = *(long *)(param_1 + lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1c8c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_setMode__11264fd40,param_3);
  return;
}



/* Entry: 1070128a0; end: 107012ae3; -[SCCameraOverlayView _createCameraPermissionView] */

void FUN_1070128a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  undefined8 uVar13;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d40f0;
  _objc_alloc();
  uVar2 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00a2c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010bdc87e0(param_1,param_2,puVar1);
  func_0x00010c219b60(puVar1,param_2,0);
  puVar3 = puVar1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf493a0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar3);
  func_0x00010c1e3380(0x443b8000,puVar4);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf34860(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf493a0(puVar5,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  puStack_80 = puVar6;
  puStack_78 = puVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b240();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 0xc030000000000000;
  puVar9 = puVar7;
  func_0x00010bf49520(0xc030000000000000,puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  iVar12 = 3;
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(param_1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar11);
  _objc_retain(param_5);
  if (iVar12 == 0) {
    func_0x00010c12c960(puVar11);
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5);
    }
  }
  else {
    func_0x00010c21e900(puVar11,param_2,0);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_107012c24;
    puStack_e0 = &UNK_110842e18;
    _objc_retain(puVar11);
    puStack_128 = puVar3;
    uStack_120 = 0xc2000000;
    uStack_118 = 0x107012c98;
    puStack_110 = &UNK_110858070;
    puStack_d8 = puVar11;
    _objc_retain(puVar11);
    puStack_108 = puVar11;
    _objc_retain(param_5);
    lStack_100 = param_5;
    func_0x00010bf03460(0x3fd3333333333333,uVar13,0x3fe6666666666666,0,puVar1,param_2,0,&puStack_f8,
                        &puStack_128);
    _objc_release(lStack_100);
    _objc_release(puStack_108);
    _objc_release(puStack_d8);
  }
  _objc_release(param_5);
  _objc_release(puVar11);
  return;
}



/* Entry: 107012ae4; end: 107012c23; -[SCCameraOverlayView _dismissTooltip:animated:delay:completion:] */

void FUN_107012ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_5 == 0) {
    func_0x00010c12c960(param_4);
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6);
    }
  }
  else {
    func_0x00010c21e900(param_4,param_3,0);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107012c24;
    puStack_50 = &UNK_110842e18;
    _objc_retain(param_4);
    puStack_98 = puVar1;
    uStack_90 = 0xc2000000;
    uStack_88 = 0x107012c98;
    puStack_80 = &UNK_110858070;
    uStack_48 = param_4;
    _objc_retain(param_4);
    uStack_78 = param_4;
    _objc_retain(param_6);
    lStack_70 = param_6;
    func_0x00010bf03460(0x3fd3333333333333,param_1,0x3fe6666666666666,0,puVar2,param_3,0,&puStack_68
                        ,&puStack_98);
    _objc_release(lStack_70);
    _objc_release(uStack_78);
    _objc_release(uStack_48);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 107012c24; end: 107012cd3;  */

void FUN_107012c24(long param_1,undefined8 param_2)

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
  
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x20));
  _CGAffineTransformMakeTranslation(&uStack_50,0,0xc03e000000000000);
  _CGAffineTransformScale(&uStack_80,0x3f847ae147ae147b,0x3f847ae147ae147b,&uStack_50);
  uStack_48 = uStack_78;
  uStack_50 = uStack_80;
  uStack_38 = uStack_68;
  uStack_40 = uStack_70;
  uStack_28 = uStack_58;
  uStack_30 = uStack_60;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_50);
  return;
}



/* Entry: 107012cd4; end: 107012e9f; -[SCCameraOverlayView _makeLensesActiviationTooltip] */

void FUN_107012cd4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c013de0(0,0,0x406e000000000000,0x404a000000000000);
  func_0x00010c1a7f60();
  func_0x00010c1677c0(0,puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fe999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4030800000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1);
  _objc_release(puVar2);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e98a98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e98a98,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar1);
  _objc_release(ppuVar3);
  func_0x00010c213040(puVar1);
  func_0x00010c16f5a0(puVar1);
  func_0x00010c1cfce0(puVar1);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x4014000000000000;
  func_0x00010c1842e0(0x4014000000000000);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar2);
  func_0x00010bf20c00(param_1);
  _CGRectGetMidX();
  uVar5 = uVar4;
  func_0x00010bf20c00(param_1);
  _CGRectGetMidY();
  func_0x00010c17a6a0(uVar4,uVar5,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107012ea0; end: 107012f0b; -[SCCameraOverlayView lensesActivationTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107012ea0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112762898;
  lVar2 = *(long *)(param_1 + lVar3);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010be5bd80();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = lVar2;
    _objc_release(uVar1);
    func_0x00010bdc87e0(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
    lVar2 = *(long *)(param_1 + lVar3);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107012f0c; end: 107012f47; -[SCCameraOverlayView cameraTimerCopy] */

void FUN_107012f0c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf2b240();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf51e00();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107012f48; end: 107012f7b; -[SCCameraOverlayView insertSubview:atIndex:] */

void FUN_107012f48(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f83c8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_insertSubview_atIndex__1125f75f8);
  return;
}



/* Entry: 107012f7c; end: 107012fdb; -[SCCameraOverlayView _insertSublayer:atIndexInFrontOfLiveDisplay:] */

void FUN_107012f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066f40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107012fdc; end: 10701318b; -[SCCameraOverlayView _showCameraHelpTooltip:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107012fdc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c06de20();
  if ((uVar1 & 1) == 0) {
    _objc_initWeak(auStack_48,param_1);
    lVar5 = (long)_DAT_112762838;
    puVar2 = *(undefined **)(param_1 + lVar5);
    func_0x00010c273f00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c268580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR_PTR_1126d40f8;
      if (*(char *)(param_1 + (long)_DAT_112762848) == '\0') {
        _objc_alloc(PTR_PTR_1126d40f8);
        func_0x00010c014fc0(*(undefined8 *)PTR__CGRectZero_110347608,
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      }
      else {
        _objc_alloc(PTR_PTR_1126d40f8);
        func_0x00010bf20c00(param_1);
        func_0x00010c01aaa0(puVar3);
      }
    }
    else if (*(char *)(param_1 + (long)_DAT_112762848) != '\0') {
      func_0x00010bf20c00(param_1);
      func_0x00010c286520(puVar3);
    }
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c273f00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c23a660(uVar4);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_50);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10701318c; end: 1070131b7;  */

void FUN_10701318c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be59a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070131b8; end: 1070131f7; -[SCCameraOverlayView _hideCameraHelpTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070131b8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762838);
  func_0x00010c273f00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe2b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070131f8; end: 10701325b; -[SCCameraOverlayView _logTakePhotoTooltipShownWithOneAttempt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070131f8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d4100;
  _objc_opt_new(PTR_PTR_1126d4100);
  func_0x00010c16b460();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112762840);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10701325c; end: 1070132bf; -[SCCameraOverlayView _logTakePhotoTooltipCompleteWithOneAttempt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701325c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d4108;
  _objc_opt_new(PTR_PTR_1126d4108);
  func_0x00010c16b460();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112762840);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070132c0; end: 107013323; -[SCCameraOverlayView _logLensTooltipShownWithOneAttempt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070132c0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d4110;
  _objc_opt_new(PTR_PTR_1126d4110);
  func_0x00010c16b460();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112762840);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107013324; end: 107013387; -[SCCameraOverlayView _logLensTooltipCompleteWithOneAttempt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107013324(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d4118;
  _objc_opt_new(PTR_PTR_1126d4118);
  func_0x00010c16b460();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112762840);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107013388; end: 1070133c3; -[SCCameraOverlayView _hideCameraHelpTooltipWithLogging] */

void FUN_107013388(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c06de20();
  if ((int)uVar1 != 0) {
    func_0x00010be59a00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be355b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideCameraHelpTooltip_11256af08);
    return;
  }
  return;
}



/* Entry: 1070133c4; end: 10701341b; -[SCCameraOverlayView showLensesActivationTooltip] */

void FUN_1070133c4(undefined8 param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e98a98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e98a98,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bd4e0(param_1);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be55410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logLensTooltipShownWithOneAttem_112572ea0);
  return;
}



/* Entry: 10701341c; end: 10701344b; -[SCCameraOverlayView showLensesActivationTooltipWithText:] */

void FUN_10701341c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c1bd4e0(param_1,param_2,1,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x00010be55410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logLensTooltipShownWithOneAttem_112572ea0);
  return;
}



/* Entry: 10701344c; end: 10701348b; -[SCCameraOverlayView hideLensesActivationTooltipAnimated:] */

void FUN_10701344c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0769a0();
  if ((int)uVar1 != 0) {
    func_0x00010be553e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1bd4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setLensesActivationTooltipVisibl_11264cf60,0,0,param_3);
  return;
}



/* Entry: 10701348c; end: 10701365b; -[SCCameraOverlayView setLensesActivationTooltipVisible:text:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701348c(double param_1,long param_2,undefined8 param_3,int param_4,undefined8 param_5,
                  int param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  double dVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_2 + _DAT_112762898);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  _CACurrentMediaTime();
  if (param_4 == 0) {
    dVar4 = 2.0;
    if (param_1 - dRam00000001136c9fa0 <= 2.0) {
      dVar4 = param_1 - dRam00000001136c9fa0;
    }
    uVar1 = 0x3fd3333333333333;
    dVar4 = 2.0 - dVar4;
    if (param_6 == 0) {
      uVar1 = 0;
      dVar4 = 0.0;
    }
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_107013694;
    puStack_78 = &UNK_110842e18;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x1070136ac;
    puStack_a0 = &UNK_110841f20;
    lStack_98 = param_2;
    lStack_70 = param_2;
    func_0x00010bf03440(uVar1,dVar4,PTR__OBJC_CLASS___UIView_1126aec20,param_3,4,&puStack_90,
                        &puStack_b8);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    dRam00000001136c9fa0 = param_1;
    func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,param_5);
    if (((ulong)puVar2 & 1) == 0) {
      lVar3 = param_2;
      func_0x00010c098260(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
      _objc_release(lVar3);
    }
    lVar3 = param_2;
    func_0x00010c098260(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar3);
    uVar1 = 0x3fd3333333333333;
    if (param_6 == 0) {
      uVar1 = 0;
    }
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10701365c;
    puStack_50 = &UNK_110842e18;
    lStack_48 = param_2;
    func_0x00010bf03400(uVar1,PTR__OBJC_CLASS___UIView_1126aec20,param_3,&puStack_68);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 10701365c; end: 107013693;  */

void FUN_10701365c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c098260(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107013694; end: 1070136cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107013694(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112762898),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1070136cc; end: 107013717; -[SCCameraOverlayView isLensesActivationTooltipVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1070136cc(double param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112762898;
  uVar2 = *(ulong *)(param_2 + lVar3);
  bVar1 = false;
  if (uVar2 != 0) {
    func_0x00010c074c20();
    if ((uVar2 & 1) == 0) {
      func_0x00010bf01b40(*(undefined8 *)(param_2 + lVar3));
      bVar1 = 0.0 < param_1;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}



/* Entry: 107013718; end: 107013a0f; -[SCCameraOverlayView showSnapBackQuickTapToDismissTooltip] */

/* WARNING: Possible PIC construction at 0x00010701377c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107013780) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107013718(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + _DAT_1127628a4) == 0) {
    func_0x00010bdd6b60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    uVar1 = 0;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
      return;
    }
    ___stack_chk_fail();
    param_1 = *(long *)(param_1 + 0x20);
    uVar1 = 0x3ff0000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,param_1,PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107013a10; end: 107013a1b;  */

void FUN_107013a10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107013a1c; end: 107013aaf; -[SCCameraOverlayView hideSnapBackQuickTapToDismissTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107013a1c(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(long *)(param_1 + _DAT_1127628a4) != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_107013ab0;
    puStack_20 = &UNK_110842e18;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_107013ac8;
    puStack_48 = &UNK_110841f20;
    lStack_40 = param_1;
    lStack_18 = param_1;
    func_0x00010bf03420(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_38,
                        &puStack_60);
  }
  return;
}



/* Entry: 107013ab0; end: 107013ac7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107013ab0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127628a4),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107013ac8; end: 107013b03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107013ac8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127628a4;
  func_0x00010c12c960(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107013b04; end: 107013d03; -[SCCameraOverlayView _buildSnapBackDismissTooltip] */

void FUN_107013b04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c213040();
  func_0x00010c1cfce0(puVar1,param_2,1);
  func_0x00010c21e900(puVar1,param_2,0);
  func_0x00010c1af000(puVar1,param_2,1);
  puVar2 = puVar1;
  func_0x00010c161080(puVar1,param_2,*(undefined8 *)PTR__UIAccessibilityTraitStaticText_110345960);
  func_0x00010703cf08();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71fe0(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_2,puVar4,*(undefined8 *)PTR__NSFontAttributeName_1103457f0);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_2,puVar4,
                      *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSShadow_1126b6158;
  _objc_alloc_init(PTR__OBJC_CLASS___NSShadow_1126b6158);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fd999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  func_0x00010c1fe720(0x4020000000000000,puVar4);
  func_0x00010c1fe7a0(0,0x3ff0000000000000,puVar4);
  func_0x00010c1d0640(puVar3,param_2,puVar4,*(undefined8 *)PTR__NSShadowAttributeName_110345828);
  puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  func_0x00010c04e840();
  func_0x00010c16b720(puVar1,param_2,puVar5);
  _objc_release(puVar5);
  func_0x00010c161020(puVar1,param_2,puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107013d04; end: 10701401b; -[SCCameraOverlayView showHandsFreeTapToRecordTooltip] */

/* WARNING: Possible PIC construction at 0x000107013d68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107013d6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107013d04(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + _DAT_1127628a8) == 0) {
    func_0x00010bdd6320();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    uVar1 = 0;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
      return;
    }
    ___stack_chk_fail();
    param_1 = *(long *)(param_1 + 0x20);
    uVar1 = 0x3ff0000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,param_1,PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10701401c; end: 107014027;  */

void FUN_10701401c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107014028; end: 107014117; -[SCCameraOverlayView hideHandsFreeTapToRecordTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107014028(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar5 = (long)_DAT_1127628a8;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 != 0) {
    _objc_retain(lVar4);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = 0;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107014118;
    puStack_50 = &UNK_110842e18;
    _objc_retain(lVar4);
    puStack_90 = puVar1;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x107014124;
    puStack_78 = &UNK_110841f20;
    lStack_70 = lVar4;
    lStack_48 = lVar4;
    _objc_retain(lVar4);
    func_0x00010bf03420(0x3fc999999999999a,puVar2,param_2,&puStack_68,&puStack_90);
    _objc_release(lStack_70);
    _objc_release(lStack_48);
    _objc_release(lVar4);
  }
  return;
}



/* Entry: 107014118; end: 10701412b;  */

void FUN_107014118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10701412c; end: 10701432b; -[SCCameraOverlayView _buildHandsFreeTapToRecordTooltip] */

void FUN_10701412c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c213040();
  func_0x00010c1cfce0(puVar1,param_2,1);
  func_0x00010c21e900(puVar1,param_2,0);
  func_0x00010c1af000(puVar1,param_2,1);
  puVar2 = puVar1;
  func_0x00010c161080(puVar1,param_2,*(undefined8 *)PTR__UIAccessibilityTraitStaticText_110345960);
  func_0x00010703cf38();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71fe0(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_2,puVar4,*(undefined8 *)PTR__NSFontAttributeName_1103457f0);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_2,puVar4,
                      *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSShadow_1126b6158;
  _objc_alloc_init(PTR__OBJC_CLASS___NSShadow_1126b6158);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fd999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  func_0x00010c1fe720(0x4020000000000000,puVar4);
  func_0x00010c1fe7a0(0,0x3ff0000000000000,puVar4);
  func_0x00010c1d0640(puVar3,param_2,puVar4,*(undefined8 *)PTR__NSShadowAttributeName_110345828);
  puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  func_0x00010c04e840();
  func_0x00010c16b720(puVar1,param_2,puVar5);
  _objc_release(puVar5);
  func_0x00010c161020(puVar1,param_2,puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10701432c; end: 107014457; -[SCCameraOverlayView setCameraButtonHidden:backButtonHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701432c(long param_1,undefined8 param_2,int param_3,int param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((*(byte *)(param_1 + _DAT_1127628ac) & 1) != 0) {
    return;
  }
  *(char *)(param_1 + _DAT_112762854) = (char)param_3;
  lVar1 = param_1;
  func_0x00010bf2b240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar1);
  uVar3 = 0;
  if (param_3 == 0) {
    uVar3 = 0x3ff0000000000000;
  }
  lVar1 = param_1;
  func_0x00010bf2b240(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c131ac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar3 = 0;
  if (param_4 == 0) {
    uVar3 = 0x3ff0000000000000;
  }
  func_0x00010c131ac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107014458; end: 1070144bb; -[SCCameraOverlayView cameraTimerFrame] */

undefined8 FUN_107014458(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf2b240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1070144bc; end: 107014583; -[SCCameraOverlayView cameraTimerFrameInView:] */

undefined8
FUN_1070144bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010bf2b240(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b240(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010bf51460(uVar2,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107014584; end: 107014597; -[SCCameraOverlayView stopCameraTimerAnimationAndSaveState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107014584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e8f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112762838),PTR_s_setRecording__112657df8,0);
  return;
}



/* Entry: 107014598; end: 1070145e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107014598(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c173680(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(lVar1 + _DAT_112762850));
    func_0x00010c08cdc0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1070145e4; end: 107014647; -[SCCameraOverlayView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070145e4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(char *)(param_1 + _DAT_112762848) == '\x01') {
    func_0x00010c069d00(*(undefined8 *)(param_1 + _DAT_11276284c));
  }
  puStack_28 = PTR_PTR_1126f83c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107014648; end: 1070148a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107014648(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = 0;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar7 = 0x3ff0000000000000;
  }
  lVar5 = (long)_DAT_112762830;
  func_0x00010c1677c0(uVar7,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5));
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127627fc);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar4);
      }
      uVar7 = *(undefined8 *)(lVar6 * 8);
      func_0x00010bf01b40(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar5));
      func_0x00010c1677c0(uVar7);
      lVar6 = lVar6 + 1;
    } while (lVar1 != lVar6);
    lVar1 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(*(long *)(lVar4 + 0x20) + (long)_DAT_1127627fc);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      uVar7 = *(undefined8 *)(lVar6 * 8);
      func_0x00010bf01b40(*(undefined8 *)(*(long *)(lVar4 + 0x20) + (long)_DAT_112762830));
      func_0x00010c1677c0(uVar7);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdda350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1070148a8; end: 1070148b7; -[SCCameraOverlayView cancelPendingAccessoryButtonGestures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070148a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdda350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__cancelActiveGesturesOnView__112554270,
             *(undefined8 *)(param_1 + _DAT_11276289c));
  return;
}



/* Entry: 1070148b8; end: 107014a23; -[SCCameraOverlayView _cancelActiveGesturesOnView:] */

void FUN_1070148b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfc1c00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    lVar1 = param_3;
    func_0x00010bfc1c00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf51e00();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
    if (lVar1 != 0) {
      lVar5 = *plStack_110;
      do {
        lVar6 = 0;
        do {
          if (*plStack_110 != lVar5) {
            _objc_enumerationMutation(lVar2);
          }
          uVar4 = *(undefined8 *)(lStack_118 + lVar6 * 8);
          uVar3 = uVar4;
          func_0x00010c071800();
          if ((int)uVar3 != 0) {
            func_0x00010c195460(uVar4,param_2,0);
            func_0x00010c195460(uVar4,param_2,1);
          }
          lVar6 = lVar6 + 1;
        } while (lVar1 != lVar6);
        lVar1 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
      } while (lVar1 != 0);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = param_3;
  func_0x00010c269020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(lVar1);
  func_0x00010c269020(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107014a24; end: 107014a7f; -[SCCameraOverlayView resetTapGestureRecognizers] */

void FUN_107014a24(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c269020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar1);
  func_0x00010c269020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107014a80; end: 107014adb; -[SCCameraOverlayView resetLongPressGestureRecognizer] */

void FUN_107014a80(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0b4e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar1);
  func_0x00010c0b4e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107014adc; end: 107014b37; -[SCCameraOverlayView resetPanGestureRecognizer] */

void FUN_107014adc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0f36c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar1);
  func_0x00010c0f36c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107014b38; end: 107014b3b; -[SCCameraOverlayView configureCameraTimerGestureRecognizerOnLensesCarousel] */

void FUN_107014b38(void)

{
  return;
}



/* Entry: 107014b3c; end: 107014b77; -[SCCameraOverlayView restoreLongPressOnCameraTimerGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107014b3c(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112762858;
  func_0x00010c167340(0x47efffffe0000000,*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c214c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + lVar1),PTR_s_setTimeBeforeUnlimitedMovementAl_112662d40);
  return;
}



/* Entry: 107014b78; end: 107014b87; -[SCCameraOverlayView setPanGestureRecognizerEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107014b78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127628c0),PTR_s_setEnabled__112642f38);
  return;
}



/* Entry: 107014b88; end: 107014bbf; -[SCCameraOverlayView setSwipeNavigationRecognizerEnabled:] */

void FUN_107014b88(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107014bc0; end: 107014c17; -[SCCameraOverlayView setCameraTimerButtonEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107014bc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf2b240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127628c4),PTR_s_setEnabled__112642f38,param_3);
  return;
}



/* Entry: 107014c18; end: 107014da7; -[SCCameraOverlayView setReplicatorViewHidden:animated:duration:delay:requestId:position:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107014c18(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  
  _objc_retain(param_7);
  if ((param_7 == 0) || (param_8 == 0)) goto LAB_107014d88;
  if (param_8 == 2) {
    piVar5 = (int *)&DAT_1127628d4;
    lVar6 = (long)_DAT_1127628d0;
    uVar4 = *(ulong *)(param_3 + lVar6);
    if (uVar4 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new();
      uVar3 = *(undefined8 *)(param_3 + lVar6);
      *(undefined **)(param_3 + lVar6) = puVar1;
      _objc_release(uVar3);
      uVar4 = *(ulong *)(param_3 + lVar6);
      piVar5 = (int *)&DAT_1127628d4;
    }
LAB_107014cec:
    _objc_retain(uVar4);
    lVar6 = *(long *)(param_3 + *piVar5);
    _objc_retain(lVar6);
    if (lVar6 != 0 && uVar4 != 0) {
      uVar2 = uVar4;
      func_0x00010bf4b900(uVar4,param_4,param_7);
      if ((int)param_5 == 0) {
        if ((int)uVar2 != 0) {
          func_0x00010c12d360(uVar4,param_4,param_7);
          uVar2 = uVar4;
          func_0x00010bf529e0();
          if (uVar2 == 0) goto LAB_107014d5c;
        }
      }
      else if ((uVar2 & 1) == 0) {
        func_0x00010befa120(uVar4,param_4,param_7);
LAB_107014d5c:
        func_0x00010be2ef40(param_1,param_2,param_3,param_4,lVar6,param_5,param_6);
      }
    }
  }
  else {
    if (param_8 == 1) {
      piVar5 = (int *)&DAT_1127628cc;
      lVar6 = (long)_DAT_1127628c8;
      uVar4 = *(ulong *)(param_3 + lVar6);
      if (uVar4 == 0) {
        puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        _objc_opt_new();
        uVar3 = *(undefined8 *)(param_3 + lVar6);
        *(undefined **)(param_3 + lVar6) = puVar1;
        _objc_release(uVar3);
        uVar4 = *(ulong *)(param_3 + lVar6);
        piVar5 = (int *)&DAT_1127628cc;
      }
      goto LAB_107014cec;
    }
    lVar6 = 0;
    uVar4 = 0;
  }
  _objc_release(lVar6);
  _objc_release(uVar4);
LAB_107014d88:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 107014da8; end: 107014f03; -[SCCameraOverlayView _handleReplicatorView:hidden:animated:duration:delay:] */

void FUN_107014da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,int param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  undefined1 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  double dStack_58;
  
  _objc_retain(param_5);
  uVar3 = param_5;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar3);
  dVar4 = (double)((uint)param_6 ^ 1);
  if (param_7 == 0) {
    func_0x00010c1677c0(dVar4,param_5);
    func_0x00010c1a7f60(param_5,param_4,param_6);
  }
  else {
    func_0x00010c1a7f60(param_5);
    func_0x00010c1677c0((double)(param_6 & 0xffffffff),param_5);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_107014f04;
    puStack_68 = &UNK_110848c48;
    _objc_retain(param_5);
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_107014f10;
    puStack_a0 = &UNK_110959ff8;
    uStack_60 = param_5;
    dStack_58 = dVar4;
    _objc_retain(param_5);
    uStack_88 = (undefined1)param_6;
    uStack_98 = param_5;
    dStack_90 = dVar4;
    func_0x00010bf03440(param_1,param_2,puVar2,param_4,0,&puStack_80,&puStack_b8);
    _objc_release(uStack_98);
    _objc_release(uStack_60);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 107014f04; end: 107014f0f;  */

void FUN_107014f04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107014f10; end: 107014f3f;  */

void FUN_107014f10(long param_1)

{
  func_0x00010c1677c0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setHidden__1126479f8,
             *(undefined1 *)(param_1 + 0x30));
  return;
}



/* Entry: 107014f40; end: 107014f8b; -[SCCameraOverlayView _coolRecordingDiameter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107014f40(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)param_1;
  if (*(char *)(param_1 + _DAT_1127627f4) == '\x01') {
    func_0x00010052a7e0();
    uVar2 = 0x4053000000000000;
    if (iVar1 == 0) {
      uVar2 = 0x4055800000000000;
    }
    return uVar2;
  }
  return 0x4053000000000000;
}



/* Entry: 107014f8c; end: 107014faf; -[SCCameraOverlayView point:insideFrame:] */

void FUN_107014f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)(param_3,param_4,param_5,param_6,param_1,param_2);
  return;
}



/* Entry: 107014fb0; end: 1070152c7; -[SCCameraOverlayView pointInsideButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_107014fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined8 unaff_x25;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar1 = param_5;
  uVar6 = param_1;
  uVar14 = param_2;
  func_0x00010bf2b240();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010bf2b240(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010bf51460(uVar2,param_6,param_5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar4 = *(long *)(param_5 + (long)_DAT_112762884);
  func_0x00010c102c60(param_1,param_2,lVar4,param_6,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1060();
  func_0x00010bf512a0(param_5,param_6,0);
  if (lVar4 == 0) {
    uVar10 = 0;
  }
  else {
    uVar2 = param_5 + (long)_DAT_11276283c;
    _objc_loadWeakRetained(uVar2);
    uVar1 = uVar2;
    func_0x00010c0926e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1060(lVar4);
    uVar3 = uVar1;
    func_0x00010c102be0(uVar1);
    uVar10 = (uint)uVar3;
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  uVar1 = param_5;
  uVar12 = param_1;
  uVar15 = param_2;
  func_0x00010c102aa0(param_1,param_2,uVar6,uVar14,param_3,param_4);
  if ((int)uVar1 == 0) {
LAB_107015134:
    lVar11 = (long)_DAT_112762890;
    uVar5 = *(undefined8 *)(param_5 + lVar11);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    uVar3 = param_5;
    uVar13 = param_1;
    uVar16 = param_2;
    func_0x00010c102aa0(param_1,param_2,uVar12,uVar15,uVar6,uVar14);
    if ((int)uVar3 == 0) {
LAB_1070151a8:
      lVar11 = (long)_DAT_11276289c;
      if (*(long *)(param_5 + lVar11) == 0) {
LAB_1070151fc:
        lVar11 = param_5 + (long)_DAT_11276283c;
        _objc_loadWeakRetained(lVar11);
        lVar8 = lVar11;
        func_0x00010c0926e0();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010c102c00(param_1,param_2);
        uVar10 = (uint)lVar9 | uVar10;
        _objc_release(lVar8);
        _objc_release(lVar11);
        if ((int)uVar3 == 0) {
          _objc_release(uVar5);
          if ((int)uVar1 == 0) goto LAB_10701527c;
          goto LAB_107015274;
        }
        goto LAB_107015260;
      }
      func_0x00010bfb68e0();
      uVar7 = param_5;
      func_0x00010c102aa0(param_1,param_2,uVar13,uVar16,uVar12,uVar15);
      if ((int)uVar7 == 0) goto LAB_1070151fc;
      uVar7 = *(ulong *)(param_5 + lVar11);
      func_0x00010c074c20();
      if ((uVar7 & 1) != 0) goto LAB_1070151fc;
      if ((uVar3 & 1) != 0) goto LAB_10701525c;
      _objc_release(uVar5);
      uVar10 = 1;
    }
    else {
      unaff_x25 = *(undefined8 *)(param_5 + lVar11);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = unaff_x25;
      func_0x00010c074c20();
      if ((int)uVar6 != 0) goto LAB_1070151a8;
LAB_10701525c:
      uVar10 = 1;
LAB_107015260:
      _objc_release(unaff_x25);
      _objc_release(uVar5);
    }
    if ((uVar1 & 1) == 0) goto LAB_10701527c;
  }
  else {
    uVar2 = param_5;
    func_0x00010bf2b240();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c074c20();
    if ((int)uVar3 != 0) goto LAB_107015134;
    uVar10 = 1;
  }
LAB_107015274:
  _objc_release(uVar2);
LAB_10701527c:
  _objc_release(lVar4);
  return uVar10 & 1;
}



/* Entry: 1070152c8; end: 107015467; -[SCCameraOverlayView pointInsideCameraButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1070152c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar6 = param_1;
  uVar9 = param_2;
  func_0x00010bdc9580();
  lVar1 = param_5;
  func_0x00010bf2b240(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51460(uVar6,uVar9,param_3,param_4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = param_5;
  uVar5 = param_1;
  uVar10 = param_2;
  func_0x00010c102aa0(param_1,param_2,uVar6,uVar9,param_3,param_4);
  if ((int)lVar2 != 0) {
    lVar1 = param_5;
    func_0x00010bf2b240();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c074c20();
    if ((int)lVar3 == 0) {
      uVar7 = 1;
      goto LAB_10701543c;
    }
  }
  lVar8 = (long)_DAT_112762890;
  uVar4 = *(undefined8 *)(param_5 + lVar8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  lVar3 = param_5;
  func_0x00010c102aa0(param_1,param_2,uVar5,uVar10,uVar6,uVar9);
  if ((int)lVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_5 + lVar8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c074c20();
    uVar7 = (uint)uVar6 ^ 1;
    _objc_release(uVar5);
  }
  _objc_release(uVar4);
  if ((int)lVar2 == 0) {
    return uVar7;
  }
LAB_10701543c:
  _objc_release(lVar1);
  return uVar7;
}



/* Entry: 107015468; end: 10701556f; -[SCCameraOverlayView pointInsideAdjustedCameraTimerButton:] */

uint FUN_107015468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = param_1;
  uVar5 = param_2;
  func_0x00010bdc9580();
  uVar1 = param_5;
  func_0x00010bf2b240(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51460(uVar4,uVar5,param_3,param_4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c102aa0(param_1,param_2,uVar4,uVar5,param_3,param_4);
  if ((int)uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010bf2b240(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_5;
    func_0x00010c074c20();
    uVar3 = (uint)uVar1 ^ 1;
    _objc_release(param_5);
  }
  return uVar3;
}



/* Entry: 107015570; end: 107015673; -[SCCameraOverlayView _adjustedCameraTimerFrameForGivenTapTargetScale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107015570(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  lVar2 = (long)_DAT_1127627f8;
  dVar4 = *(double *)(param_5 + lVar2);
  lVar1 = param_5;
  func_0x00010bf2b240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  if (dVar4 <= 1.0) {
    _objc_release(lVar1);
  }
  else {
    _objc_release(lVar1);
    dVar3 = *(double *)(param_5 + lVar2);
    dVar4 = param_1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    dVar5 = (dVar3 + -1.0) * -0.5;
    dVar3 = param_1;
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    _CGRectInset(param_1,param_2,param_3,param_4,dVar4 * dVar5,dVar3 * dVar5);
  }
  return param_1;
}



/* Entry: 107015674; end: 107015733; -[SCCameraOverlayView pointInsideReplyButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_107015674(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112762890;
  uVar1 = *(undefined8 *)(param_5 + lVar6);
  uVar4 = param_1;
  uVar3 = param_2;
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  lVar2 = param_5;
  func_0x00010c102aa0(param_1,param_2,uVar4,uVar3,param_3,param_4);
  if ((int)lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_5 + lVar6);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c074c20();
    uVar5 = (uint)uVar4 ^ 1;
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  return uVar5;
}



/* Entry: 107015734; end: 1070158cf; -[SCCameraOverlayView showLongPressAnimationAtPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107015734(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d4120;
  func_0x00010c0b4d40(PTR_PTR_1126d4120);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc87e0(param_3,param_4,puVar1);
  func_0x00010c17a6a0(param_1,param_2,puVar1);
  func_0x00010c24e6a0(puVar1);
  func_0x00010c1c0cc0(param_3,param_4,puVar1);
  puVar2 = PTR_PTR_1126d4128;
  _objc_alloc_init(PTR_PTR_1126d4128);
  func_0x00010c1d93a0();
  func_0x00010c1bd8c0(0x4000000000000000,puVar2);
  func_0x00010c220640(0x405e000000000000,puVar2);
  func_0x00010c220660(puVar2,param_4,0x14);
  func_0x00010c207dc0(0x4039000000000000,puVar2);
  func_0x00010c207de0(0x4062200000000000,puVar2);
  func_0x00010c194300(0x4076800000000000,puVar2);
  func_0x00010c1d93e0(0x404e000000000000,puVar2);
  puVar3 = PTR_PTR_1126d4130;
  if ((*(byte *)(param_3 + _DAT_112762848) & 1) == 0) {
    func_0x00010c0b4f00(PTR_PTR_1126d4130,param_4,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf20c00(param_3);
    func_0x00010c0b4f20(puVar3,param_4,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bdc87e0(param_3,param_4,puVar3);
  func_0x00010c1c0d20(param_3,param_4,puVar3);
  func_0x00010c0b4f40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c285720(param_1,param_2);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1070158d0; end: 107015943; -[SCCameraOverlayView moveLongPressAnimationToPoint:] */

void FUN_1070158d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x00010c0b4d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,param_2);
  _objc_release(uVar1);
  func_0x00010c0b4f40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c285720(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107015944; end: 1070159b7; -[SCCameraOverlayView hideLongPressAnimationWithSuccess:] */

void FUN_107015944(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0b4d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010bf2f4c0();
  }
  else {
    func_0x00010bfafe00();
  }
  _objc_release(uVar1);
  func_0x00010c0b4f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070159b8; end: 1070159bf;  */

void FUN_1070159b8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 1070159c0; end: 1070159ef; -[SCCameraOverlayView throbLongPressView] */

void FUN_1070159c0(undefined8 param_1)

{
  func_0x00010c0b4d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26d580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070159f0; end: 107015a07; -[SCCameraOverlayView isLongPressOnCameraTimerGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1070159f0(long param_1,undefined8 param_2,long param_3)

{
  return param_3 == *(long *)(param_1 + _DAT_112762858);
}



/* Entry: 107015a08; end: 107015a67; -[SCCameraOverlayView isLongPressGestureRecognizer:] */

bool FUN_107015a08(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010c0b4e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  return param_3 == param_1;
}



/* Entry: 107015a68; end: 107015ac7; -[SCCameraOverlayView isTapGestureRecognizer:] */

bool FUN_107015a68(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010c269020(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  return param_3 == param_1;
}



/* Entry: 107015ac8; end: 107015b27; -[SCCameraOverlayView isPinchGestureRecognizer:] */

bool FUN_107015ac8(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010c0fc240(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  return param_3 == param_1;
}



/* Entry: 107015b28; end: 107015b87; -[SCCameraOverlayView isPanGestureRecognizer:] */

bool FUN_107015b28(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010c0f36c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  return param_3 == param_1;
}



/* Entry: 107015b88; end: 107015bdb; -[SCCameraOverlayView isSwipeGestureRecognizerForProfileToolTip:] */

undefined8 FUN_107015b88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b6950;
  _objc_opt_class(PTR_PTR_1126b6950);
  uVar2 = param_3;
  func_0x00010c077980(param_3,param_2,puVar1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 107015bdc; end: 107015c5b; -[SCCameraOverlayView hideDismissButtonForRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107015bdc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  if ((*(byte *)(param_1 + _DAT_1127628ac) & 1) != 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + _DAT_112762890);
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (*(long *)(param_1 + _DAT_112762820) != 0)) {
    puVar2 = PTR_PTR_1126b7010;
    func_0x00010bfe1de0();
    if ((int)puVar2 != 0) {
      func_0x00010c1a7f60(lVar1,param_2,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107015c5c; end: 107015c6b; -[SCCameraOverlayView setAllInterfaceElementsHidden:statusBarHidden:animated:duration:] */

void FUN_107015c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c166e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setAllInterfaceElementsHidden_st_1126375c0,param_3,param_4,param_3,
             param_3,param_5);
  return;
}



/* Entry: 107015c6c; end: 107015d63; -[SCCameraOverlayView setAllInterfaceElementsHidden:statusBarHidden:cameraButtonHidden:backButtonHidden:animated:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107015c6c(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((*(byte *)(param_2 + _DAT_1127628ac) & 1) == 0) {
    func_0x00010c166cc0();
    lVar1 = param_2;
    func_0x00010bf6b020(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa1d60(param_1);
    _objc_release(lVar1);
    if ((param_4 & 1) == 0) {
      lVar1 = param_2 + _DAT_11276283c;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010c0926e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf099a0();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if ((int)lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf46cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_2,PTR_s_configureCameraTimerGestureRecog_1125af4d0);
        return;
      }
    }
  }
  return;
}



/* Entry: 107015d64; end: 107015e6f; -[SCCameraOverlayView experimental_setExclusiveView:withBackButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107015d64(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010c166e60(0,param_1,param_2,1,0,0);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112762830),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112762834),param_2,1);
  *(undefined1 *)(param_1 + _DAT_1127628ac) = 1;
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127628d8);
  *(undefined8 *)(param_1 + _DAT_1127628d8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  func_0x00010bdc87e0(param_1,param_2,param_3);
  _objc_release(param_3);
  if (param_4 != 0) {
    lVar1 = param_1;
    func_0x00010c131ac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc87e0(param_1,param_2,lVar2);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 107015e70; end: 107015efb; -[SCCameraOverlayView prepareForTransitionIn] */

void FUN_107015e70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c131ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c138480(param_1);
  uVar1 = param_1;
  func_0x00010bf2b240(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c109500();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 107015efc; end: 107015f9f; -[SCCameraOverlayView beginTransitionIn] */

void FUN_107015efc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010c131ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x3ff0000000000000;
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c138480(param_1);
  func_0x00010bde9840(param_1);
  uVar1 = param_1;
  func_0x00010bf2b240(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17f40(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layoutIfNeeded_112600d80);
  return;
}


