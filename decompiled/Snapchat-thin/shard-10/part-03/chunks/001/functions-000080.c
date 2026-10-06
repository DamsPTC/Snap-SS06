/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107e79ac0; end: 107e79b1b; -[SCMemoriesFeturedStoryCellV2OverlayStackView removeProgressBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e79ac0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277087c;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar2),PTR_s_removeFromSuperview_112628c78);
    return;
  }
  return;
}



/* Entry: 107e79b1c; end: 107e79df3; -[SCMemoriesFeturedStoryCellV2OverlayStackView addPostViewButtonViewWithButtonState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e79b1c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = (long)_DAT_112770880;
  lVar1 = 0;
  if (*(long *)(param_1 + lVar14) != 0) {
    func_0x00010c12c960();
    lVar1 = *(long *)(param_1 + lVar14);
    *(undefined8 *)(param_1 + lVar14) = 0;
    _objc_release();
  }
  if (param_3 != 0) {
    puVar2 = PTR_PTR_1126d8090;
    _objc_alloc();
    func_0x00010c013f60(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar12 = *(undefined8 *)(param_1 + lVar14);
    *(undefined **)(param_1 + lVar14) = puVar2;
    _objc_release(uVar12);
    lVar13 = (long)_DAT_11277086c;
    func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar13));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_1 + lVar14);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar13);
    func_0x00010c08de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar14);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar13);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar14);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010bf49420(0x4041800000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar8);
    _objc_release(uVar10);
    _objc_release(uVar7);
    _objc_release(uVar9);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar12);
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar1 = (long)_DAT_112770874;
    func_0x00010c213040(*(undefined8 *)(param_1 + lVar1));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar1 = *(long *)(param_1 + lVar1);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + lVar13);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar8);
    _objc_release(lVar14);
    _objc_release(uVar12);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = (long)_DAT_112770880;
  lVar11 = *(long *)(lVar1 + lVar13);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar11 != 0) {
    func_0x00010c12c960(*(undefined8 *)(lVar1 + lVar13));
  }
  lVar11 = (long)_DAT_112770874;
  func_0x00010c213040(*(undefined8 *)(lVar1 + lVar11));
  lVar15 = (long)_DAT_112770878;
  func_0x00010c213040(*(undefined8 *)(lVar1 + lVar15));
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar9 = *(undefined8 *)(lVar1 + lVar11);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_11277086c;
  uVar10 = *(undefined8 *)(lVar1 + lVar16);
  func_0x00010c08de00(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar8);
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(uVar9);
  lVar13 = *(long *)(lVar1 + lVar15);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar13;
  _objc_release();
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  if (lVar13 != 0) {
    lVar11 = *(long *)(lVar1 + lVar15);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(lVar1 + lVar16);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar8);
    _objc_release(lVar1);
    _objc_release(uVar12);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c212f20(*(undefined8 *)(lVar11 + _DAT_112770874));
  func_0x00010c212f20(*(undefined8 *)(lVar11 + _DAT_112770878));
  func_0x00010c1e4680(0,*(undefined8 *)(lVar11 + _DAT_11277087c));
  func_0x00010c12e780(lVar11);
  func_0x00010c12dd80(lVar11);
  func_0x00010c12ca00(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010c12b590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar11,PTR_s_removeButtonView_112628780);
  return;
}



/* Entry: 107e79df4; end: 107e79fff; -[SCMemoriesFeturedStoryCellV2OverlayStackView removeButtonView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e79df4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = (long)_DAT_112770880;
  lVar2 = *(long *)(param_1 + lVar8);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar8));
  }
  lVar2 = (long)_DAT_112770874;
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar2));
  lVar9 = (long)_DAT_112770878;
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar9));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_11277086c;
  uVar4 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c08de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar5);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  lVar8 = *(long *)(param_1 + lVar9);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  _objc_release();
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  if (lVar8 != 0) {
    lVar2 = *(long *)(param_1 + lVar9);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar5);
    _objc_release(lVar8);
    _objc_release(uVar6);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c212f20(*(undefined8 *)(lVar2 + _DAT_112770874));
  func_0x00010c212f20(*(undefined8 *)(lVar2 + _DAT_112770878));
  func_0x00010c1e4680(0,*(undefined8 *)(lVar2 + _DAT_11277087c));
  func_0x00010c12e780(lVar2);
  func_0x00010c12dd80(lVar2);
  func_0x00010c12ca00(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c12b590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_removeButtonView_112628780);
  return;
}



/* Entry: 107e7a000; end: 107e7a06f; -[SCMemoriesFeturedStoryCellV2OverlayStackView prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e7a000(long param_1,undefined8 param_2)

{
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112770874),param_2,0);
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112770878));
  func_0x00010c1e4680(0,*(undefined8 *)(param_1 + _DAT_11277087c));
  func_0x00010c12e780(param_1);
  func_0x00010c12dd80(param_1);
  func_0x00010c12ca00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c12b590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeButtonView_112628780);
  return;
}



/* Entry: 107e7a070; end: 107e7a0b7; -[SCMemoriesFeturedStoryCellV2OverlayStackView setUpGradientWithCellState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e7a070(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112770888) = param_3;
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_112770870));
                    /* WARNING: Could not recover jumptable at 0x00010bea4330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setGradientBackgroundWithCellSt_112586a70,param_3);
  return;
}



/* Entry: 107e7a0b8; end: 107e7a0cb; -[SCMemoriesFeturedStoryCellV2OverlayStackView removeGradient] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e7a0b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + _DAT_112770870),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107e7a0cc; end: 107e7a11f; -[SCMemoriesFeturedStoryCellV2OverlayStackView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e7a0cc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fb700;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bea4320(param_1);
  return;
}



/* Entry: 107e7a120; end: 107e7a143; -[SCMemoriesFeturedStoryCellV2OverlayStackView setFontSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e7a120(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010c21ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112770874),PTR_s_setTypeStyle__112664568,0x16);
    return;
  }
  return;
}



/* Entry: 107e7a144; end: 107e7a197; -[SCMemoriesFeturedStoryCellV2OverlayStackView shouldHandleGestureInPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e7a144(long param_1,undefined8 param_2)

{
  func_0x00010bf512a0(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11277086c));
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + _DAT_112770880));
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 107e7a198; end: 107e7a1af; +[SCMemoriesFeturedStoryCellV2OverlayStackView getPostViewButtonState:shouldShowSaveButton:shouldShowSendButton:] */

