/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105cc1f64; end: 105cc20db; -[SCGalleryHeaderBar textFieldShouldReturn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105cc1f64(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  func_0x00010c13a0e0(param_3);
  ppuVar2 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar2);
  ppuVar2 = ppuVar1;
  func_0x00010c08fa60();
  if (ppuVar2 == (undefined **)0x0) {
    lVar3 = *(long *)(param_1 + _DAT_112733c44);
    func_0x00010bf5dee0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c159600();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar6;
    func_0x00010bf529e0();
    _objc_release(lVar6);
    _objc_release(lVar3);
    if (lVar4 == 0) {
      func_0x00010bf3bfc0(param_1);
      goto LAB_105cc20b0;
    }
  }
  lVar6 = param_1;
  func_0x00010be43aa0();
  if ((int)lVar6 == 0) {
    lVar6 = param_1 + _DAT_112733c40;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c0ac200();
  }
  else {
    lVar6 = (long)_DAT_112733c44;
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar6),param_2,ppuVar1);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112733c48);
    lVar6 = *(long *)(param_1 + lVar6);
    func_0x00010bf5dee0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f360(uVar5,param_2,lVar6);
  }
  _objc_release(lVar6);
  param_1 = param_1 + _DAT_112733c70;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfbcee0();
  _objc_release(param_1);
LAB_105cc20b0:
  _objc_release(ppuVar1);
  return 0;
}



/* Entry: 105cc20dc; end: 105cc2157; -[SCGalleryHeaderBar _textFieldDidChange:] */

