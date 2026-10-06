/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b76b98; end: 106b76bdf; -[SCUnauthenticatedBaseView layoutSubviews] */

void FUN_106b76b98(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f52c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010c151ee0(param_1);
  return;
}



/* Entry: 106b76be0; end: 106b76c53; -[SCUnauthenticatedBaseView scrollContentUpIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b76be0(undefined8 param_1,double param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112759054;
  func_0x00010bf4d5e0(*(undefined8 *)(param_5 + lVar1));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar1));
  func_0x00010bf4c7c0(*(undefined8 *)(param_5 + lVar1));
  if (0.0 < (param_2 - param_4) + param_3) {
                    /* WARNING: Could not recover jumptable at 0x00010c182310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (0,*(undefined8 *)(param_5 + lVar1),PTR_s_setContentOffset_animated__11263e2e0,1);
    return;
  }
  return;
}



/* Entry: 106b76c54; end: 106b76c9f; -[SCUnauthenticatedBaseView setActivityAnimating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b76c54(long param_1,undefined8 param_2,uint param_3)

{
  *(char *)(param_1 + _DAT_112759070) = (char)param_3;
  func_0x00010bed3960();
                    /* WARNING: Could not recover jumptable at 0x00010c162d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759060),
             PTR_s_setActivityIndicatorHidden_align_112636580,param_3 ^ 1,0);
  return;
}



/* Entry: 106b76ca0; end: 106b76caf; -[SCUnauthenticatedBaseView setBackButtonHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b76ca0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112759074) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bed3970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateBackButtonVisibility_112592800);
  return;
}



/* Entry: 106b76cb0; end: 106b76ce7; -[SCUnauthenticatedBaseView _updateBackButtonVisibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b76cb0(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + _DAT_112759070) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + _DAT_112759074);
  }
  else {
    bVar1 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275905c),PTR_s_setHidden__1126479f8,bVar1 & 1);
  return;
}



/* Entry: 106b76ce8; end: 106b76d83; -[SCUnauthenticatedBaseView _addObservers] */

void FUN_106b76ce8(void)

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



/* Entry: 106b76d84; end: 106b76f33; -[SCUnauthenticatedBaseView keyboardWillChangeFrame:] */

void FUN_106b76d84(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_7);
  lVar1 = param_7;
  func_0x00010c292820(param_7);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1080();
  _objc_release(lVar2);
  _objc_release(lVar1);
  dVar5 = param_1;
  dVar7 = param_4;
  _CGRectGetMinY(param_1,param_2,param_3);
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar6 = dVar5;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar3);
  if (dVar5 == dVar7) {
    param_1 = 0.0;
  }
  else {
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    dVar6 = param_1;
  }
  lVar1 = param_7;
  func_0x00010c292820(param_7);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_7;
  func_0x00010c292820(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  lVar2 = lVar1;
  func_0x00010c0e00e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c2827c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c285ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,dVar6,param_5,PTR_s_updateFrameWithKeyboardHeight_an_11267f220,lVar4 << 0x10);
  return;
}



/* Entry: 106b76f34; end: 106b76f37; -[SCUnauthenticatedBaseView keyboardDidChangeFrame:] */

void FUN_106b76f34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c151ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_scrollContentUpIfNeeded_1126321d8);
  return;
}



/* Entry: 106b76f38; end: 106b76f47; -[SCUnauthenticatedBaseView containerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b76f38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759054);
}



/* Entry: 106b76f48; end: 106b76f57; -[SCUnauthenticatedBaseView gradientView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b76f48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759068);
}



/* Entry: 106b76f58; end: 106b76f67; -[SCUnauthenticatedBaseView backButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b76f58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275905c);
}



/* Entry: 106b76f68; end: 106b76f77; -[SCUnauthenticatedBaseView continueButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b76f68(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759060);
}



/* Entry: 106b76f78; end: 106b76f87; -[SCUnauthenticatedBaseView continueButtonBottomConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b76f78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759064);
}



/* Entry: 106b76f88; end: 106b76f97; -[SCUnauthenticatedBaseView isActivityAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106b76f88(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112759070);
}



/* Entry: 106b76f98; end: 106b76fa7; -[SCUnauthenticatedBaseView isBackButtonHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106b76f98(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112759074);
}



/* Entry: 106b76fa8; end: 106b77053; -[SCUnauthenticatedBaseView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b76fa8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112759064,0);
  _objc_storeStrong(param_1 + _DAT_112759060,0);
  _objc_storeStrong(param_1 + _DAT_11275905c,0);
  _objc_storeStrong(param_1 + _DAT_112759068,0);
  _objc_storeStrong(param_1 + _DAT_112759054,0);
  _objc_storeStrong(param_1 + _DAT_11275906c,0);
  _objc_storeStrong(param_1 + _DAT_112759058,0);
  _objc_storeStrong(param_1 + _DAT_112759050,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275904c);
  return;
}



/* Entry: 106b77054; end: 106b7709b;  */

void FUN_106b77054(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e75c18;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e75c18,
                      &PTR____CFConstantStringClassReference_110e75c38,0);
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



/* Entry: 106b7709c; end: 106b77107; +[SCCodeInputField solidBottomLineCodeInputFieldWithDelegate:styleHelper:] */

void FUN_106b7709c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c00aea0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106b77108; end: 106b77173; +[SCCodeInputField dashedBottomLineCodeInputFieldWithDelegate:styleHelper:] */

void FUN_106b77108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c00aea0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106b77174; end: 106b7725b; -[SCCodeInputField initWithDelegate:styleHelper:isDashed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106b77174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f52c8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112759078),param_3);
    lVar4 = (long)_DAT_11275907c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112759080) = param_5;
    puVar3 = PTR_PTR_1126af258;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112759084);
    *(undefined **)((long)puVar1 + (long)_DAT_112759084) = puVar3;
    _objc_release(uVar2);
    func_0x00010be39800(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b7725c; end: 106b7726b; -[SCCodeInputField becomeFirstResponder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b7725c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf179b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759088),PTR_s_becomeFirstResponder_1125a3810);
  return;
}



