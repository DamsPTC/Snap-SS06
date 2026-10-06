/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1069b4264; end: 1069b42ab; -[SCModularCallEntryPoint _updateNotificationDisplayPolicy] */

void FUN_1069b4264(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1049a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1069b42ac; end: 1069b43b7; -[SCModularCallEntryPoint _onViewWillAppearTimeout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b42ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x0001069b31a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x0001069b31a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d0720(lVar2,param_2,lVar3,0);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126cf810;
  _objc_alloc(PTR_PTR_1126cf810);
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112754e28;
    _objc_loadWeakRetained(lVar1);
  }
  lVar2 = lVar1;
  func_0x00010bfcdfa0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0184a0(puVar4,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126cf818;
  func_0x00010bf281c0(PTR_PTR_1126cf818);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b35a0(puVar4,param_2,puVar5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1069b43b8; end: 1069b44b3; -[SCModularCallEntryPoint dismissModularCallViewController:reason:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b43b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112754de4;
  if ((*(byte *)(param_1 + lVar3) & 1) == 0) {
    _objc_retain(param_5);
    lVar1 = param_1 + _DAT_112754df0;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
    _objc_release(param_5);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010bedc300(param_1);
    *(undefined1 *)(param_1 + lVar3) = 1;
  }
  lVar3 = param_1 + _DAT_112754df0;
  _objc_loadWeakRetained(lVar3);
  lVar1 = lVar3;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112754df0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0d0720(lVar1,param_2,param_1,param_4);
  _objc_release(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1069b44b4; end: 1069b4543; -[SCModularCallEntryPoint modularCallViewControllerDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b44b4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + _DAT_112754de4) & 1) != 0) {
    return;
  }
  lVar1 = param_1 + _DAT_112754df0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112754df0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0d0720(lVar2,param_2,param_1,0);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069b4544; end: 1069b45c3; -[SCModularCallEntryPoint clearNotificationWithDidAcceptCall:] */

void FUN_1069b4544(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x0001069b31a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001069b31a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d06a0(uVar2,param_2,param_1,param_3);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069b45c4; end: 1069b466f; -[SCModularCallEntryPoint modularCallViewControllerDidFullscreenStateChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b45c4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if ((param_3 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + _DAT_112754dd8);
    func_0x00010c07f240();
    if ((uVar1 & 1) != 0) {
      return;
    }
  }
  lVar2 = param_1;
  func_0x0001069b31a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001069b31a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d0680(lVar3,param_2,param_1,param_3);
  _objc_release(param_1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1069b4670; end: 1069b4817; -[SCModularCallEntryPoint modularCallViewControllerDisplayWebUpsellSheet:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b4670(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + _DAT_112754e38);
  }
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x0001069b31a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c2688a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010bf5e540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010bf51800();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c074920();
    _objc_release(lVar1);
    if ((int)lVar6 == 0) {
      lVar1 = 0;
      uVar5 = 7;
    }
    else {
      lVar1 = lVar2;
      func_0x00010bf517c0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = 8;
    }
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    if (param_1 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = param_1 + _DAT_112754e3c;
      _objc_loadWeakRetained(lVar6);
    }
    lVar4 = lVar6;
    func_0x00010bf22d40(lVar6,param_2,puVar3,lVar1,uVar5,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    if (param_1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + _DAT_112754e38);
    }
    func_0x00010bf9d620(uVar5,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(puVar3);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069b4818; end: 1069b48b7; -[SCModularCallEntryPoint modularCallViewControllerDidTapReplyWithSnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b4818(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x0001069b31a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x0001069b31a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112754dd4);
  func_0x00010bfc26a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d06c0(lVar2,param_2,lVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069b48b8; end: 1069b494b; -[SCModularCallEntryPoint modularCallViewController:willDisplayCallFeedbackTrayWith:] */

void FUN_1069b48b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x0001069b31a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001069b31a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d0700(uVar2,param_2,param_1,param_4);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069b494c; end: 1069b4b33; -[SCModularCallEntryPoint modularCallViewControllerDisplayShareSheet:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b494c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + _DAT_112754e40);
  }
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x0001069b31a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2688a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf5e540();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf51800();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c074920();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar5 != 0) {
      puVar6 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      if (param_1 == 0) {
        lVar1 = 0;
      }
      else {
        lVar1 = param_1 + _DAT_112754e44;
        _objc_loadWeakRetained(lVar1);
      }
      lVar2 = param_1;
      func_0x0001069b31a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c2688a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf5e540();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf517c0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar1;
      func_0x00010bf22f20(lVar1,param_2,param_1,puVar6,lVar5,1,0x16);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (param_1 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)(param_1 + _DAT_112754e40);
      }
      func_0x00010bf9d620(uVar8,param_2,lVar7);
      _objc_release(lVar7);
      _objc_release(puVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069b4b34; end: 1069b4be7; -[SCModularCallEntryPoint modularCallViewController:viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b4b34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112754de0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  _objc_retain(param_4);
  func_0x00010c069d00(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x0001069b31a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001069b31a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d06e0(lVar1,param_2,param_1,param_4);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1069b4be8; end: 1069b4c5f; -[SCModularCallEntryPoint modularCallViewController:lensSafeRenderRectDidChange:] */

void FUN_1069b4be8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x0001069b31a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c096660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0968c0(param_1,param_2,param_3,param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1069b4c60; end: 1069b4cd7; -[SCModularCallEntryPoint modularCallViewController:lensCaptureButtonRectDidChange:] */

void FUN_1069b4c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x0001069b31a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c096660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0905c0(param_1,param_2,param_3,param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1069b4cd8; end: 1069b4d03; -[SCModularCallEntryPoint dWebExplainerTrayDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b4cd8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112754e38);
  }
  func_0x00010c12e1c0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1069b4d04; end: 1069b4d6f; -[SCModularCallEntryPoint groupExternalShareScopeDidEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b4d04(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112754e40);
  }
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    if (param_1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + _DAT_112754e40);
    }
    func_0x00010c12e1c0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1069b4d70; end: 1069b4d7f; -[SCModularCallEntryPoint numberOfUsersPresent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1069b4d70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112754dcc);
}



/* Entry: 1069b4d80; end: 1069b4d8f; -[SCModularCallEntryPoint numberOfUsersPresentOnWeb] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1069b4d80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112754dd0);
}



/* Entry: 1069b4d90; end: 1069b4f1b; -[SCModularCallEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b4d90(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112754e44);
  _objc_storeStrong(param_1 + _DAT_112754e40,0);
  _objc_destroyWeak(param_1 + _DAT_112754e3c);
  _objc_storeStrong(param_1 + _DAT_112754e38,0);
  _objc_destroyWeak(param_1 + _DAT_112754e34);
  _objc_destroyWeak(param_1 + _DAT_112754e30);
  _objc_destroyWeak(param_1 + _DAT_112754e2c);
  _objc_destroyWeak(param_1 + _DAT_112754e28);
  _objc_destroyWeak(param_1 + _DAT_112754e24);
  _objc_destroyWeak(param_1 + _DAT_112754e20);
  _objc_destroyWeak(param_1 + _DAT_112754e1c);
  _objc_destroyWeak(param_1 + _DAT_112754e18);
  _objc_destroyWeak(param_1 + _DAT_112754e14);
  _objc_destroyWeak(param_1 + _DAT_112754e10);
  _objc_destroyWeak(param_1 + _DAT_112754e0c);
  _objc_destroyWeak(param_1 + _DAT_112754e08);
  _objc_destroyWeak(param_1 + _DAT_112754e04);
  _objc_destroyWeak(param_1 + _DAT_112754e00);
  _objc_destroyWeak(param_1 + _DAT_112754dfc);
  _objc_destroyWeak(param_1 + _DAT_112754df8);
  _objc_destroyWeak(param_1 + _DAT_112754df4);
  _objc_destroyWeak(param_1 + _DAT_112754df0);
  _objc_destroyWeak(param_1 + _DAT_112754dec);
  _objc_storeStrong(param_1 + _DAT_112754de0,0);
  _objc_storeStrong(param_1 + _DAT_112754ddc,0);
  _objc_storeStrong(param_1 + _DAT_112754dd4,0);
  _objc_storeStrong(param_1 + _DAT_112754de8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112754dd8,0);
  return;
}



/* Entry: 1069b4f1c; end: 1069b513b; -[SCModularCallIncomingCallRequestOnFriendsFeedEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b4f1c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_alloc_init();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112754e4c);
  *(undefined **)(param_1 + _DAT_112754e4c) = puVar1;
  _objc_release(uVar6);
  _objc_initWeak(auStack_78,param_1);
  lVar2 = param_1 + _DAT_112754e5c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a6420();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1069b513c;
  puStack_88 = &UNK_110846510;
  _objc_copyWeak(auStack_80,auStack_78);
  lVar5 = lVar4;
  func_0x00010c25ff60(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_112754e5c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf75dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_78);
  lVar5 = lVar4;
  func_0x00010c25ff60(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010bec7900(param_1);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 1069b513c; end: 1069b518f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b513c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_112754e48) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1069b5190; end: 1069b51e7; -[SCModularCallIncomingCallRequestOnFriendsFeedEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b5190(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_112754e4c));
  puStack_28 = PTR_PTR_1126f4148;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069b51e8; end: 1069b52a3; -[SCModularCallIncomingCallRequestOnFriendsFeedEntryPoint shouldProcessIncomingCallRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1069b51e8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  
  lVar1 = param_1;
  FUN_1069b52a4();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2653a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  FUN_1069b52a4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0f3bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c0741e0(lVar2,param_2,lVar4);
  if ((int)lVar5 == 0) {
    bVar6 = 0;
  }
  else {
    bVar6 = *(byte *)(param_1 + _DAT_112754e48) ^ 1;
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return bVar6 & 1;
}



/* Entry: 1069b52a4; end: 1069b52c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b52a4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112754e60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069b52c8; end: 1069b5323; -[SCModularCallIncomingCallRequestOnFriendsFeedEntryPoint _didEnterFriendsFeedScreen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b52c8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112754e50;
  if ((*(byte *)(param_1 + lVar2) & 1) != 0) {
    return;
  }
  func_0x00010bec7a00();
  *(undefined1 *)(param_1 + lVar2) = 1;
  lVar2 = (long)_DAT_112754e54;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069b5324; end: 1069b5537; -[SCModularCallIncomingCallRequestOnFriendsFeedEntryPoint _subscribeToIncomingCallRequests] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b5324(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  puVar1 = PTR_PTR_1126cf820;
  _objc_alloc();
  lVar2 = param_1;
  FUN_1069b5538(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c268980();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_1069b5538(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c268960();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112754e68;
    _objc_loadWeakRetained(lVar10);
  }
  lVar6 = lVar10;
  func_0x00010c0d0660(lVar10);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112754e70;
    _objc_loadWeakRetained(lVar11);
  }
  lVar7 = lVar11;
  func_0x00010bfb2660(lVar11,param_2,&PTR___NSConcreteGlobalBlock_110950e10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c050660(puVar1,param_2,lVar3,lVar5,lVar6,lVar7,param_1);
  lVar9 = (long)_DAT_112754e58;
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar11);
  _objc_release(lVar6);
  _objc_release(lVar10);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  FUN_1069b5538(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c268980();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfebda0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2601c0(uVar8,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar8);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069b5538; end: 1069b555b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b5538(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112754e64);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069b555c; end: 1069b5563;  */

void FUN_1069b555c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2688d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_talkContextFactoryObjc_112677c58);
  return;
}



/* Entry: 1069b5564; end: 1069b56d3; -[SCModularCallIncomingCallRequestOnFriendsFeedEntryPoint _subscribeToFriendsFeedLifeCycleEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b5564(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_112754e6c;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar7;
  func_0x00010bfba360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c29d340();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  lVar5 = lVar4;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112754e54);
  *(long *)(param_1 + _DAT_112754e54) = lVar5;
  _objc_release(uVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar7);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1069b56d4; end: 1069b57c7;  */

void FUN_1069b56d4(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1069b57c8;
  puStack_50 = &UNK_110849200;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0c1560(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 1069b57c8; end: 1069b581f;  */

void FUN_1069b57c8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069b5820; end: 1069b58b7; -[SCModularCallIncomingCallRequestOnFriendsFeedEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b5820(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112754e70);
  _objc_destroyWeak(param_1 + _DAT_112754e6c);
  _objc_destroyWeak(param_1 + _DAT_112754e68);
  _objc_destroyWeak(param_1 + _DAT_112754e64);
  _objc_destroyWeak(param_1 + _DAT_112754e60);
  _objc_destroyWeak(param_1 + _DAT_112754e5c);
  _objc_storeStrong(param_1 + _DAT_112754e54,0);
  _objc_storeStrong(param_1 + _DAT_112754e58,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112754e4c,0);
  return;
}



/* Entry: 1069b58b8; end: 1069b5d1b; -[SCModularCallIncomingCallRequestOnTalkUIEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b58b8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_alloc_init();
  uVar10 = *(undefined8 *)(param_1 + _DAT_112754e74);
  *(undefined **)(param_1 + _DAT_112754e74) = puVar1;
  _objc_release(uVar10);
  puVar1 = PTR_PTR_1126cf820;
  _objc_alloc();
  lVar2 = param_1;
  FUN_1069b5d1c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c268980();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_1069b5d1c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c268960();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112754e94;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c0d0660();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112754e98;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010c2688c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c050660();
  lVar11 = (long)_DAT_112754e78;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_initWeak(auStack_80,param_1);
  lVar6 = param_1 + _DAT_112754e88;
  _objc_loadWeakRetained(lVar6);
  lVar8 = lVar6;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010c2a6420();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x1069b5d40;
  puStack_90 = &UNK_110846510;
  _objc_copyWeak(auStack_88,auStack_80);
  lVar3 = lVar2;
  func_0x00010c25ff60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar8);
  _objc_release(lVar6);
  lVar6 = param_1 + _DAT_112754e88;
  _objc_loadWeakRetained(lVar6);
  lVar8 = lVar6;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar8;
  func_0x00010bf75dc0();
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x1069b5d68;
  puStack_b8 = &UNK_110846510;
  _objc_copyWeak(auStack_b0,auStack_80);
  lVar3 = lVar2;
  func_0x00010c25ff60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar8);
  _objc_release(lVar6);
  lVar6 = param_1 + _DAT_112754e8c;
  _objc_loadWeakRetained(lVar6);
  lVar8 = lVar6;
  func_0x00010bf364c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_d8,auStack_80);
  lVar2 = lVar8;
  func_0x00010c25ff60(lVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar2);
  _objc_release(lVar8);
  _objc_release(lVar6);
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  param_1 = param_1 + _DAT_112754e90;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010c268980();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010bfebda0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2601c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar10);
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 1069b5d1c; end: 1069b5d93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b5d1c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112754e90);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069b5d94; end: 1069b5ddb;  */

void FUN_1069b5d94(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6bce0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069b5ddc; end: 1069b5e33; -[SCModularCallIncomingCallRequestOnTalkUIEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b5ddc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_112754e74));
  puStack_28 = PTR_PTR_1126f4150;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069b5e34; end: 1069b5e77; -[SCModularCallIncomingCallRequestOnTalkUIEntryPoint shouldProcessIncomingCallRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1069b5e34(long param_1)

{
  byte bVar1;
  
  if ((*(char *)(param_1 + _DAT_112754e80) == '\x01') &&
     ((*(byte *)(param_1 + _DAT_112754e84) & 1) == 0)) {
    bVar1 = *(byte *)(param_1 + _DAT_112754e7c) ^ 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 1069b5e78; end: 1069b5fab; -[SCModularCallIncomingCallRequestOnTalkUIEntryPoint _onTalkUIChatEvent:] */

void FUN_1069b5e78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1069b5fac;
  puStack_30 = &UNK_110842e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x1069b5fc0;
  puStack_58 = &UNK_110842e18;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x1069b5fd8;
  puStack_80 = &UNK_110842e18;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x1069b5fec;
  puStack_a8 = &UNK_110842e18;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x1069b6000;
  puStack_d0 = &UNK_110842e18;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x1069b6018;
  puStack_f8 = &UNK_110842e18;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x1069b6030;
  puStack_120 = &UNK_110846710;
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x1069b6050;
  puStack_148 = &UNK_110842e18;
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  uStack_178 = 0x1069b6068;
  puStack_170 = &UNK_110842e18;
  uStack_168 = param_1;
  uStack_140 = param_1;
  uStack_118 = param_1;
  uStack_f0 = param_1;
  uStack_c8 = param_1;
  uStack_a0 = param_1;
  uStack_78 = param_1;
  uStack_50 = param_1;
  uStack_28 = param_1;
  func_0x00010c0bd740(param_3,param_2,&puStack_48,&puStack_70,&puStack_98,&puStack_c0,&puStack_e8,
                      &puStack_110,&puStack_138,&puStack_160,&puStack_188);
  return;
}



/* Entry: 1069b5fac; end: 1069b607b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b5fac(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112754e80) = 0;
  return;
}



/* Entry: 1069b607c; end: 1069b60f7; -[SCModularCallIncomingCallRequestOnTalkUIEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b607c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112754e98);
  _objc_destroyWeak(param_1 + _DAT_112754e94);
  _objc_destroyWeak(param_1 + _DAT_112754e90);
  _objc_destroyWeak(param_1 + _DAT_112754e8c);
  _objc_destroyWeak(param_1 + _DAT_112754e88);
  _objc_storeStrong(param_1 + _DAT_112754e78,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112754e74,0);
  return;
}



/* Entry: 1069b60f8; end: 1069b61af; -[SCModularCallNotificationProcessorEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b60f8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1;
  FUN_1069b61b0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2689a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = 0;
  if (param_1 != 0) {
    lVar4 = param_1 + _DAT_112754ea0;
    _objc_loadWeakRetained(lVar4);
  }
  lVar5 = lVar4;
  func_0x00010c0d0660(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8e80(lVar3,param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069b61b0; end: 1069b61d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b61b0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112754ea4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069b61d4; end: 1069b6273; -[SCModularCallNotificationProcessorEntryPoint end] */

void FUN_1069b61d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  FUN_1069b61b0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2689a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8e80();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126f4158;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069b6274; end: 1069b62b7; -[SCModularCallNotificationProcessorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069b6274(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112754ea4);
  _objc_destroyWeak(param_1 + _DAT_112754ea0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112754e9c);
  return;
}



/* Entry: 1069b62b8; end: 1069b6357; -[SCCallUIModularCallCameraManager initWithCallCameraController:] */

undefined1 * FUN_1069b62b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f4160;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf59a00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    func_0x00010c1a8ca0(*(undefined8 *)((long)puVar1 + 0x10));
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069b6358; end: 1069b6363; -[SCCallUIModularCallCameraManager activate] */

void FUN_1069b6358(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bed30b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateAndFlushToken_1125925d0);
  return;
}



/* Entry: 1069b6364; end: 1069b636b; -[SCCallUIModularCallCameraManager background] */

void FUN_1069b6364(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bed30b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateAndFlushToken_1125925d0);
  return;
}



/* Entry: 1069b636c; end: 1069b639b; -[SCCallUIModularCallCameraManager dispose] */

void FUN_1069b636c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c06a220(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069b639c; end: 1069b63cb; -[SCCallUIModularCallCameraManager startCameraWithCameraType:] */

void FUN_1069b639c(long param_1)

{
  func_0x00010c177420(*(undefined8 *)(param_1 + 8));
  *(undefined1 *)(param_1 + 0x19) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bed30b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateAndFlushToken_1125925d0);
  return;
}



/* Entry: 1069b63cc; end: 1069b63d3; -[SCCallUIModularCallCameraManager stopCamera] */

void FUN_1069b63cc(long param_1)

{
  *(undefined1 *)(param_1 + 0x19) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bed30b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateAndFlushToken_1125925d0);
  return;
}



/* Entry: 1069b63d4; end: 1069b640f; -[SCCallUIModularCallCameraManager flipCamera] */

bool FUN_1069b63d4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf2b540(lVar1);
  func_0x00010c177420(*(undefined8 *)(param_1 + 8),param_2,lVar1 == 0);
  return lVar1 == 0;
}



/* Entry: 1069b6410; end: 1069b6417; -[SCCallUIModularCallCameraManager setSponsoredLensAttachmentOpened:] */

void FUN_1069b6410(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1b) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bed30b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateAndFlushToken_1125925d0);
  return;
}



/* Entry: 1069b6418; end: 1069b6447; -[SCCallUIModularCallCameraManager enableLensesWithLensToRestore:] */

void FUN_1069b6418(long param_1)

{
  func_0x00010c1bd080(*(undefined8 *)(param_1 + 8));
  *(undefined1 *)(param_1 + 0x1a) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bed30b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateAndFlushToken_1125925d0);
  return;
}



/* Entry: 1069b6448; end: 1069b644f; -[SCCallUIModularCallCameraManager disableLenses] */

void FUN_1069b6448(long param_1)

{
  *(undefined1 *)(param_1 + 0x1a) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bed30b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateAndFlushToken_1125925d0);
  return;
}



/* Entry: 1069b6450; end: 1069b6457; -[SCCallUIModularCallCameraManager selectLens:] */

void FUN_1069b6450(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c158c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_selectLens__112633d30);
  return;
}



/* Entry: 1069b6458; end: 1069b645f; -[SCCallUIModularCallCameraManager getAppliedLens] */

void FUN_1069b6458(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf07e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_appliedLens_11259f940);
  return;
}



/* Entry: 1069b6460; end: 1069b6467; -[SCCallUIModularCallCameraManager getAppliedLensInfo] */

void FUN_1069b6460(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf07ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_appliedLensInfo_11259f958);
  return;
}



