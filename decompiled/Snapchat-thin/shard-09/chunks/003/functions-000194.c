/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b89780; end: 106b8978f; -[SCNGORegistrationDefaultCompositeView setTextFieldAccessibilityIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b89780(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759398),PTR_s_setAccessibilityIdentifier__112635e10);
  return;
}



/* Entry: 106b89790; end: 106b8979f; -[SCNGORegistrationDefaultCompositeView setTextFieldInputView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b89790(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ad7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759398),PTR_s_setInputView__112649018);
  return;
}



/* Entry: 106b897a0; end: 106b897af; -[SCNGORegistrationDefaultCompositeView textFieldInputView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b897a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c066290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759398),PTR_s_inputView_1125f72b0);
  return;
}



/* Entry: 106b897b0; end: 106b897df; -[SCNGORegistrationDefaultCompositeView setUsesFullEditingWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b897b0(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112759398;
  func_0x00010c21fa40(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 106b897e0; end: 106b897ef; -[SCNGORegistrationDefaultCompositeView usesFullEditingWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b897e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c294a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759398),PTR_s_usesFullEditingWidth_112682cc8);
  return;
}



/* Entry: 106b897f0; end: 106b89847; -[SCNGORegistrationDefaultCompositeView setUserInteractionEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b897f0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f5498;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setUserInteractionEnabled__112665468);
  func_0x00010c21e900(*(undefined8 *)(param_1 + _DAT_112759398));
  return;
}



/* Entry: 106b89848; end: 106b8987b; -[SCNGORegistrationDefaultCompositeView isUserInteractionEnabled] */

void FUN_106b89848(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f5498;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_isUserInteractionEnabled_1125fe410);
  return;
}



/* Entry: 106b8987c; end: 106b898ff; -[SCNGORegistrationDefaultCompositeView textFieldShouldBeginEditing:] */

ulong FUN_106b8987c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 1;
  }
  else {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c26be20();
    _objc_release(param_1);
  }
  return uVar2;
}



/* Entry: 106b89900; end: 106b899af; -[SCNGORegistrationDefaultCompositeView textFieldDidBeginEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b89900(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = 0xe5;
  if (*(long *)(param_1 + _DAT_1127593a8) != 4) {
    uVar2 = 0xe3;
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112759398);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b899b0; end: 106b89a5f; -[SCNGORegistrationDefaultCompositeView textFieldDidEndEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b899b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = 0xe5;
  if (*(long *)(param_1 + _DAT_1127593a8) != 4) {
    uVar2 = 0xe2;
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112759398);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b89a60; end: 106b89ae3; -[SCNGORegistrationDefaultCompositeView textFieldShouldReturn:] */

ulong FUN_106b89a60(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c26be80();
    _objc_release(param_1);
  }
  return uVar2;
}



/* Entry: 106b89ae4; end: 106b89bb7; -[SCNGORegistrationDefaultCompositeView textField:shouldChangeCharactersInRange:replacementString:] */

ulong FUN_106b89ae4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar2 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 1;
  }
  else {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c26bc40();
    _objc_release(param_1);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106b89bb8; end: 106b89c33; -[SCNGORegistrationDefaultCompositeView accessoryButtonPressed] */

void FUN_106b89bb8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beed0a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106b89c34; end: 106b89cbb; -[SCNGORegistrationDefaultCompositeView accessoryTextLinkPressedWithURL:] */

void FUN_106b89c34(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beed320();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b89cbc; end: 106b89cf3; -[SCNGORegistrationDefaultCompositeView _textFieldDidChange] */

void FUN_106b89cbc(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26bd00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b89cf4; end: 106b89d2b; -[SCNGORegistrationDefaultCompositeView _rightViewButtonPressed] */

void FUN_106b89cf4(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c140e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b89d2c; end: 106b89d7f; -[SCNGORegistrationDefaultCompositeView _borderColorForFocus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b89d2c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + _DAT_1127593ac) & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112759398);
    func_0x00010c073040();
    if (iVar1 == 0) {
      uVar2 = 0xe2;
      goto LAB_106b89d64;
    }
  }
  uVar2 = 0xe3;
LAB_106b89d64:
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b89d80; end: 106b89d9f; -[SCNGORegistrationDefaultCompositeView setShowsActiveBorder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b89d80(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_1127593ac) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_1127593ac) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bee4ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateWithNewState_112596c50);
  return;
}



