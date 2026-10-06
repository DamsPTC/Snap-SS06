/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107ba39ac; end: 107ba3acb; -[SCWebBrowserV11ViewController setIsOffScreen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba39ac(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276b828;
  if (*(byte *)(param_1 + lVar3) == param_3) {
    return;
  }
  *(char *)(param_1 + lVar3) = (char)param_3;
  func_0x00010bee4120();
  if (*(char *)(param_1 + lVar3) == '\x01') {
    lVar3 = (long)_DAT_11276b82c;
    func_0x00010bf94800(*(undefined8 *)(param_1 + lVar3));
    lVar1 = param_1;
    func_0x00010c0f97a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c133720();
    _objc_release(lVar1);
    func_0x00010c0f5da0(*(undefined8 *)(param_1 + _DAT_11276b78c));
    lVar1 = param_1;
    func_0x00010beb4960();
    if ((int)lVar1 != 0) {
      lVar1 = param_1 + _DAT_11276b75c;
      _objc_loadWeakRetained(lVar1);
      lVar2 = param_1;
      func_0x00010beead00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a3000(lVar1);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
  }
  else {
    func_0x00010bee96e0(param_1);
    lVar3 = (long)_DAT_11276b82c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf84510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b7e4),PTR_s_dismissSkoOverlayIn__1125beae8,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 107ba3acc; end: 107ba3b33; -[SCWebBrowserV11ViewController setIsOffScreenForOpera:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba3acc(long param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_11276b828);
  func_0x00010c1b2ea0();
  if (bVar1 == param_3) {
    return;
  }
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be51b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logCloseBrowser_112572070);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea2c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setCommonAndLogOpenBrowser_1125864c8);
  return;
}



/* Entry: 107ba3b34; end: 107ba3b53; -[SCWebBrowserV11ViewController _openBrowserSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba3b34(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_11276b728) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_11276b728) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bea2c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setCommonAndLogOpenBrowser_1125864c8);
  return;
}



/* Entry: 107ba3b54; end: 107ba3b73; -[SCWebBrowserV11ViewController _closeBrowserSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba3b54(long param_1)

{
  if (*(char *)(param_1 + _DAT_11276b728) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_11276b728) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be51b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logCloseBrowser_112572070);
    return;
  }
  return;
}



/* Entry: 107ba3b74; end: 107ba3d43; -[SCWebBrowserV11ViewController _setCommonAndLogOpenBrowser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba3b74(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar1 = param_1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_11276b830;
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  *(long *)(param_1 + lVar8) = lVar1;
  _objc_release(uVar6);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11276b7e0);
  uVar9 = *(undefined8 *)(param_1 + lVar8);
  lVar10 = (long)_DAT_11276b760;
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bef2500(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bef4d20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d6d70;
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010bef2500(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c247520();
  func_0x00010c14f8a0(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f5a0(uVar7,param_2,uVar9,uVar6,0,puVar5,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cba10);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126d6d78;
  _objc_alloc(PTR_PTR_1126d6d78);
  func_0x00010bff0a40();
  lVar1 = param_1;
  func_0x00010bf6eb40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010bef2500(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bf9c2c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21d340(puVar5,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar2);
  }
  else {
    func_0x00010c21d340(puVar5,param_2,lVar8);
  }
  _objc_release(lVar8);
  _objc_release(lVar1);
  func_0x00010be50e60(param_1,param_2,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 107ba3d44; end: 107ba3def; -[SCWebBrowserV11ViewController _logCloseBrowser] */

void FUN_107ba3d44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d6d78;
  _objc_alloc(PTR_PTR_1126d6d78);
  func_0x00010bff0a40();
  uVar2 = param_1;
  func_0x00010beeac40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21d340(puVar1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010be50e60(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ba3df0; end: 107ba3dff; -[SCWebBrowserV11ViewController _logBrowserAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba3df0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a0410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b7e0),PTR_s_logActionWithEvent__112605b10);
  return;
}



/* Entry: 107ba3e00; end: 107ba3eb7; -[SCWebBrowserV11ViewController _logSharedActionWithError:] */

void FUN_107ba3e00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d6d78;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff0a40();
  uVar2 = param_1;
  func_0x00010be228a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21d340(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c196ee0(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010be50e60(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ba3eb8; end: 107ba3ef3; -[SCWebBrowserV11ViewController dismiss] */

void FUN_107ba3eb8(undefined8 param_1)

{
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  func_0x00010be68180(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be097d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__endBrowserSessionAndDismiss__11255ff90,1);
  return;
}



/* Entry: 107ba3ef4; end: 107ba4047; -[SCWebBrowserV11ViewController isScrolledToTop] */

ulong FUN_107ba3ef4(double param_1,double param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = param_3;
  func_0x00010beeac40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  if (uVar6 == 0) {
    _objc_release(uVar1);
  }
  else {
    uVar2 = param_3;
    func_0x00010c152de0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010beeac40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c081d00(uVar2,param_4,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_release(uVar1);
    if ((int)uVar5 != 0) {
      func_0x00010c152de0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_3;
      func_0x00010c07d440();
      uVar1 = param_3;
      goto LAB_107ba4020;
    }
  }
  func_0x00010beeac40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf4cdc0(uVar1);
  func_0x00010befda00(uVar1);
  uVar6 = (ulong)(param_2 + param_1 <= 0.0);
LAB_107ba4020:
  _objc_release(uVar1);
  return uVar6;
}



/* Entry: 107ba4048; end: 107ba404b; -[SCWebBrowserV11ViewController pause] */

void FUN_107ba4048(void)

{
  return;
}



/* Entry: 107ba404c; end: 107ba40c3; -[SCWebBrowserV11ViewController _keyboardDidHide] */

void FUN_107ba404c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c1b2080(param_1,param_2,0);
  lVar1 = param_1;
  func_0x00010c0e4b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c0e4b40();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1d2830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setOnKeyboardHideBlock__112652430,0);
    return;
  }
  return;
}



/* Entry: 107ba40c4; end: 107ba40cb; -[SCWebBrowserV11ViewController _keyboardDidShow] */

void FUN_107ba40c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b2090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsKeyboardShowing__11264a248,1);
  return;
}