/* Entry: 106b7726c; end: 106b772e7; -[SCCodeInputField setText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b7726c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112759088;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b772e8; end: 106b772f7; -[SCCodeInputField text] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b772e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759088),PTR_s_text_1126787e8);
  return;
}



/* Entry: 106b772f8; end: 106b77307; -[SCCodeInputField isEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b772f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759088),PTR_s_isEnabled_1125fa010);
  return;
}



/* Entry: 106b77308; end: 106b77317; -[SCCodeInputField setEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b77308(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759088),PTR_s_setEnabled__112642f38);
  return;
}



/* Entry: 106b77318; end: 106b774fb; -[SCCodeInputField textField:shouldChangeCharactersInRange:replacementString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106b77318(long param_1,undefined8 param_2,ulong param_3,long param_4,long param_5,
                   long param_6)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar5 = (long)_DAT_112759078;
  uVar2 = param_1 + lVar5;
  _objc_loadWeakRetained();
  uVar4 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar4 & 1) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112759084);
    func_0x00010c078f00();
    if (iVar1 != 0) {
      lVar3 = param_1 + lVar5;
      _objc_loadWeakRetained(lVar3);
      func_0x00010bf3ed00();
      _objc_release(lVar3);
    }
    *(bool *)(param_1 + _DAT_11275908c) = iVar1 != 0;
  }
  if (*(char *)(param_1 + _DAT_112759080) == '\x01') {
    uVar2 = param_3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c08fa60();
    _objc_release(uVar2);
    if ((ulong)(param_5 + param_4) <= uVar4) {
      uVar4 = param_3;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010c08fa60();
      lVar5 = param_6;
      func_0x00010c08fa60();
      uVar2 = (uVar2 - param_5) + lVar5;
      _objc_release(uVar4);
      uVar4 = (ulong)(uVar2 < 6);
      if (uVar2 != 6) goto LAB_106b774d0;
      func_0x00010c0670e0(param_3);
      func_0x00010c13a0e0(param_3);
    }
  }
  else {
    uVar2 = param_1 + lVar5;
    _objc_loadWeakRetained();
    uVar4 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar4 & 1) != 0) {
      uVar2 = param_1 + lVar5;
      _objc_loadWeakRetained(uVar2);
      uVar4 = uVar2;
      func_0x00010c26bc40();
      _objc_release(uVar2);
      goto LAB_106b774d0;
    }
  }
  uVar4 = 0;
LAB_106b774d0:
  _objc_release(param_6);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 106b774fc; end: 106b77583; -[SCCodeInputField _textFieldDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b774fc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112759078;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf3ed20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106b77584; end: 106b7761f; -[SCCodeInputField textFieldShouldReturn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106b77584(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112759078;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c26be80();
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106b77620; end: 106b779c7; -[SCCodeInputField _initCodeInputField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106b77620(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  long lStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined *puStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UITextField_1126af060;
  _objc_alloc_init();
  lVar16 = (long)_DAT_112759088;
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar15);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar16),param_2,param_1);
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c160fc0(uVar15,param_2,&PTR____CFConstantStringClassReference_110dae718);
  FUN_106b78268();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar16),param_2,uVar15);
  _objc_release(uVar15);
  dVar18 = 18.0;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar16),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1b6ec0(*(undefined8 *)(param_1 + lVar16),param_2,0xb);
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar15,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar16),param_2,param_1,
                      PTR_s__textFieldDidChange__1125906f8,0x20000);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16),param_2,0);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar16));
  puStack_c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  uStack_98 = uVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_a0 = lVar17;
  func_0x00010bf493a0(uVar15,param_2,lVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar16);
  uStack_a8 = uVar15;
  uStack_90 = uVar15;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  uStack_b0 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_b8 = lVar17;
  func_0x00010bf493a0(uVar2,param_2,lVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar16);
  uStack_c0 = uVar2;
  uStack_88 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar3;
  func_0x00010bf493a0(uVar3,param_2,lVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar16);
  uStack_80 = uVar15;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6a920(*(undefined8 *)(param_1 + _DAT_11275907c));
  dVar18 = (dVar18 + 6.0) * 6.0;
  uVar2 = uVar4;
  func_0x00010bf49420(dVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar16);
  uStack_78 = uVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar20;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_90,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_c8,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar20);
  _objc_release(lVar16);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar15);
  _objc_release(lVar17);
  _objc_release(uVar3);
  _objc_release(uStack_c0);
  _objc_release(lStack_b8);
  _objc_release(uStack_b0);
  _objc_release(uStack_a8);
  _objc_release(lStack_a0);
  _objc_release(uStack_98);
  lVar6 = param_1;
  if (*(char *)(param_1 + _DAT_112759080) == '\x01') {
    func_0x00010be39980();
  }
  else {
    func_0x00010be3a500();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return dVar18;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_106b779c8;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
  lStack_130 = lVar17;
  uStack_128 = uVar3;
  uStack_120 = uVar15;
  puStack_118 = puVar1;
  uStack_110 = uVar20;
  lStack_108 = lVar16;
  uStack_100 = uVar5;
  uStack_f8 = uVar2;
  uStack_f0 = uVar4;
  lStack_e8 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xae);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar7,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(lVar6,param_2,puVar7);
  func_0x00010c219b60(puVar7,param_2,0);
  puStack_178 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar1 = puVar7;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar6;
  puStack_160 = puVar1;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lStack_168 = lVar17;
  func_0x00010bf493a0(puVar1,param_2,lVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  puStack_170 = puVar1;
  puStack_158 = puVar1;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar6;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar8;
  func_0x00010bf493a0(puVar8,param_2,lVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  puStack_150 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf493a0(puVar9,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar7;
  puStack_148 = puVar10;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  dVar18 = 1.0;
  puVar12 = puVar11;
  func_0x00010bf49420(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_140 = puVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_158,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_178,param_2,puVar13);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(lVar6);
  _objc_release(puVar9);
  _objc_release(puVar1);
  _objc_release(lVar17);
  _objc_release(puVar8);
  _objc_release(puStack_170);
  _objc_release(lStack_168);
  _objc_release(puStack_160);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return dVar18;
  }
  ___stack_chk_fail();
  pcStack_188 = FUN_106b77c40;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  ppuStack_190 = &puStack_e0;
  func_0x00010bfb41a0(0x4040000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,param_2,
                      &PTR____CFConstantStringClassReference_110e75c78);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_112759088;
  func_0x00010c19e480(*(undefined8 *)(puVar7 + lVar17),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1b6ec0(*(undefined8 *)(puVar7 + lVar17),param_2,0xb);
  uVar2 = *(undefined8 *)(puVar7 + lVar17);
  func_0x00010bf6a6c0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar2;
  func_0x00010c0d3c80();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010be1fe20(puVar7);
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar15,param_2,puVar1,*(undefined8 *)PTR__NSKernAttributeName_110345808);
  _objc_release(puVar1);
  uStack_258 = uVar15;
  lStack_240 = lVar17;
  func_0x00010c18b280(*(undefined8 *)(puVar7 + lVar17),param_2,uVar15);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uVar15 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar2 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  lVar17 = -1;
  uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar3 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puStack_250 = puVar7;
  puStack_248 = puVar1;
  do {
    puVar9 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar15,uVar2,uVar20,uVar3);
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xae);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar9,param_2,puVar8);
    _objc_release(puVar8);
    func_0x00010befbb60(puVar7,param_2,puVar9);
    func_0x00010befa120(puVar1,param_2,puVar9);
    func_0x00010c219b60(puVar9,param_2,0);
    puStack_238 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar1 = puVar9;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(puVar7 + lStack_240);
    func_0x00010bf1ff80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010bf493a0(puVar1,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    puStack_220 = puVar8;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    dVar18 = 1.0;
    puVar11 = puVar10;
    func_0x00010bf49420(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar9;
    puStack_218 = puVar11;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6a920(*(undefined8 *)(puVar7 + _DAT_11275907c));
    puVar7 = puVar12;
    func_0x00010bf49420();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_210 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_220,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_238,param_2,puVar13);
    _objc_release(puVar13);
    _objc_release(puVar7);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(uVar4);
    _objc_release(puVar1);
    puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar10 = puVar9;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puStack_248;
    puVar7 = puStack_250;
    if (lVar17 == -1) {
      puVar11 = puStack_250;
      func_0x00010c08de00(puStack_250);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar10;
      func_0x00010bf493a0(puVar10,param_2,puVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_228 = puVar13;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_228,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar8,param_2,puVar14);
      puVar1 = puStack_248;
    }
    else {
      puVar11 = puStack_248;
      func_0x00010c0dfd40(puStack_248,param_2,lVar17);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar11;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      dVar18 = 6.0;
      puVar14 = puVar10;
      func_0x00010bf493c0(0x4018000000000000,puVar10,param_2,puVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_230 = puVar14;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_230,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar8,param_2,puVar7);
      _objc_release(puVar7);
      puVar7 = puStack_250;
    }
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    lVar17 = lVar17 + 1;
  } while (lVar17 != 5);
  _objc_release(puVar1);
  _objc_release(uStack_258);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return dVar18;
  }
  ___stack_chk_fail();
  pcStack_268 = FUN_106b780ac;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar19 = 32.0;
  puVar8 = PTR__OBJC_CLASS___UIFont_1126aec38;
  uStack_2a0 = uVar2;
  uStack_298 = uVar15;
  lStack_290 = lVar17;
  puStack_288 = puVar12;
  puStack_280 = puVar1;
  puStack_278 = puVar7;
  ppuStack_270 = &ppuStack_190;
  func_0x00010bfb41a0(PTR__OBJC_CLASS___UIFont_1126aec38,param_2,
                      &PTR____CFConstantStringClassReference_110e75c78);
  _objc_retainAutoreleasedReturnValue();
  uStack_2c8 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  uStack_2c0 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_2b8 = puVar8;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xae);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_2b0 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_2b8,&uStack_2c8,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c23d660(&PTR____CFConstantStringClassReference_110e75c98,param_2,puVar7);
  dVar18 = dVar19;
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return dVar19;
  }
  ___stack_chk_fail();
  func_0x00010bf6a920(*(undefined8 *)(puVar8 + _DAT_11275907c));
  dVar19 = dVar18 + 6.0;
  func_0x00010be229c0(puVar8);
  return dVar19 - dVar18;
}



/* Entry: 106b779c8; end: 106b77c3f; -[SCCodeInputField _initSolidBottomLine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106b779c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xae);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010befbb60(param_1,param_2,puVar1);
  func_0x00010c219b60(puVar1,param_2,0);
  puStack_a8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar2 = puVar1;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_1;
  puStack_90 = puVar2;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = uVar15;
  func_0x00010bf493a0(puVar2,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  puStack_a0 = puVar2;
  puStack_88 = puVar2;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_1;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010bf493a0(puVar3,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  puStack_80 = puVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf493a0(puVar4,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  puStack_78 = puVar5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  dVar13 = 1.0;
  puVar7 = puVar6;
  func_0x00010bf49420(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_a8,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(uVar15);
  _objc_release(puVar3);
  _objc_release(puStack_a0);
  _objc_release(uStack_98);
  _objc_release(puStack_90);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return dVar13;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_106b77c40;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x00010bfb41a0(0x4040000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,param_2,
                      &PTR____CFConstantStringClassReference_110e75c78);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_112759088;
  func_0x00010c19e480(*(undefined8 *)(puVar1 + lVar12),param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1b6ec0(*(undefined8 *)(puVar1 + lVar12),param_2,0xb);
  uVar9 = *(undefined8 *)(puVar1 + lVar12);
  func_0x00010bf6a6c0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar9;
  func_0x00010c0d3c80();
  _objc_release(uVar9);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010be1fe20(puVar1);
  func_0x00010c0df720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar15,param_2,puVar2,*(undefined8 *)PTR__NSKernAttributeName_110345808);
  _objc_release(puVar2);
  uStack_188 = uVar15;
  lStack_170 = lVar12;
  func_0x00010c18b280(*(undefined8 *)(puVar1 + lVar12),param_2,uVar15);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uVar15 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  lVar12 = -1;
  uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puStack_180 = puVar1;
  puStack_178 = puVar2;
  do {
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar15,uVar9,uVar16,uVar17);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xae);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar4,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010befbb60(puVar1,param_2,puVar4);
    func_0x00010befa120(puVar2,param_2,puVar4);
    func_0x00010c219b60(puVar4,param_2,0);
    puStack_168 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar2 = puVar4;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(puVar1 + lStack_170);
    func_0x00010bf1ff80(uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf493a0(puVar2,param_2,uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    puStack_150 = puVar3;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    dVar13 = 1.0;
    puVar6 = puVar5;
    func_0x00010bf49420(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    puStack_148 = puVar6;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6a920(*(undefined8 *)(puVar1 + _DAT_11275907c));
    puVar1 = puVar7;
    func_0x00010bf49420();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_140 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_150,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_168,param_2,puVar8);
    _objc_release(puVar8);
    _objc_release(puVar1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(uVar10);
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar4;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puStack_178;
    puVar1 = puStack_180;
    if (lVar12 == -1) {
      puVar6 = puStack_180;
      func_0x00010c08de00(puStack_180);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar5;
      func_0x00010bf493a0(puVar5,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_158 = puVar8;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_158,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar3,param_2,puVar11);
      puVar2 = puStack_178;
    }
    else {
      puVar6 = puStack_178;
      func_0x00010c0dfd40(puStack_178,param_2,lVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      dVar13 = 6.0;
      puVar11 = puVar5;
      func_0x00010bf493c0(0x4018000000000000,puVar5,param_2,puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_160 = puVar11;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_160,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar3,param_2,puVar1);
      _objc_release(puVar1);
      puVar1 = puStack_180;
    }
    _objc_release(puVar11);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    lVar12 = lVar12 + 1;
  } while (lVar12 != 5);
  _objc_release(puVar2);
  _objc_release(uStack_188);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return dVar13;
  }
  ___stack_chk_fail();
  pcStack_198 = FUN_106b780ac;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar14 = 32.0;
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  uStack_1d0 = uVar9;
  uStack_1c8 = uVar15;
  lStack_1c0 = lVar12;
  puStack_1b8 = puVar7;
  puStack_1b0 = puVar2;
  puStack_1a8 = puVar1;
  ppuStack_1a0 = &puStack_c0;
  func_0x00010bfb41a0(PTR__OBJC_CLASS___UIFont_1126aec38,param_2,
                      &PTR____CFConstantStringClassReference_110e75c78);
  _objc_retainAutoreleasedReturnValue();
  uStack_1f8 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  uStack_1f0 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_1e8 = puVar3;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xae);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_1e0 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_1e8,&uStack_1f8,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c23d660(&PTR____CFConstantStringClassReference_110e75c98,param_2,puVar2);
  dVar13 = dVar14;
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return dVar14;
  }
  ___stack_chk_fail();
  func_0x00010bf6a920(*(undefined8 *)(puVar3 + _DAT_11275907c));
  dVar14 = dVar13 + 6.0;
  func_0x00010be229c0(puVar3);
  return dVar14 - dVar13;
}



/* Entry: 106b77c40; end: 106b780ab; -[SCCodeInputField _initDashedBottomLine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106b77c40(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bfb41a0(0x4040000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,param_2,
                      &PTR____CFConstantStringClassReference_110e75c78);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_112759088;
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar12),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1b6ec0(*(undefined8 *)(param_1 + lVar12),param_2,0xb);
  uVar2 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf6a6c0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar2;
  func_0x00010c0d3c80();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010be1fe20(param_1);
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar15,param_2,puVar1,*(undefined8 *)PTR__NSKernAttributeName_110345808);
  _objc_release(puVar1);
  uStack_d8 = uVar15;
  lStack_c0 = lVar12;
  func_0x00010c18b280(*(undefined8 *)(param_1 + lVar12),param_2,uVar15);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uVar15 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar2 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  lVar12 = -1;
  uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puStack_d0 = param_1;
  puStack_c8 = puVar1;
  do {
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar15,uVar2,uVar16,uVar17);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xae);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    func_0x00010befbb60(param_1,param_2,puVar3);
    func_0x00010befa120(puVar1,param_2,puVar3);
    func_0x00010c219b60(puVar3,param_2,0);
    puStack_b8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar1 = puVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lStack_c0);
    func_0x00010bf1ff80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf493a0(puVar1,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    puStack_a0 = puVar4;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    dVar13 = 1.0;
    puVar7 = puVar6;
    func_0x00010bf49420(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    puStack_98 = puVar7;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6a920(*(undefined8 *)(param_1 + _DAT_11275907c));
    puVar9 = puVar8;
    func_0x00010bf49420();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a0,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_b8,param_2,puVar10);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(uVar5);
    _objc_release(puVar1);
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar6 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puStack_c8;
    param_1 = puStack_d0;
    if (lVar12 == -1) {
      puVar7 = puStack_d0;
      func_0x00010c08de00(puStack_d0);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar6;
      func_0x00010bf493a0(puVar6,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_a8 = puVar9;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a8,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar4,param_2,puVar10);
      puVar1 = puStack_c8;
    }
    else {
      puVar7 = puStack_c8;
      func_0x00010c0dfd40(puStack_c8,param_2,lVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar7;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      dVar13 = 6.0;
      puVar10 = puVar6;
      func_0x00010bf493c0(0x4018000000000000,puVar6,param_2,puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_b0 = puVar10;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_b0,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar4,param_2,puVar11);
      _objc_release(puVar11);
      param_1 = puStack_d0;
    }
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar3);
    lVar12 = lVar12 + 1;
  } while (lVar12 != 5);
  _objc_release(puVar1);
  _objc_release(uStack_d8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return dVar13;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_106b780ac;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar14 = 32.0;
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  uStack_120 = uVar2;
  uStack_118 = uVar15;
  lStack_110 = lVar12;
  puStack_108 = puVar8;
  puStack_100 = puVar1;
  puStack_f8 = param_1;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x00010bfb41a0(PTR__OBJC_CLASS___UIFont_1126aec38,param_2,
                      &PTR____CFConstantStringClassReference_110e75c78);
  _objc_retainAutoreleasedReturnValue();
  uStack_148 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  uStack_140 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_138 = puVar4;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xae);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_130 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_138,&uStack_148,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c23d660(&PTR____CFConstantStringClassReference_110e75c98,param_2,puVar3);
  dVar13 = dVar14;
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return dVar14;
  }
  ___stack_chk_fail();
  func_0x00010bf6a920(*(undefined8 *)(puVar4 + _DAT_11275907c));
  dVar14 = dVar13 + 6.0;
  func_0x00010be229c0(puVar4);
  return dVar14 - dVar13;
}



/* Entry: 106b780ac; end: 106b781c3; -[SCCodeInputField _getSingleNumberWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106b780ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar4 = 32.0;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bfb41a0(PTR__OBJC_CLASS___UIFont_1126aec38,param_2,
                      &PTR____CFConstantStringClassReference_110e75c78);
  _objc_retainAutoreleasedReturnValue();
  uStack_68 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  uStack_60 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_58 = puVar1;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xae);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_58,&uStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c23d660(&PTR____CFConstantStringClassReference_110e75c98,param_2,puVar3);
  dVar5 = dVar4;
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return dVar4;
  }
  ___stack_chk_fail();
  func_0x00010bf6a920(*(undefined8 *)(puVar1 + _DAT_11275907c));
  dVar4 = dVar5 + 6.0;
  func_0x00010be229c0(puVar1);
  return dVar4 - dVar5;
}



/* Entry: 106b781c4; end: 106b7820b; -[SCCodeInputField _getKerning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106b781c4(double param_1,long param_2)

{
  double dVar1;
  
  func_0x00010bf6a920(*(undefined8 *)(param_2 + _DAT_11275907c));
  dVar1 = param_1 + 6.0;
  func_0x00010be229c0(param_2);
  return dVar1 - param_1;
}



/* Entry: 106b7820c; end: 106b78267; -[SCCodeInputField .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b7820c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112759084,0);
  _objc_destroyWeak(param_1 + _DAT_112759078);
  _objc_storeStrong(param_1 + _DAT_11275907c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112759088,0);
  return;
}



/* Entry: 106b78268; end: 106b7827f;  */