/* Entry: 106b89da0; end: 106b89fcf; -[SCNGORegistrationDefaultCompositeView _updateWithNewState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b89da0(undefined *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)_DAT_1127593a8;
  func_0x00010c209fc0(*(undefined8 *)(param_1 + _DAT_11275939c),param_2,
                      *(undefined8 *)(param_1 + lVar4));
  uVar3 = *(ulong *)(param_1 + lVar4);
  if (uVar3 < 3) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_112759398;
    func_0x00010c216160(*(undefined8 *)(param_1 + lVar4));
    _objc_release(puVar2);
    puVar2 = param_1;
    func_0x00010bdd52c0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (uVar3 == 3) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)_DAT_112759398;
      func_0x00010c216160(*(undefined8 *)(param_1 + lVar5));
      _objc_release(puVar2);
      puVar2 = param_1;
      func_0x00010bdd52c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      uVar1 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c08c0e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c173280();
      _objc_release(uVar1);
      _objc_release(puVar2);
      lVar4 = (long)_DAT_1127593a4;
      uVar1 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ee2a0(*(undefined8 *)(param_1 + lVar5));
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24dbc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
    if (uVar3 != 4) {
      return;
    }
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_112759398;
    func_0x00010c216160(*(undefined8 *)(param_1 + lVar4));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be93250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetLoadingStateIfNecessary_112582630);
  return;
}



/* Entry: 106b89fd0; end: 106b8a057; -[SCNGORegistrationDefaultCompositeView _resetLoadingStateIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b89fd0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127593a4;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2558c0();
    _objc_release(uVar2);
    lVar3 = param_1;
    func_0x00010c140e00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ee2a0(*(undefined8 *)(param_1 + _DAT_112759398),param_2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 106b8a058; end: 106b8a067; -[SCNGORegistrationDefaultCompositeView accessoryButtonText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b8a058(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127593b0);
}



/* Entry: 106b8a068; end: 106b8a077; -[SCNGORegistrationDefaultCompositeView accessoryText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b8a068(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127593b4);
}



/* Entry: 106b8a078; end: 106b8a087; -[SCNGORegistrationDefaultCompositeView rightViewButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b8a078(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127593a0);
}



/* Entry: 106b8a088; end: 106b8a097; -[SCNGORegistrationDefaultCompositeView state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b8a088(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127593a8);
}



/* Entry: 106b8a098; end: 106b8a0b7; -[SCNGORegistrationDefaultCompositeView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8a098(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127593b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b8a0b8; end: 106b8a0cb; -[SCNGORegistrationDefaultCompositeView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8a0b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127593b8,param_3);
  return;
}



/* Entry: 106b8a0cc; end: 106b8a0db; -[SCNGORegistrationDefaultCompositeView showsActiveBorder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106b8a0cc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127593ac);
}



/* Entry: 106b8a0dc; end: 106b8a177; -[SCNGORegistrationDefaultCompositeView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8a0dc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127593b8);
  _objc_storeStrong(param_1 + _DAT_1127593a0,0);
  _objc_storeStrong(param_1 + _DAT_1127593b4,0);
  _objc_storeStrong(param_1 + _DAT_1127593b0,0);
  _objc_storeStrong(param_1 + _DAT_1127593a4,0);
  _objc_storeStrong(param_1 + _DAT_11275939c,0);
  _objc_storeStrong(param_1 + _DAT_112759398,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112759394,0);
  return;
}



/* Entry: 106b8a178; end: 106b8a23f;  */

void FUN_106b8a178(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000106b8bc14();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106b8a240; end: 106b8a24b; -[SCNGORegistrationMultiTextsCustomTextField textRectForBounds:] */

void FUN_106b8a240(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbb444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectInset_1103475b0)();
  return;
}



/* Entry: 106b8a24c; end: 106b8a24f; -[SCNGORegistrationMultiTextsCustomTextField editingRectForBounds:] */

void FUN_106b8a24c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26c650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_textRectForBounds__112678bb8);
  return;
}



/* Entry: 106b8a250; end: 106b8a28b; -[SCNGORegistrationMultiTextsCustomTextField rightViewRectForBounds:] */

double FUN_106b8a250(double param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f54a0;
  uStack_20 = param_2;
  _objc_msgSendSuper2(&uStack_20,PTR_s_rightViewRectForBounds__11262ddc0);
  return param_1 + -18.0;
}



