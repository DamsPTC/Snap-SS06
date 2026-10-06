/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106199a68; end: 106199bf7; -[SCFeatureZoomFactorsImpl zoomFactorsRange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106199a68(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  double dVar10;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar9 = PTR_PTR_1126aff08;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_2 + _DAT_1127414b0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf5e320();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf70d80();
  func_0x00010c06cea0(puVar9,param_3,puVar3);
  _objc_release(puVar2);
  _objc_release();
  if ((int)puVar9 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar8 = (long)_DAT_1127414e4;
    puVar1 = *(undefined **)(param_2 + lVar8);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      param_1 = 5.26354424712089e-315;
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df740(0x3f800000);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = *(undefined **)(param_2 + lVar8);
    puStack_58 = puVar2;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      param_1 = 5.26354424712089e-315;
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df740(0x3f800000);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_58,2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      _objc_release(puVar3);
    }
    _objc_release(puVar4);
    if (puVar1 == (undefined *)0x0) {
      _objc_release(puVar2);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return param_1;
  }
  ___stack_chk_fail();
  puVar9 = PTR_PTR_1126aff08;
  uVar5 = *(undefined8 *)(puVar1 + _DAT_1127414b0);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf5e320();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf70d80();
  func_0x00010c06cea0(puVar9,param_3,uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  dVar10 = -1.0;
  if ((int)puVar9 != 0) {
    dVar10 = (double)*(float *)(puVar1 + _DAT_1127414e8);
  }
  return dVar10;
}



/* Entry: 106199bf8; end: 106199c8b; -[SCFeatureZoomFactorsImpl preCaptureZoomLevel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106199bf8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  double dVar5;
  
  puVar4 = PTR_PTR_1126aff08;
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127414b0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5e320();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf70d80();
  func_0x00010c06cea0(puVar4,param_2,uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  dVar5 = -1.0;
  if ((int)puVar4 != 0) {
    dVar5 = (double)*(float *)(param_1 + _DAT_1127414e8);
  }
  return dVar5;
}



/* Entry: 106199c8c; end: 106199dff; -[SCFeatureZoomFactorsImpl zoomLevelGroup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106199c8c(long param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  puVar5 = PTR_PTR_1126aff08;
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127414b0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010bf5e320();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010bf70d80();
  func_0x00010c06cea0(puVar5,param_2,uVar4);
  _objc_release(uVar7);
  _objc_release(uVar3);
  if ((int)puVar5 == 0) {
    return 0xffffffffffffffff;
  }
  lVar8 = (long)_DAT_1127414e8;
  fVar9 = *(float *)(param_1 + lVar8);
  if (fVar9 < 1.0) {
    return 0;
  }
  lVar6 = param_1;
  func_0x00010c26ad20(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  fVar12 = *(float *)(param_1 + lVar8);
  if (lVar6 == 0) {
    if (fVar12 < 2.0) {
      fVar10 = ABS(fVar12 + -2.0);
      fVar9 = ABS(fVar12 + 2.0) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar10) && (bVar1 = false, !NAN(fVar10) && !NAN(fVar9))) {
        bVar1 = fVar10 < fVar9;
      }
      if (!bVar1) goto LAB_106199ddc;
    }
    uVar7 = 3;
  }
  else {
    func_0x00010bfb2c80(lVar6);
    fVar11 = ABS(fVar12 - fVar9);
    fVar10 = ABS(fVar12 + fVar9) * 1.1920929e-07;
    bVar1 = true;
    if ((fVar12 < fVar9) && (bVar1 = false, !NAN(fVar11))) {
      bVar1 = fVar11 < 1.1754944e-38;
    }
    bVar2 = true;
    if ((!bVar1) && (bVar2 = false, !NAN(fVar11) && !NAN(fVar10))) {
      bVar2 = fVar11 < fVar10;
    }
    if (bVar2) {
      uVar7 = 2;
      if (*(char *)(param_1 + _DAT_112741518) == '\0') {
        uVar7 = 3;
      }
      goto LAB_106199de0;
    }
LAB_106199ddc:
    uVar7 = 1;
  }
LAB_106199de0:
  _objc_release(lVar6);
  return uVar7;
}



/* Entry: 106199e00; end: 106199e93; -[SCFeatureZoomFactorsImpl captureZoomSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106199e00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_PTR_1126aff08;
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127414b0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf5e320();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf70d80();
  func_0x00010c06cea0(puVar3,param_2,uVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  if ((int)puVar3 == 0) {
    uVar4 = 0xffffffffffffffff;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112741504);
  }
  return uVar4;
}



/* Entry: 106199e94; end: 106199e9b; -[SCFeatureZoomFactorsImpl pillDidSelectZoomFactor:] */

void FUN_106199e94(float param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be73c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)param_1,param_2,PTR_s__pillButtonOnSelectZoomRatio__11257a8c0);
  return;
}



/* Entry: 106199e9c; end: 106199e9f; -[SCFeatureZoomFactorsImpl pillButtonDidLongPressWithGestureRecognizer:] */

void FUN_106199e9c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2bc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleLongPress__1125688c0);
  return;
}



/* Entry: 106199ea0; end: 106199f87; -[SCFeatureZoomFactorsImpl shouldBlockTouchAtPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106199ea0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_3;
  func_0x00010be73da0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c074c20();
  _objc_release(uVar2);
  if ((uVar1 & 1) == 0) {
    func_0x00010bf512c0(param_1,param_2,*(undefined8 *)(param_3 + (long)_DAT_11274150c));
    uVar2 = param_3;
    func_0x00010be73da0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51200(param_1,param_2);
    _objc_release(uVar2);
    func_0x00010be73da0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bf20c00();
    _CGRectContainsPoint();
    _objc_release(param_3);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 106199f88; end: 106199f8b; -[SCFeatureZoomFactorsImpl _createHapticFeedbackZoomThresholds] */

void FUN_106199f88(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf14f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__createPillViewZoomStops_112559ed8);
  return;
}



