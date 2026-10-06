/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1071c23fc; end: 1071c2483; -[SCDiscoverVOperaScrollEducationView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071c23fc(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar1 = &puStack_30;
  puStack_28 = PTR_PTR_1126f8ba0;
  puStack_30 = param_1;
  _objc_msgSendSuper2(&puStack_30,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  if ((ppuVar1 == (undefined1 **)param_1) ||
     (ppuVar1 == (undefined1 **)*(undefined1 **)(param_1 + _DAT_112765240))) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    _objc_retain(ppuVar1);
    puVar2 = (undefined1 *)ppuVar1;
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1071c2484; end: 1071c253b; -[SCDiscoverVOperaScrollEducationView didMoveToWindow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071c2484(long param_1)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f8ba0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_didMoveToWindow_112527020);
  lVar1 = param_1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    param_1 = *(long *)(param_1 + _DAT_11276523c);
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c9c0();
  }
  else {
    func_0x00010c2a71e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
  }
  _objc_release(param_1);
  return;
}



/* Entry: 1071c253c; end: 1071c25fb; -[SCDiscoverVOperaScrollEducationView gestureRecognizerShouldBegin:] */

undefined8
FUN_1071c253c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
             undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_7);
  uVar1 = param_5;
  func_0x00010c074c20();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf01b40(param_5);
    uVar4 = 0x3f847ae147ae147b;
    if ((0.01 <= param_1) && (uVar1 = param_5, func_0x00010c082800(), (int)uVar1 != 0)) {
      func_0x00010bf20c00(param_5);
      uVar2 = param_7;
      dVar3 = param_1;
      uVar5 = uVar4;
      func_0x00010c09ef00(param_7,param_6,param_5);
      _CGRectContainsPoint(param_1,uVar4,param_3,param_4,dVar3,uVar5);
      goto LAB_1071c25dc;
    }
  }
  uVar2 = 0;
LAB_1071c25dc:
  _objc_release(param_7);
  return uVar2;
}



/* Entry: 1071c25fc; end: 1071c2603; -[SCDiscoverVOperaScrollEducationView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_1071c25fc(void)

{
  return 1;
}



/* Entry: 1071c2604; end: 1071c2637; -[SCDiscoverVOperaScrollEducationView _onTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071c2604(long param_1)

{
  param_1 = param_1 + _DAT_11276524c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf73d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071c2638; end: 1071c273b; -[SCDiscoverVOperaScrollEducationView _onPan:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071c2638(undefined8 param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  double dVar2;
  
  _objc_retain(param_5);
  func_0x00010c27adc0(param_5,param_4,param_3);
  lVar1 = param_5;
  func_0x00010c252440();
  _objc_release(param_5);
  if (2 < lVar1 - 3U) {
    if (lVar1 != 2) {
      if (lVar1 != 1) {
        return;
      }
      *(undefined1 *)(param_3 + _DAT_112765250) = 0;
      return;
    }
    dVar2 = 1.0;
    if (param_2 / -100.0 <= 1.0) {
      dVar2 = param_2 / -100.0;
    }
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    func_0x00010c1677c0(1.0 - dVar2,param_3);
    if (-100.0 < param_2) {
      return;
    }
  }
  if ((*(byte *)(param_3 + _DAT_112765250) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_3 + _DAT_112765250) = 1;
  param_3 = param_3 + _DAT_11276524c;
  _objc_loadWeakRetained(param_3);
  func_0x00010bf73d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071c273c; end: 1071c275b; -[SCDiscoverVOperaScrollEducationView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071c273c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276524c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071c275c; end: 1071c276f; -[SCDiscoverVOperaScrollEducationView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071c275c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276524c,param_3);
  return;
}



/* Entry: 1071c2770; end: 1071c27eb; -[SCDiscoverVOperaScrollEducationView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071c2770(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276524c);
  _objc_storeStrong(param_1 + _DAT_11276523c,0);
  _objc_storeStrong(param_1 + _DAT_112765248,0);
  _objc_storeStrong(param_1 + _DAT_112765244,0);
  _objc_storeStrong(param_1 + _DAT_112765238,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112765240,0);
  return;
}



/* Entry: 1071c27ec; end: 1071c27f7; -[SCDiscoverVOperaV2OnboardingSingleDialogView initWithFrame:] */

void FUN_1071c27ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c014750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithFrame_isSwipeLeftEnabled_1125e2ba0,0,0);
  return;
}



/* Entry: 1071c27f8; end: 1071c28f7; -[SCDiscoverVOperaV2OnboardingSingleDialogView initWithFrame:isSwipeLeftEnabled:swipeToLeftTooltipViewText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1071c27f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f8ba8;
  uStack_60 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112765254) = param_7;
    uVar3 = param_8;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112765258);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112765258) = uVar3;
    _objc_release(uVar4);
    func_0x00010beb14e0(puVar1);
  }
  _objc_release(param_8);
  return (undefined1 *)puVar1;
}



/* Entry: 1071c28f8; end: 1071c2d0b; -[SCDiscoverVOperaV2OnboardingSingleDialogView _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071c28f8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar5 = (long)_DAT_11276525c;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fd999999999999a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar5 = (long)_DAT_112765260;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fe999999999999a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
  _objc_release(uVar3);
  func_0x00010befbb60(param_1);
  puVar1 = PTR_PTR_1126d50b0;
  _objc_alloc_init();
  lVar5 = (long)_DAT_112765264;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000107dd62d8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa040(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010befbb60(param_1);
  puVar1 = PTR_PTR_1126d50b0;
  _objc_alloc_init();
  lVar5 = (long)_DAT_112765268;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000107dd6308();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa040(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010befbb60(param_1);
  if (*(char *)(param_1 + _DAT_112765254) == '\x01') {
    puVar1 = PTR_PTR_1126d50b0;
    _objc_alloc_init();
    lVar5 = (long)_DAT_11276526c;
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(param_1 + _DAT_112765258);
    func_0x00010c08fa60();
    if (lVar5 == 0) {
      func_0x000107dd62f0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1aa040(uVar3);
      _objc_release(lVar5);
    }
    else {
      func_0x00010c1aa040(uVar3);
    }
    _objc_release(puVar1);
    func_0x00010befbb60(param_1);
  }
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112765270;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar5));
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c20eaa0(uVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x000107dd6320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(uVar3);
  _objc_release(puVar1);
  func_0x00010befbb60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010beabad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupConstraints_112588858);
  return;
}



/* Entry: 1071c2d0c; end: 1071c330b; -[SCDiscoverVOperaV2OnboardingSingleDialogView _setupConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071c2d0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
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
  long lStack_70;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar29 = (long)_DAT_11276525c;
  uVar2 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar29);
  uStack_c0 = uVar28;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar29);
  uStack_b8 = uVar6;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_1);
  _CGRectGetWidth();
  uVar8 = uVar7;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar29);
  uStack_b0 = uVar8;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_1);
  _CGRectGetHeight();
  uVar24 = uVar9;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = (long)_DAT_112765260;
  uVar10 = *(undefined8 *)(param_1 + lVar30);
  uStack_a8 = uVar24;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar10;
  func_0x00010bf493a0(uVar10,param_2,lVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar30);
  uStack_a0 = uVar25;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar11;
  func_0x00010bf493a0(uVar11,param_2,lVar31);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar30);
  uStack_98 = uVar26;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar12;
  func_0x00010bf493c0(0x4048000000000000,uVar12,param_2,lVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar30);
  uStack_90 = uVar27;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010bf493c0(0xc048000000000000,uVar14,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar30);
  uStack_88 = uVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar17;
  func_0x00010bf49480(0x4030000000000000,uVar17,param_2,lVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar30);
  uStack_80 = uVar19;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar20;
  func_0x00010bf49520(0xc030000000000000,uVar20,param_2,lVar21);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar22;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_c0,10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar23);
  _objc_release(puVar23);
  _objc_release(uVar22);
  _objc_release(lVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(lVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(lVar15);
  _objc_release(uVar14);
  _objc_release(uVar27);
  _objc_release(lVar13);
  _objc_release(uVar12);
  _objc_release(uVar26);
  _objc_release(lVar31);
  _objc_release(uVar11);
  _objc_release(uVar25);
  _objc_release(lVar29);
  _objc_release(uVar10);
  _objc_release(uVar24);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar28);
  _objc_release(lVar3);
  _objc_release(uVar2);
  func_0x00010beb0b20(param_1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar31 = (long)_DAT_112765270;
  uVar24 = *(undefined8 *)(param_1 + lVar31);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be1d5c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar24;
  func_0x00010bf493a0(uVar24,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + lVar31);
  uStack_d8 = uVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar25;
  func_0x00010bf493a0(uVar25,param_2,lVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + lVar31);
  uStack_d0 = uVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + lVar30);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar26;
  func_0x00010bf493c0(0xc030000000000000,uVar26,param_2,uVar27);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_c8 = uVar28;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_d8,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar23);
  _objc_release(puVar23);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar8);
  _objc_release(lVar29);
  _objc_release(uVar25);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(uVar24);
  func_0x00010c1cbe20();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = 0x18;
  if (*(char *)(param_1 + _DAT_112765254) == '\0') {
    lVar3 = 0x14;
  }
  uVar28 = *(undefined8 *)(param_1 + *(int *)(&DAT_112765254 + lVar3));
  _objc_retain(uVar28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar28);
  return;
}



/* Entry: 1071c330c; end: 1071c3357; -[SCDiscoverVOperaV2OnboardingSingleDialogView _getBottomTooltipView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071c330c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0x18;
  if (*(char *)(param_1 + _DAT_112765254) == '\0') {
    lVar1 = 0x14;
  }
  uVar2 = *(undefined8 *)(param_1 + *(int *)(&DAT_112765254 + lVar1));
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1071c3358; end: 1071c38f3; -[SCDiscoverVOperaV2OnboardingSingleDialogView _setupTooltipViewConstraintsWithContextTrayEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071c3358(double param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined *puVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
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
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0699c0(*(undefined8 *)(param_3 + _DAT_112765270));
  func_0x00010bf20c00(param_3);
  _CGRectGetHeight();
  param_2 = (param_1 + -32.0 + -32.0) - param_2;
  dVar31 = param_2 * 0.333;
  func_0x00010bf20c00(param_3);
  _CGRectGetWidth();
  param_2 = param_2 + -80.0;
  lVar26 = (long)_DAT_112765264;
  dVar27 = param_2;
  dVar29 = dVar31;
  func_0x00010c23d5a0(param_2,dVar31,*(undefined8 *)(param_3 + lVar26));
  lVar25 = (long)_DAT_112765268;
  dVar28 = param_2;
  dVar30 = dVar31;
  func_0x00010c23d5a0(param_2,dVar31,*(undefined8 *)(param_3 + lVar25));
  lVar24 = (long)_DAT_11276526c;
  func_0x00010c23d5a0(param_2,dVar31,*(undefined8 *)(param_3 + lVar24));
  uVar1 = *(undefined8 *)(param_3 + lVar26);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493a0(uVar1,param_4,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + lVar26);
  uStack_e0 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_3 + _DAT_112765260);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493c0(0x4030000000000000,uVar4,param_4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_3 + lVar26);
  uStack_d8 = uVar6;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf49420(dVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_3 + lVar26);
  uStack_d0 = uVar8;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf49420(dVar29);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_3 + lVar25);
  uStack_c8 = uVar10;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar11;
  func_0x00010bf493a0(uVar11,param_4,lVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_3 + lVar25);
  uStack_c0 = uVar18;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_3 + lVar26);
  func_0x00010bf1ff80(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar13;
  func_0x00010bf493a0(uVar13,param_4,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_3 + lVar25);
  uStack_b8 = uVar19;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar15;
  func_0x00010bf49420(dVar28);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_3 + lVar25);
  uStack_b0 = uVar20;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar16;
  func_0x00010bf49420(dVar30);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a8 = uVar21;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_e0,8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar21);
  _objc_release(uVar16);
  _objc_release(uVar20);
  _objc_release(uVar15);
  _objc_release(uVar19);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar18);
  _objc_release(lVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  if ((*(char *)(param_3 + _DAT_112765254) == '\x01') && (*(long *)(param_3 + lVar26) != 0)) {
    uVar18 = *(undefined8 *)(param_3 + lVar24);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar18;
    func_0x00010bf493a0(uVar18,param_4,lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(param_3 + lVar24);
    uStack_100 = uVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(param_3 + lVar25);
    func_0x00010bf1ff80(uVar20);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar19;
    func_0x00010bf493a0(uVar19,param_4,uVar20);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(param_3 + lVar24);
    uStack_f8 = uVar6;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar21;
    func_0x00010bf49420(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_3 + lVar24);
    uStack_f0 = uVar8;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar1;
    func_0x00010bf49420(dVar31);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_e8 = uVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_100,4);
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar17;
    func_0x00010bf09f80(puVar17,param_4,puVar22);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar17);
    _objc_release(puVar22);
    _objc_release(uVar10);
    _objc_release(uVar1);
    _objc_release(uVar8);
    _objc_release(uVar21);
    _objc_release(uVar6);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(uVar18);
    puVar17 = puVar23;
  }
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_4,puVar17);
  _objc_release(puVar17);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a0) {
    ___stack_chk_fail();
    puVar17 = puVar17 + _DAT_112765274;
    _objc_loadWeakRetained(puVar17);
    func_0x00010bf73d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar17);
    return;
  }
  return;
}



/* Entry: 1071c38f4; end: 1071c3927; -[SCDiscoverVOperaV2OnboardingSingleDialogView _onTapOkay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071c38f4(long param_1)

{
  param_1 = param_1 + _DAT_112765274;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf73d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071c3928; end: 1071c3947; -[SCDiscoverVOperaV2OnboardingSingleDialogView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071c3928(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112765274);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071c3948; end: 1071c395b; -[SCDiscoverVOperaV2OnboardingSingleDialogView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071c3948(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112765274,param_3);
  return;
}



/* Entry: 1071c395c; end: 1071c39f7; -[SCDiscoverVOperaV2OnboardingSingleDialogView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071c395c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112765274);
  _objc_storeStrong(param_1 + _DAT_112765258,0);
  _objc_storeStrong(param_1 + _DAT_112765270,0);
  _objc_storeStrong(param_1 + _DAT_11276526c,0);
  _objc_storeStrong(param_1 + _DAT_112765268,0);
  _objc_storeStrong(param_1 + _DAT_112765264,0);
  _objc_storeStrong(param_1 + _DAT_112765260,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276525c,0);
  return;
}



/* Entry: 1071c39f8; end: 1071c3a73; -[SCSpotlightOnboardingView initWithFrame:] */