/* Entry: 106b8a28c; end: 106b8af63; -[SCNGORegistrationMultiTextFieldCompositeView initWithTextContentType:titleText:rightTextFieldPlaceholder:style:] */

/* WARNING: Possible PIC construction at 0x000106b8a394: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106b8a398) */
/* WARNING: Removing unreachable block (ram,0x000106b8a668) */
/* WARNING: Removing unreachable block (ram,0x000106b8a6fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_106b8a28c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_140;
  undefined *puStack_138;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_138 = PTR_PTR_1126f54a8;
  puVar1 = &uStack_140;
  uStack_140 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 == (undefined8 *)0x0) {
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return 0;
    }
    ___stack_chk_fail();
    uVar3 = *(undefined8 *)(param_3 + _DAT_1127593c4);
  }
  else {
    puVar2 = PTR_PTR_1126aea58;
    _objc_opt_new();
    lVar4 = (long)_DAT_1127593bc;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_setText__1126625f0);
  return uVar3;
}



/* Entry: 106b8af64; end: 106b8af73; -[SCNGORegistrationMultiTextFieldCompositeView setLeftTextFieldText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8af64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127593c4),PTR_s_setText__1126625f0);
  return;
}



/* Entry: 106b8af74; end: 106b8af83; -[SCNGORegistrationMultiTextFieldCompositeView leftTextFieldText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8af74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127593c4),PTR_s_text_1126787e8);
  return;
}



/* Entry: 106b8af84; end: 106b8af97; -[SCNGORegistrationMultiTextFieldCompositeView setLeftButtonText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8af84(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c216270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127593c8),PTR_s_setTitle_forState__1126632c0,param_3,0)
  ;
  return;
}



/* Entry: 106b8af98; end: 106b8afe7; -[SCNGORegistrationMultiTextFieldCompositeView leftButtonText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8af98(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127593c8);
  func_0x00010c271420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106b8afe8; end: 106b8aff7; -[SCNGORegistrationMultiTextFieldCompositeView setRightTextFieldText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8afe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127593cc),PTR_s_setText__1126625f0);
  return;
}



/* Entry: 106b8aff8; end: 106b8b007; -[SCNGORegistrationMultiTextFieldCompositeView rightTextFieldText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8aff8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127593cc),PTR_s_text_1126787e8);
  return;
}



/* Entry: 106b8b008; end: 106b8b017; -[SCNGORegistrationMultiTextFieldCompositeView setLeftTextFieldTextColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8b008(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c213190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127593c4),PTR_s_setTextColor__112662688);
  return;
}



/* Entry: 106b8b018; end: 106b8b027; -[SCNGORegistrationMultiTextFieldCompositeView leftTextFieldTextColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8b018(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127593c4),PTR_s_textColor_112678870);
  return;
}



/* Entry: 106b8b028; end: 106b8b03b; -[SCNGORegistrationMultiTextFieldCompositeView setLeftButtonTextColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8b028(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c216390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127593c8),PTR_s_setTitleColor_forState__112663308,
             param_3,0);
  return;
}



/* Entry: 106b8b03c; end: 106b8b08b; -[SCNGORegistrationMultiTextFieldCompositeView leftButtonTextColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8b03c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127593c8);
  func_0x00010c271420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26b920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106b8b08c; end: 106b8b09b; -[SCNGORegistrationMultiTextFieldCompositeView setRightTextFieldTextColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8b08c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c213190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127593cc),PTR_s_setTextColor__112662688);
  return;
}



/* Entry: 106b8b09c; end: 106b8b0ab; -[SCNGORegistrationMultiTextFieldCompositeView rightTextFieldTextColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8b09c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127593cc),PTR_s_textColor_112678870);
  return;
}



/* Entry: 106b8b0ac; end: 106b8b0f7; -[SCNGORegistrationMultiTextFieldCompositeView setBorderWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8b0ac(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_1127593c0);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b8b0f8; end: 106b8b147; -[SCNGORegistrationMultiTextFieldCompositeView borderWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b8b0f8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_1127593c0);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1fc80();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106b8b148; end: 106b8b26f; -[SCNGORegistrationMultiTextFieldCompositeView setRightTextFieldPlaceholder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8b148(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    uStack_58 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&uStack_58,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar2,param_2,param_3,puVar3);
    _objc_release(puVar3);
    func_0x00010c16b680(*(undefined8 *)(param_1 + _DAT_1127593cc),param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(param_3 + _DAT_1127593cc);
  func_0x00010bf0e160(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 106b8b270; end: 106b8b2bf; -[SCNGORegistrationMultiTextFieldCompositeView rightTextFieldPlaceholder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8b270(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127593cc);
  func_0x00010bf0e160(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106b8b2c0; end: 106b8b2cf; -[SCNGORegistrationMultiTextFieldCompositeView setRightTextFieldAttributedPlaceholder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8b2c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16b690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127593cc),PTR_s_setAttributedPlaceholder__1126387c0);
  return;
}



/* Entry: 106b8b2d0; end: 106b8b2df; -[SCNGORegistrationMultiTextFieldCompositeView rightTextFieldAttributedPlaceholder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8b2d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0e170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127593cc),PTR_s_attributedPlaceholder_1125a1200);
  return;
}



/* Entry: 106b8b2e0; end: 106b8b2ff; -[SCNGORegistrationMultiTextFieldCompositeView setState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8b2e0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == *(long *)(param_1 + _DAT_1127593d8)) {
    return;
  }
  *(long *)(param_1 + _DAT_1127593d8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bee4ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateWithNewState_112596c50);
  return;
}



/* Entry: 106b8b300; end: 106b8b30f; -[SCNGORegistrationMultiTextFieldCompositeView setAccessoryButtonText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8b300(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c161170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127593d0),PTR_s_setAccessoryButtonText__112635e78);
  return;
}



/* Entry: 106b8b310; end: 106b8b31f; -[SCNGORegistrationMultiTextFieldCompositeView setAccessoryText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8b310(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c161250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127593d0),PTR_s_setAccessoryText__112635eb0);
  return;
}



/* Entry: 106b8b320; end: 106b8b367; -[SCNGORegistrationMultiTextFieldCompositeView setKeyboardType:] */

