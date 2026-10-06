/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1052517b4; end: 1052519af; -[SCSpectaclesShakeReportViewController setupSubmitView:] */

void FUN_1052517b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c25f4e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b69f8;
    _objc_alloc_init(PTR_PTR_1126b69f8);
    func_0x00010c20f220(param_1,param_2,puVar2);
    _objc_release(puVar2);
    lVar1 = param_1;
    func_0x00010c25f4e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c25efa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6d60(param_3,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar1 = param_1;
    func_0x00010c25f4e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c25efa0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f4e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c25ef80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar4;
    func_0x00010bf493a0(lVar4,param_2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = lVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_70,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2,param_2,puVar8);
    _objc_release(puVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(param_1);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = param_3;
  func_0x00010c25f4e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar3 = param_3;
    func_0x00010bf6e5a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar3 != 0) {
      lVar1 = param_3;
      func_0x00010c25f4e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6e5a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010c071780();
      func_0x00010bf91ee0(lVar1,param_2,(uint)lVar3 ^ 1);
      _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1052519b0; end: 105251a5f; -[SCSpectaclesShakeReportViewController updateSubmitButton] */

void FUN_1052519b0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c25f4e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010bf6e5a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_1;
      func_0x00010c25f4e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6e5a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c071780();
      func_0x00010bf91ee0(lVar1,param_2,(uint)lVar2 ^ 1);
      _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 105251a60; end: 105251ad3; -[SCSpectaclesShakeReportViewController _hideKeyboard] */

void FUN_105251a60(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf6e5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bf6e5a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c26ca80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13a0e0();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105251ad4; end: 105251b0b; -[SCSpectaclesShakeReportViewController leftButtonPressed] */

void FUN_105251ad4(undefined8 param_1)

{
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105251b0c; end: 105251b0f; -[SCSpectaclesShakeReportViewController descriptionTextChange:] */

void FUN_105251b0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28a810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateSubmitButton_112680428);
  return;
}



/* Entry: 105251b10; end: 105251bfb; -[SCSpectaclesShakeReportViewController submitClicked:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105251b10(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((param_3 & 1) == 0) {
    lVar1 = param_1;
    func_0x00010bf6e5a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010bf6e5a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe3260();
      lVar2 = param_1;
      goto LAB_105251be8;
    }
  }
  lVar1 = param_1;
  func_0x00010bf6e5a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfcbda0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11272071c);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c920();
  _objc_release(uVar3);
  func_0x00010c10fd00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b00();
  _objc_release(param_1);
LAB_105251be8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105251bfc; end: 105251c97; -[SCSpectaclesShakeReportViewController addObservers] */

void FUN_105251bfc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105251c98; end: 105251e87; -[SCSpectaclesShakeReportViewController keyboardWasShown:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105251c98(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  func_0x00010c292820(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1080();
  _objc_release(uVar6);
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  lVar7 = (long)_DAT_112720724;
  func_0x00010c162480(*(undefined8 *)(param_5 + lVar7),param_6,0);
  lVar1 = param_5;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf493a0(lVar2,param_6,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_5 + lVar7);
  *(long *)(param_5 + lVar7) = lVar5;
  _objc_release(uVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf493c0(-param_1,lVar2,param_6,lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_112720728;
  uVar6 = *(undefined8 *)(param_5 + lVar7);
  *(long *)(param_5 + lVar7) = lVar5;
  _objc_release(uVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c162480(*(undefined8 *)(param_5 + lVar7),param_6,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 105251e88; end: 105251ec7; -[SCSpectaclesShakeReportViewController keyboardWillBeHidden:] */

/* WARNING: Possible PIC construction at 0x000105251eac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105251eb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105251e88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c162490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112720728),PTR_s_setActive__112636340,0);
  return;
}



/* Entry: 105251ec8; end: 105251f07; -[SCSpectaclesShakeReportViewController removeObservers] */

void FUN_105251ec8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105251f08; end: 105251f17; -[SCSpectaclesShakeReportViewController descriptionProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105251f08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272072c);
}



/* Entry: 105251f18; end: 105251f57; -[SCSpectaclesShakeReportViewController setDescriptionProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105251f18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272072c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105251f58; end: 105251f67; -[SCSpectaclesShakeReportViewController submitProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105251f58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112720730);
}



/* Entry: 105251f68; end: 105251fa7; -[SCSpectaclesShakeReportViewController setSubmitProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105251f68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112720730;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105251fa8; end: 105252023; -[SCSpectaclesShakeReportViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105251fa8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112720730,0);
  _objc_storeStrong(param_1 + _DAT_11272072c,0);
  _objc_destroyWeak(param_1 + _DAT_112720720);
  _objc_storeStrong(param_1 + _DAT_112720724,0);
  _objc_storeStrong(param_1 + _DAT_112720728,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272071c,0);
  return;
}



/* Entry: 105252024; end: 1052524d3;  */

void FUN_105252024(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dba438;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dba438,
                      &PTR____CFConstantStringClassReference_110dcd238,0);
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



/* Entry: 1052524d4; end: 1052524df; +[SCComposerSpectaclesAvalonInfoCardView componentPath] */

undefined ** FUN_1052524d4(void)

{
  return &PTR____CFConstantStringClassReference_110dcd6d8;
}



/* Entry: 1052524e0; end: 1052524ff; -[SCComposerSpectaclesAvalonInfoCardView initWithViewModel:componentContext:runtime:] */

void FUN_1052524e0(void)

{
  FUN_10525269c(PTR_PTR_1126e7290);
  return;
}



/* Entry: 105252500; end: 105252533; -[SCComposerSpectaclesAvalonInfoCardView setViewModel:] */

void FUN_105252500(void)

{
  func_0x0001052526b0();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001052526c0();
  func_0x0001052526d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105252534; end: 10525256b; -[SCComposerSpectaclesAvalonInfoCardView viewModel] */

void FUN_105252534(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001052526cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10525256c; end: 105252577; +[SCComposerSpectaclesAvalonPairingDeeplinkView componentPath] */

undefined ** FUN_10525256c(void)

{
  return &PTR____CFConstantStringClassReference_110dcd6f8;
}



/* Entry: 105252578; end: 105252597; -[SCComposerSpectaclesAvalonPairingDeeplinkView initWithViewModel:componentContext:runtime:] */

void FUN_105252578(void)

{
  FUN_10525269c(PTR_PTR_1126e7298);
  return;
}



/* Entry: 105252598; end: 1052525cb; -[SCComposerSpectaclesAvalonPairingDeeplinkView setViewModel:] */

void FUN_105252598(void)

{
  func_0x0001052526b0();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001052526c0();
  func_0x0001052526d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1052525cc; end: 105252603; -[SCComposerSpectaclesAvalonPairingDeeplinkView viewModel] */

void FUN_1052525cc(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001052526cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105252604; end: 10525260f; +[SCComposerSpectaclesAvalonPairingInterstitialView componentPath] */

undefined ** FUN_105252604(void)

{
  return &PTR____CFConstantStringClassReference_110dcd718;
}



/* Entry: 105252610; end: 10525262f; -[SCComposerSpectaclesAvalonPairingInterstitialView initWithViewModel:componentContext:runtime:] */

void FUN_105252610(void)

{
  FUN_10525269c(PTR_PTR_1126e72a0);
  return;
}



/* Entry: 105252630; end: 105252663; -[SCComposerSpectaclesAvalonPairingInterstitialView setViewModel:] */

void FUN_105252630(void)

{
  func_0x0001052526b0();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001052526c0();
  func_0x0001052526d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105252664; end: 10525269b; -[SCComposerSpectaclesAvalonPairingInterstitialView viewModel] */

void FUN_105252664(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001052526cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10525269c; end: 1052526f7;  */

void FUN_10525269c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 1052526f8; end: 105252753; -[SCComposerSpectaclesAvalonInfoCardContext initWithOnTap:] */

undefined8 * FUN_1052526f8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retainBlock();
  puStack_28 = PTR_PTR_1126e72a8;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  func_0x0001052528e8(puVar1,PTR_s_initWithFieldValues__1125e24b8);
  func_0x0001052528e0();
  return puVar1;
}



/* Entry: 105252754; end: 105252763; +[SCComposerSpectaclesAvalonInfoCardContext valdiMarshallableObjectDescriptor] */

void FUN_105252754(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_onTap_110871758;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105252764; end: 1052527f3; -[SCComposerSpectaclesAvalonPairingDeeplinkContext initWithDidTapDeeplinkButton:dismiss:] */

undefined8 *
FUN_105252764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  puStack_38 = PTR_PTR_1126e72b0;
  puVar2 = &uStack_40;
  uStack_40 = param_1;
  func_0x0001052528e8(puVar2,PTR_s_initWithFieldValues__1125e24b8);
  _objc_release(uVar1);
  func_0x0001052528e0();
  return puVar2;
}



/* Entry: 1052527f4; end: 105252803; +[SCComposerSpectaclesAvalonPairingDeeplinkContext valdiMarshallableObjectDescriptor] */

void FUN_1052527f4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_didTapDeeplinkButton_110871788;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105252804; end: 1052528c3; -[SCComposerSpectaclesAvalonPairingInterstitialContext initWithDidSelectLatestGenerationPairing:didSelectLegacyPairing:dismiss:] */

undefined8 *
FUN_105252804(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  _objc_retainBlock();
  func_0x0001052528e0();
  _objc_retainBlock();
  _objc_release(param_5);
  puStack_48 = PTR_PTR_1126e72b8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  func_0x0001052528e8(puVar1,PTR_s_initWithFieldValues__1125e24b8);
  func_0x0001052528e0();
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1052528c4; end: 1052528ef; +[SCComposerSpectaclesAvalonPairingInterstitialContext valdiMarshallableObjectDescriptor] */

void FUN_1052528c4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_didSelectLatestGenerationPairing_1108717d0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1052528f0; end: 105252973; -[SCSpectaclesDeviceConnectionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052528f0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_11272073c;
    _objc_loadWeakRetained(lVar3);
  }
  lVar1 = lVar3;
  func_0x00010bf21f60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112720740);
  }
  func_0x00010bf9d620(uVar2,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105252974; end: 1052529c7; -[SCSpectaclesDeviceConnectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105252974(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112720740,0);
  _objc_destroyWeak(param_1 + _DAT_11272073c);
  _objc_destroyWeak(param_1 + _DAT_112720738);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112720734);
  return;
}



/* Entry: 1052529c8; end: 105252f03; -[SCSpectaclesSettingsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052529c8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
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
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined1 auStack_70 [16];
  
  lVar19 = (long)_DAT_112720744;
  lVar20 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010c116320();
  _objc_release(lVar20);
  if (lVar21 == 1) {
    lVar20 = 1;
  }
  else if (lVar21 == -1) {
    lVar21 = (long)_DAT_112720748;
    lVar20 = param_1 + lVar21;
    _objc_loadWeakRetained();
    lVar1 = lVar20;
    func_0x00010c253460();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf48720();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      lVar21 = param_1 + lVar21;
      _objc_loadWeakRetained();
      lVar5 = lVar21;
      func_0x00010c253460();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c0f2bc0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar21);
    }
    else {
      _objc_retain(lVar4);
      lVar8 = lVar4;
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar20);
    if (lVar8 == 0) {
      lVar20 = 0;
    }
    else {
      lVar21 = lVar8;
      func_0x00010bfd38e0();
      _objc_retainAutoreleasedReturnValue();
      lVar20 = lVar21;
      func_0x00010bf70e00();
      _objc_release(lVar21);
    }
    _objc_release(lVar8);
  }
  else {
    lVar20 = 0;
  }
  _objc_initWeak(auStack_70,param_1);
  puVar9 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_80,auStack_70);
  lStack_78 = lVar20;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b6a00;
  _objc_alloc();
  lVar20 = param_1 + _DAT_11272074c;
  _objc_loadWeakRetained();
  lVar11 = lVar20;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_112720750;
  _objc_loadWeakRetained(lVar21);
  lVar1 = param_1 + _DAT_112720748;
  _objc_loadWeakRetained();
  lVar2 = param_1 + _DAT_112720754;
  _objc_loadWeakRetained();
  lVar12 = lVar2;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112720758;
  _objc_loadWeakRetained();
  lVar13 = lVar3;
  func_0x00010bf85f80();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11272075c;
  _objc_loadWeakRetained();
  lVar16 = lVar4;
  func_0x00010c0e35c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112720760;
  _objc_loadWeakRetained();
  lVar17 = lVar5;
  func_0x00010c100e20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112720764;
  _objc_loadWeakRetained();
  lVar18 = lVar6;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112720774;
  _objc_loadWeakRetained();
  lVar8 = param_1 + _DAT_112720778;
  _objc_loadWeakRetained();
  func_0x00010c00b2a0(puVar10);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar18);
  _objc_release(lVar6);
  _objc_release(lVar17);
  _objc_release(lVar5);
  _objc_release(lVar16);
  _objc_release(lVar4);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar3);
  _objc_release(lVar12);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar21);
  _objc_release(lVar11);
  _objc_release(lVar20);
  _objc_storeWeak(param_1 + _DAT_112720788,puVar10);
  param_1 = param_1 + lVar19;
  _objc_loadWeakRetained(param_1);
  lVar20 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar20);
  _objc_release(param_1);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_70);
  return;
}



/* Entry: 105252f04; end: 105252f4b;  */

void FUN_105252f04(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf3a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105252f4c; end: 105253077; -[SCSpectaclesSettingsEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105252f4c(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  undefined *puStack_38;
  
  lVar5 = param_1 + _DAT_112720744;
  _objc_loadWeakRetained();
  lVar1 = lVar5;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  if (lVar1 == 0) {
    puStack_38 = PTR_PTR_1126e72c0;
    plVar4 = &lStack_40;
    lStack_40 = param_1;
    _objc_msgSendSuper2(plVar4,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    plVar2 = (long *)PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11272078c;
    _objc_retain();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(long **)(param_1 + lVar5) = plVar2;
    _objc_release(uVar3);
    _objc_retain(plVar2);
    func_0x00010bf6f440(lVar1);
    plVar4 = plVar2;
    func_0x00010c117720(plVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(plVar2);
    _objc_release(plVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 105253078; end: 10525307f;  */

void FUN_105253078(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 105253080; end: 1052530f3; -[SCSpectaclesSettingsEntryPoint spectaclesSettingsViewControllerWantsToDetachUI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105253080(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112720744;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c150700();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010c249780(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1052530f4; end: 105253167; -[SCSpectaclesSettingsEntryPoint spectaclesSettingsViewControllerDidDealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052530f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112720744;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c150700();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010c249780(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105253168; end: 10525328b; -[SCSpectaclesSettingsEntryPoint _createSpectaclesDevicesProviderWithDeviceProductType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105253168(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined **ppuVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 auStack_90 [5];
  undefined8 auStack_68 [5];
  
  lVar5 = param_1 + _DAT_112720750;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c249020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  bVar4 = param_3 != 0;
  puVar1 = auStack_68;
  if (bVar4) {
    puVar1 = auStack_90;
  }
  pcVar2 = FUN_10525328c;
  if (bVar4) {
    pcVar2 = (code *)0x1052532d4;
  }
  ppuVar3 = &PTR_PTR_1126b6a08;
  if (bVar4) {
    ppuVar3 = &PTR_PTR_1126b6a10;
  }
  puVar7 = *ppuVar3;
  _objc_alloc(puVar7);
  *puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puVar1[1] = 0xc2000000;
  puVar1[2] = pcVar2;
  puVar1[3] = &UNK_110857568;
  puVar1[4] = lVar6;
  param_1 = param_1 + _DAT_112720748;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010c253460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff2aa0(puVar7,param_2,puVar1,lVar5);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10525328c; end: 10525331b;  */

void FUN_10525328c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10525331c; end: 105253373; -[SCSpectaclesSettingsEntryPoint spectaclesDeviceSettingsScopeDidExitScreen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525331c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112720790;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105253374; end: 105253377; -[SCSpectaclesSettingsEntryPoint spectaclesDeviceSettingsScopeDidUnpairSpectacles:] */

void FUN_105253374(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c248990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_spectaclesDeviceSettingsScopeDid_11266fc88);
  return;
}



/* Entry: 105253378; end: 1052534a7; -[SCSpectaclesSettingsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105253378(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112720784,0);
  _objc_storeStrong(param_1 + _DAT_112720780,0);
  _objc_storeStrong(param_1 + _DAT_112720790,0);
  _objc_storeStrong(param_1 + _DAT_112720770,0);
  _objc_storeStrong(param_1 + _DAT_11272077c,0);
  _objc_storeStrong(param_1 + _DAT_11272076c,0);
  _objc_storeStrong(param_1 + _DAT_112720768,0);
  _objc_destroyWeak(param_1 + _DAT_112720778);
  _objc_destroyWeak(param_1 + _DAT_112720774);
  _objc_destroyWeak(param_1 + _DAT_112720760);
  _objc_destroyWeak(param_1 + _DAT_11272075c);
  _objc_destroyWeak(param_1 + _DAT_112720754);
  _objc_destroyWeak(param_1 + _DAT_112720748);
  _objc_destroyWeak(param_1 + _DAT_112720750);
  _objc_destroyWeak(param_1 + _DAT_112720758);
  _objc_destroyWeak(param_1 + _DAT_112720764);
  _objc_destroyWeak(param_1 + _DAT_11272074c);
  _objc_destroyWeak(param_1 + _DAT_112720744);
  _objc_destroyWeak(param_1 + _DAT_112720788);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272078c,0);
  return;
}



/* Entry: 1052534a8; end: 105253db7; -[SCLagunaSettingsPairingHeaderView initWithDelegate:deviceProductType:onDemandResourceFetching:deviceInfoCardScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1052534a8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_190 [8];
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_d8 = PTR_PTR_1126e72c8;
  uVar16 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar18 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar19 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puVar1 = &uStack_e0;
  puVar4 = (undefined8 *)PTR_s_initWithFrame__1125e2948;
  uStack_e0 = param_1;
  _objc_msgSendSuper2(uVar16,uVar17,uVar18,uVar19);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_112720794);
    *(long *)((long)puVar1 + (long)_DAT_112720798) = param_4;
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar16,uVar17,uVar18,uVar19);
    lVar14 = (long)_DAT_11272079c;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined **)((long)puVar1 + lVar14) = puVar2;
    _objc_release(uVar13);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar14));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar14));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c14c420(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar14));
    _objc_release(puVar2);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010c1bdb00(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010befbb60(puVar1);
    uVar13 = *(undefined8 *)((long)puVar1 + lVar14);
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_105253db8;
    puStack_f0 = &UNK_1108471b0;
    _objc_retain(puVar1);
    puStack_e8 = puVar1;
    func_0x00010c0bbfc0(uVar13);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = (long)_DAT_1127207a0;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined **)((long)puVar1 + lVar15) = puVar2;
    _objc_release(uVar13);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c14c520(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)((long)puVar1 + lVar15));
    _objc_release(puVar2);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010befbb60(puVar1);
    uVar13 = *(undefined8 *)((long)puVar1 + lVar15);
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0xc2000000;
    uStack_120 = 0x105253ea4;
    puStack_118 = &UNK_1108471b0;
    _objc_retain(puVar1);
    puStack_110 = puVar1;
    func_0x00010c0bbfc0(uVar13);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar16,uVar17,uVar18,uVar19);
    lVar15 = (long)_DAT_1127207a4;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined **)((long)puVar1 + lVar15) = puVar2;
    _objc_release(uVar13);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010befbb60(puVar1);
    uVar13 = *(undefined8 *)((long)puVar1 + lVar15);
    puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_150 = 0xc2000000;
    pcStack_148 = FUN_105254040;
    puStack_140 = &UNK_1108471b0;
    _objc_retain(puVar1);
    puStack_138 = puVar1;
    func_0x00010c0bbfc0(uVar13);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar16,uVar17,uVar18,uVar19);
    lVar15 = (long)_DAT_1127207a8;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined **)((long)puVar1 + lVar15) = puVar2;
    _objc_release(uVar13);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010c1bdb00(*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010befbb60(puVar1);
    uVar13 = *(undefined8 *)((long)puVar1 + lVar15);
    puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_178 = 0xc2000000;
    pcStack_170 = FUN_1052540c0;
    puStack_168 = &UNK_1108471b0;
    _objc_retain(puVar1);
    puStack_160 = puVar1;
    func_0x00010c0bbfc0(uVar13);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b6a18;
    _objc_alloc();
    func_0x00010c014a40(uVar16,uVar17,uVar18,uVar19);
    lVar15 = (long)_DAT_1127207ac;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined **)((long)puVar1 + lVar15) = puVar2;
    _objc_release(uVar16);
    func_0x00010befbb60(puVar1);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar15));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar18 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar18;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar17;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar19;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_a8 = uVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar5);
    _objc_release(uVar16);
    _objc_release(puVar4);
    _objc_release(uVar19);
    _objc_release(uVar17);
    _objc_release(puVar3);
    _objc_release(uVar18);
    func_0x00010bdea3a0(puVar1);
    puVar4 = param_3;
    if (param_4 == 0) {
      puVar2 = PTR_PTR_1126b40c0;
      _objc_alloc_init();
      lVar15 = (long)_DAT_1127207b0;
      uVar16 = *(undefined8 *)((long)puVar1 + lVar15);
      *(undefined **)((long)puVar1 + lVar15) = puVar2;
      _objc_release(uVar16);
      _objc_initWeak(&uStack_188,puVar1);
      puVar5 = PTR_PTR_1126b6a20;
      _objc_alloc();
      puVar4 = &uStack_188;
      _objc_copyWeak(auStack_190);
      func_0x00010c061600();
      func_0x00010bf9d620(param_6);
      func_0x00010befbb60(puVar1);
      func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar15));
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar13 = *(undefined8 *)((long)puVar1 + lVar15);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)puVar1 + lVar14);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar13;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_d0 = uVar16;
      uVar7 = *(undefined8 *)((long)puVar1 + lVar15);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010bf1ff80(puVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar7;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_c8 = uVar17;
      uVar8 = *(undefined8 *)((long)puVar1 + lVar15);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar1;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_c0 = uVar18;
      uVar10 = *(undefined8 *)((long)puVar1 + lVar15);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar1;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar10;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_b8 = uVar19;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar2);
      _objc_release(puVar12);
      _objc_release(uVar19);
      _objc_release(puVar11);
      _objc_release(uVar10);
      _objc_release(uVar18);
      _objc_release(puVar9);
      _objc_release(uVar8);
      _objc_release(uVar17);
      _objc_release(puVar3);
      _objc_release(uVar7);
      _objc_release(uVar16);
      _objc_release(uVar6);
      _objc_release(uVar13);
      _objc_release(puVar5);
      _objc_destroyWeak(auStack_190);
      _objc_destroyWeak(&uStack_188);
    }
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127207b4) = 0;
    func_0x00010be88d40(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    _objc_release(puStack_160);
    _objc_release(puStack_138);
    _objc_release(puStack_110);
    _objc_release(puStack_e8);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_190);
  _objc_destroyWeak(&uStack_188);
  __Unwind_Resume();
  _objc_retain(puVar4);
  puVar1 = puVar4;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar3;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)puVar9[2])();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = puVar4;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)puVar4[2])();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 105253db8; end: 10525403f;  */

void FUN_105253db8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105254040; end: 1052540bf;  */

void FUN_105254040(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1052540c0; end: 105254247;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052540c0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127207a4);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4032000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105254248; end: 105254297;  */

void FUN_105254248(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f3200();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105254298; end: 1052542b7; -[SCLagunaSettingsPairingHeaderView setState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105254298(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == *(long *)(param_1 + _DAT_1127207b4)) {
    return;
  }
  *(long *)(param_1 + _DAT_1127207b4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be88d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshViewForState__11257fcf0);
  return;
}



/* Entry: 1052542b8; end: 1052545e3; -[SCLagunaSettingsPairingHeaderView _refreshViewForState:] */

/* WARNING: Possible PIC construction at 0x000105254300: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105254320: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105254340: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105254360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105254498: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001052544b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001052544d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001052544f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001052543ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010525440c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010525442c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010525444c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001052543b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105254564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105254584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105254544: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105254588) */
/* WARNING: Removing unreachable block (ram,0x000105254568) */
/* WARNING: Removing unreachable block (ram,0x0001052543b8) */
/* WARNING: Removing unreachable block (ram,0x000105254450) */
/* WARNING: Removing unreachable block (ram,0x0001052545b4) */
/* WARNING: Removing unreachable block (ram,0x000105254460) */
/* WARNING: Removing unreachable block (ram,0x000105254464) */
/* WARNING: Removing unreachable block (ram,0x000105254430) */
/* WARNING: Removing unreachable block (ram,0x000105254410) */
/* WARNING: Removing unreachable block (ram,0x0001052543f0) */
/* WARNING: Removing unreachable block (ram,0x0001052544fc) */
/* WARNING: Removing unreachable block (ram,0x0001052544dc) */
/* WARNING: Removing unreachable block (ram,0x0001052544bc) */
/* WARNING: Removing unreachable block (ram,0x00010525449c) */
/* WARNING: Removing unreachable block (ram,0x000105254364) */
/* WARNING: Removing unreachable block (ram,0x0001052545c0) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Removing unreachable block (ram,0x000105254344) */
/* WARNING: Removing unreachable block (ram,0x000105254324) */
/* WARNING: Removing unreachable block (ram,0x000105254304) */
/* WARNING: Removing unreachable block (ram,0x000105254548) */
/* WARNING: Removing unreachable block (ram,0x000105254564) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052542b8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_1127207a4);
      uVar2 = 1;
    }
    else {
      if (param_3 != 1) {
        return;
      }
      uVar1 = *(undefined8 *)(param_1 + _DAT_1127207a4);
      uVar2 = 1;
    }
  }
  else if (param_3 == 2) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127207a4);
    uVar2 = 1;
  }
  else if (param_3 == 3) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127207a4);
    uVar2 = 0;
  }
  else {
    if (param_3 != 4) {
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127207a4);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setHidden__1126479f8,uVar2);
  return;
}



/* Entry: 1052545e4; end: 10525473b; -[SCLagunaSettingsPairingHeaderView height] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1052545e4(double param_1,double param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  double dVar3;
  
  lVar2 = *(long *)(param_3 + (long)_DAT_1127207b4);
  dVar3 = 0.0;
  if (lVar2 < 3) {
    if (lVar2 == 0) {
      uVar1 = param_3;
      func_0x00010be3ee40();
      if ((uVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf9c290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(undefined8 *)(param_3 + (long)_DAT_1127207ac),PTR_s_expectedHeight_1125c4a48);
        return param_1;
      }
    }
    else if ((lVar2 == 2) && (uVar1 = param_3, func_0x00010be3ee40(), (uVar1 & 1) == 0)) {
      lVar2 = *(long *)(param_3 + (long)_DAT_1127207b0);
      dVar3 = 204.0;
      func_0x00010be3d5e0(0x4069800000000000,param_3);
      if (lVar2 != 0) {
        dVar3 = dVar3 + 240.0;
      }
    }
  }
  else if (lVar2 == 3) {
    func_0x00010c0699c0(*(undefined8 *)(param_3 + (long)_DAT_1127207a4));
    dVar3 = 300.0;
    func_0x00010be3d5e0(0x4072c00000000000,param_3);
    dVar3 = param_2 + 18.0 + dVar3;
  }
  else if (lVar2 == 4) {
    func_0x00010c0699c0(*(undefined8 *)(param_3 + (long)_DAT_1127207a4));
    dVar3 = 300.0;
    func_0x00010be3d5e0(0x4072c00000000000,param_3);
    dVar3 = param_2 + 18.0 + dVar3 + 15.0 + 44.0;
  }
  return dVar3;
}



/* Entry: 10525473c; end: 105254753; -[SCLagunaSettingsPairingHeaderView _isCheeriosAndPairingDisabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10525473c(long param_1)

{
  return *(long *)(param_1 + _DAT_112720798) == 1;
}



/* Entry: 105254754; end: 10525478b; -[SCLagunaSettingsPairingHeaderView _didPressInfoButton] */

void FUN_105254754(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f31e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10525478c; end: 1052547c3; -[SCLagunaSettingsPairingHeaderView _didPressActionButton] */

void FUN_10525478c(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f31c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052547c4; end: 105254a7b; -[SCLagunaSettingsPairingHeaderView _createActionButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052547c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double in_d3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  double dStack_58;
  
  puVar1 = PTR_PTR_1126af938;
  _objc_alloc_init();
  lVar6 = (long)_DAT_1127207b8;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2c00();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c17d4c0(uVar4,param_2,0);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  func_0x000109025150();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar5,param_2,uVar4,0);
  _objc_release(uVar4);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar6),param_2,
                      &PTR____CFConstantStringClassReference_110dcd778);
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar6),param_2,
                      &PTR____CFConstantStringClassReference_110dcd778);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar6),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c271420(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar4);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c271420(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(uVar4);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  dVar7 = 22.0;
  func_0x00010c1842e0();
  _objc_release(uVar4);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar6),param_2,param_1,
                      PTR_s__didPressActionButton_11255d518,0x40);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar6));
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c271420(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c271420(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bfb3a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dce0(uVar4,param_2,uVar5);
  dVar8 = 14.0;
  func_0x00010c2712a0(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c2712a0(*(undefined8 *)(param_1 + lVar6));
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105254a7c;
  puStack_68 = &UNK_11084fc28;
  lStack_60 = param_1;
  dStack_58 = dVar7 + 14.0 + dVar8 + in_d3;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar6),param_2,&puStack_80);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105254a7c; end: 105254c27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105254a7c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127207a8);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x402e000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x28),PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105254c28; end: 105254ccb; -[SCLagunaSettingsPairingHeaderView _intrinsicHeightForLabel:width:] */

undefined8
FUN_105254c28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c26b700(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bfb3a80(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar4 = 0x7fefffffffffffff;
  func_0x00010c26b720(param_1,0x7fefffffffffffff,puVar1,param_3,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return uVar4;
}



/* Entry: 105254ccc; end: 105254cdb; -[SCLagunaSettingsPairingHeaderView state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105254ccc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127207b4);
}



/* Entry: 105254cdc; end: 105254cfb; -[SCLagunaSettingsPairingHeaderView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105254cdc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112720794);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105254cfc; end: 105254d0f; -[SCLagunaSettingsPairingHeaderView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105254cfc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112720794,param_3);
  return;
}



/* Entry: 105254d10; end: 105254d1f; -[SCLagunaSettingsPairingHeaderView deviceProductType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105254d10(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112720798);
}



/* Entry: 105254d20; end: 105254d2f; -[SCLagunaSettingsPairingHeaderView titleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105254d20(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127207a4);
}



/* Entry: 105254d30; end: 105254d6f; -[SCLagunaSettingsPairingHeaderView setTitleLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105254d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127207a4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105254d70; end: 105254d7f; -[SCLagunaSettingsPairingHeaderView subtextLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105254d70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127207a8);
}



/* Entry: 105254d80; end: 105254dbf; -[SCLagunaSettingsPairingHeaderView setSubtextLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105254d80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127207a8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105254dc0; end: 105254dcf; -[SCLagunaSettingsPairingHeaderView instructionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105254dc0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127207ac);
}



/* Entry: 105254dd0; end: 105254e0f; -[SCLagunaSettingsPairingHeaderView setInstructionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105254dd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127207ac;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105254e10; end: 105254e1f; -[SCLagunaSettingsPairingHeaderView infoLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105254e10(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272079c);
}



/* Entry: 105254e20; end: 105254e5f; -[SCLagunaSettingsPairingHeaderView setInfoLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105254e20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272079c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105254e60; end: 105254e6f; -[SCLagunaSettingsPairingHeaderView infoButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105254e60(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127207a0);
}



/* Entry: 105254e70; end: 105254eaf; -[SCLagunaSettingsPairingHeaderView setInfoButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105254e70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127207a0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105254eb0; end: 105254ebf; -[SCLagunaSettingsPairingHeaderView actionButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105254eb0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127207b8);
}



/* Entry: 105254ec0; end: 105254eff; -[SCLagunaSettingsPairingHeaderView setActionButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105254ec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127207b8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105254f00; end: 105254f0f; -[SCLagunaSettingsPairingHeaderView viewContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105254f00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127207b0);
}



/* Entry: 105254f10; end: 105254f4f; -[SCLagunaSettingsPairingHeaderView setViewContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105254f10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127207b0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105254f50; end: 105254feb; -[SCLagunaSettingsPairingHeaderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105254f50(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127207b0,0);
  _objc_storeStrong(param_1 + _DAT_1127207b8,0);
  _objc_storeStrong(param_1 + _DAT_1127207a0,0);
  _objc_storeStrong(param_1 + _DAT_11272079c,0);
  _objc_storeStrong(param_1 + _DAT_1127207ac,0);
  _objc_storeStrong(param_1 + _DAT_1127207a8,0);
  _objc_storeStrong(param_1 + _DAT_1127207a4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112720794);
  return;
}



/* Entry: 105254fec; end: 10525576f; -[SCSpectaclesSettingsEyewearInstructionView initWithFrame:onDemandResourceFetching:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105254fec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined *param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined **unaff_x24;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined *puStack_e0;
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
  puVar8 = param_7;
  _objc_retain(param_7);
  puStack_e0 = PTR_PTR_1126e72d0;
  puVar1 = &uStack_e8;
  puVar2 = PTR_s_initWithFrame__1125e2948;
  uStack_e8 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    uVar18 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar19 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar18,uVar19,uVar20,uVar21);
    lVar17 = (long)_DAT_1127207bc;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined **)((long)puVar1 + lVar17) = puVar2;
    _objc_release(uVar15);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar17));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar17));
    uVar15 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c21ad00(uVar15);
    func_0x000109026638();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar17));
    _objc_release(uVar15);
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar17));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c274200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar15;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bf34860(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar15);
    _objc_release(puVar4);
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar18,uVar19,uVar20,uVar21);
    lVar16 = (long)_DAT_1127207c0;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar16);
    *(undefined **)((long)puVar1 + lVar16) = puVar2;
    _objc_release(uVar15);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar16));
    func_0x00010c1bdb00(*(undefined8 *)((long)puVar1 + lVar16));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar16));
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar16));
    ppuVar9 = &PTR____CFConstantStringClassReference_110dcd798;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcd798,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar16));
    _objc_release(ppuVar9);
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar16));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010bf1ff80(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar5;
    func_0x00010bf493c0(0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar15;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar11;
    func_0x00010bf49420(0x4072c00000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar7;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf34860(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_a8 = uVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar8);
    _objc_release(uVar3);
    _objc_release(puVar4);
    _objc_release(uVar12);
    _objc_release(uVar7);
    _objc_release(uVar11);
    _objc_release(uVar15);
    _objc_release(uVar10);
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(uVar18,uVar19,uVar20,uVar21);
    lVar17 = (long)_DAT_1127207c4;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined **)((long)puVar1 + lVar17) = puVar2;
    _objc_release(uVar15);
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar17));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar10;
    func_0x00010bf493c0(0x402c000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uVar15;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = uVar7;
    uVar18 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar18;
    func_0x00010bf49420(0x4069800000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar5;
    uVar19 = *(undefined8 *)((long)puVar1 + lVar17);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar19;
    func_0x00010bf49420(0x4069800000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_c0 = uVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar8);
    _objc_release(uVar3);
    _objc_release(uVar19);
    _objc_release(uVar5);
    _objc_release(uVar18);
    _objc_release(uVar7);
    _objc_release(puVar4);
    _objc_release(uVar12);
    _objc_release(uVar15);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_initWeak(auStack_f0,puVar1);
    puVar13 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = 0x11;
    FUN_105ab0c58();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar13;
    func_0x00010bfe7d80();
    _objc_retainAutoreleasedReturnValue();
    puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_105255770;
    puStack_100 = &UNK_110856cc0;
    unaff_x24 = &puStack_118;
    puVar14 = auStack_f8;
    puVar2 = auStack_f0;
    _objc_copyWeak(puVar14,puVar2);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(puVar8);
    _objc_release(puVar14);
    _objc_release(puVar8);
    _objc_release(uVar15);
    _objc_release(puVar13);
    puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar13;
    func_0x00010c16e440(puVar1);
    _objc_release(puVar13);
    _objc_destroyWeak(auStack_f8);
    _objc_destroyWeak(auStack_f0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x24 + 4);
  _objc_destroyWeak(auStack_f0);
  __Unwind_Resume(param_7);
  _objc_retain(puVar8);
  _objc_retain(puVar2);
  puVar1 = (undefined8 *)(param_7 + 0x20);
  _objc_loadWeakRetained(puVar1);
  func_0x00010be2a960();
  _objc_release(puVar8);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 105255770; end: 1052557d7;  */

void FUN_105255770(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a960();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052557d8; end: 1052557ef; -[SCSpectaclesSettingsEyewearInstructionView _handleImage:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052557d8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_1127207c4),PTR_s_setImage__1126481e8);
    return;
  }
  return;
}



/* Entry: 1052557f0; end: 105255877; -[SCSpectaclesSettingsEyewearInstructionView expectedHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1052557f0(undefined8 param_1,double param_2,long param_3)

{
  long lVar1;
  double dVar2;
  
  func_0x00010c0699c0(*(undefined8 *)(param_3 + _DAT_1127207bc));
  _objc_opt_class(param_3);
  dVar2 = 300.0;
  func_0x00010be3d5e0(0x4072c00000000000);
  dVar2 = param_2 + 18.0 + dVar2;
  lVar1 = *(long *)(param_3 + _DAT_1127207c4);
  if (lVar1 != 0) {
    func_0x00010c074c20();
    if ((int)lVar1 == 0) {
      dVar2 = dVar2 + 232.0;
    }
  }
  return dVar2;
}



/* Entry: 105255878; end: 10525591b; +[SCSpectaclesSettingsEyewearInstructionView _intrinsicHeightForLabel:width:] */

undefined8
FUN_105255878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c26b700(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bfb3a80(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar4 = 0x7fefffffffffffff;
  func_0x00010c26b720(param_1,0x7fefffffffffffff,puVar1,param_3,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return uVar4;
}



/* Entry: 10525591c; end: 10525596b; -[SCSpectaclesSettingsEyewearInstructionView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10525591c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127207c4,0);
  _objc_storeStrong(param_1 + _DAT_1127207c0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127207bc,0);
  return;
}



/* Entry: 10525596c; end: 10525599f; -[SCSpectaclesSettingsInstructionView initWithFrame:] */

void FUN_10525596c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e72d8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 1052559a0; end: 1052559f3; -[SCSpectaclesSettingsInstructionView expectedHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_1052559a0(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined *unaff_x21;
  undefined **unaff_x22;
  long lVar11;
  undefined **unaff_x23;
  undefined **ppuVar12;
  undefined **unaff_x24;
  undefined **ppuStack_200;
  undefined *puStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined **ppuStack_1c8;
  undefined1 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  long lStack_90;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  pcStack_28 = FUN_1052559f4;
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = PTR_PTR_1126e72e0;
  ppuVar2 = &puStack_148;
  puStack_148 = puVar1;
  puStack_30 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(ppuVar2,PTR_s_initWithStyle_reuseIdentifier__1125f1528);
  ppuVar3 = (undefined **)0x0;
  if (ppuVar2 != (undefined **)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(ppuVar2);
    _objc_release(puVar1);
    func_0x00010c161260(ppuVar2);
    puVar1 = PTR_PTR_1126b68a0;
    func_0x00010bf692c0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)ppuVar2 + (long)_DAT_1127207c8);
    *(undefined **)((long)ppuVar2 + (long)_DAT_1127207c8) = puVar1;
    _objc_release(uVar10);
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    func_0x00010c01bf60();
    func_0x00010c18c980(ppuVar2);
    _objc_release(puVar1);
    ppuVar3 = ppuVar2;
    func_0x00010bf4dce0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf70700(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(ppuVar3);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar2;
    func_0x00010bf70700(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(ppuVar3);
    ppuStack_180 = (undefined **)PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    ppuVar3 = ppuVar2;
    func_0x00010bf70700();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_150 = ppuVar3;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_158 = ppuVar3;
    func_0x00010bf49420(0x403e000000000000);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    ppuStack_160 = ppuVar3;
    ppuStack_b0 = ppuVar3;
    func_0x00010bf70700();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_168 = ppuVar4;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_170 = ppuVar4;
    func_0x00010bf49420(0x403e000000000000);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    ppuStack_178 = ppuVar4;
    ppuStack_a8 = ppuVar4;
    func_0x00010bf70700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar2;
    func_0x00010c08de00(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010bf493c0(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar2;
    ppuStack_a0 = ppuVar5;
    func_0x00010bf70700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar2;
    func_0x00010c274200(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar7;
    func_0x00010bf493c0(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_98 = ppuVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(ppuStack_180);
    _objc_release(puVar1);
    _objc_release(ppuVar9);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar12);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuStack_178);
    _objc_release(ppuStack_170);
    _objc_release(ppuStack_168);
    _objc_release(ppuStack_160);
    _objc_release(ppuStack_158);
    _objc_release(ppuStack_150);
    puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc_init(PTR__OBJC_CLASS___UIStackView_1126aefe8);
    func_0x00010c1b7280(ppuVar2);
    _objc_release(puVar1);
    ppuVar3 = ppuVar2;
    func_0x00010c0877c0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e060();
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar2;
    func_0x00010c0877c0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c166c00();
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar2;
    func_0x00010c0877c0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c190b80();
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar2;
    func_0x00010bf4dce0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010c0877c0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(ppuVar3);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
    func_0x00010c18cc00(ppuVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bf70c40(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(ppuVar3);
    _objc_release(puVar1);
    ppuVar3 = ppuVar2;
    func_0x00010c0877c0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf70c40(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6d60(ppuVar3);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
    func_0x00010c18c820(ppuVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bf70100(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(ppuVar3);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c127e40(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bf70100(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(ppuVar3);
    _objc_release(puVar1);
    ppuVar3 = ppuVar2;
    func_0x00010c0877c0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf70100(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6d60(ppuVar3);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    func_0x00010c16fa20(ppuVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bf175a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(ppuVar3);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bf175a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(ppuVar3);
    _objc_release(puVar1);
    ppuVar3 = ppuVar2;
    func_0x00010bf175a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(ppuVar3);
    ppuVar4 = ppuVar2;
    func_0x00010bf4dce0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bf175a0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar4);
    ppuVar3 = ppuVar2;
    func_0x00010bf175a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(ppuVar3);
    ppuStack_160 = (undefined **)PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    ppuVar9 = ppuVar2;
    func_0x00010bf175a0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_150 = ppuVar9;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar2;
    ppuStack_158 = ppuVar9;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493c0(0xc028000000000000);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar2;
    ppuStack_c0 = ppuVar9;
    func_0x00010bf175a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar7;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar2;
    func_0x00010c0877c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar5;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_b8 = ppuVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(ppuStack_160);
    _objc_release(puVar1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar12);
    _objc_release(ppuVar5);
    _objc_release(ppuVar6);
    _objc_release(ppuVar7);
    _objc_release(ppuVar9);
    _objc_release(ppuVar3);
    _objc_release(ppuVar8);
    _objc_release(ppuStack_158);
    _objc_release(ppuStack_150);
    ppuVar3 = (undefined **)PTR_PTR_1126b6a28;
    _objc_alloc();
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e900();
    ppuStack_150 = ppuVar3;
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b6a30;
    _objc_alloc();
    func_0x00010c001640();
    func_0x00010c16fba0(ppuVar2);
    _objc_release(puVar1);
    ppuVar4 = ppuVar2;
    func_0x00010bf4dce0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bf177e0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar4);
    ppuVar3 = ppuVar2;
    func_0x00010bf177e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(ppuVar3);
    ppuStack_188 = (undefined **)PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    ppuVar12 = ppuVar2;
    func_0x00010bf177e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_158 = ppuVar12;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    ppuStack_168 = ppuVar12;
    func_0x00010bf175a0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_160 = ppuVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_170 = ppuVar3;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    ppuStack_178 = ppuVar12;
    ppuStack_e0 = ppuVar12;
    func_0x00010bf177e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_180 = ppuVar4;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    ppuStack_198 = ppuVar4;
    func_0x00010c0877c0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_190 = ppuVar3;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar2;
    ppuStack_d8 = ppuVar4;
    func_0x00010bf177e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar12;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar9;
    func_0x00010bf49420(0x401a000000000000);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar2;
    ppuStack_d0 = ppuVar8;
    func_0x00010bf177e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar7;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar6;
    func_0x00010bf49420(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_c8 = ppuVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(ppuStack_188);
    _objc_release(puVar1);
    _objc_release(ppuVar5);
    _objc_release(ppuVar6);
    _objc_release(ppuVar7);
    _objc_release(ppuVar8);
    _objc_release(ppuVar9);
    _objc_release(ppuVar12);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuStack_190);
    _objc_release(ppuStack_198);
    _objc_release(ppuStack_180);
    _objc_release(ppuStack_178);
    _objc_release(ppuStack_170);
    _objc_release(ppuStack_160);
    _objc_release(ppuStack_168);
    _objc_release(ppuStack_158);
    puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_alloc_init();
    func_0x00010c180dc0(ppuVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bf48b20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c271420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(puVar1);
    ppuVar3 = ppuVar2;
    func_0x00010bf48b20(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x000109026650();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(ppuVar3);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar2;
    func_0x00010bf48b20();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(ppuVar3);
    _objc_release(puVar1);
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar2;
    func_0x00010bf48b20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbd60();
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar2;
    func_0x00010bf48b20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(ppuVar3);
    ppuVar4 = ppuVar2;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bf48b20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar4);
    ppuVar3 = ppuVar2;
    func_0x00010bf48b20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(ppuVar3);
    ppuStack_168 = (undefined **)PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    ppuVar3 = ppuVar2;
    func_0x00010bf48b20();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_158 = ppuVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar2;
    ppuStack_160 = ppuVar3;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar9;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493c0(0xc028000000000000);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar2;
    ppuStack_f0 = ppuVar3;
    func_0x00010bf48b20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar7;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar2;
    func_0x00010c0877c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar5;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_e8 = ppuVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(ppuStack_168);
    _objc_release(puVar1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar12);
    _objc_release(ppuVar5);
    _objc_release(ppuVar6);
    _objc_release(ppuVar7);
    _objc_release(ppuVar3);
    _objc_release(ppuVar8);
    _objc_release(ppuVar9);
    _objc_release(ppuStack_160);
    _objc_release(ppuStack_158);
    ppuVar3 = ppuVar2;
    func_0x00010c0877c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(ppuVar3);
    ppuStack_190 = (undefined **)PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    ppuVar12 = ppuVar2;
    func_0x00010c0877c0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_158 = ppuVar12;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    ppuStack_168 = ppuVar12;
    func_0x00010bf70700();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_160 = ppuVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_170 = ppuVar3;
    func_0x00010bf493c0(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    ppuStack_178 = ppuVar12;
    ppuStack_110 = ppuVar12;
    func_0x00010c0877c0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_180 = ppuVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    ppuStack_198 = ppuVar4;
    func_0x00010bf48b20();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_188 = ppuVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1a0 = ppuVar3;
    func_0x00010bf493c0(0xc028000000000000);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar2;
    ppuStack_1a8 = ppuVar4;
    ppuStack_108 = ppuVar4;
    func_0x00010c0877c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar9;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar2;
    func_0x00010bf70700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar7;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar2;
    ppuStack_100 = ppuVar5;
    func_0x00010c0877c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar12;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar4;
    func_0x00010bf49420(0x4042000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_f8 = ppuVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(ppuStack_190);
    _objc_release(puVar1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar4);
    _objc_release(ppuVar12);
    _objc_release(ppuVar5);
    _objc_release(ppuVar6);
    _objc_release(ppuVar7);
    _objc_release(ppuVar8);
    _objc_release(ppuVar9);
    _objc_release(ppuStack_1a8);
    _objc_release(ppuStack_1a0);
    _objc_release(ppuStack_188);
    _objc_release(ppuStack_198);
    _objc_release(ppuStack_180);
    _objc_release(ppuStack_178);
    _objc_release(ppuStack_170);
    _objc_release(ppuStack_160);
    _objc_release(ppuStack_168);
    _objc_release(ppuStack_158);
    ppuVar3 = ppuVar2;
    func_0x00010bf48b20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181f00(0x443b8000);
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar2;
    func_0x00010c0877c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181f00(0x437a0000);
    _objc_release(ppuVar3);
    puVar1 = PTR_PTR_1126afd30;
    _objc_alloc();
    func_0x00010bfffc60();
    func_0x00010c180e60(ppuVar2);
    _objc_release(puVar1);
    ppuVar3 = ppuVar2;
    func_0x00010bf4dce0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf48c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(ppuVar3);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar2;
    func_0x00010bf48c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(ppuVar3);
    ppuStack_168 = (undefined **)PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    ppuVar8 = ppuVar2;
    func_0x00010bf48c60();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_158 = ppuVar8;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar2;
    ppuStack_160 = ppuVar8;
    func_0x00010bf48b20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar7;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar2;
    ppuStack_120 = ppuVar8;
    func_0x00010bf48c60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar5;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf48b20(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar4;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_118 = ppuVar9;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(ppuStack_168);
    _objc_release(puVar1);
    _objc_release(ppuVar9);
    _objc_release(ppuVar3);
    _objc_release(ppuVar4);
    _objc_release(ppuVar12);
    _objc_release(ppuVar5);
    _objc_release(ppuVar8);
    _objc_release(ppuVar6);
    _objc_release(ppuVar7);
    _objc_release(ppuStack_160);
    _objc_release(ppuStack_158);
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    func_0x00010c18ce80(ppuVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bf71040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(ppuVar3);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c127e40(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bf71040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(ppuVar3);
    _objc_release(puVar1);
    ppuVar3 = ppuVar2;
    func_0x00010bf71040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdb00();
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar2;
    func_0x00010bf71040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cfce0();
    _objc_release(ppuVar3);
    ppuVar4 = ppuVar2;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bf71040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar4);
    ppuVar3 = ppuVar2;
    func_0x00010bf71040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(ppuVar3);
    ppuStack_188 = (undefined **)PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    ppuVar4 = ppuVar2;
    func_0x00010bf71040();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_158 = ppuVar4;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    ppuStack_168 = ppuVar4;
    func_0x00010c0877c0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_160 = ppuVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_170 = ppuVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar2;
    ppuStack_178 = ppuVar4;
    ppuStack_138 = ppuVar4;
    func_0x00010bf71040();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_180 = ppuVar6;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c2793a0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar6;
    func_0x00010bf493c0(0xc041800000000000);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar2;
    ppuStack_130 = ppuVar5;
    func_0x00010bf71040();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = ppuVar12;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = ppuVar2;
    func_0x00010c0877c0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = unaff_x23;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = unaff_x22;
    func_0x00010bf493c0(0x402c000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_128 = ppuVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(ppuStack_188);
    _objc_release(puVar1);
    _objc_release(ppuVar4);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(ppuVar12);
    _objc_release(ppuVar5);
    _objc_release(ppuVar3);
    _objc_release(ppuVar6);
    _objc_release(ppuStack_180);
    _objc_release(ppuStack_178);
    _objc_release(ppuStack_170);
    _objc_release(ppuStack_160);
    _objc_release(ppuStack_168);
    _objc_release(ppuStack_158);
    param_2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    unaff_x21 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_2);
    _objc_release(unaff_x21);
    func_0x00010c1faee0(ppuVar2);
    _objc_release(param_2);
    ppuVar3 = ppuStack_150;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  pcStack_1b8 = FUN_1052570ec;
  puStack_1f8 = PTR_PTR_1126e72e0;
  ppuStack_200 = ppuVar3;
  ppuStack_1f0 = unaff_x24;
  ppuStack_1e8 = unaff_x23;
  ppuStack_1e0 = unaff_x22;
  puStack_1d8 = unaff_x21;
  puStack_1d0 = param_2;
  ppuStack_1c8 = ppuVar2;
  ppuStack_1c0 = &puStack_30;
  _objc_msgSendSuper2(&ppuStack_200,PTR_s_traitCollectionDidChange__11267bf88);
  ppuVar2 = ppuVar3;
  func_0x00010bf70700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar2;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_1127207c8;
  ppuVar12 = *(undefined ***)((long)ppuVar3 + lVar11);
  _objc_release();
  _objc_release(ppuVar2);
  if (ppuVar4 == ppuVar12) {
    puVar1 = PTR_PTR_1126b68a0;
    func_0x00010bf692c0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)ppuVar3 + lVar11);
    *(undefined **)((long)ppuVar3 + lVar11) = puVar1;
    _objc_release(uVar10);
    func_0x00010bf70700(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(ppuVar3);
    ppuVar2 = ppuVar3;
  }
  return ppuVar2;
}



/* Entry: 1052559f4; end: 1052570eb; -[SCLagunaSettingsDeviceCell initWithStyle:reuseIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1052559f4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined8 *unaff_x22;
  long lVar11;
  undefined8 *unaff_x23;
  undefined8 *puVar12;
  undefined8 *unaff_x24;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = PTR_PTR_1126e72e0;
  puVar1 = &uStack_128;
  uStack_128 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithStyle_reuseIdentifier__1125f1528);
  puVar3 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c161260(puVar1);
    puVar2 = PTR_PTR_1126b68a0;
    func_0x00010bf692c0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127207c8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127207c8) = puVar2;
    _objc_release(uVar10);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    func_0x00010c01bf60();
    func_0x00010c18c980(puVar1);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf70700(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bf70700(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(puVar3);
    puStack_160 = (undefined8 *)PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = puVar1;
    func_0x00010bf70700();
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = puVar3;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puStack_138 = puVar3;
    func_0x00010bf49420(0x403e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    puStack_140 = puVar3;
    puStack_90 = puVar3;
    func_0x00010bf70700();
    _objc_retainAutoreleasedReturnValue();
    puStack_148 = puVar4;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puStack_150 = puVar4;
    func_0x00010bf49420(0x403e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    puStack_158 = puVar4;
    puStack_88 = puVar4;
    func_0x00010bf70700();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010c08de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf493c0(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    puStack_80 = puVar5;
    func_0x00010bf70700();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c274200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf493c0(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_160);
    _objc_release(puVar2);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar12);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puStack_158);
    _objc_release(puStack_150);
    _objc_release(puStack_148);
    _objc_release(puStack_140);
    _objc_release(puStack_138);
    _objc_release(puStack_130);
    puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc_init(PTR__OBJC_CLASS___UIStackView_1126aefe8);
    func_0x00010c1b7280(puVar1);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010c0877c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e060();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c0877c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c166c00();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c0877c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c190b80();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c0877c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
    func_0x00010c18cc00(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf70c40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010c0877c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf70c40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6d60(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
    func_0x00010c18c820(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf70100(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c127e40(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf70100(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010c0877c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf70100(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6d60(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    func_0x00010c16fa20(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf175a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf175a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010bf175a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar3);
    puVar4 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf175a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar4);
    puVar3 = puVar1;
    func_0x00010bf175a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(puVar3);
    puStack_140 = (undefined8 *)PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar9 = puVar1;
    func_0x00010bf175a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = puVar9;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    puStack_138 = puVar9;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493c0(0xc028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    puStack_a0 = puVar9;
    func_0x00010bf175a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c0877c0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar5;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_140);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar12);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar9);
    _objc_release(puVar3);
    _objc_release(puVar8);
    _objc_release(puStack_138);
    _objc_release(puStack_130);
    puVar3 = (undefined8 *)PTR_PTR_1126b6a28;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e900();
    puStack_130 = puVar3;
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b6a30;
    _objc_alloc();
    func_0x00010c001640();
    func_0x00010c16fba0(puVar1);
    _objc_release(puVar2);
    puVar4 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf177e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar4);
    puVar3 = puVar1;
    func_0x00010bf177e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(puVar3);
    puStack_168 = (undefined8 *)PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar12 = puVar1;
    func_0x00010bf177e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_138 = puVar12;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    puStack_148 = puVar12;
    func_0x00010bf175a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_140 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_150 = puVar3;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    puStack_158 = puVar12;
    puStack_c0 = puVar12;
    func_0x00010bf177e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_160 = puVar4;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    puStack_178 = puVar4;
    func_0x00010c0877c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_170 = puVar3;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    puStack_b8 = puVar4;
    func_0x00010bf177e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar12;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar9;
    func_0x00010bf49420(0x401a000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    puStack_b0 = puVar8;
    func_0x00010bf177e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010bf49420(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a8 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_168);
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar8);
    _objc_release(puVar9);
    _objc_release(puVar12);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puStack_170);
    _objc_release(puStack_178);
    _objc_release(puStack_160);
    _objc_release(puStack_158);
    _objc_release(puStack_150);
    _objc_release(puStack_140);
    _objc_release(puStack_148);
    _objc_release(puStack_138);
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_alloc_init();
    func_0x00010c180dc0(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf48b20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c271420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar4 = puVar1;
    func_0x00010bf48b20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x000109026650();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar4);
    puVar3 = puVar1;
    func_0x00010bf48b20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bf48b20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbd60();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bf48b20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar3);
    puVar4 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf48b20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar4);
    puVar3 = puVar1;
    func_0x00010bf48b20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(puVar3);
    puStack_148 = (undefined8 *)PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = puVar1;
    func_0x00010bf48b20();
    _objc_retainAutoreleasedReturnValue();
    puStack_138 = puVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    puStack_140 = puVar3;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar9;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493c0(0xc028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    puStack_d0 = puVar3;
    func_0x00010bf48b20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c0877c0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar5;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_c8 = puVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_148);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar12);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar3);
    _objc_release(puVar8);
    _objc_release(puVar9);
    _objc_release(puStack_140);
    _objc_release(puStack_138);
    puVar3 = puVar1;
    func_0x00010c0877c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(puVar3);
    puStack_170 = (undefined8 *)PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar12 = puVar1;
    func_0x00010c0877c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_138 = puVar12;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    puStack_148 = puVar12;
    func_0x00010bf70700();
    _objc_retainAutoreleasedReturnValue();
    puStack_140 = puVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_150 = puVar3;
    func_0x00010bf493c0(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    puStack_158 = puVar12;
    puStack_f0 = puVar12;
    func_0x00010c0877c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_160 = puVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    puStack_178 = puVar4;
    func_0x00010bf48b20();
    _objc_retainAutoreleasedReturnValue();
    puStack_168 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_180 = puVar3;
    func_0x00010bf493c0(0xc028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    puStack_188 = puVar4;
    puStack_e8 = puVar4;
    func_0x00010c0877c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar9;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf70700();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    puStack_e0 = puVar5;
    func_0x00010c0877c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar12;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010bf49420(0x4042000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_d8 = puVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_170);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar12);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar8);
    _objc_release(puVar9);
    _objc_release(puStack_188);
    _objc_release(puStack_180);
    _objc_release(puStack_168);
    _objc_release(puStack_178);
    _objc_release(puStack_160);
    _objc_release(puStack_158);
    _objc_release(puStack_150);
    _objc_release(puStack_140);
    _objc_release(puStack_148);
    _objc_release(puStack_138);
    puVar3 = puVar1;
    func_0x00010bf48b20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181f00(0x443b8000);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c0877c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181f00(0x437a0000);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126afd30;
    _objc_alloc(PTR_PTR_1126afd30);
    func_0x00010bfffc60();
    func_0x00010c180e60(puVar1);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf48c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bf48c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(puVar3);
    puStack_148 = (undefined8 *)PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar8 = puVar1;
    func_0x00010bf48c60();
    _objc_retainAutoreleasedReturnValue();
    puStack_138 = puVar8;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    puStack_140 = puVar8;
    func_0x00010bf48b20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    puStack_100 = puVar8;
    func_0x00010bf48c60();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar5;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf48b20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_f8 = puVar9;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_148);
    _objc_release(puVar2);
    _objc_release(puVar9);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar12);
    _objc_release(puVar5);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(puStack_140);
    _objc_release(puStack_138);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    func_0x00010c18ce80(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf71040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c127e40(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf71040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010bf71040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdb00();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010bf71040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cfce0();
    _objc_release(puVar3);
    puVar4 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf71040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar4);
    puVar3 = puVar1;
    func_0x00010bf71040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(puVar3);
    puStack_168 = (undefined8 *)PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = puVar1;
    func_0x00010bf71040();
    _objc_retainAutoreleasedReturnValue();
    puStack_138 = puVar4;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    puStack_148 = puVar4;
    func_0x00010c0877c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_140 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_150 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    puStack_158 = puVar4;
    puStack_118 = puVar4;
    func_0x00010bf71040();
    _objc_retainAutoreleasedReturnValue();
    puStack_160 = puVar6;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c2793a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010bf493c0(0xc041800000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    puStack_110 = puVar5;
    func_0x00010bf71040();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = puVar12;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = puVar1;
    func_0x00010c0877c0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = unaff_x23;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = unaff_x22;
    func_0x00010bf493c0(0x402c000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_108 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_168);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(puVar12);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar6);
    _objc_release(puStack_160);
    _objc_release(puStack_158);
    _objc_release(puStack_150);
    _objc_release(puStack_140);
    _objc_release(puStack_148);
    _objc_release(puStack_138);
    unaff_x20 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    unaff_x21 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(unaff_x20);
    _objc_release(unaff_x21);
    func_0x00010c1faee0(puVar1);
    _objc_release(unaff_x20);
    puVar3 = puStack_130;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_198 = FUN_1052570ec;
  puStack_1d8 = PTR_PTR_1126e72e0;
  puStack_1e0 = puVar3;
  puStack_1d0 = unaff_x24;
  puStack_1c8 = unaff_x23;
  puStack_1c0 = unaff_x22;
  puStack_1b8 = unaff_x21;
  puStack_1b0 = unaff_x20;
  puStack_1a8 = puVar1;
  puStack_1a0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_1e0,PTR_s_traitCollectionDidChange__11267bf88);
  puVar1 = puVar3;
  func_0x00010bf70700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_1127207c8;
  puVar12 = *(undefined8 **)((long)puVar3 + lVar11);
  _objc_release();
  _objc_release(puVar1);
  if (puVar4 == puVar12) {
    puVar2 = PTR_PTR_1126b68a0;
    func_0x00010bf692c0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar3 + lVar11);
    *(undefined **)((long)puVar3 + lVar11) = puVar2;
    _objc_release(uVar10);
    func_0x00010bf70700(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(puVar3);
    puVar1 = puVar3;
  }
  return puVar1;
}



/* Entry: 1052570ec; end: 1052571cb; -[SCLagunaSettingsDeviceCell traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052570ec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126e72e0;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_traitCollectionDidChange__11267bf88);
  lVar1 = param_1;
  func_0x00010bf70700();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_1127207c8;
  lVar6 = *(long *)(param_1 + lVar5);
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == lVar6) {
    puVar3 = PTR_PTR_1126b68a0;
    func_0x00010bf692c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar3;
    _objc_release(uVar4);
    func_0x00010bf70700(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 1052571cc; end: 1052572fb; -[SCLagunaSettingsDeviceCell _setDeviceIconWithIconFuture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052571cc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_1127207cc;
  if (param_3 != *(long *)(param_1 + lVar2)) {
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_1127207d0));
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    _objc_copyWeak(auStack_40,auStack_38);
    lVar2 = param_3;
    _objc_retain(param_3);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar1);
    _objc_release(lVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1052572fc; end: 105257383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052572fc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x20) == *(long *)(lVar1 + _DAT_1127207cc))) {
    lVar2 = lVar1;
    func_0x00010bf70700(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105257384; end: 105257713; -[SCLagunaSettingsDeviceCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105257384(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar3 = (long)_DAT_1127207d4;
  uVar1 = *(ulong *)(param_2 + lVar3);
  func_0x00010c071ae0(uVar1,param_3,param_4);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_2 + lVar3);
    *(undefined8 *)(param_2 + lVar3) = param_4;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0d4f60(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010bf70c40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(lVar3);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c252d60(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010bf70100(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(lVar3);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c2530e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010bf71040(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(lVar3);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c253500(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010bf70100(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(lVar3);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf175e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010bf175a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar3);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf175e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010bf177e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar3);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf175e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010bf175a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(lVar3);
    _objc_release(uVar2);
    func_0x00010bf17500(param_4);
    lVar3 = param_2;
    func_0x00010bf177e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16f9e0(param_1);
    _objc_release(lVar3);
    func_0x00010c06e420(param_4);
    lVar3 = param_2;
    func_0x00010bf177e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1afe80();
    _objc_release(lVar3);
    func_0x00010c0772a0(param_4);
    lVar3 = param_2;
    func_0x00010bf177e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b2660();
    _objc_release(lVar3);
    func_0x00010c236ae0(param_4);
    lVar3 = param_2;
    func_0x00010bf48b20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar3);
    func_0x00010c238140(param_4);
    lVar3 = param_2;
    func_0x00010bf48c60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar3);
    uVar2 = param_4;
    func_0x00010c238140();
    lVar3 = param_2;
    func_0x00010bf48c60(param_2);
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar2 == 0) {
      func_0x00010c2558c0();
    }
    else {
      func_0x00010c24dbc0();
    }
    _objc_release(lVar3);
    uVar2 = param_4;
    func_0x00010bf706e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea3640(param_2,param_3,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105257714; end: 10525777f; -[SCLagunaSettingsDeviceCell _handleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105257714(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127207d4);
  func_0x00010c15e740(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2280c0(lVar1,param_2,param_1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105257780; end: 105257887; +[SCLagunaSettingsDeviceCell cellHeightFor:forBoundingWidth:] */

double FUN_105257780(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c2530e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    dVar4 = 70.0;
  }
  else {
    lVar1 = param_4;
    func_0x00010c2530e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c127e40(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    dVar4 = 9.223372036854776e+18;
    func_0x00010c14dd20(param_1 + -60.0 + -35.0,0x43e0000000000000,lVar1,param_3,puVar3,0);
    _objc_release(puVar3);
    _objc_release(lVar1);
    dVar4 = (double)(long)dVar4 + 67.0 + 14.0;
  }
  _objc_release(param_4);
  return dVar4;
}



/* Entry: 105257888; end: 1052578a7; -[SCLagunaSettingsDeviceCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105257888(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127207d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1052578a8; end: 1052578bb; -[SCLagunaSettingsDeviceCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052578a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127207d8,param_3);
  return;
}



/* Entry: 1052578bc; end: 1052578cb; -[SCLagunaSettingsDeviceCell deviceIconView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1052578bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127207d0);
}



/* Entry: 1052578cc; end: 10525790b; -[SCLagunaSettingsDeviceCell setDeviceIconView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052578cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127207d0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