/* Entry: 107ba40cc; end: 107ba416f; -[SCWebBrowserV11ViewController _appDidEnterBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba40cc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276b838;
  if (*(char *)(param_1 + lVar3) == '\x01') {
    func_0x00010be097c0(param_1,param_2,1);
    *(undefined1 *)(param_1 + lVar3) = 0;
    *(undefined8 *)(param_1 + _DAT_11276b820) = 3;
  }
  else {
    uVar1 = *(ulong *)(param_1 + _DAT_11276b760);
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c075540();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1b2eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsOffScreen__11264a5d0,1);
      return;
    }
  }
  return;
}



/* Entry: 107ba4170; end: 107ba425f; -[SCWebBrowserV11ViewController _appWillResignActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba4170(undefined8 param_1,ulong param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  func_0x00010be6c620(param_2);
  uVar2 = param_2;
  func_0x00010bf99d00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  if ((uVar3 & 1) != 0) {
    bVar1 = *(byte *)(param_2 + (long)_DAT_11276b828);
    _objc_release(uVar2);
    if ((bVar1 & 1) != 0) {
      return;
    }
    uVar2 = param_2;
    func_0x00010bf99d00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becdd80(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a2f00(uVar2);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107ba4260; end: 107ba42cb; -[SCWebBrowserV11ViewController _appWillEnterForeground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba4260(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11276b760);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c075540();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1b2eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsOffScreen__11264a5d0,0);
  return;
}



/* Entry: 107ba42cc; end: 107ba43a7; -[SCWebBrowserV11ViewController loadPrefetchHints:baseURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba42cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276b788);
  puVar1 = PTR_PTR_1126d6d08;
  func_0x00010c09bec0(PTR_PTR_1126d6d08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  if ((*(byte *)(param_1 + _DAT_11276b83c) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_11276b83c) = 1;
    *(undefined1 *)(param_1 + _DAT_11276b840) = 1;
    func_0x00010beeac40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09b640();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ba43a8; end: 107ba44a7; -[SCWebBrowserV11ViewController _shouldInterceptForAmazonHandshake:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_107ba43a8(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + _DAT_11276b760);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c26d380();
  if (lVar5 == 1) {
    lVar5 = (long)_DAT_11276b844;
    lVar6 = *(long *)(param_1 + lVar5);
    _objc_release(lVar1);
    if (lVar6 != 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c06bf40(uVar2,param_2,param_3);
      if ((int)uVar2 != 0) {
        lVar1 = param_1;
        func_0x00010bf6eb40(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_3;
        func_0x00010c071ae0(param_3,param_2,lVar1);
        if ((uVar3 & 1) != 0) goto LAB_107ba4440;
        uVar2 = *(undefined8 *)(param_1 + lVar5);
        func_0x00010bf6eb40(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c06bf40(uVar2,param_2,param_1);
        uVar4 = (uint)uVar2 ^ 1;
        _objc_release(param_1);
        goto LAB_107ba4444;
      }
    }
    uVar4 = 0;
  }
  else {
LAB_107ba4440:
    uVar4 = 0;
LAB_107ba4444:
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 107ba44a8; end: 107ba47db; -[SCWebBrowserV11ViewController loadURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba44a8(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  
  _objc_retain(param_4);
  if (param_4 == 0) goto LAB_107ba47bc;
  uVar1 = param_2;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf9a760();
  uVar9 = param_2;
  if ((uVar3 & 1) == 0) {
    _objc_release(uVar2);
    _objc_release(uVar1);
LAB_107ba45d8:
    uVar1 = param_2;
    func_0x00010bf6eb40();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) {
LAB_107ba4634:
      func_0x00010bf779c0(*(undefined8 *)(param_2 + (long)_DAT_11276b788));
      puVar8 = PTR_PTR_1126d6d80;
      func_0x00010c09c5e0(PTR_PTR_1126d6d80);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dd180(param_2);
      _objc_release(puVar8);
    }
    else {
      lVar6 = *(long *)(param_2 + (long)_DAT_11276b760);
      func_0x00010bef2500();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c068d00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar6);
      _objc_release(uVar1);
      if (lVar7 != 0) goto LAB_107ba4634;
    }
    func_0x00010c1b8080(param_2);
    uVar1 = param_2;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf9a760();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 != 0) {
      uVar1 = param_2;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      _objc_opt_respondsToSelector();
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) {
        uVar1 = param_2;
        func_0x00010bf6b020(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9a820();
        _objc_release(uVar1);
      }
    }
    func_0x00010be4eca0(param_2);
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    uVar1 = param_2;
    func_0x00010bf99d00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) goto LAB_107ba47bc;
    func_0x00010bf99d00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becdd80(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a2f00(uVar9);
    _objc_release(param_2);
  }
  else {
    uVar3 = param_2;
    func_0x00010bf9a960();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c08fa60();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar8 = PTR_PTR_1126d6d80;
    if (uVar5 == 0) goto LAB_107ba45d8;
    uVar1 = param_2;
    func_0x00010bf9a960(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09c5e0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dd180(param_2);
    _objc_release(puVar8);
    _objc_release(uVar1);
    func_0x00010bf9a960(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be6d140(param_2);
  }
  _objc_release(uVar9);
LAB_107ba47bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107ba47dc; end: 107ba4977; -[SCWebBrowserV11ViewController loadHTMLString:baseURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba47dc(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11276b788);
  puVar1 = PTR_PTR_1126d6d08;
  func_0x00010c09b680(PTR_PTR_1126d6d08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar5,param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010beb4960();
  if ((int)lVar2 != 0) {
    lVar2 = param_1 + _DAT_11276b75c;
    _objc_loadWeakRetained(lVar2);
    lVar3 = param_1;
    func_0x00010beead00(param_1,param_2,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a3000(lVar2,param_2,param_1,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (param_4 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126b9450;
    func_0x00010bf8ecc0(PTR_PTR_1126b9450);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar1,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    param_4 = puVar1;
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_11276b848);
  *(undefined ***)(param_1 + _DAT_11276b848) = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cba28;
  _objc_release(uVar5);
  func_0x00010c18c240(param_1,param_2,param_4);
  func_0x00010c19cb60(param_1,param_2,param_4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11276b84c);
  *(undefined ***)(param_1 + _DAT_11276b84c) = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cba28;
  _objc_release(uVar5);
  func_0x00010beeac40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09b640();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ba4978; end: 107ba4c87; -[SCWebBrowserV11ViewController loadURLRequest:withCookies:] */

void FUN_107ba4978(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [136];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    func_0x00010be4ece0(param_1);
  }
  else {
    _objc_initWeak(auStack_108,param_1);
    puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_107ba4c88;
    puStack_120 = &UNK_110841fb0;
    _objc_copyWeak(auStack_110,auStack_108);
    _objc_retain(param_3);
    ppuVar3 = &puStack_138;
    lStack_118 = param_3;
    _objc_retainBlock();
    func_0x00010beeac40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c2a46c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfe4ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(param_1);
    lVar2 = param_4;
    func_0x00010bf529e0();
    if (lVar2 == 1) {
      lVar2 = param_4;
      func_0x00010bfb1920(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c183f80(uVar6);
    }
    else {
      _dispatch_group_create();
      _objc_retain(param_4);
      lVar7 = param_4;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar7 != 0) {
        lVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_4);
          }
          _dispatch_group_enter(lVar2);
          _objc_retain(lVar2);
          func_0x00010c183f80(uVar6);
          _objc_release(lVar2);
          lVar8 = lVar8 + 1;
        } while (lVar7 != lVar8);
        lVar7 = param_4;
        func_0x00010bf52a60();
      }
      _objc_release(param_4);
      func_0x000100bc0718(lVar2,PTR___dispatch_main_q_11034be20,ppuVar3);
    }
    _objc_release(lVar2);
    _objc_release(uVar6);
    _objc_release(ppuVar3);
    _objc_release(lStack_118);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_108);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_108);
  __Unwind_Resume();
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  func_0x00010be4ece0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ba4c88; end: 107ba4cbb;  */

