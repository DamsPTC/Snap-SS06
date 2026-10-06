/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107015fa0; end: 107015fdb; -[SCCameraOverlayView prepareForTransitionOut] */

void FUN_107015fa0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf2b240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c109520();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 107015fdc; end: 10701607f; -[SCCameraOverlayView beginTransitionOut] */

void FUN_107015fdc(undefined8 param_1)

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
  uVar3 = 0;
  func_0x00010c1677c0(0);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c138480(param_1);
  func_0x00010bde9840(param_1);
  uVar1 = param_1;
  func_0x00010bf2b240(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17f60(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 107016080; end: 1070160af; -[SCCameraOverlayView onFeatureStartsLoading] */

void FUN_107016080(undefined8 param_1)

{
  func_0x00010c09d100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24dbc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070160b0; end: 1070160b3; -[SCCameraOverlayView onFeatureCompletesLoading] */

void FUN_1070160b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8c6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeLoadingIndicator_112580b58);
  return;
}



/* Entry: 1070160b4; end: 1070160d7; -[SCCameraOverlayView onFeatureAbortsLoading] */

void FUN_1070160b4(undefined8 param_1)

{
  func_0x00010be8c6e0();
                    /* WARNING: Could not recover jumptable at 0x00010be8c730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeLoadingTimeDebugLabel_112580b68);
  return;
}



/* Entry: 1070160d8; end: 1070160e7; -[SCCameraOverlayView cameraViewFinderTopAnchor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070160d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c274210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127627e0),PTR_s_topAnchor_11267aaa8);
  return;
}



/* Entry: 1070160e8; end: 10701617b; -[SCCameraOverlayView _removeLoadingIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070160e8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127628dc;
  lVar1 = *(long *)(param_1 + lVar3);
  if ((lVar1 != 0) && (func_0x00010c06c0e0(), (int)lVar1 != 0)) {
    func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar3));
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3));
    lVar1 = (long)_DAT_1127628e0;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar1));
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar1);
    *(undefined8 *)(param_1 + lVar1) = 0;
    _objc_release(uVar2);
    func_0x00010beb9a80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setUserInteractionEnabled__112665468,1);
    return;
  }
  return;
}



/* Entry: 10701617c; end: 1070166c3; -[SCCameraOverlayView loadingIndicatorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701617c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
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
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  long lVar28;
  undefined8 uVar29;
  undefined1 **ppuVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  undefined1 *puStack_1a0;
  undefined *puStack_198;
  
  lVar28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar34 = (long)_DAT_1127628dc;
  ppuVar30 = *(undefined1 ***)(param_5 + lVar34);
  if (ppuVar30 == (undefined1 **)0x0) {
    lVar32 = (long)_DAT_11276283c;
    lVar2 = param_5 + lVar32;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c0926e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c090840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar32 = param_5 + lVar32;
    _objc_loadWeakRetained();
    lVar2 = lVar32;
    func_0x00010c0926e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf099a0();
    lVar33 = lVar4;
    if ((int)lVar3 == 0 || lVar4 == 0) {
      lVar33 = *(long *)(param_5 + _DAT_112762830);
    }
    _objc_retain(lVar33);
    _objc_release(lVar2);
    _objc_release(lVar32);
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar31 = (long)_DAT_1127628e0;
    uVar29 = *(undefined8 *)(param_5 + lVar31);
    *(undefined **)(param_5 + lVar31) = puVar5;
    _objc_release(uVar29);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_5 + lVar31));
    _objc_release(puVar5);
    func_0x00010c1677c0(0x3fe0000000000000,*(undefined8 *)(param_5 + lVar31));
    func_0x00010c219b60(*(undefined8 *)(param_5 + lVar31));
    puVar5 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    uVar29 = *(undefined8 *)(param_5 + lVar34);
    *(undefined **)(param_5 + lVar34) = puVar5;
    _objc_release(uVar29);
    func_0x00010c1a8560(*(undefined8 *)(param_5 + lVar34));
    func_0x00010c23d620(*(undefined8 *)(param_5 + lVar34));
    func_0x00010c219b60(*(undefined8 *)(param_5 + lVar34));
    func_0x00010befbb60(*(undefined8 *)(param_5 + lVar31));
    func_0x00010c066fa0(lVar33);
    puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar6 = *(undefined8 *)(param_5 + lVar34);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar34));
    uVar29 = uVar6;
    func_0x00010bf49420(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_5 + lVar34);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_3;
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar34));
    uVar8 = uVar7;
    func_0x00010bf49420();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_5 + lVar34);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_5 + lVar31);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_5 + lVar34);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_5 + lVar31);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_5 + lVar31);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar33;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_5 + lVar31);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar32 = lVar33;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(param_5 + lVar31);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar33;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar19;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(param_5 + lVar31);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar31 = lVar33;
    func_0x00010bf1ff80(lVar33);
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar21;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar5);
    _objc_release(puVar23);
    _objc_release(uVar22);
    _objc_release(lVar31);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(lVar3);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(lVar32);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(lVar2);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar29);
    _objc_release(uVar6);
    func_0x00010c08cdc0(lVar33);
    _objc_release(lVar33);
    _CACurrentMediaTime();
    *(undefined8 *)(param_5 + _DAT_1127628e4) = param_1;
    param_7 = 0;
    func_0x00010c21e900(param_5);
    _objc_release(lVar4);
    ppuVar30 = *(undefined1 ***)(param_5 + lVar34);
  }
  puVar24 = (undefined1 *)ppuVar30;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar28) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  ppuVar30 = &puStack_1a0;
  _objc_retain(param_7);
  if (*(long *)(puVar24 + _DAT_1127628dc) == 0) {
LAB_1070167ec:
    iVar1 = (int)*(undefined8 *)(puVar24 + _DAT_112762824);
    func_0x00010bfa5ee0();
    if ((iVar1 == 0) || (puVar25 = puVar24, func_0x00010c082800(), ((ulong)puVar25 & 1) != 0)) {
      puStack_198 = PTR_PTR_1126f83c8;
      puStack_1a0 = puVar24;
      _objc_msgSendSuper2(param_1,param_2,&puStack_1a0,PTR_s_hitTest_withEvent__1125d6850,param_7);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bdca580(param_1,param_2,puVar24);
      _objc_retainAutoreleasedReturnValue();
      ppuVar30 = (undefined1 **)puVar24;
    }
  }
  else {
    lVar28 = (long)_DAT_11276283c;
    puVar25 = puVar24 + lVar28;
    _objc_loadWeakRetained();
    puVar26 = puVar25;
    func_0x00010c0926e0();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar26;
    func_0x00010bf099a0();
    _objc_release(puVar26);
    _objc_release(puVar25);
    if (((ulong)puVar27 & 1) == 0) goto LAB_1070167ec;
    puVar25 = puVar24 + lVar28;
    _objc_loadWeakRetained();
    puVar26 = puVar25;
    func_0x00010c0926e0();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar26;
    func_0x00010c102c80(param_1,param_2);
    _objc_release(puVar26);
    _objc_release(puVar25);
    if ((int)puVar27 == 0) {
      ppuVar30 = (undefined1 **)(undefined1 *)0x0;
    }
    else {
      puVar24 = puVar24 + lVar28;
      _objc_loadWeakRetained(puVar24);
      puVar25 = puVar24;
      func_0x00010c0926e0();
      _objc_retainAutoreleasedReturnValue();
      puVar26 = puVar25;
      func_0x00010c090840();
      _objc_retainAutoreleasedReturnValue();
      ppuVar30 = (undefined1 **)puVar26;
      func_0x00010bfe3a40(param_1,param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar26);
      _objc_release(puVar25);
      _objc_release(puVar24);
    }
  }
  _objc_release(param_7);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar30);
  return;
}



/* Entry: 1070166c4; end: 10701688f; -[SCCameraOverlayView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070166c4(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  long lVar6;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_60;
  _objc_retain(param_5);
  if (*(long *)(param_3 + _DAT_1127628dc) != 0) {
    lVar6 = (long)_DAT_11276283c;
    puVar2 = param_3 + lVar6;
    _objc_loadWeakRetained();
    puVar3 = puVar2;
    func_0x00010c0926e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf099a0();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (((ulong)puVar4 & 1) != 0) {
      puVar2 = param_3 + lVar6;
      _objc_loadWeakRetained();
      puVar3 = puVar2;
      func_0x00010c0926e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c102c80(param_1,param_2);
      _objc_release(puVar3);
      _objc_release(puVar2);
      if ((int)puVar4 == 0) {
        param_3 = (undefined1 *)0x0;
      }
      else {
        puVar2 = param_3 + lVar6;
        _objc_loadWeakRetained(puVar2);
        puVar3 = puVar2;
        func_0x00010c0926e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c090840();
        _objc_retainAutoreleasedReturnValue();
        param_3 = puVar4;
        func_0x00010bfe3a40(param_1,param_2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(puVar2);
      }
      goto LAB_107016860;
    }
  }
  iVar1 = (int)*(undefined8 *)(param_3 + _DAT_112762824);
  func_0x00010bfa5ee0();
  if ((iVar1 == 0) || (puVar2 = param_3, func_0x00010c082800(), ((ulong)puVar2 & 1) != 0)) {
    puStack_58 = PTR_PTR_1126f83c8;
    puStack_60 = param_3;
    _objc_msgSendSuper2(param_1,param_2,&puStack_60,PTR_s_hitTest_withEvent__1125d6850,param_5);
    _objc_retainAutoreleasedReturnValue();
    param_3 = (undefined1 *)ppuVar5;
  }
  else {
    func_0x00010bdca580(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_107016860:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 107016890; end: 107016a83; -[SCCameraOverlayView _alwaysInteractiveHitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107016890(double param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  double dVar14;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar14 = param_1;
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c074c20();
  if (((uVar1 & 1) != 0) || (func_0x00010bf01b40(param_3), dVar14 < 0.01)) {
    lVar10 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_3 + (long)_DAT_112762894) != 0) {
      func_0x00010befa120(puVar2);
    }
    lVar13 = *(long *)(param_3 + (long)_DAT_112762890);
    func_0x00010bfe6360();
    _objc_retainAutoreleasedReturnValue();
    if (lVar13 != 0) {
      func_0x00010befa120(puVar2,param_4,lVar13);
    }
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    _objc_retain(puVar2);
    puVar3 = puVar2;
    func_0x00010bf52a60(puVar2,param_4,&uStack_140,auStack_f8,0x10);
    if (puVar3 != (undefined *)0x0) {
      lVar11 = *plStack_130;
      do {
        puVar12 = (undefined *)0x0;
        do {
          if (*plStack_130 != lVar11) {
            _objc_enumerationMutation(puVar2);
          }
          lVar10 = *(long *)(lStack_138 + (long)puVar12 * 8);
          func_0x00010bf512a0(param_1,param_2,param_3,param_4,lVar10);
          func_0x00010bfe3a40(lVar10,param_4,param_5);
          _objc_retainAutoreleasedReturnValue();
          if (lVar10 != 0) goto LAB_107016a20;
          puVar12 = puVar12 + 1;
        } while (puVar3 != puVar12);
        puVar3 = puVar2;
        func_0x00010bf52a60(puVar2,param_4,&uStack_140,auStack_f8,0x10);
      } while (puVar3 != (undefined *)0x0);
    }
    lVar10 = 0;
LAB_107016a20:
    _objc_release(puVar2);
    _objc_release(lVar13);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar13 = (long)_DAT_1127628e8;
    lVar10 = *(long *)(param_5 + lVar13);
    if (lVar10 == 0) {
      puVar2 = PTR_PTR_1126aea58;
      _objc_opt_new();
      uVar9 = *(undefined8 *)(param_5 + lVar13);
      *(undefined **)(param_5 + lVar13) = puVar2;
      _objc_release(uVar9);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)(param_5 + lVar13),param_4,puVar2);
      _objc_release(puVar2);
      func_0x00010c219b60(*(undefined8 *)(param_5 + lVar13),param_4,0);
      lVar11 = (long)_DAT_112762830;
      func_0x00010befbb60(*(undefined8 *)(param_5 + lVar11),param_4,
                          *(undefined8 *)(param_5 + lVar13));
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar4 = *(undefined8 *)(param_5 + lVar13);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_5 + lVar11);
      func_0x00010bf34860(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar4;
      func_0x00010bf493a0(uVar4,param_4,uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_5 + lVar13);
      uStack_1b8 = uVar9;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_5 + lVar11);
      func_0x00010bf348e0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010bf493a0(uVar6,param_4,uVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_1b0 = uVar8;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_1b8,2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar2,param_4,puVar3);
      _objc_release(puVar3);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar9);
      _objc_release(uVar5);
      _objc_release(uVar4);
      lVar10 = *(long *)(param_5 + lVar13);
    }
    _objc_retain(lVar10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
      ___stack_chk_fail();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar10);
  return;
}



/* Entry: 107016a84; end: 107016c6f; -[SCCameraOverlayView loadingTimeDebugLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107016a84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_1127628e8;
  lVar9 = *(long *)(param_1 + lVar10);
  if (lVar9 == 0) {
    puVar1 = PTR_PTR_1126aea58;
    _objc_opt_new();
    uVar8 = *(undefined8 *)(param_1 + lVar10);
    *(undefined **)(param_1 + lVar10) = puVar1;
    _objc_release(uVar8);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar10),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10),param_2,0);
    lVar9 = (long)_DAT_112762830;
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar9),param_2,*(undefined8 *)(param_1 + lVar10));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010bf34860(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010bf493a0(uVar2,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar10);
    uStack_78 = uVar8;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010bf348e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf493a0(uVar4,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_78,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar8);
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar9 = *(long *)(param_1 + lVar10);
  }
  _objc_retain(lVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar9);
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 107016c70; end: 107016c73; -[SCCameraOverlayView _showLoadingTimeOnDebugLabel] */

void FUN_107016c70(void)

{
  return;
}



/* Entry: 107016c74; end: 107016cb7; -[SCCameraOverlayView _removeLoadingTimeDebugLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107016c74(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127628e8;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c12c960();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107016cb8; end: 107016cc7; -[SCCameraOverlayView galleryIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107016cb8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276289c);
}



/* Entry: 107016cc8; end: 107016d07; -[SCCameraOverlayView setGalleryIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107016cc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276289c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107016d08; end: 107016d47; -[SCCameraOverlayView setLongPressOnCameraTimerGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107016d08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762858;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107016d48; end: 107016d57; -[SCCameraOverlayView topReplicatorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107016d48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127628cc);
}



/* Entry: 107016d58; end: 107016d97; -[SCCameraOverlayView setTopReplicatorView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107016d58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127628cc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107016d98; end: 107016db7; -[SCCameraOverlayView gestureRecognizerDelegateForLensTouchProcessor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107016d98(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276283c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107016db8; end: 107016dc7; -[SCCameraOverlayView bottomReplicatorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107016db8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127628d4);
}



/* Entry: 107016dc8; end: 107016e07; -[SCCameraOverlayView setBottomReplicatorView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107016dc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127628d4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107016e08; end: 107016e17; -[SCCameraOverlayView shouldIgnoreVisibilityChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107016e08(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127628ac);
}



/* Entry: 107016e18; end: 107016e27; -[SCCameraOverlayView setShouldIgnoreVisibilityChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107016e18(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127628ac) = param_3;
  return;
}



/* Entry: 107016e28; end: 107016e37; -[SCCameraOverlayView cameraTimerLayoutGuide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107016e28(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127627e4);
}



/* Entry: 107016e38; end: 107016e77; -[SCCameraOverlayView setZoomFactorsViewContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107016e38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276285c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107016e78; end: 107016e87; -[SCCameraOverlayView hidableMediaPickerButtonContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107016e78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762860);
}



/* Entry: 107016e88; end: 107016ec7; -[SCCameraOverlayView setHidableMediaPickerButtonContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107016e88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762860;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107016ec8; end: 107016ed7; -[SCCameraOverlayView hidableLensExplorerButtonContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107016ec8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762864);
}



/* Entry: 107016ed8; end: 107016f17; -[SCCameraOverlayView setHidableLensExplorerButtonContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107016ed8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762864;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107016f18; end: 107016f27; -[SCCameraOverlayView hidableARBarContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107016f18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762868);
}



/* Entry: 107016f28; end: 107016f67; -[SCCameraOverlayView setHidableARBarContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107016f28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762868;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107016f68; end: 107016f77; -[SCCameraOverlayView hidableHandsFreeInterstitialFooterContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107016f68(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276286c);
}



/* Entry: 107016f78; end: 107016fb7; -[SCCameraOverlayView setHidableHandsFreeInterstitialFooterContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107016f78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276286c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107016fb8; end: 107016fc7; -[SCCameraOverlayView scanVerticalToolbarContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107016fb8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127628ec);
}



/* Entry: 107016fc8; end: 107016fd7; -[SCCameraOverlayView containerLayoutGuide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107016fc8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127628f0);
}



/* Entry: 107016fd8; end: 107016fe7; -[SCCameraOverlayView memoriesSideButtonTooltipContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107016fd8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127628f4);
}



/* Entry: 107016fe8; end: 107016ff7; -[SCCameraOverlayView shouldDisplayVideoHelp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107016fe8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127628a0);
}



/* Entry: 107016ff8; end: 107017037; -[SCCameraOverlayView setCameraTimer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107016ff8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762838;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107017038; end: 107017047; -[SCCameraOverlayView bottomConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107017038(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127628f8);
}



/* Entry: 107017048; end: 107017087; -[SCCameraOverlayView setBottomConstraint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107017048(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127628f8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107017088; end: 107017097; -[SCCameraOverlayView lensNavigationItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107017088(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127628fc);
}



/* Entry: 107017098; end: 1070170d7; -[SCCameraOverlayView setLensNavigationItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107017098(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127628fc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070170d8; end: 107017117; -[SCCameraOverlayView setHovaNavigationLineSeparator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070170d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762900;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107017118; end: 107017127; -[SCCameraOverlayView UIAutomationUsedElements] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107017118(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762904);
}



/* Entry: 107017128; end: 107017167; -[SCCameraOverlayView setUIAutomationUsedElements:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107017128(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762904;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107017168; end: 1070171a7; -[SCCameraOverlayView setHidableViewContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107017168(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762830;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070171a8; end: 1070171b7; -[SCCameraOverlayView cameraOverlayFooterView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070171a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762844);
}



/* Entry: 1070171b8; end: 1070171f7; -[SCCameraOverlayView setCameraOverlayFooterView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070171b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762844;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070171f8; end: 107017237; -[SCCameraOverlayView setReplyCameraBackButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070171f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762890;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107017238; end: 107017247; -[SCCameraOverlayView permissionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107017238(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762894);
}



/* Entry: 107017248; end: 107017287; -[SCCameraOverlayView setPermissionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107017248(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762894;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107017288; end: 1070172c7; -[SCCameraOverlayView setProfileButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107017288(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762908;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070172c8; end: 107017307; -[SCCameraOverlayView setLensesActivationTooltip:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070172c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762898;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107017308; end: 107017327; -[SCCameraOverlayView longPressAnimationView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107017308(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276290c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107017328; end: 10701733b; -[SCCameraOverlayView setLongPressAnimationView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107017328(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276290c,param_3);
  return;
}



/* Entry: 10701733c; end: 10701735b; -[SCCameraOverlayView longPressParticleView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701733c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112762910);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10701735c; end: 10701736f; -[SCCameraOverlayView setLongPressParticleView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701735c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112762910,param_3);
  return;
}



/* Entry: 107017370; end: 10701737f; -[SCCameraOverlayView timerForHideProfileTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107017370(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762914);
}



/* Entry: 107017380; end: 1070173bf; -[SCCameraOverlayView setTimerForHideProfileTooltip:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107017380(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112762914;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1070173c0; end: 1070177e3; -[SCCameraOverlayView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070173c0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127628c0,0);
  _objc_storeStrong(param_1 + _DAT_11276291c,0);
  _objc_storeStrong(param_1 + _DAT_1127628c4,0);
  _objc_storeStrong(param_1 + _DAT_112762918,0);
  _objc_storeStrong(param_1 + _DAT_112762914,0);
  _objc_destroyWeak(param_1 + _DAT_112762910);
  _objc_destroyWeak(param_1 + _DAT_11276290c);
  _objc_storeStrong(param_1 + _DAT_112762898,0);
  _objc_storeStrong(param_1 + _DAT_112762908,0);
  _objc_storeStrong(param_1 + _DAT_112762894,0);
  _objc_storeStrong(param_1 + _DAT_112762890,0);
  _objc_storeStrong(param_1 + _DAT_112762844,0);
  _objc_storeStrong(param_1 + _DAT_112762830,0);
  _objc_storeStrong(param_1 + _DAT_112762904,0);
  _objc_storeStrong(param_1 + _DAT_112762900,0);
  _objc_storeStrong(param_1 + _DAT_1127628fc,0);
  _objc_storeStrong(param_1 + _DAT_1127628f8,0);
  _objc_storeStrong(param_1 + _DAT_112762838,0);
  _objc_storeStrong(param_1 + _DAT_1127628f4,0);
  _objc_storeStrong(param_1 + _DAT_1127628f0,0);
  _objc_storeStrong(param_1 + _DAT_1127628ec,0);
  _objc_storeStrong(param_1 + _DAT_11276286c,0);
  _objc_storeStrong(param_1 + _DAT_112762868,0);
  _objc_storeStrong(param_1 + _DAT_112762864,0);
  _objc_storeStrong(param_1 + _DAT_112762860,0);
  _objc_storeStrong(param_1 + _DAT_11276285c,0);
  _objc_storeStrong(param_1 + _DAT_1127627e4,0);
  _objc_storeStrong(param_1 + _DAT_1127627e0,0);
  _objc_storeStrong(param_1 + _DAT_1127628d4,0);
  _objc_storeStrong(param_1 + _DAT_112762818,0);
  _objc_storeStrong(param_1 + _DAT_1127628cc,0);
  _objc_storeStrong(param_1 + _DAT_11276289c,0);
  _objc_storeStrong(param_1 + _DAT_11276282c,0);
  _objc_storeStrong(param_1 + _DAT_112762824,0);
  _objc_storeStrong(param_1 + _DAT_112762820,0);
  _objc_storeStrong(param_1 + _DAT_11276281c,0);
  _objc_storeStrong(param_1 + _DAT_112762870,0);
  _objc_storeStrong(param_1 + _DAT_112762810,0);
  _objc_storeStrong(param_1 + _DAT_112762814,0);
  _objc_storeStrong(param_1 + _DAT_11276280c,0);
  _objc_storeStrong(param_1 + _DAT_112762828,0);
  _objc_storeStrong(param_1 + _DAT_1127628d8,0);
  _objc_storeStrong(param_1 + _DAT_112762834,0);
  _objc_storeStrong(param_1 + _DAT_112762804,0);
  _objc_storeStrong(param_1 + _DAT_1127627f0,0);
  _objc_storeStrong(param_1 + _DAT_1127628d0,0);
  _objc_storeStrong(param_1 + _DAT_1127628c8,0);
  _objc_storeStrong(param_1 + _DAT_1127628a8,0);
  _objc_storeStrong(param_1 + _DAT_1127628a4,0);
  _objc_storeStrong(param_1 + _DAT_1127628e8,0);
  _objc_storeStrong(param_1 + _DAT_1127628dc,0);
  _objc_storeStrong(param_1 + _DAT_1127628e0,0);
  _objc_storeStrong(param_1 + _DAT_112762800,0);
  _objc_storeStrong(param_1 + _DAT_1127627fc,0);
  _objc_storeStrong(param_1 + _DAT_112762858,0);
  _objc_storeStrong(param_1 + _DAT_11276284c,0);
  _objc_storeStrong(param_1 + _DAT_112762850,0);
  _objc_storeStrong(param_1 + _DAT_112762840,0);
  _objc_destroyWeak(param_1 + _DAT_11276283c);
  _objc_storeStrong(param_1 + _DAT_11276288c,0);
  _objc_storeStrong(param_1 + _DAT_112762874,0);
  _objc_storeStrong(param_1 + _DAT_112762884,0);
  _objc_storeStrong(param_1 + _DAT_112762880,0);
  _objc_storeStrong(param_1 + _DAT_11276287c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127627e8,0);
  return;
}



/* Entry: 1070177e4; end: 107017887; -[SCCameraPermissionView initWithDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1070177e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f83d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_30,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112762920),param_3);
    func_0x00010c1a7f60(puVar1);
    func_0x00010bdd5f20(puVar1);
    func_0x00010c1c8c60(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107017888; end: 107017dbf; -[SCCameraPermissionView _buildContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107017888(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010be36a80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar18 = (long)_DAT_112762924;
  uVar15 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar2;
  _objc_release(uVar15);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar18));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar18));
  _objc_release(puVar2);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar18));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar18));
  puVar2 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  lVar19 = (long)_DAT_112762928;
  uVar15 = *(undefined8 *)(param_1 + lVar19);
  *(undefined **)(param_1 + lVar19) = puVar2;
  _objc_release(uVar15);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar19));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar19));
  _objc_release(puVar2);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar19));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar19));
  puVar2 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_11276292c;
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar2;
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c20eaa0(uVar15);
  uVar16 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010b0aee04();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar16);
  _objc_release(uVar15);
  _objc_initWeak(auStack_c0,param_1);
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  _objc_copyWeak(auStack_c8,auStack_c0);
  func_0x00010c1d3960(uVar15);
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  uStack_88 = *(undefined8 *)(param_1 + lVar18);
  uStack_80 = *(undefined8 *)(param_1 + lVar19);
  uStack_78 = *(undefined8 *)(param_1 + lVar17);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_90 = lVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3fe0();
  _objc_release(puVar2);
  func_0x00010c219b60(puVar3);
  func_0x00010c16e060(puVar3);
  func_0x00010c166c00(puVar3);
  func_0x00010c1887e0(0x4036000000000000,puVar3);
  func_0x00010c1887e0(0x4028000000000000,puVar3);
  func_0x00010c1887e0(0x4038000000000000,puVar3);
  func_0x00010befbb60(param_1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar17 = param_1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010bf49420(0x4072800000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  lStack_b8 = lVar18;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf493c0(0x403c000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  puStack_b0 = puVar5;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf493c0(0xc03c000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar3;
  puStack_a8 = puVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf493c0(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar3;
  puStack_a0 = puVar11;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bf493c0(0xc038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar13;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(param_1);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(lVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar19);
  _objc_release(puVar4);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_c0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_c0);
  __Unwind_Resume(lVar1);
  lVar1 = lVar1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be00ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107017dc0; end: 107017deb;  */

void FUN_107017dc0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107017dec; end: 1070182a7; -[SCCameraPermissionView _iconRow] */

/* WARNING: Possible PIC construction at 0x000107018450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107018358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010701835c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107017dec(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  undefined8 uVar22;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar18 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c266fa0(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60();
  _objc_release(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c266fa0(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60();
  _objc_release(puVar2);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar2 != (undefined *)0x0) {
    puVar21 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar4);
      }
      uVar22 = *(undefined8 *)((long)puVar21 * 8);
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216160(uVar22);
      _objc_release(puVar5);
      func_0x00010c182220(uVar22);
      func_0x00010c219b60(uVar22);
      puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar6 = uVar22;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf49420(0x4041000000000000);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar22;
      func_0x00010bf49420(0x4041000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar5);
      _objc_release(puVar9);
      _objc_release(uVar8);
      _objc_release(uVar22);
      _objc_release(uVar7);
      _objc_release(uVar6);
      puVar21 = puVar21 + 1;
    } while (puVar2 != puVar21);
    puVar2 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3fe0();
  _objc_release(puVar2);
  func_0x00010c219b60(puVar4);
  func_0x00010c16e060(puVar4);
  func_0x00010c207380(0x402c000000000000,puVar4);
  func_0x00010c166c00(puVar4);
  puVar21 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  func_0x00010c219b60();
  func_0x00010befbb60(puVar21);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar5 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar21;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar21;
  func_0x00010bf1ff80(puVar21);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar21;
  func_0x00010bf34860(puVar21);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar17;
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar21);
    return;
  }
  ___stack_chk_fail();
  if (puVar19 == *(undefined **)(puVar18 + _DAT_112762930)) {
    return;
  }
  *(undefined **)(puVar18 + _DAT_112762930) = puVar19;
  if (1 < (long)puVar19) {
    puVar2 = puVar18;
    if (puVar19 + -2 < (undefined *)0x2) {
      func_0x00010b0aed74();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(puVar18 + _DAT_112762924));
      _objc_release(puVar2);
      func_0x00010b0aed8c();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (puVar19 == (undefined *)0x4) {
      func_0x00010b0aeda4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(puVar18 + _DAT_112762924));
      _objc_release(puVar2);
      func_0x00010b0aedbc();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (puVar19 != (undefined *)0x5) goto code_r0x00010c1a7f60;
      func_0x00010b0aedd4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(puVar18 + _DAT_112762924));
      _objc_release(puVar2);
      func_0x00010b0aedec();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c212f20(*(undefined8 *)(puVar18 + _DAT_112762928));
    _objc_release(puVar2);
    puVar18 = *(undefined **)(puVar18 + _DAT_11276292c);
  }
code_r0x00010c1a7f60:
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar18,PTR_s_setHidden__1126479f8);
  return;
}



/* Entry: 1070182a8; end: 10701846b; -[SCCameraPermissionView setMode:] */

/* WARNING: Possible PIC construction at 0x000107018450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107018358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010701835c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070182a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_3 == *(long *)(param_1 + _DAT_112762930)) {
    return;
  }
  *(long *)(param_1 + _DAT_112762930) = param_3;
  if (param_3 < 2) {
    if (param_3 == 0) {
      uVar2 = 1;
      goto code_r0x00010c1a7f60;
    }
    if (param_3 == 1) {
      uVar2 = 1;
      goto code_r0x00010c1a7f60;
    }
LAB_107018454:
    uVar2 = 0;
  }
  else {
    lVar1 = param_1;
    if (param_3 - 2U < 2) {
      func_0x00010b0aed74();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112762924));
      _objc_release(lVar1);
      func_0x00010b0aed8c();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = 0;
    }
    else {
      if (param_3 == 4) {
        func_0x00010b0aeda4();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112762924));
        _objc_release(lVar1);
        func_0x00010b0aedbc();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (param_3 != 5) goto LAB_107018454;
        func_0x00010b0aedd4();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112762924));
        _objc_release(lVar1);
        func_0x00010b0aedec();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar2 = 1;
    }
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112762928));
    _objc_release(lVar1);
    param_1 = *(long *)(param_1 + _DAT_11276292c);
  }
code_r0x00010c1a7f60:
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHidden__1126479f8,uVar2);
  return;
}



/* Entry: 10701846c; end: 1070184b7; -[SCCameraPermissionView _didTapAllow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701846c(long param_1)

{
  param_1 = param_1 + _DAT_112762920;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf2a1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070184b8; end: 107018513; -[SCCameraPermissionView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070184b8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276292c,0);
  _objc_storeStrong(param_1 + _DAT_112762928,0);
  _objc_storeStrong(param_1 + _DAT_112762924,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112762920);
  return;
}



/* Entry: 107018514; end: 10701859b; -[SCCameraTopLeftContainer initWithCameraContainerView:] */

undefined1 * FUN_107018514(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f83d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10701859c; end: 1070188a7; -[SCCameraTopLeftContainer stackView] */

void FUN_10701859c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = *(undefined **)(param_1 + 0x10);
  if (puVar11 == (undefined *)0x0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    _objc_release();
    puVar11 = (undefined *)0x0;
    if (lVar1 != 0) {
      puVar11 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
      _objc_opt_new();
      func_0x00010c17d4c0();
      func_0x00010c16e060(puVar11);
      func_0x00010c207380(0x4020000000000000,puVar11);
      func_0x00010c166c00(puVar11);
      func_0x00010c1fbe00(puVar11);
      lVar1 = param_1 + 8;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010bfe12e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(lVar2);
      _objc_release(lVar1);
      func_0x00010c219b60(puVar11);
      lVar1 = param_1 + 8;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010c131ac0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c06f880();
      _objc_release(lVar2);
      _objc_release(lVar1);
      puVar4 = puVar11;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1 + 8;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      if ((int)lVar3 == 0) {
        func_0x00010bfe12e0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c149040();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = 0x4010000000000000;
      }
      else {
        func_0x00010c131ac0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = 0x4030000000000000;
      }
      puVar6 = puVar4;
      func_0x00010bf493c0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar7 = puVar11;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1 + 8;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010bfe12e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf493c0(0x4020000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar4);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(puVar7);
      _objc_retain(puVar11);
      uVar12 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar11;
      _objc_release(uVar12);
      _objc_release(puVar6);
    }
  }
  else {
    _objc_retain(puVar11);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c24d270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1070188a8; end: 1070188ab; -[SCCameraTopLeftContainer containerView] */

void FUN_1070188a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24d270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stackView_112670ec0);
  return;
}



/* Entry: 1070188ac; end: 107018907; -[SCCameraTopLeftContainer count] */

undefined8 FUN_1070188ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c24d260();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107018908; end: 1070189bf; -[SCCameraTopLeftContainer appendSubview:] */

void FUN_107018908(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 in_d3;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_1;
    func_0x00010c24d260(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6d60();
    _objc_release(param_3);
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c24d260(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    func_0x00010c0df720(in_d3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1070189c0; end: 107018a7b; -[SCCameraTopLeftContainer prependSubview:] */

void FUN_1070189c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 in_d3;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_1;
    func_0x00010c24d260(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066580();
    _objc_release(param_3);
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c24d260(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    func_0x00010c0df720(in_d3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107018a7c; end: 107018a83; -[SCCameraTopLeftContainer containerHeightObservable] */

undefined8 FUN_107018a7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107018a84; end: 107018abb; -[SCCameraTopLeftContainer .cxx_destruct] */

void FUN_107018a84(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107018abc; end: 107018ad3;  */

void FUN_107018abc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e98af8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e98af8,
                      &PTR____CFConstantStringClassReference_110e98ad8,0);
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



/* Entry: 107018ad4; end: 107018b57; -[SCLongPressGestureRecognizer reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107018ad4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f83e0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_reset_11262ba18);
  lVar1 = (long)_DAT_112762950;
  uVar2 = *(undefined8 *)PTR__CGPointZero_110347540;
  ((undefined8 *)(param_1 + lVar1))[1] = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  *(undefined8 *)(param_1 + _DAT_112762954) = 0;
  *(undefined8 *)(param_1 + _DAT_112762958) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + _DAT_11276295c) = 0x3ff0000000000000;
  func_0x00010c199ea0(param_1);
  return;
}



/* Entry: 107018b58; end: 107018d2b; -[SCLongPressGestureRecognizer touchesBegan:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107018b58(undefined8 param_1,double param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  double *pdVar1;
  bool bVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 *puStack_380;
  undefined *puStack_378;
  undefined1 **ppuStack_370;
  code *pcStack_368;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  long lStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2d8;
  undefined *puStack_2d0;
  long lStack_1c8;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar5 = &uStack_140;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puStack_f0 = PTR_PTR_1126f83e0;
  lStack_f8 = param_3;
  _objc_msgSendSuper2(&lStack_f8,PTR_s_touchesBegan_withEvent__11267b780,param_5,param_6);
  lVar7 = (long)_DAT_112762954;
  dVar12 = *(double *)(param_3 + lVar7);
  if (dVar12 <= 0.0) {
    lVar6 = (long)_DAT_112762950;
    lVar9 = param_3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_3);
    *(double *)(param_3 + lVar6) = dVar12;
    ((double *)(param_3 + lVar6))[1] = param_2;
    _objc_release(lVar9);
    _CACurrentMediaTime();
    *(double *)(param_3 + lVar7) = dVar12;
  }
  lVar9 = (long)_DAT_112762958;
  *(undefined8 *)(param_3 + lVar9) = 0x3ff0000000000000;
  dVar12 = 0.0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_5);
  puVar4 = auStack_e8;
  lVar7 = param_5;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar6 = *plStack_130;
    do {
      lVar10 = 0;
      do {
        if (*plStack_130 != lVar6) {
          _objc_enumerationMutation(param_5);
        }
        uVar8 = *(undefined8 *)(lStack_138 + lVar10 * 8);
        func_0x00010c0c3600(uVar8);
        dVar14 = *(double *)(param_3 + _DAT_11276295c);
        if (dVar14 <= dVar12) {
          dVar14 = dVar12;
        }
        *(double *)(param_3 + _DAT_11276295c) = dVar14;
        func_0x00010bfb4900(uVar8);
        dVar12 = *(double *)(param_3 + lVar9);
        if (*(double *)(param_3 + lVar9) <= dVar14) {
          dVar12 = dVar14;
        }
        *(double *)(param_3 + lVar9) = dVar12;
        lVar10 = lVar10 + 1;
      } while (lVar7 != lVar10);
      puVar4 = auStack_e8;
      lVar7 = param_5;
      puVar5 = &uStack_140;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_107018d2c;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  puStack_2d0 = PTR_PTR_1126f83e0;
  lStack_2d8 = param_5;
  _objc_msgSendSuper2(&lStack_2d8,PTR_s_touchesMoved_withEvent__11252ca58,puVar5,puVar4);
  lVar7 = (long)_DAT_112762958;
  *(undefined8 *)(param_5 + lVar7) = 0x3ff0000000000000;
  dVar12 = 0.0;
  lStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  plStack_310 = (long *)0x0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  _objc_retain(puVar5);
  puVar4 = (undefined1 *)puVar5;
  func_0x00010bf52a60();
  if (puVar4 != (undefined1 *)0x0) {
    lVar9 = *plStack_310;
    do {
      puVar11 = (undefined1 *)0x0;
      do {
        if (*plStack_310 != lVar9) {
          _objc_enumerationMutation(puVar5);
        }
        uVar8 = *(undefined8 *)(lStack_318 + (long)puVar11 * 8);
        func_0x00010c0c3600(uVar8);
        dVar14 = *(double *)(param_5 + _DAT_11276295c);
        if (dVar14 <= dVar12) {
          dVar14 = dVar12;
        }
        *(double *)(param_5 + _DAT_11276295c) = dVar14;
        func_0x00010bfb4900(uVar8);
        dVar12 = *(double *)(param_5 + lVar7);
        if (*(double *)(param_5 + lVar7) <= dVar14) {
          dVar12 = dVar14;
        }
        *(double *)(param_5 + lVar7) = dVar12;
        puVar11 = puVar11 + 1;
      } while (puVar4 != puVar11);
      puVar4 = (undefined1 *)puVar5;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined1 *)0x0);
  }
  _objc_release(puVar5);
  pdVar1 = (double *)(param_5 + _DAT_112762950);
  dVar12 = *pdVar1;
  dVar14 = pdVar1[1];
  bVar2 = false;
  if ((dVar12 == *(double *)PTR__CGPointZero_110347540) &&
     (bVar2 = false, !NAN(dVar14) && !NAN(*(double *)(PTR__CGPointZero_110347540 + 8)))) {
    bVar2 = dVar14 == *(double *)(PTR__CGPointZero_110347540 + 8);
  }
  if (!bVar2) {
    lVar7 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_5);
    _objc_release(lVar7);
    dVar13 = *pdVar1;
    dVar15 = pdVar1[1];
    dVar12 = dVar13 - dVar12;
    _CACurrentMediaTime();
    dVar13 = dVar13 - *(double *)(param_5 + _DAT_112762954);
    lVar6 = (long)_DAT_11276294c;
    lVar9 = *(long *)(param_5 + lVar6);
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar9;
    func_0x00010bf529e0();
    _objc_release(lVar9);
    if (lVar7 == 0) {
      _hypot(dVar12,dVar15 - dVar14);
      dVar14 = dVar12;
      func_0x00010bf01700(param_5);
      if ((dVar14 < dVar12) && (func_0x00010c26f140(param_5), dVar13 < dVar14)) {
        func_0x00010c209fc0(param_5);
        func_0x00010c199ea0(param_5);
      }
    }
    else {
      uStack_338 = 0;
      uStack_340 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      lStack_358 = 0;
      uStack_360 = 0;
      uStack_348 = 0;
      plStack_350 = (long *)0x0;
      lVar9 = *(long *)(param_5 + lVar6);
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar9;
      func_0x00010bf52a60();
      if (lVar7 != 0) {
        lVar6 = *plStack_350;
        do {
          lVar10 = 0;
          do {
            if (*plStack_350 != lVar6) {
              _objc_enumerationMutation(lVar9);
            }
            iVar3 = (int)*(undefined8 *)(lStack_358 + lVar10 * 8);
            func_0x00010c230480(dVar12,dVar15 - dVar14,dVar13);
            if (iVar3 != 0) {
              func_0x00010c209fc0(param_5);
              func_0x00010c199ea0(param_5);
              goto LAB_107018fd4;
            }
            lVar10 = lVar10 + 1;
          } while (lVar7 != lVar10);
          lVar7 = lVar9;
          func_0x00010bf52a60();
        } while (lVar7 != 0);
      }
LAB_107018fd4:
      _objc_release(lVar9);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_368 = FUN_107019074;
  puStack_378 = PTR_PTR_1126f83e0;
  puStack_380 = (undefined1 *)puVar5;
  ppuStack_370 = &puStack_150;
  _objc_msgSendSuper2(&puStack_380,PTR_s_setEnabled__112642f38);
  return;
}



/* Entry: 107018d2c; end: 107019073; -[SCLongPressGestureRecognizer touchesMoved:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107018d2c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  double *pdVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  long lStack_240;
  undefined *puStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_198;
  undefined *puStack_190;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_190 = PTR_PTR_1126f83e0;
  lStack_198 = param_1;
  _objc_msgSendSuper2(&lStack_198,PTR_s_touchesMoved_withEvent__11252ca58,param_3,param_4);
  lVar6 = (long)_DAT_112762958;
  *(undefined8 *)(param_1 + lVar6) = 0x3ff0000000000000;
  dVar9 = 0.0;
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  plStack_1d0 = (long *)0x0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar7 = *plStack_1d0;
    do {
      lVar8 = 0;
      do {
        if (*plStack_1d0 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        uVar5 = *(undefined8 *)(lStack_1d8 + lVar8 * 8);
        func_0x00010c0c3600(uVar5);
        dVar11 = *(double *)(param_1 + _DAT_11276295c);
        if (dVar11 <= dVar9) {
          dVar11 = dVar9;
        }
        *(double *)(param_1 + _DAT_11276295c) = dVar11;
        func_0x00010bfb4900(uVar5);
        dVar9 = *(double *)(param_1 + lVar6);
        if (*(double *)(param_1 + lVar6) <= dVar11) {
          dVar9 = dVar11;
        }
        *(double *)(param_1 + lVar6) = dVar9;
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      lVar4 = param_3;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(param_3);
  pdVar1 = (double *)(param_1 + _DAT_112762950);
  dVar9 = *pdVar1;
  dVar11 = pdVar1[1];
  bVar2 = false;
  if ((dVar9 == *(double *)PTR__CGPointZero_110347540) &&
     (bVar2 = false, !NAN(dVar11) && !NAN(*(double *)(PTR__CGPointZero_110347540 + 8)))) {
    bVar2 = dVar11 == *(double *)(PTR__CGPointZero_110347540 + 8);
  }
  if (!bVar2) {
    lVar4 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_1);
    _objc_release(lVar4);
    dVar10 = *pdVar1;
    dVar12 = pdVar1[1];
    dVar9 = dVar10 - dVar9;
    _CACurrentMediaTime();
    dVar10 = dVar10 - *(double *)(param_1 + _DAT_112762954);
    lVar7 = (long)_DAT_11276294c;
    lVar6 = *(long *)(param_1 + lVar7);
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar6;
    func_0x00010bf529e0();
    _objc_release(lVar6);
    if (lVar4 == 0) {
      _hypot(dVar9,dVar12 - dVar11);
      dVar11 = dVar9;
      func_0x00010bf01700(param_1);
      if ((dVar11 < dVar9) && (func_0x00010c26f140(param_1), dVar10 < dVar11)) {
        func_0x00010c209fc0(param_1);
        func_0x00010c199ea0(param_1);
      }
    }
    else {
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      lStack_218 = 0;
      uStack_220 = 0;
      uStack_208 = 0;
      plStack_210 = (long *)0x0;
      lVar6 = *(long *)(param_1 + lVar7);
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar6;
      func_0x00010bf52a60();
      if (lVar4 != 0) {
        lVar7 = *plStack_210;
        do {
          lVar8 = 0;
          do {
            if (*plStack_210 != lVar7) {
              _objc_enumerationMutation(lVar6);
            }
            iVar3 = (int)*(undefined8 *)(lStack_218 + lVar8 * 8);
            func_0x00010c230480(dVar9,dVar12 - dVar11,dVar10);
            if (iVar3 != 0) {
              func_0x00010c209fc0(param_1);
              func_0x00010c199ea0(param_1);
              goto LAB_107018fd4;
            }
            lVar8 = lVar8 + 1;
          } while (lVar4 != lVar8);
          lVar4 = lVar6;
          func_0x00010bf52a60();
        } while (lVar4 != 0);
      }
LAB_107018fd4:
      _objc_release(lVar6);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_107019074;
  puStack_238 = PTR_PTR_1126f83e0;
  lStack_240 = param_3;
  puStack_230 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_240,PTR_s_setEnabled__112642f38);
  return;
}



/* Entry: 107019074; end: 1070190a7; -[SCLongPressGestureRecognizer setEnabled:] */

void FUN_107019074(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f83e0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_setEnabled__112642f38);
  return;
}



/* Entry: 1070190a8; end: 1070190ef; -[SCLongPressGestureRecognizer isUnlimitedMovementAllowed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1070190a8(double param_1,long param_2)

{
  double dVar1;
  
  _CACurrentMediaTime();
  dVar1 = param_1 - *(double *)(param_2 + _DAT_112762954);
  func_0x00010c26f140(param_2);
  return param_1 < dVar1;
}



/* Entry: 1070190f0; end: 107019147; -[SCLongPressGestureRecognizer addGestureProcessor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070190f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11276294c;
  uVar1 = *(ulong *)(param_1 + lVar2);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107019148; end: 10701919f; -[SCLongPressGestureRecognizer removeGestureProcessor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107019148(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11276294c;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((int)uVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070191a0; end: 1070191af; -[SCLongPressGestureRecognizer allowableMovementAfterBegan] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070191a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762944);
}



/* Entry: 1070191b0; end: 1070191bf; -[SCLongPressGestureRecognizer setAllowableMovementAfterBegan:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070191b0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112762944) = param_1;
  return;
}



/* Entry: 1070191c0; end: 1070191cf; -[SCLongPressGestureRecognizer timeBeforeUnlimitedMovementAllowed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070191c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762948);
}



/* Entry: 1070191d0; end: 1070191df; -[SCLongPressGestureRecognizer setTimeBeforeUnlimitedMovementAllowed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070191d0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112762948) = param_1;
  return;
}



/* Entry: 1070191e0; end: 1070191ef; -[SCLongPressGestureRecognizer forceOfAllTouches] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070191e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762958);
}



/* Entry: 1070191f0; end: 1070191ff; -[SCLongPressGestureRecognizer maximumPossibleForceOfAllTouches] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1070191f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276295c);
}



/* Entry: 107019200; end: 10701920f; -[SCLongPressGestureRecognizer userInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107019200(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762960);
}



/* Entry: 107019210; end: 10701921b; -[SCLongPressGestureRecognizer setUserInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107019210(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10701921c; end: 10701922b; -[SCLongPressGestureRecognizer failedByMovement] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10701921c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112762940);
}



/* Entry: 10701922c; end: 10701923b; -[SCLongPressGestureRecognizer setFailedByMovement:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701922c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112762940) = param_3;
  return;
}



/* Entry: 10701923c; end: 10701927b; -[SCLongPressGestureRecognizer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701923c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112762960,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276294c,0);
  return;
}



/* Entry: 10701927c; end: 1070192ab; -[SCCameraTimerImpl _cameraTimerRingBaseDiameter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10701927c(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + _DAT_11276296c) == 9) {
    return 0x4056000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf2a630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + _DAT_1127629b0),PTR_s_cameraRingDiameter_1125a8330);
  return param_1;
}



/* Entry: 1070192ac; end: 1070193ef; -[SCCameraTimerImpl _prepareRecordingSpinner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1070192ac(double param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
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
  
  uVar1 = param_2;
  func_0x00010bde98a0();
  if ((uVar1 & 1) == 0) {
    lVar4 = (long)_DAT_1127629ac;
    func_0x00010bf2b020(*(undefined8 *)(param_2 + lVar4));
    dVar6 = param_1;
    func_0x00010bf2b040(*(undefined8 *)(param_2 + lVar4));
    dVar8 = param_1 + dVar6;
    func_0x00010bf2b040(*(undefined8 *)(param_2 + lVar4));
    puVar2 = PTR_PTR_1126d4150;
    _objc_alloc();
    dVar7 = 0.0;
    func_0x00010c0148a0(0,0,dVar8,param_1 + dVar6,0,0,param_1,param_1);
    lVar5 = (long)_DAT_1127629c4;
    uVar3 = *(undefined8 *)(param_2 + lVar5);
    *(undefined **)(param_2 + lVar5) = puVar2;
    _objc_release(uVar3);
    func_0x00010bf20c00(param_2);
    _CGRectGetWidth();
    dVar8 = dVar7 * 0.5;
    func_0x00010bf20c00(param_2);
    _CGRectGetHeight();
    func_0x00010c17a6a0(dVar8,dVar7 * 0.5,*(undefined8 *)(param_2 + lVar5));
    func_0x00010c249f00(*(undefined8 *)(param_2 + lVar4));
    dVar6 = dVar8;
    func_0x00010c249f00(*(undefined8 *)(param_2 + lVar4));
    _CGAffineTransformMakeScale(&uStack_80,dVar8,dVar6);
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    func_0x00010c219960(*(undefined8 *)(param_2 + lVar5),param_3,&uStack_b0);
    func_0x00010befbb60(param_2,param_3,*(undefined8 *)(param_2 + lVar5));
  }
  return;
}



/* Entry: 1070193f0; end: 10701941f; -[SCCameraTimerImpl _shouldHideLensIconDuringCapture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1070193f0(long param_1)

{
  byte bVar1;
  
  if (*(long *)(param_1 + _DAT_11276296c) == 9) {
    bVar1 = 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + _DAT_1127629c8);
  }
  return bVar1 & 1;
}



/* Entry: 107019420; end: 10701946b; -[SCCameraTimerImpl startRecordingWithSpeedMultiplier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107019420(double param_1,long param_2)

{
  double dVar1;
  
  dVar1 = param_1;
  func_0x00010c0c3620();
  func_0x00010c1c3c60(param_1 * dVar1,param_2);
  *(double *)(param_2 + _DAT_112762978) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c1e8f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setRecording__112657df8,1);
  return;
}



/* Entry: 10701946c; end: 10701947b; -[SCCameraTimerImpl onSpeedModeDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701946c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112762978) = param_1;
  return;
}



/* Entry: 10701947c; end: 10701949b; -[SCCameraTimerImpl onLensCarouselOpenStateChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10701947c(long param_1,undefined8 param_2,uint param_3)

{
  *(char *)(param_1 + _DAT_1127629d8) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1ad110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127629b4),PTR_s_setInnerCircleVisibility__112648e68,
             param_3 ^ 1);
  return;
}