/* Entry: 106199f8c; end: 10619a3cb; -[SCFeatureZoomFactorsImpl _createDialBackgroundGradientView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106199f8c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  func_0x00010beb3900();
  if ((int)puVar1 == 0) {
    puVar21 = (undefined *)0x0;
  }
  else {
    puVar21 = PTR_PTR_1126b1198;
    _objc_opt_new();
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf414e0(0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar20 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar20;
    func_0x00010bf414e0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(puVar21);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar20);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = puVar21;
    func_0x00010bfcd9c0(puVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c209760(0x3fe0000000000000,0);
    _objc_release(puVar1);
    puVar1 = puVar21;
    func_0x00010bfcd9c0(puVar21);
    _objc_retainAutoreleasedReturnValue();
    param_2 = 0x3ff0000000000000;
    func_0x00010c196020(0x3fe0000000000000);
    _objc_release(puVar1);
    func_0x00010c219b60(puVar21);
    lVar23 = (long)_DAT_112741510;
    uVar5 = *(undefined8 *)(param_3 + lVar23);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fa0();
    _objc_release(uVar5);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar2 = puVar21;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_3 + lVar23);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar21;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_3 + lVar23);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar7;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf493e0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar21;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_3 + lVar23);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar9;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar21;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_3 + lVar23);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar12;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0;
    puVar13 = puVar11;
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(uVar16);
    _objc_release(uVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(uVar19);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(puVar4);
    _objc_release(uVar15);
    _objc_release(uVar7);
    _objc_release(puVar3);
    _objc_release(puVar20);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(puVar2);
    puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    param_5 = puVar1;
    func_0x00010bef9040(puVar21);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
    ___stack_chk_fail();
    lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = puVar1;
    func_0x00010beb3900();
    if ((int)puVar2 == 0) {
      puVar21 = (undefined *)0x0;
    }
    else {
      puVar21 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc_init();
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar2;
      func_0x00010bf414e0(0x3fd0000000000000);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar21);
      _objc_release(puVar20);
      _objc_release(puVar2);
      puVar2 = puVar21;
      func_0x00010c08c0e0(puVar21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(0x4034000000000000);
      _objc_release(puVar2);
      puVar2 = puVar21;
      func_0x00010c08c0e0(puVar21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2d20();
      _objc_release(puVar2);
      puVar2 = puVar21;
      func_0x00010c08c0e0(puVar21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1733a0(0x3fe0000000000000);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar2;
      func_0x00010bf414e0(0x3fb99999a0000000);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar3 = puVar21;
      func_0x00010c08c0e0(puVar21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c173280();
      _objc_release(puVar3);
      _objc_release(puVar20);
      _objc_release(puVar2);
      func_0x00010c219b60(puVar21);
      uVar5 = *(undefined8 *)(puVar1 + _DAT_112741510);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(uVar5);
      puVar2 = puVar21;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar2;
      func_0x00010bf49420(0);
      _objc_retainAutoreleasedReturnValue();
      lVar22 = (long)_DAT_112741528;
      uVar5 = *(undefined8 *)(puVar1 + lVar22);
      *(undefined **)(puVar1 + lVar22) = puVar20;
      _objc_release(uVar5);
      _objc_release(puVar2);
      puVar2 = puVar21;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar2;
      func_0x00010bf49420(0x4044000000000000);
      _objc_retainAutoreleasedReturnValue();
      lVar25 = (long)_DAT_11274152c;
      uVar5 = *(undefined8 *)(puVar1 + lVar25);
      *(undefined **)(puVar1 + lVar25) = puVar20;
      _objc_release(uVar5);
      _objc_release(puVar2);
      puVar2 = puVar21;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar24 = (long)_DAT_11274150c;
      uVar15 = *(undefined8 *)(puVar1 + lVar24);
      func_0x00010bf2b240(uVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar15;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      param_1 = 0xc028000000000000;
      puVar20 = puVar2;
      func_0x00010bf493c0();
      _objc_retainAutoreleasedReturnValue();
      lVar23 = (long)_DAT_112741530;
      uVar19 = *(undefined8 *)(puVar1 + lVar23);
      *(undefined **)(puVar1 + lVar23) = puVar20;
      _objc_release(uVar19);
      _objc_release(uVar5);
      _objc_release(uVar15);
      _objc_release(puVar2);
      func_0x00010c162480(*(undefined8 *)(puVar1 + lVar22));
      func_0x00010c162480(*(undefined8 *)(puVar1 + lVar25));
      func_0x00010c162480(*(undefined8 *)(puVar1 + lVar23));
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar20 = puVar21;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(puVar1 + lVar24);
      func_0x00010bf2b240();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar15;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar20;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar1);
      _objc_release(uVar5);
      _objc_release(uVar15);
      _objc_release(puVar20);
      param_5 = (undefined *)0x1;
      puVar2 = puVar21;
      func_0x00010c1a7f60();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
      ___stack_chk_fail();
      lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar1 = puVar2;
      func_0x00010beb3900();
      if ((int)puVar1 == 0) {
        puVar21 = (undefined *)0x0;
      }
      else {
        puVar20 = *(undefined **)(puVar2 + _DAT_1127414e4);
        _objc_retain(puVar20);
        puVar1 = puVar20;
        func_0x00010c0d3c80();
        uVar5 = 0x4049000000000000;
        if (puVar2[_DAT_1127414d8] == '\0') {
          uVar5 = 0x4059000000000000;
        }
        puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(uVar5,PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar21);
        puVar21 = puVar1;
        func_0x00010c246d00();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(puVar2 + _DAT_112741534);
        *(undefined **)(puVar2 + _DAT_112741534) = puVar21;
        _objc_release(uVar5);
        puVar21 = PTR_PTR_1126c8758;
        _objc_alloc();
        param_2 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
        func_0x00010c0151e0(*(undefined8 *)PTR__CGRectZero_110347608,param_2,
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                            *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),0x3ff0000000000000);
        func_0x00010c219b60();
        lVar23 = (long)_DAT_112741510;
        uVar5 = *(undefined8 *)(puVar2 + lVar23);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60();
        _objc_release(uVar5);
        puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        puVar4 = puVar21;
        func_0x00010c2a5060();
        _objc_retainAutoreleasedReturnValue();
        uVar19 = *(undefined8 *)(puVar2 + lVar23);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar19;
        func_0x00010c2a5060();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar4;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar21;
        func_0x00010bfe0660();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010bf49420(0x4062c00000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar21;
        func_0x00010bf34860();
        _objc_retainAutoreleasedReturnValue();
        lVar23 = (long)_DAT_11274150c;
        uVar16 = *(undefined8 *)(puVar2 + lVar23);
        func_0x00010bf2b240(uVar16);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar16;
        func_0x00010bf34860();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar13;
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar3);
        _objc_release(puVar17);
        _objc_release(puVar14);
        _objc_release(uVar15);
        _objc_release(uVar16);
        _objc_release(puVar13);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar8);
        _objc_release(uVar5);
        _objc_release(uVar19);
        _objc_release(puVar4);
        puVar3 = puVar21;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = *(undefined8 *)(puVar2 + lVar23);
        func_0x00010bf2b240();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar15;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        param_1 = 0x4054000000000000;
        puVar4 = puVar3;
        func_0x00010bf493c0();
        _objc_retainAutoreleasedReturnValue();
        lVar23 = (long)_DAT_112741538;
        uVar19 = *(undefined8 *)(puVar2 + lVar23);
        *(undefined **)(puVar2 + lVar23) = puVar4;
        _objc_release(uVar19);
        _objc_release(uVar5);
        _objc_release(uVar15);
        _objc_release(puVar3);
        func_0x00010c162480(*(undefined8 *)(puVar2 + lVar23));
        puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
        _objc_alloc();
        func_0x00010c050900();
        func_0x00010bef9040(puVar21);
        puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
        _objc_alloc();
        func_0x00010c050900();
        _objc_release(puVar20);
        func_0x00010bef9040(puVar21);
        param_5 = (undefined *)0x1;
        func_0x00010c1a7f60(puVar21);
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
        ___stack_chk_fail();
        uVar5 = *(undefined8 *)(puVar1 + _DAT_112741510);
        _objc_retain(param_5);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09ef00(param_5);
        _objc_release(uVar5);
        puVar21 = param_5;
        func_0x00010c252440();
        _objc_release(param_5);
        if (puVar21 + -3 < (undefined *)0x2) {
                    /* WARNING: Could not recover jumptable at 0x00010bebfcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s__startDismissTimer_11258d8d8);
          return;
        }
        if (puVar21 == (undefined *)0x2) {
          uVar15 = *(undefined8 *)(puVar1 + _DAT_11274153c);
          func_0x00010bdd87c0(uVar15,*(undefined8 *)((long)(puVar1 + _DAT_11274153c) + 8),param_1,
                              param_2,*(undefined8 *)(puVar1 + _DAT_112741540),puVar1);
          uVar5 = *(undefined8 *)(puVar1 + _DAT_1127414f4);
          func_0x00010c269d40(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c284d00(uVar15);
          _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdfc070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    (uVar15,puVar1,PTR_s__dialOnSelectZoomRatio__11255c9b8);
          return;
        }
        if (puVar21 == (undefined *)0x1) {
          func_0x00010becf160(puVar1);
          lVar18 = (long)_DAT_1127414fc;
          uVar5 = *(undefined8 *)(puVar1 + lVar18);
          func_0x00010c269d40(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b3660();
          _objc_release(uVar5);
          uVar5 = *(undefined8 *)(puVar1 + lVar18);
          func_0x00010c269d40(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b3680();
          _objc_release(uVar5);
          uVar5 = *(undefined8 *)(puVar1 + _DAT_1127414f4);
          func_0x00010c269d40(uVar5);
          _objc_retainAutoreleasedReturnValue();
          lVar23 = (long)_DAT_1127414e8;
          func_0x00010c284d00((double)*(float *)(puVar1 + lVar23));
          _objc_release(uVar5);
          lVar18 = (long)_DAT_11274153c;
          *(undefined8 *)(puVar1 + lVar18) = param_1;
          *(undefined8 *)((long)(puVar1 + lVar18) + 8) = param_2;
          *(double *)(puVar1 + _DAT_112741540) = (double)*(float *)(puVar1 + lVar23);
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar21);
  return;
}



/* Entry: 10619a3cc; end: 10619a7a7; -[SCFeatureZoomFactorsImpl _createPillBackgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619a3cc(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  func_0x00010beb3900();
  if ((int)puVar1 == 0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar17 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf414e0(0x3fd0000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar17);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = puVar17;
    func_0x00010c08c0e0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4034000000000000);
    _objc_release(puVar1);
    puVar1 = puVar17;
    func_0x00010c08c0e0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar1);
    puVar1 = puVar17;
    func_0x00010c08c0e0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3fe0000000000000);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf414e0(0x3fb99999a0000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar16 = puVar17;
    func_0x00010c08c0e0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(puVar16);
    _objc_release(puVar2);
    _objc_release(puVar1);
    func_0x00010c219b60(puVar17);
    uVar3 = *(undefined8 *)(param_3 + _DAT_112741510);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(uVar3);
    puVar1 = puVar17;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf49420(0);
    _objc_retainAutoreleasedReturnValue();
    lVar19 = (long)_DAT_112741528;
    uVar3 = *(undefined8 *)(param_3 + lVar19);
    *(undefined **)(param_3 + lVar19) = puVar2;
    _objc_release(uVar3);
    _objc_release(puVar1);
    puVar1 = puVar17;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf49420(0x4044000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar21 = (long)_DAT_11274152c;
    uVar3 = *(undefined8 *)(param_3 + lVar21);
    *(undefined **)(param_3 + lVar21) = puVar2;
    _objc_release(uVar3);
    _objc_release(puVar1);
    puVar1 = puVar17;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = (long)_DAT_11274150c;
    uVar4 = *(undefined8 *)(param_3 + lVar20);
    func_0x00010bf2b240(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0xc028000000000000;
    puVar2 = puVar1;
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = (long)_DAT_112741530;
    uVar15 = *(undefined8 *)(param_3 + lVar18);
    *(undefined **)(param_3 + lVar18) = puVar2;
    _objc_release(uVar15);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(puVar1);
    func_0x00010c162480(*(undefined8 *)(param_3 + lVar19));
    func_0x00010c162480(*(undefined8 *)(param_3 + lVar21));
    func_0x00010c162480(*(undefined8 *)(param_3 + lVar18));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar2 = puVar17;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_3 + lVar20);
    func_0x00010bf2b240();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar16);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(puVar2);
    param_5 = 1;
    puVar1 = puVar17;
    func_0x00010c1a7f60();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = puVar1;
    func_0x00010beb3900();
    if ((int)puVar2 == 0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      puVar16 = *(undefined **)(puVar1 + _DAT_1127414e4);
      _objc_retain(puVar16);
      puVar2 = puVar16;
      func_0x00010c0d3c80();
      uVar3 = 0x4049000000000000;
      if (puVar1[_DAT_1127414d8] == '\0') {
        uVar3 = 0x4059000000000000;
      }
      puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(uVar3,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(puVar17);
      puVar17 = puVar2;
      func_0x00010c246d00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(puVar1 + _DAT_112741534);
      *(undefined **)(puVar1 + _DAT_112741534) = puVar17;
      _objc_release(uVar3);
      puVar17 = PTR_PTR_1126c8758;
      _objc_alloc();
      param_2 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
      func_0x00010c0151e0(*(undefined8 *)PTR__CGRectZero_110347608,param_2,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),0x3ff0000000000000);
      func_0x00010c219b60();
      lVar18 = (long)_DAT_112741510;
      uVar3 = *(undefined8 *)(puVar1 + lVar18);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(uVar3);
      puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar6 = puVar17;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(puVar1 + lVar18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar15;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar17;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf49420(0x4062c00000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar17;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = (long)_DAT_11274150c;
      uVar11 = *(undefined8 *)(puVar1 + lVar18);
      func_0x00010bf2b240(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar11;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar10;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar5);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(uVar4);
      _objc_release(uVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(uVar3);
      _objc_release(uVar15);
      _objc_release(puVar6);
      puVar5 = puVar17;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(puVar1 + lVar18);
      func_0x00010bf2b240();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      param_1 = 0x4054000000000000;
      puVar6 = puVar5;
      func_0x00010bf493c0();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = (long)_DAT_112741538;
      uVar15 = *(undefined8 *)(puVar1 + lVar18);
      *(undefined **)(puVar1 + lVar18) = puVar6;
      _objc_release(uVar15);
      _objc_release(uVar3);
      _objc_release(uVar4);
      _objc_release(puVar5);
      func_0x00010c162480(*(undefined8 *)(puVar1 + lVar18));
      puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
      _objc_alloc();
      func_0x00010c050900();
      func_0x00010bef9040(puVar17);
      puVar5 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
      _objc_alloc();
      func_0x00010c050900();
      _objc_release(puVar16);
      func_0x00010bef9040(puVar17);
      param_5 = 1;
      func_0x00010c1a7f60(puVar17);
      _objc_release(puVar5);
      _objc_release(puVar1);
      _objc_release();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
      ___stack_chk_fail();
      uVar3 = *(undefined8 *)(puVar2 + _DAT_112741510);
      _objc_retain(param_5);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ef00(param_5);
      _objc_release(uVar3);
      lVar14 = param_5;
      func_0x00010c252440();
      _objc_release(param_5);
      if (lVar14 - 3U < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bebfcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(puVar2,PTR_s__startDismissTimer_11258d8d8);
        return;
      }
      if (lVar14 == 2) {
        uVar4 = *(undefined8 *)(puVar2 + _DAT_11274153c);
        func_0x00010bdd87c0(uVar4,*(undefined8 *)((long)(puVar2 + _DAT_11274153c) + 8),param_1,
                            param_2,*(undefined8 *)(puVar2 + _DAT_112741540),puVar2);
        uVar3 = *(undefined8 *)(puVar2 + _DAT_1127414f4);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c284d00(uVar4);
        _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdfc070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(uVar4,puVar2,PTR_s__dialOnSelectZoomRatio__11255c9b8)
        ;
        return;
      }
      if (lVar14 == 1) {
        func_0x00010becf160(puVar2);
        lVar14 = (long)_DAT_1127414fc;
        uVar3 = *(undefined8 *)(puVar2 + lVar14);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b3660();
        _objc_release(uVar3);
        uVar3 = *(undefined8 *)(puVar2 + lVar14);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b3680();
        _objc_release(uVar3);
        uVar3 = *(undefined8 *)(puVar2 + _DAT_1127414f4);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar18 = (long)_DAT_1127414e8;
        func_0x00010c284d00((double)*(float *)(puVar2 + lVar18));
        _objc_release(uVar3);
        lVar14 = (long)_DAT_11274153c;
        *(undefined8 *)(puVar2 + lVar14) = param_1;
        *(undefined8 *)((long)(puVar2 + lVar14) + 8) = param_2;
        *(double *)(puVar2 + _DAT_112741540) = (double)*(float *)(puVar2 + lVar18);
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 10619a7a8; end: 10619abbb; -[SCFeatureZoomFactorsImpl _createDialView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619a7a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_3;
  func_0x00010beb3900();
  if ((int)lVar1 == 0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    lVar14 = *(long *)(param_3 + _DAT_1127414e4);
    _objc_retain(lVar14);
    lVar1 = lVar14;
    func_0x00010c0d3c80();
    uVar17 = 0x4049000000000000;
    if (*(char *)(param_3 + _DAT_1127414d8) == '\0') {
      uVar17 = 0x4059000000000000;
    }
    puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(uVar17,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(lVar1);
    _objc_release(puVar16);
    lVar15 = lVar1;
    func_0x00010c246d00();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_3 + _DAT_112741534);
    *(long *)(param_3 + _DAT_112741534) = lVar15;
    _objc_release(uVar17);
    puVar16 = PTR_PTR_1126c8758;
    _objc_alloc();
    param_2 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    func_0x00010c0151e0(*(undefined8 *)PTR__CGRectZero_110347608,param_2,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),0x3ff0000000000000);
    func_0x00010c219b60();
    lVar15 = (long)_DAT_112741510;
    uVar17 = *(undefined8 *)(param_3 + lVar15);
    func_0x00010c269d40(uVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(uVar17);
    puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar2 = puVar16;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_3 + lVar15);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar3;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar16;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf49420(0x4062c00000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar16;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = (long)_DAT_11274150c;
    uVar8 = *(undefined8 *)(param_3 + lVar15);
    func_0x00010bf2b240(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar8;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(uVar12);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar17);
    _objc_release(uVar3);
    _objc_release(puVar2);
    puVar11 = puVar16;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_3 + lVar15);
    func_0x00010bf2b240();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar12;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0x4054000000000000;
    puVar2 = puVar11;
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = (long)_DAT_112741538;
    uVar3 = *(undefined8 *)(param_3 + lVar15);
    *(undefined **)(param_3 + lVar15) = puVar2;
    _objc_release(uVar3);
    _objc_release(uVar17);
    _objc_release(uVar12);
    _objc_release(puVar11);
    func_0x00010c162480(*(undefined8 *)(param_3 + lVar15));
    puVar11 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010bef9040(puVar16);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    _objc_release(lVar14);
    func_0x00010bef9040(puVar16);
    param_5 = 1;
    func_0x00010c1a7f60(puVar16);
    _objc_release(puVar2);
    _objc_release(puVar11);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
    return;
  }
  ___stack_chk_fail();
  uVar17 = *(undefined8 *)(lVar1 + _DAT_112741510);
  _objc_retain(param_5);
  func_0x00010c269d40(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5);
  _objc_release(uVar17);
  lVar13 = param_5;
  func_0x00010c252440();
  _objc_release(param_5);
  if (lVar13 - 3U < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bebfcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s__startDismissTimer_11258d8d8);
    return;
  }
  if (lVar13 != 2) {
    if (lVar13 == 1) {
      func_0x00010becf160(lVar1);
      lVar13 = (long)_DAT_1127414fc;
      uVar17 = *(undefined8 *)(lVar1 + lVar13);
      func_0x00010c269d40(uVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b3660();
      _objc_release(uVar17);
      uVar17 = *(undefined8 *)(lVar1 + lVar13);
      func_0x00010c269d40(uVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b3680();
      _objc_release(uVar17);
      uVar17 = *(undefined8 *)(lVar1 + _DAT_1127414f4);
      func_0x00010c269d40(uVar17);
      _objc_retainAutoreleasedReturnValue();
      lVar14 = (long)_DAT_1127414e8;
      func_0x00010c284d00((double)*(float *)(lVar1 + lVar14));
      _objc_release(uVar17);
      lVar13 = (long)_DAT_11274153c;
      *(undefined8 *)(lVar1 + lVar13) = param_1;
      ((undefined8 *)(lVar1 + lVar13))[1] = param_2;
      *(double *)(lVar1 + _DAT_112741540) = (double)*(float *)(lVar1 + lVar14);
    }
    return;
  }
  uVar12 = *(undefined8 *)(lVar1 + _DAT_11274153c);
  func_0x00010bdd87c0(uVar12,((undefined8 *)(lVar1 + _DAT_11274153c))[1],param_1,param_2,
                      *(undefined8 *)(lVar1 + _DAT_112741540),lVar1);
  uVar17 = *(undefined8 *)(lVar1 + _DAT_1127414f4);
  func_0x00010c269d40(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284d00(uVar12);
  _objc_release(uVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdfc070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar12,lVar1,PTR_s__dialOnSelectZoomRatio__11255c9b8);
  return;
}



/* Entry: 10619abbc; end: 10619ad87; -[SCFeatureZoomFactorsImpl _handleLongPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619abbc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_3 + _DAT_112741510);
  _objc_retain(param_5);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5);
  _objc_release(uVar1);
  lVar2 = param_5;
  func_0x00010c252440();
  _objc_release(param_5);
  if (lVar2 - 3U < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bebfcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__startDismissTimer_11258d8d8);
    return;
  }
  if (lVar2 != 2) {
    if (lVar2 == 1) {
      func_0x00010becf160(param_3);
      lVar2 = (long)_DAT_1127414fc;
      uVar1 = *(undefined8 *)(param_3 + lVar2);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b3660();
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_3 + lVar2);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b3680();
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_3 + _DAT_1127414f4);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = (long)_DAT_1127414e8;
      func_0x00010c284d00((double)*(float *)(param_3 + lVar3));
      _objc_release(uVar1);
      lVar2 = (long)_DAT_11274153c;
      *(undefined8 *)(param_3 + lVar2) = param_1;
      ((undefined8 *)(param_3 + lVar2))[1] = param_2;
      *(double *)(param_3 + _DAT_112741540) = (double)*(float *)(param_3 + lVar3);
    }
    return;
  }
  uVar4 = *(undefined8 *)(param_3 + _DAT_11274153c);
  func_0x00010bdd87c0(uVar4,((undefined8 *)(param_3 + _DAT_11274153c))[1],param_1,param_2,
                      *(undefined8 *)(param_3 + _DAT_112741540),param_3);
  uVar1 = *(undefined8 *)(param_3 + _DAT_1127414f4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284d00(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdfc070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar4,param_3,PTR_s__dialOnSelectZoomRatio__11255c9b8);
  return;
}



/* Entry: 10619ad88; end: 10619b25b; -[SCFeatureZoomFactorsImpl _transitionToDialView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619ad88(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
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
  undefined1 auStack_90 [16];
  
  uVar2 = *(undefined8 *)(param_5 + _DAT_1127414ec);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  lVar7 = (long)_DAT_1127414f8;
  uVar3 = *(undefined8 *)(param_5 + lVar7);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar3);
  lVar9 = (long)_DAT_1127414f4;
  uVar3 = *(undefined8 *)(param_5 + lVar9);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar3);
  lVar8 = (long)_DAT_1127414f0;
  uVar3 = *(undefined8 *)(param_5 + lVar8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_5 + lVar9);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_5 + lVar8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_5 + lVar7);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(uVar3);
  _objc_initWeak(auStack_90,param_5);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10619b25c;
  puStack_a0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_98,auStack_90);
  puStack_e0 = puVar6;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x10619b310;
  puStack_c8 = &UNK_110849200;
  _objc_copyWeak(auStack_c0,auStack_90);
  func_0x00010bf03440(0x3fc999999999999a,0,puVar1);
  lVar8 = (long)_DAT_112741510;
  uVar3 = *(undefined8 *)(param_5 + lVar8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_5 + lVar9);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0(uVar2);
  uVar3 = param_3;
  func_0x00010bfb68e0(uVar2);
  uVar5 = *(undefined8 *)(param_5 + lVar8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010bf02e80(0x3fc999999999999a,param_3,param_4,uVar3,uVar4);
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010bfb68e0(uVar2);
  lVar10 = (long)_DAT_112741528;
  func_0x00010c181140(param_4,*(undefined8 *)(param_5 + lVar10));
  func_0x00010bfb68e0(uVar2);
  lVar11 = (long)_DAT_11274152c;
  func_0x00010c181140(uVar3,*(undefined8 *)(param_5 + lVar11));
  lVar7 = (long)_DAT_112741538;
  func_0x00010c181140(0x4054000000000000,*(undefined8 *)(param_5 + lVar7));
  uVar3 = *(undefined8 *)(param_5 + lVar8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c181140(param_4 + 82.0,*(undefined8 *)(param_5 + lVar10));
  _objc_release(uVar3);
  func_0x00010c181140(0x4044800000000000,*(undefined8 *)(param_5 + lVar11));
  func_0x00010c181140(0xc039000000000000,*(undefined8 *)(param_5 + _DAT_112741530));
  func_0x00010c181140(0x404e000000000000,*(undefined8 *)(param_5 + lVar7));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_108 = puVar6;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_10619b3c4;
  puStack_f0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_e8,auStack_90);
  _objc_copyWeak(auStack_110,auStack_90);
  func_0x00010bf03460(0x3fe3d70a3d70a3d7,0,0x3fe999999999999a,0,puVar1);
  puVar6 = PTR_PTR_1126affa8;
  func_0x00010c22bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar6);
  uVar3 = *(undefined8 *)(param_5 + lVar9);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed8da0(param_5);
  _objc_release(uVar3);
  func_0x00010c210720(*(undefined8 *)(param_5 + _DAT_11274150c));
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_e8);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release(uVar2);
  return;
}



/* Entry: 10619b25c; end: 10619b3c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619b25c(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127414f4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127414f0);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127414f8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10619b3c4; end: 10619b46f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619b3c4(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112741510);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10619b470; end: 10619b86b; -[SCFeatureZoomFactorsImpl _transitionToPillView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619b470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [16];
  
  lVar3 = param_5;
  func_0x00010be73da0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010c074c20();
  if ((int)lVar7 != 0) {
    lVar7 = (long)_DAT_1127414f8;
    uVar4 = *(undefined8 *)(param_5 + lVar7);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c074c20();
    _objc_release(uVar4);
    if ((int)uVar5 != 0) {
      func_0x00010bdda7a0(param_5);
      uVar5 = *(undefined8 *)(param_5 + lVar7);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar5);
      lVar8 = (long)_DAT_1127414f4;
      uVar5 = *(undefined8 *)(param_5 + lVar8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(0x3ff0000000000000);
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_5 + _DAT_1127414f0);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(0x3ff0000000000000);
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_5 + lVar7);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1677c0(0);
      _objc_release(uVar5);
      _objc_initWeak(auStack_90,param_5);
      puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_10619b86c;
      puStack_a0 = &UNK_1108434b0;
      _objc_copyWeak(auStack_98,auStack_90);
      puStack_e8 = puVar1;
      uStack_e0 = 0xc2000000;
      uStack_d8 = 0x10619b920;
      puStack_d0 = &UNK_11084b7a0;
      _objc_copyWeak(auStack_c0,auStack_90);
      _objc_retain(lVar3);
      lStack_c8 = lVar3;
      func_0x00010bf03440(0x3fc999999999999a,0,puVar2);
      lVar7 = (long)_DAT_112741510;
      uVar5 = *(undefined8 *)(param_5 + lVar7);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08cdc0();
      _objc_release(uVar5);
      uVar4 = *(undefined8 *)(param_5 + lVar8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0(lVar3);
      uVar5 = param_3;
      func_0x00010bfb68e0(lVar3);
      uVar6 = *(undefined8 *)(param_5 + lVar7);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      func_0x00010bf02fa0(0x3fc999999999999a,param_3,param_4,uVar5,uVar4);
      _objc_release(uVar6);
      _objc_release(uVar4);
      func_0x00010bfb68e0(lVar3);
      func_0x00010c181140(param_4,*(undefined8 *)(param_5 + _DAT_112741528));
      func_0x00010bfb68e0(lVar3);
      func_0x00010c181140(uVar5,*(undefined8 *)(param_5 + _DAT_11274152c));
      func_0x00010c181140(0xc028000000000000,*(undefined8 *)(param_5 + _DAT_112741530));
      func_0x00010c181140(0x4054000000000000,*(undefined8 *)(param_5 + _DAT_112741538));
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_copyWeak(auStack_f0,auStack_90);
      func_0x00010bf03460(0x3fe3d70a3d70a3d7,0,0x3fe999999999999a,0,puVar1);
      func_0x00010c210720(*(undefined8 *)(param_5 + _DAT_11274150c));
      uVar5 = *(undefined8 *)(param_5 + lVar8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bed8da0(param_5);
      _objc_release(uVar5);
      _objc_destroyWeak(auStack_f0);
      _objc_release(lStack_c8);
      _objc_destroyWeak(auStack_c0);
      _objc_destroyWeak(auStack_98);
      _objc_destroyWeak(auStack_90);
    }
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 10619b86c; end: 10619b9e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619b86c(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127414f4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127414f0);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127414f8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10619b9e4; end: 10619ba37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619b9e4(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112741510);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10619ba38; end: 10619ba67; -[SCFeatureZoomFactorsImpl _handleTapToDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619ba38(long param_1)

{
  func_0x00010c069d00(*(undefined8 *)(param_1 + _DAT_112741544));
                    /* WARNING: Could not recover jumptable at 0x00010becf210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToPillView_112591628);
  return;
}



/* Entry: 10619ba68; end: 10619bc23; -[SCFeatureZoomFactorsImpl _calculateNewZoomRatio:newLocation:initialZoomRatio:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10619ba68(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                    double param_5,long param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  double dStack_170;
  double dStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 - param_3;
  dVar10 = param_1 * 1.100000023841858;
  lVar6 = (long)_DAT_112741534;
  uVar1 = *(undefined8 *)(param_6 + lVar6);
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  dVar8 = param_1;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_6 + lVar6);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar1);
  dVar9 = (dVar10 / dRam0000000113144110) / dRam0000000113144118;
  _exp2();
  dVar10 = param_5 * dVar9;
  if (param_5 * dVar9 <= param_1) {
    dVar10 = param_1;
  }
  if (dVar10 <= dVar8) {
    dVar8 = dVar10;
  }
  dVar10 = 0.0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar5 = *(long *)(param_6 + lVar6);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_120;
    param_1 = 0.05;
    do {
      unaff_x22 = 0;
      dVar9 = dVar8;
      do {
        fVar7 = SUB84(dVar10,0);
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(lVar5);
        }
        func_0x00010bfb2c80(*(undefined8 *)(lStack_128 + unaff_x22 * 8));
        dVar10 = (double)fVar7;
        dVar8 = dVar10;
        if (0.05 <= ABS(dVar10 - dVar9)) {
          dVar8 = dVar9;
        }
        unaff_x22 = unaff_x22 + 1;
        dVar9 = dVar8;
      } while (lVar2 != unaff_x22);
      lVar2 = lVar5;
      func_0x00010bf52a60();
      uVar1 = 0;
    } while (lVar2 != 0);
  }
  lVar2 = lVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return dVar8;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10619bc24;
  dStack_170 = param_1;
  dStack_168 = dVar8;
  lStack_160 = unaff_x22;
  lStack_158 = lVar6;
  uStack_150 = uVar1;
  lStack_148 = lVar5;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010bdda7a0();
  _objc_initWeak(auStack_178,lVar2);
  puVar3 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  uVar1 = *(undefined8 *)(lVar2 + _DAT_1127414a8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71ca0();
  _objc_copyWeak(auStack_180,auStack_178);
  func_0x00010c150360(dVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar2 + _DAT_112741544);
  *(undefined **)(lVar2 + _DAT_112741544) = puVar3;
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_180);
  _objc_destroyWeak(auStack_178);
  return dVar10;
}



/* Entry: 10619bc24; end: 10619bd3f; -[SCFeatureZoomFactorsImpl _startDismissTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619bc24(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010bdda7a0();
  _objc_initWeak(auStack_48,param_2);
  puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  uVar1 = *(undefined8 *)(param_2 + _DAT_1127414a8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71ca0();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c150360(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112741544);
  *(undefined **)(param_2 + _DAT_112741544) = puVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10619bd40; end: 10619bd73;  */