void FUN_106b78268(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dae718;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dae718,
                      &PTR____CFConstantStringClassReference_110e75cb8,0);
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



/* Entry: 106b78280; end: 106b7837f;  */

undefined * FUN_106b78280(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain();
  func_0x00010c1063c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110db3198);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf99aa0();
  _objc_release(param_1);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 106b78380; end: 106b785bb;  */

undefined8 FUN_106b78380(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0xffffffffffffffff;
  uVar1 = param_1;
  func_0x00010c0b3f80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bd200();
  _objc_release(uVar1);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106b785bc; end: 106b786cf;  */

void FUN_106b785bc(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106b786d0; end: 106b78a9f;  */

void FUN_106b786d0(undefined *param_1,undefined *param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b8bd0;
  _objc_opt_class(PTR_PTR_1126b8bd0);
  puVar6 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  puVar2 = param_1;
  puVar5 = param_1;
  if (((ulong)puVar6 & 1) == 0) {
    puVar6 = PTR_PTR_1126b8be0;
    _objc_opt_class(PTR_PTR_1126b8be0);
    puVar4 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar6);
    if (((ulong)puVar4 & 1) == 0) {
      puVar6 = PTR_PTR_1126b8bd8;
      _objc_opt_class(PTR_PTR_1126b8bd8);
      _objc_opt_isKindOfClass(param_1,puVar6);
      if (((ulong)puVar5 & 1) == 0) {
        puVar2 = PTR_PTR_1126b8c28;
        _objc_opt_class(PTR_PTR_1126b8c28);
        puVar6 = param_1;
        _objc_opt_isKindOfClass(param_1,puVar2);
        if (((ulong)puVar6 & 1) == 0) {
          puVar6 = (undefined *)0x0;
          goto LAB_106b78a48;
        }
        _objc_retain(param_1);
        puVar2 = param_1;
        func_0x00010c0f6680();
        if ((int)puVar2 == 2) {
          puVar2 = PTR_PTR_1126afac0;
          _objc_alloc(PTR_PTR_1126afac0);
          puVar6 = param_1;
          func_0x00010c120fa0(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar6;
          func_0x00010bfe4e60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c02b3e0(puVar2);
          _objc_release(puVar5);
          _objc_release(puVar6);
          puVar6 = PTR_PTR_1126af368;
          func_0x00010c121120(PTR_PTR_1126af368);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_106b78a3c;
        }
        puVar6 = (undefined *)0x0;
      }
      else {
        _objc_retain(param_1);
        puVar5 = param_1;
        func_0x00010c0f6680();
        puVar6 = (undefined *)0x0;
        iVar1 = (int)puVar5;
        if (iVar1 < 4) {
          if (iVar1 != 2) {
            if (iVar1 != 3) goto LAB_106b78a40;
            goto LAB_106b78a0c;
          }
          goto LAB_106b78a7c;
        }
        if (iVar1 == 4) goto LAB_106b787e0;
        if (iVar1 == 5) goto LAB_106b788d0;
        if (iVar1 == 8) goto LAB_106b789cc;
      }
    }
    else {
      _objc_retain(param_1);
      puVar4 = param_1;
      func_0x00010c0f6680();
      puVar6 = (undefined *)0x0;
      iVar1 = (int)puVar4;
      if (iVar1 < 5) goto LAB_106b787c8;
      if (iVar1 == 5) goto LAB_106b788d0;
      if (iVar1 == 9) {
LAB_106b789cc:
        func_0x00010bf35720(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = (undefined *)0x1;
        goto LAB_106b789e4;
      }
      if (iVar1 == 0xc) {
        func_0x00010bf04e40(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf10d20(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126af368;
        goto LAB_106b788a8;
      }
    }
  }
  else {
    _objc_retain(param_1);
    puVar3 = param_1;
    func_0x00010c0f6680();
    puVar4 = PTR_PTR_1126af368;
    puVar6 = (undefined *)0x0;
    iVar1 = (int)puVar3;
    if (iVar1 < 6) {
LAB_106b787c8:
      puVar6 = (undefined *)0x0;
      if (iVar1 == 2) {
LAB_106b78a7c:
        puVar6 = PTR_PTR_1126af368;
        func_0x00010c261740(PTR_PTR_1126af368);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_106b78a40;
      }
      if (iVar1 == 3) {
LAB_106b78a0c:
        func_0x00010c27dc20(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = param_2;
        func_0x000106b78aa0(param_2,puVar2);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (iVar1 != 4) goto LAB_106b78a40;
LAB_106b787e0:
        func_0x00010c0e1560(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = param_2;
        func_0x000106b78bb0(param_2,puVar2);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (iVar1 == 6) {
LAB_106b788d0:
      func_0x00010beed440(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      FUN_106b78cd0();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (iVar1 == 9) {
      func_0x00010bf35720(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = (undefined *)0x0;
LAB_106b789e4:
      FUN_106b78da8(puVar6,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (iVar1 != 0xd) goto LAB_106b78a40;
      func_0x00010bf04e40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf10d20(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
LAB_106b788a8:
      func_0x00010bf52800(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
LAB_106b78a3c:
    _objc_release(puVar2);
  }
LAB_106b78a40:
  _objc_release(param_1);
LAB_106b78a48:
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106b78aa0; end: 106b78ccf;  */

void FUN_106b78aa0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126af420;
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c0dfb80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c27dca0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f6a0(puVar1);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c0ee180();
  puVar4 = PTR_PTR_1126af368;
  if ((int)uVar2 == 0) {
    func_0x00010c23f200(PTR_PTR_1126af368);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c23efe0(param_2);
    func_0x00010c0ee1c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106b78cd0; end: 106b78da7;  */

void FUN_106b78cd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfe4e60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c121100(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c1210e0();
  _objc_release(param_1);
  if (((int)uVar3 == 1) || ((int)uVar3 == 2)) {
    puVar5 = PTR_PTR_1126afac0;
    _objc_alloc(PTR_PTR_1126afac0);
    func_0x00010c02b3e0();
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  puVar4 = PTR_PTR_1126af368;
  func_0x00010c121120(PTR_PTR_1126af368,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106b78da8; end: 106b78ea3;  */

void FUN_106b78da8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bf35800(param_3);
  func_0x00010c065e20(param_3);
  puVar4 = PTR_PTR_1126af368;
  puVar1 = PTR_PTR_1126af0f8;
  _objc_alloc(PTR_PTR_1126af0f8);
  uVar2 = param_3;
  func_0x00010bf35780(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf8d6c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0139a0(puVar1);
  _objc_release(param_2);
  func_0x00010bf357e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106b78ea4; end: 106b78f9f; -[SCLogInServices initWithLazyLogInService:lazyChannelVerificationService:lazyUnauthenticatedOdlvService:lazyUnauthenticatedTwoFAService:] */

undefined1 *
FUN_106b78ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f52d0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b78fa0; end: 106b78fa7; -[SCLogInServices lazyLoginService] */

undefined8 FUN_106b78fa0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b78fa8; end: 106b78faf; -[SCLogInServices lazyChannelVerificationService] */

undefined8 FUN_106b78fa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b78fb0; end: 106b78fb7; -[SCLogInServices lazyUnauthenticatedOdlvService] */

undefined8 FUN_106b78fb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106b78fb8; end: 106b78fbf; -[SCLogInServices lazyUnauthenticatedTwoFAService] */

undefined8 FUN_106b78fb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106b78fc0; end: 106b79007; -[SCLogInServices .cxx_destruct] */

void FUN_106b78fc0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b79008; end: 106b7906b; +[SCChannelVerificationCodeRequestError retryableErrorWithMessage:] */

void FUN_106b79008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af9f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b7906c; end: 106b790d7; +[SCChannelVerificationCodeRequestError unretryableErrorWithMessage:] */

void FUN_106b7906c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af9f0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b790d8; end: 106b790fb; -[SCChannelVerificationCodeRequestError copyWithZone:] */

undefined8 FUN_106b790d8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b790fc; end: 106b79173; -[SCChannelVerificationCodeRequestError hash] */

void FUN_106b790fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126f52d8;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b79174; end: 106b791b7; -[SCChannelVerificationCodeRequestError internalInit] */

void FUN_106b79174(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f52d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b791b8; end: 106b7926f; -[SCChannelVerificationCodeRequestError isEqual:] */

long FUN_106b791b8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106b79248:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b79254;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_106b79254;
        }
        goto LAB_106b79248;
      }
    }
    lVar3 = 0;
  }
LAB_106b79254:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106b79270; end: 106b792f3; -[SCChannelVerificationCodeRequestError matchRetryableError:unretryableError:] */

void FUN_106b79270(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_106b792d8;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_106b792d8;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_106b792d8:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b792f4; end: 106b79323; -[SCChannelVerificationCodeRequestError .cxx_destruct] */

void FUN_106b792f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106b79324; end: 106b793bb; +[SCAppLoginIdentifier appleIdentifierWithIdentityToken:nonce:] */

void FUN_106b79324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126aefd8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b793bc; end: 106b79487; +[SCAppLoginIdentifier arcpIdentifierWithEmail:phoneNumber:phoneNumberCountryCode:] */

void FUN_106b793bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126aefd8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x60);
  *(undefined8 *)(puVar2 + 0x60) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x68);
  *(undefined8 *)(puVar2 + 0x68) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x70);
  *(undefined8 *)(puVar2 + 0x70) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b79488; end: 106b7951f; +[SCAppLoginIdentifier googleIdentifierWithIdentityToken:nonce:] */

void FUN_106b79488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126aefd8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b79520; end: 106b7964b; +[SCAppLoginIdentifier passkeyIdentifierWithUserId:clientDataJson:signature:authenticatorData:selectedCredential:] */

void FUN_106b79520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126aefd8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x58) = param_7;
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b7964c; end: 106b796af; +[SCAppLoginIdentifier tivNonceWithTivNonce:] */

void FUN_106b7964c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aefd8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b796b0; end: 106b796d3; -[SCAppLoginIdentifier copyWithZone:] */

undefined8 FUN_106b796b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b796d4; end: 106b797cf; -[SCAppLoginIdentifier hash] */

void FUN_106b796d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_98;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,0xe);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_c8 = PTR_PTR_1126f52e0;
  puStack_d0 = puVar3;
  _objc_msgSendSuper2(&puStack_d0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b797d0; end: 106b79813; -[SCAppLoginIdentifier internalInit] */

void FUN_106b797d0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f52e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b79814; end: 106b799d3; -[SCAppLoginIdentifier isEqual:] */

long FUN_106b79814(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106b799ac:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b799b8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x48);
                    if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x50);
                      if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x58);
                        if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x60);
                          if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x68);
                            if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + 0x70);
                              if (lVar3 != *(long *)(param_3 + 0x70)) {
                                func_0x00010c071ae0();
                                goto LAB_106b799b8;
                              }
                              goto LAB_106b799ac;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106b799b8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106b799d4; end: 106b79b0b; -[SCAppLoginIdentifier matchTivNonce:appleIdentifier:googleIdentifier:passkeyIdentifier:arcpIdentifier:] */

void FUN_106b799d4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 < 2) {
    if (lVar3 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
      }
      goto LAB_106b79ad4;
    }
    if ((lVar3 != 1) || (param_4 == 0)) goto LAB_106b79ad4;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    pcVar4 = *(code **)(param_4 + 0x10);
    lVar3 = param_4;
  }
  else {
    if (lVar3 != 2) {
      if (lVar3 == 3) {
        if (param_6 != 0) {
          (**(code **)(param_6 + 0x10))
                    (param_6,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                     *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                     *(undefined8 *)(param_1 + 0x58));
        }
      }
      else if ((lVar3 == 4) && (param_7 != 0)) {
        (**(code **)(param_7 + 0x10))
                  (param_7,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                   *(undefined8 *)(param_1 + 0x70));
      }
      goto LAB_106b79ad4;
    }
    if (param_5 == 0) goto LAB_106b79ad4;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    pcVar4 = *(code **)(param_5 + 0x10);
    lVar3 = param_5;
  }
  (*pcVar4)(lVar3,uVar1,uVar2);
LAB_106b79ad4:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b79b0c; end: 106b79bbf; -[SCAppLoginIdentifier .cxx_destruct] */

void FUN_106b79b0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
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
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106b79bc0; end: 106b79c4b; -[SCAppLoginResult initWithGrpcStatusCode:protoStatusCode:detail:] */

undefined1 *
FUN_106b79bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f52e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 106b79c4c; end: 106b79c6f; -[SCAppLoginResult copyWithZone:] */

undefined8 FUN_106b79c4c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b79c70; end: 106b79cd7; -[SCAppLoginResult hash] */

undefined8 * FUN_106b79c70(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_20 = uVar1;
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106b79d6c;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_106b79d6c;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x18);
    if (puVar4 != *(undefined1 **)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_106b79d6c;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_106b79d6c:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 106b79cd8; end: 106b79d87; -[SCAppLoginResult isEqual:] */

long FUN_106b79cd8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b79d6c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))))) {
      lVar3 = 0;
      goto LAB_106b79d6c;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_106b79d6c;
    }
  }
  lVar3 = 1;
LAB_106b79d6c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106b79d88; end: 106b79d8f; -[SCAppLoginResult grpcStatusCode] */

undefined8 FUN_106b79d88(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b79d90; end: 106b79d97; -[SCAppLoginResult protoStatusCode] */

undefined8 FUN_106b79d90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b79d98; end: 106b79d9f; -[SCAppLoginResult detail] */

undefined8 FUN_106b79d98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106b79da0; end: 106b79dab; -[SCAppLoginResult .cxx_destruct] */

void FUN_106b79da0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106b79dac; end: 106b79e53; +[SCAppLoginResultDetail accountLockedErrorWithMessage:isAppealable:appealableLockData:] */

void FUN_106b79dac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126afab8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  puVar2[0x28] = param_4;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_5;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b79e54; end: 106b79eeb; +[SCAppLoginResultDetail challengedWithChallengeData:authSessionPayload:] */

void FUN_106b79e54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126afab8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b79eec; end: 106b79f57; +[SCAppLoginResultDetail errorWithMessage:] */

void FUN_106b79eec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126afab8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b79f58; end: 106b79fc3; +[SCAppLoginResultDetail loginOptionsNeedUpdateWithLoginOptionsData:] */

void FUN_106b79f58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126afab8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b79fc4; end: 106b7a02f; +[SCAppLoginResultDetail reactivationRequiredWithStatus:] */

void FUN_106b79fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126afab8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b7a030; end: 106b7a07b; +[SCAppLoginResultDetail redirectToRegistration] */

void FUN_106b7a030(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afab8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b7a07c; end: 106b7a0df; +[SCAppLoginResultDetail successWithBootstrapData:] */

void FUN_106b7a07c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126afab8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b7a0e0; end: 106b7a103; -[SCAppLoginResultDetail copyWithZone:] */

undefined8 FUN_106b7a0e0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b7a104; end: 106b7a1c7; -[SCAppLoginResultDetail hash] */

void FUN_106b7a104(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uStack_58 = (ulong)*(byte *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_78;
  uStack_30 = uVar1;
  func_0x000100505190(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_a8 = PTR_PTR_1126f52f0;
  puStack_b0 = puVar3;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b7a1c8; end: 106b7a20b; -[SCAppLoginResultDetail internalInit] */

void FUN_106b7a1c8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f52f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b7a20c; end: 106b7a363; -[SCAppLoginResultDetail isEqual:] */

long FUN_106b7a20c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106b7a33c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b7a348;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(char *)(param_1 + 0x28) == *(char *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x48);
                  if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x50);
                    if (lVar3 != *(long *)(param_3 + 0x50)) {
                      func_0x00010c071ae0();
                      goto LAB_106b7a348;
                    }
                    goto LAB_106b7a33c;
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106b7a348:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106b7a364; end: 106b7a503; -[SCAppLoginResultDetail matchSuccess:reactivationRequired:accountLockedError:redirectToRegistration:loginOptionsNeedUpdate:challenged:error:] */

void FUN_106b7a364(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 3) {
    if (lVar2 == 0) {
      if (param_3 == 0) goto LAB_106b7a4b8;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
    }
    else {
      if (lVar2 != 1) {
        if ((lVar2 == 2) && (param_5 != 0)) {
          (**(code **)(param_5 + 0x10))
                    (param_5,*(undefined8 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28),
                     *(undefined8 *)(param_1 + 0x30));
        }
        goto LAB_106b7a4b8;
      }
      if (param_4 == 0) goto LAB_106b7a4b8;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
  }
  else if (lVar2 < 5) {
    if (lVar2 == 3) {
      if (param_6 != 0) {
        (**(code **)(param_6 + 0x10))(param_6);
      }
      goto LAB_106b7a4b8;
    }
    if ((lVar2 != 4) || (param_7 == 0)) goto LAB_106b7a4b8;
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    pcVar3 = *(code **)(param_7 + 0x10);
    lVar2 = param_7;
  }
  else {
    if (lVar2 == 5) {
      if (param_8 != 0) {
        (**(code **)(param_8 + 0x10))
                  (param_8,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
      }
      goto LAB_106b7a4b8;
    }
    if ((lVar2 != 6) || (param_9 == 0)) goto LAB_106b7a4b8;
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    pcVar3 = *(code **)(param_9 + 0x10);
    lVar2 = param_9;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_106b7a4b8:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b7a504; end: 106b7a57b; -[SCAppLoginResultDetail .cxx_destruct] */

void FUN_106b7a504(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106b7a57c; end: 106b7a607; -[SCAppLoginAnswerChallengeResult initWithGrpcStatusCode:protoStatusCode:detail:] */

undefined1 *
FUN_106b7a57c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f52f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 106b7a608; end: 106b7a62b; -[SCAppLoginAnswerChallengeResult copyWithZone:] */

undefined8 FUN_106b7a608(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b7a62c; end: 106b7a693; -[SCAppLoginAnswerChallengeResult hash] */

undefined8 * FUN_106b7a62c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_20 = uVar1;
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106b7a728;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_106b7a728;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x18);
    if (puVar4 != *(undefined1 **)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_106b7a728;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_106b7a728:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 106b7a694; end: 106b7a743; -[SCAppLoginAnswerChallengeResult isEqual:] */

long FUN_106b7a694(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b7a728;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))))) {
      lVar3 = 0;
      goto LAB_106b7a728;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_106b7a728;
    }
  }
  lVar3 = 1;
LAB_106b7a728:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106b7a744; end: 106b7a74b; -[SCAppLoginAnswerChallengeResult grpcStatusCode] */

undefined8 FUN_106b7a744(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b7a74c; end: 106b7a753; -[SCAppLoginAnswerChallengeResult protoStatusCode] */

undefined8 FUN_106b7a74c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b7a754; end: 106b7a75b; -[SCAppLoginAnswerChallengeResult detail] */

undefined8 FUN_106b7a754(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106b7a75c; end: 106b7a767; -[SCAppLoginAnswerChallengeResult .cxx_destruct] */

void FUN_106b7a75c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106b7a768; end: 106b7a80f; +[SCAppLoginAnswerChallengeResultDetail accountLockedErrorWithMessage:isAppealable:appealableLockData:] */

void FUN_106b7a768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126afac8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  puVar2[0x20] = param_4;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b7a810; end: 106b7a87b; +[SCAppLoginAnswerChallengeResultDetail errorWithMessage:] */

void FUN_106b7a810(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126afac8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b7a87c; end: 106b7a8df; +[SCAppLoginAnswerChallengeResultDetail successWithBootstrapData:] */

void FUN_106b7a87c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126afac8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b7a8e0; end: 106b7a903; -[SCAppLoginAnswerChallengeResultDetail copyWithZone:] */

undefined8 FUN_106b7a8e0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