/* WARNING: Possible PIC construction at 0x000106b8b348: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106b8b34c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8b320(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b6ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127593c4),PTR_s_setKeyboardType__11264b5d8);
  return;
}



/* Entry: 106b8b368; end: 106b8b377; -[SCNGORegistrationMultiTextFieldCompositeView keyboardType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8b368(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c086c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127593cc),PTR_s_keyboardType_1125ff528);
  return;
}



/* Entry: 106b8b378; end: 106b8b387; -[SCNGORegistrationMultiTextFieldCompositeView becomeFirstResponder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8b378(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf179b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127593cc),PTR_s_becomeFirstResponder_1125a3810);
  return;
}



/* Entry: 106b8b388; end: 106b8b397; -[SCNGORegistrationMultiTextFieldCompositeView leftTextFieldAccessibilityIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8b388(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beeced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127593c4),PTR_s_accessibilityIdentifier_112598d58);
  return;
}



/* Entry: 106b8b398; end: 106b8b3a7; -[SCNGORegistrationMultiTextFieldCompositeView setLeftTextFieldAccessibilityIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8b398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127593c4),PTR_s_setAccessibilityIdentifier__112635e10);
  return;
}



/* Entry: 106b8b3a8; end: 106b8b3b7; -[SCNGORegistrationMultiTextFieldCompositeView rightTextFieldAccessibilityIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8b3a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beeced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127593cc),PTR_s_accessibilityIdentifier_112598d58);
  return;
}



/* Entry: 106b8b3b8; end: 106b8b3c7; -[SCNGORegistrationMultiTextFieldCompositeView setRightTextFieldAccessibilityIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8b3b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127593cc),PTR_s_setAccessibilityIdentifier__112635e10);
  return;
}



/* Entry: 106b8b3c8; end: 106b8b443; -[SCNGORegistrationMultiTextFieldCompositeView accessoryButtonPressed] */

void FUN_106b8b3c8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beed0a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106b8b444; end: 106b8b4cb; -[SCNGORegistrationMultiTextFieldCompositeView accessoryTextLinkPressedWithURL:] */