uint FUN_107e7a198(void)

{
  uint uVar1;
  uint in_w3;
  uint in_w4;
  
  uVar1 = 2;
  if ((in_w3 & in_w4) == 0) {
    uVar1 = in_w4 & (in_w3 ^ 1);
  }
  return uVar1;
}



/* Entry: 107e7a1b0; end: 107e7a1bf; -[SCMemoriesFeturedStoryCellV2OverlayStackView setTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e7a1b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112770874),PTR_s_setText__1126625f0);
  return;
}



/* Entry: 107e7a1c0; end: 107e7a1cf; -[SCMemoriesFeturedStoryCellV2OverlayStackView setSubtitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e7a1c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112770878),PTR_s_setText__1126625f0);
  return;
}



/* Entry: 107e7a1d0; end: 107e7a1df; -[SCMemoriesFeturedStoryCellV2OverlayStackView setProgress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e7a1d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e4690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277087c),PTR_s_setProgress__112656bc8);
  return;
}



/* Entry: 107e7a1e0; end: 107e7a1ef; -[SCMemoriesFeturedStoryCellV2OverlayStackView setSaveButtonLoadingState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e7a1e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1f57d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112770880),PTR_s_setSaveButtonLoadingState__11265b018);
  return;
}



/* Entry: 107e7a1f0; end: 107e7a513; -[SCMemoriesFeturedStoryCellV2OverlayStackView _setGradientBackgroundWithCellState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e7a1f0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 - 1U < 2) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_2,param_3,puVar3);
    _objc_release(puVar3);
    func_0x00010be22e80(param_2);
    func_0x00010c19f0e0(puVar1);
    func_0x00010c209760(0x3fe0000000000000,0x3ff0000000000000,puVar1);
    func_0x00010c196020(0x3fe0000000000000,0,puVar1);
    func_0x00010c1bff00(puVar1,param_3,&PTR__OBJC_CLASS___NSConstantArray_111181b08);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf414e0(0x3fe3333333333333);
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0;
    puVar5 = puVar3;
    func_0x00010bf414e0(0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar6 = puVar5;
    puStack_68 = puVar7;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_68,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(puVar1,param_3,puVar7);
    _objc_release(puVar7);
    puVar7 = *(undefined **)(param_2 + _DAT_112770870);
    func_0x00010c08c0e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
  }
  else {
    if ((param_4 != 0) && (param_4 != 3)) goto LAB_107e7a4d4;
    func_0x00010be22e80(param_2);
    func_0x00010c19f0e0(puVar1);
    func_0x00010c209760(0x3fe0000000000000,0x3ff0000000000000,puVar1);
    func_0x00010c196020(0x3fe0000000000000,0,puVar1);
    func_0x00010c1bff00(puVar1,param_3,&PTR__OBJC_CLASS___NSConstantArray_111181b20);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd6);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf414e0(0);
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0;
    puVar5 = puVar3;
    func_0x00010bf414e0(0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar6 = puVar5;
    puStack_78 = puVar7;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_78,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(puVar1,param_3,puVar7);
    _objc_release(puVar7);
    uVar2 = *(undefined8 *)(param_2 + _DAT_112770870);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(uVar2);
    puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_2,param_3,puVar7);
  }
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
LAB_107e7a4d4:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bf20c00(*(undefined8 *)(puVar1 + _DAT_11277086c));
  func_0x00010bf20c00(puVar1);
  return param_1;
}



/* Entry: 107e7a514; end: 107e7a577; -[SCMemoriesFeturedStoryCellV2OverlayStackView _getStackViewGradientCGRect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e7a514(undefined8 param_1,long param_2)

{
  func_0x00010bf20c00(*(undefined8 *)(param_2 + _DAT_11277086c));
  func_0x00010bf20c00(param_2);
  return param_1;
}



/* Entry: 107e7a578; end: 107e7a587; -[SCMemoriesFeturedStoryCellV2OverlayStackView title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e7a578(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277088c);
}



/* Entry: 107e7a588; end: 107e7a597; -[SCMemoriesFeturedStoryCellV2OverlayStackView subtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e7a588(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770890);
}



/* Entry: 107e7a598; end: 107e7a5a7; -[SCMemoriesFeturedStoryCellV2OverlayStackView progress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107e7a598(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112770868);
}



/* Entry: 107e7a5a8; end: 107e7a657; -[SCMemoriesFeturedStoryCellV2OverlayStackView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107e7a5a8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112770890,0);
  _objc_storeStrong(param_1 + _DAT_11277088c,0);
  _objc_storeStrong(param_1 + _DAT_112770884,0);
  _objc_storeStrong(param_1 + _DAT_112770880,0);
  _objc_storeStrong(param_1 + _DAT_112770870,0);
  _objc_storeStrong(param_1 + _DAT_11277087c,0);
  _objc_storeStrong(param_1 + _DAT_112770878,0);
  _objc_storeStrong(param_1 + _DAT_112770874,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277086c,0);
  return;
}



/* Entry: 107e7a658; end: 107e7a903; -[SCMemoriesFeaturedStoryDataMutatorListenerAnnouncer addListener:] */