undefined1 * FUN_1071c39f8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8bb0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010beb14e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1071c3a74; end: 1071c3d4f; -[SCSpotlightOnboardingView _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071c3a74(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar5 = (long)_DAT_112765278;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fd999999999999a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
  func_0x00010befbb60(param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar5 = (long)_DAT_11276527c;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fe999999999999a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
  _objc_release(uVar3);
  func_0x00010befbb60(param_1);
  puVar1 = PTR_PTR_1126d50b0;
  _objc_alloc_init();
  lVar5 = (long)_DAT_112765280;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000107dd6338();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa040(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
  func_0x00010befbb60(param_1);
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112765284;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c160fc0(uVar3);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x000107dd6320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(uVar3);
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5));
  func_0x00010befbb60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010beabad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupConstraints_112588858);
  return;
}



/* Entry: 1071c3d50; end: 1071c4497; -[SCSpotlightOnboardingView _setupConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071c3d50(double param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined *puVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  double dVar52;
  double dVar53;
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
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar48 = (long)_DAT_112765284;
  func_0x00010c0699c0(*(undefined8 *)(param_3 + lVar48));
  func_0x00010bf20c00(param_3);
  _CGRectGetHeight();
  param_2 = (param_1 + -16.0 + -16.0) - param_2;
  dVar53 = param_2 + -20.0;
  func_0x00010bf20c00(param_3);
  _CGRectGetWidth();
  dVar52 = param_2 + -40.0 + -40.0;
  lVar49 = (long)_DAT_112765280;
  func_0x00010c23d5a0(dVar52,dVar53,*(undefined8 *)(param_3 + lVar49));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar51 = (long)_DAT_112765278;
  uVar2 = *(undefined8 *)(param_3 + lVar51);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf493a0(uVar2,param_4,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_3 + lVar51);
  uStack_118 = uVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0(uVar5,param_4,lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_3 + lVar51);
  uStack_110 = uVar7;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_3);
  _CGRectGetWidth();
  uVar9 = uVar8;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_3 + lVar51);
  uStack_108 = uVar9;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_3);
  _CGRectGetHeight();
  uVar11 = uVar10;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = (long)_DAT_11276527c;
  uVar12 = *(undefined8 *)(param_3 + lVar50);
  uStack_100 = uVar11;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = param_3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf493a0(uVar12,param_4,lVar51);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_3 + lVar50);
  uStack_f8 = uVar13;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_3;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010bf493a0(uVar14,param_4,lVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_3 + lVar50);
  uStack_f0 = uVar16;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar17;
  func_0x00010bf493c0(0x4044000000000000,uVar17,param_4,lVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_3 + lVar50);
  uStack_e8 = uVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar20;
  func_0x00010bf493c0(0xc044000000000000,uVar20,param_4,lVar21);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_3 + lVar50);
  uStack_e0 = uVar22;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar23;
  func_0x00010bf49480(0x4024000000000000,uVar23,param_4,lVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_3 + lVar50);
  uStack_d8 = uVar25;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar26;
  func_0x00010bf49520(0xc024000000000000,uVar26,param_4,lVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_3 + lVar49);
  uStack_d0 = uVar28;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar29;
  func_0x00010bf493a0(uVar29,param_4,lVar30);
  _objc_retainAutoreleasedReturnValue();
  uVar32 = *(undefined8 *)(param_3 + lVar49);
  uStack_c8 = uVar31;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_3 + lVar50);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar32;
  func_0x00010bf493c0(0x4030000000000000,uVar32,param_4,uVar33);
  _objc_retainAutoreleasedReturnValue();
  uVar35 = *(undefined8 *)(param_3 + lVar49);
  uStack_c0 = uVar34;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = uVar35;
  func_0x00010bf49420(dVar52);
  _objc_retainAutoreleasedReturnValue();
  uVar37 = *(undefined8 *)(param_3 + lVar49);
  uStack_b8 = uVar36;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = uVar37;
  func_0x00010bf49420(dVar53);
  _objc_retainAutoreleasedReturnValue();
  uVar39 = *(undefined8 *)(param_3 + lVar48);
  uStack_b0 = uVar38;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = *(undefined8 *)(param_3 + lVar49);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = uVar39;
  func_0x00010bf493c0(0x4028000000000000,uVar39,param_4,uVar40);
  _objc_retainAutoreleasedReturnValue();
  uVar42 = *(undefined8 *)(param_3 + lVar48);
  uStack_a8 = uVar41;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = param_3;
  func_0x00010bf34860(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar43 = uVar42;
  func_0x00010bf493a0(uVar42,param_4,lVar49);
  _objc_retainAutoreleasedReturnValue();
  uVar44 = *(undefined8 *)(param_3 + lVar48);
  uStack_a0 = uVar43;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar45 = *(undefined8 *)(param_3 + lVar50);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar46 = uVar44;
  func_0x00010bf493c0(0xc030000000000000,uVar44,param_4,uVar45);
  _objc_retainAutoreleasedReturnValue();
  puVar47 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar46;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_118,0x11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_4,puVar47);
  _objc_release(puVar47);
  _objc_release(uVar46);
  _objc_release(uVar45);
  _objc_release(uVar44);
  _objc_release(uVar43);
  _objc_release(lVar49);
  _objc_release(uVar42);
  _objc_release(uVar41);
  _objc_release(uVar40);
  _objc_release(uVar39);
  _objc_release(uVar38);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(lVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(lVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(lVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(lVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(lVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(lVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar51);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  func_0x00010c1cbe20(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  param_3 = param_3 + _DAT_112765288;
  _objc_loadWeakRetained(param_3);
  func_0x00010bf73fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071c4498; end: 1071c44cb; -[SCSpotlightOnboardingView _onTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071c4498(long param_1)

{
  param_1 = param_1 + _DAT_112765288;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf73fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071c44cc; end: 1071c44eb; -[SCSpotlightOnboardingView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071c44cc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112765288);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071c44ec; end: 1071c44ff; -[SCSpotlightOnboardingView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071c44ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112765288,param_3);
  return;
}



/* Entry: 1071c4500; end: 1071c456b; -[SCSpotlightOnboardingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071c4500(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112765288);
  _objc_storeStrong(param_1 + _DAT_112765284,0);
  _objc_storeStrong(param_1 + _DAT_112765280,0);
  _objc_storeStrong(param_1 + _DAT_11276527c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112765278,0);
  return;
}



/* Entry: 1071c456c; end: 1071c4677; -[SCDiscoverVOperaOnboardingV4StepViewModel initWithCaption:title:image:primaryButtonText:] */

undefined1 *
FUN_1071c456c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f8bb8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1071c4678; end: 1071c469b; -[SCDiscoverVOperaOnboardingV4StepViewModel copyWithZone:] */

