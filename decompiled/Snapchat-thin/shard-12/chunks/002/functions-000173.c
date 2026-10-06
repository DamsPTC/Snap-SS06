/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f03474; end: 108f03483; -[SCSearchViewController navigationBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f03474(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d6290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277dd38),PTR_s_navigationBar_1126132b8);
  return;
}



/* Entry: 108f03484; end: 108f034cb; -[SCSearchViewController backButtonDirection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f03484(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277dd38);
  func_0x00010c0d6280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf138c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 108f034cc; end: 108f0350f; -[SCSearchViewController setBackButtonDirection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f034cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277dd38);
  func_0x00010c0d6280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f03510; end: 108f03563; -[SCSearchViewController setStatusBarStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f03510(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  *(undefined8 *)(param_1 + _DAT_11277dd30) = param_3;
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f03564; end: 108f035df; -[SCSearchViewController setNavigationInfos:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f03564(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0834c0();
  if ((int)lVar1 == 0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    _objc_release(param_3);
    param_3 = *(undefined8 *)(param_1 + _DAT_11277dd2c);
    *(undefined8 *)(param_1 + _DAT_11277dd2c) = uVar2;
  }
  else {
    func_0x00010c1cb880(*(undefined8 *)(param_1 + _DAT_11277dd28),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f035e0; end: 108f0360f; -[SCSearchViewController setBackgroundStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f035e0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + _DAT_11277dd3c)) {
    *(long *)(param_1 + _DAT_11277dd3c) = param_3;
    if (*(long *)(param_1 + _DAT_11277dd38) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c16e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(long *)(param_1 + _DAT_11277dd38),PTR_s_setBackgroundStyle__112639460);
      return;
    }
  }
  return;
}



/* Entry: 108f03610; end: 108f036db; -[SCSearchViewController searchView:didChangeToText:byChangingCharactersInRange:replacementString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f03610(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar2 = PTR_DAT_1126a5b60;
  uVar4 = *(ulong *)(param_1 + _DAT_11277dd40);
  _objc_retain(uVar4);
  uVar3 = uVar4;
  func_0x000107c318f8(uVar4,puVar2);
  uVar1 = uVar4;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_searchControllerDidChangeToText__1126327f8);
  if ((uVar3 & 1) != 0) {
    func_0x00010c153760(uVar1);
  }
  _objc_release(uVar1);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108f036dc; end: 108f03753; -[SCSearchViewController searchViewDidBeginEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f036dc(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_DAT_1126a5b60;
  uVar4 = *(ulong *)(param_1 + _DAT_11277dd40);
  _objc_retain(uVar4);
  uVar3 = uVar4;
  func_0x000107c318f8(uVar4,puVar2);
  uVar1 = uVar4;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_searchControllerDidBeginEditing_1126327f0);
  if ((uVar3 & 1) != 0) {
    func_0x00010c153740(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f03754; end: 108f03803; -[SCSearchViewController searchViewShouldReturn:withSearchText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_108f03754(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  puVar2 = PTR_DAT_1126a5b60;
  uVar3 = *(ulong *)(param_1 + _DAT_11277dd40);
  _objc_retain(uVar3);
  uVar4 = uVar3;
  func_0x000107c318f8(uVar3,puVar2);
  uVar1 = uVar3;
  if ((int)uVar4 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar4 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_searchControllerShouldReturnWith_112632810);
  if ((uVar4 & 1) == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = uVar1;
    func_0x00010c1537c0(uVar1);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  return uVar4;
}



/* Entry: 108f03804; end: 108f038ab; -[SCSearchViewController searchViewClearButtonTapped:close:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f03804(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_DAT_1126a5b60;
  uVar4 = *(ulong *)(param_1 + _DAT_11277dd40);
  _objc_retain(uVar4);
  uVar3 = uVar4;
  func_0x000107c318f8(uVar4,puVar2);
  uVar1 = uVar4;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (param_4 == 0) {
    uVar3 = uVar1;
    _objc_opt_respondsToSelector(uVar1,PTR_s_searchControllerDidTapClearButto_112632808);
    if ((uVar3 & 1) != 0) {
      func_0x00010c1537a0(uVar1);
    }
  }
  else {
    uVar3 = uVar1;
    _objc_opt_respondsToSelector(uVar1,PTR_s_didTapCloseButton_1125bcba8);
    if ((uVar3 & 1) != 0) {
      func_0x00010bf7c800(uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f038ac; end: 108f03923; -[SCSearchViewController searchViewDidEndEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f038ac(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_DAT_1126a5b60;
  uVar4 = *(ulong *)(param_1 + _DAT_11277dd40);
  _objc_retain(uVar4);
  uVar3 = uVar4;
  func_0x000107c318f8(uVar4,puVar2);
  uVar1 = uVar4;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_searchControllerDidEndEditing_112632800);
  if ((uVar3 & 1) != 0) {
    func_0x00010c153780(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f03924; end: 108f0392f; -[SCSearchViewController supportedInterfaceOrientations] */