undefined8 FUN_107e7a658(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110a10468;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_107e7a904(plVar10,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_107e7aa44(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_107e7a80c:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_107e7a82c;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_107e7a904(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_107e7a904(plVar10,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_107e7aa44(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_107e7a80c;
    }
  }
  uVar9 = 1;
LAB_107e7a82c:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 107e7a904; end: 107e7aa43;  */

void FUN_107e7a904(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    _objc_copyWeak(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_107e7af34();
LAB_107e7aa40:
      func_0x000104bd35f4();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_107e7aa40;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        _objc_destroyWeak(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 107e7aa44; end: 107e7aa8b;  */

void FUN_107e7aa44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 107e7aa8c; end: 107e7acbb; -[SCMemoriesFeaturedStoryDataMutatorListenerAnnouncer removeListener:] */

void FUN_107e7aa8c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_107e7ac40;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_107e7aaf4;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_107e7aa44(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_107e7ac40;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_107e7aaf4:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110a10468;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          FUN_107e7a904(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    FUN_107e7aa44(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_107e7ac40;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_107e7ac40:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e7acbc; end: 107e7ad9f; -[SCMemoriesFeaturedStoryDataMutatorListenerAnnouncer didUpdateTitleForPlaceholderEntry:] */

void FUN_107e7acbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_40;
  long *plStack_38;
  
  _objc_retain(param_3);
  FUN_107e7ada0(&plStack_40,param_1 + 0x48);
  if (plStack_40 != (long *)0x0) {
    lVar2 = plStack_40[1];
    for (lVar6 = *plStack_40; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf7e860();
      _objc_release(lVar5);
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e7ada0; end: 107e7adff;  */

void FUN_107e7ada0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 107e7ae00; end: 107e7af0b; -[SCMemoriesFeaturedStoryDataMutatorListenerAnnouncer didCreateStoryForPlaceholderEntry:newEntry:] */

void FUN_107e7ae00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  FUN_107e7ada0(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf74420();
      _objc_release(lVar5);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e7af0c; end: 107e7af33; -[SCMemoriesFeaturedStoryDataMutatorListenerAnnouncer .cxx_destruct] */

void FUN_107e7af0c(long param_1)

{
  FUN_107e7afe4(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 107e7af34; end: 107e7af47;  */

void FUN_107e7af34(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  *puVar1 = &PTR_FUN_110a10468;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107e7af48; end: 107e7af57;  */

void FUN_107e7af48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a10468;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107e7af58; end: 107e7af77;  */

void FUN_107e7af58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a10468;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107e7af78; end: 107e7afdf;  */

void FUN_107e7af78(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 107e7afe0; end: 107e7afe3;  */

void FUN_107e7afe0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107e7afe4; end: 107e7b03b;  */

long FUN_107e7afe4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 107e7b03c; end: 107e7b2e7; -[SCMemoriesHighlightContentDataSourceListenerAnnouncer addListener:] */

undefined8 FUN_107e7b03c(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110a104b8;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_107e7b2e8(plVar10,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_107e7b428(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_107e7b1f0:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_107e7b210;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_107e7b2e8(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_107e7b2e8(plVar10,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_107e7b428(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_107e7b1f0;
    }
  }
  uVar9 = 1;
LAB_107e7b210:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 107e7b2e8; end: 107e7b427;  */

void FUN_107e7b2e8(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    _objc_copyWeak(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_107e7b918();
LAB_107e7b424:
      func_0x000104bd35f4();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_107e7b424;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        _objc_destroyWeak(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 107e7b428; end: 107e7b46f;  */

void FUN_107e7b428(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 107e7b470; end: 107e7b69f; -[SCMemoriesHighlightContentDataSourceListenerAnnouncer removeListener:] */

void FUN_107e7b470(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_107e7b624;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_107e7b4d8;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_107e7b428(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_107e7b624;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_107e7b4d8:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110a104b8;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          FUN_107e7b2e8(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    FUN_107e7b428(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_107e7b624;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_107e7b624:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e7b6a0; end: 107e7b7ab; -[SCMemoriesHighlightContentDataSourceListenerAnnouncer didSaveFeaturedStory:savedStory:] */

void FUN_107e7b6a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  FUN_107e7b7ac(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf7a300();
      _objc_release(lVar5);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e7b7ac; end: 107e7b80b;  */

void FUN_107e7b7ac(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 107e7b80c; end: 107e7b8ef; -[SCMemoriesHighlightContentDataSourceListenerAnnouncer isSavingFeaturedStory:] */

void FUN_107e7b80c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_40;
  long *plStack_38;
  
  _objc_retain(param_3);
  FUN_107e7b7ac(&plStack_40,param_1 + 0x48);
  if (plStack_40 != (long *)0x0) {
    lVar2 = plStack_40[1];
    for (lVar6 = *plStack_40; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c07d260();
      _objc_release(lVar5);
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107e7b8f0; end: 107e7b917; -[SCMemoriesHighlightContentDataSourceListenerAnnouncer .cxx_destruct] */

void FUN_107e7b8f0(long param_1)

{
  FUN_107e7b9c8(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 107e7b918; end: 107e7b92b;  */

void FUN_107e7b918(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  *puVar1 = &PTR_FUN_110a104b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107e7b92c; end: 107e7b93b;  */

void FUN_107e7b92c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a104b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107e7b93c; end: 107e7b95b;  */

void FUN_107e7b93c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a104b8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107e7b95c; end: 107e7b9c3;  */

void FUN_107e7b95c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 107e7b9c4; end: 107e7b9c7;  */

void FUN_107e7b9c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107e7b9c8; end: 107e7ba1f;  */

long FUN_107e7b9c8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 107e7ba20; end: 107e7bd5b; -[SCMemoriesFeaturedStoryViewModel initWithSnaps:featuredEntry:contentEntry:crFeaturedStory:chatMediaFeaturedStory:title:subtitle:preViewTitle:preViewSubtitle:bitmojiViewModel:thumbnailDownloadInfo:entrySource:shouldShowBadge:snapsViewed:needsSaveAnimation:hasSaved:shouldShowCenteredTitlesView:showMenuButtonInBlackColor:enableEditButton:enableMenuButton:enableSaveButton:enableSendButton:snapsViewProgress:cellViewingState:featuredStoryType:shouldShowSpinner:totalExpectedClientGenSnapsCount:clientGenStoryGenerationProgress:] */

undefined8 *
FUN_107e7ba20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined4 param_16,
             undefined1 param_17,undefined8 param_18,undefined4 param_19,undefined4 param_20,
             undefined8 param_21,undefined8 param_22,undefined1 param_23,undefined4 param_24,
             undefined8 param_25)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  puStack_80 = PTR_PTR_1126fb708;
  puVar1 = &uStack_88;
  uStack_88 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x14) = param_16;
    *(undefined1 *)(puVar1 + 1) = param_17;
    puVar1[0xe] = param_18;
    *(undefined1 *)((long)puVar1 + 9) = (undefined1)param_19;
    *(undefined1 *)((long)puVar1 + 10) = param_19._1_1_;
    *(undefined1 *)((long)puVar1 + 0xb) = param_19._2_1_;
    *(undefined1 *)((long)puVar1 + 0xc) = param_19._3_1_;
    *(undefined1 *)((long)puVar1 + 0xd) = (undefined1)param_20;
    *(undefined1 *)((long)puVar1 + 0xe) = param_20._1_1_;
    *(undefined1 *)((long)puVar1 + 0xf) = param_20._2_1_;
    *(undefined1 *)(puVar1 + 2) = param_20._3_1_;
    puVar1[0xf] = param_1;
    puVar1[0x10] = param_21;
    puVar1[0x11] = param_22;
    *(undefined1 *)((long)puVar1 + 0x11) = param_23;
    puVar1[0x12] = param_25;
    puVar1[0x13] = param_2;
  }
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
  return puVar1;
}



/* Entry: 107e7bd5c; end: 107e7bd7f; -[SCMemoriesFeaturedStoryViewModel copyWithZone:] */

undefined8 FUN_107e7bd5c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107e7bd80; end: 107e7bf1f; -[SCMemoriesFeaturedStoryViewModel hash] */

undefined8 * FUN_107e7bd80(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ushort uVar9;
  undefined4 uVar10;
  ulong uVar11;
  double dVar13;
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
  long lStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  ulong uVar12;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_108 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_100 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_f8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_f0 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_e8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_e0 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uStack_d8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_d0 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uStack_c8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uStack_c0 = uVar3;
  func_0x00010bfde980();
  lStack_b0 = (long)*(int *)(param_1 + 0x14);
  uStack_a8 = (ulong)*(byte *)(param_1 + 8);
  uStack_a0 = *(undefined8 *)(param_1 + 0x70);
  uVar10 = *(undefined4 *)(param_1 + 9);
  uVar7 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar10 >> 0x18),
                                          (uint6)(byte)((uint)uVar10 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar10) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar10 >> 8),(short)uVar7);
  uVar11 = CONCAT44((int)(uVar7 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar7 = CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar7 >> 0x20),(int)uVar11)) &
          0xff01ff01ffffffff;
  uVar9 = (ushort)(uVar7 >> 0x30);
  uStack_98 = (ulong)uVar1 & 0xff;
  uStack_90 = uVar7 >> 0x10 & 0xff;
  uStack_88 = (ulong)CONCAT24(uVar9,(uint)(ushort)(uVar7 >> 0x20)) & 0xffffffff;
  uStack_80 = (ulong)uVar9;
  uVar10 = *(undefined4 *)(param_1 + 0xd);
  uVar7 = ~*(ulong *)(param_1 + 0x78) + *(ulong *)(param_1 + 0x78) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_58 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  lVar6 = *(long *)(param_1 + 0x80);
  uStack_48 = *(undefined8 *)(param_1 + 0x88);
  lStack_50 = -lVar6;
  if (-1 < lVar6) {
    lStack_50 = lVar6;
  }
  uStack_40 = (ulong)*(byte *)(param_1 + 0x11);
  uStack_38 = *(undefined8 *)(param_1 + 0x90);
  uVar7 = ~*(ulong *)(param_1 + 0x98) + *(ulong *)(param_1 + 0x98) * 0x40000;
  uVar11 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar10 >> 0x18),
                                           (uint6)(byte)((uint)uVar10 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar10) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar10 >> 8),(short)uVar11);
  uVar12 = CONCAT44((int)(uVar11 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar11 = CONCAT26((short)(uVar12 >> 0x30),CONCAT24((short)(uVar11 >> 0x20),(int)uVar12)) &
           0xff01ff01ffffffff;
  uVar9 = (ushort)(uVar11 >> 0x30);
  uStack_78 = (ulong)uVar1 & 0xff;
  uStack_70 = uVar11 >> 0x10 & 0xff;
  uStack_68 = (ulong)CONCAT24(uVar9,(uint)(ushort)(uVar11 >> 0x20)) & 0xffffffff;
  uStack_60 = (ulong)uVar9;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar4 = &uStack_108;
  uStack_b8 = uVar2;
  func_0x000100505190(puVar4,0x1c);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_107e7c1d8:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107e7c1e4;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((((ulong)puVar5 & 1) != 0) &&
         ((((*(int *)((long)puVar4 + 0x14) == *(int *)((long)param_3 + 0x14) &&
            (*(char *)(puVar4 + 1) == *(char *)(param_3 + 1))) && (puVar4[0xe] == param_3[0xe])) &&
          ((*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9) &&
           (*(char *)((long)puVar4 + 10) == *(char *)((long)param_3 + 10))))))) &&
        (*(char *)((long)puVar4 + 0xb) == *(char *)((long)param_3 + 0xb))) &&
       ((((*(char *)((long)puVar4 + 0xc) == *(char *)((long)param_3 + 0xc) &&
          (*(char *)((long)puVar4 + 0xd) == *(char *)((long)param_3 + 0xd))) &&
         ((*(char *)((long)puVar4 + 0xe) == *(char *)((long)param_3 + 0xe) &&
          (((*(char *)((long)puVar4 + 0xf) == *(char *)((long)param_3 + 0xf) &&
            (*(char *)(puVar4 + 2) == *(char *)(param_3 + 2))) && (puVar4[0x10] == param_3[0x10]))))
         )) && (((puVar4[0x11] == param_3[0x11] &&
                 (*(char *)((long)puVar4 + 0x11) == *(char *)((long)param_3 + 0x11))) &&
                (puVar4[0x12] == param_3[0x12])))))) {
      dVar13 = ABS((double)puVar4[0xf] - (double)param_3[0xf]);
      if ((dVar13 < 2.2250738585072014e-308) ||
         (dVar13 < ABS((double)puVar4[0xf] + (double)param_3[0xf]) * 2.220446049250313e-16)) {
        dVar13 = ABS((double)puVar4[0x13] - (double)param_3[0x13]);
        if ((((dVar13 < 2.2250738585072014e-308) ||
             (dVar13 < ABS((double)puVar4[0x13] + (double)param_3[0x13]) * 2.220446049250313e-16))
            && (((lVar6 = puVar4[3], lVar6 == param_3[3] || (func_0x00010c071ae0(), (int)lVar6 != 0)
                 ) && (((lVar6 = puVar4[4], lVar6 == param_3[4] ||
                        (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                       ((((lVar6 = puVar4[5], lVar6 == param_3[5] ||
                          (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                         ((lVar6 = puVar4[6], lVar6 == param_3[6] ||
                          (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                        ((lVar6 = puVar4[7], lVar6 == param_3[7] ||
                         (func_0x00010c071ae0(), (int)lVar6 != 0)))))))))) &&
           (((lVar6 = puVar4[8], lVar6 == param_3[8] || (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
            ((((lVar6 = puVar4[9], lVar6 == param_3[9] || (func_0x00010c071ae0(), (int)lVar6 != 0))
              && ((lVar6 = puVar4[10], lVar6 == param_3[10] ||
                  (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
             (((lVar6 = puVar4[0xb], lVar6 == param_3[0xb] ||
               (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
              ((lVar6 = puVar4[0xc], lVar6 == param_3[0xc] ||
               (func_0x00010c071ae0(), (int)lVar6 != 0)))))))))) {
          puVar8 = (undefined8 *)puVar4[0xd];
          if (puVar8 != (undefined8 *)param_3[0xd]) {
            func_0x00010c071ae0();
            goto LAB_107e7c1e4;
          }
          goto LAB_107e7c1d8;
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_107e7c1e4:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 107e7bf20; end: 107e7c1ff; -[SCMemoriesFeaturedStoryViewModel isEqual:] */

long FUN_107e7bf20(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107e7c1d8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107e7c1e4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(int *)(param_1 + 0x14) == *(int *)(param_3 + 0x14) &&
            (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
           (*(long *)(param_1 + 0x70) == *(long *)(param_3 + 0x70))) &&
          ((*(char *)(param_1 + 9) == *(char *)(param_3 + 9) &&
           (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))))) &&
        (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))) &&
       ((((*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc) &&
          (*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd))) &&
         ((*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe) &&
          (((*(char *)(param_1 + 0xf) == *(char *)(param_3 + 0xf) &&
            (*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10))) &&
           (*(long *)(param_1 + 0x80) == *(long *)(param_3 + 0x80))))))) &&
        (((*(long *)(param_1 + 0x88) == *(long *)(param_3 + 0x88) &&
          (*(char *)(param_1 + 0x11) == *(char *)(param_3 + 0x11))) &&
         (*(long *)(param_1 + 0x90) == *(long *)(param_3 + 0x90))))))) {
      dVar4 = ABS(*(double *)(param_1 + 0x78) - *(double *)(param_3 + 0x78));
      if ((dVar4 < 2.2250738585072014e-308) ||
         (dVar4 < ABS(*(double *)(param_1 + 0x78) + *(double *)(param_3 + 0x78)) *
                  2.220446049250313e-16)) {
        dVar4 = ABS(*(double *)(param_1 + 0x98) - *(double *)(param_3 + 0x98));
        if ((((dVar4 < 2.2250738585072014e-308) ||
             (dVar4 < ABS(*(double *)(param_1 + 0x98) + *(double *)(param_3 + 0x98)) *
                      2.220446049250313e-16)) &&
            (((lVar3 = *(long *)(param_1 + 0x18), lVar3 == *(long *)(param_3 + 0x18) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
             (((lVar3 = *(long *)(param_1 + 0x20), lVar3 == *(long *)(param_3 + 0x20) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
              ((((lVar3 = *(long *)(param_1 + 0x28), lVar3 == *(long *)(param_3 + 0x28) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                ((lVar3 = *(long *)(param_1 + 0x30), lVar3 == *(long *)(param_3 + 0x30) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
               ((lVar3 = *(long *)(param_1 + 0x38), lVar3 == *(long *)(param_3 + 0x38) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)))))))))) &&
           (((lVar3 = *(long *)(param_1 + 0x40), lVar3 == *(long *)(param_3 + 0x40) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
            ((((lVar3 = *(long *)(param_1 + 0x48), lVar3 == *(long *)(param_3 + 0x48) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
              ((lVar3 = *(long *)(param_1 + 0x50), lVar3 == *(long *)(param_3 + 0x50) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
             (((lVar3 = *(long *)(param_1 + 0x58), lVar3 == *(long *)(param_3 + 0x58) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
              ((lVar3 = *(long *)(param_1 + 0x60), lVar3 == *(long *)(param_3 + 0x60) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)))))))))) {
          lVar3 = *(long *)(param_1 + 0x68);
          if (lVar3 != *(long *)(param_3 + 0x68)) {
            func_0x00010c071ae0();
            goto LAB_107e7c1e4;
          }
          goto LAB_107e7c1d8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_107e7c1e4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107e7c200; end: 107e7c207; -[SCMemoriesFeaturedStoryViewModel snaps] */

undefined8 FUN_107e7c200(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107e7c208; end: 107e7c20f; -[SCMemoriesFeaturedStoryViewModel featuredEntry] */

undefined8 FUN_107e7c208(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107e7c210; end: 107e7c217; -[SCMemoriesFeaturedStoryViewModel contentEntry] */

undefined8 FUN_107e7c210(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107e7c218; end: 107e7c21f; -[SCMemoriesFeaturedStoryViewModel crFeaturedStory] */

undefined8 FUN_107e7c218(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107e7c220; end: 107e7c227; -[SCMemoriesFeaturedStoryViewModel chatMediaFeaturedStory] */

undefined8 FUN_107e7c220(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107e7c228; end: 107e7c22f; -[SCMemoriesFeaturedStoryViewModel title] */

undefined8 FUN_107e7c228(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107e7c230; end: 107e7c237; -[SCMemoriesFeaturedStoryViewModel subtitle] */

undefined8 FUN_107e7c230(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107e7c238; end: 107e7c23f; -[SCMemoriesFeaturedStoryViewModel preViewTitle] */

undefined8 FUN_107e7c238(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107e7c240; end: 107e7c247; -[SCMemoriesFeaturedStoryViewModel preViewSubtitle] */

undefined8 FUN_107e7c240(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107e7c248; end: 107e7c24f; -[SCMemoriesFeaturedStoryViewModel bitmojiViewModel] */

undefined8 FUN_107e7c248(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107e7c250; end: 107e7c257; -[SCMemoriesFeaturedStoryViewModel thumbnailDownloadInfo] */

undefined8 FUN_107e7c250(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107e7c258; end: 107e7c25f; -[SCMemoriesFeaturedStoryViewModel entrySource] */

undefined4 FUN_107e7c258(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 107e7c260; end: 107e7c267; -[SCMemoriesFeaturedStoryViewModel shouldShowBadge] */

undefined1 FUN_107e7c260(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107e7c268; end: 107e7c26f; -[SCMemoriesFeaturedStoryViewModel snapsViewed] */

undefined8 FUN_107e7c268(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107e7c270; end: 107e7c277; -[SCMemoriesFeaturedStoryViewModel needsSaveAnimation] */

undefined1 FUN_107e7c270(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107e7c278; end: 107e7c27f; -[SCMemoriesFeaturedStoryViewModel hasSaved] */

undefined1 FUN_107e7c278(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107e7c280; end: 107e7c287; -[SCMemoriesFeaturedStoryViewModel shouldShowCenteredTitlesView] */

undefined1 FUN_107e7c280(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 107e7c288; end: 107e7c28f; -[SCMemoriesFeaturedStoryViewModel showMenuButtonInBlackColor] */

undefined1 FUN_107e7c288(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 107e7c290; end: 107e7c297; -[SCMemoriesFeaturedStoryViewModel enableEditButton] */

undefined1 FUN_107e7c290(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 107e7c298; end: 107e7c29f; -[SCMemoriesFeaturedStoryViewModel enableMenuButton] */

undefined1 FUN_107e7c298(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 107e7c2a0; end: 107e7c2a7; -[SCMemoriesFeaturedStoryViewModel enableSaveButton] */

undefined1 FUN_107e7c2a0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 107e7c2a8; end: 107e7c2af; -[SCMemoriesFeaturedStoryViewModel enableSendButton] */

undefined1 FUN_107e7c2a8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 107e7c2b0; end: 107e7c2b7; -[SCMemoriesFeaturedStoryViewModel snapsViewProgress] */

undefined8 FUN_107e7c2b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 107e7c2b8; end: 107e7c2bf; -[SCMemoriesFeaturedStoryViewModel cellViewingState] */

undefined8 FUN_107e7c2b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 107e7c2c0; end: 107e7c2c7; -[SCMemoriesFeaturedStoryViewModel featuredStoryType] */

undefined8 FUN_107e7c2c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 107e7c2c8; end: 107e7c2cf; -[SCMemoriesFeaturedStoryViewModel shouldShowSpinner] */

undefined1 FUN_107e7c2c8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 107e7c2d0; end: 107e7c2d7; -[SCMemoriesFeaturedStoryViewModel totalExpectedClientGenSnapsCount] */

undefined8 FUN_107e7c2d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 107e7c2d8; end: 107e7c2df; -[SCMemoriesFeaturedStoryViewModel clientGenStoryGenerationProgress] */

undefined8 FUN_107e7c2d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 107e7c2e0; end: 107e7c37b; -[SCMemoriesFeaturedStoryViewModel .cxx_destruct] */

void FUN_107e7c2e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107e7c37c; end: 107e7c397; +[SCMemoriesFeaturedStoryViewModelBuilder memoriesFeaturedStoryViewModel] */

void FUN_107e7c37c(void)

{
  _objc_alloc_init(PTR_PTR_1126d2200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e7c398; end: 107e7c99b; +[SCMemoriesFeaturedStoryViewModelBuilder memoriesFeaturedStoryViewModelFromExistingMemoriesFeaturedStoryViewModel:] */

void FUN_107e7c398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  
  puVar1 = PTR_PTR_1126d2200;
  _objc_retain(param_4);
  func_0x00010c0c8a40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b9a60(puVar1,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bfa3200();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2adb80(puVar3,param_3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010bf4c440();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2aada0(puVar5,param_3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010bf53c00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2ab2e0(puVar7,param_3,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_4;
  func_0x00010bf36bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c2aa580(puVar9,param_3,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_4;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010c2bb3c0(puVar11,param_3,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_4;
  func_0x00010c260dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010c2ba960(puVar13,param_3,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_4;
  func_0x00010c1060a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010c2b59a0(puVar15,param_3,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_4;
  func_0x00010c106080();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar17;
  func_0x00010c2b5980(puVar17,param_3,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_4;
  func_0x00010bf1c680();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar19;
  func_0x00010c2a9580(puVar19,param_3,uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_4;
  func_0x00010c26da40();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar21;
  func_0x00010c2bafc0(puVar21,param_3,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_4;
  func_0x00010bf977c0(param_4);
  puVar25 = puVar23;
  func_0x00010c2ad4c0(puVar23,param_3,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_4;
  func_0x00010c233360(param_4);
  puVar26 = puVar25;
  func_0x00010c2b8be0(puVar25,param_3,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_4;
  func_0x00010c245cc0(param_4);
  puVar27 = puVar26;
  func_0x00010c2b9ac0(puVar26,param_3,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_4;
  func_0x00010c0d7440(param_4);
  puVar28 = puVar27;
  func_0x00010c2b45a0(puVar27,param_3,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_4;
  func_0x00010bfdb660(param_4);
  puVar29 = puVar28;
  func_0x00010c2af400(puVar28,param_3,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_4;
  func_0x00010c2334e0(param_4);
  puVar30 = puVar29;
  func_0x00010c2b8c00(puVar29,param_3,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_4;
  func_0x00010c238660(param_4);
  puVar31 = puVar30;
  func_0x00010c2b8e00(puVar30,param_3,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_4;
  func_0x00010bf901a0(param_4);
  puVar32 = puVar31;
  func_0x00010c2acf00(puVar31,param_3,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_4;
  func_0x00010bf90c80(param_4);
  puVar33 = puVar32;
  func_0x00010c2acf60(puVar32,param_3,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_4;
  func_0x00010bf918a0(param_4);
  puVar34 = puVar33;
  func_0x00010c2ad080(puVar33,param_3,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_4;
  func_0x00010bf919c0(param_4);
  puVar35 = puVar34;
  func_0x00010c2ad0a0(puVar34,param_3,uVar24);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c245ca0(param_4);
  puVar36 = puVar35;
  func_0x00010c2b9aa0(puVar35);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_4;
  func_0x00010bf34400(param_4);
  puVar37 = puVar36;
  func_0x00010c2aa480(puVar36,param_3,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_4;
  func_0x00010bfa34e0(param_4);
  puVar38 = puVar37;
  func_0x00010c2adc00(puVar37,param_3,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_4;
  func_0x00010c234360(param_4);
  puVar39 = puVar38;
  func_0x00010c2b8c80(puVar38,param_3,uVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_4;
  func_0x00010c276520(param_4);
  puVar40 = puVar39;
  func_0x00010c2bb820(puVar39,param_3,uVar24);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3cea0(param_4);
  _objc_release(param_4);
  puVar41 = puVar40;
  func_0x00010c2aa7a0(param_1,puVar40);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar40);
  _objc_release(puVar39);
  _objc_release(puVar38);
  _objc_release(puVar37);
  _objc_release(puVar36);
  _objc_release(puVar35);
  _objc_release(puVar34);
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar23);
  _objc_release(uVar22);
  _objc_release(puVar21);
  _objc_release(uVar20);
  _objc_release(puVar19);
  _objc_release(uVar18);
  _objc_release(puVar17);
  _objc_release(uVar16);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar41);
  return;
}



/* Entry: 107e7c99c; end: 107e7ca27; -[SCMemoriesFeaturedStoryViewModelBuilder build] */

void FUN_107e7c99c(long param_1)

{
  _objc_alloc(PTR_PTR_1126d21f0);
  func_0x00010c04a140(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107e7ca28; end: 107e7ca5f; -[SCMemoriesFeaturedStoryViewModelBuilder withSnaps:] */

long FUN_107e7ca28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107e7ca60; end: 107e7ca97; -[SCMemoriesFeaturedStoryViewModelBuilder withFeaturedEntry:] */

long FUN_107e7ca60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107e7ca98; end: 107e7cacf; -[SCMemoriesFeaturedStoryViewModelBuilder withContentEntry:] */

long FUN_107e7ca98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107e7cad0; end: 107e7cb07; -[SCMemoriesFeaturedStoryViewModelBuilder withCrFeaturedStory:] */

long FUN_107e7cad0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107e7cb08; end: 107e7cb3f; -[SCMemoriesFeaturedStoryViewModelBuilder withChatMediaFeaturedStory:] */

long FUN_107e7cb08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107e7cb40; end: 107e7cb77; -[SCMemoriesFeaturedStoryViewModelBuilder withTitle:] */

long FUN_107e7cb40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107e7cb78; end: 107e7cbaf; -[SCMemoriesFeaturedStoryViewModelBuilder withSubtitle:] */

long FUN_107e7cb78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107e7cbb0; end: 107e7cbe7; -[SCMemoriesFeaturedStoryViewModelBuilder withPreViewTitle:] */

long FUN_107e7cbb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107e7cbe8; end: 107e7cc1f; -[SCMemoriesFeaturedStoryViewModelBuilder withPreViewSubtitle:] */

long FUN_107e7cbe8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107e7cc20; end: 107e7cc57; -[SCMemoriesFeaturedStoryViewModelBuilder withBitmojiViewModel:] */

long FUN_107e7cc20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107e7cc58; end: 107e7cc8f; -[SCMemoriesFeaturedStoryViewModelBuilder withThumbnailDownloadInfo:] */

long FUN_107e7cc58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107e7cc90; end: 107e7cc97; -[SCMemoriesFeaturedStoryViewModelBuilder withEntrySource:] */

void FUN_107e7cc90(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 107e7cc98; end: 107e7cc9f; -[SCMemoriesFeaturedStoryViewModelBuilder withShouldShowBadge:] */

void FUN_107e7cc98(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 100) = param_3;
  return;
}



/* Entry: 107e7cca0; end: 107e7cca7; -[SCMemoriesFeaturedStoryViewModelBuilder withSnapsViewed:] */

void FUN_107e7cca0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 107e7cca8; end: 107e7ccaf; -[SCMemoriesFeaturedStoryViewModelBuilder withNeedsSaveAnimation:] */

void FUN_107e7cca8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 107e7ccb0; end: 107e7ccb7; -[SCMemoriesFeaturedStoryViewModelBuilder withHasSaved:] */

void FUN_107e7ccb0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x71) = param_3;
  return;
}