undefined8 FUN_1071c4678(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1071c469c; end: 1071c4727; -[SCDiscoverVOperaOnboardingV4StepViewModel hash] */

undefined8 * FUN_1071c469c(long param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1071c47d8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1071c47e4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_1071c47e4;
            }
            goto LAB_1071c47d8;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1071c47e4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1071c4728; end: 1071c47ff; -[SCDiscoverVOperaOnboardingV4StepViewModel isEqual:] */

long FUN_1071c4728(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1071c47d8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1071c47e4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_1071c47e4;
            }
            goto LAB_1071c47d8;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1071c47e4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1071c4800; end: 1071c4807; -[SCDiscoverVOperaOnboardingV4StepViewModel caption] */

undefined8 FUN_1071c4800(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1071c4808; end: 1071c480f; -[SCDiscoverVOperaOnboardingV4StepViewModel title] */

undefined8 FUN_1071c4808(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1071c4810; end: 1071c4817; -[SCDiscoverVOperaOnboardingV4StepViewModel image] */

undefined8 FUN_1071c4810(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1071c4818; end: 1071c481f; -[SCDiscoverVOperaOnboardingV4StepViewModel primaryButtonText] */

undefined8 FUN_1071c4818(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1071c4820; end: 1071c4867; -[SCDiscoverVOperaOnboardingV4StepViewModel .cxx_destruct] */

void FUN_1071c4820(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1071c4868; end: 1071c4a13;  */

void FUN_1071c4868(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_2;
  _objc_retain(param_2);
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  iVar1 = (int)lVar6;
  lVar9 = 0;
  if (lVar2 != 0) {
    do {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(param_1);
        }
        lVar9 = *(long *)(lVar10 * 8);
        lVar3 = lVar9;
        func_0x00010bf3cf60(lVar9);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_2;
        func_0x00010c0720c0();
        _objc_release(lVar3);
        iVar1 = (int)lVar6;
        if ((int)lVar4 != 0) {
          func_0x00010c15f2e0();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1071c497c;
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = param_1;
      func_0x00010bf52a60();
      iVar1 = (int)lVar6;
    } while (lVar2 != 0);
    lVar9 = 0;
  }
LAB_1071c497c:
  _objc_release(param_1);
  lVar5 = lVar9;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    func_0x00010c073b60();
    if (iVar1 != 0) {
      *(undefined4 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18) = 0x27;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1071c4a14; end: 1071c4a4b;  */

void FUN_1071c4a14(long param_1,int param_2)

{
  func_0x00010c073b60();
  if (param_2 != 0) {
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0x27;
  }
  return;
}



/* Entry: 1071c4a4c; end: 1071c4a67;  */

void FUN_1071c4a4c(void)

{
  return;
}



/* Entry: 1071c4a68; end: 1071c4c4f;  */

undefined8 FUN_1071c4a68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0xffffffffffffffff;
  _objc_retain(param_2);
  func_0x00010c0bdf40(param_1);
  uVar1 = puStack_68[3];
  _objc_release(param_2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1071c4c50; end: 1071c4e53;  */

void FUN_1071c4c50(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  long lStack_140;
  ulong uStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  ulong *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_2;
  _objc_retain(param_2);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  puStack_110 = (ulong *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uVar1 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf52a60();
  if (uVar2 != 0) {
    unaff_x23 = *puStack_110;
    unaff_x22 = uVar2;
    do {
      unaff_x24 = 0;
      do {
        if (*puStack_110 != unaff_x23) {
          _objc_enumerationMutation(uVar1);
        }
        uVar2 = *(ulong *)(lStack_118 + unaff_x24 * 8);
        func_0x000108539930();
        if ((uVar2 & 1) != 0) {
          _objc_release(uVar1);
          lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
          uVar7 = 0xf;
          goto LAB_1071c4d58;
        }
        unaff_x24 = unaff_x24 + 1;
      } while (unaff_x22 != unaff_x24);
      unaff_x22 = uVar1;
      func_0x00010bf52a60();
    } while (unaff_x22 != 0);
  }
  _objc_release(uVar1);
  uVar2 = param_2;
  func_0x00010c073b60();
  if ((uVar2 & 1) == 0) {
    if (*(char *)(param_1 + 0x28) == '\x01') {
      lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    }
    else {
      uVar1 = param_2;
      func_0x00010c25b340();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = uVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = unaff_x22;
      func_0x00010853a244();
      _objc_release(unaff_x22);
      _objc_release(uVar1);
      if ((int)unaff_x23 != 0) {
        lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
        uVar7 = 4;
        goto LAB_1071c4d58;
      }
      uVar1 = param_2;
      func_0x00010c25b340();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = uVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = unaff_x22;
      func_0x00010853a0e0();
      _objc_release(unaff_x22);
      _objc_release(uVar1);
      lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
      if ((int)unaff_x23 != 0) goto LAB_1071c4d3c;
    }
    uVar7 = 1;
  }
  else {
    lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
LAB_1071c4d3c:
    uVar7 = 5;
  }
LAB_1071c4d58:
  *(undefined8 *)(lVar6 + 0x18) = uVar7;
  uVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_128 = FUN_1071c4e54;
    uStack_160 = unaff_x24;
    uStack_158 = unaff_x23;
    uStack_150 = unaff_x22;
    uStack_148 = uVar1;
    lStack_140 = param_1;
    uStack_138 = param_2;
    puStack_130 = &stack0xfffffffffffffff0;
    _objc_retain(uVar5);
    lVar6 = *(long *)(uVar2 + 0x20);
    if (lVar6 == 0) {
      uVar1 = uVar5;
      func_0x00010c25b340();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uVar7 = 0xffffffffffffffff;
      if (uVar3 != 0) {
        puStack_178 = &uStack_180;
        uStack_180 = 0;
        uStack_170 = 0x2020000000;
        uStack_168 = 0xffffffffffffffff;
        uVar4 = uVar3;
        func_0x00010bf0e700(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c1320();
        _objc_release(uVar4);
        uVar7 = puStack_178[3];
        __Block_object_dispose(&uStack_180,8);
      }
      _objc_release(uVar3);
      *(undefined8 *)(*(long *)(*(long *)(uVar2 + 0x28) + 8) + 0x18) = uVar7;
      _objc_release(uVar3);
      _objc_release(uVar1);
    }
    else {
      func_0x00010c27dd80();
      if (lVar6 - 1U < 10) {
        uVar7 = *(undefined8 *)(&UNK_10de1fd88 + (lVar6 - 1U) * 8);
      }
      else {
        uVar7 = 0xffffffffffffffff;
      }
      *(undefined8 *)(*(long *)(*(long *)(uVar2 + 0x28) + 8) + 0x18) = uVar7;
    }
    _objc_release(uVar5);
    return;
  }
  return;
}



/* Entry: 1071c4e54; end: 1071c4ff3;  */

void FUN_1071c4e54(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    lVar1 = param_2;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar4 = 0xffffffffffffffff;
    if (lVar2 != 0) {
      puStack_58 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0xffffffffffffffff;
      lVar3 = lVar2;
      func_0x00010bf0e700(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c1320();
      _objc_release(lVar3);
      uVar4 = puStack_58[3];
      __Block_object_dispose(&uStack_60,8);
    }
    _objc_release(lVar2);
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar4;
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    func_0x00010c27dd80();
    if (lVar1 - 1U < 10) {
      uVar4 = *(undefined8 *)(&UNK_10de1fd88 + (lVar1 - 1U) * 8);
    }
    else {
      uVar4 = 0xffffffffffffffff;
    }
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar4;
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1071c4ff4; end: 1071c5083;  */

void FUN_1071c4ff4(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 10;
  return;
}



/* Entry: 1071c5084; end: 1071c516f;  */

void FUN_1071c5084(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf45460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    lVar1 = param_2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    lVar4 = *(long *)(lVar3 + 0x28);
    *(long *)(lVar3 + 0x28) = lVar1;
  }
  else {
    lVar4 = param_2;
    func_0x00010bf82560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    lVar1 = lVar4;
    func_0x00010bf45460();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(long *)(lVar3 + 0x28) = lVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1071c5170; end: 1071c5297;  */

void FUN_1071c5170(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126c6980;
  _objc_retain(param_2);
  _objc_alloc();
  uVar7 = param_2;
  func_0x00010bf622e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c25b340(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x00010c089820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c26f2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c1058a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c005fa0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar7);
  puVar6 = puVar1;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined **)(lVar8 + 0x28) = puVar6;
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1071c5298; end: 1071c541f;  */

void FUN_1071c5298(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1071c5420; end: 1071c542b;  */

void FUN_1071c5420(void)

{
  return;
}



/* Entry: 1071c542c; end: 1071c554b;  */

void FUN_1071c542c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071c554c; end: 1071c554f;  */

void FUN_1071c554c(void)

{
  return;
}



/* Entry: 1071c5550; end: 1071c55a7;  */

void FUN_1071c5550(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071c55a8; end: 1071c55eb;  */

void FUN_1071c55a8(void)

{
  return;
}



/* Entry: 1071c55ec; end: 1071c5843; -[SCDiscoverFeedLoggingInfoExtractor initWithViewModel:shouldLogSpotlight:shouldLogDiscover:startingClientId:isCameoStory:shouldLogFriendStory:loggingSourceLocation:snapchattersDataFetcher:circumstanceEngine:] */

undefined1 *
FUN_1071c55ec(undefined8 param_1,undefined8 param_2,ulong param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar2 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f8bc0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + 8);
    *(ulong *)((long)puVar2 + 8) = param_3;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar2 + 0x10) = param_4;
    *(undefined1 *)((long)puVar2 + 0x11) = param_5;
    *(undefined1 *)((long)puVar2 + 0x12) = param_7;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined8 *)((long)puVar2 + 0x18) = param_6;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar2 + 0x13) = param_8;
    *(undefined8 *)((long)puVar2 + 0x48) = param_9;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x50);
    *(undefined8 *)((long)puVar2 + 0x50) = param_10;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126bdd28;
    _objc_retain(param_3);
    _objc_opt_class(puVar4);
    uVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    uVar1 = param_3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x28);
    *(ulong *)((long)puVar2 + 0x28) = uVar1;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126c6d90;
    _objc_retain(param_3);
    _objc_opt_class(puVar4);
    uVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    uVar1 = param_3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x30);
    *(ulong *)((long)puVar2 + 0x30) = uVar1;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126bdd30;
    _objc_retain(param_3);
    _objc_opt_class(puVar4);
    uVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    uVar1 = param_3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x38);
    *(ulong *)((long)puVar2 + 0x38) = uVar1;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126c2118;
    _objc_retain(param_3);
    _objc_opt_class(puVar4);
    uVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    uVar1 = param_3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x40);
    *(ulong *)((long)puVar2 + 0x40) = uVar1;
    _objc_release(uVar3);
    uVar3 = param_11;
    func_0x00010bf1f440();
    *(char *)((long)puVar2 + 0x58) = (char)uVar3;
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 1071c5844; end: 1071c59cf; -[SCDiscoverFeedLoggingInfoExtractor addExtraValuesToEventData:playlist:itemLayout:] */

void FUN_1071c5844(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c25a1a0(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110f423f8);
    _objc_release(puVar1);
  }
  else {
    func_0x00010c1d0640(param_3,param_2,param_1,&PTR____CFConstantStringClassReference_110f423f8);
  }
  lVar2 = param_1;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    lVar2 = param_4;
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110f42438);
      _objc_release(puVar1);
    }
    else {
      func_0x00010c1d0640(param_3,param_2,lVar3,&PTR____CFConstantStringClassReference_110f42438);
    }
    _objc_release(lVar3);
  }
  else {
    lVar2 = param_1;
    func_0x00010c0844e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_3,param_2,lVar2,&PTR____CFConstantStringClassReference_110f42438);
  }
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071c59d0; end: 1071c5d1b; -[SCDiscoverFeedLoggingInfoExtractor shouldLogDiscoverEventWithCompletion:] */

void FUN_1071c59d0(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  if ((((*(long *)(param_1 + 0x28) == 0) && (*(long *)(param_1 + 0x30) == 0)) &&
      (*(long *)(param_1 + 0x38) == 0)) && (*(char *)(param_1 + 0x12) != '\x01')) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar2);
    puStack_a0 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x2020000000;
    uStack_58 = 0;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    uStack_88 = 0x1071c55ac;
    puStack_80 = &UNK_1109214e8;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    uStack_b0 = 0x1071c55c0;
    puStack_a8 = &UNK_110921518;
    puStack_78 = puStack_a0;
    puStack_68 = puStack_a0;
    func_0x00010c0bdf40(uVar2);
    cVar1 = *(char *)(puStack_68 + 3);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(uVar2);
    if ((cVar1 != '\x01') || (*(char *)(param_1 + 0x13) != '\x01')) {
      _objc_initWeak(&puStack_98,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      _objc_copyWeak(auStack_c8,&puStack_98);
      _objc_retain(param_3);
      _objc_retain(param_3);
      _objc_retain(param_3);
      _objc_retain(param_3);
      _objc_retain(param_3);
      _objc_retain(param_3);
      _objc_retain(param_3);
      func_0x00010c0bdf40(uVar2);
      _objc_release(param_3);
      _objc_release(param_3);
      _objc_release(param_3);
      _objc_release(param_3);
      _objc_release(param_3);
      _objc_release(param_3);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_c8);
      _objc_destroyWeak(&puStack_98);
      goto LAB_1071c5a30;
    }
  }
  (**(code **)(param_3 + 0x10))(param_3,1);
LAB_1071c5a30:
  _objc_release(param_3);
  return;
}



/* Entry: 1071c5d1c; end: 1071c5d8b;  */

void FUN_1071c5d1c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  }
  else {
    func_0x00010be94c80(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071c5d8c; end: 1071c5e07;  */

void FUN_1071c5d8c(void)

{
  return;
}



/* Entry: 1071c5e08; end: 1071c5fa3; -[SCDiscoverFeedLoggingInfoExtractor _resolveShouldLogForUserStorySequence:completion:] */

void FUN_1071c5e08(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    pcVar6 = *(code **)(param_4 + 0x10);
    uVar5 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010853a244();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 == 0) {
      uVar4 = param_1;
      func_0x00010beb2ca0();
      if ((uVar4 & 1) == 0) {
        lVar1 = param_3;
        func_0x00010c25b340(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010853a0e0();
        (**(code **)(param_4 + 0x10))(param_4,lVar3);
        _objc_release(lVar2);
      }
      else {
        lVar1 = param_3;
        func_0x00010c2923e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_4);
        _objc_retain(param_3);
        func_0x00010beb4560(param_1);
        _objc_release(lVar1);
        _objc_release(param_3);
        lVar1 = param_4;
      }
      _objc_release(lVar1);
      goto LAB_1071c5f7c;
    }
    pcVar6 = *(code **)(param_4 + 0x10);
    uVar5 = 1;
  }
  (*pcVar6)(param_4,uVar5);
LAB_1071c5f7c:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071c5fa4; end: 1071c600b;  */

void FUN_1071c5fa4(long param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c25b340(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010853a0e0();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2 & (uint)uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1071c600c; end: 1071c6027; -[SCDiscoverFeedLoggingInfoExtractor _shouldCheckFriendshipStatus] */

uint FUN_1071c600c(long param_1)

{
  return (uint)(*(ulong *)(param_1 + 0x48) < 9) &
         0x1caU >> (ulong)((uint)*(ulong *)(param_1 + 0x48) & 0x1f);
}



/* Entry: 1071c6028; end: 1071c60f3; -[SCDiscoverFeedLoggingInfoExtractor _shouldLogBasedOnFriendshipCheckWithUserId:completion:] */

void FUN_1071c6028(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1071c60f4;
  puStack_40 = &UNK_11086d228;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c2448c0(uVar1,param_2,param_3,PTR___dispatch_main_q_11034be20,&puStack_58);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1071c60f4; end: 1071c612f;  */

void FUN_1071c60f4(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (param_2 == 0) {
    uVar1 = 1;
  }
  else {
    func_0x000100bf119c(param_2);
    uVar1 = (uint)param_2 ^ 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001071c612c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
  return;
}



/* Entry: 1071c6130; end: 1071c6933; -[SCDiscoverFeedLoggingInfoExtractor storyLoggingInfoWithItemLayout:] */

void FUN_1071c6130(double param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puStack_c8;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  puVar1 = *(undefined **)(param_2 + 0x30);
  if (puVar1 == (undefined *)0x0) {
    lVar3 = *(long *)(param_2 + 0x38);
    if (lVar3 != 0) {
      func_0x00010bf45500();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c08fa60();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (lVar4 == 0) {
        func_0x00010bf8c980();
        func_0x00010c14de00(puVar5);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar5 = *(undefined **)(param_2 + 0x38);
        func_0x00010bf45500(puVar5);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(lVar3);
      puVar1 = *(undefined **)(param_2 + 0x38);
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar1;
      func_0x00010bfb2660();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar2 = PTR_PTR_1126d50c0;
      _objc_alloc(PTR_PTR_1126d50c0);
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25b7c0(*(undefined8 *)(param_2 + 0x38));
      uVar7 = *(undefined8 *)(param_2 + 0x38);
      func_0x00010c2a2900();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0741a0();
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c11b1e0();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_2 + 0x38);
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01ff00(puVar2);
      _objc_release(uVar10);
      _objc_release(puVar1);
      _objc_release(uVar7);
      _objc_release(puVar6);
      goto LAB_1071c66f8;
    }
    lVar3 = *(long *)(param_2 + 0x28);
    if (lVar3 == 0) {
      if (*(long *)(param_2 + 0x40) == 0) {
        param_2 = (undefined *)0x0;
      }
      else {
        func_0x00010bec4b40(param_2,param_3,*(long *)(param_2 + 0x40),param_4);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_1071c6704;
    }
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
LAB_1071c6360:
      puVar5 = *(undefined **)(param_2 + 0x28);
      func_0x00010bf8c980(puVar5);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar5 = *(undefined **)(param_2 + 0x28);
      func_0x00010bf454e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar5;
      func_0x00010c298be0();
      puVar2 = puVar5;
      if ((puVar1 == (undefined *)0x0) &&
         (func_0x00010c25aba0(*(undefined8 *)(param_2 + 0x28)), 0.0 < param_1)) {
        puVar2 = PTR_PTR_1126c6980;
        _objc_alloc();
        func_0x00010bf52680(puVar5);
        puVar1 = puVar5;
        func_0x00010bfe5ec0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25aba0(*(undefined8 *)(param_2 + 0x28));
        func_0x00010c005fa0();
        _objc_release(puVar5);
        _objc_release(puVar1);
      }
      puVar5 = puVar2;
      func_0x000108f51f98();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      if (puVar5 == (undefined *)0x0) goto LAB_1071c6360;
    }
    lVar3 = *(long *)(param_2 + 0x28);
    func_0x00010c25b7c0();
    if (lVar3 != 0) {
      func_0x00010c25b7c0(*(undefined8 *)(param_2 + 0x28));
    }
    puStack_80 = &uStack_88;
    uStack_88 = 0;
    uStack_78 = 0x2020000000;
    uStack_70 = 0;
    uVar7 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c242500(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97e80();
    _objc_release(uVar7);
    uVar10 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c242500();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar10;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    puVar2 = PTR_PTR_1126d50c0;
    _objc_alloc(PTR_PTR_1126d50c0);
    puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c11b1e0();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01ff00(puVar2);
    _objc_release(uVar10);
    _objc_release(puVar1);
    _objc_release(puVar11);
    _objc_release(uVar7);
    __Block_object_dispose(&uStack_88,8);
  }
  else {
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (puVar5 == (undefined *)0x0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar11 = puVar5;
      func_0x00010c105860();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = *(undefined **)(param_2 + 0x30);
      func_0x00010c259cc0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar5;
      func_0x00010bfe32e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 == (undefined *)0x0) {
        puVar1 = puVar11;
        func_0x00010c08fa60();
        if (puVar1 == (undefined *)0x0) {
          puStack_c8 = (undefined *)0x0;
          puVar1 = (undefined *)0x0;
        }
        else {
          _objc_retain(puVar11);
          puStack_c8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar11;
        }
      }
      else {
        puVar6 = puVar5;
        func_0x00010bfe32e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar6;
        func_0x00010bfe3180();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        puStack_c8 = (undefined *)0x0;
      }
      puVar8 = puVar1;
      func_0x00010c08fa60();
      puVar6 = puVar2;
      if (puVar8 != (undefined *)0x0) {
        puVar8 = PTR_PTR_1126c6980;
        _objc_alloc();
        func_0x00010c005fa0();
        puVar9 = puVar8;
        func_0x000108f51f98();
        _objc_retainAutoreleasedReturnValue();
        if (puVar9 != (undefined *)0x0) {
          puVar6 = puVar9;
        }
        _objc_retain(puVar6);
        _objc_release(puVar2);
        _objc_release(puVar9);
        _objc_release(puVar8);
      }
      uVar10 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010c258040();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar10;
      func_0x000100504554();
      _objc_release(uVar10);
      uVar10 = uVar7;
      func_0x00010c140200();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      puVar2 = PTR_PTR_1126d50c0;
      _objc_alloc(PTR_PTR_1126d50c0);
      func_0x00010c25b7c0(*(undefined8 *)(param_2 + 0x30));
      func_0x00010bfddf20();
      puVar8 = puVar5;
      func_0x00010bf28b20();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bfbec20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c01ff00(puVar2);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(uVar10);
      _objc_release(puStack_c8);
      _objc_release(puVar1);
      _objc_release(puVar6);
LAB_1071c66f8:
      _objc_release(puVar11);
    }
  }
  _objc_release(puVar5);
  param_2 = puVar2;
LAB_1071c6704:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1071c6934; end: 1071c6a63;  */

void FUN_1071c6934(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c27dd80();
  puVar1 = PTR_PTR_1126d50b8;
  _objc_alloc(PTR_PTR_1126d50b8);
  uVar2 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f000(param_3);
  _objc_release(param_3);
  func_0x00010c047c20(param_1,puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1071c6a64; end: 1071c6b5f;  */

void FUN_1071c6a64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  uStack_38 = 0x1071c506c;
  uStack_30 = 0x1071c507c;
  uStack_28 = 0;
  func_0x00010c0bebc0(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1071c6b60; end: 1071c6bbf;  */

void FUN_1071c6b60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bf358a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071c6bc0; end: 1071c6d3b;  */

void FUN_1071c6bc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d50b8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c047c20(0xbff0000000000000,puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1071c6d3c; end: 1071c6dbf;  */

void FUN_1071c6d3c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c23ffa0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108f571b4();
  _objc_release(uVar1);
  _objc_release(param_2);
  if ((int)uVar2 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
    *param_4 = 1;
  }
  return;
}



/* Entry: 1071c6dc0; end: 1071c6e43;  */

void FUN_1071c6dc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d50b8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c047c20(0xbff0000000000000,puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1071c6e44; end: 1071c706b; -[SCDiscoverFeedLoggingInfoExtractor _storyLoggingInfoFromOperaPlaybackSequence:itemLayout:] */

void FUN_1071c6e44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  uStack_58 = 0x1071c506c;
  uStack_50 = 0x1071c507c;
  uStack_48 = 0;
  FUN_1071c4a68(param_3,0,0);
  puVar1 = PTR_PTR_1126d50c8;
  func_0x00010bebce20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bdf40(param_3);
  uVar2 = puStack_68[5];
  _objc_retain(uVar2);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1071c706c; end: 1071c7247;  */

void FUN_1071c706c(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_2);
  if ((*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffe) == 4) {
    lVar2 = param_2;
    func_0x00010bf82560();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010bf45460();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      lVar3 = param_2;
      func_0x00010c2923e0(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar6 = param_2;
      func_0x00010bf82560(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar6;
      func_0x00010bf45460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
    }
    _objc_release(lVar7);
    _objc_release(lVar2);
    puVar4 = PTR_PTR_1126d50c0;
    _objc_alloc();
    lVar2 = param_2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    cVar1 = *(char *)(*(long *)(param_1 + 0x28) + 0x58);
    if (cVar1 == '\x01') {
      lVar7 = param_2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar7 = 0;
    }
    func_0x00010c01ff00();
    lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar5 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined **)(lVar6 + 0x28) = puVar4;
    _objc_release(uVar5);
    if (cVar1 != '\0') {
      _objc_release(lVar7);
    }
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071c7248; end: 1071c724b;  */

void FUN_1071c7248(void)

{
  return;
}



/* Entry: 1071c724c; end: 1071c76c3;  */

void FUN_1071c724c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  
  puVar1 = PTR_PTR_1126d50c0;
  _objc_retain(param_2);
  _objc_alloc();
  uVar2 = param_2;
  FUN_1071c4868(param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar12 = uVar11;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c24c480();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf42120();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c0ed760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ff00();
  lVar17 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar16 = *(undefined8 *)(lVar17 + 0x28);
  *(undefined **)(lVar17 + 0x28) = puVar1;
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1071c76c4; end: 1071c79cb;  */

void FUN_1071c76c4(long param_1,undefined8 param_2)

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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  _objc_retain(param_2);
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x2020000000;
  uStack_70 = 0;
  uVar1 = param_2;
  func_0x00010c25b340(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97e80();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126d50c0;
  _objc_alloc();
  uVar1 = param_2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c24c480();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf42120();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c0ed760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ff00();
  lVar17 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar16 = *(undefined8 *)(lVar17 + 0x28);
  *(undefined **)(lVar17 + 0x28) = puVar2;
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_88,8);
  _objc_release(param_2);
  return;
}



/* Entry: 1071c79cc; end: 1071c7a4f;  */

void FUN_1071c79cc(long param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bf28a40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bfbeba0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  _objc_release(param_2);
  if (lVar2 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
    *param_4 = 1;
  }
  return;
}



/* Entry: 1071c7a50; end: 1071c7b43;  */

void FUN_1071c7a50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d50c0;
  _objc_retain(param_2);
  _objc_alloc();
  uVar2 = param_2;
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c01ff00();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1071c7b44; end: 1071c7c83;  */

void FUN_1071c7b44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126d50c0;
  _objc_retain(param_2);
  _objc_alloc();
  uVar2 = param_2;
  func_0x00010bf454e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = uVar3;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ff00();
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined **)(lVar6 + 0x28) = puVar1;
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1071c7c84; end: 1071c7dfb;  */

void FUN_1071c7c84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126d50c0;
  _objc_retain(param_2);
  _objc_alloc();
  uVar2 = param_2;
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ff00();
  lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined **)(lVar8 + 0x28) = puVar1;
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1071c7dfc; end: 1071c7e43; +[SCDiscoverFeedLoggingInfoExtractor _snapLoggingInfoForPlaybackSequence:] */

void FUN_1071c7dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001085367d4(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000100504554();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1071c7e44; end: 1071c7fc3;  */

void FUN_1071c7e44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d50b8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c15f2e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  uVar4 = param_3;
  func_0x00010c26f2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8b160();
  func_0x00010c25b820(param_3);
  _objc_release(param_3);
  func_0x00010c047c20(param_1,puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1071c7fc4; end: 1071c885b; +[SCDiscoverFeedLoggingInfoExtractor storyLoggingInfoFromPlaybackSequence:customStoryMetadata:itemPosition:itemLayout:startingClientId:isLoggingFrom4thTabFriendStorySection:] */

void FUN_1071c7fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined **ppuStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined **ppuStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  func_0x00010bebce20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x0001085367d4();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar9;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar9);
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_250 = &uStack_220;
  uStack_220 = 0;
  uStack_210 = 0x2020000000;
  uStack_208 = 0;
  puStack_248 = &uStack_240;
  uStack_240 = 0;
  uStack_230 = 0x2020000000;
  uStack_228 = 0xffffffffffffffff;
  puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_268 = 0xc2000000;
  pcStack_260 = FUN_1071c885c;
  puStack_258 = &UNK_110992068;
  puStack_238 = puStack_248;
  puStack_218 = puStack_250;
  func_0x00010bf97e80(uVar1);
  puVar4 = PTR_PTR_1126c22b0;
  _objc_opt_new();
  puStack_298 = &uStack_2a0;
  uStack_2a0 = 0;
  uStack_290 = 0x3032000000;
  uStack_288 = 0x1071c506c;
  uStack_280 = 0x1071c507c;
  uStack_278 = 0;
  puStack_2c8 = &uStack_2d0;
  uStack_2d0 = 0;
  uStack_2c0 = 0x3032000000;
  uStack_2b8 = 0x1071c506c;
  uStack_2b0 = 0x1071c507c;
  uStack_2a8 = 0;
  _objc_retain(param_7);
  _objc_retain(puVar4);
  func_0x00010c0bdf40(param_3);
  puVar5 = PTR_PTR_1126d50c0;
  _objc_alloc();
  uVar9 = puStack_298[5];
  _objc_retain(param_3);
  _objc_retain(uVar9);
  puStack_b8 = (undefined *)0x0;
  pcStack_a8 = (code *)0x3032000000;
  puStack_a0 = (undefined *)0x1071c506c;
  ppuStack_98 = (undefined **)0x1071c507c;
  uStack_90 = 0;
  puStack_e0 = puVar10;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_1071c5084;
  puStack_c8 = &UNK_1109214e8;
  puStack_108 = puVar10;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_1071c5170;
  puStack_f0 = &UNK_110921518;
  puStack_138 = puVar10;
  ppuStack_130 = (undefined **)0xc2000000;
  pcStack_128 = FUN_1071c5298;
  puStack_120 = &UNK_110991a58;
  ppuStack_110 = &puStack_b8;
  ppuStack_e8 = &puStack_b8;
  ppuStack_c0 = &puStack_b8;
  ppuStack_b0 = &puStack_b8;
  _objc_retain(uVar9);
  puStack_160 = puVar10;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x1071c52c8;
  puStack_148 = &UNK_11092a430;
  puStack_188 = puVar10;
  uStack_180 = 0xc2000000;
  uStack_178 = 0x1071c5320;
  puStack_170 = &UNK_110920c78;
  puStack_1b0 = puVar10;
  uStack_1a8 = 0xc2000000;
  uStack_1a0 = 0x1071c5360;
  puStack_198 = &UNK_11092a460;
  puStack_1d8 = puVar10;
  uStack_1d0 = 0xc2000000;
  uStack_1c8 = 0x1071c53a0;
  puStack_1c0 = &UNK_1109215c8;
  puStack_200 = puVar10;
  uStack_1f8 = 0xc2000000;
  uStack_1f0 = 0x1071c53e0;
  puStack_1e8 = &UNK_110960ea8;
  ppuStack_1e0 = &puStack_b8;
  ppuStack_1b8 = &puStack_b8;
  ppuStack_190 = &puStack_b8;
  ppuStack_168 = &puStack_b8;
  ppuStack_140 = &puStack_b8;
  ppuStack_118 = (undefined **)uVar9;
  func_0x00010c0bdf40(param_3);
  puVar11 = ppuStack_b0[5];
  _objc_retain(puVar11);
  _objc_release(ppuStack_118);
  __Block_object_dispose(&puStack_b8,8);
  _objc_release(uStack_90);
  _objc_release(uVar9);
  _objc_release(param_3);
  FUN_1071c4a68(param_3,param_4,param_8);
  _objc_retain(param_3);
  ppuStack_130 = &puStack_138;
  puStack_138 = (undefined *)0x0;
  pcStack_128 = (code *)0x2020000000;
  puStack_120 = (undefined *)((ulong)puStack_120 & 0xffffffff00000000);
  puStack_b8 = puVar10;
  ppuStack_b0 = (undefined **)0xc2000000;
  pcStack_a8 = FUN_1071c4a14;
  puStack_a0 = &UNK_1109214e8;
  ppuStack_98 = ppuStack_130;
  func_0x00010c0bdf40(param_3);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  __Block_object_dispose(&puStack_138,8);
  _objc_release(param_3);
  _objc_retain(param_4);
  lVar8 = param_4;
  func_0x00010c27dd80();
  if ((lVar8 < 6) && (lVar8 == 1)) {
    func_0x00010c1143e0();
  }
  _objc_release(param_4);
  func_0x0001085385d8();
  func_0x00010bf529e0();
  puVar6 = puVar4;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  ppuStack_118 = &puStack_b8;
  puStack_b8 = (undefined *)0x0;
  pcStack_a8 = (code *)0x3032000000;
  puStack_a0 = (undefined *)0x1071c506c;
  ppuStack_98 = (undefined **)0x1071c507c;
  uStack_90 = 0;
  puStack_138 = puVar10;
  ppuStack_130 = (undefined **)0xc2000000;
  pcStack_128 = FUN_1071c542c;
  puStack_120 = &UNK_11092a430;
  puStack_e0 = puVar10;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = (code *)0x1071c54bc;
  puStack_c8 = &UNK_110920c78;
  puStack_108 = puVar10;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_1071c5550;
  puStack_f0 = &UNK_1109215c8;
  ppuStack_e8 = ppuStack_118;
  ppuStack_c0 = ppuStack_118;
  ppuStack_b0 = ppuStack_118;
  func_0x00010c0bdf40(param_3);
  puVar10 = ppuStack_b0[5];
  _objc_retain(puVar10);
  __Block_object_dispose(&puStack_b8,8);
  _objc_release(uStack_90);
  _objc_release(param_3);
  lVar8 = param_4;
  func_0x00010c11ac00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ff00(puVar5);
  _objc_release(lVar8);
  _objc_release(puVar10);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar11);
  _objc_release(puVar4);
  _objc_release(param_7);
  __Block_object_dispose(&uStack_2d0,8);
  _objc_release(uStack_2a8);
  __Block_object_dispose(&uStack_2a0,8);
  _objc_release(uStack_278);
  _objc_release(puVar4);
  __Block_object_dispose(&uStack_240,8);
  __Block_object_dispose(&uStack_220,8);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1071c885c; end: 1071c890f;  */

void FUN_1071c885c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf28a40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfbeba0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  }
  lVar1 = param_2;
  func_0x00010c25b820();
  _objc_release(param_2);
  if (lVar1 == 1) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  }
  return;
}



/* Entry: 1071c8910; end: 1071c8917;  */

void FUN_1071c8910(void)

{
  return;
}



/* Entry: 1071c8918; end: 1071c8c0b;  */

void FUN_1071c8918(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  FUN_1071c4868(param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar7 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = uVar1;
  _objc_release(uVar7);
  uVar1 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar7 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010c24c480();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf42120();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0ed760();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071c8c0c; end: 1071c8c17;  */

void FUN_1071c8c0c(void)

{
  return;
}



/* Entry: 1071c8c18; end: 1071c8c8f; -[SCDiscoverFeedLoggingInfoExtractor .cxx_destruct] */

void FUN_1071c8c18(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1071c8c90; end: 1071c8cd7;  */

void FUN_1071c8c90(void)

{
  return;
}



/* Entry: 1071c8cd8; end: 1071c8ce3; +[SCDiscoverFeedStoryLoggingOperaPlugin announcerIdentifier] */

undefined ** FUN_1071c8cd8(void)

{
  return &PTR____CFConstantStringClassReference_110ea1a78;
}



/* Entry: 1071c8ce4; end: 1071c8ceb; -[SCDiscoverFeedStoryLoggingOperaPlugin addListener:] */

void FUN_1071c8ce4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1071c8cec; end: 1071c8cf3; -[SCDiscoverFeedStoryLoggingOperaPlugin removeListener:] */

void FUN_1071c8cec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1071c8cf4; end: 1071c90db; -[SCDiscoverFeedStoryLoggingOperaPlugin initWithSource:itemLayout:interactionContext:fieldsOverrideDict:discoverFeedDataFetcher:interactionHistoryManager:navigationStyle:loggingSourceLocation:circumstanceEngine:storiesConfigProvider:pageTypeToOverride:snapchattersDataFetcher:viewLocation:storiesMetricServices:triggeringSection:userPreferences:storiesMediaCoordinator:] */

undefined8 *
FUN_1071c8cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,ulong param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_16);
  _objc_retain(param_18);
  _objc_retain(param_19);
  puStack_70 = PTR_PTR_1126f8bc8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar5 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar5);
    puVar1[9] = param_3;
    puVar1[10] = param_4;
    uVar5 = param_6;
    func_0x00010bf51e00();
    uVar6 = puVar1[0xb];
    puVar1[0xb] = uVar5;
    _objc_release(uVar6);
    puVar1[7] = 0xffffffffffffffff;
    puVar1[8] = 0xffffffffffffffff;
    _objc_retain(param_7);
    uVar5 = puVar1[0xc];
    puVar1[0xc] = param_7;
    _objc_release(uVar5);
    _objc_retain(param_8);
    uVar5 = puVar1[0xd];
    puVar1[0xd] = param_8;
    _objc_release(uVar5);
    puVar1[0x17] = param_5;
    puVar1[0x18] = param_9;
    puVar1[0x14] = param_10;
    _objc_retain(param_14);
    uVar5 = puVar1[0xe];
    puVar1[0xe] = param_14;
    _objc_release(uVar5);
    puVar1[0x1f] = param_15;
    puVar1[0x21] = param_17;
    *(undefined1 *)(puVar1 + 0x1b) = 0;
    _objc_retain(param_12);
    uVar5 = puVar1[0xf];
    puVar1[0xf] = param_12;
    _objc_release(uVar5);
    _objc_retain(param_11);
    uVar5 = puVar1[0x1c];
    puVar1[0x1c] = param_11;
    _objc_release(uVar5);
    _objc_retain(param_13);
    uVar5 = puVar1[0x1d];
    puVar1[0x1d] = param_13;
    _objc_release(uVar5);
    *(undefined1 *)((long)puVar1 + 0xda) = 0;
    _objc_retain(param_16);
    uVar5 = puVar1[0x20];
    puVar1[0x20] = param_16;
    _objc_release(uVar5);
    _objc_retain(param_19);
    uVar5 = puVar1[0x10];
    puVar1[0x10] = param_19;
    _objc_release(uVar5);
    uVar5 = param_18;
    func_0x00010c269d40(param_18);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_11;
    func_0x000108f4a954(param_11,uVar5);
    *(char *)(puVar1 + 0x22) = (char)uVar6;
    _objc_release(uVar5);
    if ((param_15 & 0xfffffffffffffffe) == 0x2c) {
      *(undefined1 *)(puVar1 + 0x24) = 1;
      puVar2 = PTR_PTR_1126ce768;
      _objc_alloc_init();
      uVar5 = puVar1[0x25];
      puVar1[0x25] = puVar2;
      _objc_release(uVar5);
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      uVar5 = puVar1[0x2b];
      puVar1[0x2b] = puVar2;
      _objc_release(uVar5);
      func_0x00010c1264c0(puVar1[0x25]);
    }
    uVar6 = puVar1[0xf];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c22f8;
    func_0x00010bf719c0(PTR_PTR_1126c22f8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010bf1f320();
    if ((int)uVar5 == 0) {
      uVar3 = puVar1[0xf];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c22f8;
      func_0x00010bf526c0(PTR_PTR_1126c22f8);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010bf1f320();
      *(char *)(puVar1 + 0x2c) = (char)uVar5;
      _objc_release(puVar4);
      _objc_release(uVar3);
    }
    else {
      *(undefined1 *)(puVar1 + 0x2c) = 1;
    }
    _objc_release(puVar2);
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar5 = puVar1[0x2d];
    puVar1[0x2d] = puVar2;
    _objc_release(uVar5);
  }
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_16);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  return puVar1;
}



/* Entry: 1071c90dc; end: 1071c90ef; -[SCDiscoverFeedStoryLoggingOperaPlugin _shouldStartLoggingEventForPublisherPlayableDatamodel:] */

long FUN_1071c90dc(long param_1)

{
  if (*(long *)(param_1 + 0xa0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beb6ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__shouldStartLoggingForNonDFEntry_11258b458)
    ;
    return param_1;
  }
  return 1;
}



/* Entry: 1071c90f0; end: 1071c90ff; -[SCDiscoverFeedStoryLoggingOperaPlugin _shouldStartLoggingForNonDFEntryPoint] */

bool FUN_1071c90f0(long param_1)

{
  return *(long *)(param_1 + 0xa0) != 0;
}



/* Entry: 1071c9100; end: 1071c911b; -[SCDiscoverFeedStoryLoggingOperaPlugin _shouldStartSpotlightLoggingForNonDFEntryPoint] */

uint FUN_1071c9100(long param_1)

{
  return (uint)(*(ulong *)(param_1 + 0xa0) < 0xf) &
         0x6ec6U >> (ulong)((uint)*(ulong *)(param_1 + 0xa0) & 0x1f);
}



/* Entry: 1071c911c; end: 1071c9127; -[SCDiscoverFeedStoryLoggingOperaPlugin setPlaylistItemController:] */

void FUN_1071c911c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 1071c9128; end: 1071c97e7; -[SCDiscoverFeedStoryLoggingOperaPlugin registeredEventsForOperaSession] */

void FUN_1071c9128(void)

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
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined1 *puVar18;
  undefined1 auStack_3e8 [8];
  undefined1 auStack_3e0 [8];
  undefined **ppuStack_3d8;
  undefined **ppuStack_3d0;
  undefined **ppuStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  long lStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined1 *puStack_360;
  code *pcStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c9460;
  func_0x00010c0f2580();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9460;
  puStack_240 = puVar1;
  puStack_238 = puVar1;
  func_0x00010c0f2560();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c9460;
  puStack_248 = puVar2;
  puStack_230 = puVar2;
  func_0x00010c0f25e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9460;
  puStack_250 = puVar1;
  puStack_228 = puVar1;
  func_0x00010c0f2620();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c9460;
  puStack_258 = puVar2;
  puStack_220 = puVar2;
  func_0x00010c0f25c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_260 = puVar1;
  puStack_218 = puVar1;
  func_0x00010bf17f80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2330;
  puStack_268 = puVar2;
  puStack_210 = puVar2;
  func_0x00010bf18820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_270 = puVar1;
  puStack_208 = puVar1;
  func_0x00010bf2e260();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2330;
  puStack_278 = puVar2;
  puStack_200 = puVar2;
  func_0x00010bfaf7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_280 = puVar1;
  puStack_1f8 = puVar1;
  func_0x00010c29ef00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2330;
  puStack_288 = puVar2;
  puStack_1f0 = puVar2;
  func_0x00010c29eee0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2ea8;
  puStack_290 = puVar1;
  puStack_1e8 = puVar1;
  func_0x00010c0b4cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2d30;
  puStack_298 = puVar2;
  puStack_1e0 = puVar2;
  func_0x00010c15c9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2d30;
  puStack_2a0 = puVar1;
  puStack_1d8 = puVar1;
  func_0x00010bf8c140();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2330;
  puStack_2a8 = puVar2;
  puStack_1d0 = puVar2;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_2b0 = puVar1;
  puStack_1c8 = puVar1;
  func_0x00010c0e9c60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2330;
  puStack_2b8 = puVar2;
  puStack_1c0 = puVar2;
  func_0x00010c29e700();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2338;
  puStack_2c0 = puVar1;
  puStack_1b8 = puVar1;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2338;
  puStack_2c8 = puVar2;
  puStack_1b0 = puVar2;
  func_0x00010bfe8ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_2d0 = puVar1;
  puStack_1a8 = puVar1;
  func_0x00010bf96940();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2330;
  puStack_2d8 = puVar2;
  puStack_1a0 = puVar2;
  func_0x00010bf96a00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2338;
  puStack_2e0 = puVar1;
  puStack_198 = puVar1;
  func_0x00010c23c600();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2338;
  puStack_2e8 = puVar2;
  puStack_190 = puVar2;
  func_0x00010c23c620();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ca2c0;
  puStack_2f0 = puVar1;
  puStack_188 = puVar1;
  func_0x00010c0ebf60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2d30;
  puStack_2f8 = puVar2;
  puStack_180 = puVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2d30;
  puStack_300 = puVar1;
  puStack_178 = puVar1;
  func_0x00010c22a860();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c9a10;
  puStack_308 = puVar2;
  puStack_170 = puVar2;
  func_0x00010c06d180();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9400;
  puStack_310 = puVar1;
  puStack_168 = puVar1;
  func_0x00010c272ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c9400;
  puStack_318 = puVar2;
  puStack_160 = puVar2;
  func_0x00010c15b3c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9400;
  puStack_320 = puVar1;
  puStack_158 = puVar1;
  func_0x00010c2999a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2330;
  puStack_328 = puVar2;
  puStack_150 = puVar2;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9460;
  puStack_330 = puVar1;
  puStack_148 = puVar1;
  func_0x00010c29ae40();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_138 = &PTR____CFConstantStringClassReference_110ebd138;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110ebd178;
  puVar1 = PTR_PTR_1126c9830;
  puStack_338 = puVar2;
  puStack_140 = puVar2;
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9a00;
  puStack_340 = puVar1;
  puStack_128 = puVar1;
  func_0x00010c2a3ea0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_110 = &PTR____CFConstantStringClassReference_110f696d8;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110f696b8;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110f69698;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110f69658;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110ebeb98;
  puVar1 = PTR_PTR_1126b2638;
  puStack_348 = puVar2;
  puStack_120 = puVar2;
  func_0x00010bf0a200();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2638;
  puStack_f0 = puVar1;
  func_0x00010c24eb60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2638;
  puStack_e8 = puVar2;
  func_0x00010bf948a0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110ebec58;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110ebecb8;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110ebecd8;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110ebecf8;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110ebed18;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110ebed38;
  puVar4 = PTR_PTR_1126b2338;
  puStack_e0 = puVar3;
  func_0x00010c2612e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126b2d30;
  puStack_a8 = puVar4;
  func_0x00010bf91f40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2d30;
  puStack_a0 = puVar11;
  func_0x00010bf80940();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2d30;
  puStack_98 = puVar5;
  func_0x00010bf8f5a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2d30;
  puStack_90 = puVar6;
  func_0x00010bf7fac0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2ce8;
  puStack_88 = puVar7;
  func_0x00010beeeae0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b2ce8;
  puStack_80 = puVar8;
  func_0x00010bfe0dc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = &puStack_238;
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puStack_350 = puVar10;
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar11);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puStack_348);
  _objc_release(puStack_340);
  _objc_release(puStack_338);
  _objc_release(puStack_330);
  _objc_release(puStack_328);
  _objc_release(puStack_320);
  _objc_release(puStack_318);
  _objc_release(puStack_310);
  _objc_release(puStack_308);
  _objc_release(puStack_300);
  _objc_release(puStack_2f8);
  _objc_release(puStack_2f0);
  _objc_release(puStack_2e8);
  _objc_release(puStack_2e0);
  _objc_release(puStack_2d8);
  _objc_release(puStack_2d0);
  _objc_release(puStack_2c8);
  _objc_release(puStack_2c0);
  _objc_release(puStack_2b8);
  _objc_release(puStack_2b0);
  _objc_release(puStack_2a8);
  _objc_release(puStack_2a0);
  _objc_release(puStack_298);
  _objc_release(puStack_290);
  _objc_release(puStack_288);
  _objc_release(puStack_280);
  _objc_release(puStack_278);
  _objc_release(puStack_270);
  _objc_release(puStack_268);
  _objc_release(puStack_260);
  _objc_release(puStack_258);
  _objc_release(puStack_250);
  _objc_release(puStack_248);
  puVar11 = puStack_240;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_350);
    return;
  }
  ___stack_chk_fail();
  pcStack_358 = FUN_1071c97e8;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_3a0 = puVar4;
  puStack_398 = puVar3;
  puStack_390 = puVar2;
  puStack_388 = puVar1;
  puStack_380 = puVar9;
  puStack_378 = puVar8;
  puStack_370 = puVar7;
  puStack_368 = puVar6;
  puStack_360 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar17);
  _objc_retain(ppuVar17);
  uVar12 = *(undefined8 *)(puVar11 + 0x90);
  *(undefined ***)(puVar11 + 0x90) = ppuVar17;
  _objc_release(uVar12);
  func_0x00010bf86d80(*(undefined8 *)(puVar11 + 0x18));
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar12 = *(undefined8 *)(puVar11 + 0x18);
  *(undefined **)(puVar11 + 0x18) = puVar1;
  _objc_release(uVar12);
  ppuVar13 = ppuVar17;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar13;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar11 + 0x10);
  *(undefined ***)(puVar11 + 0x10) = ppuVar14;
  _objc_release(uVar12);
  _objc_initWeak(auStack_3e0,puVar11);
  ppuVar14 = ppuVar13;
  func_0x00010c0687c0(ppuVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = auStack_3e0;
  _objc_copyWeak(auStack_3e8,puVar18);
  ppuVar15 = ppuVar14;
  func_0x00010c25ff60(ppuVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(ppuVar15);
  _objc_release(ppuVar14);
  ppuVar14 = ppuVar17;
  func_0x00010c0eb3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(puVar11 + 0x130);
  *(undefined ***)(puVar11 + 0x130) = ppuVar14;
  _objc_release(uVar12);
  uVar12 = *(undefined8 *)(puVar11 + 0x20);
  ppuStack_3d8 = &PTR____CFConstantStringClassReference_110f42e78;
  ppuVar14 = ppuVar17;
  func_0x00010c0eb3e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_3d0 = &PTR____CFConstantStringClassReference_110f42eb8;
  ppuVar15 = ppuVar17;
  ppuStack_3c0 = ppuVar14;
  func_0x00010c0e9f80();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_3c8 = &PTR____CFConstantStringClassReference_110f42ed8;
  ppuVar16 = ppuVar17;
  ppuStack_3b8 = ppuVar15;
  func_0x00010bf025a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_3b0 = ppuVar16;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar12);
  _objc_release(puVar1);
  _objc_release(ppuVar16);
  _objc_release(ppuVar15);
  _objc_release(ppuVar14);
  _objc_destroyWeak(auStack_3e8);
  _objc_destroyWeak(auStack_3e0);
  _objc_release(ppuVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_3e0);
  __Unwind_Resume(ppuVar17);
  _objc_retain(puVar18);
  ppuVar17 = ppuVar17 + 4;
  _objc_loadWeakRetained(ppuVar17);
  func_0x00010bdd7aa0();
  _objc_release(puVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar17);
  return;
}



