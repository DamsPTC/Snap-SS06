/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107b78a10; end: 107b78a37; -[SCOperaRemoteWebLayerViewController showSafeBrowsingWarning:urlType:webviewWrapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b78a10(long param_1)

{
  long in_x4;
  
  if (*(long *)(param_1 + _DAT_11276b1d4) != in_x4) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c239b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b1d8),
             PTR_s_showSafeBrowsingWarning_urlType__11266c0e8);
  return;
}



/* Entry: 107b78a38; end: 107b78aa3; -[SCOperaRemoteWebLayerViewController showConnectionErrorForWebviewWrapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b78a38(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + _DAT_11276b1d4) != param_3) {
    return;
  }
  func_0x00010c236b00(*(undefined8 *)(param_1 + _DAT_11276b1d8));
  puVar1 = PTR_PTR_1126c9a00;
  func_0x00010c2a3e40(PTR_PTR_1126c9a00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b78aa4; end: 107b78b0f; -[SCOperaRemoteWebLayerViewController showGeneralErrorForWebviewWrapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b78aa4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + _DAT_11276b1d4) != param_3) {
    return;
  }
  func_0x00010c237a00(*(undefined8 *)(param_1 + _DAT_11276b1d8));
  puVar1 = PTR_PTR_1126c9a00;
  func_0x00010c2a3e40(PTR_PTR_1126c9a00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b78b10; end: 107b78b1f; -[SCOperaRemoteWebLayerViewController isVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b78b10(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276b1c0);
}



/* Entry: 107b78b20; end: 107b78b3b; -[SCOperaRemoteWebLayerViewController didClickOkInExternalOpenDialogForWebviewWrapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b78b20(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_11276b1d4) != param_3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bde1730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__closeWebview_112555f68);
  return;
}



/* Entry: 107b78b3c; end: 107b78b57; -[SCOperaRemoteWebLayerViewController didClickCancelInExternalOpenDialogForWebviewWrapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b78b3c(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_11276b1d4) != param_3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bde1730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__closeWebview_112555f68);
  return;
}



/* Entry: 107b78b58; end: 107b78b7f; -[SCOperaRemoteWebLayerViewController didResetWebviewForWebviewWrapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b78b58(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_11276b1d4) != param_3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf7a150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b1d8),PTR_s_didResetWebview_1125bc1f8);
  return;
}



/* Entry: 107b78b80; end: 107b78bdf; -[SCOperaRemoteWebLayerViewController didFinalizePerformanceMetricsForWebViewWrapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b78b80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  if (puVar2[_DAT_11276b1c0] == '\x01') {
    iVar1 = (int)*(undefined8 *)(puVar2 + _DAT_11276b1d4);
    func_0x00010bf77b80();
    if ((iVar1 != 0) && (lVar5 = (long)_DAT_11276b1c4, (puVar2[lVar5] & 1) == 0)) {
      puVar3 = PTR_PTR_1126c9a00;
      func_0x00010c2a4400(PTR_PTR_1126c9a00);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010bf60c40(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf04440(puVar2);
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar2[lVar5] = 1;
    }
  }
  puVar3 = puVar2 + _DAT_11276b1dc;
  _objc_loadWeakRetained(puVar3);
  func_0x00010c0eaa40(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a460(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107b78be0; end: 107b78cd3; -[SCOperaRemoteWebLayerViewController _sendMediaStartsToDisplayIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b78be0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  if (*(char *)(param_1 + _DAT_11276b1c0) == '\x01') {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11276b1d4);
    func_0x00010bf77b80();
    if ((iVar1 != 0) && (lVar4 = (long)_DAT_11276b1c4, (*(byte *)(param_1 + lVar4) & 1) == 0)) {
      puVar2 = PTR_PTR_1126c9a00;
      func_0x00010c2a4400(PTR_PTR_1126c9a00);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bf60c40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf04440(param_1,param_2,puVar2,lVar3);
      _objc_release(lVar3);
      _objc_release(puVar2);
      *(undefined1 *)(param_1 + lVar4) = 1;
    }
  }
  lVar4 = param_1 + _DAT_11276b1dc;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c0eaa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a460(lVar4,param_2,param_1,1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 107b78cd4; end: 107b78d63; -[SCOperaRemoteWebLayerViewController _sendWebViewDidFinishLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b78cd4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11276b1d4);
  func_0x00010bf77b80();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126c9a00;
    func_0x00010c2a3ea0(PTR_PTR_1126c9a00);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf60c40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04440(param_1,param_2,puVar2,lVar3);
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 107b78d64; end: 107b78da7; -[SCOperaRemoteWebLayerViewController _closeWebview] */