void FUN_105cc20dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x000106daf27c(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010be2fae0(param_1,param_2,uVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cc2158; end: 105cc21d7; -[SCGalleryHeaderBar _isSemanticSearchActiveForCurrentTab] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105cc2158(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + _DAT_112733c84;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c07d760();
  if ((int)lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112733c38);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c07d780();
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  return uVar4;
}



/* Entry: 105cc21d8; end: 105cc221b; -[SCGalleryHeaderBar reloadTabPolicy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc21d8(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010be43aa0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00010bde04e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + (long)_DAT_112733c48),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 105cc221c; end: 105cc2287; -[SCGalleryHeaderBar _clearFacetSuggestions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc221c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112733c80;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + lVar2;
    _objc_loadWeakRetained(param_1);
    func_0x00010c28c740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105cc2288; end: 105cc2307; -[SCGalleryHeaderBar _updateSearchText:didSelectResultTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc2288(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112733c44);
  _objc_retain(param_3);
  func_0x00010c212f20(uVar1,param_2,param_3);
  param_1 = param_1 + _DAT_112733c40;
  _objc_loadWeakRetained(param_1);
  func_0x00010c289060();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cc2308; end: 105cc2407; -[SCGalleryHeaderBar _updateFacetSuggestionsForQuery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc2308(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be43aa0();
  if ((int)lVar1 != 0) {
    lVar3 = (long)_DAT_112733c80;
    lVar1 = param_1 + lVar3;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010be9c640();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0bbdc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      if (lVar2 == 0) {
        func_0x00010be641c0(param_1);
        lVar1 = param_1 + _DAT_112733c40;
        _objc_loadWeakRetained(lVar1);
        lVar2 = lVar1;
        func_0x00010bf9f460();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
        param_1 = param_1 + lVar3;
        _objc_loadWeakRetained(param_1);
        func_0x00010c28c740();
        _objc_release(param_1);
        _objc_release(lVar2);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cc2408; end: 105cc24f3; -[SCGalleryHeaderBar _noteKeyboardLanguageForFacetMatching] */

void FUN_105cc2408(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010be9c640();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c26c180();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c112f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    if (puRam00000001136c2228 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puRam00000001136c2228;
      puRam00000001136c2228 = puVar3;
      _objc_release(puVar4);
    }
    puVar4 = puRam00000001136c2228;
    func_0x00010bf4b900(puRam00000001136c2228,param_2,lVar2);
    if (((ulong)puVar4 & 1) == 0) {
      func_0x00010befa120(puRam00000001136c2228,param_2,lVar2);
      puVar4 = PTR_PTR_1126c3ab8;
      puVar3 = puRam00000001136c2228;
      func_0x00010bf00560(puRam00000001136c2228);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b6e40(puVar4,param_2,puVar3);
      _objc_release(puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105cc24f4; end: 105cc263b; -[SCGalleryHeaderBar _handleSearchFieldQueryDidChange:committedText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc24f4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bedf140(param_1,param_2,param_3,0);
  lVar4 = (long)_DAT_112733c44;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4),param_2,param_4);
  _objc_release(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bf5dee0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c159600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  lVar5 = (long)_DAT_112733c70;
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c287b00();
  _objc_release(lVar1);
  lVar5 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar5);
  func_0x00010bfbcee0();
  _objc_release(lVar5);
  func_0x00010bed7bc0(param_1,param_2,param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112733c48);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf5dee0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11d360(uVar2,param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cc263c; end: 105cc26f7; -[SCGalleryHeaderBar inlineSearchAccessoryView:selectedResultTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc263c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112733c70;
  _objc_retain(param_4);
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c287b00();
  _objc_release(lVar1);
  lVar2 = param_1 + lVar2;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bfbcee0();
  _objc_release(lVar2);
  func_0x00010bf3a660(*(undefined8 *)(param_1 + _DAT_112733c44));
  func_0x00010be8e200(param_1);
  func_0x00010bedf140(param_1);
  _objc_release(param_4);
  func_0x00010bde04e0(param_1);
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + _DAT_112733c48));
                    /* WARNING: Could not recover jumptable at 0x00010bf83c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissKeyboard_1125be8b8);
  return;
}



/* Entry: 105cc26f8; end: 105cc273b; -[SCGalleryHeaderBar inlineSearchAccessoryView:didSelectFacet:] */

void FUN_105cc26f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be43aa0();
  if ((int)uVar1 != 0) {
    func_0x00010bdce180(param_1,param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105cc273c; end: 105cc27f3; -[SCGalleryHeaderBar _applyFacetSuggestion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105cc273c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be9c640(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000106daf27c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112733c44);
  func_0x00010bf080e0(uVar3,param_2,param_3,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bde23e0(param_1,param_2,uVar3,lVar1);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 105cc27f4; end: 105cc290b; -[SCGalleryHeaderBar _commitApplyResult:inField:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105cc27f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bf735c0();
  if ((int)uVar1 != 0) {
    func_0x00010be8e200(param_1);
  }
  uVar1 = param_3;
  func_0x00010bf742a0();
  if ((int)uVar1 != 0) {
    func_0x00010c212f20(param_4,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  }
  uVar1 = param_3;
  func_0x00010bf72ee0();
  if ((int)uVar1 != 0) {
    uVar2 = param_4;
    func_0x00010c26b700(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x000106daf27c(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be2fae0(param_1,param_2,uVar2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112733c48);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112733c44);
    func_0x00010bf5dee0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f360(uVar3,param_2,uVar2);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 105cc290c; end: 105cc2a2b; -[SCGalleryHeaderBar _autoApplyWholeUniqueFacetOnDebounce] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105cc290c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010be43aa0();
  if ((int)lVar1 == 0) {
    param_1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010be9c640();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0bbdc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = lVar1;
      func_0x000106daf27c();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c08fa60();
      if (lVar3 == 0) {
        param_1 = 0;
      }
      else {
        lVar3 = param_1 + _DAT_112733c40;
        _objc_loadWeakRetained(lVar3);
        lVar4 = lVar3;
        func_0x00010bf9f460();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        uVar5 = *(undefined8 *)(param_1 + _DAT_112733c44);
        func_0x00010c117f60(uVar5,param_2,lVar4,lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bde23e0(param_1,param_2,uVar5,lVar1);
        _objc_release(uVar5);
        _objc_release(lVar4);
      }
      _objc_release(lVar2);
    }
    else {
      param_1 = 0;
    }
    _objc_release(lVar1);
  }
  return param_1;
}



/* Entry: 105cc2a2c; end: 105cc2caf; -[SCGalleryHeaderBar _renderFacetPills] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc2a2c(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_1;
  func_0x00010be9c640();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b3f70;
  _objc_opt_class(PTR_PTR_1126b3f70);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar9 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar9 = 0;
  }
  _objc_retain(uVar9);
  _objc_release(uVar2);
  uVar2 = uVar9;
  func_0x00010c0fbea0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf51e00();
  _objc_release(uVar2);
  uVar2 = uVar4;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (uVar2 != 0) {
    uVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(uVar4);
      }
      func_0x00010c12da60(uVar9);
      uVar12 = uVar12 + 1;
    } while (uVar2 != uVar12);
    uVar2 = uVar4;
    func_0x00010bf52a60();
  }
  _objc_release(uVar4);
  lVar5 = *(long *)(param_1 + (long)_DAT_112733c44);
  func_0x00010bf5dee0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c159600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar6);
      }
      uVar11 = *(undefined8 *)(lVar13 * 8);
      uVar7 = uVar11;
      FUN_105cc2cb0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9f400();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010b85fd98(uVar7,uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa8c0(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar11);
      _objc_release(uVar7);
      lVar13 = lVar13 + 1;
    } while (lVar5 != lVar13);
    lVar5 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release(lVar6);
  _objc_release(uVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  uVar2 = uVar9;
  func_0x00010bf9f400(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010bf85aa0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  uVar9 = uVar2;
  func_0x00010c0876a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 105cc2cb0; end: 105cc2d33;  */

void FUN_105cc2cb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf9f400(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf85aa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar1;
  func_0x00010c0876a0(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105cc2d34; end: 105cc2ff7; -[SCGalleryHeaderBar userDeletingPillUsingKeyboard:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc2d34(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar13 = param_3;
  func_0x00010bf0bec0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c3ac0;
  _objc_opt_class(PTR_PTR_1126c3ac0);
  uVar2 = uVar13;
  _objc_opt_isKindOfClass(uVar13,puVar1);
  uVar8 = uVar13;
  if ((uVar2 & 1) == 0) {
    uVar8 = 0;
  }
  _objc_retain(uVar8);
  _objc_release(uVar13);
  lVar10 = (long)_DAT_112733c44;
  lVar3 = *(long *)(param_1 + lVar10);
  func_0x00010bf5dee0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c159600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar4;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      _objc_release(lVar4);
      func_0x00010be8e200(param_1);
      lVar3 = param_1;
      func_0x00010be9c640();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x000106daf27c(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be2fae0(param_1);
      _objc_release(lVar4);
      _objc_release(lVar6);
      uVar12 = *(undefined8 *)(param_1 + _DAT_112733c48);
      uVar7 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010bf5dee0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25f360(uVar12);
      _objc_release(uVar7);
      _objc_release(lVar3);
      _objc_release(uVar8);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
        return;
      }
      ___stack_chk_fail();
      lVar3 = (long)_DAT_112733c40;
      lVar9 = param_3 + lVar3;
      _objc_loadWeakRetained(lVar9);
      func_0x00010bf18980();
      _objc_release(lVar9);
      uVar8 = param_3;
      func_0x00010be43aa0();
      if ((int)uVar8 != 0) {
        lVar3 = param_3 + lVar3;
        _objc_loadWeakRetained(lVar3);
        func_0x00010c07d540();
        _objc_release(lVar3);
      }
      lVar9 = param_3 + (long)_DAT_112733c70;
      _objc_loadWeakRetained(lVar9);
      func_0x00010c287b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar9);
      return;
    }
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar4);
      }
      uVar13 = *(ulong *)(lVar11 * 8);
      if (uVar8 == 0) {
        FUN_105cc2cb0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010c0fbe40(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar13;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        _objc_release(uVar13);
        if ((uVar5 & 1) != 0) goto LAB_105cc2e78;
      }
      else {
        func_0x00010bf9f400();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar13;
        func_0x00010c071ae0();
        _objc_release(uVar13);
        if ((int)uVar2 != 0) {
LAB_105cc2e78:
          func_0x00010c12a920(*(undefined8 *)(param_1 + lVar10));
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar3 != lVar11);
    lVar3 = lVar4;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105cc2ff8; end: 105cc3097; -[SCGalleryHeaderBar _beginInlineSearchSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc2ff8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112733c40;
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf18980();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010be43aa0();
  if ((int)lVar1 != 0) {
    lVar2 = param_1 + lVar2;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c07d540();
    _objc_release(lVar2);
  }
  param_1 = param_1 + _DAT_112733c70;
  _objc_loadWeakRetained(param_1);
  func_0x00010c287b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cc3098; end: 105cc3107; -[SCGalleryHeaderBar _endInlineSearchSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc3098(long param_1)

{
  long lVar1;
  
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + _DAT_112733c48));
  lVar1 = param_1 + _DAT_112733c40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf95300();
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_112733c70;
  _objc_loadWeakRetained(param_1);
  func_0x00010c287b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cc3108; end: 105cc3147; -[SCGalleryHeaderBar isSemanticSearchEligibleTab] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105cc3108(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112733c84;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c07d760();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 105cc3148; end: 105cc3167; -[SCGalleryHeaderBar delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc3148(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112733c70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cc3168; end: 105cc317b; -[SCGalleryHeaderBar setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc3168(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112733c70,param_3);
  return;
}



/* Entry: 105cc317c; end: 105cc318b; -[SCGalleryHeaderBar rightButtonMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105cc317c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112733c78);
}



/* Entry: 105cc318c; end: 105cc319b; -[SCGalleryHeaderBar selectionMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105cc318c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112733c7c);
}



/* Entry: 105cc319c; end: 105cc31bb; -[SCGalleryHeaderBar tabPolicy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc319c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112733c84);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cc31bc; end: 105cc31cf; -[SCGalleryHeaderBar setTabPolicy:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc31bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112733c84,param_3);
  return;
}



/* Entry: 105cc31d0; end: 105cc332f; -[SCGalleryHeaderBar .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cc31d0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112733c84);
  _objc_destroyWeak(param_1 + _DAT_112733c70);
  _objc_storeStrong(param_1 + _DAT_112733c48,0);
  _objc_storeStrong(param_1 + _DAT_112733c44,0);
  _objc_destroyWeak(param_1 + _DAT_112733c80);
  _objc_destroyWeak(param_1 + _DAT_112733c40);
  _objc_storeStrong(param_1 + _DAT_112733c3c,0);
  _objc_storeStrong(param_1 + _DAT_112733c88,0);
  _objc_storeStrong(param_1 + _DAT_112733c50,0);
  _objc_storeStrong(param_1 + _DAT_112733c4c,0);
  _objc_storeStrong(param_1 + _DAT_112733c58,0);
  _objc_storeStrong(param_1 + _DAT_112733c60,0);
  _objc_storeStrong(param_1 + _DAT_112733c5c,0);
  _objc_storeStrong(param_1 + _DAT_112733c6c,0);
  _objc_storeStrong(param_1 + _DAT_112733c68,0);
  _objc_storeStrong(param_1 + _DAT_112733c64,0);
  _objc_storeStrong(param_1 + _DAT_112733c38,0);
  _objc_storeStrong(param_1 + _DAT_112733c8c,0);
  _objc_storeStrong(param_1 + _DAT_112733c90,0);
  _objc_storeStrong(param_1 + _DAT_112733c34,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112733c54,0);
  return;
}



/* Entry: 105cc3330; end: 105cc360b; -[SCGalleryTabBarsController initWithCoreConfigProvider:] */

undefined8 *
FUN_105cc3330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  puStack_a0 = PTR_PTR_1126ecbe8;
  puVar1 = &uStack_a8;
  uStack_a8 = param_4;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x000100841590(param_3,0x4043000000000000);
    func_0x00010c013de0();
    uVar14 = puVar1[6];
    puVar1[6] = puVar2;
    _objc_release(uVar14);
    func_0x00010c1fbe00(puVar1[6]);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    func_0x00010c21e900();
    func_0x00010befbb60(puVar1[6]);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = puVar1[6];
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    puStack_98 = puVar5;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[6];
    func_0x00010bf34860(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    puStack_90 = puVar8;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf49420(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    puStack_88 = puVar10;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bf49420(0x4043000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar12;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar14);
    _objc_release(puVar4);
    _objc_retain(param_6);
    uVar14 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar14);
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar1;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bee1a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return param_6;
}



/* Entry: 105cc360c; end: 105cc360f; -[SCGalleryTabBarsController updateWithTabControllers:highlightedTabController:] */

void FUN_105cc360c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee1a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateTabBarViewWithTabControll_112596038);
  return;
}



/* Entry: 105cc3610; end: 105cc3687; -[SCGalleryTabBarsController updateWithHighlightedIndex:isTracking:] */

void FUN_105cc3610(double param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  
  if (param_4 != 0) {
    dVar3 = (double)(long)param_1;
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
    lVar1 = *(long *)(param_2 + 0x18);
    func_0x00010bf529e0();
    if ((double)(lVar1 - 1) <= dVar3) {
      dVar3 = (double)(lVar1 - 1);
    }
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c0dfd40(uVar2,param_3,(long)dVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105cc3688; end: 105cc368b; -[SCGalleryTabBarsController updateWithTabControllers:badgedTabController:badged:] */

void FUN_105cc3688(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee1a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateTabBarViewWithTabControll_112596030);
  return;
}



/* Entry: 105cc368c; end: 105cc36d3; -[SCGalleryTabBarsController unselectFirstTabBarVisually] */

void FUN_105cc368c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fadc0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1fbb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setSelectionViewHidden__11265c8f8,1);
  return;
}



/* Entry: 105cc36d4; end: 105cc371b; -[SCGalleryTabBarsController selectFirstTabBarVisually] */

void FUN_105cc36d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fadc0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1fbb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setSelectionViewHidden__11265c8f8,0);
  return;
}



/* Entry: 105cc371c; end: 105cc37ff; -[SCGalleryTabBarsController _updateTabBarViewWithTabControllers:highlightedTabController:] */

void FUN_105cc371c(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be93f60(param_1,param_2,param_3);
  if ((param_4 != 0) &&
     (uVar1 = param_3, func_0x00010bfecde0(param_3,param_2,param_4), uVar1 != 0x7fffffffffffffff)) {
    uVar2 = *(ulong *)(param_1 + 0x18);
    func_0x00010bf529e0();
    if (uVar1 < uVar2) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c0dfd40(uVar3,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fade0();
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c0dfd40(uVar3,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fade0();
      _objc_release(uVar3);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cc3800; end: 105cc38b7; -[SCGalleryTabBarsController _updateTabBarViewWithTabControllers:badgedTabController:badged:] */

void FUN_105cc3800(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be93f60(param_1,param_2,param_3);
  if ((param_4 != 0) &&
     (uVar1 = param_3, func_0x00010bfecde0(param_3,param_2,param_4), uVar1 != 0x7fffffffffffffff)) {
    uVar2 = *(ulong *)(param_1 + 0x18);
    func_0x00010bf529e0();
    if (uVar1 < uVar2) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c0dfd40(uVar3,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16ee20();
      _objc_release(uVar3);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cc38b8; end: 105cc39b3; -[SCGalleryTabBarsController _resetTabBarViewWithTabControllers:] */

void FUN_105cc38b8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if ((param_3 != 0 || *(long *)(param_1 + 8) != 0) &&
     (uVar1 = param_3, func_0x00010c071b60(), (uVar1 & 1) == 0)) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(ulong *)(param_1 + 8) = param_3;
    _objc_release(uVar2);
    uVar1 = param_3;
    func_0x00010bf529e0();
    if (uVar1 == 0) {
      func_0x00010be93f40(param_1,param_2,PTR____NSArray0__struct_11034ab48);
    }
    else {
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_105cc39b4;
      puStack_40 = &UNK_1108e4358;
      ppuVar3 = &puStack_58;
      lStack_38 = param_1;
      _objc_retainBlock(ppuVar3);
      uVar1 = param_3;
      func_0x00010c0b8600(param_3,param_2,ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be93f40(param_1,param_2,uVar1);
      _objc_release(uVar1);
      _objc_release(ppuVar3);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105cc39b4; end: 105cc39bf;  */

void FUN_105cc39b4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf47d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__createTabBarViewItemForTabContr_11255ab90,
             param_2);
  return;
}



/* Entry: 105cc39c0; end: 105cc3cbf; -[SCGalleryTabBarsController _resetTabBarViewWithTabBarViewItems:] */

void FUN_105cc39c0(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

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
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf51e00();
  uVar15 = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_3 + 0x18) = param_5;
  _objc_release(uVar15);
  if (*(long *)(param_3 + 0x10) != 0) {
    func_0x00010c12c960();
  }
  puVar1 = PTR_PTR_1126c3ac8;
  _objc_alloc();
  func_0x00010c020480();
  uVar15 = *(undefined8 *)(param_3 + 0x10);
  *(undefined **)(param_3 + 0x10) = puVar1;
  _objc_release(uVar15);
  func_0x00010c207380(*(undefined8 *)(param_3 + 0x10),param_4,1);
  func_0x00010c1f7c60(*(undefined8 *)(param_3 + 0x10),param_4,1);
  func_0x00010bf20c00(*(undefined8 *)(param_3 + 0x30));
  _CGRectGetHeight();
  func_0x00010c0699c0(*(undefined8 *)(param_3 + 0x10));
  func_0x00010bf20c00(*(undefined8 *)(param_3 + 0x30));
  _CGRectInset();
  func_0x00010c19f0e0(*(undefined8 *)(param_3 + 0x10));
  func_0x00010befbb60(*(undefined8 *)(param_3 + 0x30),param_4,*(undefined8 *)(param_3 + 0x10));
  func_0x00010c219b60(*(undefined8 *)(param_3 + 0x10),param_4,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar2;
  func_0x00010bf493c0((param_1 - param_2) * 0.5,uVar2,param_4,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  uStack_a8 = uVar15;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010bf1ff80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar4;
  func_0x00010bf493c0(-((param_1 - param_2) * 0.5),uVar4,param_4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 0x10);
  uStack_a0 = uVar14;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010c08de00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf493a0(uVar6,param_4,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_3 + 0x10);
  uStack_98 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf493a0(uVar9,param_4,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_90 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_a8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_4,puVar12);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar14);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar15);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar13 = *(long *)(param_3 + 0x10);
  func_0x00010c08cdc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  uVar15 = *(undefined8 *)(lVar13 + 0x18);
  func_0x00010bfecde0(uVar15);
  uVar14 = *(undefined8 *)(lVar13 + 8);
  func_0x00010c0dfd40(uVar14,param_4,uVar15);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar13 + 0x28;
  _objc_loadWeakRetained(lVar13);
  func_0x00010bfbdb20();
  _objc_release(lVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar14);
  return;
}



/* Entry: 105cc3cc0; end: 105cc3d27; -[SCGalleryTabBarsController _handleTabBarViewItemTap:] */

void FUN_105cc3cc0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfecde0(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0dfd40(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfbdb20();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105cc3d28; end: 105cc3f0b; -[SCGalleryTabBarsController _createTabBarViewItemForTabController:] */

void FUN_105cc3d28(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126b09e0;
  uVar1 = param_3;
  func_0x00010c267c60();
  ppuVar4 = *(undefined ***)(param_1 + 0x20);
  ppuVar2 = ppuVar4;
  _objc_retain(ppuVar4);
  ppuVar5 = (undefined **)0x0;
  if ((long)uVar1 < 8) {
    if ((long)uVar1 < 5) {
      if (uVar1 == 2) {
        ppuVar5 = &PTR____CFConstantStringClassReference_110e27ad8;
      }
      else if (uVar1 == 3) {
        ppuVar5 = &PTR____CFConstantStringClassReference_110e27af8;
      }
      else {
        if (uVar1 != 4) goto LAB_105cc3e48;
        ppuVar5 = &PTR____CFConstantStringClassReference_110e279b8;
      }
    }
    else {
      if (1 < uVar1 - 5) goto LAB_105cc3e48;
      ppuVar5 = &PTR____CFConstantStringClassReference_110e27b38;
    }
  }
  else if ((long)uVar1 < 0xe) {
    if (uVar1 != 8) {
      if (uVar1 == 0xb) {
        func_0x000106cf77fc();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar2;
      }
      goto LAB_105cc3e48;
    }
    ppuVar5 = &PTR____CFConstantStringClassReference_110e27b18;
  }
  else if (uVar1 == 0xe) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e27b58;
  }
  else {
    if (uVar1 == 0xf) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e27b78;
      goto LAB_105cc3e48;
    }
    if (uVar1 != 0x10) goto LAB_105cc3e48;
    ppuVar5 = &PTR____CFConstantStringClassReference_110e27b98;
  }
  func_0x00010bcbeaa8(ppuVar5,0);
  _objc_retainAutoreleasedReturnValue();
LAB_105cc3e48:
  _objc_release(ppuVar4);
  func_0x00010c267c60();
  func_0x00010c267620(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_shouldShowBadge_11266a700);
  if ((uVar1 & 1) != 0) {
    func_0x00010c233360(param_3);
    func_0x00010c16ee20(puVar3);
  }
  func_0x00010c29fbc0(param_3);
  func_0x00010c1fadc0(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105cc3f0c; end: 105cc3f23; -[SCGalleryTabBarsController delegate] */

void FUN_105cc3f0c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cc3f24; end: 105cc3f2f; -[SCGalleryTabBarsController setDelegate:] */

void FUN_105cc3f24(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 105cc3f30; end: 105cc3f37; -[SCGalleryTabBarsController containerView] */

undefined8 FUN_105cc3f30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105cc3f38; end: 105cc3f93; -[SCGalleryTabBarsController .cxx_destruct] */

void FUN_105cc3f38(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105cc3f94; end: 105cc522b; -[SCGalleryTabsController initWithContainerViewController:memoriesScopeDelegate:configuration:storyEditorScopeExposer:spectaclesServices:spectaclesAppStatusServices:spectaclesContentStatusServices:memoriesInlineSearchDataServices:commerceConfigProvider:snapsTabSectionPluginsFuture:snapsTabBannerPluginsFuture:circumstanceEngine:screenshopTabServices:composerCoreUIServices:valdiRuntimeProvider:storiesTabService:cameraRollTabService:privateLockedTabService:gridTabsService:currentPageTracker:legacyOperaPresenterBuilder:featureSettingsService:cloudSync:galleryLogger:userTrackedLogger:memoriesPrivateMemoriesManager:highlightContentDataSource:memoriesPrivateGallerySetupFlowScopeExposer:creativeToolsABProvider:grapheneRegistry:snapsTabCRSectionPluginFuture:experimentServices:applicationLifecycleEvents:cameraConfig:dreamsScopeExposer:genAIDreamsScopeServices:generativeAiOnboardingScopeExposer:dreamsSessionService:crashServices:heroPlayerController:memoriesContentUnderstandingTabService:mergedDatasource:memoriesSelectionFooterBarController:cameraRollAlbumPickerScopeExposer:memoriesMashupStyleFeaturedStoriesGenerationWorkflow:memoriesMonetizationServices:plusServices:plusSubscribeScopeExposer:plusSubscribeScopeServices:plusOpenSubscriptionManagementServices:memoriesUserDefaultsManager:plusFullscreenUpsellScopeFactoryServices:backfillSnapCountProvider:deckServices:webLauncher:faceTaggingItemActionHandler:memoriesOperaLauncher:faceTaggingBackfillServices:memoriesFaceTagPreviewServices:] */

undefined8 *
FUN_105cc3f94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             ulong param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
             undefined8 param_61)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain();
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_54);
  _objc_retain();
  _objc_retain(param_56);
  _objc_retain(param_57);
  _objc_retain(param_58);
  _objc_retain(param_59);
  _objc_retain();
  _objc_retain(param_61);
  puStack_80 = PTR_PTR_1126ecbf0;
  puVar2 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar2 + 0x71) = 0;
    _objc_retain(param_55);
    uVar3 = puVar2[0x32];
    puVar2[0x32] = param_55;
    _objc_release(uVar3);
    _objc_retain(param_60);
    uVar3 = puVar2[0x33];
    puVar2[0x33] = param_60;
    _objc_release(uVar3);
    _objc_retain(param_61);
    uVar3 = puVar2[0x34];
    puVar2[0x34] = param_61;
    _objc_release(uVar3);
    _objc_storeWeak(puVar2 + 2,param_3);
    _objc_storeWeak(puVar2 + 0x13,param_6);
    *(undefined1 *)(puVar2 + 0x35) = 1;
    _objc_retain(param_21);
    uVar3 = puVar2[0x14];
    puVar2[0x14] = param_21;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar2[0x15];
    puVar2[0x15] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_22);
    uVar3 = puVar2[0x17];
    puVar2[0x17] = param_22;
    _objc_release(uVar3);
    _objc_retain(param_24);
    uVar3 = puVar2[0x18];
    puVar2[0x18] = param_24;
    _objc_release(uVar3);
    _objc_retain(param_23);
    uVar3 = puVar2[0x19];
    puVar2[0x19] = param_23;
    _objc_release(uVar3);
    _objc_retain(param_25);
    uVar3 = puVar2[0x1a];
    puVar2[0x1a] = param_25;
    _objc_release(uVar3);
    _objc_retain(param_31);
    uVar3 = puVar2[0x16];
    puVar2[0x16] = param_31;
    _objc_release(uVar3);
    _objc_retain(param_26);
    uVar3 = puVar2[0x1b];
    puVar2[0x1b] = param_26;
    _objc_release(uVar3);
    _objc_retain(param_36);
    uVar3 = puVar2[0x23];
    puVar2[0x23] = param_36;
    _objc_release(uVar3);
    _objc_retain(param_48);
    uVar3 = puVar2[0x25];
    puVar2[0x25] = param_48;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae720;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105cc522c;
    puStack_a0 = &UNK_1108e4400;
    _objc_retain(param_27);
    uStack_98 = param_27;
    _objc_retain(param_26);
    uStack_90 = param_26;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0x1c];
    puVar2[0x1c] = puVar4;
    _objc_release(uVar3);
    _objc_retain(param_42);
    uVar3 = puVar2[0x27];
    puVar2[0x27] = param_42;
    _objc_release(uVar3);
    _objc_retain(param_28);
    uVar3 = puVar2[0x1e];
    puVar2[0x1e] = param_28;
    _objc_release(uVar3);
    _objc_retain(param_29);
    uVar3 = puVar2[0x1f];
    puVar2[0x1f] = param_29;
    _objc_release(uVar3);
    _objc_retain(param_32);
    uVar3 = puVar2[0x22];
    puVar2[0x22] = param_32;
    _objc_release(uVar3);
    uVar3 = param_34;
    func_0x00010c0c8940();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = puVar2[0x24];
    puVar2[0x24] = uVar3;
    _objc_release(uVar21);
    _objc_retain(param_49);
    uVar3 = puVar2[0x26];
    puVar2[0x26] = param_49;
    _objc_release(uVar3);
    _objc_retain(param_54);
    uVar3 = puVar2[0x2e];
    puVar2[0x2e] = param_54;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar2[0x2d];
    puVar2[0x2d] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar5 = PTR_PTR_1126b2298;
    _objc_alloc();
    uVar3 = param_10;
    func_0x00010c0653c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002960();
    _objc_release(uVar3);
    _objc_retain(puVar5);
    uVar3 = puVar2[0x28];
    puVar2[0x28] = puVar5;
    _objc_release(uVar3);
    func_0x00010befa120(puVar4);
    uVar3 = param_26;
    func_0x00010c269d40(param_26);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar2[0x1c];
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar6;
    func_0x00010bfc7760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c5940(uVar3);
    _objc_release(uVar21);
    _objc_release(uVar6);
    _objc_release(uVar3);
    puVar7 = PTR_PTR_1126c3a68;
    _objc_alloc();
    puVar8 = puVar2 + 2;
    _objc_loadWeakRetained(puVar8);
    func_0x00010c0029e0();
    uVar3 = puVar2[8];
    puVar2[8] = puVar7;
    _objc_release(uVar3);
    _objc_release(puVar8);
    func_0x00010befa120(puVar4);
    puVar7 = PTR_PTR_1126c3ad8;
    _objc_alloc();
    puVar8 = puVar2 + 2;
    _objc_loadWeakRetained();
    func_0x00010c0502e0();
    _objc_release(puVar8);
    func_0x00010befa120(puVar4);
    uVar13 = param_21;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar13;
    func_0x00010bf8a840();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar12;
    func_0x00010bfbe800();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x00010c070f00();
    _objc_release(uVar10);
    _objc_release(uVar11);
    _objc_release(uVar12);
    _objc_release(uVar13);
    uVar14 = param_21;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar14;
    func_0x00010bf8a840();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bfbe800();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar13;
    func_0x00010c070f20();
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar14);
    uVar11 = param_21;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bf8a840();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bfbe800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    _objc_release(uVar11);
    uVar12 = param_21;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar12;
    func_0x00010bf8a840();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar11;
    func_0x00010bfbe760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    _objc_release(uVar12);
    uVar12 = uVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar12;
    func_0x00010c06bde0();
    _objc_release(uVar12);
    if ((((uVar9 & 1) != 0) || ((uVar10 & 1) != 0)) || ((int)uVar11 != 0)) {
      puVar15 = PTR_PTR_1126c3ae0;
      _objc_alloc();
      puVar8 = puVar2 + 2;
      _objc_loadWeakRetained(puVar8);
      func_0x00010c0029a0();
      uVar3 = puVar2[9];
      puVar2[9] = puVar15;
      _objc_release(uVar3);
      _objc_release(puVar8);
      func_0x00010befa120(puVar4);
    }
    iVar1 = (int)puVar2[0x15];
    func_0x000106dbdc94();
    if (iVar1 != 0) {
      puVar15 = PTR_PTR_1126c3ae8;
      _objc_alloc(PTR_PTR_1126c3ae8);
      puVar8 = puVar2 + 2;
      _objc_loadWeakRetained(puVar8);
      func_0x00010c002920(puVar15);
      _objc_release(puVar8);
      func_0x00010befa120(puVar4);
      _objc_release(puVar15);
    }
    puVar15 = PTR_PTR_1126c3af0;
    _objc_alloc();
    puVar8 = puVar2 + 2;
    _objc_loadWeakRetained(puVar8);
    func_0x00010c002980();
    _objc_release(puVar8);
    func_0x00010befa120(puVar4);
    puVar16 = PTR_PTR_1126b2298;
    _objc_alloc();
    puVar8 = puVar2 + 2;
    _objc_loadWeakRetained(puVar8);
    uVar3 = param_10;
    func_0x00010c0653c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002900();
    _objc_release(uVar3);
    _objc_release(puVar8);
    _objc_retain(puVar16);
    uVar3 = puVar2[0x29];
    puVar2[0x29] = puVar16;
    _objc_release(uVar3);
    func_0x00010befa120(puVar4);
    puVar17 = PTR_PTR_1126c3af8;
    _objc_alloc();
    puVar8 = puVar2 + 2;
    _objc_loadWeakRetained(puVar8);
    func_0x00010c0502c0();
    uVar3 = puVar2[0x2a];
    puVar2[0x2a] = puVar17;
    _objc_release(uVar3);
    _objc_release(puVar8);
    func_0x00010befa120(puVar4);
    _objc_retain(puVar4);
    uVar3 = puVar2[3];
    puVar2[3] = puVar4;
    _objc_release(uVar3);
    func_0x00010bee1aa0(puVar2);
    func_0x00010bee1a80(puVar2);
    func_0x00010bee1ac0(puVar2);
    *(undefined1 *)((long)puVar2 + 0x61) = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    uVar3 = puVar2[0x1a];
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar3);
    puVar17 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar2[1];
    puVar2[1] = puVar17;
    _objc_release(uVar3);
    _objc_initWeak(auStack_c0,puVar2);
    uVar6 = puVar2[0x1e];
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c252740();
    _objc_retainAutoreleasedReturnValue();
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_105cc525c;
    puStack_d0 = &UNK_110842a38;
    _objc_copyWeak(auStack_c8,auStack_c0);
    uVar21 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar21);
    _objc_release(uVar3);
    _objc_release(uVar6);
    puVar2[0xd] = 0;
    func_0x00010bed5580(puVar2);
    uVar3 = param_34;
    func_0x00010bf522a0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = puVar2[0x20];
    puVar2[0x20] = uVar3;
    _objc_release(uVar21);
    uVar3 = param_34;
    func_0x00010c27eca0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = puVar2[0x21];
    puVar2[0x21] = uVar3;
    _objc_release(uVar21);
    puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar2[0x12];
    puVar2[0x12] = puVar17;
    _objc_release(uVar3);
    uVar3 = param_34;
    func_0x00010c0c8940();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar2[0x2b];
    puVar2[0x2b] = uVar21;
    _objc_release(uVar6);
    _objc_release(uVar3);
    uVar3 = param_34;
    func_0x00010c0c8940();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar2[0x2c];
    puVar2[0x2c] = uVar21;
    _objc_release(uVar6);
    _objc_release(uVar3);
    uVar3 = param_48;
    func_0x00010c2572e0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar21;
    func_0x00010c077f00();
    _objc_release(uVar21);
    _objc_release(uVar3);
    if ((int)uVar6 != 0) {
      _objc_initWeak(auStack_f0,puVar2);
      uVar3 = param_48;
      func_0x00010c2572e0(param_48);
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar21;
      func_0x00010c0e0fa0();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar6;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar6;
      func_0x00010c0e0ea0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_f8,auStack_f0);
      uVar20 = uVar19;
      func_0x00010c25ff60(uVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar20);
      _objc_release(uVar19);
      _objc_release(uVar18);
      _objc_release(uVar6);
      _objc_release(uVar21);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_f8);
      _objc_destroyWeak(auStack_f0);
    }
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(auStack_c0);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
  }
  _objc_release(param_61);
  _objc_release(param_60);
  _objc_release(param_59);
  _objc_release(param_58);
  _objc_release(param_57);
  _objc_release(param_56);
  _objc_release(param_55);
  _objc_release(param_54);
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
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
  return puVar2;
}



/* Entry: 105cc522c; end: 105cc525b;  */

void FUN_105cc522c(void)

{
  _objc_alloc(PTR_PTR_1126c3ad0);
  func_0x00010c05f1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cc525c; end: 105cc52bb;  */

void FUN_105cc525c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c067fc0(param_2);
  _objc_release(param_2);
  func_0x00010be2e700(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cc52bc; end: 105cc535f;  */

void FUN_105cc52bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf80a20(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,param_2);
  return;
}



/* Entry: 105cc5360; end: 105cc53c3; -[SCGalleryTabsController dealloc] */

void FUN_105cc5360(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126ecbf0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105cc53c4; end: 105cc5673; -[SCGalleryTabsController loadViewsIfNeeded] */

void FUN_105cc53c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  
  uVar1 = param_5;
  func_0x00010c0834c0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  lVar2 = param_5 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x00010c1f7ac0();
  uVar10 = 0x4010000000000000;
  func_0x00010c1c8300(0x4010000000000000,puVar4);
  func_0x00010c1c82c0(0x4010000000000000,puVar4);
  func_0x00010c1b6260(param_3,param_4,puVar4);
  puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c292ae0();
  _objc_release(puVar5);
  if (puVar6 == (undefined *)0x1) {
    uVar7 = *(undefined8 *)(param_5 + 0x158);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf1f3c0();
    _objc_release(uVar7);
    if ((int)uVar8 == 0) {
      uVar8 = 0x4010000000000000;
      uVar10 = 0;
      goto LAB_105cc54ec;
    }
  }
  uVar8 = 0;
LAB_105cc54ec:
  dVar9 = 0.0;
  func_0x00010c1f93e0(0,uVar8,0,uVar10,puVar4);
  func_0x000100841590(param_3,param_4);
  puVar5 = PTR_PTR_1126c3a80;
  _objc_alloc();
  func_0x00010c014040(param_3,param_4,dVar9 + 4.0,uVar10);
  uVar10 = *(undefined8 *)(param_5 + 0x28);
  *(undefined **)(param_5 + 0x28) = puVar5;
  _objc_release(uVar10);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0x28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_5 + 0x28),param_6,puVar5);
  _objc_release(puVar5);
  func_0x00010c1f7e20(*(undefined8 *)(param_5 + 0x28),param_6,0);
  func_0x00010c1d8be0(*(undefined8 *)(param_5 + 0x28),param_6,1);
  func_0x00010c2025c0(*(undefined8 *)(param_5 + 0x28),param_6,0);
  func_0x00010c2026e0(*(undefined8 *)(param_5 + 0x28),param_6,0);
  func_0x00010c18b5e0(*(undefined8 *)(param_5 + 0x28),param_6,param_5);
  func_0x00010c189840(*(undefined8 *)(param_5 + 0x28),param_6,param_5);
  uVar10 = *(undefined8 *)(param_5 + 0x28);
  puVar5 = PTR_PTR_1126c3a88;
  _objc_opt_class(PTR_PTR_1126c3a88);
  func_0x00010c126000(uVar10,param_6,puVar5,&PTR____CFConstantStringClassReference_110e22938);
  func_0x00010c167740(*(undefined8 *)(param_5 + 0x28),param_6,0);
  puVar5 = PTR_PTR_1126c3b00;
  _objc_alloc();
  func_0x00010c005c20();
  uVar10 = *(undefined8 *)(param_5 + 0x30);
  *(undefined **)(param_5 + 0x30) = puVar5;
  _objc_release(uVar10);
  func_0x00010c18b5e0(*(undefined8 *)(param_5 + 0x30),param_6,param_5);
  puVar5 = PTR_PTR_1126c3b08;
  _objc_alloc();
  func_0x00010c050400();
  uVar10 = *(undefined8 *)(param_5 + 0x38);
  *(undefined **)(param_5 + 0x38) = puVar5;
  _objc_release(uVar10);
  func_0x00010bed71c0(param_5,param_6,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105cc5674; end: 105cc567b; -[SCGalleryTabsController fetchAllFeaturedStories] */

void FUN_105cc5674(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa4b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x140),PTR_s_fetchAllFeaturedStories_1125c6c88);
  return;
}



/* Entry: 105cc567c; end: 105cc5683; -[SCGalleryTabsController snapsTabHasFinishedFirstLoad] */

undefined1 FUN_105cc567c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x71);
}



/* Entry: 105cc5684; end: 105cc56df; -[SCGalleryTabsController galleryViewHeightUpdated] */

void FUN_105cc5684(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf408e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069fe0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x1c0);
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c2113d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s_setTabController_withPreferredFr_112661f18,uVar2);
  return;
}



/* Entry: 105cc56e0; end: 105cc570b; -[SCGalleryTabsController galleryViewSizeUpdated] */

void FUN_105cc56e0(long param_1)

{
  func_0x00010bfbdea0();
                    /* WARNING: Could not recover jumptable at 0x00010be9c070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__scrollToDisplayedTabController__1125849c0,
             *(undefined8 *)(param_1 + 0x1c0),0);
  return;
}



/* Entry: 105cc570c; end: 105cc5757; -[SCGalleryTabsController galleryViewDidDisappear] */

void FUN_105cc570c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94d80();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be0acb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__enumerateTabControllers_block__1125604c8,*(undefined8 *)(param_1 + 0x20)
             ,&PTR___NSConcreteGlobalBlock_1108e4490);
  return;
}



/* Entry: 105cc5758; end: 105cc575f;  */

void FUN_105cc5758(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbde90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_galleryViewDidDisappear_1125cd148);
  return;
}



/* Entry: 105cc5760; end: 105cc5777; -[SCGalleryTabsController galleryViewWillAppear] */

void FUN_105cc5760(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0acb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__enumerateTabControllers_block__1125604c8,*(undefined8 *)(param_1 + 0x20)
             ,&PTR___NSConcreteGlobalBlock_1108e44b0);
  return;
}



/* Entry: 105cc5778; end: 105cc5823; -[SCGalleryTabsController galleryViewDidAppear] */

void FUN_105cc5778(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010be0aca0(param_1,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR___NSConcreteGlobalBlock_1108e44d0);
  uVar1 = *(ulong *)(param_1 + 0x160);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010be360c0(param_1);
  }
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c267c60(*(undefined8 *)(param_1 + 0x1c0));
  func_0x00010c24f3a0(uVar3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x1c0);
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c2113d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar3,PTR_s_setTabController_withPreferredFr_112661f18,uVar4);
  return;
}



/* Entry: 105cc5824; end: 105cc582b;  */

void FUN_105cc5824(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbde70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_galleryViewDidAppear_1125cd140);
  return;
}