void FUN_10619bd40(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010becf200(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10619bd74; end: 10619bdb7; -[SCFeatureZoomFactorsImpl _cancelDismissTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619bd74(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112741544;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c069d00();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10619bdb8; end: 10619beeb; -[SCFeatureZoomFactorsImpl _updateGestureRecognizersFor:enabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619bdb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_5;
  _objc_retain(param_5);
  puVar1 = param_5;
  func_0x00010bfc1c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 != (undefined1 *)0x0) {
    param_1 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    puVar1 = param_5;
    func_0x00010bfc1c00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf52a60();
    if (puVar2 != (undefined1 *)0x0) {
      lVar5 = *plStack_110;
      do {
        puVar6 = (undefined1 *)0x0;
        do {
          if (*plStack_110 != lVar5) {
            _objc_enumerationMutation(puVar1);
          }
          func_0x00010c195460(*(undefined8 *)(lStack_118 + (long)puVar6 * 8));
          puVar6 = puVar6 + 1;
        } while (puVar2 != puVar6);
        puVar2 = puVar1;
        puVar3 = &uStack_120;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined1 *)0x0);
    }
    _objc_release(puVar1);
    puVar2 = (undefined1 *)puVar3;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = (long)_DAT_1127414f4;
  uVar4 = *(undefined8 *)(param_5 + lVar5);
  _objc_retain(puVar2);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(puVar2);
  _objc_release(uVar4);
  puVar1 = puVar2;
  func_0x00010c252440();
  _objc_release(puVar2);
  if (puVar1 + -3 < (undefined1 *)0x2) {
                    /* WARNING: Could not recover jumptable at 0x00010bebfcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s__startDismissTimer_11258d8d8);
    return;
  }
  if (puVar1 != (undefined1 *)0x2) {
    if (puVar1 == (undefined1 *)0x1) {
      *(double *)(param_5 + _DAT_112741548) = (double)*(float *)(param_5 + _DAT_1127414e8);
      lVar5 = (long)_DAT_11274154c;
      *(undefined8 *)(param_5 + lVar5) = param_1;
      *(undefined8 *)((long)(param_5 + lVar5) + 8) = param_2;
      func_0x00010bdda7a0(param_5);
      uVar4 = *(undefined8 *)(param_5 + _DAT_1127414fc);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b3680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar4);
      return;
    }
    return;
  }
  uVar7 = *(undefined8 *)(param_5 + _DAT_11274154c);
  func_0x00010bdd87c0(uVar7,*(undefined8 *)((long)(param_5 + _DAT_11274154c) + 8),param_1,param_2,
                      *(undefined8 *)(param_5 + _DAT_112741548),param_5);
  uVar4 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284d00(uVar7);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdfc070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar7,param_5,PTR_s__dialOnSelectZoomRatio__11255c9b8);
  return;
}



/* Entry: 10619beec; end: 10619c077; -[SCFeatureZoomFactorsImpl _handleDrag:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619beec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = (long)_DAT_1127414f4;
  uVar2 = *(undefined8 *)(param_3 + lVar3);
  _objc_retain(param_5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5);
  _objc_release(uVar2);
  lVar1 = param_5;
  func_0x00010c252440();
  _objc_release(param_5);
  if (lVar1 - 3U < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bebfcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__startDismissTimer_11258d8d8);
    return;
  }
  if (lVar1 != 2) {
    if (lVar1 == 1) {
      *(double *)(param_3 + _DAT_112741548) = (double)*(float *)(param_3 + _DAT_1127414e8);
      lVar1 = (long)_DAT_11274154c;
      *(undefined8 *)(param_3 + lVar1) = param_1;
      ((undefined8 *)(param_3 + lVar1))[1] = param_2;
      func_0x00010bdda7a0(param_3);
      uVar2 = *(undefined8 *)(param_3 + _DAT_1127414fc);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b3680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
    return;
  }
  uVar4 = *(undefined8 *)(param_3 + _DAT_11274154c);
  func_0x00010bdd87c0(uVar4,((undefined8 *)(param_3 + _DAT_11274154c))[1],param_1,param_2,
                      *(undefined8 *)(param_3 + _DAT_112741548),param_3);
  uVar2 = *(undefined8 *)(param_3 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284d00(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdfc070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar4,param_3,PTR_s__dialOnSelectZoomRatio__11255c9b8);
  return;
}



/* Entry: 10619c078; end: 10619c2a7; -[SCFeatureZoomFactorsImpl _dialOnSelectZoomRatio:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619c078(double param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [8];
  double dStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar12 = 0.0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar8 = *(long *)(param_2 + _DAT_112741534);
  _objc_retain(lVar8);
  lVar4 = lVar8;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar9 = *plStack_130;
    do {
      lVar10 = 0;
      do {
        fVar11 = SUB84(dVar12,0);
        if (*plStack_130 != lVar9) {
          _objc_enumerationMutation(lVar8);
        }
        func_0x00010bfb2c80(*(undefined8 *)(lStack_138 + lVar10 * 8));
        dVar12 = (double)fVar11;
        dVar13 = *(double *)(param_2 + _DAT_112741550);
        bVar1 = false;
        if ((dVar12 <= param_1) && (bVar1 = false, !NAN(dVar13) && !NAN(dVar12))) {
          bVar1 = dVar13 < dVar12;
        }
        if (bVar1) {
LAB_10619c14c:
          puVar5 = PTR_PTR_1126affa8;
          func_0x00010c22bc20(PTR_PTR_1126affa8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0f8760();
          _objc_release(puVar5);
        }
        else {
          bVar1 = false;
          bVar2 = true;
          bVar3 = false;
          if (param_1 <= dVar12) {
            bVar1 = false;
            bVar2 = false;
            bVar3 = true;
            if (!NAN(dVar13) && !NAN(dVar12)) {
              bVar1 = dVar13 < dVar12;
              bVar2 = dVar13 == dVar12;
              bVar3 = false;
            }
          }
          if (!bVar2 && bVar1 == bVar3) goto LAB_10619c14c;
        }
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
      lVar4 = lVar8;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar8);
  *(double *)(param_2 + _DAT_112741550) = param_1;
  *(undefined1 *)(param_2 + _DAT_112741554) = 1;
  puVar6 = auStack_148;
  _objc_initWeak(puVar6,param_2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_158,auStack_148);
  dStack_150 = param_1;
  func_0x00010c0f7fc0(puVar6);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_158);
  puVar6 = auStack_148;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_158);
  _objc_destroyWeak(auStack_148);
  __Unwind_Resume();
  puVar7 = puVar6 + 0x20;
  _objc_loadWeakRetained(puVar7);
  func_0x00010bdfc040((float)*(double *)(puVar6 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 10619c2a8; end: 10619c2df;  */

void FUN_10619c2a8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdfc040((float)*(double *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10619c2e0; end: 10619c3c3; -[SCFeatureZoomFactorsImpl _dialDidZoomToFactor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619c2e0(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  
  lVar1 = param_2;
  dVar3 = param_1;
  func_0x00010c26ad20(param_2,param_3,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed0d80(param_2);
  fVar4 = (float)(dVar3 * (double)SUB84(param_1,0));
  fVar2 = 1.0;
  if (1.0 <= fVar4) {
    if ((((lVar1 != 0) && (func_0x00010bfb2c80(lVar1), fVar2 < fVar4)) &&
        (*(char *)(param_2 + _DAT_1127414dc) == '\x01')) &&
       ((*(byte *)(param_2 + _DAT_112741518) & 1) == 0)) {
      func_0x00010be090e0(param_2);
      goto LAB_10619c3a4;
    }
  }
  else if ((*(char *)(param_2 + _DAT_1127414d8) == '\x01') &&
          ((*(byte *)(param_2 + _DAT_11274151c) & 1) == 0)) {
    func_0x00010be091a0(param_2);
    goto LAB_10619c3a4;
  }
  func_0x00010beaa360(fVar4,param_2,param_3,0);
LAB_10619c3a4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10619c3c4; end: 10619c4bf; -[SCFeatureZoomFactorsImpl _pillButtonOnSelectZoomRatio:] */

void FUN_10619c3c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar1);
  puVar2 = auStack_38;
  _objc_initWeak(puVar2,param_2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uStack_40 = param_1;
  _objc_copyWeak(auStack_48,auStack_38);
  func_0x00010c0f7fc0(puVar2);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10619c4c0; end: 10619c57f;  */

void FUN_10619c4c0(long param_1)

{
  bool bVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = *(double *)(param_1 + 0x28);
  dVar4 = ABS(dVar3 + -1.0);
  dVar5 = ABS(dVar3 + 1.0) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar4) && (bVar1 = false, !NAN(dVar4) && !NAN(dVar5))) {
    bVar1 = dVar4 < dVar5;
  }
  if (bVar1) {
    lVar2 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bdf9260();
  }
  else if (1.0 <= dVar3) {
    if (dVar3 <= 1.0) {
      return;
    }
    lVar2 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar2);
    func_0x00010becb0a0((float)*(double *)(param_1 + 0x28));
  }
  else {
    lVar2 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bed0d60((float)*(double *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10619c580; end: 10619c5e7; -[SCFeatureZoomFactorsImpl _defaultButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619c580(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  uVar2 = (undefined4)param_1;
  *(undefined1 *)(param_2 + _DAT_112741558) = 1;
  uVar1 = *(undefined8 *)(param_2 + _DAT_1127414fc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a4be0();
  _objc_release(uVar1);
  func_0x00010bed0d80(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010beaa370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((float)(double)CONCAT44(uVar3,uVar2),param_2,PTR_s__setZoomFactor_animated__112588280,1
            );
  return;
}



/* Entry: 10619c5e8; end: 10619c6a3; -[SCFeatureZoomFactorsImpl _ultraWideButtonTappedWithZoomRatio:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619c5e8(double param_1,long param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined1 *)(param_2 + _DAT_112741558) = 1;
  uVar1 = *(undefined8 *)(param_2 + _DAT_1127414fc);
  dVar2 = param_1;
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2120();
  _objc_release(uVar1);
  if ((*(char *)(param_2 + _DAT_1127414d8) == '\x01') &&
     ((*(byte *)(param_2 + _DAT_11274151c) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be091b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__enableUltraWideCamera_11255fe08);
    return;
  }
  func_0x00010bed0d80(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010beaa370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((float)(dVar2 * (double)SUB84(param_1,0)),param_2,
             PTR_s__setZoomFactor_animated__112588280,1);
  return;
}



/* Entry: 10619c6a4; end: 10619c75f; -[SCFeatureZoomFactorsImpl _telephotoButtonTappedWithZoomRatio:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619c6a4(double param_1,long param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined1 *)(param_2 + _DAT_112741558) = 1;
  uVar1 = *(undefined8 *)(param_2 + _DAT_1127414fc);
  dVar2 = param_1;
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b1940();
  _objc_release(uVar1);
  if ((*(char *)(param_2 + _DAT_1127414dc) == '\x01') &&
     ((*(byte *)(param_2 + _DAT_112741518) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be090f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__enableTelephotoCamera_11255fdd8);
    return;
  }
  func_0x00010bed0d80(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010beaa370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((float)(dVar2 * (double)SUB84(param_1,0)),param_2,
             PTR_s__setZoomFactor_animated__112588280,1);
  return;
}



/* Entry: 10619c760; end: 10619c7d7; -[SCFeatureZoomFactorsImpl _setZoomFactor:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619c760(float param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_1127414b4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2bf1a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227b20((double)param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10619c7d8; end: 10619c823; -[SCFeatureZoomFactorsImpl _enableUltraWideCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619c7d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127414b0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10619c824; end: 10619c827;  */

void FUN_10619c824(void)

{
  return;
}



/* Entry: 10619c828; end: 10619c873; -[SCFeatureZoomFactorsImpl _enableTelephotoCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619c828(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127414b0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10619c874; end: 10619c877;  */

void FUN_10619c874(void)

{
  return;
}



/* Entry: 10619c878; end: 10619c98b; -[SCFeatureZoomFactorsImpl _didChangeZoomFactorOfDevice:capturerState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619c878(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  float fVar2;
  double dVar3;
  
  if (param_4 == 1) {
    _objc_retain(param_5);
    func_0x00010bed0d80(param_2);
    dVar3 = 1.0 / param_1;
    if (*(char *)(param_2 + _DAT_112741558) == '\x01') {
      uVar1 = 0;
      *(undefined1 *)(param_2 + _DAT_112741558) = 0;
    }
    else if (*(char *)(param_2 + _DAT_112741554) == '\x01') {
      *(undefined1 *)(param_2 + _DAT_112741554) = 0;
      uVar1 = 1;
    }
    else if (*(char *)(param_2 + _DAT_11274155c) == '\x01') {
      *(undefined1 *)(param_2 + _DAT_11274155c) = 0;
      uVar1 = 4;
    }
    else {
      uVar1 = 2;
    }
    *(undefined8 *)(param_2 + _DAT_112741504) = uVar1;
    func_0x00010c2bf100(param_5);
    _objc_release(param_5);
    fVar2 = (float)(dVar3 * (double)SUB84(param_1,0));
    *(float *)(param_2 + _DAT_1127414e8) = fVar2;
    uVar1 = *(undefined8 *)(param_2 + _DAT_1127414ec);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227ae0(fVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10619c98c; end: 10619c9ab; -[SCFeatureZoomFactorsImpl _ultraWideMultiplier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10619c98c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x4000000000000000;
  if (*(char *)(param_1 + _DAT_11274151c) == '\0') {
    uVar1 = 0x3ff0000000000000;
  }
  return uVar1;
}



/* Entry: 10619c9ac; end: 10619cad7; -[SCFeatureZoomFactorsImpl _sessionDidStopRunning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619c9ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_1127414b4;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf2fa00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c080be0();
  if ((int)uVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf2fa00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c081d60();
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar1);
    if ((int)uVar4 == 0) goto LAB_10619ca9c;
  }
  else {
    _objc_release(uVar5);
    _objc_release(uVar1);
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127414b0);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9320();
  _objc_release(uVar5);
LAB_10619ca9c:
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127414ec);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227ae0(0x3f800000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 10619cad8; end: 10619cadb;  */

void FUN_10619cad8(void)

{
  return;
}



/* Entry: 10619cadc; end: 10619caef; -[SCFeatureZoomFactorsImpl _setNeedsRefreshZoomFactors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619cadc(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112741560) = 1;
  return;
}



/* Entry: 10619caf0; end: 10619cb9f;  */

void FUN_10619caf0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea1720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10619cba0; end: 10619cc63;  */

void FUN_10619cba0(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x58);
  func_0x00010c0e3880(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10619cc64; end: 10619ccfb;  */

void FUN_10619cc64(long param_1,undefined1 param_2)

{
  func_0x00010bf093c0();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee5400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10619ccfc; end: 10619ce13;  */

void FUN_10619ccfc(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10619ce14;
  puStack_50 = &UNK_1109113e0;
  _objc_copyWeak(auStack_48,param_1 + 0x58);
  func_0x00010c0e3a00(param_2);
  _objc_copyWeak(auStack_70,param_1 + 0x58);
  func_0x00010c0e3b80(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 10619ce14; end: 10619ce6b;  */

void FUN_10619ce14(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfcbc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10619ce6c; end: 10619cefb;  */

void FUN_10619ce6c(long param_1,undefined1 param_2)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee5400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10619cefc; end: 10619d12b;  */

void FUN_10619cefc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10619d12c;
  puStack_a8 = &UNK_110912908;
  uStack_a0 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_68,param_1 + 0x58);
  uStack_90 = *(undefined8 *)(param_1 + 0x30);
  uStack_98 = *(undefined8 *)(param_1 + 0x28);
  uStack_80 = *(undefined8 *)(param_1 + 0x40);
  uStack_88 = *(undefined8 *)(param_1 + 0x38);
  uStack_70 = *(undefined8 *)(param_1 + 0x50);
  uStack_78 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c0e7bc0(param_2);
  puStack_120 = puVar1;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x10619d1c0;
  puStack_108 = &UNK_1109129c8;
  uStack_100 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_c8,param_1 + 0x58);
  uStack_f0 = *(undefined8 *)(param_1 + 0x30);
  uStack_f8 = *(undefined8 *)(param_1 + 0x28);
  uStack_e0 = *(undefined8 *)(param_1 + 0x40);
  uStack_e8 = *(undefined8 *)(param_1 + 0x38);
  uStack_d0 = *(undefined8 *)(param_1 + 0x50);
  uStack_d8 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c0e3ae0(param_2);
  puStack_180 = puVar1;
  uStack_178 = 0xc2000000;
  uStack_170 = 0x10619d250;
  puStack_168 = &UNK_1109129f8;
  uStack_160 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_128,param_1 + 0x58);
  uStack_150 = *(undefined8 *)(param_1 + 0x30);
  uStack_158 = *(undefined8 *)(param_1 + 0x28);
  uStack_140 = *(undefined8 *)(param_1 + 0x40);
  uStack_148 = *(undefined8 *)(param_1 + 0x38);
  uStack_130 = *(undefined8 *)(param_1 + 0x50);
  uStack_138 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c0e3ac0(param_2);
  _objc_copyWeak(auStack_188,param_1 + 0x58);
  func_0x00010c0e3840(param_2);
  _objc_destroyWeak(auStack_188);
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
  return;
}



/* Entry: 10619d12c; end: 10619d55f;  */

void FUN_10619d12c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee5400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10619d560; end: 10619d5b7; -[SCFeatureZoomFactorsImpl _unregisterObservers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619d560(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112741508;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_112741564;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10619d5b8; end: 10619d5cb; -[SCFeatureZoomFactorsImpl didChangeZoomWithCaptureControlButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619d5b8(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11274155c) = 1;
  return;
}



/* Entry: 10619d5cc; end: 10619d607; -[SCFeatureZoomFactorsImpl cancelActiveZoomGestures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619d5cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127414ec);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10619d608; end: 10619d7f7; -[SCFeatureZoomFactorsImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619d608(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112741564,0);
  _objc_storeStrong(param_1 + _DAT_112741500,0);
  _objc_storeStrong(param_1 + _DAT_112741544,0);
  _objc_storeStrong(param_1 + _DAT_112741534,0);
  _objc_storeStrong(param_1 + _DAT_112741538,0);
  _objc_storeStrong(param_1 + _DAT_112741508,0);
  _objc_storeStrong(param_1 + _DAT_1127414fc,0);
  _objc_storeStrong(param_1 + _DAT_11274152c,0);
  _objc_storeStrong(param_1 + _DAT_112741528,0);
  _objc_storeStrong(param_1 + _DAT_112741530,0);
  _objc_storeStrong(param_1 + _DAT_1127414f8,0);
  _objc_storeStrong(param_1 + _DAT_1127414f0,0);
  _objc_storeStrong(param_1 + _DAT_1127414f4,0);
  _objc_storeStrong(param_1 + _DAT_1127414ec,0);
  _objc_storeStrong(param_1 + _DAT_112741568,0);
  _objc_storeStrong(param_1 + _DAT_11274150c,0);
  _objc_storeStrong(param_1 + _DAT_112741510,0);
  _objc_storeStrong(param_1 + _DAT_1127414e4,0);
  _objc_storeStrong(param_1 + _DAT_1127414e0,0);
  _objc_destroyWeak(param_1 + _DAT_1127414d4);
  _objc_storeStrong(param_1 + _DAT_1127414cc,0);
  _objc_storeStrong(param_1 + _DAT_1127414c8,0);
  _objc_storeStrong(param_1 + _DAT_1127414c4,0);
  _objc_destroyWeak(param_1 + _DAT_1127414c0);
  _objc_destroyWeak(param_1 + _DAT_1127414bc);
  _objc_storeStrong(param_1 + _DAT_1127414b8,0);
  _objc_storeStrong(param_1 + _DAT_1127414b4,0);
  _objc_storeStrong(param_1 + _DAT_1127414b0,0);
  _objc_destroyWeak(param_1 + _DAT_1127414ac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127414a8,0);
  return;
}



/* Entry: 10619d7f8; end: 10619d86b; -[SCFeatureZoomFactorsLogger initWithCameraUserActionLogger:] */

undefined1 * FUN_10619d7f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f0000;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10619d86c; end: 10619da1b; -[SCFeatureZoomFactorsLogger usageMetrics] */

void FUN_10619d86c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
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
  puVar1 = PTR_PTR_1126c8508;
  func_0x00010bf69ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_a8 = puVar1;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c8508;
  puStack_88 = puVar2;
  func_0x00010c27f0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_a0 = puVar3;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c8508;
  puStack_80 = puVar4;
  func_0x00010c26acc0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_98 = puVar5;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c8508;
  puStack_78 = puVar6;
  func_0x00010bf71c60();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_90 = puVar7;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar8;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_88,&puStack_a8,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x28) = 0;
  *(undefined8 *)(puVar1 + 0x20) = 0;
  return;
}



/* Entry: 10619da1c; end: 10619da27; -[SCFeatureZoomFactorsLogger resetMetrics] */

void FUN_10619da1c(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 10619da28; end: 10619da3f; -[SCFeatureZoomFactorsLogger logDefaultPillButtonTap] */

void FUN_10619da28(long param_1)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010be4fcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logActionWithItem_action__1125718d8,0x54,5);
  return;
}



/* Entry: 10619da40; end: 10619da57; -[SCFeatureZoomFactorsLogger logUltraWidePillButtonTap] */

void FUN_10619da40(long param_1)

{
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010be4fcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logActionWithItem_action__1125718d8,0x55,5);
  return;
}



/* Entry: 10619da58; end: 10619da6f; -[SCFeatureZoomFactorsLogger logTelephotoPillButtonTap] */

void FUN_10619da58(long param_1)

{
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010be4fcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logActionWithItem_action__1125718d8,0x56,5);
  return;
}



/* Entry: 10619da70; end: 10619da87; -[SCFeatureZoomFactorsLogger logZoomFactorsDialLaunch] */

void FUN_10619da70(long param_1)

{
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010be4fcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logActionWithItem_action__1125718d8,0x57,4);
  return;
}



/* Entry: 10619da88; end: 10619da93; -[SCFeatureZoomFactorsLogger logZoomFactorsDialScroll] */

void FUN_10619da88(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4fcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logActionWithItem_action__1125718d8,0x57,7);
  return;
}



/* Entry: 10619da94; end: 10619db07; -[SCFeatureZoomFactorsLogger _logActionWithItem:action:] */

void FUN_10619da94(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b800();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10619db08; end: 10619db13; -[SCFeatureZoomFactorsLogger .cxx_destruct] */

void FUN_10619db08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10619db14; end: 10619debf; -[SCZoomFactorsDialView initWithFrame:zoomRatioStops:currentZoomRatio:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10619db14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_a0;
  undefined *puStack_98;
  
  puVar1 = &uStack_a0;
  _objc_retain(param_8);
  puStack_98 = PTR_PTR_1126f0008;
  uStack_a0 = param_6;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_a0,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112741580;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112741584) = param_5;
    puVar3 = PTR__OBJC_CLASS___CALayer_1126b1750;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_112741588;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274158c);
    *(undefined **)((long)puVar1 + (long)_DAT_11274158c) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_112741590;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c20e8e0(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar3);
    func_0x00010c1bdd00(0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb20(*(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_112741594;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c20e8e0(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar3);
    func_0x00010c1bdd00(0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb20(*(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_112741598;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c20e8e0(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar3);
    func_0x00010c1bdd00(0x4008000000000000,*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb20(*(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = PTR__OBJC_CLASS___CATextLayer_1126c8768;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11274159c;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    _objc_release(uVar2);
    func_0x00010c166c80(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    func_0x00010c182d20(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar3);
    func_0x00010befbb20(*(undefined8 *)((long)puVar1 + lVar6));
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___CATextLayer_1126c8768;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_1127415a0;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    _objc_release(uVar2);
    func_0x00010c166c80(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    func_0x00010c182d20(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar3);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(puVar4);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127415a4) = 1;
  }
  _objc_release(param_8);
  return (undefined1 *)puVar1;
}



/* Entry: 10619dec0; end: 10619e153; -[SCZoomFactorsDialView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619dec0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  plVar1 = &lStack_a0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = PTR_PTR_1126f0008;
  lStack_a0 = param_3;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_layoutSubviews_112600e60);
  lVar10 = (long)_DAT_1127415a4;
  if (*(char *)(param_3 + lVar10) == '\x01') {
    func_0x00010bf89a00(param_3);
    lVar9 = (long)_DAT_1127415a8;
    func_0x00010c104260(*(undefined8 *)(param_3 + _DAT_112741590));
    *(undefined8 *)(param_3 + lVar9) = param_1;
    ((undefined8 *)(param_3 + lVar9))[1] = param_2;
    lVar9 = (long)_DAT_1127415ac;
    func_0x00010c104260(*(undefined8 *)(param_3 + _DAT_112741594));
    *(undefined8 *)(param_3 + lVar9) = param_1;
    ((undefined8 *)(param_3 + lVar9))[1] = param_2;
    lVar9 = (long)_DAT_1127415b0;
    func_0x00010c104260(*(undefined8 *)(param_3 + _DAT_11274159c));
    *(undefined8 *)(param_3 + lVar9) = param_1;
    ((undefined8 *)(param_3 + lVar9))[1] = param_2;
    plVar1 = (long *)PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00(param_3);
    func_0x00010c19f0e0(plVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_90 = puVar3;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_88 = puVar3;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_80 = puVar3;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_78 = puVar3;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(plVar1);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    func_0x00010c1bff00(plVar1);
    func_0x00010c209760(0,0x3fe0000000000000,plVar1);
    param_1 = 0x3ff0000000000000;
    func_0x00010c196020(0x3ff0000000000000,0x3fe0000000000000,plVar1);
    lVar9 = param_3;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(lVar9);
    *(undefined1 *)(param_3 + lVar10) = 0;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)((long)plVar1 + (long)_DAT_112741584) = param_1;
  dVar11 = 1.0;
  func_0x00010bf86ea0(0x3ff0000000000000,param_1);
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c1dee80(dVar11 + *(double *)((long)plVar1 + (long)_DAT_1127415a8),
                      ((double *)((long)plVar1 + (long)_DAT_1127415a8))[1],
                      *(undefined8 *)((long)plVar1 + (long)_DAT_112741590));
  func_0x00010c1dee80(dVar11 + *(double *)((long)plVar1 + (long)_DAT_1127415ac),
                      ((double *)((long)plVar1 + (long)_DAT_1127415ac))[1],
                      *(undefined8 *)((long)plVar1 + (long)_DAT_112741594));
  func_0x00010c1dee80(dVar11 + *(double *)((long)plVar1 + (long)_DAT_1127415b0),
                      ((double *)((long)plVar1 + (long)_DAT_1127415b0))[1],
                      *(undefined8 *)((long)plVar1 + (long)_DAT_11274159c));
  func_0x00010c120660(plVar1);
  func_0x00010c284ce0(param_1,plVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf42770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___CATransaction_1126b5718,PTR_s_commit_1125ae380);
  return;
}



/* Entry: 10619e154; end: 10619e227; -[SCZoomFactorsDialView updateCurrentZoomRatioTo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619e154(undefined8 param_1,long param_2)

{
  double dVar1;
  
  *(undefined8 *)(param_2 + _DAT_112741584) = param_1;
  dVar1 = 1.0;
  func_0x00010bf86ea0(0x3ff0000000000000,param_1);
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c1dee80(dVar1 + *(double *)(param_2 + _DAT_1127415a8),
                      ((double *)(param_2 + _DAT_1127415a8))[1],
                      *(undefined8 *)(param_2 + _DAT_112741590));
  func_0x00010c1dee80(dVar1 + *(double *)(param_2 + _DAT_1127415ac),
                      ((double *)(param_2 + _DAT_1127415ac))[1],
                      *(undefined8 *)(param_2 + _DAT_112741594));
  func_0x00010c1dee80(dVar1 + *(double *)(param_2 + _DAT_1127415b0),
                      ((double *)(param_2 + _DAT_1127415b0))[1],
                      *(undefined8 *)(param_2 + _DAT_11274159c));
  func_0x00010c120660(param_2);
  func_0x00010c284ce0(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bf42770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___CATransaction_1126b5718,PTR_s_commit_1125ae380);
  return;
}



/* Entry: 10619e228; end: 10619e243; -[SCZoomFactorsDialView animateIn:pillWidth:pillHeight:screenWidth:] */

void FUN_10619e228(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcaad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,param_3,param_4,param_1,param_5,
             PTR_s__animateContentLayer_pillWidth_p_112550450,1);
  return;
}



/* Entry: 10619e244; end: 10619e25f; -[SCZoomFactorsDialView animateOut:pillWidth:pillHeight:screenWidth:] */

void FUN_10619e244(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcaad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,param_3,param_4,param_1,param_5,
             PTR_s__animateContentLayer_pillWidth_p_112550450,0);
  return;
}



/* Entry: 10619e260; end: 10619e457; -[SCZoomFactorsDialView _animateContentLayer:pillWidth:pillHeight:screenWidth:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619e260(double param_1,double param_2,double param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,int param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  
  dVar7 = (param_3 - param_1) * 0.5;
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  if (param_7 == 0) {
    func_0x00010bf19a00(0xc044800000000000,0x4039000000000000,param_3 + 82.0,0x4044800000000000,
                        0x4034800000000000,PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    dVar6 = param_2 * 0.5;
  }
  else {
    func_0x00010bf19a00(dVar7,0x4039000000000000,param_1,param_2,param_2 * 0.5,
                        PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    dVar7 = -41.0;
    param_2 = 41.0;
    dVar6 = 20.5;
    param_1 = param_3 + 82.0;
  }
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19a00(dVar7,0x4039000000000000,param_1,param_2,dVar6,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___CASpringAnimation_1126b5720;
  func_0x00010bf04040(PTR__OBJC_CLASS___CASpringAnimation_1126b5720,param_6,
                      &PTR____CFConstantStringClassReference_110dbfab8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  _objc_retainAutorelease(puVar1);
  func_0x00010bdc1040();
  func_0x00010c1a1180(puVar3,param_6,puVar4);
  puVar4 = puVar2;
  _objc_retainAutorelease(puVar2);
  func_0x00010bdc1040();
  func_0x00010c216920(puVar3,param_6,puVar4);
  func_0x00010c192d40(param_4,puVar3);
  func_0x00010c1893a0(0x4038000000000000,puVar3);
  func_0x00010c20be40(0x406c000000000000,puVar3);
  func_0x00010c1c2d40(0x3ff0000000000000,puVar3);
  puVar4 = puVar2;
  _objc_retainAutorelease(puVar2);
  func_0x00010bdc1040();
  lVar5 = (long)_DAT_11274158c;
  func_0x00010c1d9820(*(undefined8 *)(param_5 + lVar5),param_6,puVar4);
  func_0x00010c1c2c00(*(undefined8 *)(param_5 + _DAT_112741588),param_6,
                      *(undefined8 *)(param_5 + lVar5));
  func_0x00010bef6c20(*(undefined8 *)(param_5 + lVar5),param_6,puVar3,
                      &PTR____CFConstantStringClassReference_110e439f8);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10619e458; end: 10619e707; -[SCZoomFactorsDialView drawLinesAndTexts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619e458(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112741584;
  func_0x00010c284ce0(*(undefined8 *)(param_4 + lVar9),param_4);
  func_0x00010bfb68e0(param_4);
  func_0x00010c0d18c0(param_3 * 0.5,0x403b000000000000,puVar3);
  func_0x00010bfb68e0(param_4);
  dVar11 = param_3 * 0.5;
  func_0x00010bef98c0(dVar11,0x4044800000000000,puVar3);
  lVar10 = (long)_DAT_112741580;
  uVar4 = *(undefined8 *)(param_4 + lVar10);
  func_0x00010c0dfd40(uVar4,param_5,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar4);
  func_0x00010bfb68e0(param_4);
  dVar12 = *(double *)(param_4 + lVar9);
  func_0x00010bf86ea0(dVar12,dVar11,param_4);
  lVar9 = *(long *)(param_4 + lVar10);
  func_0x00010bf529e0();
  if (lVar9 != 0) {
    uVar7 = 0;
    dVar12 = param_3 * 0.5 - dVar12;
    dVar14 = param_3 * 0.5;
    do {
      dVar13 = dVar14;
      uVar4 = *(undefined8 *)(param_4 + lVar10);
      func_0x00010c0dfd40(uVar4,param_5,uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(uVar4);
      if (uVar7 != 0) {
        dVar14 = dVar13;
        func_0x00010bf86ea0(dVar13,dVar11,param_4);
        iVar8 = (int)((double)(long)(dVar14 / dRam0000000113144118) + -1.0);
        dVar14 = dVar14 / (double)(iVar8 + 1);
        if (0 < iVar8) {
          do {
            dVar12 = dVar14 + dVar12;
            func_0x00010c0d18c0(dVar12,0x4040000000000000,puVar2);
            func_0x00010bef98c0(dVar12,0x4044800000000000,puVar2);
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        dVar12 = dVar14 + dVar12;
      }
      func_0x00010c0d18c0(dVar12,0x403b000000000000,puVar1);
      func_0x00010bef98c0(dVar12,0x4044800000000000,puVar1);
      dVar14 = dVar13;
      func_0x00010befbe60(dVar13,dVar12,0x4046800000000000,param_4);
      uVar7 = uVar7 + 1;
      uVar5 = *(ulong *)(param_4 + lVar10);
      func_0x00010bf529e0();
      dVar11 = dVar13;
    } while (uVar7 < uVar5);
  }
  puVar6 = puVar1;
  _objc_retainAutorelease(puVar1);
  func_0x00010bdc1040();
  func_0x00010c1d9820(*(undefined8 *)(param_4 + _DAT_112741590),param_5,puVar6);
  puVar6 = puVar2;
  _objc_retainAutorelease(puVar2);
  func_0x00010bdc1040();
  func_0x00010c1d9820(*(undefined8 *)(param_4 + _DAT_112741594),param_5,puVar6);
  puVar6 = puVar3;
  _objc_retainAutorelease(puVar3);
  func_0x00010bdc1040();
  func_0x00010c1d9820(*(undefined8 *)(param_4 + _DAT_112741598),param_5,puVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10619e708; end: 10619e953; -[SCZoomFactorsDialView addTextLayerWithMarker:atPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619e708(double param_1,double param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  double dStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___CATextLayer_1126c8768;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 0x34;
  if (0.05 <= ABS(param_1 - *(double *)(param_4 + _DAT_112741584))) {
    uVar9 = 0xd5;
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_5,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uStack_90 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_88 = puVar3;
  puStack_80 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_5,&puStack_88,&uStack_98,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  lVar6 = param_4;
  func_0x00010bfb5ba0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar3,param_5,lVar6,puVar4);
  _objc_release(lVar6);
  func_0x00010c20e7c0(puVar1,param_5,puVar3);
  func_0x00010c166c80(puVar1,param_5,*(undefined8 *)PTR__kCAAlignmentCenter_110346ca0);
  func_0x00010c23d0a0(puVar3);
  uVar8 = 0xbfe0000000000000;
  param_1 = param_1 * -0.5;
  param_2 = param_2 + param_1;
  func_0x00010c23d0a0(puVar3);
  func_0x00010c23d0a0(puVar3);
  dVar7 = param_2;
  uVar9 = param_3;
  func_0x00010c19f0e0(param_2,param_3,param_1,uVar8,puVar1);
  puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c182d20(puVar1);
  _objc_release(puVar5);
  func_0x00010befbb20(*(undefined8 *)(param_4 + _DAT_11274159c),param_5,puVar1);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_10619e954;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_108 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
  dStack_e0 = param_2;
  uStack_d8 = param_3;
  puStack_d0 = puVar4;
  puStack_c8 = puVar2;
  lStack_c0 = param_4;
  puStack_b8 = puVar1;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010bf1ecc0(0x4031000000000000);
  _objc_retainAutoreleasedReturnValue();
  uStack_100 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_f8 = puVar5;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_5,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_f0 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_5,&puStack_f8,&uStack_108,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar5);
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  puVar4 = puVar3;
  func_0x00010bfb5940(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar1,param_5,puVar4,puVar2);
  _objc_release(puVar4);
  lVar6 = (long)_DAT_1127415a0;
  func_0x00010c20e7c0(*(undefined8 *)(puVar3 + lVar6),param_5,puVar1);
  func_0x00010bfb68e0(puVar3);
  func_0x00010c23d0a0(puVar1);
  dVar7 = dVar7 * 0.5;
  dVar10 = param_1 * 0.5 - dVar7;
  func_0x00010c23d0a0(puVar1);
  func_0x00010c23d0a0(puVar1);
  func_0x00010c19f0e0(dVar10,0,dVar7,uVar9,*(undefined8 *)(puVar3 + lVar6));
  _objc_release(puVar1);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_5,
                      &PTR____CFConstantStringClassReference_110e43a18);
  return;
}



/* Entry: 10619e954; end: 10619eaff; -[SCZoomFactorsDialView updateCurrentZoomRatioTextLayerWith:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619e954(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4031000000000000);
  _objc_retainAutoreleasedReturnValue();
  uStack_60 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_58 = puVar1;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_5,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_5,&puStack_58,&uStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  lVar4 = param_4;
  func_0x00010bfb5940(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar1,param_5,lVar4,puVar3);
  _objc_release(lVar4);
  lVar4 = (long)_DAT_1127415a0;
  func_0x00010c20e7c0(*(undefined8 *)(param_4 + lVar4),param_5,puVar1);
  func_0x00010bfb68e0(param_4);
  func_0x00010c23d0a0(puVar1);
  param_1 = param_1 * 0.5;
  dVar5 = param_3 * 0.5 - param_1;
  func_0x00010c23d0a0(puVar1);
  func_0x00010c23d0a0(puVar1);
  func_0x00010c19f0e0(dVar5,0,param_1,param_2,*(undefined8 *)(param_4 + lVar4));
  _objc_release(puVar1);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_5,
                      &PTR____CFConstantStringClassReference_110e43a18);
  return;
}



/* Entry: 10619eb00; end: 10619eb3f; -[SCZoomFactorsDialView formatCurrentZoomRatio:] */

void FUN_10619eb00(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e43a18);
  return;
}



/* Entry: 10619eb40; end: 10619ebfb; -[SCZoomFactorsDialView formatMarker:] */

void FUN_10619eb40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e29f18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfdcf80();
  puVar3 = puVar1;
  if ((int)puVar2 != 0) {
    puVar2 = puVar1;
    func_0x00010c08fa60(puVar1);
    func_0x00010c260c20(puVar1,param_2,puVar2 + -2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  puVar1 = puVar3;
  func_0x00010bfda7c0(puVar3,param_2,&PTR____CFConstantStringClassReference_110e43a58);
  puVar2 = puVar3;
  if ((int)puVar1 != 0) {
    func_0x00010c260c00(puVar3,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10619ebfc; end: 10619ec2b; -[SCZoomFactorsDialView distanceBetween:zoomRatio2:] */

double FUN_10619ebfc(double param_1,double param_2)

{
  param_1 = param_1 / param_2;
  _log2(param_1);
  return param_1 * dRam0000000113144110 * dRam0000000113144118;
}



/* Entry: 10619ec2c; end: 10619ee93; -[SCZoomFactorsDialView reTintZoomRatioStops] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619ec2c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = (long)_DAT_112741580;
  lVar1 = *(long *)(param_1 + lVar11);
  func_0x00010bf529e0();
  uVar8 = 0;
  if (lVar1 != 0) {
    uVar10 = 0;
    lVar1 = (long)_DAT_11274159c;
    do {
      uVar2 = *(ulong *)(param_1 + lVar1);
      func_0x00010c25ec40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar3 = PTR__OBJC_CLASS___CATextLayer_1126c8768;
      _objc_opt_class(PTR__OBJC_CLASS___CATextLayer_1126c8768);
      uVar2 = uVar8;
      _objc_opt_isKindOfClass(uVar8,puVar3);
      if ((uVar2 & 1) != 0) {
        uVar4 = *(undefined8 *)(param_1 + lVar11);
        func_0x00010c0dfd40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
        func_0x00010bf1ecc0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
        uVar4 = *(undefined8 *)(param_1 + lVar11);
        func_0x00010c0dfd40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        lVar7 = param_1;
        func_0x00010bfb5ba0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04e840(puVar5);
        func_0x00010c20e7c0(uVar8);
        _objc_release(puVar5);
        _objc_release(lVar7);
        _objc_release(uVar4);
        _objc_release(puVar6);
        _objc_release(puVar3);
      }
      _objc_release(uVar8);
      uVar10 = uVar10 + 1;
      uVar8 = *(ulong *)(param_1 + lVar11);
      func_0x00010bf529e0();
    } while (uVar10 < uVar8);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(uVar8 + (long)_DAT_11274158c,0);
  _objc_storeStrong(uVar8 + (long)_DAT_112741588,0);
  _objc_storeStrong(uVar8 + (long)_DAT_112741580,0);
  _objc_storeStrong(uVar8 + (long)_DAT_1127415a0,0);
  _objc_storeStrong(uVar8 + (long)_DAT_11274159c,0);
  _objc_storeStrong(uVar8 + (long)_DAT_112741598,0);
  _objc_storeStrong(uVar8 + (long)_DAT_112741594,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(uVar8 + (long)_DAT_112741590,0);
  return;
}



/* Entry: 10619ee94; end: 10619ef33; -[SCZoomFactorsDialView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619ee94(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274158c,0);
  _objc_storeStrong(param_1 + _DAT_112741588,0);
  _objc_storeStrong(param_1 + _DAT_112741580,0);
  _objc_storeStrong(param_1 + _DAT_1127415a0,0);
  _objc_storeStrong(param_1 + _DAT_11274159c,0);
  _objc_storeStrong(param_1 + _DAT_112741598,0);
  _objc_storeStrong(param_1 + _DAT_112741594,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112741590,0);
  return;
}



/* Entry: 10619ef34; end: 10619ef8b; -[SCZoomFactorsPillView refresh:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619ef34(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bdc5b60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127415b4);
  *(long *)(param_1 + _DAT_1127415b4) = lVar1;
  _objc_release(uVar2);
  func_0x00010be88360(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c227af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined4 *)(param_1 + _DAT_1127415d8),param_1,PTR_s_setZoomFactor__1126678e0);
  return;
}



/* Entry: 10619ef8c; end: 10619f0af; -[SCZoomFactorsPillView _refreshButtonStackView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619ef8c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [128];
  long lStack_188;
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
  uVar12 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar8 = (long)_DAT_1127415dc;
  lVar1 = *(long *)(param_1 + lVar8);
  func_0x00010bf09ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar1;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    lVar10 = *plStack_110;
    do {
      lVar11 = 0;
      do {
        if (*plStack_110 != lVar10) {
          _objc_enumerationMutation(lVar1);
        }
        uVar7 = *(undefined8 *)(lStack_118 + lVar11 * 8);
        func_0x00010c12b280(*(undefined8 *)(param_1 + lVar8),param_2,uVar7);
        func_0x00010c12c960(uVar7);
        lVar11 = lVar11 + 1;
      } while (lVar9 != lVar11);
      lVar9 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar9 != 0);
  }
  _objc_release(lVar1);
  puVar5 = *(undefined1 **)(param_1 + lVar8);
  func_0x00010beab340(param_1,param_2,puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_250;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(ulong *)(param_1 + _DAT_1127415e0);
  func_0x00010bfecde0();
  uVar3 = uVar2;
  if (uVar2 != 0x7fffffffffffffff) {
    lVar9 = (long)_DAT_1127415b4;
    uVar3 = *(ulong *)(param_1 + lVar9);
    func_0x00010bf529e0();
    if (uVar2 < uVar3) {
      uVar4 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010c0dfd40(uVar4,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      _objc_release(uVar7);
      _objc_release(uVar4);
      uVar7 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      lStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      plStack_240 = (long *)0x0;
      lVar1 = *(long *)(param_1 + lVar9);
      func_0x00010c0dfd40(lVar1,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar1;
      func_0x00010bf52a60();
      if (lVar9 != 0) {
        lVar8 = *plStack_240;
        do {
          lVar10 = 0;
          do {
            if (*plStack_240 != lVar8) {
              _objc_enumerationMutation(lVar1);
            }
            uVar4 = *(undefined8 *)(lStack_248 + lVar10 * 8);
            func_0x00010bfb2c80(uVar4);
            if (*(float *)(param_1 + _DAT_1127415d8) < (float)uVar7) {
              func_0x00010bfb2c80(uVar4);
              uVar12 = uVar7;
              goto LAB_10619f21c;
            }
            lVar10 = lVar10 + 1;
          } while (lVar9 != lVar10);
          lVar9 = lVar1;
          puVar6 = &uStack_250;
          func_0x00010bf52a60(lVar1,param_2,&uStack_250,auStack_208,0x10);
        } while (lVar9 != 0);
      }
LAB_10619f21c:
      _objc_release(lVar1);
      func_0x00010c227ae0(uVar12,param_1);
      uVar3 = param_1 + _DAT_1127415d4;
      _objc_loadWeakRetained();
      func_0x00010c0fbda0(uVar12);
      _objc_release(uVar3);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = (long)_DAT_1127415d4;
  _objc_retain(puVar5);
  lVar9 = uVar3 + lVar9;
  _objc_loadWeakRetained(lVar9);
  func_0x00010c0fbd20();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return;
}



/* Entry: 10619f0b0; end: 10619f28f; -[SCZoomFactorsPillView didTapPillButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619f0b0(undefined8 param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
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
  uVar1 = *(ulong *)(param_2 + _DAT_1127415e0);
  func_0x00010bfecde0();
  uVar2 = uVar1;
  if (uVar1 != 0x7fffffffffffffff) {
    lVar7 = (long)_DAT_1127415b4;
    uVar2 = *(ulong *)(param_2 + lVar7);
    func_0x00010bf529e0();
    if (uVar1 < uVar2) {
      uVar3 = *(undefined8 *)(param_2 + lVar7);
      func_0x00010c0dfd40(uVar3,param_3,uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar4 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      lVar5 = *(long *)(param_2 + lVar7);
      func_0x00010c0dfd40(lVar5,param_3,uVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar5;
      func_0x00010bf52a60();
      if (lVar7 != 0) {
        lVar8 = *plStack_120;
        do {
          lVar9 = 0;
          do {
            if (*plStack_120 != lVar8) {
              _objc_enumerationMutation(lVar5);
            }
            uVar3 = *(undefined8 *)(lStack_128 + lVar9 * 8);
            func_0x00010bfb2c80(uVar3);
            if (*(float *)(param_2 + _DAT_1127415d8) < (float)uVar4) {
              func_0x00010bfb2c80(uVar3);
              param_1 = uVar4;
              goto LAB_10619f21c;
            }
            lVar9 = lVar9 + 1;
          } while (lVar7 != lVar9);
          lVar7 = lVar5;
          puVar6 = &uStack_130;
          func_0x00010bf52a60(lVar5,param_3,&uStack_130,auStack_e8,0x10);
        } while (lVar7 != 0);
      }
LAB_10619f21c:
      _objc_release(lVar5);
      func_0x00010c227ae0(param_1,param_2);
      uVar2 = param_2 + _DAT_1127415d4;
      _objc_loadWeakRetained();
      func_0x00010c0fbda0(param_1);
      _objc_release(uVar2);
      param_4 = (undefined1 *)puVar6;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = (long)_DAT_1127415d4;
  _objc_retain(param_4);
  lVar7 = uVar2 + lVar7;
  _objc_loadWeakRetained(lVar7);
  func_0x00010c0fbd20();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 10619f290; end: 10619f2e7; -[SCZoomFactorsPillView pillButtonDidLongPressWithGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619f290(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127415d4;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0fbd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10619f2e8; end: 10619f4b3; -[SCZoomFactorsPillView cancelActiveZoomGestures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619f2e8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(param_1 + _DAT_1127415e0);
  _objc_retain(lVar8);
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar8);
      }
      lVar4 = *(long *)(lVar10 * 8);
      func_0x00010bfc1c00();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf51e00();
      _objc_release(lVar4);
      lVar4 = lVar5;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar4 != 0) {
        lVar11 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar5);
          }
          uVar9 = *(undefined8 *)(lVar11 * 8);
          uVar6 = uVar9;
          func_0x00010c071800();
          if ((int)uVar6 != 0) {
            func_0x00010c195460(uVar9);
            func_0x00010c195460(uVar9);
          }
          lVar11 = lVar11 + 1;
        } while (lVar4 != lVar11);
        lVar4 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      lVar10 = lVar10 + 1;
    } while (lVar10 != lVar3);
    lVar3 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release(lVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar8 + _DAT_1127415dc,0);
  _objc_storeStrong(lVar8 + _DAT_1127415e0,0);
  _objc_destroyWeak(lVar8 + _DAT_1127415d4);
  _objc_storeStrong(lVar8 + _DAT_1127415cc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar8 + _DAT_1127415b4,0);
  return;
}



/* Entry: 10619f4b4; end: 10619f51f; -[SCZoomFactorsPillView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619f4b4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127415dc,0);
  _objc_storeStrong(param_1 + _DAT_1127415e0,0);
  _objc_destroyWeak(param_1 + _DAT_1127415d4);
  _objc_storeStrong(param_1 + _DAT_1127415cc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127415b4,0);
  return;
}



/* Entry: 10619f520; end: 10619f607; -[SCZoomFactorsPillViewButton _handleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619f520(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + _DAT_1127415fc);
  if (lVar2 == 2) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127415f4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b1940();
  }
  else if (lVar2 == 1) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127415f4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a4be0();
  }
  else {
    if (lVar2 != 0) goto LAB_10619f5d0;
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127415f4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2120();
  }
  _objc_release(uVar1);
LAB_10619f5d0:
  param_1 = param_1 + _DAT_1127415f8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7d100();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10619f608; end: 10619f65f; -[SCZoomFactorsPillViewButton _handleLongPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619f608(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127415f8;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0fbd20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10619f660; end: 10619f6ab; -[SCZoomFactorsPillViewButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619f660(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112741600,0);
  _objc_destroyWeak(param_1 + _DAT_1127415f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127415f4,0);
  return;
}



/* Entry: 10619f6ac; end: 10619f9db;  */

void FUN_10619f6ac(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e43a78;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e43a78,
                      &PTR____CFConstantStringClassReference_110e43a98,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10619f9dc; end: 10619fa9f; -[SCRecipientNameReplyViewModel initWithDisplayName:recipientId:stateType:isGroup:] */

undefined1 *
FUN_10619f9dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f0020;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined1 *)((long)puVar1 + 8) = param_6;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10619faa0; end: 10619fac3; -[SCRecipientNameReplyViewModel copyWithZone:] */

undefined8 FUN_10619faa0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10619fac4; end: 10619fb43; -[SCRecipientNameReplyViewModel hash] */

undefined8 * FUN_10619fac4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar3 = &uStack_48;
  uStack_40 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10619fbe4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10619fbf0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((puVar3[4] == param_3[4] && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[3];
        if (puVar6 != (undefined8 *)param_3[3]) {
          func_0x00010c071ae0();
          goto LAB_10619fbf0;
        }
        goto LAB_10619fbe4;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10619fbf0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10619fb44; end: 10619fc0b; -[SCRecipientNameReplyViewModel isEqual:] */

long FUN_10619fb44(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10619fbe4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10619fbf0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10619fbf0;
        }
        goto LAB_10619fbe4;
      }
    }
    lVar3 = 0;
  }
LAB_10619fbf0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10619fc0c; end: 10619fc13; -[SCRecipientNameReplyViewModel displayName] */

undefined8 FUN_10619fc0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10619fc14; end: 10619fc1b; -[SCRecipientNameReplyViewModel recipientId] */

undefined8 FUN_10619fc14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10619fc1c; end: 10619fc23; -[SCRecipientNameReplyViewModel stateType] */

undefined8 FUN_10619fc1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10619fc24; end: 10619fc2b; -[SCRecipientNameReplyViewModel isGroup] */

undefined1 FUN_10619fc24(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10619fc2c; end: 10619fc5b; -[SCRecipientNameReplyViewModel .cxx_destruct] */

void FUN_10619fc2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10619fc5c; end: 10619fc9f; -[SCCaptureVideoDataSourceObserver dealloc] */

void FUN_10619fc5c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c256480();
  puStack_28 = PTR_PTR_1126f0028;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10619fca0; end: 10619fd1b; -[SCCaptureVideoDataSourceObserver fetchImmediateVideoBuffer:] */

void FUN_10619fca0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar4);
  lVar1 = param_1;
  func_0x00010bf29120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bef0ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  *(bool *)(param_1 + 0x20) = lVar3 != 0;
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