void FUN_106b8b444(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beed320();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b8b4cc; end: 106b8b57b; -[SCNGORegistrationMultiTextFieldCompositeView textFieldDidBeginEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8b4cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = 0xe5;
  if (*(long *)(param_1 + _DAT_1127593d8) != 4) {
    uVar2 = 0xe3;
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127593c0);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b8b57c; end: 106b8b62b; -[SCNGORegistrationMultiTextFieldCompositeView textFieldDidEndEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8b57c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = 0xe5;
  if (*(long *)(param_1 + _DAT_1127593d8) != 4) {
    uVar2 = 0xe2;
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127593c0);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b8b62c; end: 106b8b783; -[SCNGORegistrationMultiTextFieldCompositeView textField:shouldChangeCharactersInRange:replacementString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106b8b62c(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  if (param_3 == *(long *)(param_1 + (long)_DAT_1127593c4)) {
    uVar2 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar1 & 1) == 0) goto LAB_106b8b6d8;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c08ea80();
LAB_106b8b744:
    _objc_release(param_1);
  }
  else {
LAB_106b8b6d8:
    if (param_3 == *(long *)(param_1 + (long)_DAT_1127593cc)) {
      uVar2 = param_1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      _objc_opt_respondsToSelector();
      _objc_release(uVar2);
      if ((uVar1 & 1) != 0) {
        func_0x00010bf6b020(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_1;
        func_0x00010c140d80();
        goto LAB_106b8b744;
      }
    }
    uVar2 = 1;
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106b8b784; end: 106b8b817; -[SCNGORegistrationMultiTextFieldCompositeView textFieldShouldReturn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106b8b784(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_3 == *(long *)(param_1 + (long)_DAT_1127593cc)) {
    uVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_1;
      func_0x00010c140da0();
      _objc_release(param_1);
      return uVar1;
    }
  }
  return 1;
}



/* Entry: 106b8b818; end: 106b8b933; -[SCNGORegistrationMultiTextFieldCompositeView _updateWithNewState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8b818(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)_DAT_1127593cc;
  func_0x00010c26bcc0(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
  lVar5 = (long)_DAT_1127593d8;
  func_0x00010c209fc0(*(undefined8 *)(param_1 + _DAT_1127593d0),param_2,
                      *(undefined8 *)(param_1 + lVar5));
  uVar3 = *(ulong *)(param_1 + lVar5);
  if (uVar3 < 4) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
  }
  else {
    if (uVar3 != 4) {
      return;
    }
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xe5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127593c0);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b8b934; end: 106b8ba5f; -[SCNGORegistrationMultiTextFieldCompositeView _updateWithStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8b934(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_3 == 1) {
    lVar2 = (long)_DAT_1127593c8;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,0);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127593c4));
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010c271420(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar3);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_1 + _DAT_1127593cc));
    _objc_release(puVar1);
    uVar3 = 0x402c000000000000;
  }
  else {
    if (param_3 != 0) {
      return;
    }
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127593c8),param_2,1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127593c4));
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar3,*(undefined8 *)(param_1 + _DAT_1127593d4),PTR_s_setConstant__11263de70);
  return;
}



/* Entry: 106b8ba60; end: 106b8badb; -[SCNGORegistrationMultiTextFieldCompositeView _leftButtonTapped] */

void FUN_106b8ba60(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08e540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106b8badc; end: 106b8baeb; -[SCNGORegistrationMultiTextFieldCompositeView accessoryButtonText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b8badc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127593dc);
}



/* Entry: 106b8baec; end: 106b8bafb; -[SCNGORegistrationMultiTextFieldCompositeView accessoryText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b8baec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127593e0);
}



/* Entry: 106b8bafc; end: 106b8bb0b; -[SCNGORegistrationMultiTextFieldCompositeView state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b8bafc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127593d8);
}



/* Entry: 106b8bb0c; end: 106b8bb2b; -[SCNGORegistrationMultiTextFieldCompositeView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8bb0c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127593e4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b8bb2c; end: 106b8bb3f; -[SCNGORegistrationMultiTextFieldCompositeView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8bb2c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127593e4,param_3);
  return;
}



/* Entry: 106b8bb40; end: 106b8bbfb; -[SCNGORegistrationMultiTextFieldCompositeView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8bb40(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127593e4);
  _objc_storeStrong(param_1 + _DAT_1127593e0,0);
  _objc_storeStrong(param_1 + _DAT_1127593dc,0);
  _objc_storeStrong(param_1 + _DAT_1127593d4,0);
  _objc_storeStrong(param_1 + _DAT_1127593d0,0);
  _objc_storeStrong(param_1 + _DAT_1127593c8,0);
  _objc_storeStrong(param_1 + _DAT_1127593cc,0);
  _objc_storeStrong(param_1 + _DAT_1127593c4,0);
  _objc_storeStrong(param_1 + _DAT_1127593c0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127593bc,0);
  return;
}



/* Entry: 106b8bbfc; end: 106b8bc43;  */

void FUN_106b8bbfc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e768f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e768f8,
                      &PTR____CFConstantStringClassReference_110e76918,0);
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



/* Entry: 106b8bc44; end: 106b8bc93; -[SCUnauthenticatedLinkedTextView init] */

undefined1 * FUN_106b8bc44(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f54b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beaa4c0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106b8bc94; end: 106b8bc9b; -[SCUnauthenticatedLinkedTextView canBecomeFirstResponder] */

undefined8 FUN_106b8bc94(void)

{
  return 0;
}



/* Entry: 106b8bc9c; end: 106b8beab; -[SCUnauthenticatedLinkedTextView _setup] */

void FUN_106b8bc9c(double param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c1f7b20(param_2,param_3,0);
  func_0x00010c193a00(param_2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c1bde80(param_2);
  uVar7 = param_2;
  func_0x00010c26ba00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099240();
  _objc_release(uVar7);
  func_0x00010c2131e0(0,-param_1,0,-param_1,param_2);
  iVar1 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  if (iVar1 != 0) {
    uVar7 = param_2;
    func_0x00010c26ba00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdbc0(0);
    _objc_release(uVar7);
  }
  func_0x00010c17d4c0(param_2);
  func_0x00010c213040(param_2);
  iVar1 = 2;
  uVar7 = 0;
  func_0x000100029b9c(2,0x1a,0,0);
  if (iVar1 != 0) {
    uVar7 = 0;
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x00010c292b00();
    if (puVar2 == (undefined *)0x1) {
      uVar7 = 2;
      func_0x00010c213040(param_2);
    }
  }
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126b17e8;
  _objc_retain(uVar7);
  _objc_alloc(puVar2);
  func_0x00010c028a40();
  _objc_release(uVar7);
  puVar3 = puVar2;
  func_0x00010c0fdaa0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c0fdb60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010c28fa20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212fe0(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106b8beac; end: 106b8bf73; -[SCUnauthenticatedLinkedTextView linkfy:] */

void FUN_106b8beac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b17e8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c028a40();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c0fdaa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0fdb60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c28fa20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212fe0(param_1,param_2,puVar2,puVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b8bf74; end: 106b8c053; -[SCMarkdownURLParser initWithMarkdownURLText:] */

undefined1 * FUN_106b8bf74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f54b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25da60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    func_0x00010be80400(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b8c054; end: 106b8c06b; -[SCMarkdownURLParser placeholderURLText] */

void FUN_106b8c054(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b8c06c; end: 106b8c083; -[SCMarkdownURLParser urlStrings] */

void FUN_106b8c06c(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b8c084; end: 106b8c09b; -[SCMarkdownURLParser placeholders] */

void FUN_106b8c084(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b8c09c; end: 106b8c1db; -[SCMarkdownURLParser _process] */

void FUN_106b8c09c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  puVar2 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8,param_2,
                      &PTR____CFConstantStringClassReference_110e76958,1,&uStack_48);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uStack_48;
  _objc_retain(uStack_48);
  puStack_60 = &uStack_68;
  uStack_68 = 0;
  uStack_58 = 0x2020000000;
  uStack_50 = 1;
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x2020000000;
  uStack_70 = 0;
  func_0x00010c08fa60(*(undefined8 *)(param_1 + 8));
  func_0x00010bf97dc0(puVar2);
  __Block_object_dispose(&uStack_88,8);
  __Block_object_dispose(&uStack_68,8);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 106b8c1dc; end: 106b8c3a7;  */

void FUN_106b8c1dc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  func_0x00010c11f2a0(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c260c80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c11f420();
  if (lVar2 != 1) {
    lVar2 = lVar1;
    func_0x00010c260c80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
    lVar6 = lVar1;
    func_0x00010c260c80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    if (lRam00000001136c6c70 != -1) {
      func_0x00010002a2fc(0x1136c6c70,&PTR___NSConcreteGlobalBlock_1109645c0);
    }
    lVar3 = lVar6;
    func_0x00010c25d0a0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130d20(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
    puVar5 = puVar4;
    func_0x00010c08fa60();
    lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    *(undefined **)(lVar6 + 0x18) = puVar5 + (*(long *)(lVar6 + 0x18) - param_2);
    lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 1;
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b8c3a8; end: 106b8c3ef; -[SCMarkdownURLParser .cxx_destruct] */

void FUN_106b8c3a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b8c3f0; end: 106b8c42b;  */

void FUN_106b8c3f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                      &PTR____CFConstantStringClassReference_110e769b8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c6c68;
  puRam00000001136c6c68 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b8c42c; end: 106b8c58b; -[SCResendableCodeBusinessLogic initWithMinimumCodeLength:autoSubmit:useContinueForResend:initialCounterValue:submitCodePrompt:resendCodePrompt:countDownTimer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106b8c42c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f54c0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127593f8) = param_3;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127593fc) = param_4;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112759400) = param_5;
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112759404);
    *(undefined ***)((long)puVar1 + (long)_DAT_112759404) =
         &PTR____CFConstantStringClassReference_110daafd8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112759408;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11275940c;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112759410;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112759414) = param_6;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112759418) = param_6;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275941c) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112759420) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112759424) = 0;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 106b8c58c; end: 106b8c5d3; -[SCResendableCodeBusinessLogic begin] */

void FUN_106b8c58c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f54c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_begin_1125a3840);
  func_0x00010bebfc20(param_1);
  return;
}



/* Entry: 106b8c5d4; end: 106b8c72b; -[SCResendableCodeBusinessLogic canInitiateCodeResend:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106b8c5d4(ulong param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = param_1;
  func_0x00010becc280();
  if ((param_3 != (undefined8 *)0x0) && ((uVar1 & 1) == 0)) {
    puVar2 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
    _objc_alloc_init();
    puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf3e0(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                        *(undefined8 *)(param_1 + (long)_DAT_112759418));
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c25d4c0(puVar2,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    FUN_106b8d3a8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99260(puVar6,param_2,&PTR____CFConstantStringClassReference_110e769d8,puVar3,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_3 = puVar6;
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
  return uVar1;
}



/* Entry: 106b8c72c; end: 106b8c79b; -[SCResendableCodeBusinessLogic codeSent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8c72c(long param_1)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + _DAT_112759418) = *(undefined8 *)(param_1 + _DAT_112759414);
  lVar1 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bebfc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startCountdown_11258d8b0);
  return;
}



/* Entry: 106b8c79c; end: 106b8c87b; -[SCResendableCodeBusinessLogic _startCountdown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8c79c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  lVar1 = param_1;
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112759410);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c24e720(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106b8c87c; end: 106b8c91b;  */

void FUN_106b8c87c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106b8c91c;
  puStack_48 = &UNK_110846540;
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  uStack_38 = param_2;
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_60);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 106b8c91c; end: 106b8c99b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8c91c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + _DAT_112759418) = *(undefined8 *)(param_1 + 0x28);
    lVar2 = lVar1;
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = lVar1;
      func_0x00010bf8e1a0();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))();
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b8c99c; end: 106b8c9db; -[SCResendableCodeBusinessLogic initiateCodeResendForced:] */