/* Entry: 105cc582c; end: 105cc5833; -[SCGalleryTabsController tabBarsContainerView] */

void FUN_105cc582c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_containerView_1125b0650);
  return;
}



/* Entry: 105cc5834; end: 105cc583b; -[SCGalleryTabsController tableIndexView] */

void FUN_105cc5834(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c267e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_tableIndex_1126779a8)
  ;
  return;
}



/* Entry: 105cc583c; end: 105cc5873; -[SCGalleryTabsController setScrollContentBottomInset:] */

void FUN_105cc583c(double param_1,long param_2)

{
  if (*(double *)(param_2 + 0x1b8) != param_1) {
    *(double *)(param_2 + 0x1b8) = param_1;
    func_0x00010bee1aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bee1b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__updateTableIndexControllerWithF_112596068)
    ;
    return;
  }
  return;
}



/* Entry: 105cc5874; end: 105cc5887; -[SCGalleryTabsController scrollContentOffset] */

undefined8 FUN_105cc5874(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + 0x1c0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c151eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_2 + 0x1c0),PTR_s_scrollContentOffset_1126321c8);
    return param_1;
  }
  return 0;
}



/* Entry: 105cc5888; end: 105cc588f; -[SCGalleryTabsController scrollContentTopInset] */

undefined8 FUN_105cc5888(void)