/* Entry: 1071c97e8; end: 1071c9a9b; -[SCDiscoverFeedStoryLoggingOperaPlugin setOperaControlling:] */

void FUN_1071c97e8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(long *)(param_1 + 0x90) = param_3;
  _objc_release(uVar1);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x18));
  puVar2 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar2;
  _objc_release(uVar1);
  lVar3 = param_3;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar4;
  _objc_release(uVar1);
  _objc_initWeak(auStack_90,param_1);
  lVar4 = lVar3;
  func_0x00010c0687c0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = auStack_90;
  _objc_copyWeak(auStack_98,puVar7);
  lVar5 = lVar4;
  func_0x00010c25ff60(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00010c0eb3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  *(long *)(param_1 + 0x130) = lVar4;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  ppuStack_88 = &PTR____CFConstantStringClassReference_110f42e78;
  lVar4 = param_3;
  func_0x00010c0eb3e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110f42eb8;
  lVar5 = param_3;
  lStack_70 = lVar4;
  func_0x00010c0e9f80();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110f42ed8;
  lVar6 = param_3;
  lStack_68 = lVar5;
  func_0x00010bf025a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_60 = lVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1);
  _objc_release(puVar2);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume(param_3);
  _objc_retain(puVar7);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010bdd7aa0();
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071c9a9c; end: 1071c9ae3;  */