/* Entry: 1069b6468; end: 1069b646f; -[SCCallUIModularCallCameraManager appliedLensObservable] */

void FUN_1069b6468(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf07f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_appliedLensObservableObjc_11259f978);
  return;
}



/* Entry: 1069b6470; end: 1069b6477; -[SCCallUIModularCallCameraManager selectedLensInfoObservable] */

void FUN_1069b6470(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c159af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_selectedLensInfoObservableObjc_1126340d8);
  return;
}



/* Entry: 1069b6478; end: 1069b650f; -[SCCallUIModularCallCameraManager _updateAndFlushToken] */

void FUN_1069b6478(long param_1,undefined8 param_2)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    bVar1 = *(byte *)(param_1 + 0x19);
  }
  else {
    bVar1 = 0;
  }
  func_0x00010c176500(*(undefined8 *)(param_1 + 0x10),param_2,bVar1 & 1);
  func_0x00010bf295e0();
  func_0x00010c1bd600(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c0985a0();
  func_0x00010c1bd720(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c1a9ce0(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bfb3310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_flushTokenUpdates__1125ca668,
             *(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1069b6510; end: 1069b653f; -[SCCallUIModularCallCameraManager .cxx_destruct] */

void FUN_1069b6510(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069b6540; end: 1069b6723; -[SCModularCallController initWithTalkManager:talkContext:callLaunchAction:callKitServices:cameraManager:talkAudioServices:sharedLensController:talkScreenshotSender:lensLoggingInfoProvider:] */

undefined1 *
FUN_1069b6540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f4168;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_8;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_7;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = param_11;
    _objc_release(uVar3);
    func_0x00010bdf3240(puVar1);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1069b6724; end: 1069b6adb; -[SCModularCallController _createSession:] */

void FUN_1069b6724(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar5;
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [8];
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 *puVar4;
  
  _objc_retain(param_3);
  puStack_168 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  puStack_160 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 0;
  puStack_158 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x2020000000;
  uStack_b8 = 0;
  puStack_1e8 = &uStack_100;
  uStack_100 = 0;
  uStack_f0 = 0x3032000000;
  pcStack_e8 = FUN_1069b6adc;
  uStack_e0 = 0x1069b6aec;
  uStack_d8 = 0;
  puStack_148 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x2020000000;
  uStack_108 = 0xffffffffffffffff;
  puStack_1b8 = &uStack_140;
  uStack_140 = 0;
  uStack_130 = 0x2020000000;
  uStack_128 = 0;
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  pcStack_178 = FUN_1069b6af4;
  puStack_170 = &UNK_110950e30;
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  uStack_1a0 = 0x1069b6b88;
  puStack_198 = &UNK_110950d60;
  puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d8 = 0xc2000000;
  uStack_1d0 = 0x1069b6bd4;
  puStack_1c8 = &UNK_11086dfb8;
  puStack_208 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_200 = 0xc2000000;
  uStack_1f8 = 0x1069b6c2c;
  puStack_1f0 = &UNK_110950d60;
  puStack_1c0 = puStack_1e8;
  puStack_190 = puStack_1e8;
  puStack_150 = puStack_1e8;
  puStack_138 = puStack_1b8;
  puStack_118 = puStack_148;
  puStack_f8 = puStack_1e8;
  puStack_c8 = puStack_158;
  puStack_a8 = puStack_160;
  puStack_88 = puStack_168;
  func_0x00010c0c0280(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf5e540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  if ((*(byte *)(puStack_138 + 3) & 1) == 0) {
    uVar5 = uVar2;
    func_0x00010bf51800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c074920();
    uVar3 = param_3;
    func_0x00010c271b00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea27c0(param_1);
    _objc_release(uVar3);
    _objc_release(uVar5);
  }
  puVar4 = auStack_210;
  _objc_initWeak(puVar4,param_1);
  iVar1 = (int)puVar4;
  if ((*(char *)(puStack_88 + 3) == '\x01') && (func_0x000108614d48(), iVar1 != 0)) {
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_218,auStack_210);
    _objc_retain(param_3);
    func_0x00010c133600(uVar5);
    _objc_release(uVar5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_218);
  }
  else {
    func_0x00010bdf0320(param_1);
  }
  _objc_destroyWeak(auStack_210);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_140,8);
  __Block_object_dispose(&uStack_120,8);
  __Block_object_dispose(&uStack_100,8);
  _objc_release(uStack_d8);
  __Block_object_dispose(&uStack_d0,8);
  __Block_object_dispose(&uStack_b0,8);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(param_3);
  return;
}



/* Entry: 1069b6adc; end: 1069b6af3;  */

void FUN_1069b6adc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1069b6af4; end: 1069b6c6f;  */

void FUN_1069b6af4(long param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  *(bool *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_2 == 2;
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = param_4;
  puVar1 = PTR_PTR_1126cf828;
  func_0x00010c0eeac0(PTR_PTR_1126cf828,param_2,
                      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = param_3;
  return;
}



/* Entry: 1069b6c70; end: 1069b6cfb;  */

void FUN_1069b6c70(long param_1,int param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  if (param_2 == 0) {
    puVar2 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  }
  else {
    puVar2 = PTR_PTR_1126cf828;
    func_0x00010c13d1c0(PTR_PTR_1126cf828);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bdf0320(lVar1);
  if (param_2 != 0) {
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069b6cfc; end: 1069b6e1b; -[SCModularCallController _createModularCallSession:startCallSourceType:callLaunchAction:] */

void FUN_1069b6cfc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(param_3);
  func_0x00010c159ac0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf07f20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1069b6e1c;
  puStack_78 = &UNK_110950e90;
  lStack_70 = param_1;
  uStack_68 = param_5;
  _objc_retain(param_5);
  func_0x00010bf571e0(uVar2,param_2,uVar3,param_3,uVar4,uVar1,uVar5,param_1,param_4,&puStack_90);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uStack_68);
  _objc_release(param_5);
  return;
}



/* Entry: 1069b6e1c; end: 1069b6ec3;  */

void FUN_1069b6e1c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1069b6ec4;
  puStack_40 = &UNK_110848ba8;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = param_2;
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uStack_30 = uVar1;
  uStack_28 = uVar2;
  _objc_retain(param_2);
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_28);
  _objc_release(uStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1069b6ec4; end: 1069b6edb;  */

void FUN_1069b6ec4(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be6b6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s__onSessionCreated_callLaunchActi_112578748,
               *(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be09810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s__endCallBeforeSessionIsReady_11255ffa0);
  return;
}



/* Entry: 1069b6edc; end: 1069b6feb; -[SCModularCallController _onSessionCreated:callLaunchAction:] */

void FUN_1069b6edc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((*(byte *)(param_1 + 0x21) & 1) == 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_3;
    _objc_release(uVar1);
    if (*(char *)(param_1 + 0x34) == '\x01') {
      func_0x00010bdc4f40(param_1);
    }
    else {
      _objc_initWeak(auStack_38,param_1);
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_1069b6fec;
      puStack_50 = &UNK_110841fb0;
      _objc_copyWeak(auStack_40,auStack_38);
      _objc_retain(param_4);
      ppuVar2 = &puStack_68;
      uStack_48 = param_4;
      _objc_retainBlock();
      uVar1 = *(undefined8 *)(param_1 + 0x40);
      *(undefined ***)(param_1 + 0x40) = ppuVar2;
      _objc_release(uVar1);
      _objc_release(uStack_48);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069b6fec; end: 1069b701f;  */

void FUN_1069b6fec(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc4f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069b7020; end: 1069b711f; -[SCModularCallController _activateSessionAndApplyCallLaunchAction:] */

void FUN_1069b7020(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x21) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar1);
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bdcdc40(param_1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1069b7120; end: 1069b714b;  */

void FUN_1069b7120(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd8c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069b714c; end: 1069b73fb; -[SCModularCallController _callLaunchActionCompletion] */

void FUN_1069b714c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  if ((*(byte *)(param_1 + 0x21) & 1) == 0) {
    lVar1 = *(long *)(param_1 + 0x70);
    func_0x00010bfc26c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010c1bd080(*(undefined8 *)(param_1 + 0x18));
    }
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)(param_1 + 0x88);
    *(undefined **)(param_1 + 0x88) = puVar2;
    _objc_release(uVar4);
    _objc_initWeak(auStack_68,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c159ac0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1069b73fc;
    puStack_78 = &UNK_11084eff0;
    _objc_copyWeak(auStack_70,auStack_68);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf27f20(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = puVar2;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1069b7470;
    puStack_a0 = &UNK_110950ec0;
    _objc_copyWeak(auStack_98,auStack_68);
    _objc_copyWeak(auStack_c0,auStack_68);
    uVar4 = uVar3;
    func_0x00010c25ff80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    if (*(long *)(param_1 + 0x28) != 0) {
      func_0x00010c2827c0();
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010bf287a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c288f60();
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = 0;
      _objc_release(uVar4);
    }
    if (*(char *)(param_1 + 0x30) == '\x01') {
      func_0x00010c0dd540(*(undefined8 *)(param_1 + 0x18));
      *(undefined1 *)(param_1 + 0x30) = 0;
    }
    if (*(char *)(param_1 + 0x31) == '\x01') {
      func_0x00010c0dd500(*(undefined8 *)(param_1 + 0x18));
      *(undefined1 *)(param_1 + 0x31) = 0;
    }
    func_0x00010bed49e0(param_1);
    *(undefined1 *)(param_1 + 0x20) = 1;
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 1069b73fc; end: 1069b746f;  */

void FUN_1069b73fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c0ec5e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bd080(*(undefined8 *)(param_1 + 0x18));
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069b7470; end: 1069b74e3;  */

void FUN_1069b7470(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea27c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069b74e4; end: 1069b74e7; -[SCModularCallController dispose] */

void FUN_1069b74e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be051b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dispose_11255ee08);
  return;
}



/* Entry: 1069b74e8; end: 1069b751b; -[SCModularCallController dealloc] */

void FUN_1069b74e8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f4168;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1069b751c; end: 1069b7543; -[SCModularCallController callInfoObservable] */

void FUN_1069b751c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069b7544; end: 1069b7553; -[SCModularCallController pipInfoObservable] */

void FUN_1069b7544(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_map__11260bb98,
             &PTR___NSConcreteGlobalBlock_110950f10);
  return;
}



/* Entry: 1069b7554; end: 1069b7613;  */

void FUN_1069b7554(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126cf830;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c09dd00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c12a2a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0269a0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bef0f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c162a40(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1069b7614; end: 1069b7667; -[SCModularCallController setIsUiAppeared:] */

void FUN_1069b7614(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1069b7668;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010be97d00(param_1,param_2,&puStack_40);
  return;
}



/* Entry: 1069b7668; end: 1069b7677;  */

void FUN_1069b7668(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x33) = *(undefined1 *)(param_1 + 0x28);
  return;
}



/* Entry: 1069b7678; end: 1069b76cf; -[SCModularCallController declineCall] */

void FUN_1069b7678(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1069b7704;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010bdced20(param_1,param_2,&PTR___NSConcreteGlobalBlock_110950f50,&puStack_38);
  return;
}



/* Entry: 1069b76d0; end: 1069b7703;  */

void FUN_1069b76d0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf287a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069b7704; end: 1069b770b;  */

void FUN_1069b7704(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be09810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__endCallBeforeSessionIsReady_11255ffa0);
  return;
}



/* Entry: 1069b770c; end: 1069b7777; -[SCModularCallController switchCamera] */

void FUN_1069b770c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bfb2b20();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_1069b7778;
  puStack_30 = &UNK_110950f70;
  uStack_28 = uVar1;
  func_0x00010bdced20(param_1,param_2,&puStack_48,0);
  return;
}



/* Entry: 1069b7778; end: 1069b7783;  */

void FUN_1069b7778(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c177430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setCameraType__11263b728,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1069b7784; end: 1069b780b; -[SCModularCallController selectAudioDevice:] */

void FUN_1069b7784(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1069b780c;
  puStack_30 = &UNK_110950f90;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bdced20(param_1,param_2,&puStack_48,0);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1069b780c; end: 1069b7817;  */

void FUN_1069b780c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c158750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_selectAudioDevice__112633bf0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1069b7818; end: 1069b7903; -[SCModularCallController updatePublishedMedia:] */

void FUN_1069b7818(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  uint uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  if (param_3 != 0) {
    lVar1 = param_1 + 0x90;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf3bac0();
    _objc_release(lVar1);
    if (param_3 < 5) {
      uStack_70 = *(undefined8 *)(&UNK_10dde32c0 + (ulong)(param_3 - 1) * 8);
      goto LAB_1069b7874;
    }
  }
  uStack_70 = 0;
LAB_1069b7874:
  uStack_38 = param_3 - 1 < 2;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc0000000;
  pcStack_50 = FUN_1069b7904;
  puStack_48 = &UNK_110950fc0;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x1069b7948;
  puStack_80 = &UNK_1109121a8;
  lStack_78 = param_1;
  uStack_68 = param_3;
  uStack_40 = uStack_70;
  func_0x00010bdced20(param_1,param_2,&puStack_60,&puStack_98);
  return;
}



/* Entry: 1069b7904; end: 1069b79a3;  */

void FUN_1069b7904(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf287a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c288f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069b79a4; end: 1069b79ef; -[SCModularCallController updateLocalVideoState:] */

void FUN_1069b79a4(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00010bf2b540();
  }
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c24e390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x70),PTR_s_startCameraWithCameraType__112671308);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c255b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_stopCamera_1126730f8,lVar1);
  return;
}



/* Entry: 1069b79f0; end: 1069b7a47; -[SCModularCallController stopScreenCapture] */

void FUN_1069b79f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x1069b7a50;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010bdced20(param_1,param_2,&PTR___NSConcreteGlobalBlock_110950fe0,&puStack_38);
  return;
}



/* Entry: 1069b7a48; end: 1069b7a53;  */

void FUN_1069b7a48(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_stopScreenCapture_112673478);
  return;
}



/* Entry: 1069b7a54; end: 1069b7b17; -[SCModularCallController notifyScreenShareWillStart:] */

undefined1 FUN_1069b7a54(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 *puStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_50 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1069b7b18;
  puStack_58 = &UNK_110951000;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1069b7b4c;
  puStack_80 = &UNK_110842e18;
  uStack_78 = param_1;
  uStack_48 = param_3;
  puStack_38 = puStack_50;
  func_0x00010bdced20(param_1,param_2,&puStack_70,&puStack_98);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1069b7b18; end: 1069b7b4b;  */

void FUN_1069b7b18(long param_1,undefined8 param_2)

{
  func_0x00010c0dd520(param_2,param_2,*(undefined1 *)(param_1 + 0x28));
  *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)param_2;
  return;
}



/* Entry: 1069b7b4c; end: 1069b7b4f;  */

void FUN_1069b7b4c(void)

{
  return;
}



/* Entry: 1069b7b50; end: 1069b7bf3; -[SCModularCallController enableLenses:] */

void FUN_1069b7b50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1069b7bf4;
  puStack_38 = &UNK_110950e90;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1069b7d3c;
  puStack_60 = &UNK_110842e18;
  uStack_58 = param_1;
  uStack_30 = param_3;
  uStack_28 = param_1;
  _objc_retain(param_3);
  func_0x00010bdced20(param_1,param_2,&puStack_50,&puStack_78);
  _objc_release(uStack_30);
  _objc_release(param_3);
  return;
}



/* Entry: 1069b7bf4; end: 1069b7d3b;  */

void FUN_1069b7bf4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  
  func_0x00010c097660(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar6 = *(ulong *)(param_1 + 0x20);
  if (uVar6 == 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x70);
  }
  else {
    uVar2 = uVar1;
    func_0x00010c094540(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x70);
    if ((uVar6 & 1) == 0) {
      func_0x00010bf90ac0(uVar2);
      if (*(long *)(param_1 + 0x20) == 0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar3 = PTR_PTR_1126b0820;
        func_0x00010c08fb40(PTR_PTR_1126b0820);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c2b2880();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c2bbd20();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar3);
      }
      func_0x00010c158c40(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x70));
      _objc_release(puVar7);
      goto LAB_1069b7d24;
    }
  }
  func_0x00010bf90ac0(uVar2);
LAB_1069b7d24:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069b7d3c; end: 1069b7d3f;  */

void FUN_1069b7d3c(void)

{
  return;
}