{
  return 0;
}



/* Entry: 105cc5890; end: 105cc589b; -[SCGalleryTabsController setScrollContentOffset:] */

void FUN_105cc5890(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1f7a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setScrollContentOffset_animated__11265b8b8,0,0);
  return;
}



/* Entry: 105cc589c; end: 105cc590f; -[SCGalleryTabsController setScrollContentOffset:animated:completion:] */

void FUN_105cc589c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  _objc_retain(param_5);
  if (*(long *)(param_2 + 0x1c0) == 0) {
    if (param_5 != 0) {
      func_0x000100162d98("APPSTORE",param_5);
    }
  }
  else {
    func_0x00010c1f7a40(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105cc5910; end: 105cc5933; -[SCGalleryTabsController scrollContentDistanceToTop] */

double FUN_105cc5910(double param_1,long param_2)

{
  if (*(long *)(param_2 + 0x1c0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c151e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_2 + 0x1c0),PTR_s_scrollContentDistanceToTop_1126321c0);
    return param_1;
  }
  return *(double *)(param_2 + 0x58) + 38.0;
}



/* Entry: 105cc5934; end: 105cc594b; -[SCGalleryTabsController setVisible:] */

void FUN_105cc5934(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0x1a8) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x1a8) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bee1ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateTabControllersWithVisible_112596058);
  return;
}



/* Entry: 105cc594c; end: 105cc5a6b; -[SCGalleryTabsController setSelectMode:] */

void FUN_105cc594c(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(byte *)(param_1 + 0x1a9) != param_3) {
    *(char *)(param_1 + 0x1a9) = (char)param_3;
    lVar4 = *(long *)(param_1 + 0x18);
    _objc_retain(lVar4);
    lVar2 = lVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00010c1facc0(*(undefined8 *)(lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    func_0x00010bed71c0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c158a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_selectFirstTabBarVisually_112633cb0);
  return;
}



/* Entry: 105cc5a6c; end: 105cc5a73; -[SCGalleryTabsController selectFirstTabBarVisually] */

void FUN_105cc5a6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c158a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_selectFirstTabBarVisually_112633cb0);
  return;
}



/* Entry: 105cc5a74; end: 105cc5b5b; -[SCGalleryTabsController setFocused:] */

void FUN_105cc5a74(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(byte *)(param_1 + 0x1aa) != param_3) {
    *(char *)(param_1 + 0x1aa) = (char)param_3;
    func_0x00010bee1a80();
    if (*(char *)(param_1 + 0x1aa) == '\x01') {
      lVar1 = *(long *)(param_1 + 0xd8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf5f400();
      lVar3 = *(long *)(param_1 + 0x1c0);
      func_0x00010c267c60();
      _objc_release(lVar1);
      if (lVar2 != lVar3) {
        uVar4 = *(undefined8 *)(param_1 + 0xd8);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + 0x1c0);
        func_0x00010c267c60(uVar5);
        func_0x00010c187c80(uVar4,param_2,uVar5);
        _objc_release(uVar4);
        uVar4 = *(undefined8 *)(param_1 + 0xe0);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + 0x1c0);
        func_0x00010c267c60(uVar5);
        func_0x00010c24f3a0(uVar4,param_2,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar4);
        return;
      }
    }
  }
  return;
}



/* Entry: 105cc5b5c; end: 105cc5bbf; -[SCGalleryTabsController _setLoading:] */

void FUN_105cc5b5c(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(byte *)(param_1 + 0x70) != param_3) {
    *(char *)(param_1 + 0x70) = (char)param_3;
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_105cc5bc0;
    puStack_20 = &UNK_1108e44f0;
    lStack_18 = param_1;
    func_0x00010be0aca0(param_1,param_2,*(undefined8 *)(param_1 + 0x18),&puStack_38);
  }
  return;
}



/* Entry: 105cc5bc0; end: 105cc5bcf;  */

void FUN_105cc5bc0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1beb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setLoading__11264d500,*(undefined1 *)(*(long *)(param_1 + 0x20) + 0x70));
  return;
}



/* Entry: 105cc5bd0; end: 105cc5d4f; -[SCGalleryTabsController selectedGalleryItems] */