void FUN_106b8c99c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  if (((param_3 & 1) == 0) &&
     (uVar1 = param_1, func_0x00010bf2ccc0(param_1,param_2,0), (int)uVar1 == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be92050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resendCode_1125821b0);
  return;
}



/* Entry: 106b8c9dc; end: 106b8ca37; -[SCResendableCodeBusinessLogic updateCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8c9dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112759404);
  *(undefined8 *)(param_1 + _DAT_112759404) = param_3;
  _objc_release(uVar1);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b8ca38; end: 106b8cb13; -[SCResendableCodeBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8ca38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126d0d20;
  _objc_alloc(PTR_PTR_1126d0d20);
  lVar2 = param_1;
  func_0x00010bdd7420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be920c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be92000(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112759404);
  lVar5 = param_1;
  func_0x00010bdd72c0(param_1);
  func_0x00010c053340(puVar1,param_2,lVar2,lVar3,lVar4,uVar6,lVar5,
                      *(undefined1 *)(param_1 + _DAT_112759424));
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106b8cb14; end: 106b8cba7; -[SCResendableCodeBusinessLogic handleAction:] */

void FUN_106b8cb14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106b8cba8;
  puStack_20 = &UNK_110848678;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106b8cc98;
  puStack_48 = &UNK_110842e18;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106b8ccec;
  puStack_70 = &UNK_110842e18;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0c1060(param_3,param_2,&puStack_38,&puStack_60,&puStack_88);
  return;
}