undefined8 FUN_108f03924(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 108f03930; end: 108f0395f; -[SCSearchViewController searchNavigationCoordinatorForNavigationBar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f03930(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277dd28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f03960; end: 108f03963; -[SCSearchViewController searchViewControllerForSearchNavigationCoordinator:] */

void FUN_108f03960(void)

{
  return;
}



/* Entry: 108f03964; end: 108f039bf; -[SCSearchViewController searchNavigationCoordinator:didNavigateFromNavigationInfo:toNavigationInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f03964(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277dd24);
  lVar1 = param_1;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e9c0(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsUpdateOfScreenEdgesDefer_112650a08);
  return;
}



/* Entry: 108f039c0; end: 108f03beb; -[SCSearchViewController gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108f039c0(double param_1,double param_2,long param_3,undefined8 param_4,ulong param_5)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  _objc_retain(param_5);
  puVar2 = PTR_DAT_1126a5b60;
  lVar9 = (long)_DAT_11277dd40;
  uVar7 = *(ulong *)(param_3 + lVar9);
  _objc_retain(uVar7);
  uVar8 = uVar7;
  func_0x000107c318f8(uVar7,puVar2);
  uVar4 = uVar7;
  if ((int)uVar8 == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar7);
  puVar2 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  if (uVar4 == 0) {
    uVar8 = *(ulong *)(param_3 + lVar9);
    _objc_retain(uVar8);
    _objc_opt_class(puVar2);
    uVar7 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar2);
    uVar4 = uVar8;
    if ((uVar7 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar8);
    uVar8 = uVar4;
    func_0x00010c275140();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x000107c318f8();
    _objc_release(uVar4);
    uVar7 = uVar8;
    if ((int)uVar3 == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar8);
  }
  uVar4 = uVar7;
  _objc_opt_respondsToSelector(uVar7,PTR_s_shouldBeginInteractiveDismissalG_112669300);
  if (((uVar4 & 1) == 0) || (uVar4 = uVar7, func_0x00010c22e360(), (int)uVar4 != 0)) {
    puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_retain(param_5);
    _objc_opt_class(puVar2);
    uVar8 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar2);
    uVar4 = param_5;
    if ((uVar8 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_5);
    lVar9 = *(long *)(param_3 + _DAT_11277dd28);
    func_0x00010c0d6820(lVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar9;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27adc0(uVar4);
    _objc_release(uVar4);
    lVar9 = 2;
    if (param_2 <= 0.0) {
      lVar9 = 1;
    }
    lVar6 = 4;
    if (param_1 <= 0.0) {
      lVar6 = 3;
    }
    if (ABS(param_2) <= ABS(param_1)) {
      lVar9 = lVar6;
    }
    lVar6 = lVar5;
    func_0x00010c10fc20(lVar5);
    bVar1 = lVar9 == lVar6;
    _objc_release(param_3);
    _objc_release(lVar5);
  }
  else {
    bVar1 = false;
  }
  _objc_release(uVar7);
  _objc_release(param_5);
  return bVar1;
}



/* Entry: 108f03bec; end: 108f03ef7; -[SCSearchViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108f03bec(double param_1,double param_2,double param_3,double param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,ulong param_8)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  
  _objc_retain(param_8);
  puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  uVar3 = param_8;
  _objc_opt_isKindOfClass(param_8,puVar2);
  if ((uVar3 & 1) == 0) {
LAB_108f03dd0:
    bVar1 = true;
  }
  else {
    uVar3 = param_8;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    _objc_opt_class(PTR__OBJC_CLASS___UIScrollView_1126af098);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar2);
    _objc_release(uVar3);
    uVar3 = param_8;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar4 & 1) == 0) {
      puVar2 = PTR_PTR_1126c3e68;
      _objc_opt_class(PTR_PTR_1126c3e68);
      uVar4 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar2);
      _objc_release(uVar3);
      if ((uVar4 & 1) == 0) goto LAB_108f03dd0;
      uVar4 = param_8;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      while (uVar3 != 0) {
        uVar5 = uVar4;
        func_0x00010c262ca0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_5;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar5);
        _objc_release(uVar3);
        if (uVar5 == uVar6) break;
        uVar5 = uVar4;
        func_0x00010c262ca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        uVar3 = uVar5;
        func_0x00010c262ca0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar5;
      }
      uVar5 = uVar4;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar5 != 0) {
        uVar3 = uVar4;
        func_0x00010c262ca0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c29bf00(param_5);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = uVar3 != param_5;
        _objc_release();
        goto LAB_108f03eb4;
      }
      bVar1 = false;
    }
    else {
      uVar4 = *(ulong *)(param_5 + (long)_DAT_11277dd28);
      func_0x00010c0d6820();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      uVar6 = uVar5;
      func_0x00010c10fc20();
      _objc_retain(uVar3);
      bVar1 = false;
      uVar4 = uVar3;
      if ((long)uVar6 < 3) {
        if (uVar6 == 1) {
          func_0x00010bf4cdc0(uVar3);
          dVar7 = param_2;
          func_0x00010bf4d5e0(uVar3);
          func_0x00010bf4c7c0(uVar3);
          dVar7 = dVar7 + param_3;
          param_1 = param_2;
LAB_108f03ea8:
          bVar1 = dVar7 <= param_1;
        }
        else if (uVar6 == 2) {
          func_0x00010bf4cdc0(uVar3);
          func_0x00010bf4c7c0(uVar3);
          dVar7 = param_2;
          param_2 = param_1;
LAB_108f03e00:
          bVar1 = dVar7 <= -param_2;
        }
      }
      else {
        if (uVar6 == 3) {
          func_0x00010bf4cdc0(uVar3);
          dVar7 = param_1;
          func_0x00010bf4d5e0(uVar3);
          func_0x00010bf4c7c0(uVar3);
          dVar7 = dVar7 + param_4;
          goto LAB_108f03ea8;
        }
        if (uVar6 == 4) {
          func_0x00010bf4cdc0(uVar3);
          func_0x00010bf4c7c0(uVar3);
          dVar7 = param_1;
          goto LAB_108f03e00;
        }
      }
LAB_108f03eb4:
      _objc_release(uVar3);
    }
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(param_8);
  return bVar1;
}



/* Entry: 108f03ef8; end: 108f0423b; -[SCSearchViewController _handleNavigationGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f03ef8(double param_1,double param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  double dVar12;
  
  _objc_retain(param_5);
  puVar3 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  uVar4 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar3);
  uVar1 = param_5;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) goto LAB_108f04214;
  lVar11 = (long)_DAT_11277dd28;
  lVar5 = *(long *)(param_3 + lVar11);
  func_0x00010c0e8aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bfbace0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  func_0x00010bf20c00(*(undefined8 *)(param_3 + _DAT_11277dd38));
  uVar4 = param_5;
  func_0x00010c252440();
  if ((long)uVar4 < 3) {
    if (uVar4 == 1) {
      func_0x00010c1b1f40(*(undefined8 *)(param_3 + lVar11));
      func_0x00010bf84b20(*(undefined8 *)(param_3 + lVar11));
    }
    else if (uVar4 == 2) {
      lVar5 = lVar6;
      func_0x00010c10fc20(lVar6);
      lVar7 = param_3;
      func_0x00010c29bf00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27adc0(param_5);
      FUN_108f0423c(lVar5);
      _objc_release(lVar7);
      uVar9 = *(undefined8 *)(param_3 + lVar11);
      func_0x00010c068c60();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar9;
      func_0x000107c318f8();
      uVar10 = uVar9;
      if ((int)uVar8 == 0) {
        uVar10 = 0;
      }
      _objc_retain(uVar10);
      _objc_release(uVar9);
      func_0x00010c286a00(param_1,uVar10);
      goto LAB_108f04204;
    }
  }
  else {
    if (uVar4 - 3 < 2) {
      func_0x00010c1b1f40(*(undefined8 *)(param_3 + lVar11));
      lVar5 = lVar6;
      func_0x00010c10fc20(lVar6);
      lVar7 = param_3;
      func_0x00010c29bf00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27adc0(param_5);
      FUN_108f0423c(lVar5);
      dVar12 = param_1;
      _objc_release(lVar7);
      lVar5 = lVar6;
      func_0x00010c10fc20();
      lVar7 = param_3;
      func_0x00010c29bf00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297a00(param_5);
      if (lVar5 < 3) {
        if (lVar5 == 1) {
          param_2 = -param_2;
        }
        else if (lVar5 != 2) {
LAB_108f04118:
          param_2 = 0.0;
        }
      }
      else if (lVar5 == 3) {
        param_2 = -dVar12;
      }
      else {
        param_2 = dVar12;
        if (lVar5 != 4) goto LAB_108f04118;
      }
      _objc_release(lVar7);
      if (0.1 <= param_1) {
        bVar2 = false;
        if ((param_1 <= 0.9) && (bVar2 = false, !NAN(param_2))) {
          bVar2 = param_2 < 60.0;
        }
        if (!bVar2) {
          uVar9 = *(undefined8 *)(param_3 + lVar11);
          func_0x00010c068c60();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar9;
          func_0x000107c318f8();
          uVar10 = uVar9;
          if ((int)uVar8 == 0) {
            uVar10 = 0;
          }
          _objc_retain(uVar10);
          _objc_release(uVar9);
          func_0x00010bfaf8e0(uVar10);
          goto LAB_108f04204;
        }
      }
    }
    else if (uVar4 != 5) goto LAB_108f0420c;
    uVar9 = *(undefined8 *)(param_3 + lVar11);
    func_0x00010c068c60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar9;
    func_0x000107c318f8();
    uVar10 = uVar9;
    if ((int)uVar8 == 0) {
      uVar10 = 0;
    }
    _objc_retain(uVar10);
    _objc_release(uVar9);
    func_0x00010bf2e5a0(uVar10);
LAB_108f04204:
    _objc_release(uVar10);
  }
LAB_108f0420c:
  _objc_release(lVar6);
LAB_108f04214:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108f0423c; end: 108f042b7;  */

double FUN_108f0423c(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  double dVar1;
  
  dVar1 = 1.0;
  if ((0.0 < param_4) && (0.0 < param_3)) {
    if (param_5 < 3) {
      if (param_5 == 1) {
        param_2 = -param_2 / param_4;
      }
      else {
        if (param_5 != 2) {
          return 1.0;
        }
        param_2 = param_2 / param_4;
      }
    }
    else if (param_5 == 3) {
      param_2 = -param_1 / param_3;
    }
    else {
      if (param_5 != 4) {
        return 1.0;
      }
      param_2 = param_1 / param_3;
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    dVar1 = 1.0;
    if (param_2 <= 1.0) {
      dVar1 = param_2;
    }
  }
  return dVar1;
}



/* Entry: 108f042b8; end: 108f042cb; -[SCSearchViewController _handleStatusBarOrientationWillChangeWithNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f042b8(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11277dd48) = 1;
  return;
}



/* Entry: 108f042cc; end: 108f042db; -[SCSearchViewController _handleStatusBarOrientationDidChangeWithNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f042cc(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11277dd48) = 0;
  return;
}



/* Entry: 108f042dc; end: 108f043fb; -[SCSearchViewController _handleStatusFrameWillChangeWithNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f042dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  
  if ((*(byte *)(param_5 + _DAT_11277dd48) & 1) != 0) {
    return;
  }
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010bdc1080(uVar1);
  _objc_release(uVar1);
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  lVar5 = (long)_DAT_11277dd38;
  func_0x00010c08ce20(*(undefined8 *)(param_5 + lVar5));
  func_0x00010c08ce20(*(undefined8 *)(param_5 + lVar5));
  func_0x00010c08ce20(*(undefined8 *)(param_5 + lVar5));
                    /* WARNING: Could not recover jumptable at 0x00010bed5f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,param_5,PTR_s__updateContainerViewLayoutInsets_112593168);
  return;
}



/* Entry: 108f043fc; end: 108f0440b; -[SCSearchViewController _updateContainerViewLayoutInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f043fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b9b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277dd38),PTR_s_setLayoutInsets__11264c100);
  return;
}



/* Entry: 108f0440c; end: 108f04417; -[SCSearchViewController backgroundExitBehavior] */

void FUN_108f0440c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d83d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aecb0,PTR_s_neverExit_112613b08);
  return;
}



/* Entry: 108f04418; end: 108f04427; -[SCSearchViewController searchContentViewControllerContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f04418(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277dd44);
}



/* Entry: 108f04428; end: 108f04467; -[SCSearchViewController setSearchContentViewControllerContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f04428(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277dd44;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f04468; end: 108f04477; -[SCSearchViewController searchNavigationCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f04468(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277dd28);
}



/* Entry: 108f04478; end: 108f04487; -[SCSearchViewController contentViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f04478(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277dd40);
}



/* Entry: 108f04488; end: 108f044c7; -[SCSearchViewController setContentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f04488(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277dd40;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f044c8; end: 108f044d7; -[SCSearchViewController backgroundStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f044c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277dd3c);
}



/* Entry: 108f044d8; end: 108f044e7; -[SCSearchViewController statusBarStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f044d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277dd30);
}



/* Entry: 108f044e8; end: 108f044f7; -[SCSearchViewController blurView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f044e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277dd4c);
}



/* Entry: 108f044f8; end: 108f04587; -[SCSearchViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f044f8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277dd4c,0);
  _objc_storeStrong(param_1 + _DAT_11277dd40,0);
  _objc_storeStrong(param_1 + _DAT_11277dd28,0);
  _objc_storeStrong(param_1 + _DAT_11277dd44,0);
  _objc_storeStrong(param_1 + _DAT_11277dd24,0);
  _objc_storeStrong(param_1 + _DAT_11277dd2c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277dd38,0);
  return;
}



/* Entry: 108f04588; end: 108f04d73;  */

void FUN_108f04588(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR_PTR_1126b10e0;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  if (param_1 == 0) {
    FUN_108f343d8(puVar2,&PTR____CFConstantStringClassReference_110daf6b8,
                  &PTR____CFConstantStringClassReference_110f096b8,1);
    goto LAB_108f048f8;
  }
  puVar4 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  _objc_alloc();
  func_0x00010c057bc0();
  func_0x00010c1d0640(puVar3);
  puVar5 = puVar4;
  func_0x00010c11d4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar6 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar5);
      }
      uVar12 = *(undefined8 *)((long)puVar11 * 8);
      uVar7 = uVar12;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c0720c0();
      _objc_release(uVar7);
      if ((int)uVar8 != 0) {
        uVar7 = uVar12;
        func_0x00010c296d80(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(uVar7);
      }
      uVar7 = uVar12;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c0720c0();
      _objc_release(uVar7);
      if ((int)uVar8 != 0) {
        uVar7 = uVar12;
        func_0x00010c296d80(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(uVar7);
      }
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar12;
      func_0x00010c0720c0();
      _objc_release(uVar12);
      if ((int)uVar7 != 0) {
        puVar9 = puVar3;
        func_0x00010c0e00e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_108f34608(puVar2,puVar9,1);
        _objc_release(puVar9);
      }
      puVar11 = puVar11 + 1;
    } while (puVar6 != puVar11);
    puVar6 = puVar5;
    func_0x00010bf52a60();
  }
  puVar6 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 == (undefined *)0x0) {
LAB_108f04830:
    puVar6 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) {
      FUN_108f343d8(puVar2,&PTR____CFConstantStringClassReference_110daf6b8,
                    &PTR____CFConstantStringClassReference_110f096d8,1);
    }
    else {
      puVar11 = puVar3;
      func_0x00010c0e00e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      FUN_108f343d8(puVar2,puVar11,&PTR____CFConstantStringClassReference_110f096d8,1);
      _objc_release(puVar11);
    }
    _objc_release(puVar6);
  }
  else {
    puVar11 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar6);
    if (puVar11 == (undefined *)0x0) goto LAB_108f04830;
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
LAB_108f048f8:
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    puVar2 = PTR_PTR_1126b10e0;
    _objc_opt_new();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    if (param_1 == 0) {
      FUN_108f3477c(puVar2,&PTR____CFConstantStringClassReference_110daf6b8,
                    &PTR____CFConstantStringClassReference_110f096b8,1);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
      _objc_alloc();
      func_0x00010c057bc0();
      func_0x00010c1d0640(puVar3);
      puVar5 = puVar4;
      func_0x00010c11d4e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar6 != (undefined *)0x0) {
        puVar11 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar5);
          }
          uVar12 = *(undefined8 *)((long)puVar11 * 8);
          uVar7 = uVar12;
          func_0x00010c0d4f60();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c0720c0();
          _objc_release(uVar7);
          if ((int)uVar8 != 0) {
            uVar7 = uVar12;
            func_0x00010c296d80(uVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar3);
            _objc_release(uVar7);
          }
          uVar7 = uVar12;
          func_0x00010c0d4f60();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c0720c0();
          _objc_release(uVar7);
          if ((int)uVar8 != 0) {
            uVar7 = uVar12;
            func_0x00010c296d80(uVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar3);
            _objc_release(uVar7);
          }
          uVar7 = uVar12;
          func_0x00010c0d4f60();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c0720c0();
          _objc_release(uVar7);
          if ((int)uVar8 != 0) {
            uVar7 = uVar12;
            func_0x00010c296d80(uVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar3);
            _objc_release(uVar7);
          }
          uVar7 = uVar12;
          func_0x00010c0d4f60();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c0720c0();
          _objc_release(uVar7);
          if ((int)uVar8 != 0) {
            func_0x00010c296d80(uVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar3);
            _objc_release(uVar12);
            puVar9 = puVar3;
            func_0x00010c0e00e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            FUN_108f349ac(puVar2,puVar9,1);
            _objc_release(puVar9);
          }
          puVar11 = puVar11 + 1;
        } while (puVar6 != puVar11);
        puVar6 = puVar5;
        func_0x00010bf52a60();
      }
      puVar6 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar6 == (undefined *)0x0) {
        puVar6 = puVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar6 == (undefined *)0x0) {
          FUN_108f3477c(puVar2,&PTR____CFConstantStringClassReference_110daf6b8,
                        &PTR____CFConstantStringClassReference_110f096d8,1);
        }
        else {
          puVar11 = puVar3;
          func_0x00010c0e00e0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          FUN_108f3477c(puVar2,puVar11,&PTR____CFConstantStringClassReference_110f096d8,1);
          _objc_release(puVar11);
        }
        _objc_release(puVar6);
      }
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    _objc_release(puVar2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
      ___stack_chk_fail();
      _objc_retain();
      puVar2 = PTR_PTR_1126b10e0;
      _objc_opt_new(PTR_PTR_1126b10e0);
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      func_0x00010c1d0640();
      lVar10 = param_1;
      func_0x00010c08fa60();
      if (lVar10 == 0) {
        FUN_108f34b20(puVar2,&PTR____CFConstantStringClassReference_110f096d8,1);
      }
      else {
        func_0x00010c1d0640(puVar3);
        FUN_108f34c94(puVar2,1);
      }
      _objc_release(puVar2);
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108f04d74; end: 108f04f07;  */

void FUN_108f04d74(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b10e0;
  _objc_opt_new(PTR_PTR_1126b10e0);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0640();
  lVar3 = param_1;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    FUN_108f34b20(puVar1,&PTR____CFConstantStringClassReference_110f096d8,1);
  }
  else {
    func_0x00010c1d0640(puVar2);
    FUN_108f34c94(puVar1,1);
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f04f08; end: 108f050a3;  */

void FUN_108f04f08(long param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
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
  
  puVar8 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_2;
  _objc_retain(param_2);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0b7fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(lVar1);
  puVar9 = auStack_e8;
  uVar10 = 0x10;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar1);
        }
        uVar11 = *(ulong *)(lStack_128 + lVar13 * 8);
        uVar3 = uVar11;
        func_0x00010c1164a0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c116a20();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        puVar8 = (undefined8 *)param_2;
        func_0x00010c0720c0();
        _objc_release(uVar4);
        _objc_release(uVar3);
        if ((uVar5 & 1) != 0) {
          _objc_retain(uVar11);
          goto LAB_108f0504c;
        }
        lVar13 = lVar13 + 1;
      } while (lVar2 != lVar13);
      puVar9 = auStack_e8;
      uVar10 = 0x10;
      lVar2 = lVar1;
      puVar8 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  uVar11 = 0;
LAB_108f0504c:
  _objc_release(lVar1);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  _objc_retain(uVar10);
  func_0x00010c269d40(puVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0x15;
  func_0x000107c312b8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  _objc_retain(uVar10);
  func_0x00010c2448c0(puVar6);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(param_2);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(uVar10);
  _objc_release(param_2);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(uVar10);
  return;
}



/* Entry: 108f050a4; end: 108f05407;  */

void FUN_108f050a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c269d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x15;
  func_0x000107c312b8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c2448c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  return;
}



/* Entry: 108f05408; end: 108f0542f;  */