undefined ** FUN_105cc5bd0(undefined **param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *unaff_x22;
  undefined *unaff_x23;
  ulong uVar10;
  undefined **unaff_x24;
  long lVar11;
  undefined **unaff_x25;
  undefined *unaff_x26;
  undefined **ppuVar12;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined *puStack_690;
  long lStack_688;
  long *plStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  long lStack_5c8;
  undefined **ppuStack_5c0;
  undefined **ppuStack_5b8;
  undefined *puStack_5b0;
  undefined **ppuStack_5a8;
  undefined **ppuStack_5a0;
  undefined *puStack_598;
  undefined *puStack_590;
  undefined **ppuStack_588;
  undefined **ppuStack_580;
  undefined **ppuStack_578;
  undefined1 ****ppppuStack_570;
  code *pcStack_568;
  undefined8 uStack_560;
  long lStack_558;
  undefined8 *puStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  long lStack_518;
  undefined8 *puStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  long lStack_3e0;
  undefined1 ***pppuStack_380;
  code *pcStack_378;
  undefined8 uStack_370;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_2a8;
  undefined1 **ppuStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  puStack_110 = (undefined8 *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010be4ef80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = param_1;
  func_0x00010bf52a60();
  if (ppuVar7 != (undefined **)0x0) {
    unaff_x24 = (undefined **)*puStack_110;
    do {
      unaff_x25 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_110 != unaff_x24) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x22 = *(undefined **)(lStack_118 + (long)unaff_x25 * 8);
        puVar2 = unaff_x22;
        func_0x00010c22f240();
        if ((int)puVar2 != 0) {
          func_0x00010c159720();
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = unaff_x22;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar8);
          _objc_release(unaff_x23);
          _objc_release(unaff_x22);
        }
        unaff_x25 = (undefined **)((long)unaff_x25 + 1);
      } while (ppuVar7 != unaff_x25);
      ppuVar7 = param_1;
      func_0x00010bf52a60();
    } while (ppuVar7 != (undefined **)0x0);
  }
  _objc_release(param_1);
  ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
  func_0x00010c0ecd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_128 = FUN_105cc5d50;
    lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    puStack_130 = &stack0xfffffffffffffff0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    puStack_240 = (undefined8 *)0x0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    func_0x00010be4ef80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar8;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      unaff_x24 = (undefined **)*puStack_240;
      unaff_x25 = &PTR_s_selectedGeoFilterId_112634000;
      do {
        unaff_x22 = PTR_s_selectedSnapItems_112634228;
        unaff_x26 = (undefined *)0x0;
        do {
          if ((undefined **)*puStack_240 != unaff_x24) {
            _objc_enumerationMutation(puVar8);
          }
          unaff_x23 = *(undefined **)(lStack_248 + (long)unaff_x26 * 8);
          puVar3 = unaff_x23;
          func_0x00010c22f240();
          if (((int)puVar3 != 0) &&
             (puVar3 = unaff_x23, _objc_opt_respondsToSelector(unaff_x23,unaff_x22),
             ((ulong)puVar3 & 1) != 0)) {
            func_0x00010c15a020();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c280520(ppuVar9);
            _objc_release(unaff_x23);
          }
          unaff_x26 = unaff_x26 + 1;
        } while (puVar2 != unaff_x26);
        puVar2 = puVar8;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(puVar8);
    ppuVar7 = ppuVar9;
    func_0x00010bf51e00();
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
      ___stack_chk_fail();
      pcStack_258 = FUN_105cc5ed0;
      lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      ppuStack_260 = &puStack_130;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      lStack_368 = 0;
      uStack_370 = 0;
      uStack_358 = 0;
      puStack_360 = (undefined8 *)0x0;
      uStack_348 = 0;
      uStack_350 = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      func_0x00010c15a020();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar9;
      func_0x00010bf52a60();
      if (ppuVar7 != (undefined **)0x0) {
        unaff_x23 = (undefined *)*puStack_360;
        do {
          unaff_x24 = (undefined **)0x0;
          do {
            if ((undefined *)*puStack_360 != unaff_x23) {
              _objc_enumerationMutation(ppuVar9);
            }
            unaff_x22 = *(undefined **)(lStack_368 + (long)unaff_x24 * 8);
            func_0x00010c23f220();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(ppuVar12);
            _objc_release(unaff_x22);
            unaff_x24 = (undefined **)((long)unaff_x24 + 1);
          } while (ppuVar7 != unaff_x24);
          ppuVar7 = ppuVar9;
          func_0x00010bf52a60();
        } while (ppuVar7 != (undefined **)0x0);
      }
      _objc_release(ppuVar9);
      ppuVar7 = ppuVar12;
      func_0x00010bf51e00();
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2a8) {
        ___stack_chk_fail();
        pcStack_378 = FUN_105cc6020;
        lStack_3e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
        pppuStack_380 = &ppuStack_260;
        _objc_opt_new();
        lStack_518 = 0;
        uStack_520 = 0;
        uStack_508 = 0;
        puStack_510 = (undefined8 *)0x0;
        uStack_4f8 = 0;
        uStack_500 = 0;
        uStack_4e8 = 0;
        uStack_4f0 = 0;
        func_0x00010be4ef80();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar12;
        func_0x00010bf52a60();
        if (ppuVar7 != (undefined **)0x0) {
          unaff_x26 = (undefined *)*puStack_510;
          unaff_x28 = &PTR_s_selectedGeoFilterId_112634000;
          do {
            unaff_x23 = PTR_s_selectedSnapItems_112634228;
            unaff_x22 = PTR_s_orderedSelectedSnapItems_112618d50;
            unaff_x27 = (undefined **)0x0;
            do {
              if ((undefined *)*puStack_510 != unaff_x26) {
                _objc_enumerationMutation(ppuVar12);
              }
              unaff_x24 = *(undefined ***)(lStack_518 + (long)unaff_x27 * 8);
              ppuVar4 = unaff_x24;
              func_0x00010c22f240();
              if ((int)ppuVar4 != 0) {
                ppuVar4 = unaff_x24;
                _objc_opt_respondsToSelector(unaff_x24,unaff_x22);
                if (((ulong)ppuVar4 & 1) == 0) {
                  ppuVar4 = unaff_x24;
                  _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
                  if (((ulong)ppuVar4 & 1) == 0) goto LAB_105cc6168;
                  func_0x00010c15a020();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x25 = unaff_x24;
                  func_0x00010bf00560();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa160(ppuVar9);
                  _objc_release(unaff_x25);
                }
                else {
                  func_0x00010c0ecce0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa160(ppuVar9);
                }
                _objc_release(unaff_x24);
              }
LAB_105cc6168:
              unaff_x27 = (undefined **)((long)unaff_x27 + 1);
            } while (ppuVar7 != unaff_x27);
            ppuVar7 = ppuVar12;
            func_0x00010bf52a60();
          } while (ppuVar7 != (undefined **)0x0);
        }
        _objc_release(ppuVar12);
        ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf529e0(ppuVar9);
        func_0x00010bf0a0e0();
        _objc_retainAutoreleasedReturnValue();
        lStack_558 = 0;
        uStack_560 = 0;
        uStack_548 = 0;
        puStack_550 = (undefined8 *)0x0;
        uStack_538 = 0;
        uStack_540 = 0;
        uStack_528 = 0;
        uStack_530 = 0;
        _objc_retain(ppuVar9);
        ppuVar7 = ppuVar9;
        func_0x00010bf52a60();
        if (ppuVar7 != (undefined **)0x0) {
          unaff_x23 = (undefined *)*puStack_550;
          do {
            unaff_x24 = (undefined **)0x0;
            do {
              if ((undefined *)*puStack_550 != unaff_x23) {
                _objc_enumerationMutation(ppuVar9);
              }
              unaff_x22 = *(undefined **)(lStack_558 + (long)unaff_x24 * 8);
              func_0x00010c23f220();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(ppuVar12);
              _objc_release(unaff_x22);
              unaff_x24 = (undefined **)((long)unaff_x24 + 1);
            } while (ppuVar7 != unaff_x24);
            ppuVar7 = ppuVar9;
            func_0x00010bf52a60();
          } while (ppuVar7 != (undefined **)0x0);
        }
        _objc_release(ppuVar9);
        ppuVar7 = ppuVar12;
        func_0x00010bf51e00();
        _objc_release(ppuVar12);
        ppuVar4 = ppuVar9;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3e0) {
          ___stack_chk_fail();
          ppuVar6 = &puStack_690;
          pcStack_568 = FUN_105cc62cc;
          lStack_5c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          lStack_688 = 0;
          puStack_690 = (undefined *)0x0;
          uStack_678 = 0;
          plStack_680 = (long *)0x0;
          uStack_668 = 0;
          uStack_670 = 0;
          uStack_658 = 0;
          uStack_660 = 0;
          ppuStack_5c0 = unaff_x28;
          ppuStack_5b8 = unaff_x27;
          puStack_5b0 = unaff_x26;
          ppuStack_5a8 = unaff_x25;
          ppuStack_5a0 = unaff_x24;
          puStack_598 = unaff_x23;
          puStack_590 = unaff_x22;
          ppuStack_588 = ppuVar7;
          ppuStack_580 = ppuVar12;
          ppuStack_578 = ppuVar9;
          ppppuStack_570 = &pppuStack_380;
          func_0x00010be4ef80();
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = ppuVar4;
          func_0x00010bf52a60();
          if (ppuVar7 == (undefined **)0x0) {
            ppuVar9 = (undefined **)0x0;
          }
          else {
            ppuVar9 = (undefined **)0x0;
            lVar11 = *plStack_680;
            do {
              puVar8 = PTR_s_selectedItemCount_112634068;
              ppuVar12 = (undefined **)0x0;
              do {
                if (*plStack_680 != lVar11) {
                  _objc_enumerationMutation(ppuVar4);
                }
                uVar10 = *(ulong *)(lStack_688 + (long)ppuVar12 * 8);
                uVar5 = uVar10;
                func_0x00010bfb37a0();
                if (((int)uVar5 != 0) &&
                   (uVar5 = uVar10, _objc_opt_respondsToSelector(uVar10,puVar8), (uVar5 & 1) != 0))
                {
                  func_0x00010c159920();
                  ppuVar9 = (undefined **)((long)ppuVar9 + uVar10);
                }
                ppuVar12 = (undefined **)((long)ppuVar12 + 1);
              } while (ppuVar7 != ppuVar12);
              ppuVar7 = ppuVar4;
              ppuVar6 = &puStack_690;
              func_0x00010bf52a60();
            } while (ppuVar7 != (undefined **)0x0);
          }
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5c8) {
            return ppuVar9;
          }
          ___stack_chk_fail();
          lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
          _objc_retain(ppuVar6);
          if (*(char *)((long)ppuVar4 + 0x1a9) == '\x01') {
            ppuVar9 = ppuVar4;
            func_0x00010c159720();
            _objc_retainAutoreleasedReturnValue();
            ppuVar7 = ppuVar9;
            func_0x00010bf52a60();
            lVar1 = lRam0000000000000000;
            while (ppuVar7 != (undefined **)0x0) {
              ppuVar12 = (undefined **)0x0;
              do {
                if (lRam0000000000000000 != lVar1) {
                  _objc_enumerationMutation(ppuVar9);
                }
                func_0x00010bf351a0(ppuVar6);
                ppuVar12 = (undefined **)((long)ppuVar12 + 1);
              } while (ppuVar7 != ppuVar12);
              ppuVar7 = ppuVar9;
              func_0x00010bf52a60();
            }
            _objc_release(ppuVar9);
            ppuVar7 = ppuVar6;
            _objc_opt_respondsToSelector(ppuVar6,PTR_s_changeSelected_forGallerySnapIte_1125aae18);
            if (((ulong)ppuVar7 & 1) != 0) {
              func_0x00010c15a020();
              _objc_retainAutoreleasedReturnValue();
              ppuVar7 = ppuVar4;
              func_0x00010bf52a60();
              lVar1 = lRam0000000000000000;
              while (ppuVar7 != (undefined **)0x0) {
                ppuVar9 = (undefined **)0x0;
                do {
                  if (lRam0000000000000000 != lVar1) {
                    _objc_enumerationMutation(ppuVar4);
                  }
                  func_0x00010bf351c0(ppuVar6);
                  ppuVar9 = (undefined **)((long)ppuVar9 + 1);
                } while (ppuVar7 != ppuVar9);
                ppuVar7 = ppuVar4;
                func_0x00010bf52a60();
              }
              _objc_release(ppuVar4);
            }
          }
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
            return ppuVar6;
          }
          ___stack_chk_fail();
          ppuVar7 = (undefined **)ppuVar6[0xf];
          func_0x00010c07aae0();
          if ((int)ppuVar7 != 0) {
            *(undefined1 *)(ppuVar6 + 0x30) = 0;
            puVar8 = ppuVar6[0x31];
            ppuVar6[0x31] = (undefined *)0x0;
            _objc_release(puVar8);
            func_0x00010bfb4a60(ppuVar6[0xf]);
            puVar8 = ppuVar6[0xf];
            ppuVar6[0xf] = (undefined *)0x0;
            _objc_release(puVar8);
            ppuVar7 = (undefined **)ppuVar6[5];
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__objc_msgSend_11034d288)(ppuVar7,PTR_s_reloadData_112627cf8);
            return ppuVar7;
          }
          return ppuVar7;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
  return ppuVar7;
}



/* Entry: 105cc5d50; end: 105cc5ecf; -[SCGalleryTabsController selectedSnapItems] */