void FUN_107b78d64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2638;
  func_0x00010c152660(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b78da8; end: 107b78e3b; -[SCOperaRemoteWebLayerViewController _shouldForceExternalBrowser] */

undefined8 FUN_107b78da8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c0ea360();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2a35e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a3540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfb4b40();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 107b78e3c; end: 107b78f63; -[SCOperaRemoteWebLayerViewController _openInExternalBrowserAndClose] */

void FUN_107b78e3c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a3ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 == 0) || (puVar4 = puVar3, func_0x00010bf2cf00(), ((ulong)puVar4 & 1) == 0)) {
    func_0x00010bde1720(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0e9b80(puVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(puVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 107b78f64; end: 107b78f8f;  */

void FUN_107b78f64(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde1720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b78f90; end: 107b78fd3; -[SCOperaRemoteWebLayerViewController _didTapSubscriptionButton] */

void FUN_107b78f90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c9ce8;
  func_0x00010c260540(PTR_PTR_1126c9ce8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b78fd4; end: 107b79053; -[SCOperaRemoteWebLayerViewController _layoutSubscribeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b78fd4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b1d8);
  func_0x00010c152980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010be49760(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b79054; end: 107b7905b; -[SCOperaRemoteWebLayerViewController _layoutSubscribeViewWithContentFrame:] */

void FUN_107b79054(undefined8 param_1)

{
  undefined8 in_d3;
  
                    /* WARNING: Could not recover jumptable at 0x00010be49790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(in_d3,param_1,PTR_s__layoutSubscribeViewWithY__11256ff80);
  return;
}



/* Entry: 107b7905c; end: 107b79063; -[SCOperaRemoteWebLayerViewController _layoutSubscribeViewWithContentBounds:] */

void FUN_107b7905c(undefined8 param_1)

{
  undefined8 in_d3;
  
                    /* WARNING: Could not recover jumptable at 0x00010be49790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(in_d3,param_1,PTR_s__layoutSubscribeViewWithY__11256ff80);
  return;
}



/* Entry: 107b79064; end: 107b790ab; -[SCOperaRemoteWebLayerViewController _layoutSubscribeViewWithY:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b79064(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + _DAT_11276b1d8);
  func_0x00010c152980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  func_0x00010c181f80(param_1,param_2,0,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b790ac; end: 107b790af; -[SCOperaRemoteWebLayerViewController remoteWebLayerViewDidPressExitButton:] */

void FUN_107b790ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde1730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__closeWebview_112555f68);
  return;
}



/* Entry: 107b790b0; end: 107b791a7; -[SCOperaRemoteWebLayerViewController remoteWebLayerView:didShareURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_107b790b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126b2638;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010c22b260();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6008;
  func_0x00010c22c4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_58 = puVar2;
  uStack_50 = param_4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_50,&puStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf04440(param_1,param_2,puVar1,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar1;
  func_0x00010c118dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9410;
  func_0x00010beeec00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(puVar1 + _DAT_11276b1d4);
  puStack_b8 = puVar3;
  func_0x00010c2a3bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_b0 = uVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_b0,&puStack_b8,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e940(puVar2,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b2ea8;
  func_0x00010c235940(PTR_PTR_1126b2ea8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)0x1;
}



/* Entry: 107b791a8; end: 107b792e7; -[SCOperaRemoteWebLayerViewController operaWebViewHeaderViewDidPressActionMenuButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107b791a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010c118dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9410;
  func_0x00010beeec00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276b1d4);
  puStack_58 = puVar2;
  func_0x00010c2a3bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_50 = uVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_50,&puStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e940(lVar1,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126b2ea8;
  func_0x00010c235940(PTR_PTR_1126b2ea8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar2);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)0x1;
}



/* Entry: 107b792e8; end: 107b792ef; -[SCOperaRemoteWebLayerViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_107b792e8(void)

{
  return 1;
}



/* Entry: 107b792f0; end: 107b7935f; -[SCOperaRemoteWebLayerViewController mediaViewFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b792f0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11276b1d8);
  func_0x00010c2a3bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107b79360; end: 107b793f3; -[SCOperaRemoteWebLayerViewController mediaHeightToWidthAspectRatio] */

double FUN_107b79360(float param_1,undefined8 param_2,double param_3,double param_4,
                    undefined8 param_5)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = param_5;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4bdc0();
  fVar2 = param_1;
  _objc_release(uVar1);
  if (param_1 <= 0.0) {
    func_0x00010c0c7140(param_5);
    param_4 = param_4 / param_3;
    if (param_3 <= 1.1920928955078125e-07) {
      param_4 = 0.0;
    }
  }
  else {
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4bdc0();
    param_4 = (double)fVar2;
    _objc_release(param_5);
  }
  return param_4;
}



/* Entry: 107b793f4; end: 107b79433; -[SCOperaRemoteWebLayerViewController isOverlay] */

bool FUN_107b793f4(float param_1,undefined8 param_2)

{
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4bdc0();
  _objc_release(param_2);
  return param_1 <= 0.0;
}



/* Entry: 107b79434; end: 107b79637; -[SCOperaRemoteWebLayerViewController _setupLayerViewWithWebViewWrapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b79434(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  if (param_3 != 0) {
    lVar7 = (long)_DAT_11276b1d8;
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    _objc_retain(param_3);
    uVar1 = param_1;
    func_0x00010bde4580(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c2a3bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c28c600(uVar6);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(uVar1);
    func_0x00010c238f80(param_3);
    _objc_release(param_3);
    uVar1 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c112dc0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 == 0) {
      uVar4 = param_1;
      func_0x00010bf46560(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c112dc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)(param_1 + lVar7));
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    else {
      func_0x00010c16e440(*(undefined8 *)(param_1 + lVar7));
    }
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c152980(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c152980(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1738c0();
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    uVar1 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c239e40();
    if ((uVar3 & 1) == 0) {
      func_0x00010c1feae0(uVar6);
    }
    else {
      uVar3 = param_1;
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c290260();
      func_0x00010c1feae0(uVar6);
      _objc_release(uVar3);
    }
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf7a130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didResetWebView_1125bc1f0);
    return;
  }
  return;
}



/* Entry: 107b79638; end: 107b79647; -[SCOperaRemoteWebLayerViewController currentWebViewWrapper] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b79638(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b1d4);
}



/* Entry: 107b79648; end: 107b79687; -[SCOperaRemoteWebLayerViewController setCurrentWebViewWrapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b79648(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b1d4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b79688; end: 107b79743; -[SCOperaRemoteWebLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b79688(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276b1d4,0);
  _objc_destroyWeak(param_1 + _DAT_11276b1dc);
  _objc_storeStrong(param_1 + _DAT_11276b1e4,0);
  _objc_storeStrong(param_1 + _DAT_11276b1c8,0);
  _objc_storeStrong(param_1 + _DAT_11276b1b8,0);
  _objc_storeStrong(param_1 + _DAT_11276b1ec,0);
  _objc_storeStrong(param_1 + _DAT_11276b1f0,0);
  _objc_storeStrong(param_1 + _DAT_11276b1e0,0);
  _objc_storeStrong(param_1 + _DAT_11276b1cc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276b1d8,0);
  return;
}



/* Entry: 107b79744; end: 107b7974b; -[SCOperaWebLayerViewController scrollView] */

undefined8 FUN_107b79744(void)

{
  return 0;
}



/* Entry: 107b7974c; end: 107b7980b; -[SCOperaWebLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:bandwidthEstimator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107b7974c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126fa0a0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithConfiguration_layerViewC_1125de030,param_3,param_4,
                      param_5,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bfeee20(puVar1);
    lVar3 = (long)_DAT_11276b1f4;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    func_0x00010c1c0d00(puVar1);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 107b7980c; end: 107b798c3; -[SCOperaWebLayerViewController initInstanceVars] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7980c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276b1f8);
  *(undefined **)(param_1 + _DAT_11276b1f8) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276b1fc);
  *(undefined **)(param_1 + _DAT_11276b1fc) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276b200);
  *(undefined **)(param_1 + _DAT_11276b200) = puVar1;
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + _DAT_11276b204) = 0;
  *(undefined1 *)(param_1 + _DAT_11276b208) = 0;
  *(undefined1 *)(param_1 + _DAT_11276b20c) = 0;
  return;
}



/* Entry: 107b798c4; end: 107b798d3; -[SCOperaWebLayerViewController pause] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b798c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b210),PTR_s_pause_11261b0e8);
  return;
}



/* Entry: 107b798d4; end: 107b798e3; -[SCOperaWebLayerViewController resume] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b798d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13d1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b210),PTR_s_resume_11262ce90);
  return;
}



/* Entry: 107b798e4; end: 107b798f3; -[SCOperaWebLayerViewController setVolume:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b798e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2241b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b210),PTR_s_setVolume__112666a90);
  return;
}



/* Entry: 107b798f4; end: 107b79947; -[SCOperaWebLayerViewController viewDidFullyAppear] */

void FUN_107b798f4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fa0a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidFullyAppear_112684c88);
  func_0x00010be9c2c0(param_1);
  func_0x00010bea08a0(param_1);
  return;
}



/* Entry: 107b79948; end: 107b7999b; -[SCOperaWebLayerViewController viewDidFullyDisappear] */

void FUN_107b79948(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fa0a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidFullyDisappear_112684ca8);
  func_0x00010bea08a0(param_1);
  func_0x00010c26abe0(param_1);
  return;
}



/* Entry: 107b7999c; end: 107b799ef; -[SCOperaWebLayerViewController teardown] */

void FUN_107b7999c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fa0a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_teardown_112678538);
  func_0x00010c137fe0(param_1);
  func_0x00010c1c0d00(param_1);
  return;
}



/* Entry: 107b799f0; end: 107b79b3f; -[SCOperaWebLayerViewController reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b799f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c26abe0();
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar3 = *(long *)(param_1 + _DAT_11276b1f8);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar4 = *plStack_110;
    do {
      lVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(lVar3);
        }
        uVar2 = *(undefined8 *)(lStack_118 + lVar5 * 8);
        func_0x00010c0fe3a0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12c960();
        _objc_release(uVar2);
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar3);
  func_0x00010bfeee20(param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276b214);
  *(undefined8 *)(param_1 + _DAT_11276b214) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276b218);
  *(undefined8 *)(param_1 + _DAT_11276b218) = 0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puStack_140 = &DAT_11276b214;
  pcStack_128 = FUN_107b79b40;
  puStack_148 = PTR_PTR_1126fa0a0;
  uStack_150 = uVar2;
  lStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&uStack_150,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c229780(uVar2);
  return;
}



/* Entry: 107b79b40; end: 107b79b87; -[SCOperaWebLayerViewController viewDidLoad] */

void FUN_107b79b40(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fa0a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c229780(param_1);
  return;
}



/* Entry: 107b79b88; end: 107b79bab; -[SCOperaWebLayerViewController setupTapGestureRecognizers] */

void FUN_107b79b88(undefined8 param_1)

{
  func_0x00010beb0600();
                    /* WARNING: Could not recover jumptable at 0x00010bea9b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setUpTapToOpenInlineVideoRecogn_112588078);
  return;
}



/* Entry: 107b79bac; end: 107b79c5f; -[SCOperaWebLayerViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b79bac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fa0a0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  lVar1 = param_1;
  func_0x00010c07abc0();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c0b4e40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + _DAT_11276b210);
      func_0x00010c29bf00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4e40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9040(uVar2);
      _objc_release(param_1);
      _objc_release(uVar2);
    }
  }
  return;
}



/* Entry: 107b79c60; end: 107b79c67; -[SCOperaWebLayerViewController shouldDisableTransitioningDelegate] */

undefined8 FUN_107b79c60(void)

{
  return 1;
}



/* Entry: 107b79c68; end: 107b79d33; -[SCOperaWebLayerViewController _handlePanGesture:] */

void FUN_107b79c68(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c252440();
  if (lVar1 == 3) {
    lVar1 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27adc0(param_5,param_4,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (ABS(param_1) < ABS(param_2) * 0.4000000059604645) {
      func_0x00010bf84b00(param_3,param_4,1,0);
      func_0x00010c195460(param_5,param_4,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107b79d34; end: 107b79dcf; -[SCOperaWebLayerViewController _setupTapGesture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b79d34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276b21c;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b79dd0; end: 107b79e0f; -[SCOperaWebLayerViewController _didTap:] */

void FUN_107b79dd0(undefined8 param_1)

{
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182300(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b79e10; end: 107b79ef7; -[SCOperaWebLayerViewController _setUpTapToOpenInlineVideoRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b79e10(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11276b220;
  func_0x00010c12c9c0();
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar4);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5),param_2,param_1);
  lVar1 = param_1;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0f36c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar3 != 0) {
    func_0x00010c1374a0(*(undefined8 *)(param_1 + lVar5),param_2,lVar3);
  }
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 107b79ef8; end: 107b79f07; -[SCOperaWebLayerViewController longPressGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b79ef8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276b224);
}



/* Entry: 107b79f08; end: 107b79f47; -[SCOperaWebLayerViewController setLongPressGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b79f08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276b224;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b79f48; end: 107b7a027; -[SCOperaWebLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b79f48(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276b224,0);
  _objc_storeStrong(param_1 + _DAT_11276b1f4,0);
  _objc_storeStrong(param_1 + _DAT_11276b228,0);
  _objc_storeStrong(param_1 + _DAT_11276b218,0);
  _objc_storeStrong(param_1 + _DAT_11276b22c,0);
  _objc_storeStrong(param_1 + _DAT_11276b200,0);
  _objc_storeStrong(param_1 + _DAT_11276b214,0);
  _objc_storeStrong(param_1 + _DAT_11276b1f8,0);
  _objc_storeStrong(param_1 + _DAT_11276b1fc,0);
  _objc_storeStrong(param_1 + _DAT_11276b220,0);
  _objc_storeStrong(param_1 + _DAT_11276b210,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276b21c,0);
  return;
}



/* Entry: 107b7a028; end: 107b7a037; -[SCOperaWebLayerViewController inlineVideoCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7a028(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b1f8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 107b7a038; end: 107b7a113; -[SCOperaWebLayerViewController addVideoParams:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7a038(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  func_0x00010c0d3c80(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar3 = param_1;
  func_0x00010c065440(param_1);
  func_0x00010c0df840(puVar1,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9ab0;
  func_0x00010c065460(PTR_PTR_1126c9ab0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_3,param_2,puVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar3 = *(long *)(param_1 + _DAT_11276b210);
  if (lVar3 != 0) {
    func_0x00010c29a860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_3,param_2,lVar3);
    _objc_release(lVar3);
  }
  uVar4 = param_3;
  func_0x00010bf51e00(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107b7a114; end: 107b7a2af; -[SCOperaWebLayerViewController addInlineVideoWithParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7a114(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c152980(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0();
  uVar4 = param_2;
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126d6c08;
  _objc_alloc(PTR_PTR_1126d6c08);
  func_0x00010c0337e0(param_2);
  _objc_release(param_5);
  lVar1 = param_3;
  func_0x00010c152980(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0fe3a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar1,param_4,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar1);
  puVar3 = puVar2;
  func_0x00010c0fe3a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectStandardize();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c0fe3a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_2,uVar4,0x4042800000000000,0x4042800000000000);
  _objc_release(puVar3);
  func_0x00010bfb68e0(puVar2);
  _CGRectGetMidX();
  uVar4 = param_2;
  func_0x00010bfb68e0(puVar2);
  _CGRectGetMidY();
  puVar3 = puVar2;
  func_0x00010c0fe3a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_2,uVar4);
  _objc_release(puVar3);
  func_0x00010befa120(*(undefined8 *)(param_3 + _DAT_11276b1f8),param_4,puVar2);
  if (*(long *)(param_3 + _DAT_11276b210) == 0) {
    func_0x00010c0fe7a0(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107b7a2b0; end: 107b7a5f3; -[SCOperaWebLayerViewController playProperVideoIfAvailable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7a2b0(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined *param_5)

{
  long lVar1;
  double dVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dStack_1b8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_5;
  func_0x00010c07abc0();
  if (((ulong)puVar7 & 1) == 0) {
    puVar7 = PTR_PTR_1126cb2d0;
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010c231e40();
    _objc_release(puVar7);
    if ((int)puVar3 != 0) {
      puVar7 = param_5;
      func_0x00010c0f2520();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_5;
      func_0x00010c0eaa40(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0f13c0();
      _objc_release(puVar3);
      _objc_release(puVar7);
      if ((int)puVar8 == 0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        lVar6 = *(long *)(param_5 + _DAT_11276b1f8);
        _objc_retain(lVar6);
        lVar4 = lVar6;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        if (lVar4 == 0) {
          puVar7 = (undefined *)0x0;
        }
        else {
          puVar7 = (undefined *)0x0;
          dVar19 = *(double *)PTR__CGRectZero_110347608;
          dVar10 = *(double *)(PTR__CGRectZero_110347608 + 8);
          dVar20 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
          dVar11 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
          dVar12 = 3.4028234663852886e+38;
          dStack_1b8 = 3.4028234663852886e+38;
          dVar21 = dVar20;
          do {
            lVar9 = 0;
            do {
              dVar22 = param_3;
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(lVar6);
                dVar22 = param_3;
              }
              puVar8 = *(undefined **)(lVar9 * 8);
              func_0x00010bfb68e0(puVar8);
              puVar3 = param_5;
              dVar13 = dVar12;
              dVar14 = dVar21;
              dVar18 = dVar22;
              dVar23 = param_4;
              func_0x00010c152980(param_5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf4cdc0();
              dVar17 = dVar14;
              if (dVar14 <= dVar21) {
                dVar17 = dVar21;
              }
              dVar15 = dVar14;
              func_0x00010bfb68e0(puVar3);
              _CGRectGetHeight();
              dVar14 = dVar14 + dVar13;
              dVar13 = dVar21 + param_4;
              if (dVar14 <= dVar21 + param_4) {
                dVar13 = dVar14;
              }
              dVar24 = dVar11;
              dVar25 = dVar20;
              dVar26 = dVar10;
              dVar27 = dVar19;
              if (*(long *)(param_5 + _DAT_11276b214) != 0) {
                func_0x00010bfb68e0();
                dVar24 = dVar23;
                dVar25 = dVar18;
                dVar26 = dVar15;
                dVar27 = dVar14;
              }
              param_3 = (dVar13 - dVar17) / param_4;
              dVar15 = dVar12;
              _CGRectGetMinY(dVar12,dVar21,dVar22,param_4);
              dVar16 = dVar27;
              _CGRectGetMinY(dVar27,dVar26,dVar25,dVar24);
              dVar2 = dVar24;
              dVar13 = dVar25;
              dVar14 = dVar26;
              dVar18 = dVar27;
              dVar23 = param_4;
              dVar17 = dVar12;
              if (dVar15 <= dVar16) {
                dVar2 = param_4;
                dVar13 = dVar22;
                dVar14 = dVar21;
                dVar18 = dVar12;
                dVar23 = dVar24;
                dVar22 = dVar25;
                dVar21 = dVar26;
                dVar17 = dVar27;
              }
              param_4 = dVar2;
              _CGRectGetMinY(dVar17,dVar21,dVar22,dVar23);
              _CGRectGetMaxY(dVar18,dVar14,dVar13);
              dVar21 = 0.5;
              dVar12 = dVar18;
              if ((0.5 <= param_3) &&
                 ((puVar7 == (undefined *)0x0 || (dVar12 = dStack_1b8, dVar17 - dVar18 < dStack_1b8)
                  ))) {
                _objc_retain(puVar8);
                _objc_release(puVar7);
                puVar7 = puVar8;
                dStack_1b8 = dVar17 - dVar18;
              }
              _objc_release(puVar3);
              lVar9 = lVar9 + 1;
            } while (lVar4 != lVar9);
            lVar4 = lVar6;
            func_0x00010bf52a60();
          } while (lVar4 != 0);
        }
        _objc_release(lVar6);
      }
      func_0x00010c0fe6c0(param_5);
      _objc_release(puVar7);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    func_0x00010c137fe0();
                    /* WARNING: Could not recover jumptable at 0x00010c229790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar7,PTR_s_setupTapGestureRecognizers_112668008);
    return;
  }
  return;
}



/* Entry: 107b7a5f4; end: 107b7a617; -[SCOperaWebLayerViewController didResetWebView] */

void FUN_107b7a5f4(undefined8 param_1)

{
  func_0x00010c137fe0();
                    /* WARNING: Could not recover jumptable at 0x00010c229790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setupTapGestureRecognizers_112668008);
  return;
}



/* Entry: 107b7a618; end: 107b7a6bf; -[SCOperaWebLayerViewController replacePreviousInlineVideoWithScreenshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7a618(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = (long)_DAT_11276b214;
  if (*(long *)(param_2 + lVar2) != 0) {
    if (*(long *)(param_2 + _DAT_11276b210) == 0) {
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
    }
    else {
      func_0x00010bf60480(&uStack_48);
    }
    _CMTimeGetSeconds(&uStack_48);
    if (param_1 <= 0.0) {
      uVar1 = *(undefined8 *)(param_2 + lVar2);
      func_0x00010c151860(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c960();
      _objc_release(uVar1);
      func_0x00010c1f7800(*(undefined8 *)(param_2 + lVar2),param_3,0);
    }
    else {
      func_0x00010c284bc0(param_2);
    }
  }
  return;
}



/* Entry: 107b7a6c0; end: 107b7a823; -[SCOperaWebLayerViewController updateCurrentInlineVideoScreenshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7a6c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)_DAT_11276b210;
  iVar1 = (int)*(undefined8 *)(param_5 + lVar4);
  func_0x00010c07e000();
  if (iVar1 != 0) {
    lVar5 = (long)_DAT_11276b214;
    uVar2 = *(undefined8 *)(param_5 + lVar5);
    func_0x00010c151860(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_5 + lVar4);
    func_0x00010c245ea0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f7800(*(undefined8 *)(param_5 + lVar5),param_6,uVar2);
    _objc_release(uVar2);
    lVar4 = param_5;
    func_0x00010c152980(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_5 + lVar5);
    func_0x00010c151860(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_5 + lVar5);
    func_0x00010c0fe3a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fe0(lVar4,param_6,uVar2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(lVar4);
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar5));
    uVar2 = *(undefined8 *)(param_5 + lVar5);
    func_0x00010c151860(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 107b7a824; end: 107b7a96b; -[SCOperaWebLayerViewController setupScreenshotHidingViewForVideo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7a824(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11276b218;
  lVar1 = *(long *)(param_1 + lVar6);
  if (lVar1 != 0) {
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c12c960(*(undefined8 *)(param_1 + lVar6));
    }
  }
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar2;
  _objc_release(uVar5);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar6),param_2,puVar2);
  _objc_release(puVar2);
  lVar1 = param_3;
  func_0x00010c151860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar3 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  lVar4 = param_3;
  if (lVar1 == 0) {
    func_0x00010c0fe3a0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c151860();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c066f80(lVar3,param_2,uVar5,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6),param_2,0);
  func_0x00010bfb68e0(param_3);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar6));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b7a96c; end: 107b7a9af; -[SCOperaWebLayerViewController isPresentingInlineVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107b7a96c(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_11276b210);
  bVar1 = false;
  if (lVar2 != 0) {
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 == param_1;
    _objc_release();
  }
  return bVar1;
}



/* Entry: 107b7a9b0; end: 107b7b033; -[SCOperaWebLayerViewController playInlineVideo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7a9b0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_7);
  uVar1 = param_7;
  func_0x00010c29a440();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_11276b210;
  uVar2 = *(undefined8 *)(param_5 + lVar13);
  func_0x00010c29a440(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0(uVar1,param_6,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    lVar12 = (long)_DAT_11276b214;
    if ((*(long *)(param_5 + lVar12) != 0) && (*(long *)(param_5 + lVar13) != 0)) {
      func_0x00010c0f5b20();
      if (*(long *)(param_5 + lVar13) == 0) {
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
      }
      else {
        func_0x00010bf60480(&uStack_98);
      }
      _CMTimeGetSeconds(&uStack_98);
      if (param_1 <= 0.0) {
        uVar2 = *(undefined8 *)(param_5 + _DAT_11276b1fc);
        puVar4 = *(undefined **)(param_5 + lVar12);
        func_0x00010c29a440(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0(uVar2,param_6,puVar4);
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(param_5 + _DAT_11276b1fc);
        uVar2 = *(undefined8 *)(param_5 + lVar12);
        func_0x00010c29a440(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar10,param_6,puVar4,uVar2);
        _objc_release(uVar2);
      }
      _objc_release(puVar4);
    }
    func_0x00010c131080(param_5);
    func_0x00010c26abc0(param_5);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)(param_5 + lVar12);
    *(ulong *)(param_5 + lVar12) = param_7;
    _objc_release(uVar2);
    if (param_7 != 0) {
      uVar1 = param_7;
      func_0x00010c0fe3a0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar1);
      puVar4 = PTR_PTR_1126d6a80;
      lVar12 = param_5;
      func_0x00010bf46560(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_5;
      func_0x00010c0ea360(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_5;
      func_0x00010bf99b40(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12a7c0(puVar4,param_6,lVar12,lVar11,lVar5,1,
                          *(undefined8 *)(param_5 + _DAT_11276b1f4));
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_5 + lVar13);
      *(undefined **)(param_5 + lVar13) = puVar4;
      _objc_release(uVar2);
      _objc_release(lVar5);
      _objc_release(lVar11);
      _objc_release(lVar12);
      func_0x00010bef7700(param_5,param_6,*(undefined8 *)(param_5 + lVar13));
      lVar12 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_5 + lVar13);
      func_0x00010c29bf00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(lVar12,param_6,uVar2);
      _objc_release(uVar2);
      _objc_release(lVar12);
      func_0x00010bf77e80(*(undefined8 *)(param_5 + lVar13),param_6,param_5);
      func_0x00010c18b5e0(*(undefined8 *)(param_5 + lVar13),param_6,param_5);
      func_0x00010c1d8aa0(*(undefined8 *)(param_5 + lVar13),param_6,param_5);
      puVar4 = PTR_PTR_1126b2368;
      _objc_opt_new();
      lVar12 = param_5;
      func_0x00010c0f0be0(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar12;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c2b53e0(puVar4,param_6,lVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
      _objc_release(lVar12);
      _objc_release(puVar4);
      uVar1 = param_7;
      func_0x00010c29a440(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0760(puVar6,param_6,uVar1,&PTR____CFConstantStringClassReference_110f0c9f8);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar1);
      func_0x00010c1d0760(puVar6,param_6,PTR____kCFBooleanTrue_11034ab68,
                          &PTR____CFConstantStringClassReference_110f0ca38);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c9b98;
      func_0x00010c0f2400(PTR_PTR_1126c9b98,param_6,puVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_5 + lVar13);
      uVar1 = param_7;
      func_0x00010c29a440(param_7);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_7;
      func_0x00010c29bb40(param_7);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_7;
      func_0x00010bfb12c0(param_7);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = param_5;
      func_0x00010c0f0be0(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar12;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar11;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_5;
      func_0x00010bfe8840();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28d080(uVar2,param_6,uVar1,uVar3,puVar4,uVar7,lVar5,0,0);
      _objc_release(lVar8);
      _objc_release(lVar5);
      _objc_release(lVar11);
      _objc_release(lVar12);
      _objc_release(uVar7);
      _objc_release(uVar3);
      _objc_release(uVar1);
      lVar11 = (long)_DAT_11276b1fc;
      lVar12 = *(long *)(param_5 + lVar11);
      uVar1 = param_7;
      func_0x00010c29a440(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0(lVar12,param_6,uVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar1);
      if (lVar12 != 0) {
        uVar10 = *(undefined8 *)(param_5 + lVar13);
        uVar2 = *(undefined8 *)(param_5 + lVar11);
        uVar1 = param_7;
        func_0x00010c29a440(param_7);
        fVar14 = SUB84(param_1,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(uVar2,param_6,uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        param_1 = (double)fVar14;
        func_0x00010c1ed700(param_1,uVar10);
        _objc_release(uVar2);
        _objc_release(uVar1);
      }
      puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_5 + lVar13);
      func_0x00010c29bf00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(uVar2);
      _objc_release(puVar9);
      func_0x00010c09c680(*(undefined8 *)(param_5 + lVar13));
      func_0x00010c29c980(*(undefined8 *)(param_5 + lVar13));
      lVar12 = param_5;
      func_0x00010c152980(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_5 + lVar13);
      func_0x00010c29bf00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(lVar12,param_6,uVar2);
      _objc_release(uVar2);
      _objc_release(lVar12);
      func_0x00010bfb68e0(param_7);
      uVar2 = *(undefined8 *)(param_5 + lVar13);
      func_0x00010c29bf00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_5 + lVar13);
      func_0x00010c29bf00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21e900();
      _objc_release(uVar2);
      _objc_release(puVar4);
      _objc_release(puVar6);
    }
  }
  _objc_release(param_7);
  return;
}



/* Entry: 107b7b034; end: 107b7b17f; -[SCOperaWebLayerViewController tearDownInlineVideos] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7b034(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_1;
  func_0x00010c07abc0();
  if ((int)lVar4 != 0) {
    func_0x00010bf84b00(param_1,param_2,0,0);
  }
  func_0x00010c26abc0(param_1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar2 = *(long *)(param_1 + _DAT_11276b1f8);
  _objc_retain(lVar2);
  lVar4 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar4 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(lVar2);
        }
        uVar3 = *(undefined8 *)(lStack_118 + lVar6 * 8);
        uVar1 = uVar3;
        func_0x00010c151860();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12c960();
        _objc_release(uVar1);
        func_0x00010c1f7800(uVar3,param_2,0);
        lVar6 = lVar6 + 1;
      } while (lVar4 != lVar6);
      lVar4 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar4 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = (long)_DAT_11276b210;
  if (*(long *)(lVar2 + lVar4) != 0) {
    func_0x00010c1a7f60(*(undefined8 *)(lVar2 + _DAT_11276b218),param_2,1);
    uVar1 = *(undefined8 *)(lVar2 + _DAT_11276b214);
    func_0x00010c0fe3a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    func_0x00010c29ca00(*(undefined8 *)(lVar2 + lVar4));
    lVar5 = lVar2;
    func_0x00010bf38f00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf4b900();
    _objc_release(lVar5);
    if ((int)lVar6 == 0) {
      func_0x00010bf7b6c0(*(undefined8 *)(lVar2 + lVar4),param_2,0);
    }
    else {
      func_0x00010c2a6740(*(undefined8 *)(lVar2 + lVar4),param_2,0);
      uVar1 = *(undefined8 *)(lVar2 + lVar4);
      func_0x00010c29bf00(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c960();
      _objc_release(uVar1);
      func_0x00010c12c8e0(*(undefined8 *)(lVar2 + lVar4));
    }
    func_0x00010c26ac40(*(undefined8 *)(lVar2 + lVar4));
    uVar1 = *(undefined8 *)(lVar2 + lVar4);
    *(undefined8 *)(lVar2 + lVar4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107b7b180; end: 107b7b287; -[SCOperaWebLayerViewController tearDownCurrentInlineInlineVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7b180(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11276b210;
  if (*(long *)(param_1 + lVar4) != 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276b218),param_2,1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_11276b214);
    func_0x00010c0fe3a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    func_0x00010c29ca00(*(undefined8 *)(param_1 + lVar4));
    lVar2 = param_1;
    func_0x00010bf38f00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf4b900();
    _objc_release(lVar2);
    if ((int)lVar3 == 0) {
      func_0x00010bf7b6c0(*(undefined8 *)(param_1 + lVar4),param_2,0);
    }
    else {
      func_0x00010c2a6740(*(undefined8 *)(param_1 + lVar4),param_2,0);
      uVar1 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c29bf00(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c960();
      _objc_release(uVar1);
      func_0x00010c12c8e0(*(undefined8 *)(param_1 + lVar4));
    }
    func_0x00010c26ac40(*(undefined8 *)(param_1 + lVar4));
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107b7b288; end: 107b7b58b; -[SCOperaWebLayerViewController expandInlineVideo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7b288(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  
  _objc_retain(param_7);
  lVar5 = param_5;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 == 0) {
    func_0x00010c284bc0(param_5);
    lVar5 = *(long *)(param_5 + _DAT_11276b200);
    uVar4 = param_7;
    func_0x00010bfb12c0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar5,param_6,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if (lVar5 == 0) {
      uVar4 = param_7;
      func_0x00010bfb12c0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar4;
      func_0x00010bfda7c0();
      if ((int)uVar1 == 0) {
        func_0x00010bfa7ac0(param_5,param_6,uVar4);
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_6,uVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778,param_6,puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf791e0(param_5,param_6,puVar3,uVar4,puVar2);
        _objc_release(puVar3);
        _objc_release(puVar2);
      }
      _objc_release(uVar4);
    }
    else {
      func_0x00010c28cc80(*(undefined8 *)(param_5 + _DAT_11276b210),param_6,lVar5);
    }
    lVar7 = param_5;
    func_0x00010c22f060();
    if ((int)lVar7 == 0) {
      lVar7 = param_5;
      func_0x00010c152980(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0(param_7);
      func_0x00010bf51460(lVar7,param_6,0);
      dVar8 = param_1;
      uVar4 = param_2;
      uVar1 = param_3;
      uVar10 = param_4;
      _objc_release(lVar7);
      lVar7 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      dVar9 = dVar8;
      _objc_release(lVar7);
      lVar7 = param_5;
      func_0x00010c08c520(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb1c0();
      _objc_release(lVar7);
      if (dVar9 != 0.0) {
        func_0x00010bc8525c(dVar8,uVar4,uVar1,uVar10,dVar9);
      }
      puVar2 = PTR_PTR_1126d6c10;
      _objc_alloc();
      func_0x00010c04bcc0(param_1,param_2,param_3,param_4,dVar8,uVar4,uVar1,uVar10);
      lVar7 = (long)_DAT_11276b22c;
      uVar4 = *(undefined8 *)(param_5 + lVar7);
      *(undefined **)(param_5 + lVar7) = puVar2;
      _objc_release(uVar4);
      lVar6 = (long)_DAT_11276b210;
      func_0x00010c219b20(*(undefined8 *)(param_5 + lVar6),param_6,*(undefined8 *)(param_5 + lVar7))
      ;
    }
    else {
      lVar6 = (long)_DAT_11276b210;
    }
    func_0x00010c2a6740(*(undefined8 *)(param_5 + lVar6),param_6,0);
    uVar4 = *(undefined8 *)(param_5 + lVar6);
    func_0x00010c29bf00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(uVar4);
    func_0x00010c12c8e0(*(undefined8 *)(param_5 + lVar6));
    *(undefined1 *)(param_5 + _DAT_11276b204) = 1;
    _objc_release(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 107b7b58c; end: 107b7b813; -[SCOperaWebLayerViewController fetchInlineVideoFirstFrameImage:] */

void FUN_107b7b58c(undefined *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfda7c0();
  if (((uVar1 & 1) == 0) && (uVar1 = param_3, func_0x00010bfda7c0(), (int)uVar1 == 0)) {
    puVar2 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2a3ba0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bdc2cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar4;
    func_0x00010bdc2c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR_PTR_1126b4960;
  func_0x00010bf58760(PTR_PTR_1126b4960);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  puVar5 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0(PTR_PTR_1126b7f68);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR___dispatch_main_q_11034be20;
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  _objc_retain(puVar2);
  _objc_retain(puVar2);
  func_0x00010c25f5a0(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 107b7b814; end: 107b7b86f;  */

void FUN_107b7b814(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf791e0(lVar1,param_2,param_4,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b7b870; end: 107b7b873;  */

void FUN_107b7b870(void)

{
  return;
}



/* Entry: 107b7b874; end: 107b7b927; -[SCOperaWebLayerViewController didReceiveInlineVideoFirstFrameImageData:forKey:fromURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7b874(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  if (puVar2 != (undefined *)0x0) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + _DAT_11276b200),param_2,puVar2,param_4);
    func_0x00010c28cc80(*(undefined8 *)(param_1 + _DAT_11276b210),param_2,puVar2);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107b7b928; end: 107b7bac7; -[SCOperaWebLayerViewController didTapToOpenInlineVideo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7b928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  long lVar4;
  
  puVar9 = &uStack_150;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  uVar6 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lVar8 = *(long *)(param_5 + _DAT_11276b1f8);
  _objc_retain(lVar8);
  lVar2 = lVar8;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar10 = *plStack_140;
    do {
      lVar11 = 0;
      do {
        if (*plStack_140 != lVar10) {
          _objc_enumerationMutation(lVar8);
        }
        puVar9 = *(undefined8 **)(lStack_148 + lVar11 * 8);
        func_0x00010bfb68e0(puVar9);
        lVar3 = param_5;
        uVar12 = uVar6;
        uVar13 = param_2;
        func_0x00010c152980();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_7;
        func_0x00010c09ef00(param_7,param_6,lVar3);
        iVar1 = (int)lVar4;
        _CGRectContainsPoint(uVar6,param_2,param_3,param_4,uVar12,uVar13);
        _objc_release(lVar3);
        if (iVar1 != 0) {
          func_0x00010bf7d800(param_5);
          goto LAB_107b7ba74;
        }
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar8;
      puVar9 = &uStack_150;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
LAB_107b7ba74:
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    _objc_retain(puVar9);
    puVar5 = (undefined1 *)puVar9;
    func_0x00010c29a440();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_7 + _DAT_11276b210);
    func_0x00010c29a440(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c0720c0(puVar5,param_6,uVar6);
    _objc_release(uVar6);
    _objc_release(puVar5);
    if (((ulong)puVar7 & 1) == 0) {
      func_0x00010c0fe6c0(param_7,param_6,puVar9);
    }
    else {
      func_0x00010bf9bda0();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar9);
    return;
  }
  return;
}



/* Entry: 107b7bac8; end: 107b7bb6b; -[SCOperaWebLayerViewController didTapVideo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7bac8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c29a440();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276b210);
  func_0x00010c29a440(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    func_0x00010c0fe6c0(param_1,param_2,param_3);
  }
  else {
    func_0x00010bf9bda0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b7bb6c; end: 107b7bdc3; -[SCOperaWebLayerViewController gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107b7bb6c(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,undefined8 param_6,undefined1 *param_7)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  puVar6 = &uStack_150;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_7;
  _objc_retain(param_7);
  if (param_7 == *(undefined1 **)(param_5 + _DAT_11276b21c)) {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_5;
    func_0x00010c09ef00(param_7);
    _objc_release(param_5);
    bVar7 = param_2 <= 20.0;
  }
  else if (param_7 == *(undefined1 **)(param_5 + _DAT_11276b220)) {
    puVar1 = param_5;
    func_0x00010c0f2520();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_5;
    func_0x00010c0eaa40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    puVar5 = puVar2;
    func_0x00010c0f13c0();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if ((int)puVar3 != 0) {
      uVar11 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      lStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      plStack_140 = (long *)0x0;
      lVar8 = *(long *)(param_5 + _DAT_11276b1f8);
      _objc_retain(lVar8);
      lVar4 = lVar8;
      func_0x00010bf52a60();
      if (lVar4 != 0) {
        lVar9 = *plStack_140;
        do {
          lVar10 = 0;
          do {
            if (*plStack_140 != lVar9) {
              _objc_enumerationMutation(lVar8);
            }
            func_0x00010bfb68e0(*(undefined8 *)(lStack_148 + lVar10 * 8));
            puVar1 = param_5;
            uVar12 = uVar11;
            dVar13 = param_2;
            func_0x00010c152980();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = param_7;
            puVar5 = puVar1;
            func_0x00010c09ef00();
            _CGRectContainsPoint(uVar11,param_2,param_3,param_4,uVar12,dVar13);
            _objc_release(puVar1);
            if (((ulong)puVar2 & 1) != 0) {
              _objc_release(lVar8);
              goto LAB_107b7bbdc;
            }
            lVar10 = lVar10 + 1;
          } while (lVar4 != lVar10);
          lVar4 = lVar8;
          puVar6 = &uStack_150;
          func_0x00010bf52a60();
        } while (lVar4 != 0);
      }
      _objc_release(lVar8);
      puVar5 = (undefined1 *)puVar6;
    }
    bVar7 = false;
  }
  else {
LAB_107b7bbdc:
    bVar7 = true;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return bVar7;
  }
  ___stack_chk_fail();
  if (puVar5 != *(undefined1 **)(param_7 + _DAT_11276b21c)) {
    return puVar5 == *(undefined1 **)(param_7 + _DAT_11276b220);
  }
  return true;
}



/* Entry: 107b7bdc4; end: 107b7bdf7; -[SCOperaWebLayerViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107b7bdc4(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + _DAT_11276b21c)) {
    return param_3 == *(long *)(param_1 + _DAT_11276b220);
  }
  return true;
}



/* Entry: 107b7bdf8; end: 107b7be2f; -[SCOperaWebLayerViewController gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b7bdf8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if ((param_3 == *(long *)(param_1 + _DAT_11276b220)) &&
     (param_4 == *(long *)(param_1 + _DAT_11276b21c))) {
    return 1;
  }
  return 0;
}



/* Entry: 107b7be30; end: 107b7be33; -[SCOperaWebLayerViewController remoteVideoViewControllerDidRotateToLandscape:] */

void FUN_107b7be30(void)

{
  return;
}



/* Entry: 107b7be34; end: 107b7be3f; -[SCOperaWebLayerViewController remoteVideoViewControllerDidPressExitButton] */

void FUN_107b7be34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 107b7be40; end: 107b7be4f; -[SCOperaWebLayerViewController remoteVideoViewControllerWasPresented] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7be40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c229470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setupScreenshotHidingViewForVide_112667f40,
             *(undefined8 *)(param_1 + _DAT_11276b214));
  return;
}



/* Entry: 107b7be50; end: 107b7c187; -[SCOperaWebLayerViewController remoteVideoViewControllerDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7be50(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,int param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar7 = (long)_DAT_11276b210;
  if (*(long *)(param_5 + lVar7) != 0) {
    lVar8 = (long)_DAT_11276b204;
    if (*(char *)(param_5 + lVar8) == '\x01') {
      func_0x00010bf7b6c0(*(long *)(param_5 + lVar7),param_6,1);
      lVar6 = param_5;
      func_0x00010c22f060();
      if ((int)lVar6 != 0) {
        uVar1 = *(undefined8 *)(param_5 + lVar7);
        func_0x00010c29bf00(uVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = (long)_DAT_11276b228;
        func_0x00010c12c9c0();
        _objc_release(uVar1);
        puVar4 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
        _objc_alloc();
        func_0x00010c050900();
        uVar1 = *(undefined8 *)(param_5 + lVar6);
        *(undefined **)(param_5 + lVar6) = puVar4;
        _objc_release(uVar1);
        uVar1 = *(undefined8 *)(param_5 + lVar7);
        func_0x00010c29bf00(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef9040();
        _objc_release(uVar1);
        puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = *(undefined8 *)(param_5 + lVar7);
        func_0x00010c29bf00(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e440();
        _objc_release(uVar1);
        _objc_release(puVar4);
        func_0x00010c1c8b80(*(undefined8 *)(param_5 + lVar7));
      }
      func_0x00010c10eda0(param_5);
      *(undefined1 *)(param_5 + lVar8) = 0;
    }
    else if (param_7 != 0) {
      func_0x00010c1a7f60(*(undefined8 *)(param_5 + _DAT_11276b218),param_6,1);
      func_0x00010bf7b6c0(*(undefined8 *)(param_5 + lVar7));
      if (*(long *)(param_5 + lVar7) == 0) {
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_68 = 0;
      }
      else {
        func_0x00010bf60480(&uStack_78);
      }
      _CMTimeGetSeconds(&uStack_78);
      uVar1 = 0x3ff0000000000000;
      dVar9 = param_1 + 1.0;
      func_0x00010c276fc0(*(undefined8 *)(param_5 + lVar7));
      if (param_1 <= dVar9) {
        func_0x00010c26abc0(param_5);
      }
      else {
        func_0x00010bef7700(param_5);
        lVar8 = param_5;
        func_0x00010c29bf00(param_5);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *(undefined8 *)(param_5 + lVar7);
        func_0x00010c29bf00(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(lVar8);
        _objc_release(uVar2);
        _objc_release(lVar8);
        func_0x00010bf77e80(*(undefined8 *)(param_5 + lVar7));
        lVar8 = param_5;
        func_0x00010c152980(param_5);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *(undefined8 *)(param_5 + lVar7);
        func_0x00010c29bf00(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(lVar8);
        _objc_release(uVar2);
        _objc_release(lVar8);
        func_0x00010bfb68e0(*(undefined8 *)(param_5 + _DAT_11276b214));
        uVar2 = *(undefined8 *)(param_5 + lVar7);
        func_0x00010c29bf00(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19f0e0(param_1,uVar1,param_3,param_4);
        _objc_release(uVar2);
        uVar3 = *(ulong *)(param_5 + lVar7);
        func_0x00010c079ba0();
        if ((uVar3 & 1) == 0) {
          puVar4 = PTR_PTR_1126cb2d0;
          func_0x00010c22ba80();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c231e40();
          _objc_release(puVar4);
          if (((ulong)puVar5 & 1) != 0) {
            return;
          }
        }
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0xc2000000;
        pcStack_90 = FUN_107b7c188;
        puStack_88 = &UNK_110842e18;
        lStack_80 = param_5;
        func_0x000100162d98("APPSTORE",&puStack_a0);
      }
    }
  }
  return;
}



/* Entry: 107b7c188; end: 107b7c193;  */

void FUN_107b7c188(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fe6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_playInlineVideo__11261d3d0,0);
  return;
}



/* Entry: 107b7c194; end: 107b7c25b; -[SCOperaWebLayerViewController remoteVideoViewControllerDidFinishPlaying] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7c194(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (long)_DAT_11276b210;
  if (*(long *)(param_2 + lVar3) != 0) {
    lVar1 = param_2;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_2 + lVar3);
    _objc_release();
    if (lVar1 != lVar4) {
      func_0x00010c276fc0(*(undefined8 *)(param_2 + lVar3));
      if (param_1 < 10.5) {
                    /* WARNING: Could not recover jumptable at 0x00010c0fea30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(undefined8 *)(param_2 + lVar3),PTR_s_playVideo__11261d4a8,1);
        return;
      }
      func_0x00010c26abc0(param_2);
      lVar3 = (long)_DAT_11276b214;
      uVar2 = *(undefined8 *)(param_2 + lVar3);
      func_0x00010c151860(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c960();
      _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1f7810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_2 + lVar3),PTR_s_setScreenshot__11265b828,0);
      return;
    }
  }
  return;
}



/* Entry: 107b7c25c; end: 107b7c25f; -[SCOperaWebLayerViewController remoteVideoViewControllerDidPressShowActionMenuButton] */

void FUN_107b7c25c(void)

{
  return;
}



/* Entry: 107b7c260; end: 107b7c263; -[SCOperaWebLayerViewController pageIsFullyVisible:] */

void FUN_107b7c260(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07abd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isPresentingInlineVideo_1125fc500);
  return;
}



/* Entry: 107b7c264; end: 107b7c267; -[SCOperaWebLayerViewController pageIsPartiallyVisible:] */

void FUN_107b7c264(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07abd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isPresentingInlineVideo_1125fc500);
  return;
}



/* Entry: 107b7c268; end: 107b7c26f; -[SCOperaWebLayerViewController relativePositionForPageId:] */

undefined8 FUN_107b7c268(void)

{
  return 0;
}



/* Entry: 107b7c270; end: 107b7c273; -[SCOperaWebLayerViewController setImageForBackdrop:] */

void FUN_107b7c270(void)

{
  return;
}



/* Entry: 107b7c274; end: 107b7c287; -[SCOperaWebLayerViewController safeInsetsForPage] */

undefined8 FUN_107b7c274(void)

{
  return *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
}



/* Entry: 107b7c288; end: 107b7c28f; -[SCOperaWebLayerViewController isPaused] */

undefined8 FUN_107b7c288(void)

{
  return 0;
}



/* Entry: 107b7c290; end: 107b7c337; -[SCOperaWebLayerViewController scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7c290(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  if ((*(byte *)(param_1 + _DAT_11276b208) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_11276b208) = 1;
    lVar1 = param_1;
    func_0x00010c0b4e40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010c0b4e40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c195460();
      _objc_release(lVar1);
    }
    puVar2 = PTR_PTR_1126b2638;
    func_0x00010c2614c0(PTR_PTR_1126b2638);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04420(param_1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea08b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendSubviewScrollViewIsAtTopBou_112585bd0,0)
  ;
  return;
}



/* Entry: 107b7c338; end: 107b7c33b; -[SCOperaWebLayerViewController scrollViewDidEndDecelerating:] */

void FUN_107b7c338(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9c2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scrollViewDidEndScrolling_112584a58);
  return;
}



/* Entry: 107b7c33c; end: 107b7c347; -[SCOperaWebLayerViewController scrollViewDidEndDragging:willDecelerate:] */

void FUN_107b7c33c(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if ((param_4 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be9c2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scrollViewDidEndScrolling_112584a58);
  return;
}



/* Entry: 107b7c348; end: 107b7c34b; -[SCOperaWebLayerViewController scrollViewDidEndScrollingAnimation:] */

void FUN_107b7c348(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9c2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scrollViewDidEndScrolling_112584a58);
  return;
}



/* Entry: 107b7c34c; end: 107b7c41f; -[SCOperaWebLayerViewController _scrollViewDidEndScrolling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7c34c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + _DAT_11276b208) = 0;
  lVar1 = param_1;
  func_0x00010c0b4e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c0b4e40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00010c0f2520();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0eaa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0f13c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    func_0x00010c0fe7a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bea08d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sendSubviewScrollViewStopEvent_112585bd8);
    return;
  }
  return;
}



/* Entry: 107b7c420; end: 107b7c5af; -[SCOperaWebLayerViewController _sendSubviewScrollViewStopEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7c420(undefined8 param_1,double param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  double unaff_d8;
  double unaff_d9;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  double dStack_f0;
  double dStack_e8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  dVar8 = param_2;
  if (puVar2 != (undefined *)0x0) {
    puVar3 = param_3;
    func_0x00010c152980();
    _objc_retainAutoreleasedReturnValue();
    dVar8 = param_2;
    if (puVar3 != (undefined *)0x0) {
      func_0x00010bf4cdc0(puVar3);
      unaff_d9 = param_2;
      func_0x00010bf4d5e0(puVar3);
      dVar8 = unaff_d9;
      func_0x00010bfb68e0(puVar2);
      puVar4 = PTR_PTR_1126b2638;
      func_0x00010c2614e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b6008;
      func_0x00010c261520();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_88 = puVar5;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_80 = puVar6;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      param_5 = puVar4;
      func_0x00010bf04440(param_3);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      unaff_d8 = param_2;
    }
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_107b7c5b0;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar2;
  dStack_f0 = unaff_d9;
  dStack_e8 = unaff_d8;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0();
  _objc_release();
  if ((((ulong)param_5 & 1) != 0) || ((bool)puVar2[_DAT_11276b20c] != dVar8 <= 0.0)) {
    puVar3 = PTR_PTR_1126b2638;
    func_0x00010c261540();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b6008;
    func_0x00010c261540();
    _objc_retainAutoreleasedReturnValue();
    param_5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_108 = puVar4;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_100 = param_5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04440(puVar2);
    _objc_release(puVar5);
    _objc_release(param_5);
    _objc_release(puVar4);
    _objc_release();
    puVar2[_DAT_11276b20c] = dVar8 <= 0.0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_107b7c71c;
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc0000000;
  uStack_148 = 0x107b7c7a4;
  puStack_140 = &UNK_110848088;
  puStack_138 = puVar3;
  puStack_130 = param_5;
  puStack_128 = puVar2;
  ppuStack_120 = &puStack_a0;
  if (lRam00000001137276e8 != -1) {
    func_0x00010002a2fc(0x1137276e8,&puStack_158);
  }
  uVar1 = uRam00000001137276f0;
  _objc_retain(uRam00000001137276f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b7c5b0; end: 107b7c71b; -[SCOperaWebLayerViewController _sendSubviewScrollViewIsAtTopBoundaryEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b7c5b0(undefined8 param_1,double param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0();
  _objc_release();
  if ((((ulong)param_5 & 1) != 0) || ((bool)param_3[_DAT_11276b20c] != param_2 <= 0.0)) {
    puVar2 = PTR_PTR_1126b2638;
    func_0x00010c261540();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b6008;
    func_0x00010c261540();
    _objc_retainAutoreleasedReturnValue();
    param_5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_78 = puVar3;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = param_5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf04440(param_3);
    _objc_release(puVar4);
    _objc_release(param_5);
    _objc_release(puVar3);
    _objc_release();
    param_3[_DAT_11276b20c] = param_2 <= 0.0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_107b7c71c;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc0000000;
  uStack_b8 = 0x107b7c7a4;
  puStack_b0 = &UNK_110848088;
  puStack_a8 = puVar2;
  puStack_a0 = param_5;
  puStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  if (lRam00000001137276e8 != -1) {
    func_0x00010002a2fc(0x1137276e8,&puStack_c8);
  }
  uVar1 = uRam00000001137276f0;
  _objc_retain(uRam00000001137276f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b7c71c; end: 107b7c7fb; +[SCOperaLocalWebJavascriptBridge shared] */

void FUN_107b7c71c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  uStack_38 = 0x107b7c7a4;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001137276e8 != -1) {
    func_0x00010002a2fc(0x1137276e8,&puStack_48);
  }
  uVar1 = uRam00000001137276f0;
  _objc_retain(uRam00000001137276f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b7c7fc; end: 107b7c843; -[SCOperaLocalWebJavascriptBridge init] */

undefined8 FUN_107b7c7fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c027f00(param_1,param_2,uVar1);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107b7c844; end: 107b7c8db; -[SCOperaLocalWebJavascriptBridge initWithMainPerformer:] */

undefined1 * FUN_107b7c844(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa0a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSPointerArray_1126c4b90;
    func_0x00010c2a2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107b7c8dc; end: 107b7c9bf; -[SCOperaLocalWebJavascriptBridge bridgeFunction:URL:parameters:] */

void FUN_107b7c8dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107b7c9c0;
  puStack_68 = &UNK_11084c4a0;
  uStack_60 = param_3;
  lStack_58 = param_1;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b7c9c0; end: 107b7ca03;  */

void FUN_107b7c9c0(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = 0x10eb0b58;
  func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110eb0b58,param_2,
                      *(undefined8 *)(param_1 + 0x20));
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc71f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s__addInlineVideoWithURL_parameter_11254f618,
               *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
    return;
  }
  return;
}



/* Entry: 107b7ca04; end: 107b7ca0b; -[SCOperaLocalWebJavascriptBridge addInlineVideoListener:] */

void FUN_107b7ca04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befaab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addPointer__11259c450);
  return;
}



/* Entry: 107b7ca0c; end: 107b7caeb; -[SCOperaLocalWebJavascriptBridge initializationJS] */

void FUN_107b7ca0c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _CFBundleGetMainBundle();
  _CFBundleGetValueForInfoDictionaryKey();
  if (param_1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c0b6660();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfedc40();
    _objc_retainAutoreleasedReturnValue();
    param_1 = puVar2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    _objc_retain();
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