void FUN_108f05408(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108f05418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108f05430; end: 108f054ab;  */

void FUN_108f05430(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    _objc_retain(param_3);
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 108f054ac; end: 108f0551f; -[SCImpalaLocalStoryNativeItem initWithSnapPlaybackInfos:] */

undefined1 * FUN_108f054ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff378;
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



/* Entry: 108f05520; end: 108f0552b; -[SCImpalaLocalStoryNativeItem pushToValdiMarshaller:] */

void FUN_108f05520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b04af98(param_3,param_1);
  func_0x00010b04af88();
  func_0x00010b04af80();
  func_0x00010b04aef0();
  func_0x00010b04af30();
  return;
}



/* Entry: 108f0552c; end: 108f05533; -[SCImpalaLocalStoryNativeItem snapPlaybackInfos] */

undefined8 FUN_108f0552c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f05534; end: 108f0553f; -[SCImpalaLocalStoryNativeItem .cxx_destruct] */

void FUN_108f05534(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f05540; end: 108f0573f; +[SCImpalaPublicProfileSpotlightParser parseSnapFromEncodedMixerStoryCard:] */

void FUN_108f05540(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 ****ppppuVar3;
  long lVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 ****ppppuVar17;
  undefined8 ****ppppuVar18;
  undefined8 ****ppppuVar19;
  undefined *puVar20;
  undefined8 ****ppppuVar21;
  long lVar22;
  long lVar23;
  undefined8 ***pppuStack_1b0;
  undefined8 ***pppuStack_138;
  undefined8 **ppuStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 **appuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lStack_128 = 0;
  ppuStack_130 = (undefined8 ***)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  ppppuVar18 = (undefined8 ****)&ppuStack_130;
  ppppuVar19 = (undefined8 ****)appuStack_f0;
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar22 = *plStack_120;
    do {
      lVar23 = 0;
      do {
        if (*plStack_120 != lVar22) {
          _objc_enumerationMutation(param_3);
        }
        ppppuVar18 = *(undefined8 *****)(lStack_128 + lVar23 * 8);
        pppuStack_138 = (undefined8 ****)0x0;
        ppppuVar19 = &pppuStack_138;
        ppppuVar3 = (undefined8 ****)PTR_PTR_1126b0ef0;
        func_0x00010c0f40e0();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar21 = (undefined8 ****)pppuStack_138;
        _objc_retain(pppuStack_138);
        if (ppppuVar21 != (undefined8 ****)0x0 || ppppuVar3 == (undefined8 ****)0x0) {
LAB_108f056d0:
          _objc_release(ppppuVar3);
LAB_108f056dc:
          _objc_release(ppppuVar21);
          _objc_release(param_3);
          puVar20 = (undefined *)0x0;
          goto LAB_108f056f0;
        }
        ppppuVar21 = ppppuVar3;
        func_0x00010bf31ee0();
        if ((int)ppppuVar21 != 0x26) {
          ppppuVar21 = (undefined8 ****)0x0;
          goto LAB_108f056d0;
        }
        ppppuVar21 = ppppuVar3;
        func_0x00010c259cc0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_1;
        ppppuVar18 = ppppuVar3;
        ppppuVar19 = ppppuVar21;
        func_0x00010be22e20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppppuVar21);
        ppppuVar21 = ppppuVar3;
        if (lVar4 == 0) goto LAB_108f056dc;
        func_0x00010befa120(puVar1);
        _objc_release(lVar4);
        _objc_release(ppppuVar3);
        lVar23 = lVar23 + 1;
      } while (lVar2 != lVar23);
      ppppuVar18 = (undefined8 ****)&ppuStack_130;
      ppppuVar19 = (undefined8 ****)appuStack_f0;
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_retain(puVar1);
  puVar20 = puVar1;
LAB_108f056f0:
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(ppppuVar18);
    _objc_retain(ppppuVar19);
    ppppuVar21 = ppppuVar18;
    func_0x00010c23cdc0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar3 = ppppuVar18;
    func_0x00010c259cc0(ppppuVar18);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar5 = ppppuVar21;
    FUN_108f0a708(ppppuVar21,ppppuVar3,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppppuVar3);
    ppppuVar3 = ppppuVar5;
    func_0x00010bf529e0();
    if (ppppuVar3 == (undefined8 ****)0x0) {
      puVar20 = (undefined *)0x0;
    }
    else {
      ppppuVar3 = ppppuVar21;
      func_0x00010c23cde0();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar6 = ppppuVar3;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar7 = ppppuVar6;
      func_0x00010c08fa60();
      if (ppppuVar7 == (undefined8 ****)0x0) {
        pppuStack_1b0 = (undefined8 ***)&PTR____CFConstantStringClassReference_110daafd8;
      }
      else {
        ppppuVar7 = ppppuVar21;
        func_0x00010c23cde0();
        _objc_retainAutoreleasedReturnValue();
        pppuStack_1b0 = ppppuVar7;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppppuVar7);
      }
      _objc_release(ppppuVar6);
      _objc_release(ppppuVar3);
      _objc_retain(ppppuVar21);
      ppppuVar3 = (undefined8 ****)PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_new();
      ppppuVar6 = ppppuVar21;
      func_0x00010bfdd5c0();
      ppppuVar7 = ppppuVar3;
      if ((int)ppppuVar6 != 0) {
        ppppuVar6 = ppppuVar21;
        func_0x00010c26fe00();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar8 = ppppuVar6;
        func_0x00010bef3bc0();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar9 = ppppuVar8;
        func_0x00010bf529e0();
        _objc_release(ppppuVar8);
        _objc_release(ppppuVar6);
        if (ppppuVar9 != (undefined8 ****)0x0) {
          ppppuVar6 = ppppuVar21;
          func_0x00010c26fe00();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar7 = ppppuVar6;
          func_0x00010bef3bc0();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar8 = ppppuVar7;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppppuVar7);
          _objc_release(ppppuVar6);
          ppppuVar6 = ppppuVar8;
          func_0x00010c26f0a0();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar7 = ppppuVar6;
          func_0x000107c31908();
          _objc_release(ppppuVar3);
          _objc_release(ppppuVar6);
          _objc_release(ppppuVar8);
        }
      }
      ppppuVar3 = ppppuVar7;
      func_0x00010bf51e00();
      _objc_release(ppppuVar7);
      _objc_release(ppppuVar21);
      puVar20 = PTR_PTR_1126c0df0;
      _objc_alloc();
      ppppuVar6 = ppppuVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar7 = ppppuVar6;
      func_0x00010c26d760();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      ppppuVar8 = ppppuVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar9 = ppppuVar8;
      func_0x00010c26f2a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2709c0();
      func_0x00010bf655e0();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar10 = ppppuVar21;
      func_0x00010c2456a0();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar11 = ppppuVar10;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar12 = ppppuVar11;
      func_0x00010c22c3a0();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar13 = ppppuVar18;
      FUN_108f09284(ppppuVar18,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0b28);
      _objc_retainAutoreleasedReturnValue();
      ppppuVar14 = ppppuVar21;
      func_0x00010c23cde0();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar15 = ppppuVar14;
      func_0x00010bf25140();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar16 = ppppuVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar17 = ppppuVar16;
      func_0x00010bf5bbc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07dce0();
      func_0x00010c000b20();
      _objc_release(ppppuVar17);
      _objc_release(ppppuVar16);
      _objc_release(ppppuVar15);
      _objc_release(ppppuVar14);
      _objc_release(ppppuVar13);
      _objc_release(ppppuVar12);
      _objc_release(ppppuVar11);
      _objc_release(ppppuVar10);
      _objc_release(puVar1);
      _objc_release(ppppuVar9);
      _objc_release(ppppuVar8);
      _objc_release(ppppuVar7);
      _objc_release(ppppuVar6);
      _objc_release(ppppuVar3);
      _objc_release(pppuStack_1b0);
    }
    _objc_release(ppppuVar5);
    _objc_release(ppppuVar21);
    _objc_release(ppppuVar19);
    _objc_release(ppppuVar18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return;
}



/* Entry: 108f05740; end: 108f05b77; +[SCImpalaPublicProfileSpotlightParser _getSpotlightStoryFromItem:compositeStoryId:] */

void FUN_108f05740(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined **ppuStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = param_3;
  func_0x00010c23cdc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_3;
  func_0x00010c259cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  FUN_108f0a708(ppuVar1,ppuVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  ppuVar2 = ppuVar3;
  func_0x00010bf529e0();
  if (ppuVar2 == (undefined **)0x0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    ppuVar2 = ppuVar1;
    func_0x00010c23cde0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c08fa60();
    if (ppuVar5 == (undefined **)0x0) {
      ppuStack_70 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar5 = ppuVar1;
      func_0x00010c23cde0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_70 = ppuVar5;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
    }
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
    _objc_retain(ppuVar1);
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new();
    ppuVar4 = ppuVar1;
    func_0x00010bfdd5c0();
    ppuVar5 = ppuVar2;
    if ((int)ppuVar4 != 0) {
      ppuVar4 = ppuVar1;
      func_0x00010c26fe00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar4;
      func_0x00010bef3bc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar6;
      func_0x00010bf529e0();
      _objc_release(ppuVar6);
      _objc_release(ppuVar4);
      if (ppuVar7 != (undefined **)0x0) {
        ppuVar4 = ppuVar1;
        func_0x00010c26fe00();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar4;
        func_0x00010bef3bc0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar5;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar5);
        _objc_release(ppuVar4);
        ppuVar4 = ppuVar6;
        func_0x00010c26f0a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar4;
        func_0x000107c31908();
        _objc_release(ppuVar2);
        _objc_release(ppuVar4);
        _objc_release(ppuVar6);
      }
    }
    ppuVar2 = ppuVar5;
    func_0x00010bf51e00();
    _objc_release(ppuVar5);
    _objc_release(ppuVar1);
    puVar17 = PTR_PTR_1126c0df0;
    _objc_alloc();
    ppuVar4 = ppuVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
    ppuVar6 = ppuVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010c26f2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    func_0x00010bf655e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar1;
    func_0x00010c2456a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar9;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar10;
    func_0x00010c22c3a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = param_3;
    FUN_108f09284(param_3,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0b28);
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar1;
    func_0x00010c23cde0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar13;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    ppuVar15 = ppuVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = ppuVar15;
    func_0x00010bf5bbc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07dce0();
    func_0x00010c000b20();
    _objc_release(ppuVar16);
    _objc_release(ppuVar15);
    _objc_release(ppuVar14);
    _objc_release(ppuVar13);
    _objc_release(ppuVar12);
    _objc_release(ppuVar11);
    _objc_release(ppuVar10);
    _objc_release(ppuVar9);
    _objc_release(puVar8);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
    _objc_release(ppuStack_70);
  }
  _objc_release(ppuVar3);
  _objc_release(ppuVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 108f05b78; end: 108f05c2b;  */

void FUN_108f05b78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bef3be0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithFloat__1126157e8);
  return;
}



/* Entry: 108f05c2c; end: 108f05d0b;  */

void FUN_108f05c2c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  func_0x00010bf93460();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bf93440(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108f05d0c; end: 108f05d53;  */

undefined8 FUN_108f05d0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 108f05d54; end: 108f0654f;  */

void FUN_108f05d54(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,char param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15)

{
  long lVar1;
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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  uint uVar32;
  undefined *puStack_d0;
  undefined *puStack_c8;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_14);
  _objc_retain(param_15);
  lVar1 = param_6;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar31 = (undefined *)0x0;
    goto LAB_108f064cc;
  }
  puVar31 = param_1;
  func_0x00010c23f800();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar31;
  func_0x00010c08fa60();
  _objc_release(puVar31);
  if (puVar2 == (undefined *)0x0) {
    puVar31 = (undefined *)0x0;
    goto LAB_108f064cc;
  }
  puVar31 = param_1;
  func_0x00010c120340(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  _objc_release(puVar31);
  puVar31 = param_1;
  func_0x00010bfd7420();
  if ((int)puVar31 == 0) {
LAB_108f05ef8:
    _objc_retain(param_3);
    puVar31 = param_1;
    FUN_108f06550();
    if (((ulong)puVar31 & 1) == 0) {
      puVar2 = param_1;
      FUN_108f06624();
      uVar32 = (uint)puVar2 ^ 1;
    }
    else {
      uVar32 = 0;
    }
    puStack_c8 = param_3;
    if (param_12 == '\0') {
      puStack_d0 = (undefined *)0x0;
    }
    else {
      puVar2 = param_1;
      FUN_108f06624(param_1);
      puStack_d0 = param_1;
      FUN_108f066f8(param_1,(uint)puVar31 | (uint)puVar2 ^ 1,param_14,0,param_15);
      _objc_retainAutoreleasedReturnValue();
      puVar31 = param_1;
      func_0x00010c243660();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar31;
      func_0x00010c26e3a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c08fa60();
      _objc_release(puVar2);
      _objc_release(puVar31);
      if ((puVar3 != (undefined *)0x0 & uVar32) == 1) {
        puStack_c8 = PTR_PTR_1126cb008;
        _objc_alloc();
        puVar31 = param_1;
        func_0x00010c243660(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar31;
        func_0x00010c26e3a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c020be0();
        _objc_release(param_3);
        _objc_release(puVar2);
        _objc_release(puVar31);
      }
    }
    puVar2 = PTR_PTR_1126cf3a0;
    func_0x00010c0c5cc0();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = PTR_PTR_1126cc4e0;
    _objc_alloc();
    puVar3 = param_1;
    func_0x00010c120340();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010c23f800();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x000108f06970();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1;
    FUN_108f06b18();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_1;
    FUN_108f06c04(param_1,param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_1;
    FUN_108f07274(param_1,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_1;
    FUN_108f07308();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_1;
    FUN_108f07494(param_1,param_8,param_9);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_1;
    FUN_108f07960();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = param_1;
    FUN_108f07b10();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_1;
    FUN_108f07bf4();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = param_1;
    FUN_108f07cb8();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = param_1;
    func_0x00010bf10000();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    FUN_108f07d14();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = param_1;
    func_0x00010bf5b480();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    func_0x000108f0e94c();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = param_1;
    FUN_108f07e20();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = param_1;
    func_0x000108f07ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07cca0();
    puVar22 = param_1;
    FUN_108f07fa4();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = param_1;
    func_0x00010bf9a280();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = param_1;
    FUN_108f08068();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = param_1;
    func_0x00010c23fd60();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar25;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = param_1;
    FUN_108f082b4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14ede0();
    func_0x00010c25b820();
    puVar28 = param_1;
    func_0x000108f08440();
    _objc_retainAutoreleasedReturnValue();
    puVar29 = param_1;
    func_0x000108f0854c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaac0();
    puVar30 = param_1;
    FUN_108f0869c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c044c20(puVar31);
    _objc_release(puVar30);
    _objc_release(puVar29);
    _objc_release(puVar28);
    _objc_release(puVar27);
    _objc_release(puVar26);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puStack_d0);
  }
  else {
    puStack_c8 = param_1;
    func_0x00010bfb68a0();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = puStack_c8;
    func_0x00010c27dd80();
    if ((int)puVar31 == 1) {
      func_0x00010c15e560();
      _objc_release(puStack_c8);
      goto LAB_108f05ef8;
    }
    puVar31 = (undefined *)0x0;
  }
  _objc_release(puStack_c8);
LAB_108f064cc:
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar31);
  return;
}



/* Entry: 108f06550; end: 108f06623;  */

undefined1 FUN_108f06550(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_1;
  func_0x00010c0ee320(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf980c0();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108f06624; end: 108f066f7;  */

undefined1 FUN_108f06624(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_1;
  func_0x00010c0ee320(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf980c0();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108f066f8; end: 108f06b17;  */

void FUN_108f066f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = param_1;
  func_0x00010bf96020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010befdc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2d4a0();
  func_0x00010bf2c740();
  puVar3 = PTR_PTR_1126d9f68;
  _objc_alloc();
  func_0x00010c29eec0();
  func_0x00010c29eec0();
  func_0x00010c1518c0();
  func_0x00010c1142e0();
  func_0x00010c25e960();
  func_0x00010c0db040();
  func_0x00010c29c5c0();
  func_0x00010c2651a0();
  func_0x00010c2645e0();
  func_0x00010c268fc0();
  func_0x00010c268de0();
  func_0x00010bf1f680();
  func_0x00010c22a980();
  func_0x00010c25e440();
  func_0x00010c0f2a40();
  func_0x00010c0f2a00();
  func_0x00010bf41940();
  func_0x00010bf41900();
  func_0x00010c01e400(puVar3);
  puVar4 = PTR_PTR_1126cc4d8;
  _objc_alloc(PTR_PTR_1126cc4d8);
  uVar5 = param_1;
  func_0x00010c120340(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar6 = param_5;
  FUN_108f05c2c(param_5,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c01e3e0(puVar4);
  _objc_release(param_3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108f06b18; end: 108f06c03;  */

void FUN_108f06b18(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126cf3b8;
  _objc_retain();
  _objc_alloc(puVar1);
  lVar2 = param_2;
  func_0x00010c0c5340(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8b160();
  lVar3 = param_2;
  func_0x00010c0c5340(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c075780();
  lVar5 = param_2;
  func_0x00010bf9c8a0(param_2);
  lVar6 = param_2;
  func_0x00010bf5ab80(param_2);
  _objc_release(param_2);
  func_0x00010c00eac0(param_1,(double)lVar5 / 1000.0,(double)lVar6 / 1000.0,puVar1,param_3,lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f06c04; end: 108f07273;  */

void FUN_108f06c04(ulong param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uStack_e0;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfd8fe0();
  if ((int)uVar1 == 0) {
    puVar18 = (undefined *)0x0;
    goto LAB_108f071a8;
  }
  uVar1 = param_1;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126cf3c0;
  _objc_alloc();
  uVar2 = uVar1;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108f0e94c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0c54a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000108f0e94c();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c0c5480();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x000108f0e94c();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010c0c6c20();
  puVar16 = &UNK_10dfa4420;
  switch(uVar8 & 0xffffffff) {
  case 0:
    break;
  case 1:
  case 0x14:
    puVar16 = &UNK_10dfa4420;
    break;
  case 2:
    puVar16 = &UNK_10dfa4420;
    break;
  case 5:
    puVar16 = &UNK_10dfa4420;
    break;
  case 6:
    puVar16 = &UNK_10dfa4420;
    break;
  case 7:
    puVar16 = &UNK_10dfa4420;
    break;
  case 9:
    puVar16 = &UNK_10dfa4420;
    break;
  case 10:
    puVar16 = &UNK_10dfa4420;
    break;
  case 0xb:
    puVar16 = &UNK_10dfa4420;
    break;
  case 0xc:
    puVar16 = &UNK_10dfa4420;
    break;
  case 0xd:
    puVar16 = &UNK_10dfa4420;
    break;
  case 0xe:
    puVar16 = &UNK_10dfa4420;
    break;
  case 0xf:
    puVar16 = &UNK_10dfa4420;
    break;
  case 0x10:
    puVar16 = &UNK_10dfa4420;
    break;
  case 0x11:
    puVar16 = &UNK_10dfa4420;
    break;
  case 0x12:
    puVar16 = &UNK_10dfa4420;
    break;
  case 0x15:
    puVar16 = &UNK_10dfa4420;
    break;
  case 0x16:
    puVar16 = &UNK_10dfa4420;
    break;
  case 0x17:
    puVar16 = &UNK_10dfa4420;
    break;
  case 0x18:
    puVar16 = &UNK_10dfa4420;
    break;
  case 0x19:
    puVar16 = &UNK_10dfa4420;
    break;
  case 0x1a:
    break;
  default:
    puVar16 = (undefined *)0xfbadbeef;
  case 3:
  case 4:
  case 8:
  case 0x13:
  }
  uVar8 = uVar1;
  func_0x00010c0c6e00(puVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x000108f0e94c();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar1;
  func_0x00010c0c47e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x000108f0e94c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c083e00();
  _objc_retain(uVar1);
  uVar12 = uVar1;
  func_0x00010bfdc220();
  if ((int)uVar12 == 0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    uVar12 = uVar1;
    func_0x00010c23f5c0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar12;
    func_0x00010c0c4640();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar19;
    func_0x00010c08fa60();
    _objc_release(uVar19);
    if (uVar20 == 0) {
      uStack_e0 = 0;
    }
    else {
      uVar19 = uVar12;
      func_0x00010c0c4640();
      _objc_retainAutoreleasedReturnValue();
      uStack_e0 = uVar19;
      func_0x00010bf15da0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar19);
    }
    uVar19 = uVar12;
    func_0x00010c0ef6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar19;
    func_0x00010c08fa60();
    _objc_release(uVar19);
    if (uVar20 == 0) {
      uVar19 = 0;
    }
    else {
      uVar20 = uVar12;
      func_0x00010c0ef6e0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar20;
      func_0x00010bf15da0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar20);
    }
    puVar16 = PTR_PTR_1126d5df0;
    _objc_alloc();
    if (param_2 == 0) {
      uVar20 = 0;
    }
    else {
      uVar20 = uVar1;
      func_0x00010bfb1200(uVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_retain(uVar1);
    uVar13 = uVar1;
    func_0x00010c23f5c0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010bf101c0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar14;
    func_0x00010c08fa60();
    _objc_release(uVar14);
    _objc_release(uVar13);
    uVar13 = uVar1;
    if (uVar17 == 0) {
      uVar14 = uVar1;
      func_0x00010bfddbe0();
      if ((int)uVar14 != 0) {
        uVar14 = uVar1;
        func_0x00010c27fa00();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar14;
        func_0x00010bf101c0();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar17;
        func_0x00010c08fa60();
        _objc_release(uVar17);
        _objc_release(uVar14);
        if (uVar15 != 0) {
          func_0x00010c27fa00(uVar1);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_108f06ef4;
        }
      }
      func_0x00010c27fa00(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar13;
      func_0x00010bf101e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      uVar17 = 0;
    }
    else {
      func_0x00010c23f5c0();
      _objc_retainAutoreleasedReturnValue();
LAB_108f06ef4:
      uVar14 = uVar13;
      func_0x00010bf101c0();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar14;
      func_0x00010bf15da0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar1);
    func_0x00010c022620();
    _objc_release(uVar17);
    if (param_2 != 0) {
      _objc_release(uVar20);
    }
    _objc_release(uVar19);
    _objc_release(uStack_e0);
    _objc_release(uVar12);
  }
  _objc_release(uVar1);
  func_0x00010bf03740();
  uVar12 = uVar1;
  func_0x00010bf1f280();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar1;
  func_0x00010c27f9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar1;
  func_0x00010c23f5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar20;
  func_0x00010bf101c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010c01b280(puVar18);
  _objc_release(uVar13);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar12);
  _objc_release(puVar16);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
LAB_108f071a8:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return;
}



/* Entry: 108f07274; end: 108f07307;  */

void FUN_108f07274(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  func_0x00010bf93ae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000108f0e94c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126cf3c8;
  _objc_alloc(PTR_PTR_1126cf3c8);
  func_0x00010bffafc0();
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f07308; end: 108f07493;  */

void FUN_108f07308(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  
  _objc_retain();
  puVar4 = PTR_PTR_1126cf3d8;
  _objc_alloc(PTR_PTR_1126cf3d8);
  lVar5 = param_1;
  func_0x00010bf0d660(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x000108f0e94c();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  lVar7 = param_1;
  func_0x00010bfdc4c0();
  if ((int)lVar7 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    lVar7 = param_1;
    func_0x00010c2476c0();
    lVar8 = param_1;
    if (lVar7 < 1) {
      func_0x00010bf5ab80(param_1);
    }
    else {
      func_0x00010c2476c0(param_1);
    }
    puVar10 = PTR_PTR_1126c3340;
    _objc_alloc(PTR_PTR_1126c3340);
    lVar7 = param_1;
    func_0x00010c243400();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x00010c247520();
    iVar3 = (int)lVar9;
    uVar1 = 2;
    if (iVar3 != 2) {
      uVar1 = iVar3 == 1;
    }
    uVar2 = 5;
    if (iVar3 != 0xc) {
      uVar2 = uVar1;
    }
    func_0x00010c0066c0(puVar10,param_2,lVar8,uVar2);
    _objc_release(lVar7);
  }
  _objc_release(param_1);
  lVar7 = param_1;
  func_0x00010bf2fba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x000108f0e94c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4d60(puVar4,param_2,lVar6,puVar10,lVar8);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(puVar10);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108f07494; end: 108f0795f;  */

void FUN_108f07494(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010bfd3e40();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010befe1a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfdc1c0();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      lVar1 = param_1;
      func_0x00010befe1a0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c23d7c0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        puVar16 = (undefined *)0x0;
      }
      else {
        _objc_retain(param_3);
        lVar3 = lVar2;
        func_0x00010c23d880();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c08fa60();
        _objc_release(lVar3);
        if (lVar4 == 0) {
          puVar15 = (undefined *)0x0;
        }
        else {
          puVar15 = PTR__OBJC_CLASS___NSUUID_1126b0270;
          _objc_alloc();
          lVar3 = lVar2;
          func_0x00010c23d880(lVar2);
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          func_0x00010bf25f00();
          func_0x00010c057e80();
          _objc_release(lVar3);
        }
        lVar3 = lVar2;
        func_0x00010c23d9a0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c08fa60();
        _objc_release(lVar3);
        if (lVar4 == 0) {
          puVar17 = (undefined *)0x0;
        }
        else {
          puVar17 = PTR__OBJC_CLASS___NSUUID_1126b0270;
          _objc_alloc();
          lVar3 = lVar2;
          func_0x00010c23d9a0(lVar2);
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          func_0x00010bf25f00();
          func_0x00010c057e80();
          _objc_release(lVar3);
        }
        lVar3 = lVar2;
        func_0x00010c23d800();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x00010c23c2e0(lVar2);
        lVar5 = lVar3;
        func_0x000108f05ba4(lVar3,lVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        lVar3 = lVar2;
        func_0x00010c23d960();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x00010c23c2e0(lVar2);
        lVar6 = lVar3;
        func_0x000108f05ba4(lVar3,lVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        puVar16 = PTR_PTR_1126d9f30;
        _objc_alloc();
        uVar7 = param_3;
        func_0x00010c23d840();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c23d820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296d80();
        lVar4 = lVar2;
        func_0x00010c23d920();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296d80();
        uVar8 = param_3;
        func_0x00010c23d8e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_3);
        lVar9 = lVar2;
        func_0x00010c23d940();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar15;
        func_0x00010bdc3580(puVar15);
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar2;
        func_0x00010c23d9c0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar17;
        func_0x00010bdc3580();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar2;
        func_0x00010c23d900();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c296d80();
        lVar14 = lVar2;
        func_0x00010bef1fa0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bff19a0(puVar16);
        _objc_release(lVar14);
        _objc_release(lVar13);
        _objc_release(puVar12);
        _objc_release(lVar11);
        _objc_release(puVar10);
        _objc_release(lVar9);
        _objc_release(uVar8);
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_release(uVar7);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(puVar17);
        _objc_release(puVar15);
      }
      _objc_release(lVar2);
      _objc_release(lVar1);
      goto LAB_108f07878;
    }
  }
  puVar16 = (undefined *)0x0;
LAB_108f07878:
  puVar15 = PTR_PTR_1126d9f28;
  _objc_alloc(PTR_PTR_1126d9f28);
  func_0x00010bf20ec0(param_1);
  lVar1 = param_1;
  func_0x00010befe1a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c06aee0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010befe1a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff9620(puVar15);
  _objc_release(param_2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar16);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 108f07960; end: 108f07b0f;  */

void FUN_108f07960(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfdc880();
  if ((int)uVar1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c24a0a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010bfdaa60();
    if ((int)uVar7 == 0) {
      uVar7 = 0;
    }
    else {
      uVar2 = param_1;
      func_0x00010c24a0a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010bfe2ee0();
      uVar4 = param_1;
      func_0x00010c24a0a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0b5940();
      func_0x000107c30948(uVar7,uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
    puVar8 = PTR_PTR_1126cf3e0;
    _objc_alloc(PTR_PTR_1126cf3e0);
    uVar1 = uVar7;
    func_0x00010c0b5ac0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c24a0a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c24a0a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24a0e0();
    func_0x00010c03ae60(puVar8);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar7);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 108f07b10; end: 108f07bf3;  */

void FUN_108f07b10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfda380();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c0fc8c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfd5c60();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      puVar4 = PTR_PTR_1126cf3e8;
      _objc_alloc(PTR_PTR_1126cf3e8);
      uVar1 = param_1;
      func_0x00010c0fc8c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf4e840();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03cda0(puVar4,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      goto LAB_108f07bd4;
    }
  }
  puVar4 = (undefined *)0x0;
LAB_108f07bd4:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108f07bf4; end: 108f07cb7;  */

void FUN_108f07bf4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c094fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
    lVar1 = param_1;
    func_0x00010c094fa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff6b00(puVar3,param_2,lVar1,0);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126d9f38;
    _objc_alloc(PTR_PTR_1126d9f38);
    func_0x00010c03cda0();
    _objc_release(puVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108f07cb8; end: 108f07d13;  */

void FUN_108f07cb8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010c15ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126cf3f0;
    _objc_alloc(PTR_PTR_1126cf3f0);
    func_0x00010c03cda0();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f07d14; end: 108f07e1f;  */

void FUN_108f07d14(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126d5240;
    _objc_alloc(PTR_PTR_1126d5240);
    func_0x00010c008360();
    puVar5 = puVar2;
    func_0x00010bf10080();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x000107c31908();
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126d9f40;
    _objc_alloc(PTR_PTR_1126d9f40);
    puVar4 = puVar2;
    func_0x00010bfe5ea0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c245860(puVar2);
    func_0x00010c245820(puVar2);
    func_0x00010bff56a0(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108f07e20; end: 108f07fa3;  */

void FUN_108f07e20(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bfdc280();
  if ((int)lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c23f900();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2475a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000108f0e94c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = lVar3;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126cf3f8;
      _objc_alloc(PTR_PTR_1126cf3f8);
      func_0x00010c04a9a0();
    }
    _objc_release(lVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108f07fa4; end: 108f08067;  */

void FUN_108f07fa4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfd94c0();
  if ((int)uVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c0d21a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c32f8;
    _objc_alloc(PTR_PTR_1126c32f8);
    uVar2 = uVar1;
    func_0x00010c0d20e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0d23c0(uVar1);
    uVar4 = uVar1;
    func_0x00010c0d23a0(uVar1);
    func_0x00010bff9aa0(puVar5,param_2,uVar2,(long)(int)uVar3,(long)(int)uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108f08068; end: 108f082b3;  */

void FUN_108f08068(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined8 uStack_80;
  
  _objc_retain();
  lVar1 = param_2;
  func_0x00010bfd6b20();
  if ((int)lVar1 == 0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    lVar1 = param_2;
    func_0x00010bf96020();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c24b580();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      uStack_80 = 0;
    }
    else {
      lVar1 = param_2;
      func_0x00010bf96020();
      _objc_retainAutoreleasedReturnValue();
      uStack_80 = lVar1;
      func_0x00010c24b580();
      _objc_release(lVar1);
    }
    puVar18 = PTR_PTR_1126d9f58;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    lVar1 = param_2;
    func_0x00010bf96020();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf1f680();
    lVar4 = param_2;
    func_0x00010bf96020();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c22a980();
    lVar6 = param_2;
    func_0x00010bf96020();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c29c5c0();
    lVar8 = param_2;
    func_0x00010bf96020(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c25e440();
    lVar10 = param_2;
    func_0x00010bf96020(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c24b7a0();
    lVar12 = param_2;
    func_0x00010bf96020();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010c24ba40();
    lVar14 = param_2;
    func_0x00010bf96020();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010c129760();
    lVar16 = param_2;
    func_0x00010bf96020();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar16;
    func_0x00010c123100();
    func_0x00010c052ac0(param_1 * 1000.0,puVar18,param_3,lVar2,lVar5,lVar7,lVar9,lVar11,uStack_80,
                        lVar13,lVar15,lVar17);
    _objc_release(lVar16);
    _objc_release(lVar14);
    _objc_release(lVar12);
    _objc_release(lVar10);
    _objc_release(lVar8);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return;
}



/* Entry: 108f082b4; end: 108f0869b;  */

void FUN_108f082b4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf28a40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfbec40();
  _objc_release(lVar1);
  puVar4 = (undefined *)0x0;
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    lVar1 = param_1;
    func_0x00010bf28a40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfbec40();
    func_0x00010bffc4a0(puVar3,param_2,lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf28a40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfbec20();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_108f0e8bc;
    puStack_50 = &UNK_110842ff8;
    puStack_48 = puVar3;
    _objc_retain(puVar3);
    func_0x00010bf980c0(lVar2,param_2,&puStack_68);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126d9f60;
    _objc_alloc(PTR_PTR_1126d9f60);
    lVar1 = param_1;
    func_0x00010bf28ba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa0480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c017640(puVar4,param_2,puVar3,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(puStack_48);
    _objc_release(puVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108f0869c; end: 108f08757;  */

void FUN_108f0869c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c262060();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126d9f78;
    _objc_alloc(PTR_PTR_1126d9f78);
    lVar1 = param_1;
    func_0x00010c262060(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c2621c0(param_1);
    lVar3 = param_1;
    func_0x00010c1029e0(param_1);
    func_0x00010c03c2a0(puVar4,param_2,lVar1,lVar2,lVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108f08758; end: 108f0884f;  */

ulong FUN_108f08758(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bfb68a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c15e560();
  lVar3 = param_3;
  func_0x00010bfb68a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c15e560();
  _objc_release(lVar3);
  _objc_release(lVar1);
  if (lVar2 < lVar4) {
    uVar5 = 0xffffffffffffffff;
  }
  else {
    lVar1 = param_3;
    func_0x00010bfb68a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c15e560();
    lVar3 = param_2;
    func_0x00010bfb68a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c15e560();
    uVar5 = (ulong)(lVar2 < lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar5;
}



/* Entry: 108f08850; end: 108f0888f;  */

void FUN_108f08850(long param_1,int param_2,undefined8 param_3,undefined1 *param_4)

{
  if (param_2 == 2) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
    *param_4 = 1;
  }
  return;
}



/* Entry: 108f08890; end: 108f090f3;  */

/* WARNING: Possible PIC construction at 0x000108f08964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108f08a84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108f08b34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108f08a88) */
/* WARNING: Removing unreachable block (ram,0x000108f08968) */
/* WARNING: Removing unreachable block (ram,0x000108f08b38) */
/* WARNING: Removing unreachable block (ram,0x000108f08b84) */
/* WARNING: Removing unreachable block (ram,0x000108f08b54) */
/* WARNING: Removing unreachable block (ram,0x000108f08b98) */
/* WARNING: Removing unreachable block (ram,0x000108f08bc8) */
/* WARNING: Removing unreachable block (ram,0x000108f08b70) */
/* WARNING: Removing unreachable block (ram,0x000108f08bdc) */
/* WARNING: Removing unreachable block (ram,0x000108f08c70) */
/* WARNING: Removing unreachable block (ram,0x000108f08c40) */
/* WARNING: Removing unreachable block (ram,0x000108f08c78) */
/* WARNING: Removing unreachable block (ram,0x000108f08cd4) */

void FUN_108f08890(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lStack_248;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bfd91a0();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if ((int)lVar1 == 0) {
    _objc_release(param_4);
    _objc_release(param_2);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) goto _objc_autoreleaseReturnValue;
    ___stack_chk_fail();
  }
  else {
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lVar1 = param_1;
    func_0x00010bfdcd00();
    if ((int)lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010c25b540();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar1;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar11 != 0) {
        lVar11 = 0;
        param_1 = lVar1;
        goto SUB_108f08ec4;
      }
      _objc_release(lVar1);
    }
    lVar1 = param_1;
    func_0x00010bf2f7a0();
    if (lVar1 != 0) {
      lVar12 = param_1;
      func_0x00010bf2f780();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar12;
      func_0x00010bf52a60();
      lVar11 = lRam0000000000000000;
      while (lVar1 != 0) {
        lVar13 = 0;
        do {
          if (lRam0000000000000000 != lVar11) {
            _objc_enumerationMutation(lVar12);
          }
          lVar14 = *(long *)(lVar13 * 8);
          lVar3 = lVar14;
          func_0x00010c0c5180();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar3 != 0) {
            lVar3 = lVar14;
            func_0x00010c0c5180();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar2;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(lVar3);
            if (puVar4 == (undefined *)0x0) {
              lVar11 = 0;
              param_1 = lVar14;
              goto SUB_108f08ec4;
            }
          }
          lVar13 = lVar13 + 1;
        } while (lVar1 != lVar13);
        lVar1 = lVar12;
        func_0x00010bf52a60();
      }
      _objc_release(lVar12);
    }
    func_0x00010bf51e00();
    _objc_release(puVar2);
    _objc_release(param_1);
    func_0x00010c25b540();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = 0;
  }
SUB_108f08ec4:
  _objc_retain();
  _objc_retain(lVar11);
  lVar1 = lVar11;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    lStack_248 = lVar1;
    func_0x000108f0e94c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  else {
    _objc_retain(lVar11);
    lStack_248 = lVar11;
  }
  puVar2 = PTR_PTR_1126cb008;
  _objc_alloc();
  lVar1 = param_1;
  func_0x00010c0c54a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c26df60();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c26e3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0c5180(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010c0880a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c26d980();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x000108f0e990();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c26d940();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x000108f0e94c();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c26d920();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x000108f0e94c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020be0();
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar14);
  _objc_release(lVar3);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar1);
  _objc_release(lStack_248);
  _objc_release(lVar11);
  _objc_release(param_1);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f090f4; end: 108f09283;  */

void FUN_108f090f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_2);
  lVar7 = *(long *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010c0c5340(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar2);
  if (lVar7 == 0) {
    lVar7 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar7);
  }
  lVar3 = *(long *)(param_1 + 0x30);
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    uVar2 = param_2;
    func_0x00010bf5b480(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c292e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c294420(uVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  FUN_108f05d54(param_2,uVar1,lVar7,0,uVar2,uVar5,0,0,*(undefined8 *)(param_1 + 0x40),
                *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                *(undefined1 *)(param_1 + 0x68));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(lVar7);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 108f09284; end: 108f097df;  */

void FUN_108f09284(undefined *param_1,undefined8 param_2)

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
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  undefined *puVar22;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  code *pcStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined2 uStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined8 uStack_1e0;
  undefined2 uStack_1d8;
  undefined1 uStack_1d6;
  undefined1 uStack_1d5;
  undefined *puStack_1d0;
  undefined1 uStack_1c8;
  undefined *puStack_1c0;
  undefined4 uStack_1b4;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar17 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  puVar22 = param_1;
  func_0x00010c11ab00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar22;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c078f60();
  uStack_170 = param_2;
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = param_1;
    func_0x00010c11ab00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf8e2c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c08fa60();
    uVar21 = (ulong)(puVar5 != (undefined *)0x0);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    uVar21 = 1;
  }
  _objc_release(puVar1);
  _objc_release(puVar22);
  puVar22 = param_1;
  func_0x00010c11ab00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar22;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfea260();
  _objc_retainAutoreleasedReturnValue();
  puStack_1c0 = param_1;
  _objc_release(puVar1);
  _objc_release(puVar22);
  puVar22 = PTR_PTR_1126cc610;
  _objc_alloc();
  puVar1 = puVar3;
  puStack_180 = puVar22;
  func_0x00010bf24fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar3;
  puStack_198 = puVar1;
  func_0x00010bf24ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  puStack_1a0 = puVar22;
  func_0x00010bf24fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  puStack_1a8 = puVar1;
  func_0x00010bf25160();
  _objc_retainAutoreleasedReturnValue();
  puStack_188 = puVar2;
  func_0x00010bf0aa60();
  _objc_retainAutoreleasedReturnValue();
  puStack_190 = puVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = param_1;
  puStack_1b0 = puVar2;
  func_0x00010c11ab00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar22;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11ab00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf1ade0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf25040(puVar3);
  puStack_178 = puVar3;
  func_0x00010c11a980();
  puVar5 = puStack_198;
  puVar4 = puStack_1a0;
  puVar1 = puStack_1a8;
  puVar2 = puStack_1b0;
  uStack_1f0 = CONCAT71(uStack_1f0._1_7_,(char)puVar3);
  uStack_200 = CONCAT11(uStack_200._1_1_,(char)uVar21);
  puStack_1f8 = (undefined *)uVar21;
  func_0x00010bff9cc0();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(param_1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar22);
  puVar3 = puStack_1c0;
  _objc_release(puVar2);
  _objc_release(puStack_190);
  _objc_release(puStack_188);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar5);
  puVar2 = PTR_PTR_1126c9028;
  _objc_alloc();
  puVar4 = puVar3;
  puStack_190 = puVar2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  puStack_188 = puVar4;
  func_0x00010c259740();
  puVar4 = puVar3;
  puStack_1a0 = puVar2;
  func_0x00010c080120();
  puStack_1a8 = (undefined *)CONCAT44(puStack_1a8._4_4_,(int)puVar4);
  puVar2 = puVar3;
  func_0x00010bf3d2e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_198 = puVar2;
  func_0x00010c07d8e0();
  uStack_1b4 = SUB84(puVar2,0);
  puVar4 = puVar3;
  func_0x00010c11ab00();
  _objc_retainAutoreleasedReturnValue();
  puStack_1b0 = puVar4;
  func_0x00010c2456a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar5 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  func_0x00010c0ecd20();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(puVar4);
  puVar6 = puVar4;
  func_0x00010bf52a60();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  if (puVar6 != (undefined *)0x0) {
    lVar20 = *plStack_130;
    do {
      puVar22 = (undefined *)0x0;
      do {
        if (*plStack_130 != lVar20) {
          _objc_enumerationMutation(puVar4);
        }
        uVar10 = *(undefined8 *)(lStack_138 + (long)puVar22 * 8);
        func_0x00010bf4bf80(uVar10);
        _objc_retainAutoreleasedReturnValue();
        puStack_168 = puVar2;
        uStack_160 = 0xc2000000;
        uStack_158 = 0x108f0e904;
        puStack_150 = &UNK_110842ff8;
        _objc_retain(puVar5);
        puStack_148 = puVar5;
        func_0x00010bf980c0(uVar10);
        _objc_release(uVar10);
        _objc_release(puStack_148);
        puVar22 = puVar22 + 1;
      } while (puVar6 != puVar22);
      puVar6 = puVar4;
      func_0x00010bf52a60();
      puVar1 = (undefined *)0x0;
    } while (puVar6 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  puVar7 = puVar5;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  uVar10 = uStack_170;
  puVar6 = puStack_180;
  puVar2 = puStack_188;
  uStack_1c8 = 0;
  uStack_1d5 = 0;
  uStack_1d6 = (undefined1)uStack_1b4;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1e8 = 0;
  puStack_1f8 = puStack_180;
  uStack_1f0 = 0;
  uStack_200 = 0;
  puVar8 = puStack_190;
  puVar18 = puStack_188;
  uVar19 = uStack_170;
  puStack_1d0 = puVar7;
  func_0x00010c000ac0();
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puStack_1b0);
  _objc_release(puStack_198);
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_release(puStack_178);
  _objc_release(uVar10);
  puVar9 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    puStack_248 = puVar2;
    puStack_240 = puVar6;
    uStack_238 = uVar10;
    puStack_218 = puVar3;
    pcStack_208 = FUN_108f097e0;
    puStack_260 = puVar22;
    puStack_258 = puVar1;
    puStack_250 = puVar5;
    puStack_230 = puVar7;
    puStack_228 = puVar8;
    puStack_220 = puVar4;
    puStack_210 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(uVar17);
    _objc_retain(puVar18);
    _objc_retain(uVar19);
    puVar22 = puVar9;
    func_0x00010c2456c0();
    puVar8 = PTR____NSArray0__struct_11034ab48;
    if (puVar22 != (undefined *)0x0) {
      puVar22 = puVar9;
      func_0x00010bfdcd00();
      if ((int)puVar22 == 0) {
        puVar22 = (undefined *)0x0;
      }
      else {
        puVar1 = puVar9;
        func_0x00010c25b540();
        _objc_retainAutoreleasedReturnValue();
        puVar22 = PTR_PTR_1126cb008;
        _objc_alloc();
        puVar2 = puVar1;
        func_0x00010c0c54a0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x00010c26df60();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar1;
        func_0x00010c26e3a0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar1;
        func_0x00010c0880a0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar1;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x000108f0e94c();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar1;
        func_0x00010c26d980();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x000108f0e990();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar1;
        func_0x00010c26d940();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar13;
        func_0x000108f0e94c();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar1;
        func_0x00010c26d920();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar15;
        func_0x000108f0e94c();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c020be0();
        _objc_release(puVar16);
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(puVar1);
      }
      puVar1 = puVar9;
      func_0x00010c2456a0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      puStack_2b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2a8 = 0xc2000000;
      pcStack_2a0 = FUN_108f09b20;
      puStack_298 = &UNK_110acae80;
      _objc_retain(uVar17);
      uStack_290 = uVar17;
      _objc_retain(puVar9);
      puStack_288 = puVar9;
      puStack_280 = puVar22;
      _objc_retain(uVar19);
      uStack_278 = uVar19;
      _objc_retain(puVar18);
      puStack_270 = puVar18;
      _objc_retain(puVar22);
      puVar8 = puVar1;
      func_0x000107c31908(puVar1,&puStack_2b0);
      _objc_release(puStack_270);
      _objc_release(uStack_278);
      _objc_release(puStack_280);
      _objc_release(puStack_288);
      _objc_release(uStack_290);
      _objc_release(puVar22);
      _objc_release(puVar1);
    }
    _objc_release(uVar19);
    _objc_release(puVar18);
    _objc_release(uVar17);
    _objc_release(puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 108f097e0; end: 108f09b1f;  */

void FUN_108f097e0(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar15 = param_1;
  func_0x00010c2456c0();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar15 != (undefined *)0x0) {
    puVar15 = param_1;
    func_0x00010bfdcd00();
    if ((int)puVar15 == 0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar1 = param_1;
      func_0x00010c25b540();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR_PTR_1126cb008;
      _objc_alloc();
      puVar2 = puVar1;
      func_0x00010c0c54a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c26df60();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010c26e3a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar1;
      func_0x00010c0880a0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar1;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x000108f0e94c();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar1;
      func_0x00010c26d980();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x000108f0e990();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar1;
      func_0x00010c26d940();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x000108f0e94c();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar1;
      func_0x00010c26d920();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x000108f0e94c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c020be0();
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    puVar2 = param_1;
    func_0x00010c2456a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_108f09b20;
    puStack_98 = &UNK_110acae80;
    _objc_retain(param_2);
    uStack_90 = param_2;
    _objc_retain(param_1);
    puStack_88 = param_1;
    puStack_80 = puVar15;
    _objc_retain(param_4);
    uStack_78 = param_4;
    _objc_retain(param_3);
    uStack_70 = param_3;
    _objc_retain(puVar15);
    puVar1 = puVar2;
    func_0x000107c31908(puVar2,&puStack_b0);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(puStack_80);
    _objc_release(puStack_88);
    _objc_release(uStack_90);
    _objc_release(puVar15);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f09b20; end: 108f0a19f;  */

void FUN_108f09b20(double param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
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
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined *puVar39;
  double dVar40;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d9f10;
  _objc_alloc();
  uVar3 = param_3;
  func_0x00010c120340(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c0ed940(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c22c3a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c054380();
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126c2fd0;
  func_0x00010c2756c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  FUN_108f06b18();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  dVar40 = param_1;
  _objc_release(puVar6);
  func_0x00010bf9c720(uVar3);
  if (param_1 <= dVar40) {
    iVar1 = (int)*(undefined8 *)(param_2 + 0x28);
    func_0x00010bfd4bc0();
    uVar7 = param_3;
    if (iVar1 != 0) {
      uVar7 = *(undefined8 *)(param_2 + 0x28);
    }
    func_0x00010bf1f720();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126cf3a0;
    func_0x00010c0c5cc0();
    _objc_retainAutoreleasedReturnValue();
    puVar39 = PTR_PTR_1126cc4e0;
    _objc_alloc();
    uVar4 = param_3;
    func_0x00010c120340();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010c23f800();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_3;
    func_0x000108f06970();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_3;
    func_0x00010bf5b480();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_3;
    func_0x00010bf5b480();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c292e20();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_3;
    FUN_108f06c04(param_3,1);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_3;
    FUN_108f07274(param_3,0);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = param_3;
    FUN_108f07308();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = param_3;
    FUN_108f07494(param_3,0,*(undefined8 *)(param_2 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    uVar18 = param_3;
    FUN_108f07960();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = param_3;
    FUN_108f07b10();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = param_3;
    FUN_108f07bf4();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = param_3;
    FUN_108f07cb8();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = param_3;
    func_0x00010bf10000();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar22;
    FUN_108f07d14();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = param_3;
    func_0x00010bf5b480();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar24;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar25;
    func_0x000108f0e94c();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = param_3;
    FUN_108f07e20();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = param_3;
    func_0x000108f07ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07cca0();
    uVar29 = param_3;
    FUN_108f07fa4();
    _objc_retainAutoreleasedReturnValue();
    uVar30 = param_3;
    func_0x00010bf9a280();
    _objc_retainAutoreleasedReturnValue();
    uVar31 = uVar7;
    FUN_108f0a1a0(uVar7,*(undefined8 *)(param_2 + 0x40));
    _objc_retainAutoreleasedReturnValue();
    uVar32 = *(undefined8 *)(param_2 + 0x28);
    FUN_108f0a368();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = param_3;
    func_0x00010c23fd60();
    _objc_retainAutoreleasedReturnValue();
    uVar34 = uVar33;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = param_3;
    FUN_108f082b4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1317c0();
    func_0x00010c14ede0();
    func_0x00010c25b820();
    uVar36 = param_3;
    func_0x000108f08440();
    _objc_retainAutoreleasedReturnValue();
    uVar37 = *(undefined8 *)(param_2 + 0x28);
    FUN_108f0a5b8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaac0();
    uVar38 = param_3;
    FUN_108f0869c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c044c20(puVar39);
    _objc_release(uVar38);
    _objc_release(uVar37);
    _objc_release(uVar36);
    _objc_release(uVar35);
    _objc_release(uVar34);
    _objc_release(uVar33);
    _objc_release(uVar32);
    _objc_release(uVar31);
    _objc_release(uVar30);
    _objc_release(uVar29);
    _objc_release(uVar28);
    _objc_release(uVar27);
    _objc_release(uVar26);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar4);
    _objc_release(puVar6);
    _objc_release(uVar7);
  }
  else {
    puVar39 = (undefined *)0x0;
  }
  _objc_release(uVar3);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar39);
  return;
}



/* Entry: 108f0a1a0; end: 108f0a367;  */

void FUN_108f0a1a0(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010c0d4640();
  if (lVar1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar2 = param_2;
    func_0x00010c0d4620();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (lVar3 == 0) {
      param_1 = 0.0;
      dVar12 = 0.0;
      dVar11 = 0.0;
    }
    else {
      param_1 = 0.0;
      dVar12 = 0.0;
      dVar11 = 0.0;
      do {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar2);
          }
          lVar8 = *(long *)(lVar10 * 8);
          if (lVar8 != 0) {
            lVar4 = lVar8;
            func_0x00010bf1f9c0();
            if ((int)lVar4 == 2) {
              func_0x00010c270ac0();
              dVar11 = (double)lVar8;
            }
            else if ((int)lVar4 == 1) {
              lVar4 = lVar8;
              func_0x00010c270ac0();
              param_1 = (double)lVar4;
              func_0x00010c1178c0(lVar8);
              dVar12 = (double)lVar8;
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar3 != lVar10);
        lVar3 = lVar2;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar2);
    puVar9 = PTR_PTR_1126d9f50;
    _objc_alloc();
    func_0x00010c04d780(param_1,dVar12,dVar11);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    _objc_retain();
    lVar1 = param_2;
    func_0x00010bfd6b20();
    if ((int)lVar1 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      lVar1 = param_2;
      func_0x00010bf96020();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar1;
      func_0x00010c24b580();
      _objc_release(lVar1);
      if (0 < lVar7) {
        lVar1 = param_2;
        func_0x00010bf96020();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c24b580();
        _objc_release(lVar1);
      }
      puVar9 = PTR_PTR_1126d9f58;
      _objc_alloc();
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      lVar1 = param_2;
      func_0x00010bf96020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f680();
      lVar7 = param_2;
      func_0x00010bf96020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c22a980();
      lVar2 = param_2;
      func_0x00010bf96020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29c5c0();
      lVar3 = param_2;
      func_0x00010bf96020(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25e440();
      lVar10 = param_2;
      func_0x00010bf96020(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24b7a0();
      lVar8 = param_2;
      func_0x00010bf96020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24ba40();
      lVar4 = param_2;
      func_0x00010bf96020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c129760();
      lVar6 = param_2;
      func_0x00010bf96020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c123100();
      func_0x00010c052ac0(param_1 * 1000.0,puVar9);
      _objc_release(lVar6);
      _objc_release(lVar4);
      _objc_release(lVar8);
      _objc_release(lVar10);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar7);
      _objc_release(lVar1);
      _objc_release(puVar5);
    }
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 108f0a368; end: 108f0a5b7;  */

void FUN_108f0a368(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined8 uStack_80;
  
  _objc_retain();
  lVar1 = param_2;
  func_0x00010bfd6b20();
  if ((int)lVar1 == 0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    lVar1 = param_2;
    func_0x00010bf96020();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c24b580();
    _objc_release(lVar1);
    if (lVar2 < 1) {
      uStack_80 = 0;
    }
    else {
      lVar1 = param_2;
      func_0x00010bf96020();
      _objc_retainAutoreleasedReturnValue();
      uStack_80 = lVar1;
      func_0x00010c24b580();
      _objc_release(lVar1);
    }
    puVar18 = PTR_PTR_1126d9f58;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    lVar1 = param_2;
    func_0x00010bf96020();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf1f680();
    lVar4 = param_2;
    func_0x00010bf96020();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c22a980();
    lVar6 = param_2;
    func_0x00010bf96020();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c29c5c0();
    lVar8 = param_2;
    func_0x00010bf96020(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c25e440();
    lVar10 = param_2;
    func_0x00010bf96020(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c24b7a0();
    lVar12 = param_2;
    func_0x00010bf96020();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010c24ba40();
    lVar14 = param_2;
    func_0x00010bf96020();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010c129760();
    lVar16 = param_2;
    func_0x00010bf96020();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar16;
    func_0x00010c123100();
    func_0x00010c052ac0(param_1 * 1000.0,puVar18,param_3,lVar2,lVar5,lVar7,lVar9,lVar11,uStack_80,
                        lVar13,lVar15,lVar17);
    _objc_release(lVar16);
    _objc_release(lVar14);
    _objc_release(lVar12);
    _objc_release(lVar10);
    _objc_release(lVar8);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return;
}



/* Entry: 108f0a5b8; end: 108f0a707;  */

void FUN_108f0a5b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfd5720();
  if ((int)uVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bf41f80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bfd9d20();
    if ((int)uVar4 == 0) {
      uVar4 = 0;
    }
    else {
      uVar2 = param_1;
      func_0x00010bf41f80(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0ed760();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      FUN_108f52130();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bf41f80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0ed780();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bf41f80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0ed7a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar5 = PTR_PTR_1126cf3a8;
    _objc_alloc(PTR_PTR_1126cf3a8);
    func_0x00010c032520();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108f0a708; end: 108f0aa1f;  */

void FUN_108f0a708(undefined *param_1,undefined8 param_2,undefined8 param_3)

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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar15 = param_1;
  func_0x00010c2456c0();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar15 != (undefined *)0x0) {
    puVar15 = param_1;
    func_0x00010bfdcd00();
    if ((int)puVar15 == 0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar1 = param_1;
      func_0x00010c25b540();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR_PTR_1126cb008;
      _objc_alloc();
      puVar2 = puVar1;
      func_0x00010c0c54a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c26df60();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010c26e3a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar1;
      func_0x00010c0880a0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar1;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x000108f0e94c();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar1;
      func_0x00010c26d980();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x000108f0e990();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar1;
      func_0x00010c26d940();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x000108f0e94c();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar1;
      func_0x00010c26d920();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x000108f0e94c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c020be0();
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    puVar2 = param_1;
    func_0x00010c2456a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_108f0aa20;
    puStack_90 = &UNK_110acaeb0;
    _objc_retain(param_1);
    puStack_88 = param_1;
    puStack_80 = puVar15;
    _objc_retain(param_3);
    uStack_78 = param_3;
    _objc_retain(param_2);
    uStack_70 = param_2;
    _objc_retain(puVar15);
    puVar1 = puVar2;
    func_0x000107c31908(puVar2,&puStack_a8);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(puStack_80);
    _objc_release(puStack_88);
    _objc_release(puVar15);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f0aa20; end: 108f0b09f;  */

void FUN_108f0aa20(double param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
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
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined *puVar39;
  double dVar40;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d9f10;
  _objc_alloc();
  uVar3 = param_3;
  func_0x00010c120340(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c0ed940(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c22c3a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c054380();
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126c2fd0;
  func_0x00010c2756c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  FUN_108f06b18();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  dVar40 = param_1;
  _objc_release(puVar6);
  func_0x00010bf9c720(uVar3);
  if (param_1 <= dVar40) {
    iVar1 = (int)*(undefined8 *)(param_2 + 0x20);
    func_0x00010bfd4bc0();
    uVar7 = param_3;
    if (iVar1 != 0) {
      uVar7 = *(undefined8 *)(param_2 + 0x20);
    }
    func_0x00010bf1f720();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126cf3a0;
    func_0x00010c0c5cc0();
    _objc_retainAutoreleasedReturnValue();
    puVar39 = PTR_PTR_1126cc4e0;
    _objc_alloc();
    uVar4 = param_3;
    func_0x00010c120340();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010c23f800();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_3;
    func_0x000108f06970();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_3;
    func_0x00010bf5b480();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_3;
    func_0x00010bf5b480();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c292e20();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_3;
    FUN_108f06c04(param_3,1);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_3;
    FUN_108f07274(param_3,0);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = param_3;
    FUN_108f07308();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = param_3;
    FUN_108f07494(param_3,0,*(undefined8 *)(param_2 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    uVar18 = param_3;
    FUN_108f07960();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = param_3;
    FUN_108f07b10();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = param_3;
    FUN_108f07bf4();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = param_3;
    FUN_108f07cb8();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = param_3;
    func_0x00010bf10000();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar22;
    FUN_108f07d14();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = param_3;
    func_0x00010bf5b480();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar24;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar25;
    func_0x000108f0e94c();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = param_3;
    FUN_108f07e20();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = param_3;
    func_0x000108f07ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07cca0();
    uVar29 = param_3;
    FUN_108f07fa4();
    _objc_retainAutoreleasedReturnValue();
    uVar30 = param_3;
    func_0x00010bf9a280();
    _objc_retainAutoreleasedReturnValue();
    uVar31 = uVar7;
    FUN_108f0a1a0(uVar7,*(undefined8 *)(param_2 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    uVar32 = *(undefined8 *)(param_2 + 0x20);
    FUN_108f0a368();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = param_3;
    func_0x00010c23fd60();
    _objc_retainAutoreleasedReturnValue();
    uVar34 = uVar33;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = param_3;
    FUN_108f082b4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1317c0();
    func_0x00010c14ede0();
    func_0x00010c25b820();
    uVar36 = param_3;
    func_0x000108f08440();
    _objc_retainAutoreleasedReturnValue();
    uVar37 = *(undefined8 *)(param_2 + 0x20);
    FUN_108f0a5b8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaac0();
    uVar38 = param_3;
    FUN_108f0869c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c044c20(puVar39);
    _objc_release(uVar38);
    _objc_release(uVar37);
    _objc_release(uVar36);
    _objc_release(uVar35);
    _objc_release(uVar34);
    _objc_release(uVar33);
    _objc_release(uVar32);
    _objc_release(uVar31);
    _objc_release(uVar30);
    _objc_release(uVar29);
    _objc_release(uVar28);
    _objc_release(uVar27);
    _objc_release(uVar26);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar4);
    _objc_release(puVar6);
    _objc_release(uVar7);
  }
  else {
    puVar39 = (undefined *)0x0;
  }
  _objc_release(uVar3);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar39);
  return;
}



/* Entry: 108f0b0a0; end: 108f0b9b7;  */

void FUN_108f0b0a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lStack_90;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(0);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010c243660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cb008;
  _objc_alloc();
  lVar3 = lVar1;
  func_0x00010c0c54a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c26df60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c26e3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010c0880a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x000108f0e94c();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010c26d980();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x000108f0e990();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar1;
  func_0x00010c26d940();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x000108f0e94c();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar1;
  func_0x00010c26d920();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x000108f0e94c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020be0();
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar16 = PTR_PTR_1126c3330;
  _objc_alloc();
  lVar3 = param_1;
  func_0x00010bf9e140(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x000108f0e94c();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c0ed940(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_108f06550(param_1);
  FUN_108f06624(param_1);
  func_0x00010c24c380();
  lVar6 = param_1;
  func_0x00010c22c3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c24b720();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04d900();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar17 = PTR_PTR_1126c2fd0;
  func_0x00010c0ee380();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  FUN_108f06b18();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf96020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 == 0) {
    lStack_90 = 0;
  }
  else {
    uVar18 = param_4;
    func_0x00010c237ec0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x00010bf1f3c0();
    lStack_90 = param_1;
    FUN_108f066f8(param_1,1,param_3,uVar19,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar18);
  }
  puVar20 = PTR_PTR_1126cf3a0;
  func_0x00010c0c5cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR_PTR_1126cc4e0;
  _objc_alloc();
  lVar4 = param_1;
  func_0x00010c120340();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c23f800();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x000108f06970();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf5b480();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf5b480();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c292e20();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  FUN_108f06c04(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  FUN_108f07274(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  FUN_108f07308();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  FUN_108f07494(param_1,0,0);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  FUN_108f07960();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1;
  FUN_108f07b10();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  FUN_108f07bf4();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1;
  FUN_108f07cb8();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1;
  func_0x00010bf10000();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar25;
  FUN_108f07d14();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1;
  func_0x00010bf5b480();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar27;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar28;
  func_0x000108f0e94c();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1;
  FUN_108f07e20();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1;
  func_0x000108f07ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07cca0();
  lVar32 = param_1;
  FUN_108f07fa4();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1;
  func_0x00010bf9a280();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1;
  func_0x00010bf1f720();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar34;
  FUN_108f0a1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1;
  FUN_108f08068();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1;
  func_0x00010c23fd60();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = lVar37;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = param_1;
  FUN_108f082b4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14ede0();
  func_0x00010c25b820();
  lVar40 = param_1;
  func_0x000108f08440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbaac0();
  lVar41 = param_1;
  FUN_108f0869c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044c20();
  _objc_release(param_5);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puVar20);
  _objc_release(lStack_90);
  _objc_release(lVar3);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar21);
  return;
}



/* Entry: 108f0b9b8; end: 108f0babb;  */

void FUN_108f0b9b8(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010c2456c0();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c2456a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_108f0babc;
    puStack_58 = &UNK_110acaee0;
    _objc_retain(param_2);
    uStack_50 = param_2;
    _objc_retain(param_3);
    puVar2 = puVar1;
    uStack_48 = param_3;
    func_0x000107c31908(puVar1,&puStack_70);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f0babc; end: 108f0bef7;  */

void FUN_108f0babc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfd5720();
  if ((int)uVar1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126cf3a8;
    _objc_alloc(PTR_PTR_1126cf3a8);
    uVar1 = param_2;
    func_0x00010bf41f80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfd9d20();
    if ((int)uVar2 == 0) {
      uVar8 = 0;
    }
    else {
      uStack_68 = param_2;
      func_0x00010bf41f80();
      _objc_retainAutoreleasedReturnValue();
      uStack_70 = uStack_68;
      func_0x00010c0ed760();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uStack_70;
      FUN_108f52130();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar3 = param_2;
    func_0x00010bf41f80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0ed780();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_2;
    func_0x00010bf41f80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0ed7a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032520(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((int)uVar2 != 0) {
      _objc_release(uVar8);
      _objc_release(uStack_70);
      _objc_release(uStack_68);
    }
    _objc_release(uVar1);
  }
  uVar1 = param_2;
  FUN_108f0b0a0(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),0,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f0bef8; end: 108f0bf0b;  */

void FUN_108f0bef8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined *puVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lStack_90;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain();
  _objc_retain(uVar1);
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  _objc_retain(0);
  _objc_retain(uVar4);
  lVar5 = param_2;
  func_0x00010c243660();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126cb008;
  _objc_alloc();
  lVar7 = lVar5;
  func_0x00010c0c54a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x00010c26df60();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar5;
  func_0x00010c26e3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar5;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar5;
  func_0x00010c0880a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar5;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x000108f0e94c();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar5;
  func_0x00010c26d980();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x000108f0e990();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar5;
  func_0x00010c26d940();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x000108f0e94c();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar5;
  func_0x00010c26d920();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x000108f0e94c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020be0();
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  puVar20 = PTR_PTR_1126c3330;
  _objc_alloc();
  lVar7 = param_2;
  func_0x00010bf9e140(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x000108f0e94c();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2;
  func_0x00010c0ed940(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_108f06550(param_2);
  FUN_108f06624(param_2);
  func_0x00010c24c380();
  lVar10 = param_2;
  func_0x00010c22c3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_2;
  func_0x00010c24b720();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04d900();
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  puVar21 = PTR_PTR_1126c2fd0;
  func_0x00010c0ee380();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2;
  FUN_108f06b18();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_2;
  func_0x00010bf96020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar8 == 0) {
    lStack_90 = 0;
  }
  else {
    uVar22 = uVar2;
    func_0x00010c237ec0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar22;
    func_0x00010bf1f3c0();
    lStack_90 = param_2;
    FUN_108f066f8(param_2,1,uVar3,uVar23,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar22);
  }
  puVar24 = PTR_PTR_1126cf3a0;
  func_0x00010c0c5cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR_PTR_1126cc4e0;
  _objc_alloc();
  lVar8 = param_2;
  func_0x00010c120340();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2;
  func_0x00010c23f800();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_2;
  func_0x000108f06970();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_2;
  func_0x00010bf5b480();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_2;
  func_0x00010bf5b480();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c292e20();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_2;
  FUN_108f06c04(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_2;
  FUN_108f07274(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_2;
  FUN_108f07308();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_2;
  FUN_108f07494(param_2,0,0);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_2;
  FUN_108f07960();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_2;
  FUN_108f07b10();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_2;
  FUN_108f07bf4();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_2;
  FUN_108f07cb8();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_2;
  func_0x00010bf10000();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar29;
  FUN_108f07d14();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_2;
  func_0x00010bf5b480();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = lVar31;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar32;
  func_0x000108f0e94c();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_2;
  FUN_108f07e20();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_2;
  func_0x000108f07ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07cca0();
  lVar36 = param_2;
  FUN_108f07fa4();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_2;
  func_0x00010bf9a280();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_2;
  func_0x00010bf1f720();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = lVar38;
  FUN_108f0a1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = param_2;
  FUN_108f08068();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_2;
  func_0x00010c23fd60();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = lVar41;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_2;
  FUN_108f082b4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14ede0();
  func_0x00010c25b820();
  lVar44 = param_2;
  func_0x000108f08440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbaac0();
  lVar45 = param_2;
  FUN_108f0869c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044c20();
  _objc_release(uVar4);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(puVar24);
  _objc_release(lStack_90);
  _objc_release(lVar7);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(0);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar25);
  return;
}



/* Entry: 108f0bf0c; end: 108f0c777;  */

void FUN_108f0bf0c(undefined *param_1,undefined8 param_2)

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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar15 = param_1;
  func_0x00010c2456c0();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar15 != (undefined *)0x0) {
    puVar15 = param_1;
    func_0x00010bfdcd00();
    if ((int)puVar15 == 0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar1 = param_1;
      func_0x00010c25b540();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR_PTR_1126cb008;
      _objc_alloc();
      puVar2 = puVar1;
      func_0x00010c0c54a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c26df60();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010c26e3a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar1;
      func_0x00010c0880a0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar1;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x000108f0e94c();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar1;
      func_0x00010c26d980();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x000108f0e990();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar1;
      func_0x00010c26d940();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x000108f0e94c();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar1;
      func_0x00010c26d920();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x000108f0e94c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c020be0();
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    puVar2 = param_1;
    func_0x00010c2456a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    uStack_90 = 0x108f0c1fc;
    puStack_88 = &UNK_110acaf10;
    _objc_retain(param_1);
    puStack_80 = param_1;
    puStack_78 = puVar15;
    _objc_retain(param_2);
    uStack_70 = param_2;
    _objc_retain(puVar15);
    puVar1 = puVar2;
    func_0x000107c31908(puVar2,&puStack_a0);
    _objc_release(uStack_70);
    _objc_release(puStack_78);
    _objc_release(puStack_80);
    _objc_release(puVar15);
    _objc_release(puVar2);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f0c778; end: 108f0c8df;  */

void FUN_108f0c778(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010bf31ee0();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if ((int)puVar1 == 0x30) {
    puVar1 = param_1;
    func_0x00010c14bb60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR____NSArray0__struct_11034ab48;
    if ((puVar1 != (undefined *)0x0) &&
       (puVar2 = puVar1, func_0x00010c2456c0(), puVar3 = PTR____NSArray0__struct_11034ab48,
       puVar2 != (undefined *)0x0)) {
      puVar2 = puVar1;
      func_0x00010c2456a0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_108f0c8e0;
      puStack_68 = &UNK_110acaeb0;
      _objc_retain(param_1);
      puStack_60 = param_1;
      _objc_retain(puVar1);
      puStack_58 = puVar1;
      _objc_retain(param_2);
      uStack_50 = param_2;
      _objc_retain(param_3);
      puVar3 = puVar2;
      uStack_48 = param_3;
      func_0x000107c31908(puVar2,&puStack_80);
      _objc_release(uStack_48);
      _objc_release(uStack_50);
      _objc_release(puStack_58);
      _objc_release(puStack_60);
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108f0c8e0; end: 108f0e80b;  */

void FUN_108f0c8e0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined *puVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  undefined8 uVar42;
  long lVar43;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_120;
  
  uVar42 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010c14bc20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_2);
  _objc_retain(uVar42);
  _objc_retain(lVar3);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  lVar4 = param_2;
  func_0x00010c243660();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126cb008;
  _objc_alloc();
  lVar6 = lVar4;
  func_0x00010c0c54a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010c26df60();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = lVar4;
  func_0x00010c26e3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar4;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar4;
  func_0x00010c0880a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar4;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x000108f0e94c();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar4;
  func_0x00010c26d980();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x000108f0e990();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar4;
  func_0x00010c26d940();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x000108f0e94c();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar4;
  func_0x00010c26d920();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x000108f0e94c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020be0();
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar43);
  _objc_release(lVar7);
  _objc_release(lVar6);
  func_0x00010c245660(lVar3);
  func_0x00010c0682c0(lVar3);
  lVar6 = param_2;
  func_0x00010c120340();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126d9f20;
  _objc_alloc();
  lVar7 = lVar3;
  func_0x00010c2711a0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar2;
  FUN_108f05c2c(uVar2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04d940();
  _objc_release(uVar19);
  _objc_release(lVar7);
  puVar20 = PTR_PTR_1126c2fd0;
  func_0x00010c14bbc0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2;
  FUN_108f06b18();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_2;
  func_0x00010bf96020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar43 == 0) {
    lVar43 = 0;
  }
  else {
    lVar8 = lVar3;
    func_0x00010bf25140(lVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar1;
    func_0x00010c237ec0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar19;
    func_0x00010bf1f3c0();
    lVar43 = param_2;
    FUN_108f066f8(param_2,1,lVar8,uVar21,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar19);
    _objc_release(lVar8);
  }
  lVar8 = param_2;
  func_0x00010bf5b480();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c292e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  lVar8 = lVar9;
  func_0x00010c08fa60();
  lVar10 = lVar9;
  if (lVar8 == 0) {
    lVar8 = lVar3;
    func_0x00010c291e80();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar8;
    func_0x00010c08fa60();
    _objc_release(lVar8);
    if (lVar11 != 0) {
      lVar10 = lVar3;
      func_0x00010c291e80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
    }
  }
  lVar8 = param_2;
  func_0x00010bf5b480();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  lVar8 = lVar9;
  func_0x00010c08fa60();
  lVar11 = lVar9;
  if (lVar8 == 0) {
    lVar8 = lVar3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar8;
    func_0x00010c08fa60();
    _objc_release(lVar8);
    if (lVar12 != 0) {
      lVar11 = lVar3;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
    }
  }
  puVar22 = PTR_PTR_1126cf3a0;
  func_0x00010c0c5cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR_PTR_1126cc4e0;
  _objc_alloc();
  lVar8 = param_2;
  func_0x000108f06970();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2;
  FUN_108f06c04(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_2;
  FUN_108f07274(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_2;
  FUN_108f07308();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_2;
  FUN_108f07494(param_2,0,0);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_2;
  FUN_108f07960();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_2;
  FUN_108f07b10();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_2;
  FUN_108f07bf4();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_2;
  FUN_108f07cb8();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_2;
  func_0x00010bf10000();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar25;
  FUN_108f07d14();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar3;
  func_0x00010c291e80();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar27;
  func_0x000108f0e94c();
  _objc_retainAutoreleasedReturnValue();
  uStack_120 = lVar28;
  if (lVar28 == 0) {
    uStack_1a0 = param_2;
    func_0x00010bf5b480();
    _objc_retainAutoreleasedReturnValue();
    uStack_1a8 = uStack_1a0;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    uStack_120 = uStack_1a8;
    func_0x000108f0e94c();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar29 = param_2;
  FUN_108f07e20();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_2;
  func_0x000108f07ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07cca0();
  lVar31 = param_2;
  FUN_108f07fa4();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_2;
  func_0x00010bf9a280();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_2;
  func_0x00010bf1f720();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = lVar33;
  FUN_108f0a1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_2;
  FUN_108f08068();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_2;
  func_0x00010c23fd60();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar36;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_2;
  FUN_108f082b4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14ede0();
  func_0x00010c25b820();
  lVar39 = param_2;
  func_0x000108f08440();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = param_2;
  func_0x000108f0854c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbaac0();
  lVar41 = param_2;
  FUN_108f0869c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044c20();
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  if (lVar28 == 0) {
    _objc_release(uStack_120);
    _objc_release(uStack_1a8);
    _objc_release(uStack_1a0);
  }
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(puVar22);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar43);
  _objc_release(lVar7);
  _objc_release(puVar20);
  _objc_release(puVar18);
  _objc_release(lVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(lVar3);
  _objc_release(uVar42);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(lVar3);
  _objc_release(uVar42);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
  return;
}



/* Entry: 108f0e80c; end: 108f0e8bb;  */

void FUN_108f0e80c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d9f48;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c25ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c250f20(param_3);
  uVar3 = param_1;
  func_0x00010bf95780(param_3);
  func_0x00010c104340(param_3);
  _objc_release(param_3);
  func_0x00010c04eec0(param_1,uVar3,puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f0e8bc; end: 108f0eaff;  */

void FUN_108f0e8bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f0eb00; end: 108f0eb27;  */

bool FUN_108f0eb00(uint param_1)

{
  return param_1 < 0x11 || (param_1 - 200 < 6 || param_1 - 100 < 3);
}



/* Entry: 108f0eb28; end: 108f0eb8f; +[SCCORECodeProperties descriptor] */

void FUN_108f0eb28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ee90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcca90,
                        &PTR____CFConstantStringClassReference_110f03ef8,&PTR_DAT_11329d3a8,
                        &PTR_s_errorCode_11329d3c0,4,0x18,0x1c);
    puRam000000011372ee90 = puVar1;
  }
  return;
}



/* Entry: 108f0eb90; end: 108f0ebf7; +[SCMossAssetGroup descriptor] */

void FUN_108f0eb90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ee98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bccb30,
                        &PTR____CFConstantStringClassReference_110f03f18,&PTR_DAT_11329d440,
                        &PTR_DAT_11329d458,3,0x18,0x1c);
    puRam000000011372ee98 = puVar1;
  }
  return;
}



/* Entry: 108f0ebf8; end: 108f0ec5f; +[SCBoltUInt64Value descriptor] */

void FUN_108f0ebf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372eea0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bccbd0,
                        &PTR____CFConstantStringClassReference_110e95218,&PTR_DAT_11329d4b8,
                        &PTR_s_value_11329d4d0,1,0x10,0x1c);
    puRam000000011372eea0 = puVar1;
  }
  return;
}



/* Entry: 108f0ec60; end: 108f0ecc7; +[SCBoltApplicationVersion descriptor] */

void FUN_108f0ec60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372eea8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bccc20,
                        &PTR____CFConstantStringClassReference_110f03f38,&PTR_DAT_11329d4b8,
                        &PTR_DAT_11329d4f0,2,0xc,0x1c);
    puRam000000011372eea8 = puVar1;
  }
  return;
}



/* Entry: 108f0ecc8; end: 108f0ed2f; +[SCBoltContentDescriptor descriptor] */

void FUN_108f0ecc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372eeb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bccc70,
                        &PTR____CFConstantStringClassReference_110f03f58,&PTR_DAT_11329d4b8,
                        &PTR_DAT_11329d530,0xe,0x60,0x1c);
    puRam000000011372eeb0 = puVar1;
  }
  return;
}



/* Entry: 108f0ed30; end: 108f0edbb; +[SCBoltContentObject descriptor] */

undefined * FUN_108f0ed30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372eeb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bccd10,
                        &PTR____CFConstantStringClassReference_110ea5918,&PTR_DAT_11329d6f8,
                        &PTR_DAT_11329d710,5,0x30,0x1c);
    func_0x00010c229040();
    puRam000000011372eeb8 = puVar1;
  }
  return puRam000000011372eeb8;
}



/* Entry: 108f0edbc; end: 108f0ee4b;  */

undefined * FUN_108f0edbc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372eec0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f03f78,
                        &UNK_10dfa47f5,&UNK_10dfa6584,0x13a,FUN_108f0ee4c,0,&UNK_10dfa6a6c);
    do {
      if (puRam000000011372eec0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372eec0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372eec0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372eec0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372eec0;
}



/* Entry: 108f0ee4c; end: 108f0eeab;  */

undefined8 FUN_108f0ee4c(int param_1)

{
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x46:
  case 0x50:
  case 0x51:
  case 0x5a:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x95:
  case 0x96:
  case 0x97:
  case 0x98:
  case 0x99:
  case 0x9a:
  case 0x9b:
  case 0x9c:
  case 0x9d:
  case 0x9e:
  case 0x9f:
  case 0xa0:
  case 0xa1:
  case 0xa2:
  case 0xa3:
  case 0xa4:
  case 0xa5:
  case 0xa6:
  case 0xa7:
  case 0xa8:
  case 0xa9:
  case 0xaa:
  case 0xab:
  case 0xac:
  case 0xad:
  case 0xae:
  case 0xaf:
  case 0xb0:
  case 0xb1:
  case 0xb2:
  case 0xb3:
  case 0xb4:
  case 0xb5:
  case 0xb6:
  case 0xb7:
  case 0xb8:
  case 0xb9:
  case 0xba:
  case 0xbb:
  case 0xbc:
  case 0xbd:
  case 0xbe:
  case 0xbf:
  case 0xc0:
  case 0xc1:
  case 0xc2:
  case 0xc3:
  case 0xc4:
  case 0xc5:
  case 0xc6:
  case 199:
  case 200:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0x104:
  case 0x105:
  case 0x106:
  case 0x107:
  case 0x108:
  case 0x109:
  case 0x10a:
  case 0x10b:
  case 0x10c:
  case 0x10d:
  case 0x10e:
  case 0x10f:
  case 0x110:
  case 0x111:
  case 0x112:
  case 0x113:
  case 0x114:
  case 0x115:
  case 0x116:
  case 0x117:
  case 0x118:
  case 0x119:
  case 0x11a:
  case 0x11b:
  case 0x11c:
  case 0x11d:
  case 0x11e:
  case 0x11f:
  case 0x120:
  case 0x121:
  case 0x122:
  case 0x123:
  case 0x124:
  case 0x125:
  case 0x126:
  case 0x127:
  case 0x128:
  case 0x129:
  case 0x12a:
  case 299:
  case 300:
  case 0x12d:
  case 0x12e:
  case 0x12f:
  case 0x130:
  case 0x131:
  case 0x132:
  case 0x133:
  case 0x134:
  case 0x135:
  case 0x136:
  case 0x137:
  case 0x138:
  case 0x139:
  case 0x13a:
  case 0x13b:
  case 0x13c:
  case 0x13d:
  case 0x13e:
  case 0x13f:
  case 0x140:
  case 0x141:
  case 0x142:
  case 0x143:
  case 0x144:
  case 0x145:
  case 0x146:
  case 0x147:
  case 0x148:
  case 0x149:
  case 0x14a:
  case 0x14b:
  case 0x14c:
  case 0x14d:
  case 0x14e:
  case 0x14f:
  case 0x150:
  case 0x151:
  case 0x152:
  case 0x153:
  case 0x154:
  case 0x155:
  case 0x156:
  case 0x157:
  case 0x158:
  case 0x159:
  case 0x15a:
  case 0x15b:
  case 0x15c:
  case 0x15d:
  case 0x15e:
  case 0x15f:
  case 0x160:
  case 0x161:
  case 0x162:
  case 0x163:
  case 0x164:
  case 0x165:
  case 0x166:
  case 0x167:
  case 0x168:
  case 0x172:
  case 0x17c:
  case 0x186:
  case 400:
    goto LAB_108f0ee78;
  case 8:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5b:
  case 0xcf:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
  case 0xd8:
  case 0xd9:
  case 0xda:
  case 0xdb:
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
  case 0xe0:
  case 0xe1:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xed:
  case 0xee:
  case 0xef:
  case 0xf0:
  case 0xf1:
  case 0xf2:
  case 0xf3:
  case 0xf4:
  case 0xf5:
  case 0xf6:
  case 0xf7:
  case 0xf8:
  case 0xf9:
  case 0xfa:
  case 0xfb:
  case 0xfc:
  case 0xfd:
  case 0xfe:
  case 0xff:
  case 0x100:
  case 0x101:
  case 0x102:
  case 0x103:
  case 0x169:
  case 0x16a:
  case 0x16b:
  case 0x16c:
  case 0x16d:
  case 0x16e:
  case 0x16f:
  case 0x170:
  case 0x171:
  case 0x173:
  case 0x174:
  case 0x175:
  case 0x176:
  case 0x177:
  case 0x178:
  case 0x179:
  case 0x17a:
  case 0x17b:
  case 0x17d:
  case 0x17e:
  case 0x17f:
  case 0x180:
  case 0x181:
  case 0x182:
  case 0x183:
  case 0x184:
  case 0x185:
  case 0x187:
  case 0x188:
  case 0x189:
  case 0x18a:
  case 0x18b:
  case 0x18c:
  case 0x18d:
  case 0x18e:
  case 399:
    return 0;
  default:
    if (0x2f < param_1 - 2000U) {
      return 0;
    }
    if ((1L << ((ulong)(param_1 - 2000U) & 0x3f) & 0xfff7ff00001fU) == 0) {
      return 0;
    }
LAB_108f0ee78:
    return 1;
  }
}



/* Entry: 108f0eeac; end: 108f0ef27;  */

undefined * FUN_108f0eeac(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372eec8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f03f98,
                        &UNK_10dfa6dcc,&UNK_10dfa6e18,5,FUN_108f0ef28,0);
    do {
      if (puRam000000011372eec8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372eec8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372eec8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372eec8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372eec8;
}



/* Entry: 108f0ef28; end: 108f0ef3f;  */

bool FUN_108f0ef28(uint param_1)

{
  return param_1 < 4 || param_1 == 100;
}



/* Entry: 108f0ef40; end: 108f0f037; +[SCMossMediaBundle descriptor] */

void FUN_108f0ef40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372eed0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bccea0,
                        &PTR____CFConstantStringClassReference_110f03fb8,&PTR_DAT_11329d7b0,
                        &PTR_DAT_11329d7c8,9,0x38,0x1c);
    puRam000000011372eed0 = puVar1;
  }
  return;
}