undefined ** FUN_105cc5d50(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *unaff_x22;
  undefined *unaff_x23;
  ulong uVar8;
  undefined **unaff_x24;
  long lVar9;
  undefined **unaff_x25;
  long unaff_x26;
  undefined **ppuVar10;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined *puStack_570;
  long lStack_568;
  long *plStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  long lStack_4a8;
  undefined **ppuStack_4a0;
  undefined **ppuStack_498;
  long lStack_490;
  undefined **ppuStack_488;
  undefined **ppuStack_480;
  undefined *puStack_478;
  undefined *puStack_470;
  undefined **ppuStack_468;
  undefined **ppuStack_460;
  undefined **ppuStack_458;
  undefined1 ***pppuStack_450;
  code *pcStack_448;
  undefined8 uStack_440;
  long lStack_438;
  undefined8 *puStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long lStack_2c0;
  undefined1 **ppuStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010be4ef80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    unaff_x24 = (undefined **)*puStack_120;
    unaff_x25 = &PTR_s_selectedGeoFilterId_112634000;
    do {
      unaff_x22 = PTR_s_selectedSnapItems_112634228;
      unaff_x26 = 0;
      do {
        if ((undefined **)*puStack_120 != unaff_x24) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x23 = *(undefined **)(lStack_128 + unaff_x26 * 8);
        puVar6 = unaff_x23;
        func_0x00010c22f240();
        if (((int)puVar6 != 0) &&
           (puVar6 = unaff_x23, _objc_opt_respondsToSelector(unaff_x23,unaff_x22),
           ((ulong)puVar6 & 1) != 0)) {
          func_0x00010c15a020();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c280520(ppuVar5);
          _objc_release(unaff_x23);
        }
        unaff_x26 = unaff_x26 + 1;
      } while (lVar9 != unaff_x26);
      lVar9 = param_1;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  _objc_release(param_1);
  ppuVar7 = ppuVar5;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_138 = FUN_105cc5ed0;
    lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    puStack_140 = &stack0xfffffffffffffff0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    puStack_240 = (undefined8 *)0x0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    func_0x00010c15a020();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar5;
    func_0x00010bf52a60();
    if (ppuVar7 != (undefined **)0x0) {
      unaff_x23 = (undefined *)*puStack_240;
      do {
        unaff_x24 = (undefined **)0x0;
        do {
          if ((undefined *)*puStack_240 != unaff_x23) {
            _objc_enumerationMutation(ppuVar5);
          }
          unaff_x22 = *(undefined **)(lStack_248 + (long)unaff_x24 * 8);
          func_0x00010c23f220();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(ppuVar10);
          _objc_release(unaff_x22);
          unaff_x24 = (undefined **)((long)unaff_x24 + 1);
        } while (ppuVar7 != unaff_x24);
        ppuVar7 = ppuVar5;
        func_0x00010bf52a60();
      } while (ppuVar7 != (undefined **)0x0);
    }
    _objc_release(ppuVar5);
    ppuVar7 = ppuVar10;
    func_0x00010bf51e00();
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
      ___stack_chk_fail();
      pcStack_258 = FUN_105cc6020;
      lStack_2c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
      ppuStack_260 = &puStack_140;
      _objc_opt_new();
      lStack_3f8 = 0;
      uStack_400 = 0;
      uStack_3e8 = 0;
      plStack_3f0 = (long *)0x0;
      uStack_3d8 = 0;
      uStack_3e0 = 0;
      uStack_3c8 = 0;
      uStack_3d0 = 0;
      func_0x00010be4ef80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar10;
      func_0x00010bf52a60();
      if (ppuVar7 != (undefined **)0x0) {
        unaff_x26 = *plStack_3f0;
        unaff_x28 = &PTR_s_selectedGeoFilterId_112634000;
        do {
          unaff_x23 = PTR_s_selectedSnapItems_112634228;
          unaff_x22 = PTR_s_orderedSelectedSnapItems_112618d50;
          unaff_x27 = (undefined **)0x0;
          do {
            if (*plStack_3f0 != unaff_x26) {
              _objc_enumerationMutation(ppuVar10);
            }
            unaff_x24 = *(undefined ***)(lStack_3f8 + (long)unaff_x27 * 8);
            ppuVar2 = unaff_x24;
            func_0x00010c22f240();
            if ((int)ppuVar2 != 0) {
              ppuVar2 = unaff_x24;
              _objc_opt_respondsToSelector(unaff_x24,unaff_x22);
              if (((ulong)ppuVar2 & 1) == 0) {
                ppuVar2 = unaff_x24;
                _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
                if (((ulong)ppuVar2 & 1) == 0) goto LAB_105cc6168;
                func_0x00010c15a020();
                _objc_retainAutoreleasedReturnValue();
                unaff_x25 = unaff_x24;
                func_0x00010bf00560();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa160(ppuVar5);
                _objc_release(unaff_x25);
              }
              else {
                func_0x00010c0ecce0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa160(ppuVar5);
              }
              _objc_release(unaff_x24);
            }
LAB_105cc6168:
            unaff_x27 = (undefined **)((long)unaff_x27 + 1);
          } while (ppuVar7 != unaff_x27);
          ppuVar7 = ppuVar10;
          func_0x00010bf52a60();
        } while (ppuVar7 != (undefined **)0x0);
      }
      _objc_release(ppuVar10);
      ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf529e0(ppuVar5);
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      lStack_438 = 0;
      uStack_440 = 0;
      uStack_428 = 0;
      puStack_430 = (undefined8 *)0x0;
      uStack_418 = 0;
      uStack_420 = 0;
      uStack_408 = 0;
      uStack_410 = 0;
      _objc_retain(ppuVar5);
      ppuVar7 = ppuVar5;
      func_0x00010bf52a60();
      if (ppuVar7 != (undefined **)0x0) {
        unaff_x23 = (undefined *)*puStack_430;
        do {
          unaff_x24 = (undefined **)0x0;
          do {
            if ((undefined *)*puStack_430 != unaff_x23) {
              _objc_enumerationMutation(ppuVar5);
            }
            unaff_x22 = *(undefined **)(lStack_438 + (long)unaff_x24 * 8);
            func_0x00010c23f220();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(ppuVar10);
            _objc_release(unaff_x22);
            unaff_x24 = (undefined **)((long)unaff_x24 + 1);
          } while (ppuVar7 != unaff_x24);
          ppuVar7 = ppuVar5;
          func_0x00010bf52a60();
        } while (ppuVar7 != (undefined **)0x0);
      }
      _objc_release(ppuVar5);
      ppuVar7 = ppuVar10;
      func_0x00010bf51e00();
      _objc_release(ppuVar10);
      ppuVar2 = ppuVar5;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2c0) {
        ___stack_chk_fail();
        ppuVar4 = &puStack_570;
        pcStack_448 = FUN_105cc62cc;
        lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lStack_568 = 0;
        puStack_570 = (undefined *)0x0;
        uStack_558 = 0;
        plStack_560 = (long *)0x0;
        uStack_548 = 0;
        uStack_550 = 0;
        uStack_538 = 0;
        uStack_540 = 0;
        ppuStack_4a0 = unaff_x28;
        ppuStack_498 = unaff_x27;
        lStack_490 = unaff_x26;
        ppuStack_488 = unaff_x25;
        ppuStack_480 = unaff_x24;
        puStack_478 = unaff_x23;
        puStack_470 = unaff_x22;
        ppuStack_468 = ppuVar7;
        ppuStack_460 = ppuVar10;
        ppuStack_458 = ppuVar5;
        pppuStack_450 = &ppuStack_260;
        func_0x00010be4ef80();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar2;
        func_0x00010bf52a60();
        if (ppuVar5 == (undefined **)0x0) {
          ppuVar7 = (undefined **)0x0;
        }
        else {
          ppuVar7 = (undefined **)0x0;
          lVar9 = *plStack_560;
          do {
            puVar6 = PTR_s_selectedItemCount_112634068;
            ppuVar10 = (undefined **)0x0;
            do {
              if (*plStack_560 != lVar9) {
                _objc_enumerationMutation(ppuVar2);
              }
              uVar8 = *(ulong *)(lStack_568 + (long)ppuVar10 * 8);
              uVar3 = uVar8;
              func_0x00010bfb37a0();
              if (((int)uVar3 != 0) &&
                 (uVar3 = uVar8, _objc_opt_respondsToSelector(uVar8,puVar6), (uVar3 & 1) != 0)) {
                func_0x00010c159920();
                ppuVar7 = (undefined **)((long)ppuVar7 + uVar8);
              }
              ppuVar10 = (undefined **)((long)ppuVar10 + 1);
            } while (ppuVar5 != ppuVar10);
            ppuVar5 = ppuVar2;
            ppuVar4 = &puStack_570;
            func_0x00010bf52a60();
          } while (ppuVar5 != (undefined **)0x0);
        }
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a8) {
          return ppuVar7;
        }
        ___stack_chk_fail();
        lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain(ppuVar4);
        if (*(char *)((long)ppuVar2 + 0x1a9) == '\x01') {
          ppuVar7 = ppuVar2;
          func_0x00010c159720();
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuVar7;
          func_0x00010bf52a60();
          lVar1 = lRam0000000000000000;
          while (ppuVar5 != (undefined **)0x0) {
            ppuVar10 = (undefined **)0x0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(ppuVar7);
              }
              func_0x00010bf351a0(ppuVar4);
              ppuVar10 = (undefined **)((long)ppuVar10 + 1);
            } while (ppuVar5 != ppuVar10);
            ppuVar5 = ppuVar7;
            func_0x00010bf52a60();
          }
          _objc_release(ppuVar7);
          ppuVar5 = ppuVar4;
          _objc_opt_respondsToSelector(ppuVar4,PTR_s_changeSelected_forGallerySnapIte_1125aae18);
          if (((ulong)ppuVar5 & 1) != 0) {
            func_0x00010c15a020();
            _objc_retainAutoreleasedReturnValue();
            ppuVar5 = ppuVar2;
            func_0x00010bf52a60();
            lVar1 = lRam0000000000000000;
            while (ppuVar5 != (undefined **)0x0) {
              ppuVar7 = (undefined **)0x0;
              do {
                if (lRam0000000000000000 != lVar1) {
                  _objc_enumerationMutation(ppuVar2);
                }
                func_0x00010bf351c0(ppuVar4);
                ppuVar7 = (undefined **)((long)ppuVar7 + 1);
              } while (ppuVar5 != ppuVar7);
              ppuVar5 = ppuVar2;
              func_0x00010bf52a60();
            }
            _objc_release(ppuVar2);
          }
        }
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
          return ppuVar4;
        }
        ___stack_chk_fail();
        ppuVar5 = (undefined **)ppuVar4[0xf];
        func_0x00010c07aae0();
        if ((int)ppuVar5 != 0) {
          *(undefined1 *)(ppuVar4 + 0x30) = 0;
          puVar6 = ppuVar4[0x31];
          ppuVar4[0x31] = (undefined *)0x0;
          _objc_release(puVar6);
          func_0x00010bfb4a60(ppuVar4[0xf]);
          puVar6 = ppuVar4[0xf];
          ppuVar4[0xf] = (undefined *)0x0;
          _objc_release(puVar6);
          ppuVar5 = (undefined **)ppuVar4[5];
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)(ppuVar5,PTR_s_reloadData_112627cf8);
          return ppuVar5;
        }
        return ppuVar5;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
  return ppuVar7;
}



/* Entry: 105cc5ed0; end: 105cc601f; -[SCGalleryTabsController selectedGallerySnaps] */

undefined1 * FUN_105cc5ed0(undefined *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined *unaff_x22;
  undefined *unaff_x23;
  ulong uVar8;
  undefined *unaff_x24;
  long lVar9;
  undefined *puVar10;
  undefined *unaff_x25;
  long unaff_x26;
  undefined *puVar11;
  undefined *unaff_x27;
  undefined **unaff_x28;
  undefined8 uStack_440;
  long lStack_438;
  long *plStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_378;
  undefined **ppuStack_370;
  undefined *puStack_368;
  long lStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined1 **ppuStack_320;
  code *pcStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_190;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  puStack_110 = (undefined8 *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010c15a020();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = param_1;
  func_0x00010bf52a60();
  if (puVar11 != (undefined *)0x0) {
    unaff_x23 = (undefined *)*puStack_110;
    do {
      unaff_x24 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_110 != unaff_x23) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x22 = *(undefined **)(lStack_118 + (long)unaff_x24 * 8);
        func_0x00010c23f220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(unaff_x22);
        unaff_x24 = unaff_x24 + 1;
      } while (puVar11 != unaff_x24);
      puVar11 = param_1;
      func_0x00010bf52a60();
    } while (puVar11 != (undefined *)0x0);
  }
  _objc_release(param_1);
  puVar11 = puVar2;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_128 = FUN_105cc6020;
    lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar10 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    puStack_130 = &stack0xfffffffffffffff0;
    _objc_opt_new();
    lStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    plStack_2c0 = (long *)0x0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    func_0x00010be4ef80();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar2;
    func_0x00010bf52a60();
    if (puVar11 != (undefined *)0x0) {
      unaff_x26 = *plStack_2c0;
      unaff_x28 = &PTR_s_selectedGeoFilterId_112634000;
      do {
        unaff_x23 = PTR_s_selectedSnapItems_112634228;
        unaff_x22 = PTR_s_orderedSelectedSnapItems_112618d50;
        unaff_x27 = (undefined *)0x0;
        do {
          if (*plStack_2c0 != unaff_x26) {
            _objc_enumerationMutation(puVar2);
          }
          unaff_x24 = *(undefined **)(lStack_2c8 + (long)unaff_x27 * 8);
          puVar3 = unaff_x24;
          func_0x00010c22f240();
          if ((int)puVar3 != 0) {
            puVar3 = unaff_x24;
            _objc_opt_respondsToSelector(unaff_x24,unaff_x22);
            if (((ulong)puVar3 & 1) == 0) {
              puVar3 = unaff_x24;
              _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
              if (((ulong)puVar3 & 1) == 0) goto LAB_105cc6168;
              func_0x00010c15a020();
              _objc_retainAutoreleasedReturnValue();
              unaff_x25 = unaff_x24;
              func_0x00010bf00560();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa160(puVar10);
              _objc_release(unaff_x25);
            }
            else {
              func_0x00010c0ecce0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa160(puVar10);
            }
            _objc_release(unaff_x24);
          }
LAB_105cc6168:
          unaff_x27 = unaff_x27 + 1;
        } while (puVar11 != unaff_x27);
        puVar11 = puVar2;
        func_0x00010bf52a60();
      } while (puVar11 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf529e0(puVar10);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    puStack_300 = (undefined8 *)0x0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    _objc_retain(puVar10);
    puVar11 = puVar10;
    func_0x00010bf52a60();
    if (puVar11 != (undefined *)0x0) {
      unaff_x23 = (undefined *)*puStack_300;
      do {
        unaff_x24 = (undefined *)0x0;
        do {
          if ((undefined *)*puStack_300 != unaff_x23) {
            _objc_enumerationMutation(puVar10);
          }
          unaff_x22 = *(undefined **)(lStack_308 + (long)unaff_x24 * 8);
          func_0x00010c23f220();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(unaff_x22);
          unaff_x24 = unaff_x24 + 1;
        } while (puVar11 != unaff_x24);
        puVar11 = puVar10;
        func_0x00010bf52a60();
      } while (puVar11 != (undefined *)0x0);
    }
    _objc_release(puVar10);
    puVar11 = puVar2;
    func_0x00010bf51e00();
    _objc_release(puVar2);
    puVar3 = puVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_190) {
      ___stack_chk_fail();
      puVar5 = &uStack_440;
      pcStack_318 = FUN_105cc62cc;
      lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_438 = 0;
      uStack_440 = 0;
      uStack_428 = 0;
      plStack_430 = (long *)0x0;
      uStack_418 = 0;
      uStack_420 = 0;
      uStack_408 = 0;
      uStack_410 = 0;
      ppuStack_370 = unaff_x28;
      puStack_368 = unaff_x27;
      lStack_360 = unaff_x26;
      puStack_358 = unaff_x25;
      puStack_350 = unaff_x24;
      puStack_348 = unaff_x23;
      puStack_340 = unaff_x22;
      puStack_338 = puVar11;
      puStack_330 = puVar2;
      puStack_328 = puVar10;
      ppuStack_320 = &puStack_130;
      func_0x00010be4ef80();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010bf52a60();
      if (puVar2 == (undefined *)0x0) {
        puVar7 = (undefined1 *)0x0;
      }
      else {
        puVar7 = (undefined1 *)0x0;
        lVar9 = *plStack_430;
        do {
          puVar10 = PTR_s_selectedItemCount_112634068;
          puVar11 = (undefined *)0x0;
          do {
            if (*plStack_430 != lVar9) {
              _objc_enumerationMutation(puVar3);
            }
            uVar8 = *(ulong *)(lStack_438 + (long)puVar11 * 8);
            uVar4 = uVar8;
            func_0x00010bfb37a0();
            if (((int)uVar4 != 0) &&
               (uVar4 = uVar8, _objc_opt_respondsToSelector(uVar8,puVar10), (uVar4 & 1) != 0)) {
              func_0x00010c159920();
              puVar7 = puVar7 + uVar8;
            }
            puVar11 = puVar11 + 1;
          } while (puVar2 != puVar11);
          puVar2 = puVar3;
          puVar5 = &uStack_440;
          func_0x00010bf52a60();
        } while (puVar2 != (undefined *)0x0);
      }
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
        return puVar7;
      }
      ___stack_chk_fail();
      lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar5);
      if (puVar3[0x1a9] == '\x01') {
        puVar11 = puVar3;
        func_0x00010c159720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar11;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (puVar2 != (undefined *)0x0) {
          puVar10 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puVar11);
            }
            func_0x00010bf351a0(puVar5);
            puVar10 = puVar10 + 1;
          } while (puVar2 != puVar10);
          puVar2 = puVar11;
          func_0x00010bf52a60();
        }
        _objc_release(puVar11);
        puVar7 = (undefined1 *)puVar5;
        _objc_opt_respondsToSelector(puVar5,PTR_s_changeSelected_forGallerySnapIte_1125aae18);
        if (((ulong)puVar7 & 1) != 0) {
          func_0x00010c15a020();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar3;
          func_0x00010bf52a60();
          lVar1 = lRam0000000000000000;
          while (puVar2 != (undefined *)0x0) {
            puVar11 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(puVar3);
              }
              func_0x00010bf351c0(puVar5);
              puVar11 = puVar11 + 1;
            } while (puVar2 != puVar11);
            puVar2 = puVar3;
            func_0x00010bf52a60();
          }
          _objc_release(puVar3);
        }
      }
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
        return (undefined1 *)puVar5;
      }
      ___stack_chk_fail();
      puVar7 = *(undefined1 **)((long)puVar5 + 0x78);
      func_0x00010c07aae0();
      if ((int)puVar7 != 0) {
        *(undefined1 *)((long)puVar5 + 0x180) = 0;
        uVar6 = *(undefined8 *)((long)puVar5 + 0x188);
        *(undefined8 *)((long)puVar5 + 0x188) = 0;
        _objc_release(uVar6);
        func_0x00010bfb4a60(*(undefined8 *)((long)puVar5 + 0x78));
        uVar6 = *(undefined8 *)((long)puVar5 + 0x78);
        *(undefined8 *)((long)puVar5 + 0x78) = 0;
        _objc_release(uVar6);
        puVar7 = *(undefined1 **)((long)puVar5 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(puVar7,PTR_s_reloadData_112627cf8);
        return puVar7;
      }
      return puVar7;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return puVar11;
}