void FUN_1071c9a9c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd7aa0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071c9ae4; end: 1071c9b13; -[SCDiscoverFeedStoryLoggingOperaPlugin _cacheLastInteraction:] */

void FUN_1071c9ae4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1071c9b14; end: 1071c9c17; -[SCDiscoverFeedStoryLoggingOperaPlugin _SCDiscoverFeedCurrentIndexWithoutAds] */

long FUN_1071c9b14(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0x7fffffffffffffff;
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97e80();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  lVar1 = 0;
  if (puStack_48[3] != 0x7fffffffffffffff) {
    lVar1 = puStack_48[3];
  }
  __Block_object_dispose(&uStack_50,8);
  return lVar1;
}



/* Entry: 1071c9c18; end: 1071c9d8b;  */

void FUN_1071c9c18(long param_1,ulong param_2,undefined8 param_3,undefined1 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010010fab4(param_2,PTR_DAT_1126a5988);
  uVar1 = param_2;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar2 = uVar1;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9a78;
  func_0x00010c101520(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if (((uVar4 & 1) == 0) && ((uVar5 & 1) == 0)) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    lVar8 = *(long *)(lVar7 + 0x18);
    lVar6 = 0;
    if (lVar8 != 0x7fffffffffffffff) {
      lVar6 = lVar8 + 1;
    }
    *(long *)(lVar7 + 0x18) = lVar6;
  }
  lVar6 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c071ae0();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  if ((int)uVar2 != 0) {
    *param_4 = 1;
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071c9d8c; end: 1071cae0f; -[SCDiscoverFeedStoryLoggingOperaPlugin operaViewDidSendEvent:page:params:] */

void FUN_1071c9d8c(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  undefined *puVar23;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = (undefined *)(param_2 + 8);
  _objc_loadWeakRetained();
  _objc_retain();
  puVar7 = puVar1;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar7;
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf63e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar23);
  _objc_release(puVar7);
  _objc_release(puVar1);
  puVar1 = PTR_DAT_1126a5990;
  _objc_retain(puVar2);
  puVar7 = puVar2;
  func_0x00010010fab4();
  iVar19 = (int)puVar1;
  _objc_release(puVar2);
  if (((int)puVar7 == 0) || (puVar2 == (undefined *)0x0)) {
    uVar5 = *(undefined8 *)(param_2 + 0xd0);
    *(undefined8 *)(param_2 + 0xd0) = 0;
LAB_1071c9f14:
    _objc_release(uVar5);
    puVar1 = PTR_PTR_1126c9460;
    func_0x00010c0f25c0(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    func_0x00010c0720c0();
    _objc_release(puVar1);
    if ((int)lVar6 == 0) {
      lVar6 = param_4;
      func_0x00010c0720c0();
      if ((int)lVar6 != 0) {
        puVar1 = param_6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar1;
        func_0x00010c067ec0();
        _objc_release(puVar1);
        iVar22 = (int)puVar7;
        if ((iVar22 != -1) && (*(long *)(param_2 + 0xf8) != (long)iVar22)) {
          *(long *)(param_2 + 0xf8) = (long)iVar22;
        }
        goto LAB_1071c9f8c;
      }
      puVar1 = PTR_PTR_1126b2338;
      func_0x00010c2612e0(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_4;
      func_0x00010c0720c0();
      _objc_release(puVar1);
      if ((int)lVar6 != 0) {
        puVar1 = PTR_PTR_1126b2348;
        func_0x00010c2612c0(PTR_PTR_1126b2348);
        _objc_retainAutoreleasedReturnValue();
        puVar23 = param_6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        puVar1 = PTR_PTR_1126c9448;
        _objc_opt_class();
        iVar19 = (int)puVar1;
        puVar1 = puVar23;
        _objc_opt_isKindOfClass();
        puVar7 = puVar23;
        if (((ulong)puVar1 & 1) == 0) {
          puVar7 = (undefined *)0x0;
        }
        _objc_retain(puVar7);
        _objc_release(puVar23);
        if (puVar7 != (undefined *)0x0) {
          puVar1 = puVar23;
          func_0x00010bf926c0();
          *(char *)(param_2 + 0x110) = (char)puVar1;
          func_0x00010bef0a00();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = *(undefined8 *)(param_2 + 0x118);
          *(undefined **)(param_2 + 0x118) = puVar23;
          _objc_release(uVar5);
        }
        goto LAB_1071c9f88;
      }
      puVar1 = PTR_PTR_1126b2ce8;
      func_0x00010bfe0dc0(PTR_PTR_1126b2ce8);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_4;
      func_0x00010c0720c0();
      _objc_release(puVar1);
      if ((int)lVar6 == 0) {
        puVar1 = PTR_PTR_1126c9a10;
        func_0x00010c06d180(PTR_PTR_1126c9a10);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = param_4;
        func_0x00010c0720c0();
        _objc_release(puVar1);
        puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if ((int)lVar6 != 0) {
          lVar6 = param_2 + 8;
          _objc_loadWeakRetained(lVar6);
          lVar8 = lVar6;
          func_0x00010c101260();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010bfcf800();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          func_0x00010c0df840();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = *(undefined8 *)(param_2 + 0x148);
          *(undefined **)(param_2 + 0x148) = puVar1;
          _objc_release(uVar5);
          _objc_release(lVar9);
          _objc_release(lVar8);
          _objc_release(lVar6);
          func_0x00010bdd8740(param_2);
        }
        lVar6 = param_4;
        func_0x000107cd420c();
        if ((int)lVar6 != 0) {
          _objc_retain(param_4);
          uVar5 = *(undefined8 *)(param_2 + 200);
          *(long *)(param_2 + 200) = param_4;
          _objc_release(uVar5);
        }
        puVar23 = *(undefined **)(param_2 + 0x58);
        puVar1 = puVar23;
        if (puVar23 == (undefined *)0x0) {
          puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c0d3c80();
        _objc_release(puVar3);
        if (puVar23 == (undefined *)0x0) {
          _objc_release(puVar1);
        }
        puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        func_0x00010bdc3a00();
        puVar23 = puVar2;
        func_0x000107d005a8();
        if (puVar23 != (undefined *)0x0) {
          puVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(puVar23);
        }
        uVar10 = *(ulong *)(param_2 + 0x58);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar23 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class();
        iVar19 = (int)puVar23;
        uVar11 = uVar10;
        _objc_opt_isKindOfClass();
        uVar4 = uVar10;
        if ((uVar11 & 1) == 0) {
          uVar4 = 0;
        }
        _objc_retain(uVar4);
        _objc_release(uVar10);
        uVar11 = uVar4;
        func_0x00010c08fa60();
        if (uVar11 == 0) {
          lVar6 = param_2 + 8;
          _objc_loadWeakRetained(lVar6);
          lVar8 = lVar6;
          func_0x00010c064160();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010bfce400();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar8);
          _objc_release(lVar6);
          lVar6 = param_2 + 8;
          _objc_loadWeakRetained();
          lVar8 = lVar6;
          func_0x00010bf63e80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar6);
          lVar6 = param_2 + 8;
          _objc_loadWeakRetained();
          lVar12 = lVar6;
          func_0x00010c101260();
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar12;
          func_0x00010bfcf800();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfecde0();
          _objc_release(lVar13);
          _objc_release(lVar12);
          _objc_release(lVar6);
          lVar6 = lVar8;
          func_0x000107d005a8();
          if (lVar6 != 0) {
            puVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar1);
            _objc_release(puVar23);
          }
          _objc_release(lVar8);
          _objc_release(lVar9);
        }
        else {
          func_0x00010c1d0640(puVar7);
        }
        puVar23 = PTR_PTR_1126b2340;
        uVar5 = param_5;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c079440();
        if ((int)puVar23 != 0) {
          func_0x00010c0ebf60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
        }
        _objc_release(uVar5);
        uVar11 = param_2;
        func_0x00010be31960();
        if ((uVar11 & 1) == 0) {
          uVar14 = *(undefined8 *)(param_2 + 0x58);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar14;
          func_0x00010c067ec0();
          _objc_release(uVar14);
          uVar11 = param_2;
          func_0x00010beb6ae0();
          uVar10 = param_2;
          func_0x00010beb6ac0();
          func_0x00010c06dca0();
          lVar6 = param_4;
          func_0x00010c0720c0();
          puVar23 = param_6;
          puVar3 = param_6;
          if ((int)lVar6 == 0) {
            lVar6 = param_4;
            func_0x00010c0720c0();
            if ((int)lVar6 != 0) {
              func_0x00010c0e00e0(param_6);
              _objc_retainAutoreleasedReturnValue();
              puVar15 = param_6;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c067fc0();
              _objc_release(puVar15);
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              puVar15 = param_6;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf885a0();
              _objc_release(puVar15);
              goto LAB_1071ca924;
            }
            lVar6 = param_4;
            func_0x00010c0720c0();
            if ((int)lVar6 != 0) {
              func_0x00010c0e00e0(param_6);
              _objc_retainAutoreleasedReturnValue();
              puVar15 = param_6;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c067fc0();
              _objc_release(puVar15);
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              puVar15 = param_6;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              puVar16 = param_6;
              func_0x00010c0e00e0(param_6);
              _objc_retainAutoreleasedReturnValue();
              puVar17 = param_6;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              puVar18 = param_6;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bdcc6a0(param_2);
              _objc_release(puVar18);
              _objc_release(puVar17);
              _objc_release(puVar16);
              _objc_release(puVar15);
              goto LAB_1071ca92c;
            }
            lVar6 = param_4;
            func_0x00010c0720c0();
            puVar23 = PTR_PTR_1126bdd28;
            if ((int)lVar6 == 0) {
              if ((int)uVar5 == 0x17) {
                if ((int)uVar11 == 0) goto LAB_1071ca940;
                puVar23 = *(undefined **)(param_2 + 0x58);
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                puVar3 = puVar23;
                func_0x00010c25d700();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar23);
                puVar23 = PTR_PTR_1126d50c8;
                _objc_alloc();
                func_0x00010c061ea0();
                _objc_retain(puVar7);
                _objc_retain(param_4);
                _objc_retain(param_5);
                _objc_retain(param_6);
                _objc_retain(puVar1);
                _objc_retain(puVar2);
                _objc_retain(puVar23);
                func_0x00010c2317a0(puVar23);
                _objc_release(puVar2);
                _objc_release(puVar1);
                _objc_release(param_6);
                _objc_release(param_5);
                _objc_release(param_4);
                _objc_release(puVar7);
                _objc_release(puVar23);
              }
              else if ((int)uVar10 == 0) {
                _objc_retain(puVar2);
                _objc_opt_class();
                iVar19 = (int)puVar23;
                puVar3 = puVar2;
                _objc_opt_isKindOfClass();
                puVar23 = puVar2;
                if (((ulong)puVar3 & 1) == 0) {
                  puVar23 = (undefined *)0x0;
                }
                _objc_retain(puVar23);
                _objc_release(puVar2);
                uVar11 = param_2;
                func_0x00010beb6aa0();
                if ((int)uVar11 == 0) goto LAB_1071ca934;
                puVar3 = puVar1;
                func_0x00010bf51e00();
                func_0x00010be14700(param_2);
              }
              else {
                puVar3 = PTR_PTR_1126d50c8;
                _objc_alloc();
                func_0x00010c061ea0();
                _objc_retain(puVar7);
                _objc_retain(param_4);
                _objc_retain(param_5);
                _objc_retain(param_6);
                _objc_retain(puVar1);
                _objc_retain(puVar2);
                _objc_retain(puVar3);
                func_0x00010c2317a0(puVar3);
                _objc_release(puVar2);
                _objc_release(puVar1);
                _objc_release(param_6);
                _objc_release(param_5);
                _objc_release(param_4);
                _objc_release(puVar7);
                puVar23 = puVar3;
              }
              _objc_release(puVar3);
            }
            else {
              puVar23 = puVar1;
              func_0x00010bf51e00(puVar1);
              func_0x00010be14700(param_2);
            }
          }
          else {
            func_0x00010c0e00e0(param_6);
            _objc_retainAutoreleasedReturnValue();
            puVar15 = param_6;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c067fc0();
            _objc_release(puVar15);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            param_1 = 0;
LAB_1071ca924:
            func_0x00010bdcbee0(param_1,param_2);
LAB_1071ca92c:
            _objc_release(puVar3);
          }
LAB_1071ca934:
          _objc_release(puVar23);
        }
LAB_1071ca940:
        _objc_release(uVar4);
      }
      else {
        puVar1 = PTR_PTR_1126b2cf0;
        func_0x00010bfe0ce0(PTR_PTR_1126b2cf0);
        _objc_retainAutoreleasedReturnValue();
        puVar23 = param_6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        puVar3 = puVar23;
        _objc_opt_isKindOfClass(puVar23,puVar1);
        puVar7 = puVar23;
        if (((ulong)puVar3 & 1) == 0) {
          puVar7 = (undefined *)0x0;
        }
        _objc_retain();
        _objc_release(puVar23);
        puVar1 = PTR_PTR_1126b2cf0;
        func_0x00010c241220(PTR_PTR_1126b2cf0);
        _objc_retainAutoreleasedReturnValue();
        puVar23 = param_6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        puVar3 = puVar23;
        _objc_opt_isKindOfClass(puVar23,puVar1);
        puVar1 = puVar23;
        if (((ulong)puVar3 & 1) == 0) {
          puVar1 = (undefined *)0x0;
        }
        _objc_retain(puVar1);
        _objc_release(puVar23);
        lVar6 = param_2 + 8;
        _objc_loadWeakRetained();
        lVar8 = lVar6;
        func_0x00010c101260();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010bf5ee40();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar9;
        func_0x00010bf5f0a0();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar12;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        lVar20 = lVar13;
        _objc_release(lVar12);
        iVar19 = (int)lVar20;
        _objc_release(lVar9);
        _objc_release(lVar8);
        _objc_release(lVar6);
        puVar23 = puVar7;
        func_0x00010c08fa60();
        if (puVar23 != (undefined *)0x0) {
          puVar23 = puVar1;
          func_0x00010c0720c0();
          if ((int)puVar23 == 0) {
            func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x168));
          }
          else {
            uVar5 = *(undefined8 *)(param_2 + 0x20);
            puVar23 = PTR_PTR_1126ce9c0;
            func_0x00010bf04780();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf7dbc0(uVar5);
            _objc_release(puVar15);
            _objc_release(puVar3);
            _objc_release(puVar23);
          }
        }
        _objc_release(lVar13);
      }
      _objc_release(puVar1);
    }
    else {
      puVar7 = *(undefined **)(param_2 + 0x100);
      func_0x00010c283040();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b25c0(0);
      _objc_release(puVar1);
    }
  }
  else {
    puVar1 = (undefined *)(param_2 + 8);
    _objc_loadWeakRetained();
    puVar23 = puVar1;
    func_0x00010c101260();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar23;
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar23);
    _objc_release(puVar1);
    iVar22 = (int)*(undefined8 *)(param_2 + 0xd0);
    func_0x00010c0720c0();
    if ((iVar22 == 0) || (uVar4 = param_2, func_0x00010be413c0(), (uVar4 & 1) == 0)) {
      uVar5 = *(undefined8 *)(param_2 + 0xd0);
      *(undefined **)(param_2 + 0xd0) = puVar7;
      goto LAB_1071c9f14;
    }
  }
LAB_1071c9f88:
  _objc_release(puVar7);
LAB_1071c9f8c:
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return;
  }
  ___stack_chk_fail();
  if (iVar19 == 0) {
    return;
  }
  uVar5 = *(undefined8 *)(param_4 + 0x20);
  lVar21 = *(long *)(param_4 + 0x30) + 8;
  _objc_loadWeakRetained(lVar21);
  lVar6 = lVar21;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8260(uVar5);
  _objc_release(lVar6);
  _objc_release(lVar21);
  func_0x00010bdcc820(*(undefined8 *)(param_4 + 0x30));
  uVar5 = *(undefined8 *)(param_4 + 0x30);
  uVar14 = *(undefined8 *)(param_4 + 0x50);
  func_0x00010bf51e00(uVar14);
  func_0x00010be14700(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar14);
  return;
}