void FUN_107ba4c88(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4ece0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ba4cbc; end: 107ba4cc3;  */

void FUN_107ba4cbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107ba4cc4; end: 107ba4dff; -[SCWebBrowserV11ViewController _logSkoPresentEvent] */

void FUN_107ba4cc4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  lVar1 = param_2;
  func_0x00010becdd80();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (lVar2 = param_2, func_0x00010beb4980(), (int)lVar2 != 0)) {
    puVar3 = PTR_PTR_1126b9040;
    _objc_alloc(PTR_PTR_1126b9040);
    uVar5 = *(undefined8 *)(lVar1 + 8);
    _objc_retain(uVar5);
    lVar2 = param_2;
    func_0x00010bdfb2e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b891d30(0,0,0,0,param_1,puVar3,uVar5,3,0x24,0,lVar2,0);
    _objc_release(lVar2);
    _objc_release(uVar5);
    puVar4 = PTR_PTR_1126b9048;
    _objc_alloc(PTR_PTR_1126b9048);
    func_0x00010c000060();
    func_0x00010bf99d00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a3040();
    _objc_release(param_2);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107ba4e00; end: 107ba4ebb; -[SCWebBrowserV11ViewController _onUpdatePrivacyFromSource:consentValue:] */

void FUN_107ba4e00(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107ba4ebc;
  puStack_50 = &UNK_110912568;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  uStack_3c = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107ba4ebc; end: 107ba4f2b;  */

void FUN_107ba4ebc(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 0) {
      func_0x00010be680e0(lVar2);
    }
    else if (iVar1 == 1) {
      func_0x00010be6c260(lVar2,param_2,*(undefined1 *)(param_1 + 0x2c));
    }
    else if (iVar1 == 2) {
      func_0x00010be6c200(lVar2,param_2,*(undefined1 *)(param_1 + 0x2c));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107ba4f2c; end: 107ba5087; -[SCWebBrowserV11ViewController _logPrivacyPromptEventWithEventType:consentValue:] */

void FUN_107ba4f2c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  lVar1 = param_2;
  func_0x00010becdd80();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (lVar2 = param_2, func_0x00010beb4980(), (int)lVar2 != 0)) {
    puVar3 = PTR_PTR_1126b9040;
    _objc_alloc(PTR_PTR_1126b9040);
    uVar5 = *(undefined8 *)(lVar1 + 8);
    _objc_retain(uVar5);
    lVar2 = param_2;
    func_0x00010bdfb2e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b891d30(0,0,0,0,param_1,puVar3,uVar5,param_4,0,0,lVar2,param_5);
    _objc_release(lVar2);
    _objc_release(uVar5);
    puVar4 = PTR_PTR_1126b9048;
    _objc_alloc(PTR_PTR_1126b9048);
    func_0x00010c000060();
    func_0x00010bf99d00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a3040();
    _objc_release(param_2);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107ba5088; end: 107ba524b; -[SCWebBrowserV11ViewController _viewIsOnScreen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba5088(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  uVar1 = param_2;
  func_0x00010bf99d00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = param_2;
    func_0x00010bf99d00(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010becdd80(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a2f00(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  uVar1 = param_2;
  func_0x00010beb4960();
  if ((int)uVar1 != 0) {
    lVar5 = param_2 + (long)_DAT_11276b75c;
    _objc_loadWeakRetained(lVar5);
    uVar1 = param_2;
    func_0x00010beead00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a3000(lVar5);
    _objc_release(uVar1);
    _objc_release(lVar5);
  }
  func_0x00010be68680(param_1,param_2);
  func_0x00010be6c600(param_1,param_2);
  if ((*(byte *)(param_2 + (long)_DAT_11276b850) & 1) == 0) {
    *(undefined1 *)(param_2 + (long)_DAT_11276b850) = 1;
    uVar4 = *(undefined8 *)(param_2 + (long)_DAT_11276b788);
    puVar3 = PTR_PTR_1126d6d08;
    func_0x00010c0e61c0(PTR_PTR_1126d6d08);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar4);
    _objc_release(puVar3);
    lVar5 = (long)_DAT_11276b854;
    if (((*(byte *)(param_2 + lVar5) & 1) == 0) &&
       (uVar1 = param_2, func_0x00010beb4f60(), (int)uVar1 != 0)) {
      func_0x00010be573a0(param_2);
      *(undefined1 *)(param_2 + lVar5) = 1;
    }
  }
  return;
}



/* Entry: 107ba524c; end: 107ba52e3; -[SCWebBrowserV11ViewController _endBrowserSessionAndDismiss:] */

void FUN_107ba524c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0f97a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c133720();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfc8b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c133740();
  _objc_release(uVar1);
  func_0x00010be8fb60(param_1);
  uVar1 = param_1;
  func_0x00010beeac40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94800();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be02290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismiss__11255e240,param_3);
  return;
}



/* Entry: 107ba52e4; end: 107ba53b3; -[SCWebBrowserV11ViewController _reportInitialPageLoadErrors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba52e4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11276b7a0;
  if ((*(long *)(param_1 + lVar4) != 0) || (*(int *)(param_1 + (long)_DAT_11276b858) != 0)) {
    uVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      uVar1 = param_1;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010bf51e00(uVar3);
      func_0x00010c2a2ec0(uVar1);
      _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 107ba53b4; end: 107ba54b7; -[SCWebBrowserV11ViewController _loadURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba53b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d6d08;
  uVar4 = *(undefined8 *)(param_1 + _DAT_11276b788);
  _objc_retain(param_3);
  func_0x00010c09c5a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar4,param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010beb4960();
  if ((int)lVar2 != 0) {
    lVar2 = param_1 + _DAT_11276b75c;
    _objc_loadWeakRetained(lVar2);
    lVar3 = param_1;
    func_0x00010beead00(param_1,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a3000(lVar2,param_2,param_1,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  func_0x00010c18c240(param_1,param_2,param_3);
  puVar1 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
  func_0x00010c137160(PTR__OBJC_CLASS___NSURLRequest_1126aede0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010be4ece0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ba54b8; end: 107ba56d7; -[SCWebBrowserV11ViewController _dismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba54b8(undefined8 param_1,ulong param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x00010c1afac0(param_2,param_3,1);
  uVar1 = *(undefined8 *)(param_2 + (long)_DAT_11276b7c0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c266380();
  _objc_release(uVar1);
  uVar2 = param_2;
  func_0x00010bf99d00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    uVar2 = param_2;
    func_0x00010bf99d00(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010becdd80(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a2f00(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  func_0x00010be6c620(param_2);
  _objc_initWeak(auStack_58,param_2);
  if ((param_4 == 0) || (*(long *)(param_2 + (long)_DAT_11276b7b4) == 0)) {
    uVar2 = param_2;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      func_0x00010bf6b020(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a3120();
      _objc_release(param_2);
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + (long)_DAT_11276b7b8);
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c0f7fc0(uVar1);
    _objc_destroyWeak(auStack_60);
  }
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 107ba56d8; end: 107ba5703;  */

void FUN_107ba56d8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be71b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ba5704; end: 107ba57b3; -[SCWebBrowserV11ViewController _performDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba5704(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b7b4);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf6f440(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 107ba57b4; end: 107ba57df;  */

void FUN_107ba57b4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be284a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ba57e0; end: 107ba585f; -[SCWebBrowserV11ViewController _handleDidDismiss] */

void FUN_107ba57e0(ulong param_1)

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
    func_0x00010c2a3120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107ba5860; end: 107ba5d5b; -[SCWebBrowserV11ViewController _loadURLWithRequest:] */

/* WARNING: Possible PIC construction at 0x000107ba5a1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107ba5a20) */
/* WARNING: Removing unreachable block (ram,0x000107ba5a4c) */
/* WARNING: Removing unreachable block (ram,0x000107ba59b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba5860(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_3;
  func_0x00010c0d3c80();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276b84c);
  *(undefined8 *)(param_1 + _DAT_11276b84c) = 0;
  _objc_release(uVar3);
  if (*(long *)(param_1 + _DAT_11276b85c) == 0) {
LAB_107ba5930:
    lVar4 = param_1;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar5;
    func_0x00010c064340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = lVar11;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      func_0x00010bf45e20(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef2500();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c064340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      goto code_r0x00010befc820;
    }
    _objc_release(lVar11);
  }
  else {
    lVar4 = param_1;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar5;
    func_0x00010bf02140();
    _objc_release(lVar5);
    _objc_release(lVar4);
    if ((int)lVar11 != 0) goto LAB_107ba5930;
  }
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276b844);
    func_0x00010bfe4be0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar8);
    func_0x00010bf97ce0(uVar3);
    _objc_release(uVar3);
    _objc_release(lVar8);
  }
  lVar11 = *(long *)(param_1 + _DAT_11276b76c);
  _objc_retain(lVar11);
  lVar4 = lVar11;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  puVar1 = PTR_s_browserDidStartLoadingURL_1125a5f48;
  while (PTR_s_browserDidStartLoadingURL_1125a5f48 = puVar1, lVar4 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar11);
      }
      uVar12 = *(ulong *)(lVar10 * 8);
      uVar6 = uVar12;
      _objc_opt_respondsToSelector(uVar12,puVar1);
      if ((uVar6 & 1) != 0) {
        func_0x00010bf21680(uVar12);
      }
      lVar10 = lVar10 + 1;
    } while (lVar4 != lVar10);
    lVar4 = lVar11;
    func_0x00010bf52a60();
    puVar1 = PTR_s_browserDidStartLoadingURL_1125a5f48;
  }
  _objc_release(lVar11);
  lVar7 = *(long *)(param_1 + _DAT_11276b844);
  func_0x00010bfe4b80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010beeac40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar5;
  func_0x00010c2a46c0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar11;
  func_0x00010bfe4ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(lVar5);
  _objc_release(lVar4);
  if (((lVar2 == 0) || (lVar7 == 0)) || (lVar10 == 0)) {
    func_0x00010beeac40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar8;
    func_0x00010bf51e00(lVar8);
    func_0x00010c09c060(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
  }
  else {
    lVar4 = lVar7;
    func_0x00010bf47020(lVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar8);
    func_0x00010c297260(lVar4);
    _objc_release(lVar4);
    param_1 = lVar8;
  }
  _objc_release(param_1);
  _objc_release(lVar10);
  _objc_release(lVar7);
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)(param_3 + 0x20);
code_r0x00010befc820:
                    /* WARNING: Could not recover jumptable at 0x00010befc830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar8,PTR_s_addValue_forHTTPHeaderField__11259cbb0);
  return;
}



/* Entry: 107ba5d5c; end: 107ba5d67;  */

void FUN_107ba5d5c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010befc830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addValue_forHTTPHeaderField__11259cbb0,param_3,
             param_2);
  return;
}



/* Entry: 107ba5d68; end: 107ba5dc3;  */

void FUN_107ba5d68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010beeac40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  func_0x00010c09c060(uVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ba5dc4; end: 107ba6117; -[SCWebBrowserV11ViewController _showUnsafeURLViewForType:] */

/* WARNING: Possible PIC construction at 0x000107ba5e38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107ba5e3c) */
/* WARNING: Removing unreachable block (ram,0x000107ba6114) */
/* WARNING: Removing unreachable block (ram,0x000107ba60f4) */

void FUN_107ba5dc4(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3e80;
  _objc_alloc(PTR_PTR_1126c3e80);
  func_0x00010c00b240();
  func_0x00010c1f5140(param_1);
  func_0x00010c219b60(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,puVar1,PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107ba6118; end: 107ba6123;  */

void FUN_107ba6118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107ba6124; end: 107ba6237; -[SCWebBrowserV11ViewController _updateProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba6124(double param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((*(byte *)(param_2 + (long)_DAT_11276b840) & 1) == 0) {
    if (*(long *)(param_2 + (long)_DAT_11276b848) == 0) {
      param_1 = 0.05;
    }
    else {
      uVar1 = param_2;
      func_0x00010beeac40(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf997e0();
      _objc_release(uVar1);
      func_0x00010bed9b00(param_1,param_2);
    }
    if (*(double *)(param_2 + (long)_DAT_11276b860) != param_1) {
      *(double *)(param_2 + (long)_DAT_11276b860) = param_1;
      func_0x00010bede000(param_1,param_2);
      uVar1 = param_2;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      _objc_opt_respondsToSelector();
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) {
        func_0x00010bf6b020(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2a2f80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(param_2);
        return;
      }
    }
  }
  return;
}



/* Entry: 107ba6238; end: 107ba6283; -[SCWebBrowserV11ViewController _updateProgress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba6238(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276b7fc);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ba6284; end: 107ba6373; -[SCWebBrowserV11ViewController _updateInitialLandingPageEstimatedProgress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba6284(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_2;
  func_0x00010bfaf0a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010beeac40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010bfaf0a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c071ae0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (((int)lVar5 != 0) && (*(double *)(param_2 + _DAT_11276b72c) < param_1)) {
      *(double *)(param_2 + _DAT_11276b72c) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010be840b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,param_2,PTR_s__publishLoadProgressUpdateEvent__11257e9c8);
      return;
    }
  }
  return;
}



/* Entry: 107ba6374; end: 107ba644b; -[SCWebBrowserV11ViewController _publishLoadProgressUpdateEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba6374(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2;
  func_0x00010bf99d00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    uVar1 = param_2;
    func_0x00010bf99d00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becdd80(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a2f00(uVar1);
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107ba644c; end: 107ba6633; -[SCWebBrowserV11ViewController reset:] */

/* WARNING: Possible PIC construction at 0x000107ba6610: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107ba6614) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba644c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010beb4960();
  if ((int)lVar1 != 0) {
    lVar1 = param_1 + _DAT_11276b75c;
    _objc_loadWeakRetained(lVar1);
    lVar5 = param_1;
    func_0x00010beead00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a3000(lVar1);
    _objc_release(lVar5);
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00010beeac40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c256160();
  _objc_release(lVar1);
  if (param_3 != 0) {
    func_0x00010c139fa0(param_1);
    lVar5 = (long)_DAT_11276b7ac;
    lVar1 = *(long *)(param_1 + lVar5);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar5));
    }
  }
  lVar1 = param_1;
  func_0x00010beeac40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (lVar5 != 0) {
    puVar2 = PTR_PTR_1126b9450;
    func_0x00010bf8ecc0(PTR_PTR_1126b9450);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4eca0(param_1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  func_0x00010c18c240(param_1);
  *(undefined1 *)(param_1 + _DAT_11276b81c) = 0;
  *(undefined8 *)(param_1 + _DAT_11276b820) = 0;
  uVar4 = *(undefined8 *)(param_1 + _DAT_11276b864);
  *(undefined8 *)(param_1 + _DAT_11276b864) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11276b848);
  *(undefined8 *)(param_1 + _DAT_11276b848) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11276b84c);
  *(undefined8 *)(param_1 + _DAT_11276b84c) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11276b868);
  *(undefined8 *)(param_1 + _DAT_11276b868) = 0;
  _objc_release(uVar4);
  func_0x00010c085c80(param_1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107ba6634; end: 107ba66e7; -[SCWebBrowserV11ViewController _updateVisibleQueueStatus] */

void FUN_107ba6634(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010c083500();
  uVar3 = param_1;
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c083860();
    if ((uVar1 & 1) != 0) {
      return;
    }
  }
  else {
    uVar1 = param_1;
    func_0x00010c078f40();
    uVar2 = param_1;
    func_0x00010c083860();
    if ((int)uVar1 == (int)uVar2) {
      return;
    }
    if ((int)uVar1 == 0) {
      func_0x00010c11e060(param_1);
      _objc_retainAutoreleasedReturnValue();
      _dispatch_resume();
      uVar4 = 0;
      goto LAB_107ba66c8;
    }
  }
  func_0x00010c11e060(param_1);
  _objc_retainAutoreleasedReturnValue();
  _dispatch_suspend();
  uVar4 = 1;
LAB_107ba66c8:
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c1b5ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsVisibleQueueSuspended__11264b0d8,uVar4);
  return;
}



/* Entry: 107ba66e8; end: 107ba6743; -[SCWebBrowserV11ViewController estimatedProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ba66e8(undefined8 param_1,long param_2)

{
  if ((*(byte *)(param_2 + _DAT_11276b840) & 1) != 0) {
    return 0;
  }
  func_0x00010beeac40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf997e0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 107ba6744; end: 107ba67a7; -[SCWebBrowserV11ViewController adId] */

void FUN_107ba6744(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107ba67a8; end: 107ba680b; -[SCWebBrowserV11ViewController adServeItemId] */

void FUN_107ba67a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef4d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107ba680c; end: 107ba6bd3; -[SCWebBrowserV11ViewController _trackCommon:eventType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba680c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
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
  long lVar30;
  long lVar31;
  
  lVar31 = (long)_DAT_11276b760;
  uVar1 = *(undefined8 *)(param_2 + lVar31);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef47c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_107bbeb74(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b9150;
  _objc_alloc();
  puVar5 = *(undefined **)(param_2 + lVar31);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bef47c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  if (puVar6 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar8 = *(undefined8 *)(param_2 + lVar31);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010bef4d20();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + lVar31);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar9;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + lVar31);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c0f12c0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = (long)_DAT_11276b7d8;
  uVar12 = *(undefined8 *)(param_2 + lVar30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_2 + lVar31);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bef47c0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar12;
  func_0x00010c278840();
  uVar16 = *(undefined8 *)(param_2 + lVar30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_2 + lVar31);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010bef47c0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar16;
  func_0x00010c29e180();
  uVar20 = *(undefined8 *)(param_2 + lVar31);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00010c068d00();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_2 + lVar31);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar22;
  func_0x00010c2415a0();
  uVar24 = *(undefined8 *)(param_2 + lVar31);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar24;
  func_0x00010bef60a0();
  uVar26 = *(undefined8 *)(param_2 + lVar31);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar26;
  func_0x00010bef4240();
  uVar28 = *(undefined8 *)(param_2 + lVar31);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar28;
  func_0x00010c247520();
  FUN_107bbec4c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b88f85c(param_1,puVar4,uVar3,puVar7,uVar2,uVar1,uVar11,uVar15,uVar19,0,uVar21,uVar23,
                      uVar25,3,3,uVar27,uVar29);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar26);
  _objc_release(uVar24);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar1);
  _objc_release(uVar9);
  _objc_release(uVar2);
  _objc_release(uVar8);
  if (puVar6 == (undefined *)0x0) {
    _objc_release(puVar7);
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107ba6bd4; end: 107ba712b; -[SCWebBrowserV11ViewController _webviewConfig:eventType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba6bd4(undefined8 param_1,undefined *param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
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
  long lVar37;
  
  lVar37 = (long)_DAT_11276b760;
  puVar1 = *(undefined **)(param_2 + lVar37);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bef47c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = (undefined *)0x0;
  if (puVar2 != (undefined *)0x0) {
    lVar3 = *(long *)(param_2 + lVar37);
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bef4d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (lVar4 == 0) {
      puVar6 = (undefined *)0x0;
      goto LAB_107ba7104;
    }
    puVar1 = PTR_PTR_1126b9450;
    func_0x00010bf8ecc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(param_2 + lVar37);
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010bf9c2c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar5);
    if (lVar3 == 0) {
      puVar6 = param_2;
      func_0x00010bf6eb40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar6;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar6);
      if (puVar2 != (undefined *)0x0) {
        puVar6 = param_2;
        func_0x00010bf6eb40();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar6;
        func_0x00010beec820();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar1;
        puVar1 = puVar2;
        goto LAB_107ba6d80;
      }
    }
    else {
      puVar6 = *(undefined **)(param_2 + lVar37);
      func_0x00010bef2500();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf9c2c0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar7;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = puVar2;
LAB_107ba6d80:
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
    puVar2 = PTR_PTR_1126b9168;
    _objc_alloc();
    uVar8 = *(undefined8 *)(param_2 + lVar37);
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bef47c0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_2 + lVar37);
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bef4d20();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_2 + lVar37);
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_2 + lVar37);
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010c278820();
    uVar16 = *(undefined8 *)(param_2 + lVar37);
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010c29e160();
    uVar18 = *(undefined8 *)(param_2 + lVar37);
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x00010c068d00();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(param_2 + lVar37);
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar20;
    func_0x00010c2415a0();
    uVar22 = *(undefined8 *)(param_2 + lVar37);
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar22;
    func_0x00010bef60a0();
    uVar24 = *(undefined8 *)(param_2 + lVar37);
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar24;
    func_0x00010bef4240();
    uVar26 = *(undefined8 *)(param_2 + lVar37);
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar26;
    func_0x00010bfcc820();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = *(undefined8 *)(param_2 + lVar37);
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    uVar29 = uVar28;
    func_0x00010bfcc800();
    _objc_retainAutoreleasedReturnValue();
    uVar30 = *(undefined8 *)(param_2 + lVar37);
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    uVar31 = uVar30;
    func_0x00010c098d20();
    _objc_retainAutoreleasedReturnValue();
    uVar32 = *(undefined8 *)(param_2 + lVar37);
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar32;
    func_0x00010c098d00();
    _objc_retainAutoreleasedReturnValue();
    uVar34 = *(undefined8 *)(param_2 + lVar37);
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06b9e0();
    uVar35 = *(undefined8 *)(param_2 + lVar37);
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c247520();
    uVar36 = *(undefined8 *)(param_2 + lVar37);
    func_0x00010bef2500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf80ee0();
    func_0x00010b88ed4c(param_1,puVar2,uVar9,uVar11,uVar13,uVar15,uVar17,uVar19,uVar21,uVar23,uVar25
                        ,puVar1,0,uVar27,uVar29,uVar31,uVar33,param_4 == 2);
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
    _objc_release(uVar24);
    _objc_release(uVar22);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar16);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    puVar6 = PTR_PTR_1126d6d88;
    _objc_alloc(PTR_PTR_1126d6d88);
    func_0x00010c000e80();
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
LAB_107ba7104:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107ba712c; end: 107ba7137; -[SCWebBrowserV11ViewController _webviewOperationEventWithEventType:] */

void FUN_107ba712c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010beead30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__webviewOperationEventWithEventT_1125984f0,param_3,0,0);
  return;
}



/* Entry: 107ba7138; end: 107ba7197; -[SCWebBrowserV11ViewController _webviewOperationEventWithInitWebviewEvent] */

void FUN_107ba7138(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b9450;
  func_0x00010bf8ecc0(PTR_PTR_1126b9450);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beead20(param_1,param_2,1,0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107ba7198; end: 107ba71a7; -[SCWebBrowserV11ViewController _webviewOperationEventNavigationFailWithnavigationErrorCode:] */

void FUN_107ba7198(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010beead30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__webviewOperationEventWithEventT_1125984f0,8,param_3,0);
  return;
}



/* Entry: 107ba71a8; end: 107ba7417; -[SCWebBrowserV11ViewController _webviewOperationEventWithEventType:navigationErrorCode:url:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba71a8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  puVar5 = PTR_PTR_1126afec0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bf604c0(puVar5);
  lVar8 = (long)_DAT_11276b760;
  uVar2 = *(undefined8 *)(param_2 + lVar8);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bef47c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  FUN_107bbeb74(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  uVar4 = *(undefined8 *)(param_2 + lVar8);
  func_0x00010bef2500(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf09780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126b9158;
  _objc_alloc(PTR_PTR_1126b9158);
  if (param_6 == (undefined *)0x0) {
    uStack_88 = *(undefined **)(param_2 + _DAT_11276b82c);
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = uStack_88;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 == (undefined *)0x0) {
      puVar7 = PTR_PTR_1126b9450;
      func_0x00010bf8ecc0(PTR_PTR_1126b9450);
      _objc_retainAutoreleasedReturnValue();
      uStack_90 = (undefined *)0x0;
      bVar1 = true;
    }
    else {
      bVar1 = false;
      uStack_90 = puVar7;
    }
  }
  else {
    bVar1 = false;
    puVar7 = param_6;
  }
  uVar9 = *(undefined8 *)(param_2 + _DAT_11276b84c);
  uVar2 = *(undefined8 *)(param_2 + _DAT_11276b814);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf8bae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8baa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b893eb0(param_1,puVar6,uVar3,param_4,puVar7,uVar9,param_5,puVar5,uVar4,param_2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(uVar2);
  if (bVar1) {
    _objc_release(puVar7);
  }
  if (param_6 == (undefined *)0x0) {
    _objc_release(uStack_90);
    _objc_release(uStack_88);
  }
  _objc_release(puVar5);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107ba7418; end: 107ba7567; -[SCWebBrowserV11ViewController dynamicScriptConfigString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba7418(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar9 = (long)_DAT_11276b760;
  lVar1 = *(long *)(param_1 + lVar9);
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf8ba60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
  if (lVar2 == 0) {
    puVar7 = *(undefined **)(param_1 + _DAT_11276b814);
    func_0x00010c269d40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf8bac0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010bef2500(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf8ba60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf649c0(puVar7,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126d6d90;
    _objc_alloc(PTR_PTR_1126d6d90);
    func_0x00010c008360();
    puVar6 = *(undefined **)(param_1 + _DAT_11276b814);
    func_0x00010c269d40(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf8bac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107ba7568; end: 107ba75e3; -[SCWebBrowserV11ViewController dynamicScriptConfig] */

void FUN_107ba7568(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010bf8baa0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d6d90;
  _objc_alloc(PTR_PTR_1126d6d90);
  func_0x00010c008360();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107ba75e4; end: 107ba763f; -[SCWebBrowserV11ViewController enableExtendedLifecycleV2] */

undefined8 FUN_107ba75e4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bef2500();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06b9e0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107ba7640; end: 107ba791f; -[SCWebBrowserV11ViewController observeValueForKeyPath:ofObject:change:context:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba7640(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_s_estimatedProgress_1125c3fa0;
  _NSStringFromSelector(PTR_s_estimatedProgress_1125c3fa0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)uVar2 == 0) {
    puVar1 = PTR_s_title_112679e90;
    _NSStringFromSelector(PTR_s_title_112679e90);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar1);
    if ((int)uVar2 == 0) {
      puVar1 = PTR_s_URL_11254e480;
      _NSStringFromSelector(PTR_s_URL_11254e480);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar1);
      if ((int)uVar2 == 0) {
        puVar1 = PTR_s_canGoBack_1125a8c58;
        _NSStringFromSelector(PTR_s_canGoBack_1125a8c58);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010c0720c0();
        if ((int)uVar2 == 0) {
          puVar6 = PTR_s_canGoForward_1125a8c60;
          _NSStringFromSelector(PTR_s_canGoForward_1125a8c60);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_3;
          func_0x00010c0720c0();
          _objc_release(puVar6);
          _objc_release(puVar1);
          if ((int)uVar2 == 0) {
            puStack_88 = PTR_PTR_1126fa170;
            lStack_90 = param_1;
            _objc_msgSendSuper2(&lStack_90,PTR_s_observeValueForKeyPath_ofObject__112615e88,param_3,
                                param_4,param_5,param_6);
            goto LAB_107ba78d8;
          }
        }
        else {
          _objc_release(puVar1);
        }
        func_0x00010be33560(param_1);
      }
      else {
        uVar5 = *(undefined8 *)(param_1 + _DAT_11276b814);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar5;
        func_0x00010bf91420();
        _objc_release(uVar5);
        if ((int)uVar2 == 0) {
          func_0x00010be335c0(param_1);
        }
        else {
          func_0x00010be335e0();
        }
      }
    }
    else {
      lVar3 = param_1;
      func_0x00010beeac40(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bed9240(param_1);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    func_0x00010c11e060(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_107ba7920;
    puStack_68 = &UNK_1108434b0;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010007380c(param_1,&puStack_80);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
LAB_107ba78d8:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ba7920; end: 107ba794b;  */

void FUN_107ba7920(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beddfe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ba794c; end: 107ba79a3; -[SCWebBrowserV11ViewController _updateHeaderTitle:] */

void FUN_107ba794c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x00010c08fa60();
  if (param_3 != 0) {
    uVar1 = param_1;
    func_0x00010beeac40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee2f60(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107ba79a4; end: 107ba7d63; -[SCWebBrowserV11ViewController _handleWebViewURLChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba79a4(undefined *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar12 = (long)_DAT_11276b81c;
  if ((param_1[lVar12] & 1) != 0) {
    return;
  }
  puVar2 = param_1;
  func_0x00010bfaf0a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  puVar3 = param_1;
  func_0x00010beeac40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) goto LAB_107ba7d18;
  puVar5 = param_1;
  func_0x00010beeac40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b9450;
  func_0x00010bf8ecc0(PTR_PTR_1126b9450);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c0720c0();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (((ulong)puVar9 & 1) != 0) {
    return;
  }
  puVar2 = param_1;
  func_0x00010beeac40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x00010bfaf0a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c071ae0();
  if (((ulong)puVar5 & 1) == 0) {
    if ((param_1[_DAT_11276b86c] & 1) == 0) {
      bVar1 = param_1[_DAT_11276b870];
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      if ((bVar1 & 1) == 0) goto LAB_107ba7b08;
    }
    else {
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    param_1[lVar12] = 1;
    puVar2 = PTR_PTR_1126d6d80;
    func_0x00010c260b20(PTR_PTR_1126d6d80);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dd180(param_1);
    _objc_release(puVar2);
    func_0x00010be84600(param_1);
  }
  else {
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
LAB_107ba7b08:
    param_1[lVar12] = 0;
  }
  puVar2 = param_1;
  func_0x00010beb4920();
  if ((int)puVar2 != 0) {
    uVar10 = *(undefined8 *)(param_1 + _DAT_11276b814);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf8f4e0();
    _objc_release(uVar10);
    if ((int)uVar11 != 0) {
      func_0x00010bf604c0(PTR_PTR_1126afec0);
      puVar2 = param_1;
      func_0x00010becdd80();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126d6d98;
      _objc_alloc(PTR_PTR_1126d6d98);
      puVar4 = PTR_PTR_1126d6da0;
      _objc_alloc(PTR_PTR_1126d6da0);
      if (puVar2 == (undefined *)0x0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined8 *)(puVar2 + 8);
      }
      _objc_retain(uVar11);
      puVar5 = param_1;
      func_0x00010beeac40(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + _DAT_11276b82c);
      func_0x00010c296f60(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b892220(puVar4,uVar11,4,0,&PTR____CFConstantStringClassReference_110eb1918,puVar7,
                          uVar10);
      func_0x00010c000060(puVar3);
      _objc_release(puVar4);
      _objc_release(uVar10);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(uVar11);
      func_0x00010bf99d00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e7b20();
      _objc_release(param_1);
LAB_107ba7d18:
      _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
  }
  return;
}



/* Entry: 107ba7d64; end: 107ba8123; -[SCWebBrowserV11ViewController _handleWebViewURLChangeV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba7d64(undefined *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar2 = param_1;
  func_0x00010bfaf0a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  puVar3 = param_1;
  func_0x00010beeac40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) goto LAB_107ba80d8;
  puVar5 = param_1;
  func_0x00010beeac40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b9450;
  func_0x00010bf8ecc0(PTR_PTR_1126b9450);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c0720c0();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (((ulong)puVar9 & 1) != 0) {
    return;
  }
  puVar2 = param_1;
  func_0x00010beeac40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x00010bfaf0a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c071ae0();
  if (((ulong)puVar5 & 1) == 0) {
    if ((param_1[_DAT_11276b86c] & 1) == 0) {
      bVar1 = param_1[_DAT_11276b870];
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      if ((bVar1 & 1) == 0) goto LAB_107ba7eb8;
    }
    else {
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    param_1[_DAT_11276b81c] = 1;
    puVar2 = PTR_PTR_1126d6d80;
    func_0x00010c260b20(PTR_PTR_1126d6d80);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dd180(param_1);
    _objc_release(puVar2);
    func_0x00010be84600(param_1);
  }
  else {
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
LAB_107ba7eb8:
    param_1[_DAT_11276b81c] = 0;
  }
  puVar2 = param_1;
  func_0x00010beb4920();
  if ((int)puVar2 != 0) {
    uVar10 = *(undefined8 *)(param_1 + _DAT_11276b814);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf8f4e0();
    _objc_release(uVar10);
    if ((int)uVar11 != 0) {
      func_0x00010bf604c0(PTR_PTR_1126afec0);
      puVar2 = param_1;
      func_0x00010becdd80();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126d6d98;
      _objc_alloc(PTR_PTR_1126d6d98);
      puVar4 = PTR_PTR_1126d6da0;
      _objc_alloc(PTR_PTR_1126d6da0);
      if (puVar2 == (undefined *)0x0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined8 *)(puVar2 + 8);
      }
      _objc_retain(uVar11);
      puVar5 = param_1;
      func_0x00010beeac40(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + _DAT_11276b82c);
      func_0x00010c296f60(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b892220(puVar4,uVar11,4,0,&PTR____CFConstantStringClassReference_110eb1918,puVar7,
                          uVar10);
      func_0x00010c000060(puVar3);
      _objc_release(puVar4);
      _objc_release(uVar10);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(uVar11);
      func_0x00010bf99d00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e7b20();
      _objc_release(param_1);
LAB_107ba80d8:
      _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
  }
  return;
}



/* Entry: 107ba8124; end: 107ba81fb; -[SCWebBrowserV11ViewController _publishWebViewBrowseEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba8124(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2;
  func_0x00010bf99d00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    uVar1 = param_2;
    func_0x00010bf99d00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becdd80(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a2f00(uVar1);
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107ba81fc; end: 107ba81ff; -[SCWebBrowserV11ViewController _handleWebViewBackForwardStateChange] */

void FUN_107ba81fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be62470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__navigationChanged_1125762b8);
  return;
}



/* Entry: 107ba8200; end: 107ba82ab; -[SCWebBrowserV11ViewController _navigationChanged] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba8200(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126d6da8;
  _objc_alloc(PTR_PTR_1126d6da8);
  lVar2 = param_1;
  func_0x00010beeac40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf2cae0();
  lVar4 = param_1;
  func_0x00010beeac40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf2cac0();
  func_0x00010bffc3a0(puVar1,param_2,lVar3,lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11276b7f8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ba82ac; end: 107ba83fb; -[SCWebBrowserV11ViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba82ac(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010c256160(*(undefined8 *)(param_1 + _DAT_11276b82c));
  func_0x00010c139fa0(param_1);
  lVar1 = param_1;
  func_0x00010beb4960();
  if ((int)lVar1 != 0) {
    lVar1 = param_1 + _DAT_11276b75c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = param_1;
    func_0x00010beead00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a3000(lVar1);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276b780);
  _objc_retain(uVar3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107ba83fc;
  puStack_40 = &UNK_110842e18;
  _objc_retain(uVar3);
  uStack_38 = uVar3;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_58);
  lVar1 = param_1;
  func_0x00010c083860();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c11e060(param_1);
    _objc_retainAutoreleasedReturnValue();
    _dispatch_resume();
    _objc_release(lVar1);
  }
  _objc_release(uStack_38);
  _objc_release(uVar3);
  puStack_60 = PTR_PTR_1126fa170;
  lStack_68 = param_1;
  _objc_msgSendSuper2(&lStack_68,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107ba83fc; end: 107ba84ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba83fc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar5);
      }
      (**(code **)(*(long *)(lVar7 * 8) + 0x10))(*(long *)(lVar7 * 8),0);
      lVar7 = lVar7 + 1;
    } while (lVar1 != lVar7);
    lVar1 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c12adc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  if ((*(byte *)(lVar1 + _DAT_11276b874) & 1) != 0) {
    return;
  }
  *(undefined1 *)(lVar1 + _DAT_11276b874) = 1;
  lVar4 = (long)_DAT_11276b82c;
  lVar6 = (long)_DAT_11276b878;
  func_0x00010c12c9c0(*(undefined8 *)(lVar1 + lVar4));
  func_0x00010c18b5e0(*(undefined8 *)(lVar1 + lVar6));
  uVar2 = *(undefined8 *)(lVar1 + lVar6);
  *(undefined8 *)(lVar1 + lVar6) = 0;
  _objc_release(uVar2);
  lVar6 = (long)_DAT_11276b87c;
  func_0x00010c12c9c0(*(undefined8 *)(lVar1 + lVar4));
  func_0x00010c18b5e0(*(undefined8 *)(lVar1 + lVar6));
  uVar2 = *(undefined8 *)(lVar1 + lVar6);
  *(undefined8 *)(lVar1 + lVar6) = 0;
  _objc_release(uVar2);
  *(undefined1 *)(lVar1 + _DAT_11276b86c) = 0;
  *(undefined1 *)(lVar1 + _DAT_11276b870) = 0;
  func_0x00010c21aea0(*(undefined8 *)(lVar1 + lVar4));
  func_0x00010c1cb840(*(undefined8 *)(lVar1 + lVar4));
  uVar2 = *(undefined8 *)(lVar1 + lVar4);
  puVar3 = PTR_s_estimatedProgress_1125c3fa0;
  _NSStringFromSelector(PTR_s_estimatedProgress_1125c3fa0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d580(uVar2);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(lVar1 + lVar4);
  puVar3 = PTR_s_title_112679e90;
  _NSStringFromSelector(PTR_s_title_112679e90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d580(uVar2);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(lVar1 + lVar4);
  puVar3 = PTR_s_URL_11254e480;
  _NSStringFromSelector(PTR_s_URL_11254e480);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d580(uVar2);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(lVar1 + lVar4);
  puVar3 = PTR_s_canGoBack_1125a8c58;
  _NSStringFromSelector(PTR_s_canGoBack_1125a8c58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d580(uVar2);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(lVar1 + lVar4);
  puVar3 = PTR_s_canGoForward_1125a8c60;
  _NSStringFromSelector(PTR_s_canGoForward_1125a8c60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d580(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107ba8500; end: 107ba86c3; -[SCWebBrowserV11ViewController resetWkWebView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba8500(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + _DAT_11276b874) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_11276b874) = 1;
  lVar4 = (long)_DAT_11276b82c;
  lVar3 = (long)_DAT_11276b878;
  func_0x00010c12c9c0(*(undefined8 *)(param_1 + lVar4),param_2,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
  lVar3 = (long)_DAT_11276b87c;
  func_0x00010c12c9c0(*(undefined8 *)(param_1 + lVar4),param_2,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_11276b86c) = 0;
  *(undefined1 *)(param_1 + _DAT_11276b870) = 0;
  func_0x00010c21aea0(*(undefined8 *)(param_1 + lVar4),param_2,0);
  func_0x00010c1cb840(*(undefined8 *)(param_1 + lVar4),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  puVar2 = PTR_s_estimatedProgress_1125c3fa0;
  _NSStringFromSelector(PTR_s_estimatedProgress_1125c3fa0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d580(uVar1,param_2,param_1,puVar2);
  _objc_release(puVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  puVar2 = PTR_s_title_112679e90;
  _NSStringFromSelector(PTR_s_title_112679e90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d580(uVar1,param_2,param_1,puVar2);
  _objc_release(puVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  puVar2 = PTR_s_URL_11254e480;
  _NSStringFromSelector(PTR_s_URL_11254e480);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d580(uVar1,param_2,param_1,puVar2);
  _objc_release(puVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  puVar2 = PTR_s_canGoBack_1125a8c58;
  _NSStringFromSelector(PTR_s_canGoBack_1125a8c58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d580(uVar1,param_2,param_1,puVar2);
  _objc_release(puVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  puVar2 = PTR_s_canGoForward_1125a8c60;
  _NSStringFromSelector(PTR_s_canGoForward_1125a8c60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d580(uVar1,param_2,param_1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107ba86c4; end: 107ba86ff; -[SCWebBrowserV11ViewController canGoBack] */

undefined8 FUN_107ba86c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010beeac40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf2cac0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107ba8700; end: 107ba873b; -[SCWebBrowserV11ViewController canGoForward] */

undefined8 FUN_107ba8700(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010beeac40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf2cae0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107ba873c; end: 107ba87af; -[SCWebBrowserV11ViewController toolbarBackButtonPressed] */

void FUN_107ba873c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  func_0x00010be64780(param_2,param_3,1);
  func_0x00010be68180(param_1,param_2,param_3,2);
  func_0x00010beeac40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd2c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ba87b0; end: 107ba8823; -[SCWebBrowserV11ViewController toolbarForwardButtonPressed] */

void FUN_107ba87b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  func_0x00010be64780(param_2,param_3,0);
  func_0x00010be68180(param_1,param_2,param_3,1);
  func_0x00010beeac40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd320();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107ba8824; end: 107ba8877; -[SCWebBrowserV11ViewController toolbarSendButtonPressed] */

void FUN_107ba8824(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  func_0x00010be64780(param_2);
  func_0x00010be68180(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bea0fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__sendURL_112585d90);
  return;
}



/* Entry: 107ba8878; end: 107ba88cb; -[SCWebBrowserV11ViewController toolbarShareButtonPressed] */

void FUN_107ba8878(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  func_0x00010be64780(param_2);
  func_0x00010be68180(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bebae50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__showShareActivity_11258c538);
  return;
}



/* Entry: 107ba88cc; end: 107ba8953; -[SCWebBrowserV11ViewController scrollViewDidEndDragging:willDecelerate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba88cc(undefined8 param_1,double param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_5);
  lVar1 = (long)_DAT_11276b880;
  if (*(long *)(param_3 + lVar1) != 0) {
    func_0x00010bf4cdc0(param_5);
    if ((-145.0 < param_2) || ((*(byte *)(param_3 + _DAT_11276b884) & 1) != 0)) {
      func_0x00010bf95220(*(undefined8 *)(param_3 + lVar1));
    }
    else {
      func_0x00010bf188c0(*(undefined8 *)(param_3 + lVar1));
      func_0x00010be72500(param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107ba8954; end: 107ba8973; -[SCWebBrowserV11ViewController _performRefreshReload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba8954(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_11276b884) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_11276b884) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c273bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_toolbarReloadButtonPressed_11267a918);
  return;
}



/* Entry: 107ba8974; end: 107ba8a07; -[SCWebBrowserV11ViewController toolbarReloadButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba8974(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + _DAT_11276b788);
  puVar1 = PTR_PTR_1126d6d08;
  func_0x00010c128cc0(PTR_PTR_1126d6d08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar2);
  _objc_release(puVar1);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  func_0x00010be64780(param_2);
  func_0x00010be68180(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010be96dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__retry_112583510);
  return;
}



/* Entry: 107ba8a08; end: 107ba8aaf; -[SCWebBrowserV11ViewController toolbarOpenInBrowserButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba8a08(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276b758;
  uVar1 = param_2 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_2 + lVar3;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c2a3320();
    _objc_release(lVar3);
  }
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  func_0x00010be64780(param_2);
  func_0x00010be68180(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010be6d250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__openInBrowser_112578e30);
  return;
}



/* Entry: 107ba8ab0; end: 107ba8b8f; -[SCWebBrowserV11ViewController _sendURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba8ab0(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  puVar1 = param_1;
  func_0x00010beeac40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    lVar4 = (long)_DAT_11276b79c;
    uVar3 = *(ulong *)(param_1 + lVar4);
    if (uVar3 != 0) {
      func_0x00010c07dca0();
      _objc_release(puVar2);
      _objc_release(puVar1);
      if ((uVar3 & 1) != 0) {
        return;
      }
      puVar1 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      puVar2 = param_1;
      func_0x00010be228a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c22b200(*(undefined8 *)(param_1 + lVar4),param_2,puVar2,puVar1,param_1);
    }
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ba8b90; end: 107ba8c13; -[SCWebBrowserV11ViewController didSendWithUrl:] */

void FUN_107ba8b90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afec0;
  _objc_retain(param_3);
  func_0x00010bf604c0(puVar1);
  func_0x00010be68180(param_1,param_2,0xc);
  puVar1 = PTR_PTR_1126d6d78;
  _objc_alloc(PTR_PTR_1126d6d78);
  func_0x00010bff0a40();
  func_0x00010c21d340();
  _objc_release(param_3);
  func_0x00010be50e60(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ba8c14; end: 107ba8ce3; -[SCWebBrowserV11ViewController _shareCellPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba8c14(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d6d08;
  uVar2 = *(undefined8 *)(param_2 + _DAT_11276b788);
  _objc_retain(param_4);
  func_0x00010c22a700(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar2);
  _objc_release(puVar1);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  func_0x00010be64780(param_2);
  func_0x00010be68180(param_1,param_2);
  uVar2 = param_4;
  func_0x00010beeee80(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf82fe0(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bebae50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__showShareActivity_11258c538);
  return;
}



/* Entry: 107ba8ce4; end: 107ba8d7b; -[SCWebBrowserV11ViewController _copyLinkCellPressed:] */

void FUN_107ba8ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126afec0;
  _objc_retain(param_4);
  func_0x00010bf604c0(puVar1);
  func_0x00010be64780(param_2);
  func_0x00010be68180(param_1,param_2);
  uVar2 = param_4;
  func_0x00010beeee80(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf82fe0(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bde9ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__copyLink_112558050);
  return;
}



/* Entry: 107ba8d7c; end: 107ba8df7; -[SCWebBrowserV11ViewController _copyLink] */

void FUN_107ba8d7c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010be228a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010beec820(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
    func_0x00010bfbedc0(PTR__OBJC_CLASS___UIPasteboard_1126b2090);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e7c0();
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ba8df8; end: 107ba8f17; -[SCWebBrowserV11ViewController _browserCellPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba8df8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11276b758;
  _objc_retain(param_4);
  uVar1 = param_2 + lVar5;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar5 = param_2 + lVar5;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c2a3320();
    _objc_release(lVar5);
  }
  uVar4 = *(undefined8 *)(param_2 + _DAT_11276b788);
  puVar3 = PTR_PTR_1126d6d08;
  func_0x00010c0e9300(PTR_PTR_1126d6d08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar4);
  _objc_release(puVar3);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  func_0x00010be64780(param_2);
  func_0x00010be68180(param_1,param_2);
  uVar4 = param_4;
  func_0x00010beeee80(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf82fe0(uVar4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010be6d250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__openInBrowser_112578e30);
  return;
}



/* Entry: 107ba8f18; end: 107ba907b; -[SCWebBrowserV11ViewController _openInBrowser] */

void FUN_107ba8f18(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = param_1;
  func_0x00010beeac40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    uVar3 = param_1;
    func_0x00010bf6eb40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(uVar2);
    uVar3 = uVar2;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bdccfc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  if ((uVar2 & 1) == 0) {
    puVar4 = PTR_PTR_1126d6db0;
    _objc_opt_new(PTR_PTR_1126d6db0);
    FUN_107bc029c();
    _objc_release(puVar4);
  }
  uVar2 = param_1;
  func_0x00010bdcd140();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c071ae0();
  if ((uVar5 & 1) == 0) {
    puVar4 = PTR_PTR_1126d6db0;
    _objc_opt_new(PTR_PTR_1126d6db0);
    FUN_107bc0224();
    _objc_release(puVar4);
  }
  func_0x00010bece2e0(param_1);
  if (uVar2 != 0) {
    uVar5 = param_1;
    func_0x00010c28f600();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf2cf00();
    _objc_release(uVar5);
    if ((int)uVar6 != 0) {
      func_0x00010be6d160(param_1);
    }
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107ba907c; end: 107ba90af; -[SCWebBrowserV11ViewController _cancelCellPressed:] */

void FUN_107ba907c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010beeee80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ba90b0; end: 107ba90df; -[SCWebBrowserV11ViewController _onOpenBookmarkPage] */

void FUN_107ba90b0(undefined8 param_1)

{
  func_0x00010bf604c0(PTR_PTR_1126afec0);
                    /* WARNING: Could not recover jumptable at 0x00010be68190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onBrowserFeature_timestamp__112577a00,0x15);
  return;
}



/* Entry: 107ba90e0; end: 107ba910f; -[SCWebBrowserV11ViewController _onDismissBookmarkPage] */

void FUN_107ba90e0(undefined8 param_1)

{
  func_0x00010bf604c0(PTR_PTR_1126afec0);
                    /* WARNING: Could not recover jumptable at 0x00010be68190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onBrowserFeature_timestamp__112577a00,0x14);
  return;
}



/* Entry: 107ba9110; end: 107ba92bb; -[SCWebBrowserV11ViewController _onAddBookmark:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba9110(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110eb1938);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b0ae0;
  puVar3 = puVar2;
  func_0x000107bba034();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000107bba04c();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uVar7 = 0xc2000000;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107ba92bc;
  puStack_70 = &UNK_110849530;
  uStack_68 = param_3;
  _objc_retain(param_3);
  func_0x00010bf57ee0(puVar5,param_2,puVar2,puVar3,puVar4,&puStack_88,1,
                      &PTR____CFConstantStringClassReference_110eb1958);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11276b7c4);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar6);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  func_0x00010be68180(param_1,param_2,0xf);
  func_0x00010be68680(uVar7,param_1,param_2,2);
  _objc_release(puVar5);
  _objc_release(uStack_68);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 107ba92bc; end: 107ba92cf;  */

void FUN_107ba92bc(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107ba92c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 107ba92d0; end: 107ba931b; -[SCWebBrowserV11ViewController _onRemoveBookmark] */

void FUN_107ba92d0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  func_0x00010be68180(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010be68690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,PTR_s__onConfigEventType_timestamp__112577b40,3);
  return;
}



/* Entry: 107ba931c; end: 107ba934b; -[SCWebBrowserV11ViewController _onActionMenuOpen] */

void FUN_107ba931c(undefined8 param_1)

{
  func_0x00010bf604c0(PTR_PTR_1126afec0);
                    /* WARNING: Could not recover jumptable at 0x00010be68190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onBrowserFeature_timestamp__112577a00,5);
  return;
}



/* Entry: 107ba934c; end: 107ba9387; -[SCWebBrowserV11ViewController _onClearCache] */

void FUN_107ba934c(undefined8 param_1)

{
  func_0x00010bf3aaa0(PTR_PTR_1126b4f58);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
                    /* WARNING: Could not recover jumptable at 0x00010be68190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onBrowserFeature_timestamp__112577a00,0x19);
  return;
}



/* Entry: 107ba9388; end: 107ba93f3; -[SCWebBrowserV11ViewController _onUpdateEnabledHistoryFromSetting:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba9388(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b7c0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c288c40();
  _objc_release(uVar1);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
                    /* WARNING: Could not recover jumptable at 0x00010be6ae50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__onPrivacyBrowserFeature_timesta_112578530,0x1b,param_3);
  return;
}



/* Entry: 107ba93f4; end: 107ba9453; -[SCWebBrowserV11ViewController _onBookMarkMenuEnableRecentPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba93f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b7c0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c288c40();
  _objc_release(uVar1);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
                    /* WARNING: Could not recover jumptable at 0x00010be6ae50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__onPrivacyBrowserFeature_timesta_112578530,0x1d,1);
  return;
}



/* Entry: 107ba9454; end: 107ba94d7; -[SCWebBrowserV11ViewController _onUpdatePrivacyConsentFromPrompt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba9454(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b7c0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c288c40();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be573a0(param_1,param_2,8,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107ba94d8; end: 107ba970f; -[SCWebBrowserV11ViewController _showShareActivity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ba94d8(undefined8 param_1,long param_2,int param_3,int param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **unaff_x23;
  long lVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_2;
  func_0x00010be228a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar9 = (long)_DAT_11276b758;
    uVar2 = param_2 + lVar9;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      lVar9 = param_2 + lVar9;
      _objc_loadWeakRetained(lVar9);
      func_0x00010c2a3340();
      _objc_release(lVar9);
    }
    puVar4 = PTR_PTR_1126c9d18;
    _objc_alloc();
    func_0x00010bff0fe0();
    puVar5 = PTR_PTR_1126aeb08;
    _objc_alloc();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = lVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_58 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff0f80();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_initWeak(auStack_60,param_2);
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_107ba9710;
    puStack_80 = &UNK_1109fef58;
    unaff_x23 = &puStack_98;
    param_3 = (int)auStack_60;
    lStack_78 = param_2;
    uStack_68 = param_1;
    _objc_copyWeak(auStack_70);
    func_0x00010c17fc60(puVar5);
    param_6 = 0;
    puVar6 = puVar5;
    func_0x00010c10eda0(param_2);
    param_4 = (int)puVar6;
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_60);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x23 + 5);
  _objc_destroyWeak(auStack_60);
  __Unwind_Resume();
  _objc_retain(param_6);
  if (param_4 != 0) {
    func_0x00010c071ae0();
    if (param_3 != 0) {
      func_0x00010be64780(*(undefined8 *)(lVar1 + 0x30),*(undefined8 *)(lVar1 + 0x20));
    }
    lVar9 = lVar1 + 0x28;
    _objc_loadWeakRetained(lVar9);
    func_0x00010be68180(*(undefined8 *)(lVar1 + 0x30));
    _objc_release(lVar9);
  }
  lVar1 = lVar1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar8 = param_6;
  func_0x00010c09e4e0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be58900(lVar1);
  _objc_release(uVar8);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 107ba9710; end: 107ba97cf;  */

void FUN_107ba9710(long param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  if (param_3 != 0) {
    func_0x00010c071ae0();
    if (param_2 != 0) {
      func_0x00010be64780(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20));
    }
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be68180(*(undefined8 *)(param_1 + 0x30));
    _objc_release(lVar1);
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  uVar2 = param_5;
  func_0x00010c09e4e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be58900(param_1);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}