/* Entry: 105cc6020; end: 105cc62cb; -[SCGalleryTabsController orderedSelectedGallerySnaps] */

undefined1 * FUN_105cc6020(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined *unaff_x22;
  undefined *unaff_x23;
  ulong uVar8;
  undefined *unaff_x24;
  long lVar9;
  undefined *puVar10;
  undefined *unaff_x25;
  long unaff_x26;
  undefined *puVar11;
  long unaff_x27;
  undefined **unaff_x28;
  undefined8 uStack_320;
  long lStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_258;
  undefined **ppuStack_250;
  long lStack_248;
  long lStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  _objc_opt_new();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  func_0x00010be4ef80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    unaff_x26 = *plStack_1a0;
    unaff_x28 = &PTR_s_selectedGeoFilterId_112634000;
    do {
      unaff_x23 = PTR_s_selectedSnapItems_112634228;
      unaff_x22 = PTR_s_orderedSelectedSnapItems_112618d50;
      unaff_x27 = 0;
      do {
        if (*plStack_1a0 != unaff_x26) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x24 = *(undefined **)(lStack_1a8 + unaff_x27 * 8);
        puVar11 = unaff_x24;
        func_0x00010c22f240();
        if ((int)puVar11 != 0) {
          puVar11 = unaff_x24;
          _objc_opt_respondsToSelector(unaff_x24,unaff_x22);
          if (((ulong)puVar11 & 1) == 0) {
            puVar11 = unaff_x24;
            _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
            if (((ulong)puVar11 & 1) == 0) goto LAB_105cc6168;
            func_0x00010c15a020();
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = unaff_x24;
            func_0x00010bf00560();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa160(puVar2);
            _objc_release(unaff_x25);
          }
          else {
            func_0x00010c0ecce0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa160(puVar2);
          }
          _objc_release(unaff_x24);
        }
LAB_105cc6168:
        unaff_x27 = unaff_x27 + 1;
      } while (lVar9 != unaff_x27);
      lVar9 = param_1;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  _objc_release(param_1);
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(puVar2);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  puStack_1e0 = (undefined8 *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  _objc_retain(puVar2);
  puVar10 = puVar2;
  func_0x00010bf52a60();
  if (puVar10 != (undefined *)0x0) {
    unaff_x23 = (undefined *)*puStack_1e0;
    do {
      unaff_x24 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_1e0 != unaff_x23) {
          _objc_enumerationMutation(puVar2);
        }
        unaff_x22 = *(undefined **)(lStack_1e8 + (long)unaff_x24 * 8);
        func_0x00010c23f220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar11);
        _objc_release(unaff_x22);
        unaff_x24 = unaff_x24 + 1;
      } while (puVar10 != unaff_x24);
      puVar10 = puVar2;
      func_0x00010bf52a60();
    } while (puVar10 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  puVar10 = puVar11;
  func_0x00010bf51e00();
  _objc_release(puVar11);
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return puVar10;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_320;
  pcStack_1f8 = FUN_105cc62cc;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  plStack_310 = (long *)0x0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  ppuStack_250 = unaff_x28;
  lStack_248 = unaff_x27;
  lStack_240 = unaff_x26;
  puStack_238 = unaff_x25;
  puStack_230 = unaff_x24;
  puStack_228 = unaff_x23;
  puStack_220 = unaff_x22;
  puStack_218 = puVar10;
  puStack_210 = puVar11;
  puStack_208 = puVar2;
  puStack_200 = &stack0xfffffffffffffff0;
  func_0x00010be4ef80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010bf52a60();
  if (puVar2 == (undefined *)0x0) {
    puVar7 = (undefined1 *)0x0;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    lVar9 = *plStack_310;
    do {
      puVar10 = PTR_s_selectedItemCount_112634068;
      puVar11 = (undefined *)0x0;
      do {
        if (*plStack_310 != lVar9) {
          _objc_enumerationMutation(puVar3);
        }
        uVar8 = *(ulong *)(lStack_318 + (long)puVar11 * 8);
        uVar4 = uVar8;
        func_0x00010bfb37a0();
        if (((int)uVar4 != 0) &&
           (uVar4 = uVar8, _objc_opt_respondsToSelector(uVar8,puVar10), (uVar4 & 1) != 0)) {
          func_0x00010c159920();
          puVar7 = puVar7 + uVar8;
        }
        puVar11 = puVar11 + 1;
      } while (puVar2 != puVar11);
      puVar2 = puVar3;
      puVar5 = &uStack_320;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_258) {
    ___stack_chk_fail();
    lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar5);
    if (puVar3[0x1a9] == '\x01') {
      puVar11 = puVar3;
      func_0x00010c159720();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar11;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar2 != (undefined *)0x0) {
        puVar10 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar11);
          }
          func_0x00010bf351a0(puVar5);
          puVar10 = puVar10 + 1;
        } while (puVar2 != puVar10);
        puVar2 = puVar11;
        func_0x00010bf52a60();
      }
      _objc_release(puVar11);
      puVar7 = (undefined1 *)puVar5;
      _objc_opt_respondsToSelector(puVar5,PTR_s_changeSelected_forGallerySnapIte_1125aae18);
      if (((ulong)puVar7 & 1) != 0) {
        func_0x00010c15a020();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (puVar2 != (undefined *)0x0) {
          puVar11 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puVar3);
            }
            func_0x00010bf351c0(puVar5);
            puVar11 = puVar11 + 1;
          } while (puVar2 != puVar11);
          puVar2 = puVar3;
          func_0x00010bf52a60();
        }
        _objc_release(puVar3);
      }
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      return (undefined1 *)puVar5;
    }
    ___stack_chk_fail();
    puVar7 = *(undefined1 **)((long)puVar5 + 0x78);
    func_0x00010c07aae0();
    if ((int)puVar7 != 0) {
      *(undefined1 *)((long)puVar5 + 0x180) = 0;
      uVar6 = *(undefined8 *)((long)puVar5 + 0x188);
      *(undefined8 *)((long)puVar5 + 0x188) = 0;
      _objc_release(uVar6);
      func_0x00010bfb4a60(*(undefined8 *)((long)puVar5 + 0x78));
      uVar6 = *(undefined8 *)((long)puVar5 + 0x78);
      *(undefined8 *)((long)puVar5 + 0x78) = 0;
      _objc_release(uVar6);
      puVar7 = *(undefined1 **)((long)puVar5 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(puVar7,PTR_s_reloadData_112627cf8);
      return puVar7;
    }
    return puVar7;
  }
  return puVar7;
}



/* Entry: 105cc62cc; end: 105cc6407; -[SCGalleryTabsController selectedItemCount] */

undefined1 * FUN_105cc62cc(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar3 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010be4ef80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf52a60();
  if (lVar5 == 0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    lVar9 = *plStack_120;
    do {
      puVar1 = PTR_s_selectedItemCount_112634068;
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        uVar7 = *(ulong *)(lStack_128 + lVar11 * 8);
        uVar2 = uVar7;
        func_0x00010bfb37a0();
        if (((int)uVar2 != 0) &&
           (uVar2 = uVar7, _objc_opt_respondsToSelector(uVar7,puVar1), (uVar2 & 1) != 0)) {
          func_0x00010c159920();
          puVar6 = puVar6 + uVar7;
        }
        lVar11 = lVar11 + 1;
      } while (lVar5 != lVar11);
      lVar5 = param_1;
      puVar3 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar6;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  if (*(char *)(param_1 + 0x1a9) == '\x01') {
    lVar8 = param_1;
    func_0x00010c159720();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf52a60();
    lVar11 = lRam0000000000000000;
    while (lVar9 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(lVar8);
        }
        func_0x00010bf351a0(puVar3);
        lVar10 = lVar10 + 1;
      } while (lVar9 != lVar10);
      lVar9 = lVar8;
      func_0x00010bf52a60();
    }
    _objc_release(lVar8);
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_respondsToSelector(puVar3,PTR_s_changeSelected_forGallerySnapIte_1125aae18);
    if (((ulong)puVar6 & 1) != 0) {
      func_0x00010c15a020();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_1;
      func_0x00010bf52a60();
      lVar11 = lRam0000000000000000;
      while (lVar9 != 0) {
        lVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar11) {
            _objc_enumerationMutation(param_1);
          }
          func_0x00010bf351c0(puVar3);
          lVar8 = lVar8 + 1;
        } while (lVar9 != lVar8);
        lVar9 = param_1;
        func_0x00010bf52a60();
      }
      _objc_release(param_1);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return (undefined1 *)puVar3;
  }
  ___stack_chk_fail();
  puVar6 = *(undefined1 **)((long)puVar3 + 0x78);
  func_0x00010c07aae0();
  if ((int)puVar6 != 0) {
    *(undefined1 *)((long)puVar3 + 0x180) = 0;
    uVar4 = *(undefined8 *)((long)puVar3 + 0x188);
    *(undefined8 *)((long)puVar3 + 0x188) = 0;
    _objc_release(uVar4);
    func_0x00010bfb4a60(*(undefined8 *)((long)puVar3 + 0x78));
    uVar4 = *(undefined8 *)((long)puVar3 + 0x78);
    *(undefined8 *)((long)puVar3 + 0x78) = 0;
    _objc_release(uVar4);
    puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar6,PTR_s_reloadData_112627cf8);
    return puVar6;
  }
  return puVar6;
}



/* Entry: 105cc6408; end: 105cc65e3; -[SCGalleryTabsController _selectGalleryItems:] */

