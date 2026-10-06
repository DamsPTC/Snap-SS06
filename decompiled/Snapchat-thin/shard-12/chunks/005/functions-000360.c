/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10920edbc; end: 10920ee2f; -[SCSnapSegmentExpandedCell _isTouchPointInLeftTrimHandle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920edbc(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112783a84);
  func_0x00010c071800();
  if (iVar1 != 0) {
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + _DAT_112783aa0));
    _CGRectInset();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CGRectContainsPoint_110347550)();
    return;
  }
  return;
}



/* Entry: 10920ee30; end: 10920eea3; -[SCSnapSegmentExpandedCell _isTouchPointInRightTrimHandle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920ee30(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112783a84);
  func_0x00010c071800();
  if (iVar1 != 0) {
    func_0x00010bfb68e0(*(undefined8 *)(param_1 + _DAT_112783aa4));
    _CGRectInset();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CGRectContainsPoint_110347550)();
    return;
  }
  return;
}



/* Entry: 10920eea4; end: 10920eedf; -[SCSnapSegmentExpandedCell _minimumSegmentDurationSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920eea4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112783aac);
  uStack_28 = puVar1[1];
  uStack_30 = *puVar1;
  uStack_20 = puVar1[2];
  _CMTimeGetSeconds(&uStack_30);
  return;
}



/* Entry: 10920eee0; end: 10920f017; -[SCSnapSegmentExpandedCell _updateSelectedTimeSliceViewWithLeftX:rightX:] */

/* WARNING: Possible PIC construction at 0x00010920efe4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010920efe8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920eee0(double param_1,double param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  lVar3 = (long)_DAT_112783aa0;
  uVar1 = *(ulong *)(param_3 + lVar3);
  dVar4 = param_1;
  func_0x00010c074c20();
  if ((uVar1 & 1) == 0) {
    lVar2 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetMidY();
    dVar5 = param_1;
    func_0x00010c17a6a0(param_1,dVar4,*(undefined8 *)(param_3 + lVar3));
    _objc_release(lVar2);
    lVar3 = param_3;
    func_0x00010bf4dce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetMidY();
    func_0x00010c17a6a0(param_2,dVar5,*(undefined8 *)(param_3 + _DAT_112783aa4));
    _objc_release(lVar3);
    dVar4 = param_2;
    func_0x00010c17a6a0(param_2,0,*(undefined8 *)(param_3 + _DAT_112783a90));
  }
  lVar3 = (long)_DAT_112783a70;
  func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar3));
  _CGRectGetMinY();
  dVar5 = dVar4;
  func_0x00010bfb68e0(*(undefined8 *)(param_3 + lVar3));
  _CGRectGetHeight();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,dVar4,param_2 - param_1,dVar5,*(undefined8 *)(param_3 + lVar3),
             PTR_s_setFrame__112645658);
  return;
}



/* Entry: 10920f018; end: 10920f01f; -[SCSnapSegmentExpandedCell _updateSelectedTimeSliceViewWithOffsetX:] */

void FUN_10920f018(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedf790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSelectedTimeSliceViewWith_112595788,0)
  ;
  return;
}



/* Entry: 10920f020; end: 10920f113; -[SCSnapSegmentExpandedCell _updateSelectedTimeSliceViewWithOffsetX:tensionEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920f020(double param_1,long param_2,undefined8 param_3,int param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  
  dVar2 = param_1;
  func_0x00010be9e160();
  pdVar1 = (double *)(param_2 + _DAT_112783ab4);
  dStack_58 = pdVar1[1];
  dVar3 = *pdVar1;
  dStack_50 = pdVar1[2];
  dStack_60 = dVar3;
  func_0x00010bde9ea0(param_2,param_3,&dStack_60);
  param_1 = param_1 + dVar3;
  func_0x00010bf20c00(param_2);
  _CGRectGetMaxX();
  if (0.0 <= param_1) {
    dVar4 = dVar2 + param_1;
    if (dVar3 < dVar4) {
      param_1 = 0.0;
      if (param_4 != 0) {
        param_1 = dVar4 - dVar3;
        func_0x00010becb1c0(param_1,dVar2,param_2);
      }
      param_1 = (dVar3 - dVar2) + param_1;
      dVar4 = dVar3;
    }
  }
  else {
    dVar3 = 0.0;
    if (param_4 != 0) {
      dVar3 = 0.0 - param_1;
      func_0x00010becb1c0(dVar3,dVar2,param_2);
    }
    dVar4 = (dVar2 + 0.0) - dVar3;
    param_1 = 0.0;
  }
  func_0x00010bedf740(param_1,dVar4,param_2);
  return;
}



/* Entry: 10920f114; end: 10920f12f; -[SCSnapSegmentExpandedCell _tensionValueForDistance:width:] */

double FUN_10920f114(double param_1,double param_2)

{
  return (param_1 * 0.45 * param_2) / (param_2 + param_1 * 0.45);
}



/* Entry: 10920f130; end: 10920f1af; -[SCSnapSegmentExpandedCell _selectedTimeSliceViewWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10920f130(long param_1,undefined8 param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  undefined1 auStack_48 [24];
  
  pdVar1 = (double *)(param_1 + _DAT_112783ab4);
  dStack_78 = pdVar1[1];
  dVar2 = *pdVar1;
  dStack_70 = pdVar1[2];
  dStack_80 = dVar2;
  func_0x00010bde9ea0(param_1,param_2,&dStack_80);
  dStack_78 = pdVar1[1];
  dStack_80 = *pdVar1;
  dStack_68 = pdVar1[3];
  dStack_70 = pdVar1[2];
  dStack_58 = pdVar1[5];
  dVar3 = pdVar1[4];
  dStack_60 = dVar3;
  _CMTimeRangeGetEnd(auStack_48,&dStack_80);
  func_0x00010bde9ea0(param_1,param_2,auStack_48);
  return dVar3 - dVar2;
}



/* Entry: 10920f1b0; end: 10920f1db; -[SCSnapSegmentExpandedCell _isPlayheadHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920f1b0(long param_1)

{
  long lVar1;
  
  lVar1 = 0x78;
  if (*(char *)(param_1 + _DAT_112783abc) == '\0') {
    lVar1 = 0x2c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c074c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + *(int *)(&DAT_112783a60 + lVar1)),PTR_s_isHidden_1125fad18);
  return;
}



/* Entry: 10920f1dc; end: 10920f263; -[SCSnapSegmentExpandedCell _setPlayheadHidden:] */

/* WARNING: Possible PIC construction at 0x00010920f20c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010920f210) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920f1dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int *piVar2;
  
  if ((int)param_3 == 0) {
    piVar2 = (int *)&DAT_112783a8c;
    if (*(char *)(param_1 + _DAT_112783abc) == '\x01') {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112783ad8),param_2,param_3);
      piVar2 = (int *)&DAT_112783b00;
    }
    uVar1 = *(undefined8 *)(param_1 + *piVar2);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112783ad8);
    param_3 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setHidden__1126479f8,param_3);
  return;
}



/* Entry: 10920f264; end: 10920f2f7; -[SCSnapSegmentExpandedCell _updateDurationLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920f264(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (*(char *)(param_1 + _DAT_112783a64) == '\x01') {
    lVar1 = param_1 + _DAT_112783ad0;
    uStack_48 = *(undefined8 *)(lVar1 + 0x20);
    uStack_50 = *(undefined8 *)(lVar1 + 0x18);
    uStack_40 = *(undefined8 *)(lVar1 + 0x28);
    _CMTimeGetSeconds(&uStack_50);
    lVar1 = param_1;
    func_0x00010bfb5e40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112783aec),param_2,lVar1);
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 10920f2f8; end: 10920f3fb; -[SCSnapSegmentExpandedCell formatStringWithTimeDuration:] */