void FUN_105cc6408(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x1a9) == '\x01') {
    lVar7 = param_1;
    func_0x00010c159720();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar7);
        }
        func_0x00010bf351a0(param_3);
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar7;
      func_0x00010bf52a60();
    }
    _objc_release(lVar7);
    uVar4 = param_3;
    _objc_opt_respondsToSelector(param_3,PTR_s_changeSelected_forGallerySnapIte_1125aae18);
    if ((uVar4 & 1) != 0) {
      func_0x00010c15a020();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar3 != 0) {
        lVar7 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_1);
          }
          func_0x00010bf351c0(param_3);
          lVar7 = lVar7 + 1;
        } while (lVar3 != lVar7);
        lVar3 = param_1;
        func_0x00010bf52a60();
      }
      _objc_release(param_1);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  iVar2 = (int)*(undefined8 *)(param_3 + 0x78);
  func_0x00010c07aae0();
  if (iVar2 != 0) {
    *(undefined1 *)(param_3 + 0x180) = 0;
    uVar5 = *(undefined8 *)(param_3 + 0x188);
    *(undefined8 *)(param_3 + 0x188) = 0;
    _objc_release(uVar5);
    func_0x00010bfb4a60(*(undefined8 *)(param_3 + 0x78));
    uVar5 = *(undefined8 *)(param_3 + 0x78);
    *(undefined8 *)(param_3 + 0x78) = 0;
    _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_3 + 0x28),PTR_s_reloadData_112627cf8);
    return;
  }
  return;
}



/* Entry: 105cc65e4; end: 105cc663f; -[SCGalleryTabsController dismissFullScreenPlayerIfNeeded] */

void FUN_105cc65e4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x78);
  func_0x00010c07aae0();
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x180) = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x188);
    *(undefined8 *)(param_1 + 0x188) = 0;
    _objc_release(uVar2);
    func_0x00010bfb4a60(*(undefined8 *)(param_1 + 0x78));
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_reloadData_112627cf8);
    return;
  }
  return;
}



/* Entry: 105cc6640; end: 105cc673f; -[SCGalleryTabsController isTracking] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000105cc66a0 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

long FUN_105cc6640(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be4ef80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  lVar5 = 0;
  if (lVar4 != 0) {
    do {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar2 = *(ulong *)(lVar5 * 8);
        func_0x00010c081660();
        if ((uVar2 & 1) != 0) {
          lVar5 = 1;
          goto LAB_105cc6700;
        }
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
      lVar4 = param_1;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
    lVar5 = 0;
  }
LAB_105cc6700:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return lVar5;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be4ef80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  lVar5 = 0;
  if (lVar4 != 0) {
    do {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar2 = *(ulong *)(lVar5 * 8);
        func_0x00010c071280();
        if ((uVar2 & 1) != 0) {
          lVar5 = 1;
          goto LAB_105cc6800;
        }
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
      lVar4 = param_1;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
    lVar5 = 0;
  }
LAB_105cc6800:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return lVar5;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be4ef80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar3 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010bf947e0(*(undefined8 *)(lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar5 != lVar3);
    lVar5 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be4ef80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  lVar5 = 0;
  if (lVar4 != 0) {
    do {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar2 = *(ulong *)(lVar5 * 8);
        func_0x00010c0754a0();
        if ((uVar2 & 1) != 0) {
          lVar5 = 1;
          goto LAB_105cc69f0;
        }
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
      lVar4 = param_1;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
    lVar5 = 0;
  }
LAB_105cc69f0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return lVar5;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(param_1 + 0x1c0);
                    /* WARNING: Could not recover jumptable at 0x00010c07b250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar5,PTR_s_isPrivate_1125fc6a0);
  return lVar5;
}



/* Entry: 105cc6740; end: 105cc683f; -[SCGalleryTabsController isEditing] */

long FUN_105cc6740(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be4ef80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  lVar5 = 0;
  if (lVar4 != 0) {
    do {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar2 = *(ulong *)(lVar5 * 8);
        func_0x00010c071280();
        if ((uVar2 & 1) != 0) {
          lVar5 = 1;
          goto LAB_105cc6800;
        }
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
      lVar4 = param_1;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
    lVar5 = 0;
  }
LAB_105cc6800:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return lVar5;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be4ef80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar3 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010bf947e0(*(undefined8 *)(lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar5 != lVar3);
    lVar5 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be4ef80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  lVar5 = 0;
  if (lVar4 != 0) {
    do {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar2 = *(ulong *)(lVar5 * 8);
        func_0x00010c0754a0();
        if ((uVar2 & 1) != 0) {
          lVar5 = 1;
          goto LAB_105cc69f0;
        }
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
      lVar4 = param_1;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
    lVar5 = 0;
  }
LAB_105cc69f0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return lVar5;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(param_1 + 0x1c0);
                    /* WARNING: Could not recover jumptable at 0x00010c07b250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar5,PTR_s_isPrivate_1125fc6a0);
  return lVar5;
}



/* Entry: 105cc6840; end: 105cc692f; -[SCGalleryTabsController endEditing] */

long FUN_105cc6840(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be4ef80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar4 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010bf947e0(*(undefined8 *)(lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar5 != lVar4);
    lVar5 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be4ef80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  lVar5 = 0;
  if (lVar3 != 0) {
    do {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar2 = *(ulong *)(lVar5 * 8);
        func_0x00010c0754a0();
        if ((uVar2 & 1) != 0) {
          lVar5 = 1;
          goto LAB_105cc69f0;
        }
        lVar5 = lVar5 + 1;
      } while (lVar3 != lVar5);
      lVar3 = param_1;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    lVar5 = 0;
  }
LAB_105cc69f0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return lVar5;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(param_1 + 0x1c0);
                    /* WARNING: Could not recover jumptable at 0x00010c07b250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar5,PTR_s_isPrivate_1125fc6a0);
  return lVar5;
}



/* Entry: 105cc6930; end: 105cc6a2f; -[SCGalleryTabsController isInLineSearchable] */

undefined8 FUN_105cc6930(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be4ef80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar4 = 0;
  if (lVar2 != 0) {
    do {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar3 = *(ulong *)(lVar6 * 8);
        func_0x00010c0754a0();
        if ((uVar3 & 1) != 0) {
          uVar4 = 1;
          goto LAB_105cc69f0;
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    uVar4 = 0;
  }
LAB_105cc69f0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    uVar4 = *(undefined8 *)(param_1 + 0x1c0);
                    /* WARNING: Could not recover jumptable at 0x00010c07b250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_isPrivate_1125fc6a0);
    return uVar4;
  }
  return uVar4;
}



/* Entry: 105cc6a30; end: 105cc6a37; -[SCGalleryTabsController isPrivateTabFocused] */

void FUN_105cc6a30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07b250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x1c0),PTR_s_isPrivate_1125fc6a0)
  ;
  return;
}



/* Entry: 105cc6a38; end: 105cc6adb; -[SCGalleryTabsController displayedTabs] */

void FUN_105cc6a38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105cc6adc;
  puStack_40 = &UNK_1108e44f0;
  puStack_38 = puVar1;
  _objc_retain();
  func_0x00010be0aca0(param_1,param_2,uVar3,&puStack_58);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105cc6adc; end: 105cc6b2f;  */

void FUN_105cc6adc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c267c60(param_2);
  func_0x00010c0df840(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105cc6b30; end: 105cc6b3b; -[SCGalleryTabsController scrollToTab:animated:] */

void FUN_105cc6b30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c152830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_scrollToTab_galleryItem_animated_112632428,param_3,0,param_4);
  return;
}



/* Entry: 105cc6b3c; end: 105cc6c0b; -[SCGalleryTabsController scrollToTab:galleryItem:animated:] */

void FUN_105cc6b3c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    lVar1 = param_1;
    func_0x00010beca340(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      *(undefined8 *)(param_1 + 0x68) = param_3;
    }
    else {
      func_0x00010be4eaa0(param_1,param_2,lVar1);
      if (param_4 != 0) {
        lVar2 = param_1;
        func_0x00010beea260(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf4b900();
        _objc_release(lVar2);
        func_0x00010c1524a0(lVar1,param_2,param_4,(uint)param_5 & (uint)lVar3);
      }
      func_0x00010be9c060(param_1,param_2,lVar1,param_5);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105cc6c0c; end: 105cc6ccf; -[SCGalleryTabsController scrollToDreamsWithSnapIds:generationIds:notificationId:notificationType:dreamsPackId:] */

void FUN_105cc6c0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c152820(param_1,param_2,0xe,0,1);
  if (param_5 != 0 || param_6 != 0) {
    func_0x00010c0e9140(*(undefined8 *)(param_1 + 0x48),param_2,param_3,param_4,param_5,param_6,
                        param_7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cc6cd0; end: 105cc6d27; -[SCGalleryTabsController resetHomePage] */

void FUN_105cc6cd0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c267c60(lVar1);
    func_0x00010c152800(param_1,param_2,lVar2,0);
    func_0x00010c152840(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105cc6d28; end: 105cc6d2f; -[SCGalleryTabsController reloadSnapsTabBanner] */

void FUN_105cc6d28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x140),PTR_s_reloadBanner_112627cb8);
  return;
}



/* Entry: 105cc6d30; end: 105cc6d6b; -[SCGalleryTabsController isTabVisible:] */

undefined8 FUN_105cc6d30(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010beca340();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29fbc0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105cc6d6c; end: 105cc6d73; -[SCGalleryTabsController hasSnapsTabCompletePageLoad] */

void FUN_105cc6d6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd57f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x140),PTR_s_hasCompletePageLoad_1125d2fa0);
  return;
}



/* Entry: 105cc6d74; end: 105cc6e9b; -[SCGalleryTabsController tabController:browseSelected:initialItemId:items:fromView:context:] */

void FUN_105cc6d74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x1c0);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bfbd0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x1c0);
  func_0x00010bfbd0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x1c0);
  func_0x00010c084600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beca320(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar3,uVar1,0,
                      uVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105cc6e9c; end: 105cc6ec7; -[SCGalleryTabsController tabController:browseSelected:initialItemId:items:fromView:context:galleryItemIdToSnapsMap:galleryItemIdToPHAssetsMap:itemLevelIdentifiersEligibleForSingleSnapFeed:] */

void FUN_105cc6e9c(void)

{
  func_0x00010beca320();
  return;
}



/* Entry: 105cc6ec8; end: 105cc7203; -[SCGalleryTabsController _tabController:browseSelected:initialItemId:items:fromView:context:galleryItemIdToSnapsMap:galleryItemIdToPHAssetsMap:itemLevelIdentifiersEligibleForSingleSnapFeed:itemIdsToExclude:] */

void FUN_105cc6ec8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,ulong param_7,long param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  iVar2 = (int)*(undefined8 *)(param_2 + 0xa8);
  func_0x000108ec1588();
  uVar3 = *(ulong *)(param_2 + 0x78);
  if (iVar2 != 0) {
    func_0x00010c07aae0();
    uVar3 = uVar3 & 1;
  }
  if (((uVar3 == 0) && (-1 < (long)param_5)) &&
     (uVar3 = param_7, func_0x00010bf529e0(), puVar1 = PTR_DAT_1126a50e8, param_5 < uVar3)) {
    _objc_retain(param_8);
    lVar4 = param_8;
    func_0x00010010fab4(param_8,puVar1);
    _objc_release(param_8);
    if ((param_8 != 0) && ((int)lVar4 != 0)) {
      func_0x00010c27ad00(param_8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
    }
    lVar4 = param_2;
    func_0x00010be6dda0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_2 + 0x78);
    *(long *)(param_2 + 0x78) = lVar4;
    _objc_release(uVar7);
    lVar4 = param_2;
    func_0x00010bebe720();
    _objc_retainAutoreleasedReturnValue();
    iVar2 = (int)*(undefined8 *)(param_2 + 0xa8);
    func_0x000108ec1518();
    if (iVar2 != 0) {
      uVar3 = param_7;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      param_1 = 0xc2000000;
      _objc_retain(param_13);
      uVar5 = param_7;
      func_0x00010bfaea20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_7);
      func_0x00010bfecde0();
      _objc_release(param_13);
      _objc_release(uVar3);
      param_7 = uVar5;
    }
    *(undefined1 *)(param_2 + 0x180) = 0;
    uVar7 = *(undefined8 *)(param_2 + 0x188);
    *(undefined8 *)(param_2 + 0x188) = 0;
    _objc_release(uVar7);
    func_0x00010beb4e60(param_2);
    uVar8 = *(undefined8 *)(param_2 + 0x78);
    lVar6 = param_2 + 0x10;
    _objc_loadWeakRetained();
    func_0x00010be6f200(param_2);
    uVar7 = param_1;
    func_0x00010c0f2220();
    param_2 = param_2 + 0x1b0;
    _objc_loadWeakRetained();
    func_0x00010bfcb480();
    func_0x00010c10d600(param_1,uVar7,uVar8);
    _objc_release(param_2);
    _objc_release(lVar6);
    _objc_release(lVar4);
  }
  else {
    func_0x00010bfb02e0(PTR_PTR_1126b24e0);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105cc7204; end: 105cc724f;  */

uint FUN_105cc7204(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfbd0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 105cc7250; end: 105cc7287; -[SCGalleryTabsController cameraRollTabControllerDidDisplayAlbumsPicker:] */

void FUN_105cc7250(long param_1)

{
  param_1 = param_1 + 0x1b0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfbdb80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cc7288; end: 105cc72bf; -[SCGalleryTabsController cameraRollTabControllerDidDismissAlbumsPicker:] */

void FUN_105cc7288(long param_1)

{
  param_1 = param_1 + 0x1b0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfbdb80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