void FUN_10920f2f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126c87b0;
  func_0x00010bf2b920();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0ce8a0();
  puVar3 = puVar1;
  func_0x00010c154ba0();
  puVar4 = puVar1;
  func_0x00010bf66740();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar2 == (undefined *)0x0) {
    if (puVar4 == (undefined *)0x0) {
      func_0x000109212e24();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000109212e3c();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (puVar3 == (undefined *)0x0) {
    func_0x000109212e54();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000109212e6c();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c09e8a0(puVar5,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10920f3fc; end: 10920f65f; -[SCSnapSegmentExpandedCell durationLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920f3fc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = (long)_DAT_112783aec;
  puVar17 = *(undefined **)(param_1 + lVar19);
  if (puVar17 == (undefined *)0x0) {
    puVar17 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    uVar16 = *(undefined8 *)(param_1 + lVar19);
    *(undefined **)(param_1 + lVar19) = puVar17;
    _objc_release(uVar16);
    func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar19));
    puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar19));
    _objc_release(puVar17);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19));
    puVar17 = PTR_PTR_1126b08d8;
    uVar16 = *(undefined8 *)(param_1 + lVar19);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c30a28(0x4000000000000000,0x3fdccccccccccccd,0,0x3ff0000000000000,puVar17,uVar16,
                        puVar1);
    _objc_release(puVar1);
    lVar18 = param_1;
    func_0x00010bf8b300(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar18);
    puVar17 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(undefined8 *)(param_1 + lVar19);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = (long)_DAT_112783b2c;
    uVar3 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar19);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar17);
    _objc_release(puVar1);
    _objc_release(uVar20);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar16);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar17 = *(undefined **)(param_1 + lVar19);
  }
  puVar1 = puVar17;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
    ___stack_chk_fail();
    lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar19 = (long)_DAT_112783b2c;
    puVar17 = *(undefined **)(puVar1 + lVar19);
    if (puVar17 == (undefined *)0x0) {
      puVar17 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc_init();
      uVar16 = *(undefined8 *)(puVar1 + lVar19);
      *(undefined **)(puVar1 + lVar19) = puVar17;
      _objc_release(uVar16);
      func_0x00010c219b60(*(undefined8 *)(puVar1 + lVar19));
      puVar17 = puVar1;
      func_0x00010c0ef6a0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(puVar17);
      puVar17 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar4 = *(undefined8 *)(puVar1 + lVar19);
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar4;
      func_0x00010bf49420(0x4034000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(puVar1 + lVar19);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar1;
      func_0x00010c0ef6a0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(puVar1 + lVar19);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar1;
      func_0x00010c0ef6a0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(puVar1 + lVar19);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar1;
      func_0x00010c0ef6a0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar11;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar17);
      _objc_release(puVar14);
      _objc_release(uVar3);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(uVar11);
      _objc_release(uVar2);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(uVar8);
      _objc_release(uVar20);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(uVar5);
      _objc_release(uVar16);
      _objc_release(uVar4);
      puVar6 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar1;
      func_0x00010bf4dce0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      func_0x00010c19f0e0(0,0,puVar6);
      _objc_release(puVar17);
      puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df740(0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df740(0x3f800000);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bff00(puVar6);
      _objc_release(puVar9);
      _objc_release(puVar7);
      _objc_release(puVar17);
      puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(0,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(0,0x3fe3333333333333);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17eb60(puVar6);
      _objc_release(puVar9);
      _objc_release(puVar7);
      _objc_release(puVar17);
      uVar16 = *(undefined8 *)(puVar1 + lVar19);
      func_0x00010c08c0e0(uVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb20();
      _objc_release(uVar16);
      puVar17 = *(undefined **)(puVar1 + lVar19);
      _objc_retain(puVar17);
      _objc_release();
    }
    else {
      puVar6 = puVar17;
      _objc_retain();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
      ___stack_chk_fail();
      lVar15 = (long)_DAT_112783ae8;
      puVar17 = *(undefined **)(puVar6 + lVar15);
      if (puVar17 == (undefined *)0x0) {
        puVar17 = PTR__OBJC_CLASS___UIView_1126aec20;
        _objc_alloc_init();
        uVar16 = *(undefined8 *)(puVar6 + lVar15);
        *(undefined **)(puVar6 + lVar15) = puVar17;
        _objc_release(uVar16);
        puVar17 = puVar6;
        func_0x00010bf4dce0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60();
        _objc_release(puVar17);
        puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e440(*(undefined8 *)(puVar6 + lVar15));
        _objc_release(puVar17);
        uVar20 = *(undefined8 *)(puVar6 + _DAT_112783a68);
        uVar16 = *(undefined8 *)(puVar6 + lVar15);
        func_0x00010c08c0e0(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1842e0(uVar20);
        _objc_release(uVar16);
        uVar16 = *(undefined8 *)(puVar6 + lVar15);
        func_0x00010c08c0e0(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c2d20();
        _objc_release(uVar16);
        puVar17 = puVar6;
        func_0x00010bf4dce0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc7340(puVar6);
        _objc_release(puVar17);
        puVar17 = *(undefined **)(puVar6 + lVar15);
      }
      _objc_retain(puVar17);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 10920f660; end: 10920fab7; -[SCSnapSegmentExpandedCell durationLabelContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920f660(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  long lVar19;
  undefined8 uVar20;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = (long)_DAT_112783b2c;
  puVar18 = *(undefined **)(param_4 + lVar19);
  if (puVar18 == (undefined *)0x0) {
    puVar18 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    uVar17 = *(undefined8 *)(param_4 + lVar19);
    *(undefined **)(param_4 + lVar19) = puVar18;
    _objc_release(uVar17);
    func_0x00010c219b60(*(undefined8 *)(param_4 + lVar19),param_5,0);
    lVar1 = param_4;
    func_0x00010c0ef6a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar1);
    puVar18 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(undefined8 *)(param_4 + lVar19);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar2;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_4 + lVar19);
    uStack_88 = uVar17;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_4;
    func_0x00010c0ef6a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar3;
    func_0x00010bf493a0(uVar3,param_5,lVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_4 + lVar19);
    uStack_80 = uVar20;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    func_0x00010c0ef6a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf493a0(uVar5,param_5,lVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_4 + lVar19);
    uStack_78 = uVar8;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_4;
    func_0x00010c0ef6a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar9;
    func_0x00010bf493a0(uVar9,param_5,lVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar12;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&uStack_88,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar18,param_5,puVar13);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(uVar5);
    _objc_release(uVar20);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(uVar3);
    _objc_release(uVar17);
    _objc_release(uVar2);
    puVar13 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_4;
    func_0x00010bf4dce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    func_0x00010c19f0e0(0,0,param_3,0x4034000000000000,puVar13);
    _objc_release(lVar1);
    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(0);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_98 = puVar18;
    func_0x00010c0df740(0x3f800000);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&puStack_98,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bff00(puVar13,param_5,puVar15);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar18);
    puVar18 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar18;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_a8 = puVar14;
    func_0x00010bf41680(0,0x3fe3333333333333);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar15;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a0 = puVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_5,&puStack_a8,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(puVar13,param_5,puVar16);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar18);
    uVar17 = *(undefined8 *)(param_4 + lVar19);
    func_0x00010c08c0e0(uVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(uVar17);
    puVar18 = *(undefined **)(param_4 + lVar19);
    _objc_retain(puVar18);
    _objc_release();
  }
  else {
    puVar13 = puVar18;
    _objc_retain();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lVar19 = (long)_DAT_112783ae8;
    puVar18 = *(undefined **)(puVar13 + lVar19);
    if (puVar18 == (undefined *)0x0) {
      puVar18 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc_init();
      uVar17 = *(undefined8 *)(puVar13 + lVar19);
      *(undefined **)(puVar13 + lVar19) = puVar18;
      _objc_release(uVar17);
      puVar18 = puVar13;
      func_0x00010bf4dce0(puVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(puVar18);
      puVar18 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_5,0xd6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)(puVar13 + lVar19),param_5,puVar18);
      _objc_release(puVar18);
      uVar20 = *(undefined8 *)(puVar13 + _DAT_112783a68);
      uVar17 = *(undefined8 *)(puVar13 + lVar19);
      func_0x00010c08c0e0(uVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(uVar20);
      _objc_release(uVar17);
      uVar17 = *(undefined8 *)(puVar13 + lVar19);
      func_0x00010c08c0e0(uVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2d20();
      _objc_release(uVar17);
      uVar17 = *(undefined8 *)(puVar13 + lVar19);
      puVar18 = puVar13;
      func_0x00010bf4dce0(puVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc7340(puVar13,param_5,uVar17,puVar18);
      _objc_release(puVar18);
      puVar18 = *(undefined **)(puVar13 + lVar19);
    }
    _objc_retain(puVar18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return;
}



/* Entry: 10920fab8; end: 10920fbf7; -[SCSnapSegmentExpandedCell overlayContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920fab8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = (long)_DAT_112783ae8;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    lVar3 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar3);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112783a68);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(uVar5);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    lVar3 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc7340(param_1,param_2,uVar2,lVar3);
    _objc_release(lVar3);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10920fbf8; end: 10920fd4f; -[SCSnapSegmentExpandedCell _updateTimingInfoLabelIfNeededWithTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920fbf8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  if (*(char *)(param_1 + _DAT_112783b04) == '\x01') {
    func_0x00010c270e40();
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar5 = (long)_DAT_112783b0c;
    iVar3 = (int)*(undefined8 *)(param_1 + lVar5);
    func_0x00010c074c20();
    if (iVar3 != 0) {
      lVar4 = param_1;
      func_0x00010c081920();
      bVar2 = (int)lVar4 == 0;
      lVar4 = 0xc0;
      if (bVar2) {
        lVar4 = 0xbc;
      }
      lVar1 = 0xbc;
      if (bVar2) {
        lVar1 = 0xc0;
      }
      func_0x00010c162480(*(undefined8 *)(param_1 + *(int *)(&DAT_112783a60 + lVar4)),param_2,0);
      func_0x00010c162480(*(undefined8 *)(param_1 + *(int *)(&DAT_112783a60 + lVar1)),param_2,1);
      func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar5));
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,0);
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_10920fd50;
      puStack_50 = &UNK_110842e18;
      lStack_48 = param_1;
      func_0x00010bf03400(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_68)
      ;
    }
    uStack_78 = param_3[1];
    uStack_80 = *param_3;
    uStack_70 = param_3[2];
    _CMTimeGetSeconds(&uStack_80);
    lVar5 = param_1;
    func_0x00010bfb5e40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112783b18),param_2,lVar5);
    _objc_release(lVar5);
  }
  return;
}



/* Entry: 10920fd50; end: 10920fd67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920fd50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112783b0c),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10920fd68; end: 10920fe13; -[SCSnapSegmentExpandedCell _hideTimingInfoLabelAnimated:withDelay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920fd68(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(char *)(param_2 + _DAT_112783b04) == '\x01') {
    uVar1 = 0x3fd3333333333333;
    if (param_4 == 0) {
      uVar1 = 0;
    }
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_10920fe14;
    puStack_20 = &UNK_110842e18;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x10920fe80;
    puStack_48 = &UNK_110841f20;
    lStack_40 = param_2;
    lStack_18 = param_2;
    func_0x00010bf03440(uVar1,param_1,PTR__OBJC_CLASS___UIView_1126aec20,param_3,0,&puStack_38,
                        &puStack_60);
  }
  return;
}



/* Entry: 10920fe14; end: 10920fee3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10920fe14(long param_1,undefined8 param_2)

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
  
  _CGAffineTransformMakeTranslation(&uStack_50,0,0x4014000000000000);
  lVar1 = (long)_DAT_112783b0c;
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



/* Entry: 10920fee4; end: 10921001b; -[SCSnapSegmentExpandedCell _DMTrimHandleFromExistingTrimHandle:style:orientation:] */

void FUN_10920fee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  func_0x00010bf345e0(param_5);
  uVar5 = param_1;
  func_0x00010bf01b40(param_5);
  uVar1 = param_5;
  func_0x00010c074c20(param_5);
  uVar2 = param_5;
  func_0x00010c06b4e0(param_5);
  uVar3 = param_5;
  func_0x00010beecec0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960(param_5);
  _objc_release(param_5);
  puVar4 = PTR_PTR_1126ddec8;
  _objc_alloc(PTR_PTR_1126ddec8);
  func_0x00010c04ec20();
  func_0x00010c17a6a0(param_1,param_2);
  func_0x00010c1677c0(uVar5,puVar4);
  func_0x00010c1a7f60(puVar4,param_4,uVar1);
  func_0x00010c1af000(puVar4,param_4,uVar2);
  func_0x00010c160fc0(puVar4,param_4,uVar3);
  func_0x00010bf4dce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10921001c; end: 10921003b; -[SCSnapSegmentExpandedCell contentTimeRange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921001c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112783ae4);
  uVar2 = *puVar1;
  uVar4 = puVar1[3];
  uVar3 = puVar1[2];
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = puVar1[4];
  param_1[5] = puVar1[5];
  param_1[4] = uVar2;
  return;
}



/* Entry: 10921003c; end: 10921005b; -[SCSnapSegmentExpandedCell trimmedTimeRange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921003c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112783ad0);
  uVar2 = *puVar1;
  uVar4 = puVar1[3];
  uVar3 = puVar1[2];
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = puVar1[4];
  param_1[5] = puVar1[5];
  param_1[4] = uVar2;
  return;
}



/* Entry: 10921005c; end: 10921007b; -[SCSnapSegmentExpandedCell fixedSegmentDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921005c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112783ab0);
  uVar2 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[2] = puVar1[2];
  return;
}



/* Entry: 10921007c; end: 10921009b; -[SCSnapSegmentExpandedCell minimumSegmentDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921007c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112783aac);
  uVar2 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[2] = puVar1[2];
  return;
}



/* Entry: 10921009c; end: 1092100bb; -[SCSnapSegmentExpandedCell setMinimumSegmentDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921009c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112783aac);
  uVar2 = param_3[2];
  uVar3 = *param_3;
  puVar1[1] = param_3[1];
  *puVar1 = uVar3;
  puVar1[2] = uVar2;
  return;
}



/* Entry: 1092100bc; end: 1092100db; -[SCSnapSegmentExpandedCell maximumSegmentDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1092100bc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112783aa8);
  uVar2 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[2] = puVar1[2];
  return;
}



/* Entry: 1092100dc; end: 1092100eb; -[SCSnapSegmentExpandedCell thumbnailFutures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1092100dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112783adc);
}



/* Entry: 1092100ec; end: 1092100fb; -[SCSnapSegmentExpandedCell thumbnailFuturesPreferSynchronous] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1092100ec(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112783a54);
}



/* Entry: 1092100fc; end: 10921010b; -[SCSnapSegmentExpandedCell setThumbnailFuturesPreferSynchronous:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1092100fc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112783a54) = param_3;
  return;
}



/* Entry: 10921010c; end: 10921012b; -[SCSnapSegmentExpandedCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921010c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112783ad4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10921012c; end: 10921013f; -[SCSnapSegmentExpandedCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921012c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112783ad4,param_3);
  return;
}



/* Entry: 109210140; end: 10921015f; -[SCSnapSegmentExpandedCell reorderDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109210140(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112783b10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109210160; end: 109210173; -[SCSnapSegmentExpandedCell setReorderDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109210160(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112783b10,param_3);
  return;
}



/* Entry: 109210174; end: 109210193; -[SCSnapSegmentExpandedCell selectedTimeSlice] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109210174(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112783ab4);
  uVar2 = *puVar1;
  uVar4 = puVar1[3];
  uVar3 = puVar1[2];
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = puVar1[4];
  param_1[5] = puVar1[5];
  param_1[4] = uVar2;
  return;
}



/* Entry: 109210194; end: 1092101b3; -[SCSnapSegmentExpandedCell setSelectedTimeSlice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109210194(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112783ab4);
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  uVar3 = param_3[5];
  uVar2 = param_3[4];
  uVar6 = *param_3;
  puVar1[1] = param_3[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  return;
}



/* Entry: 1092101b4; end: 1092101c3; -[SCSnapSegmentExpandedCell isTimeSliceSelectionMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1092101b4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112783acc);
}



/* Entry: 1092101c4; end: 1092101d3; -[SCSnapSegmentExpandedCell setTimeSliceSelectionMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1092101c4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112783acc) = param_3;
  return;
}



/* Entry: 1092101d4; end: 1092101e3; -[SCSnapSegmentExpandedCell clipsReorderingDeleteButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1092101d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112783a98);
}



/* Entry: 1092101e4; end: 109210223; -[SCSnapSegmentExpandedCell setClipsReorderingDeleteButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1092101e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112783a98;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109210224; end: 109210233; -[SCSnapSegmentExpandedCell perferredContentModeScaleAspectFill] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_109210224(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112783a58);
}



/* Entry: 109210234; end: 109210243; -[SCSnapSegmentExpandedCell setPerferredContentModeScaleAspectFill:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109210234(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112783a58) = param_3;
  return;
}



/* Entry: 109210244; end: 109210253; -[SCSnapSegmentExpandedCell collapsed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_109210244(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112783abc);
}



/* Entry: 109210254; end: 109210263; -[SCSnapSegmentExpandedCell isTrimmable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_109210254(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112783a9c);
}



/* Entry: 109210264; end: 109210273; -[SCSnapSegmentExpandedCell segmentSupplementView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109210264(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112783b14);
}



/* Entry: 109210274; end: 109210283; -[SCSnapSegmentExpandedCell isSplittingEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_109210274(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112783a5c);
}



/* Entry: 109210284; end: 109210293; -[SCSnapSegmentExpandedCell setSplittingEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109210284(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112783a5c) = param_3;
  return;
}



/* Entry: 109210294; end: 1092102a3; -[SCSnapSegmentExpandedCell cornerRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109210294(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112783a68);
}



/* Entry: 1092102a4; end: 1092102b3; -[SCSnapSegmentExpandedCell borderVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1092102a4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112783a60);
}



/* Entry: 1092102b4; end: 1092102c3; -[SCSnapSegmentExpandedCell durationInfoVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1092102b4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112783a64);
}



/* Entry: 1092102c4; end: 1092102d3; -[SCSnapSegmentExpandedCell enableFixedThumbnailSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1092102c4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112783b24);
}



/* Entry: 1092102d4; end: 1092102e3; -[SCSnapSegmentExpandedCell setEnableFixedThumbnailSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1092102d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112783b24) = param_3;
  return;
}



/* Entry: 1092102e4; end: 1092102f7; -[SCSnapSegmentExpandedCell thumbnailsSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1092102e4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112783ae0);
}



/* Entry: 1092102f8; end: 10921030b; -[SCSnapSegmentExpandedCell setThumbnailsSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1092102f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112783ae0;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 10921030c; end: 10921031b; -[SCSnapSegmentExpandedCell touchToSeek] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10921030c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112783b28);
}



/* Entry: 10921031c; end: 10921032b; -[SCSnapSegmentExpandedCell setTouchToSeek:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921031c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112783b28) = param_3;
  return;
}



/* Entry: 10921032c; end: 10921033b; -[SCSnapSegmentExpandedCell showTimingInfoLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10921032c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112783b04);
}



/* Entry: 10921033c; end: 10921034b; -[SCSnapSegmentExpandedCell setShowTimingInfoLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921033c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112783b04) = param_3;
  return;
}



/* Entry: 10921034c; end: 109210533; -[SCSnapSegmentExpandedCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921034c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112783b14,0);
  _objc_destroyWeak(param_1 + _DAT_112783b10);
  _objc_destroyWeak(param_1 + _DAT_112783ad4);
  _objc_storeStrong(param_1 + _DAT_112783adc,0);
  _objc_storeStrong(param_1 + _DAT_112783b20,0);
  _objc_storeStrong(param_1 + _DAT_112783b1c,0);
  _objc_storeStrong(param_1 + _DAT_112783b18,0);
  _objc_storeStrong(param_1 + _DAT_112783b0c,0);
  _objc_storeStrong(param_1 + _DAT_112783aec,0);
  _objc_storeStrong(param_1 + _DAT_112783b2c,0);
  _objc_storeStrong(param_1 + _DAT_112783ae8,0);
  _objc_storeStrong(param_1 + _DAT_112783ab8,0);
  _objc_storeStrong(param_1 + _DAT_112783a88,0);
  _objc_storeStrong(param_1 + _DAT_112783a80,0);
  _objc_storeStrong(param_1 + _DAT_112783a84,0);
  _objc_storeStrong(param_1 + _DAT_112783a98,0);
  _objc_storeStrong(param_1 + _DAT_112783aa4,0);
  _objc_storeStrong(param_1 + _DAT_112783aa0,0);
  _objc_storeStrong(param_1 + _DAT_112783a90,0);
  _objc_storeStrong(param_1 + _DAT_112783af0,0);
  _objc_storeStrong(param_1 + _DAT_112783b00,0);
  _objc_storeStrong(param_1 + _DAT_112783ad8,0);
  _objc_storeStrong(param_1 + _DAT_112783a8c,0);
  _objc_storeStrong(param_1 + _DAT_112783ac8,0);
  _objc_storeStrong(param_1 + _DAT_112783a70,0);
  _objc_storeStrong(param_1 + _DAT_112783a7c,0);
  _objc_storeStrong(param_1 + _DAT_112783a78,0);
  _objc_storeStrong(param_1 + _DAT_112783a74,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112783a6c,0);
  return;
}



/* Entry: 109210534; end: 109210a73; -[SCSnapSegmentThumbnailsCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_109210534(double param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 uVar29;
  undefined8 *puVar30;
  undefined *puVar31;
  undefined8 *puVar32;
  undefined *puVar33;
  long lVar34;
  undefined *puVar35;
  long lVar36;
  long lVar37;
  undefined *puVar38;
  long lVar39;
  long lVar40;
  double dVar41;
  undefined8 uVar42;
  double dVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b8 = PTR_PTR_112701078;
  puVar32 = &uStack_c0;
  puVar35 = PTR_s_initWithFrame__1125e2948;
  uStack_c0 = param_2;
  _objc_msgSendSuper2(puVar32,PTR_s_initWithFrame__1125e2948);
  puVar31 = (undefined *)0x0;
  if (puVar32 != (undefined8 *)0x0) {
    puVar1 = puVar32;
    func_0x00010bf4dce0(puVar32);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar32;
    func_0x00010c26e6e0(puVar32);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = puVar32;
    func_0x00010bf4dce0(puVar32);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar32;
    func_0x00010c1011c0(puVar32);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar31 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar37 = (long)_DAT_112783b30;
    uVar3 = *(undefined8 *)((long)puVar32 + lVar37);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar32;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar42 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar42;
    uVar4 = *(undefined8 *)((long)puVar32 + lVar37);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar32;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar44 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar44;
    uVar7 = *(undefined8 *)((long)puVar32 + lVar37);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar32;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar45 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar45;
    uVar10 = *(undefined8 *)((long)puVar32 + lVar37);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar32;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar13;
    lVar37 = (long)_DAT_112783b34;
    uVar14 = *(undefined8 *)((long)puVar32 + lVar37);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar32;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = uVar17;
    uVar18 = *(undefined8 *)((long)puVar32 + lVar37);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar32;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar19;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar18;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar21;
    uVar22 = *(undefined8 *)((long)puVar32 + lVar37);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar32;
    func_0x00010bf4dce0(puVar32);
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar23;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar22;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar25;
    uVar26 = *(undefined8 *)((long)puVar32 + lVar37);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar32;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = puVar27;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar29 = uVar26;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar30 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_78 = uVar29;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_4 = puVar30;
    func_0x00010beef8c0(puVar31);
    _objc_release(puVar30);
    _objc_release(uVar29);
    _objc_release(puVar28);
    _objc_release(puVar27);
    _objc_release(uVar26);
    _objc_release(uVar25);
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(uVar45);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar44);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar42);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(uVar3);
    puVar31 = PTR_PTR_1126d4260;
    func_0x00010c22dde0();
    *(char *)((long)puVar32 + (long)_DAT_112783b38) = (char)puVar31;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar32;
  }
  ___stack_chk_fail();
  lVar37 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar39 = (long)_DAT_112783b30;
  puVar32 = *(undefined8 **)(puVar31 + lVar39);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar32;
  func_0x00010c0d3c80();
  _objc_release(puVar32);
  puVar2 = param_4;
  func_0x00010bf529e0();
  puVar32 = (undefined8 *)((long)puVar2 + 1);
  puVar5 = puVar1;
  func_0x00010bf529e0();
  puVar6 = puVar1;
  func_0x00010bf529e0();
  if (puVar32 < puVar5) {
    if (puVar32 < puVar6) {
      do {
        puVar2 = puVar1;
        func_0x00010c0dfd40(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12c960();
        _objc_release(puVar2);
        puVar32 = (undefined8 *)((long)puVar32 + 1);
        puVar2 = puVar1;
        func_0x00010bf529e0();
      } while (puVar32 < puVar2);
    }
    func_0x00010bf529e0(puVar1);
    func_0x00010c12d520(puVar1);
  }
  else if ((puVar6 < puVar32) &&
          (puVar5 = puVar1, func_0x00010bf529e0(), (long)puVar5 < (long)puVar32)) {
    dVar41 = *(double *)PTR__CGRectZero_110347608;
    uVar42 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar44 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar45 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    puVar38 = (undefined *)((long)puVar2 + (1 - (long)puVar5));
    do {
      puVar33 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      param_1 = dVar41;
      func_0x00010c013de0(dVar41,uVar42,uVar44,uVar45);
      func_0x00010befbb60(*(undefined8 *)(puVar31 + lVar39));
      func_0x00010befa120(puVar1);
      _objc_release(puVar33);
      puVar38 = puVar38 + -1;
    } while (puVar38 != (undefined *)0x0);
  }
  puVar32 = param_4;
  func_0x00010bf529e0();
  if (puVar32 != (undefined8 *)0x0) {
    lVar36 = (long)_DAT_112783b3c;
    func_0x00010bfb68e0(puVar31);
    _CGRectGetWidth();
    puVar32 = param_4;
    func_0x00010bf529e0();
    dVar41 = (double)puVar32;
    dVar43 = (param_1 + -6.0) / dVar41;
    func_0x00010bfb68e0(puVar31);
    _CGRectGetHeight();
    *(double *)(puVar31 + lVar36) = dVar43;
    *(double *)((long)(puVar31 + lVar36) + 8) = dVar41 + -6.0;
    puVar32 = param_4;
    func_0x00010bf529e0();
    if (puVar32 < (undefined8 *)0x2) {
      lVar34 = *(long *)(puVar31 + lVar39);
      func_0x00010c261580();
      _objc_retainAutoreleasedReturnValue();
      lVar39 = lVar34;
      func_0x00010bf52a60();
      lVar36 = lRam0000000000000000;
      while (lVar39 != 0) {
        lVar40 = 0;
        do {
          if (lRam0000000000000000 != lVar36) {
            _objc_enumerationMutation(lVar34);
          }
          func_0x00010c12c960(*(undefined8 *)(lVar40 * 8));
          lVar40 = lVar40 + 1;
        } while (lVar39 != lVar40);
        lVar39 = lVar34;
        func_0x00010bf52a60();
      }
      _objc_release(lVar34);
      puVar32 = param_4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc8360(puVar31);
    }
    else {
      _objc_retain(puVar1);
      func_0x00010bf97e80(param_4);
      puVar32 = puVar1;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0(param_4);
      puVar2 = param_4;
      func_0x00010c089820(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea85e0(puVar31);
      _objc_release(puVar2);
      _objc_release(puVar32);
      puVar32 = puVar1;
    }
    _objc_release(puVar32);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar37) {
    return param_4;
  }
  ___stack_chk_fail();
  uVar42 = param_4[4];
  puVar32 = (undefined8 *)param_4[5];
  _objc_retain(puVar35);
  func_0x00010c0dfd40(puVar32);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea85e0(uVar42);
  _objc_release(puVar35);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar32);
  return puVar32;
}



/* Entry: 109210a74; end: 109210e03; -[SCSnapSegmentThumbnailsCell setThumbnails:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109210a74(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar10 = (long)_DAT_112783b30;
  uVar1 = *(ulong *)(param_2 + lVar10);
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d3c80();
  _objc_release(uVar1);
  uVar3 = param_4;
  func_0x00010bf529e0();
  uVar1 = uVar3 + 1;
  uVar4 = uVar2;
  func_0x00010bf529e0();
  uVar5 = uVar2;
  func_0x00010bf529e0();
  if (uVar1 < uVar4) {
    if (uVar1 < uVar5) {
      do {
        uVar3 = uVar2;
        func_0x00010c0dfd40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12c960();
        _objc_release(uVar3);
        uVar1 = uVar1 + 1;
        uVar3 = uVar2;
        func_0x00010bf529e0();
      } while (uVar1 < uVar3);
    }
    func_0x00010bf529e0(uVar2);
    func_0x00010c12d520(uVar2);
  }
  else if ((uVar5 < uVar1) && (uVar4 = uVar2, func_0x00010bf529e0(), (long)uVar4 < (long)uVar1)) {
    dVar12 = *(double *)PTR__CGRectZero_110347608;
    uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    lVar9 = (uVar3 - uVar4) + 1;
    do {
      puVar6 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      param_1 = dVar12;
      func_0x00010c013de0(dVar12,uVar13,uVar15,uVar16);
      func_0x00010befbb60(*(undefined8 *)(param_2 + lVar10));
      func_0x00010befa120(uVar2);
      _objc_release(puVar6);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  uVar1 = param_4;
  func_0x00010bf529e0();
  if (uVar1 != 0) {
    lVar9 = (long)_DAT_112783b3c;
    func_0x00010bfb68e0(param_2);
    _CGRectGetWidth();
    uVar1 = param_4;
    func_0x00010bf529e0();
    dVar12 = (double)uVar1;
    dVar14 = (param_1 + -6.0) / dVar12;
    func_0x00010bfb68e0(param_2);
    _CGRectGetHeight();
    *(double *)(param_2 + lVar9) = dVar14;
    ((double *)(param_2 + lVar9))[1] = dVar12 + -6.0;
    uVar1 = param_4;
    func_0x00010bf529e0();
    if (uVar1 < 2) {
      lVar7 = *(long *)(param_2 + lVar10);
      func_0x00010c261580();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar7;
      func_0x00010bf52a60();
      lVar9 = lRam0000000000000000;
      while (lVar10 != 0) {
        lVar11 = 0;
        do {
          if (lRam0000000000000000 != lVar9) {
            _objc_enumerationMutation(lVar7);
          }
          func_0x00010c12c960(*(undefined8 *)(lVar11 * 8));
          lVar11 = lVar11 + 1;
        } while (lVar10 != lVar11);
        lVar10 = lVar7;
        func_0x00010bf52a60();
      }
      _objc_release(lVar7);
      uVar1 = param_4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc8360(param_2);
    }
    else {
      _objc_retain(uVar2);
      func_0x00010bf97e80(param_4);
      uVar1 = uVar2;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0(param_4);
      uVar3 = param_4;
      func_0x00010c089820(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea85e0(param_2);
      _objc_release(uVar3);
      _objc_release(uVar1);
      uVar1 = uVar2;
    }
    _objc_release(uVar1);
  }
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  uVar13 = *(undefined8 *)(param_4 + 0x20);
  uVar15 = *(undefined8 *)(param_4 + 0x28);
  _objc_retain(param_3);
  func_0x00010c0dfd40(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea85e0(uVar13);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar15);
  return;
}



/* Entry: 109210e04; end: 109210e6f;  */

void FUN_109210e04(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c0dfd40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea85e0(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 109210e70; end: 109210edf; -[SCSnapSegmentThumbnailsCell setContentTimeRange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109210e70(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112783b40);
  uStack_48 = puVar1[1];
  uStack_50 = *puVar1;
  uStack_38 = puVar1[3];
  uStack_40 = puVar1[2];
  uStack_28 = puVar1[5];
  uStack_30 = puVar1[4];
  uStack_78 = param_3[1];
  uStack_80 = *param_3;
  uStack_68 = param_3[3];
  uStack_70 = param_3[2];
  uStack_58 = param_3[5];
  uStack_60 = param_3[4];
  puVar2 = &uStack_50;
  _CMTimeRangeEqual(puVar2,&uStack_80);
  if ((int)puVar2 == 0) {
    uVar4 = param_3[1];
    uVar3 = *param_3;
    uVar5 = param_3[2];
    uVar7 = param_3[5];
    uVar6 = param_3[4];
    puVar1[3] = param_3[3];
    puVar1[2] = uVar5;
    puVar1[5] = uVar7;
    puVar1[4] = uVar6;
    puVar1[1] = uVar4;
    *puVar1 = uVar3;
  }
  return;
}



/* Entry: 109210ee0; end: 10921109b; -[SCSnapSegmentThumbnailsCell updatePlayheadWithTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109210ee0(long param_1,undefined8 param_2,double *param_3)

{
  double *pdVar1;
  double *pdVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  if (*(char *)(param_1 + _DAT_112783b44) == '\x01') {
    pdVar1 = (double *)(param_1 + _DAT_112783b40);
    dStack_78 = pdVar1[1];
    dStack_80 = *pdVar1;
    dStack_68 = pdVar1[3];
    dStack_70 = pdVar1[2];
    dStack_58 = pdVar1[5];
    dStack_60 = pdVar1[4];
    dStack_98 = param_3[1];
    dStack_a0 = *param_3;
    dStack_90 = param_3[2];
    pdVar2 = &dStack_80;
    _CMTimeRangeContainsTime(pdVar2,&dStack_a0);
    lVar3 = param_1;
    func_0x00010c1011e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    if ((int)pdVar2 == 0) {
      func_0x00010c1a7f60();
      _objc_release(lVar3);
    }
    else {
      func_0x00010c1a7f60();
      _objc_release(lVar3);
      dStack_98 = param_3[1];
      dStack_a0 = *param_3;
      dStack_90 = param_3[2];
      dStack_b8 = pdVar1[1];
      dVar5 = *pdVar1;
      dStack_b0 = pdVar1[2];
      dStack_c0 = dVar5;
      _CMTimeSubtract(&dStack_80,&dStack_a0,&dStack_c0);
      _CMTimeGetSeconds(&dStack_80);
      dStack_78 = pdVar1[1];
      dStack_80 = *pdVar1;
      dStack_68 = pdVar1[3];
      dStack_70 = pdVar1[2];
      dStack_58 = pdVar1[5];
      dVar4 = pdVar1[4];
      dStack_60 = dVar4;
      _CMTimeRangeGetEnd(&dStack_a0,&dStack_80);
      _CMTimeGetSeconds(&dStack_a0);
      dVar5 = dVar5 / dVar4;
      lVar3 = param_1;
      func_0x00010bf4dce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetWidth();
      _objc_release(lVar3);
      pdVar2 = (double *)(param_1 + _DAT_112783b48);
      dStack_78 = param_3[1];
      dStack_80 = *param_3;
      dStack_70 = param_3[2];
      dStack_98 = pdVar2[1];
      dStack_a0 = *pdVar2;
      dStack_90 = pdVar2[2];
      _CMTimeCompare(&dStack_80,&dStack_a0);
      func_0x00010be61360((dVar4 + -6.0) * dVar5 + 3.0,param_1);
      dVar4 = param_3[1];
      dVar5 = *param_3;
      pdVar2[2] = param_3[2];
      pdVar2[1] = dVar4;
      *pdVar2 = dVar5;
    }
  }
  return;
}



/* Entry: 10921109c; end: 1092110ef; -[SCSnapSegmentThumbnailsCell setShowPlayhead:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921109c(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_112783b44) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112783b44) = (char)param_3;
  func_0x00010c1011e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1092110f0; end: 1092111eb; -[SCSnapSegmentThumbnailsCell playheadLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1092110f0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112783b4c;
  lVar4 = *(long *)(param_2 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___CALayer_1126b1750;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_2 + lVar5);
    *(undefined **)(param_2 + lVar5) = puVar1;
    _objc_release(uVar3);
    func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar5),param_3,1);
    func_0x00010bfb68e0(param_2);
    _CGRectGetHeight();
    func_0x00010c19f0e0(0,0x4008000000000000,0x4000000000000000,param_1,
                        *(undefined8 *)(param_2 + lVar5));
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c16e440(*(undefined8 *)(param_2 + lVar5),param_3,puVar2);
    _objc_release(puVar1);
    func_0x00010c207c40(0x40000000,*(undefined8 *)(param_2 + lVar5));
    uVar3 = *(undefined8 *)(param_2 + _DAT_112783b34);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(uVar3);
    lVar4 = *(long *)(param_2 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1092111ec; end: 10921132f; -[SCSnapSegmentThumbnailsCell thumbnailsContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1092111ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112783b30;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4020000000000000);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar2);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x4008000000000000);
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4),param_2,0);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 109211330; end: 1092113f7; -[SCSnapSegmentThumbnailsCell playheadContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109211330(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112783b34;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4020000000000000);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4),param_2,0);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1092113f8; end: 1092114bf; -[SCSnapSegmentThumbnailsCell _setThumbnailImageView:atIndex:withImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1092113f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  _objc_retain(param_3);
  dVar2 = *(double *)(param_1 + _DAT_112783b3c);
  dVar3 = ((double *)(param_1 + _DAT_112783b3c))[1];
  dVar4 = (double)param_4 * dVar2 + 3.0;
  _objc_retain(param_5);
  dVar1 = 3.0;
  func_0x00010c19f0e0(dVar4,0x4008000000000000,dVar2,dVar3,param_3);
  func_0x00010c1a9f00(param_3,param_2,param_5);
  func_0x00010c23d0a0(param_5);
  func_0x00010c23d0a0(param_5);
  _objc_release(param_5);
  if (dVar1 < dVar4) {
    func_0x00010c182220(param_3,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1092114c0; end: 10921175b; -[SCSnapSegmentThumbnailsCell _addSingleThumbnailViewForImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1092114c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c01bf60();
  _objc_release(param_3);
  func_0x00010c182220(puVar2,param_2,2);
  func_0x00010c219b60(puVar2,param_2,0);
  lVar17 = (long)_DAT_112783b30;
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar17),param_2,puVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf493a0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  puStack_88 = puVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bf348e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf493a0(puVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  puStack_80 = puVar8;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c2a5060(uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf49400(0x3ff0000000000000,0xc018000000000000,puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar2;
  puStack_78 = puVar11;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bfe0660(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = 0x3ff0000000000000;
  puVar14 = puVar12;
  func_0x00010bf49400(0x3ff0000000000000,0xc018000000000000,puVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if ((((ulong)puVar16 & 1) == 0) && (puVar2[_DAT_112783b38] != '\x01')) {
    _CATransform3DMakeTranslation(&uStack_170,uVar18,0,0);
    uStack_1a8 = uStack_128;
    uStack_1b0 = uStack_130;
    uStack_198 = uStack_118;
    uStack_1a0 = uStack_120;
    uStack_188 = uStack_108;
    uStack_190 = uStack_110;
    uStack_178 = uStack_f8;
    uStack_180 = uStack_100;
    uStack_1e8 = uStack_168;
    uStack_1f0 = uStack_170;
    uStack_1d8 = uStack_158;
    uStack_1e0 = uStack_160;
    uStack_1c8 = uStack_148;
    uStack_1d0 = uStack_150;
    uStack_1b8 = uStack_138;
    uStack_1c0 = uStack_140;
    func_0x00010c219960(*(undefined8 *)(puVar2 + _DAT_112783b4c),param_2,&uStack_1f0);
  }
  else {
    func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718,param_2,1);
    _CATransform3DMakeTranslation(&uStack_170,uVar18,0,0);
    uStack_1a8 = uStack_128;
    uStack_1b0 = uStack_130;
    uStack_198 = uStack_118;
    uStack_1a0 = uStack_120;
    uStack_188 = uStack_108;
    uStack_190 = uStack_110;
    uStack_178 = uStack_f8;
    uStack_180 = uStack_100;
    uStack_1e8 = uStack_168;
    uStack_1f0 = uStack_170;
    uStack_1d8 = uStack_158;
    uStack_1e0 = uStack_160;
    uStack_1c8 = uStack_148;
    uStack_1d0 = uStack_150;
    uStack_1b8 = uStack_138;
    uStack_1c0 = uStack_140;
    func_0x00010c219960(*(undefined8 *)(puVar2 + _DAT_112783b4c),param_2,&uStack_1f0);
    func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718,param_2,0);
  }
  return;
}



/* Entry: 10921175c; end: 10921185b; -[SCSnapSegmentThumbnailsCell _movePlayheadToOffset:disableImplicitAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921175c(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (((param_4 & 1) == 0) && (*(char *)(param_2 + _DAT_112783b38) != '\x01')) {
    _CATransform3DMakeTranslation(&uStack_c0,param_1,0,0);
    uStack_f8 = uStack_78;
    uStack_100 = uStack_80;
    uStack_e8 = uStack_68;
    uStack_f0 = uStack_70;
    uStack_d8 = uStack_58;
    uStack_e0 = uStack_60;
    uStack_c8 = uStack_48;
    uStack_d0 = uStack_50;
    uStack_138 = uStack_b8;
    uStack_140 = uStack_c0;
    uStack_128 = uStack_a8;
    uStack_130 = uStack_b0;
    uStack_118 = uStack_98;
    uStack_120 = uStack_a0;
    uStack_108 = uStack_88;
    uStack_110 = uStack_90;
    func_0x00010c219960(*(undefined8 *)(param_2 + _DAT_112783b4c),param_3,&uStack_140);
  }
  else {
    func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718,param_3,1);
    _CATransform3DMakeTranslation(&uStack_c0,param_1,0,0);
    uStack_f8 = uStack_78;
    uStack_100 = uStack_80;
    uStack_e8 = uStack_68;
    uStack_f0 = uStack_70;
    uStack_d8 = uStack_58;
    uStack_e0 = uStack_60;
    uStack_c8 = uStack_48;
    uStack_d0 = uStack_50;
    uStack_138 = uStack_b8;
    uStack_140 = uStack_c0;
    uStack_128 = uStack_a8;
    uStack_130 = uStack_b0;
    uStack_118 = uStack_98;
    uStack_120 = uStack_a0;
    uStack_108 = uStack_88;
    uStack_110 = uStack_90;
    func_0x00010c219960(*(undefined8 *)(param_2 + _DAT_112783b4c),param_3,&uStack_140);
    func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718,param_3,0);
  }
  return;
}



/* Entry: 10921185c; end: 10921187b; -[SCSnapSegmentThumbnailsCell contentTimeRange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921185c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112783b40);
  uVar2 = *puVar1;
  uVar4 = puVar1[3];
  uVar3 = puVar1[2];
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = puVar1[4];
  param_1[5] = puVar1[5];
  param_1[4] = uVar2;
  return;
}



/* Entry: 10921187c; end: 10921188b; -[SCSnapSegmentThumbnailsCell thumbnails] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10921187c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112783b50);
}



/* Entry: 10921188c; end: 10921189b; -[SCSnapSegmentThumbnailsCell showPlayhead] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10921188c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112783b44);
}



/* Entry: 10921189c; end: 10921190b; -[SCSnapSegmentThumbnailsCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921189c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112783b50,0);
  _objc_storeStrong(param_1 + _DAT_112783b30,0);
  _objc_storeStrong(param_1 + _DAT_112783b34,0);
  _objc_storeStrong(param_1 + _DAT_112783b4c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112783b54,0);
  return;
}



/* Entry: 10921190c; end: 109211927; -[SCSnapSegmentTrimHandle initWithStyle:orientation:] */

void FUN_10921190c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x404e000000000000;
  if (param_3 != 0) {
    uVar1 = 0x404c000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c04ec50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,param_1,PTR_s_initWithStyle_orientation_height_1125f1518);
  return;
}



/* Entry: 109211928; end: 1092119c3; -[SCSnapSegmentTrimHandle initWithStyle:orientation:height:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_109211928(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  uVar2 = 0x4028000000000000;
  if (param_4 != 0) {
    uVar2 = 0x402c000000000000;
  }
  puStack_38 = PTR_PTR_112701080;
  uStack_40 = param_2;
  _objc_msgSendSuper2(0,0,uVar2,param_1,&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(long *)((long)puVar1 + (long)_DAT_112783b58) = param_4;
    func_0x00010beaf800(puVar1);
    func_0x00010beaafa0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1092119c4; end: 109211ccb; -[SCSnapSegmentTrimHandle _setupRoundedViewWithStyle:orientation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1092119c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2ce0();
  _objc_release(puVar2);
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010befbb60(param_1,param_2,puVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar1;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_1;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf493a0(puVar3,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  puStack_98 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493a0(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  puStack_90 = puVar7;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf493a0(puVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1;
  puStack_88 = puVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bf493a0(puVar11,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_98,4);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(param_1);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar16);
  _objc_release(puVar3);
  if (param_3 == 0) {
    uVar16 = 0x4010000000000000;
  }
  else {
    if (param_3 != 1) goto LAB_109211c84;
    uVar16 = 0x4024000000000000;
  }
  puVar2 = puVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(uVar16);
  _objc_release(puVar2);
LAB_109211c84:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar1;
  }
  ___stack_chk_fail();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar16 = 0x4028000000000000;
  if (puVar14 != (undefined *)0x0) {
    uVar16 = 0x4020000000000000;
  }
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar3,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010c08c0e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x3ff0000000000000);
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010c08c0e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar2);
  func_0x00010c219b60(puVar3,param_2,0);
  func_0x00010befbb60(puVar1,param_2,puVar3);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010bf493a0(puVar4,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  puStack_168 = puVar7;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf348e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf493a0(puVar8,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar3;
  puStack_160 = puVar10;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bf49420(0x4000000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar3;
  puStack_158 = puVar12;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf49420(uVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_150 = puVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_168,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar15);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar1);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return puVar3;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar3 + _DAT_112783b58);
}



/* Entry: 109211ccc; end: 109211f6f; -[SCSnapSegmentTrimHandle _setupBlackPillWithStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_109211ccc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = 0x4028000000000000;
  if (param_3 != 0) {
    uVar13 = 0x4020000000000000;
  }
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x3ff0000000000000);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar2);
  func_0x00010c219b60(puVar1,param_2,0);
  func_0x00010befbb60(param_1,param_2,puVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar3 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf493a0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  puStack_98 = puVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf493a0(puVar6,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  puStack_90 = puVar7;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf49420(0x4000000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  puStack_88 = puVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf49420(uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_98,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2,param_2,puVar12);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar1;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar1 + _DAT_112783b58);
}



/* Entry: 109211f70; end: 109211f7f; -[SCSnapSegmentTrimHandle style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109211f70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112783b58);
}



/* Entry: 109211f80; end: 109212107; +[SCSnapSegmentUIUtils createThumbnailFuturesFromVideoAVAsset:withThumbnailsCount:imageSize:performer:] */

void FUN_109211f80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uStack_68 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_70 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_60 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  if (param_5 == 0) {
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_a0,param_5);
  }
  _CMTimeMultiplyByRatio(&uStack_88,&uStack_a0,1,param_6);
  if (0 < param_6) {
    do {
      uStack_98 = uStack_68;
      uStack_a0 = uStack_70;
      uStack_90 = uStack_60;
      puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1);
      _objc_release(puVar2);
      uStack_98 = uStack_68;
      uStack_a0 = uStack_70;
      uStack_90 = uStack_60;
      uStack_b8 = uStack_80;
      uStack_c0 = uStack_88;
      uStack_b0 = uStack_78;
      _CMTimeAdd(&uStack_70,&uStack_a0,&uStack_c0);
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  puVar2 = PTR_PTR_1126d4260;
  func_0x00010bf597e0(param_1,param_2,PTR_PTR_1126d4260);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 109212108; end: 109212323; +[SCSnapSegmentUIUtils createThumbnailFuturesAtThumbnailTimes:videoAVAsset:videoComposition:withImageSize:performer:] */

void FUN_109212108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,long param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  ppuVar5 = &puStack_c0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_6 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_5;
    func_0x00010bf529e0();
    if (uVar7 != 0) {
      uVar7 = 0;
      do {
        puVar2 = PTR_PTR_1126ae560;
        _objc_opt_new(PTR_PTR_1126ae560);
        func_0x00010befa120(puVar1,param_4,puVar2);
        _objc_release(puVar2);
        puVar2 = puVar1;
        func_0x00010c089820(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010bfbc3e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar6,param_4,puVar3);
        _objc_release(puVar3);
        _objc_release(puVar2);
        uVar7 = uVar7 + 1;
        uVar4 = param_5;
        func_0x00010bf529e0();
      } while (uVar7 < uVar4);
    }
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_109212324;
    puStack_a8 = &UNK_1108e75b8;
    _objc_retain(param_6);
    lStack_a0 = param_6;
    _objc_retain(param_7);
    uStack_98 = param_7;
    uStack_80 = param_1;
    uStack_78 = param_2;
    _objc_retain(param_5);
    uStack_90 = param_5;
    puStack_88 = puVar1;
    _objc_retain(puVar1);
    _objc_retainBlock();
    if (param_8 == 0) {
      (**(code **)((long)ppuVar5 + 0x10))(ppuVar5);
    }
    else {
      func_0x00010c0f7fc0(param_8,param_4,ppuVar5);
    }
    _objc_release(ppuVar5);
    _objc_release(puStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(lStack_a0);
    _objc_release(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 109212324; end: 10921244f;  */

void FUN_109212324(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
  _objc_alloc(PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170);
  func_0x00010bff41a0();
  func_0x00010c169b80();
  func_0x00010c2213a0(puVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  uVar5 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar4 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar3 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_50 = uVar4;
  uStack_48 = uVar5;
  uStack_40 = uVar3;
  func_0x00010c1ec3e0(puVar1,param_2,&uStack_50);
  uStack_50 = uVar4;
  uStack_48 = uVar5;
  uStack_40 = uVar3;
  func_0x00010c1ec3c0(puVar1,param_2,&uStack_50);
  func_0x00010c1c3cc0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),puVar1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_109212450;
  puStack_68 = &UNK_1108e8b80;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = uVar3;
  _objc_retain(uVar4);
  ppuVar2 = &puStack_80;
  uStack_58 = uVar4;
  _objc_retainBlock(ppuVar2);
  func_0x00010bfbf180(puVar1,param_2,*(undefined8 *)(param_1 + 0x30),ppuVar2);
  _objc_release(ppuVar2);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(puVar1);
  return;
}



/* Entry: 109212450; end: 109212573;  */

void FUN_109212450(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long in_x4;
  undefined8 in_x5;
  long lVar3;
  
  _objc_retain(in_x5);
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecde0();
  _objc_release(puVar1);
  if (lVar3 != 0x7fffffffffffffff) {
    if (in_x4 == 0) {
      puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0dfd40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43d60();
      _objc_release(uVar2);
    }
    else {
      puVar1 = *(undefined **)(param_1 + 0x28);
      func_0x00010c0dfd40(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43ca0();
    }
    _objc_release(puVar1);
  }
  _objc_release(in_x5);
  return;
}



/* Entry: 109212574; end: 1092125b7; +[SCSnapSegmentUIUtils createThumbnailFuturesForViewWidth:videoAVAsset:timeRange:] */

void FUN_109212574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = param_5[1];
  uStack_40 = *param_5;
  uStack_28 = param_5[3];
  uStack_30 = param_5[2];
  uStack_18 = param_5[5];
  uStack_20 = param_5[4];
  func_0x00010bf59820(param_1,0x3f800000,PTR_PTR_1126d4260,param_3,param_4,&uStack_40);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1092125b8; end: 109212617; +[SCSnapSegmentUIUtils createThumbnailFuturesForViewWidth:videoAVAsset:timeRange:videoRate:] */

void FUN_1092125b8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = param_6[1];
  uStack_40 = *param_6;
  uStack_28 = param_6[3];
  uStack_30 = param_6[2];
  uStack_18 = param_6[5];
  uStack_20 = param_6[4];
  func_0x00010bf598a0(param_2,PTR_PTR_1126d4260,param_4,(long)(param_1 / 35.0),param_5,0,&uStack_40)
  ;
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109212618; end: 10921265f; +[SCSnapSegmentUIUtils createThumbnailFuturesWithThumbnailsCount:videoAVAsset:timeRange:] */

void FUN_109212618(void)

{
  func_0x00010bf598a0(0x3f800000,PTR_PTR_1126d4260);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109212660; end: 109212873; +[SCSnapSegmentUIUtils createThumbnailFuturesWithThumbnailsCount:videoAVAsset:videoComposition:timeRange:videoRate:] */

void FUN_109212660(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,double *param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  double dVar7;
  float fVar8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  
  dVar7 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  if (0 < param_4) {
    lVar6 = 0;
    fVar8 = SUB84(param_1,0);
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (fVar8 != 1.0) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar8)) {
        bVar1 = fVar8 < 0.0;
        bVar2 = fVar8 == 0.0;
        bVar3 = false;
      }
    }
    do {
      dStack_a8 = param_7[4];
      dStack_b0 = param_7[3];
      dStack_a0 = param_7[5];
      _CMTimeMultiplyByRatio(&dStack_90,&dStack_b0,lVar6,param_4);
      dStack_c8 = param_7[1];
      dStack_d0 = *param_7;
      dStack_c0 = param_7[2];
      dStack_e8 = dStack_88;
      dStack_f0 = dStack_90;
      dStack_e0 = dStack_80;
      _CMTimeAdd(&dStack_b0,&dStack_d0,&dStack_f0);
      dStack_88 = dStack_a8;
      dStack_90 = dStack_b0;
      dStack_80 = dStack_a0;
      if (!bVar2 && bVar1 == bVar3) {
        dStack_c8 = dStack_a8;
        dStack_d0 = dStack_b0;
        dStack_c0 = dStack_a0;
        _CMTimeMultiplyByFloat64(&dStack_b0,(double)(1.0 / fVar8),&dStack_d0);
        dStack_88 = dStack_a8;
        dStack_90 = dStack_b0;
        dStack_80 = dStack_a0;
      }
      dStack_a8 = dStack_88;
      dStack_b0 = dStack_90;
      dStack_a0 = dStack_80;
      puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      dVar7 = dStack_90;
      func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4);
      _objc_release(puVar5);
      lVar6 = lVar6 + 1;
    } while (param_4 != lVar6);
  }
  puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126d4260;
  func_0x00010bf597e0(dVar7 * 35.0,dVar7 * 62.0,PTR_PTR_1126d4260);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 109212874; end: 109212a1b; +[SCSnapSegmentUIUtils createThumbnailFuturesWithThumbnailsCount:image:timeRange:] */

void FUN_109212874(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_4;
  if (0 < param_4) {
    do {
      puVar3 = PTR_PTR_1126ae560;
      _objc_opt_new(PTR_PTR_1126ae560);
      func_0x00010befa120(puVar2,param_3,puVar3);
      _objc_release(puVar3);
      puVar3 = puVar2;
      func_0x00010c089820(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_3,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126d4260;
  func_0x00010c14e640(param_1 * 35.0,param_1 * 62.0,PTR_PTR_1126d4260,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  if ((0 < param_4) && (puVar3 != (undefined *)0x0)) {
    lVar5 = 0;
    do {
      puVar4 = puVar2;
      func_0x00010c0dfd40(puVar2,param_3,lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43d60();
      _objc_release(puVar4);
      lVar5 = lVar5 + 1;
    } while (param_4 != lVar5);
  }
  _objc_release(puVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 109212a1c; end: 109212c23; +[SCSnapSegmentUIUtils createThumbnailsAtThumbnailTimes:videoAVAsset:videoComposition:withImageSize:] */

void FUN_109212a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
  _objc_alloc();
  func_0x00010bff41a0();
  func_0x00010c169b80();
  uVar7 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar6 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar5 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  uStack_80 = uVar6;
  puStack_78 = (undefined8 *)uVar7;
  uStack_70 = uVar5;
  func_0x00010c1ec3e0(puVar1);
  uStack_80 = uVar6;
  puStack_78 = (undefined8 *)uVar7;
  uStack_70 = uVar5;
  func_0x00010c1ec3c0(puVar1);
  func_0x00010c2213a0(puVar1);
  puVar2 = puVar1;
  func_0x00010c1c3cc0(param_1,param_2);
  _dispatch_group_create();
  _dispatch_group_enter();
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_78 = &uStack_80;
  _objc_opt_new();
  _objc_retain();
  _objc_retain(param_5);
  _objc_retain(puVar2);
  func_0x00010bfbf180(puVar1);
  _dispatch_group_wait(puVar2,0xffffffffffffffff);
  puVar4 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 109212c24; end: 109212cff;  */

void FUN_109212c24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_6);
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + 1;
  if (param_5 == 0) {
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  puVar1 = PTR_PTR_1126d4260;
  func_0x00010c14e640(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      PTR_PTR_1126d4260,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (puVar1 != (undefined *)0x0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
  }
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010bf529e0();
  if (lVar4 == lVar2) {
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 109212d00; end: 109212d47; +[SCSnapSegmentUIUtils shouldAlwaysDisableCALayerImplicitAnimation] */

bool FUN_109212d00(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0c3480();
  _objc_release(puVar1);
  return 0x3c < (long)puVar2;
}



/* Entry: 109212d48; end: 109212e23; +[SCSnapSegmentUIUtils scaledImageForTargetSize:image:] */

void FUN_109212d48(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = param_1;
  dVar4 = param_2;
  _objc_retain(param_5);
  func_0x00010c23d0a0(param_5);
  func_0x00010c23d0a0(param_5);
  uVar2 = param_5;
  if (0.1 < ABS(dVar3 / dVar4 - param_1 / param_2) / (param_1 / param_2)) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_4,0xd4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e720(param_1,param_2,0x3ff0000000000000,param_5,param_4,0,1,puVar1,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 109212e24; end: 109212e83;  */

void FUN_109212e24(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f2cd38;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f2cd38,
                      &PTR____CFConstantStringClassReference_110f2cd58,0);
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



/* Entry: 109212e84; end: 109212f5f; +[SCCameraVideoDurationFormatter cameraVideoDurationFromDurationInSeconds:] */

void FUN_109212e84(double param_1)

{
  if (60.0 <= param_1) {
    _objc_alloc(PTR_PTR_1126dded0);
  }
  else if ((int)((float)(int)(param_1 * 10.0) / 10.0) == 0x3c) {
    _objc_alloc(PTR_PTR_1126dded0);
  }
  else {
    _objc_alloc(PTR_PTR_1126dded0);
  }
  func_0x00010c02c280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109212f60; end: 109212fd7; +[SCCameraVideoDurationFormatter durationInSecondsFromCameraVideoDuration:] */

double FUN_109212f60(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0ce8a0(param_3);
  uVar2 = param_3;
  func_0x00010c154ba0(param_3);
  uVar3 = param_3;
  func_0x00010bf66740(param_3);
  _objc_release(param_3);
  return (double)uVar3 / 10.0 + (double)(uVar2 + uVar1 * 0x3c);
}



/* Entry: 109212fd8; end: 10921302b; +[SCCameraVideoDurationFormatter formattedStringFromDurationInSeconds:] */

void FUN_109212fd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c87b0;
  func_0x00010bf2b920(PTR_PTR_1126c87b0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c87b0;
  func_0x00010bfb6180(PTR_PTR_1126c87b0,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10921302c; end: 109213177; +[SCCameraVideoDurationFormatter formattedStringFromCameraVideoDuration:] */

void FUN_10921302c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0ce8a0();
  lVar2 = param_3;
  func_0x00010c154ba0();
  lVar3 = param_3;
  func_0x00010bf66740();
  _objc_release(param_3);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 == 0) {
    if (lVar3 == 0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110f2cd38;
      func_0x000107c312f8(&PTR____CFConstantStringClassReference_110f2cd38,
                          &PTR____CFConstantStringClassReference_110f2cdd8,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar4 = &PTR____CFConstantStringClassReference_110f2cd78;
      func_0x000107c312f8(&PTR____CFConstantStringClassReference_110f2cd78,
                          &PTR____CFConstantStringClassReference_110f2cdd8,0);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (lVar2 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110f2cd98;
    func_0x000107c312f8(&PTR____CFConstantStringClassReference_110f2cd98,
                        &PTR____CFConstantStringClassReference_110f2cdd8,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar4 = &PTR____CFConstantStringClassReference_110f2cdb8;
    func_0x000107c312f8(&PTR____CFConstantStringClassReference_110f2cdb8,
                        &PTR____CFConstantStringClassReference_110f2cdd8,0);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c09e8a0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 109213178; end: 1092131d3; -[SCCameraVideoDuration initWithMinuteComponent:secondComponent:decimalComponent:] */

void FUN_109213178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112701088;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  return;
}



/* Entry: 1092131d4; end: 1092131f7; -[SCCameraVideoDuration copyWithZone:] */

undefined8 FUN_1092131d4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1092131f8; end: 109213257; -[SCCameraVideoDuration hash] */

undefined8 * FUN_1092131f8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 8);
  uStack_20 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) ||
         ((*(long *)((long)puVar1 + 8) != *(long *)(param_3 + 8) ||
          (*(long *)((long)puVar1 + 0x10) != *(long *)(param_3 + 0x10))))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x18) == *(long *)(param_3 + 0x18));
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar3;
}


