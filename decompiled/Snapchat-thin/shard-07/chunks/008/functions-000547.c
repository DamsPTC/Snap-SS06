/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a32a3c; end: 105a32b33; -[SCSpectaclesHomeWifiManager dataFlowsRequestCancelled:] */

void FUN_105a32a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105a32b34; end: 105a32b7b;  */

void FUN_105a32b34(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x20) == *(long *)(lVar1 + 0x10)) {
      *(undefined8 *)(lVar1 + 0x10) = 0;
      _objc_release();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a32b7c; end: 105a32c87; -[SCSpectaclesHomeWifiManager dataFlowsRequest:failedWithError:] */

void FUN_105a32b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a32c88; end: 105a32ccf;  */

void FUN_105a32c88(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x20) == *(long *)(lVar1 + 0x10)) {
      *(undefined8 *)(lVar1 + 0x10) = 0;
      _objc_release();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a32cd0; end: 105a33193; -[SCSpectaclesHomeWifiManager _transitionToState:] */

void FUN_105a32cd0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 == param_3) {
    return;
  }
  func_0x00010c252440(param_1);
  func_0x00010c209fc0(param_1);
  lVar1 = param_1;
  func_0x00010c252440();
  lVar7 = param_1;
  lVar5 = param_1;
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      func_0x00010bddaaa0(param_1);
      func_0x00010bf04760(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6fd20(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf60d80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c087ba0(lVar7);
      _objc_release(param_1);
    }
    else {
      if (lVar1 != 1) {
        return;
      }
      func_0x00010bec0580(param_1);
      lVar1 = param_1;
      func_0x00010bf04760(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bf6fd20(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010bf60d80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c087ba0(lVar1);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar1);
      func_0x00010bf026c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6fd20(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5ebc0(param_1);
      func_0x00010c0a7d60(lVar7);
    }
LAB_105a3305c:
    _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar7);
    return;
  }
  if (lVar1 == 2) {
    lVar1 = param_1;
    func_0x00010c249020(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf6fd20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c134ee0(lVar1);
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf04760(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf6fd20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bf60d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c087ba0(lVar1);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    func_0x00010bf026c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6fd20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5ebc0(param_1);
    func_0x00010c0a7d40(lVar7);
    goto LAB_105a3305c;
  }
  if (lVar1 != 3) {
    return;
  }
  lVar1 = param_1;
  func_0x00010bf60d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c249020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6fd20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c137020(lVar7);
  }
  else {
    lVar1 = param_1;
    func_0x00010bf60d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beeaea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar7 != 0) {
      lVar1 = lVar7;
      func_0x00010c252440();
      if (lVar1 == 1) goto LAB_105a330b0;
      func_0x00010c12d360(*(undefined8 *)(param_1 + 0x70));
      _objc_release(lVar7);
    }
    uVar6 = *(undefined8 *)(param_1 + 0x70);
    puVar2 = PTR_PTR_1126c1510;
    _objc_alloc(PTR_PTR_1126c1510);
    lVar1 = param_1;
    func_0x00010bf60d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04bfa0(puVar2);
    func_0x00010befa120(uVar6);
    _objc_release(puVar2);
    _objc_release(lVar1);
    func_0x00010bf04760(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf6fd20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c087bc0(lVar5);
    _objc_release(lVar1);
    lVar7 = 0;
  }
  _objc_release(lVar5);
LAB_105a330b0:
  _objc_release(lVar7);
  func_0x00010c207600(param_1);
  lVar1 = param_1;
  func_0x00010bf04760(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf6fd20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf60d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c087ba0(lVar1);
  _objc_release(lVar5);
  _objc_release(lVar7);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf026c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf6fd20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5ebc0(param_1);
  func_0x00010c0a7d00(lVar1);
  _objc_release(lVar7);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState__112591648,0);
  return;
}



/* Entry: 105a33194; end: 105a332eb; -[SCSpectaclesHomeWifiManager _wifiApFromListWithSsid:] */

void FUN_105a33194(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
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
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010c2a5200();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_1);
        }
        uVar7 = *(ulong *)(lStack_128 + lVar9 * 8);
        uVar2 = uVar7;
        func_0x00010c24cc00();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        puVar6 = (undefined8 *)param_3;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) {
          _objc_retain(uVar7);
          goto LAB_105a3329c;
        }
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = param_1;
      puVar6 = &uStack_130;
      func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  uVar7 = 0;
LAB_105a3329c:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  puVar4 = param_3;
  func_0x00010c0f79e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar4 != (undefined1 *)0x0) {
    puVar4 = param_3;
    func_0x00010c0f79e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d00();
    _objc_release(puVar4);
  }
  puVar5 = PTR_PTR_1126bc890;
  func_0x00010c1503c0(0x4076800000000000,PTR_PTR_1126bc890,param_2,param_3,
                      PTR_s__pendingSnapsNotificationTimeout_11252c050,puVar6,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1da4a0(param_3,param_2,puVar5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 105a332ec; end: 105a333a3; -[SCSpectaclesHomeWifiManager _requestLastCloudUploadTime:] */

void FUN_105a332ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0f79e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c0f79e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d00();
    _objc_release(lVar1);
  }
  puVar2 = PTR_PTR_1126bc890;
  func_0x00010c1503c0(0x4076800000000000,PTR_PTR_1126bc890,param_2,param_1,
                      PTR_s__pendingSnapsNotificationTimeout_11252c050,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1da4a0(param_1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a333a4; end: 105a33427; -[SCSpectaclesHomeWifiManager _pendingSnapsNotificationTimeout:] */

void FUN_105a333a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_1 != 0) {
    uVar1 = param_3;
    func_0x00010bf48d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf48920();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      func_0x00010c249020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c135ae0();
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a33428; end: 105a334c7; -[SCSpectaclesHomeWifiManager sendAuthzCodeForDevice:authzCode:codeVerifier:redirectUri:] */

void FUN_105a33428(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c15b680();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a334c8; end: 105a3356f; -[SCSpectaclesHomeWifiManager sendAccessTokenForDevice:accessToken:refreshToken:expirationTimeMs:userId:] */

void FUN_105a334c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c15b460();
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a33570; end: 105a335b7; -[SCSpectaclesHomeWifiManager requestClientId:] */

void FUN_105a33570(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c134ee0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a335b8; end: 105a33703; -[SCSpectaclesHomeWifiManager _startMfiSharingWiFiCredentials] */

void FUN_105a335b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar1 = PTR_PTR_1126b6720;
    _objc_alloc();
    lVar2 = param_1;
    func_0x00010bf6fd20(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c1518;
    _objc_alloc_init();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00c100(puVar1,param_2,lVar2,0,0,0,puVar4,1,param_1,lVar5,0);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar2);
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained();
    func_0x00010c064d40();
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf2e1e0();
    _objc_release(lVar2);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
  return;
}



/* Entry: 105a33704; end: 105a3374f; -[SCSpectaclesHomeWifiManager _cancelMfiSharingWiFiCredentials] */

void FUN_105a33704(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf2e1e0();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105a33750; end: 105a33847; -[SCSpectaclesHomeWifiManager _handleTaskCheckShareWifiCredentialsStatusCompleted:] */

void FUN_105a33750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105a33848; end: 105a33967;  */

void FUN_105a33848(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar3 = lVar1;
    func_0x00010bf6fd20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bf6fd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    if ((lVar3 == lVar2) && (lVar3 = lVar1, func_0x00010c252440(), lVar3 != 0)) {
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x00010c2a5500();
      if (lVar3 - 4U < 3) {
        uVar5 = *(undefined8 *)(&UNK_10ddc9938 + (lVar3 - 4U) * 8);
        lVar3 = lVar1;
        func_0x00010bf04760(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bf6fd20(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar1;
        func_0x00010bf60d80(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c087ba0(lVar3,param_2,uVar5,lVar2,lVar4);
        _objc_release(lVar4);
        _objc_release(lVar2);
        _objc_release(lVar3);
        func_0x00010becf280(lVar1,param_2,0);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a33968; end: 105a33a4b; -[SCSpectaclesHomeWifiManager _handleTaskFailed:] */

void FUN_105a33968(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105a33a4c; end: 105a33aff;  */

void FUN_105a33a4c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (lVar1 = param_1, func_0x00010c252440(), lVar1 != 0)) {
    lVar1 = param_1;
    func_0x00010bf04760(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf6fd20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf60d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c087ba0(lVar1,param_2,6,lVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010becf280(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a33b00; end: 105a33b0b; -[SCSpectaclesHomeWifiManager setSpectaclesManager:] */

void FUN_105a33b00(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 105a33b0c; end: 105a33b23; -[SCSpectaclesHomeWifiManager spectaclesManagingDataFlow] */

void FUN_105a33b0c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a33b24; end: 105a33b2f; -[SCSpectaclesHomeWifiManager setSpectaclesManagingDataFlow:] */

void FUN_105a33b24(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 105a33b30; end: 105a33b47; -[SCSpectaclesHomeWifiManager analyticsLogger] */

void FUN_105a33b30(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a33b48; end: 105a33b53; -[SCSpectaclesHomeWifiManager setAnalyticsLogger:] */

void FUN_105a33b48(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 105a33b54; end: 105a33b5b; -[SCSpectaclesHomeWifiManager announcer] */

undefined8 FUN_105a33b54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105a33b5c; end: 105a33b8b; -[SCSpectaclesHomeWifiManager setAnnouncer:] */

void FUN_105a33b5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a33b8c; end: 105a33b93; -[SCSpectaclesHomeWifiManager performer] */

undefined8 FUN_105a33b8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105a33b94; end: 105a33bc3; -[SCSpectaclesHomeWifiManager setPerformer:] */

void FUN_105a33b94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a33bc4; end: 105a33bcb; -[SCSpectaclesHomeWifiManager state] */

undefined8 FUN_105a33bc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105a33bcc; end: 105a33bd3; -[SCSpectaclesHomeWifiManager setState:] */

void FUN_105a33bcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 105a33bd4; end: 105a33beb; -[SCSpectaclesHomeWifiManager device] */

void FUN_105a33bd4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a33bec; end: 105a33bf7; -[SCSpectaclesHomeWifiManager setDevice:] */

void FUN_105a33bec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 105a33bf8; end: 105a33bff; -[SCSpectaclesHomeWifiManager currentWifiSsid] */

undefined8 FUN_105a33bf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 105a33c00; end: 105a33c07; -[SCSpectaclesHomeWifiManager setCurrentWifiSsid:] */

void FUN_105a33c00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105a33c08; end: 105a33c0f; -[SCSpectaclesHomeWifiManager wifiAPList] */

undefined8 FUN_105a33c08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 105a33c10; end: 105a33c3f; -[SCSpectaclesHomeWifiManager setWifiAPList:] */

void FUN_105a33c10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a33c40; end: 105a33c47; -[SCSpectaclesHomeWifiManager specsRefreshTokenInvalid] */

undefined1 FUN_105a33c40(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 105a33c48; end: 105a33c4f; -[SCSpectaclesHomeWifiManager setSpecsRefreshTokenInvalid:] */

void FUN_105a33c48(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 105a33c50; end: 105a33c57; -[SCSpectaclesHomeWifiManager pendingSnapsNotificationTimer] */

undefined8 FUN_105a33c50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 105a33c58; end: 105a33c87; -[SCSpectaclesHomeWifiManager setPendingSnapsNotificationTimer:] */

void FUN_105a33c58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a33c88; end: 105a33d2b; -[SCSpectaclesHomeWifiManager .cxx_destruct] */

void FUN_105a33c88(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a33d2c; end: 105a33e87; -[SCSpectaclesHomeWifiManagerEventListenerAnnouncer lagunaOnShareWifiCredentialsUpdate:device:wifiSsid:] */

void FUN_105a33d2c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 unaff_x23;
  ulong uVar10;
  undefined *unaff_x24;
  long lVar11;
  ulong unaff_x25;
  long unaff_x26;
  long lVar12;
  undefined **unaff_x27;
  long unaff_x28;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
  long lStack_190;
  undefined **ppuStack_188;
  long lStack_180;
  ulong uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar5 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x26 = *plStack_120;
    unaff_x27 = &PTR_s_jobScope_1125ff000;
    do {
      unaff_x24 = PTR_s_lagunaOnShareWifiCredentialsUpda_1125ff8f8;
      unaff_x28 = 0;
      do {
        if (*plStack_120 != unaff_x26) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x25 = *(ulong *)(lStack_128 + unaff_x28 * 8);
        uVar3 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if ((uVar3 & 1) != 0) {
          func_0x00010c087ba0(unaff_x25);
        }
        unaff_x28 = unaff_x28 + 1;
      } while (lVar2 != unaff_x28);
      lVar2 = param_1;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x23 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  _objc_release(param_5);
  lVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar9 = &uStack_260;
    pcStack_138 = FUN_105a33e88;
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_190 = unaff_x28;
    ppuStack_188 = unaff_x27;
    lStack_180 = unaff_x26;
    uStack_178 = unaff_x25;
    puStack_170 = unaff_x24;
    uStack_168 = unaff_x23;
    lStack_160 = param_1;
    uStack_158 = param_3;
    uStack_150 = param_5;
    lStack_148 = param_4;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar5);
    func_0x00010c09a480();
    _objc_retainAutoreleasedReturnValue();
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    puVar8 = auStack_218;
    lVar4 = lVar2;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar11 = *plStack_250;
      do {
        puVar1 = PTR_s_lagunaOnWifiAPListUpdate__1125ff900;
        lVar12 = 0;
        do {
          if (*plStack_250 != lVar11) {
            _objc_enumerationMutation(lVar2);
          }
          uVar10 = *(ulong *)(lStack_258 + lVar12 * 8);
          uVar3 = uVar10;
          _objc_opt_respondsToSelector(uVar10,puVar1);
          if ((uVar3 & 1) != 0) {
            func_0x00010c087bc0(uVar10);
          }
          lVar12 = lVar12 + 1;
        } while (lVar4 != lVar12);
        puVar8 = auStack_218;
        lVar4 = lVar2;
        puVar9 = &uStack_260;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar2);
    _objc_release(puVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
      return;
    }
    ___stack_chk_fail();
    _objc_retain(param_6);
    _objc_retain(puVar8);
    _objc_retain(puVar9);
    func_0x00010be760a0(puVar5);
    func_0x00010c26f320(param_6);
    _objc_release(param_6);
    func_0x00010c214e00(puVar9);
    puVar6 = puVar8;
    func_0x00010bf48d40(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf48920();
    func_0x00010c171920(puVar9);
    _objc_release(puVar6);
    puVar6 = puVar8;
    func_0x00010c0692a0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf17500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c18c760(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar6 = puVar8;
    func_0x00010c0692a0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = puVar6;
    func_0x00010c257160(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c18cec0(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar6);
    func_0x00010c197380(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar9);
    return;
  }
  return;
}



/* Entry: 105a33e88; end: 105a33fc3; -[SCSpectaclesHomeWifiManagerEventListenerAnnouncer lagunaOnWifiAPListUpdate:] */

void FUN_105a33e88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
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
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar6 = auStack_e8;
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      puVar1 = PTR_s_lagunaOnWifiAPListUpdate__1125ff900;
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        uVar8 = *(ulong *)(lStack_128 + lVar10 * 8);
        uVar3 = uVar8;
        _objc_opt_respondsToSelector(uVar8,puVar1);
        if ((uVar3 & 1) != 0) {
          func_0x00010c087bc0(uVar8);
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      puVar6 = auStack_e8;
      lVar2 = param_1;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_6);
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  func_0x00010be760a0(param_3);
  func_0x00010c26f320(param_6);
  _objc_release(param_6);
  func_0x00010c214e00(puVar7);
  puVar4 = puVar6;
  func_0x00010bf48d40(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf48920();
  func_0x00010c171920(puVar7);
  _objc_release(puVar4);
  puVar4 = puVar6;
  func_0x00010c0692a0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf17500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c18c760(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = puVar6;
  func_0x00010c0692a0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = puVar4;
  func_0x00010c257160(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c18cec0(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  func_0x00010c197380(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 105a33fc4; end: 105a34137; -[SCSpectaclesLogger _populateSpectaclesContentCaptureErrorEvent:device:errorType:timeOfCapture:] */

void FUN_105a33fc4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010be760a0(param_2,param_3,param_4,param_5);
  func_0x00010c26f320(param_7);
  _objc_release(param_7);
  func_0x00010c214e00(param_4,param_3,(long)param_1);
  uVar3 = param_5;
  func_0x00010bf48d40(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf48920();
  func_0x00010c171920(param_4,param_3,uVar1);
  _objc_release(uVar3);
  uVar3 = param_5;
  func_0x00010c0692a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf17500();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b4ca0();
  func_0x00010c18c760(param_4,param_3,uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  uVar3 = param_5;
  func_0x00010c0692a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar1 = uVar3;
  func_0x00010c257160(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b4ca0();
  func_0x00010c18cec0(param_4,param_3,uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  if (param_6 < 0xc) {
    uVar3 = *(undefined8 *)(&UNK_10ddc9950 + param_6 * 8);
  }
  else {
    uVar3 = 0;
  }
  func_0x00010c197380(param_4,param_3,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a34138; end: 105a342b7; -[SCSpectaclesLogger _populateSpectaclesTempTrackedEvent:device:] */

void FUN_105a34138(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be760c0(param_2,param_3,param_4,param_5);
  lVar1 = param_5;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08a3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_5;
    func_0x00010c0692a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c246060();
    func_0x00010c167b20(param_4,param_3,lVar2);
    _objc_release(lVar1);
    lVar1 = param_5;
    func_0x00010c0692a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0db2a0();
    func_0x00010c1cdb20(param_4,param_3,lVar2);
    _objc_release(lVar1);
    lVar1 = param_5;
    func_0x00010c0692a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf52980();
    func_0x00010c1846a0(param_4,param_3,lVar2);
    _objc_release(lVar1);
    lVar1 = param_5;
    func_0x00010c0692a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2a5660();
    func_0x00010c2259c0(param_4,param_3,lVar2);
    _objc_release(lVar1);
    lVar1 = param_5;
    func_0x00010c0692a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08a3c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c212b60(param_4,param_3,(long)param_1);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a342b8; end: 105a34467; -[SCSpectaclesLogger _populateTransferEventParameters:transferSession:] */

void FUN_105a342b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf6fd20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be760c0(param_1,param_2,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf35520();
  if (uVar1 < 3) {
    uVar5 = *(undefined8 *)(&UNK_10ddc9c90 + uVar1 * 8);
  }
  else {
    uVar5 = 0xffffffffffffffff;
  }
  func_0x00010c2197c0(param_3,param_2,uVar5);
  uVar1 = param_4;
  func_0x00010c27a3a0();
  lVar6 = -(ulong)(uVar1 != 1);
  if (uVar1 == 0) {
    lVar6 = 1;
  }
  func_0x00010c219920(param_3,param_2,lVar6);
  uVar1 = param_4;
  func_0x00010bf16f40(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2198e0(param_3,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2a5340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (uVar3 != 0) {
    uVar1 = param_4;
    func_0x00010bf6fd20(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2a5340();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0b4ca0();
    func_0x00010c2258a0(param_3,param_2,uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a34468; end: 105a345af; -[SCSpectaclesLogger _populateTransferEventParameters:info:] */

void FUN_105a34468(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf70720(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c9a0(param_3,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bfb0d20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19cd80(param_3,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bfd38e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a5640(param_3,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf700a0(param_4);
  FUN_105a345b0();
  func_0x00010c19f260(param_3,param_2,uVar1);
  uVar1 = param_4;
  func_0x00010bf35520();
  if (uVar1 < 3) {
    uVar2 = *(undefined8 *)(&UNK_10ddc9c90 + uVar1 * 8);
  }
  else {
    uVar2 = 0xffffffffffffffff;
  }
  func_0x00010c2197c0(param_3,param_2,uVar2);
  uVar1 = param_4;
  func_0x00010c27dd80();
  lVar3 = -(ulong)(uVar1 != 1);
  if (uVar1 == 0) {
    lVar3 = 1;
  }
  func_0x00010c219920(param_3,param_2,lVar3);
  uVar1 = param_4;
  func_0x00010c15ffa0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2198e0(param_3,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a345b0; end: 105a345cf;  */

undefined8 FUN_105a345b0(ulong param_1)

{
  if (param_1 < 0xf) {
    return *(undefined8 *)(&UNK_10ddc99b0 + param_1 * 8);
  }
  return 0;
}



/* Entry: 105a345d0; end: 105a349bf; -[SCSpectaclesLogger _populateTransferSessionParameters:transferSession:] */

void FUN_105a345d0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010bf6fd20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be760a0(param_2,param_3,param_4,uVar1);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf35520();
  if (uVar1 < 3) {
    uVar6 = *(undefined8 *)(&UNK_10ddc9c90 + uVar1 * 8);
  }
  else {
    uVar6 = 0xffffffffffffffff;
  }
  func_0x00010c2197c0(param_4,param_3,uVar6);
  uVar1 = param_5;
  func_0x00010c27a3a0();
  lVar7 = -(ulong)(uVar1 != 1);
  if (uVar1 == 0) {
    lVar7 = 1;
  }
  func_0x00010c219920(param_4,param_3,lVar7);
  uVar1 = param_5;
  func_0x00010bf16f40(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2198e0(param_4,param_3,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2a5340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (uVar3 != 0) {
    uVar1 = param_5;
    func_0x00010bf6fd20(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2a5340();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0b4ca0();
    func_0x00010c2258a0(param_4,param_3,uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  uVar1 = param_5;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd53a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    uVar1 = param_5;
    func_0x00010bf6fd20(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06e420();
    func_0x00010c1afe80(param_4,param_3,uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  uVar1 = param_5;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf17500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (uVar3 != 0) {
    uVar1 = param_5;
    func_0x00010bf6fd20(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf17500();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c067fc0();
    func_0x00010c18c760(param_4,param_3,uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  uVar1 = param_5;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c257160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (uVar3 != 0) {
    uVar1 = param_5;
    func_0x00010bf6fd20(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c257160();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c067fc0();
    func_0x00010c18cec0(param_4,param_3,uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c1603a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(puVar5,param_3,uVar1);
  _objc_release(uVar1);
  _objc_release(puVar5);
  func_0x00010c192ec0((double)(long)(param_1 * 10.0) / 10.0,param_4);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a349c0; end: 105a34ab3; -[SCSpectaclesLogger logTransferSessionStart:bluetoothBootTimeInMs:wifiBootTimeInMs:wifiConnectionStatus:] */

void FUN_105a349c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  ulong param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c1520;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010be761e0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  if (param_4 != 0) {
    lVar2 = param_4;
    func_0x00010c067fc0(param_4);
    func_0x00010c1740e0(puVar1,param_2,lVar2);
  }
  if (param_5 != 0) {
    lVar2 = param_5;
    func_0x00010c067fc0(param_5);
    func_0x00010c225860(puVar1,param_2,lVar2);
  }
  if (param_6 < 4) {
    uVar3 = *(undefined8 *)(&UNK_10ddc9ca8 + param_6 * 8);
  }
  else {
    uVar3 = 0xffffffffffffffff;
  }
  func_0x00010c1db380(puVar1,param_2,uVar3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a34ab4; end: 105a34beb; -[SCSpectaclesLogger logTransferSessionFinished:wifiConnectionStatus:] */

void FUN_105a34ab4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c1528;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010be761e0(param_1,param_2,puVar1,param_3);
  uVar4 = param_3;
  func_0x00010c27a400(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  func_0x00010c1ced20(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c27a400(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar4;
  func_0x00010c0e00e0(uVar4,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c23e0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  func_0x00010c1ced20(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  if (param_4 < 4) {
    uVar4 = *(undefined8 *)(&UNK_10ddc9ca8 + param_4 * 8);
  }
  else {
    uVar4 = 0xffffffffffffffff;
  }
  func_0x00010c1db380(puVar1,param_2,uVar4);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a34bec; end: 105a34d43; -[SCSpectaclesLogger logTransferSessionInterrupted:reason:wifiConnectionStatus:] */

void FUN_105a34bec(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c1530;
  _objc_alloc_init(PTR_PTR_1126c1530);
  func_0x00010be761e0(param_1,param_2,puVar1,param_3);
  if (param_4 < 9) {
    uVar4 = *(undefined8 *)(&UNK_10ddc9a28 + param_4 * 8);
  }
  else {
    uVar4 = 0xffffffffffffffff;
  }
  func_0x00010c219860(puVar1,param_2,uVar4);
  uVar4 = param_3;
  func_0x00010c27a400(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  func_0x00010c1ced20(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c27a400(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  func_0x00010c1ced20(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  if (param_5 < 4) {
    uVar4 = *(undefined8 *)(&UNK_10ddc9ca8 + param_5 * 8);
  }
  else {
    uVar4 = 0xffffffffffffffff;
  }
  func_0x00010c1db380(puVar1,param_2,uVar4);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a34d44; end: 105a35277; -[SCSpectaclesLogger logFileTransferForSession:durationOfThisFileTransfer:getHDstartSource:] */

void FUN_105a34d44(double param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
                  long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bf44300();
  if (uVar1 < 5) {
    uVar10 = *(undefined8 *)(&UNK_10ddc9a70 + uVar1 * 8);
    puVar2 = PTR_PTR_1126c1538;
    _objc_alloc_init(PTR_PTR_1126c1538);
    func_0x00010be761c0(param_2,param_3,puVar2,param_4);
    uVar1 = param_4;
    func_0x00010bf6fd20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfd53a0();
    _objc_release(uVar3);
    _objc_release(uVar1);
    if ((int)uVar4 != 0) {
      uVar1 = param_4;
      func_0x00010bf6fd20(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c0692a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c06e420();
      func_0x00010c1afe80(puVar2,param_3,uVar4);
      _objc_release(uVar3);
      _objc_release(uVar1);
    }
    uVar1 = param_4;
    func_0x00010bf6fd20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf17500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar3);
    _objc_release(uVar1);
    if (uVar4 != 0) {
      uVar1 = param_4;
      func_0x00010bf6fd20(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c0692a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf17500();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c067fc0();
      func_0x00010c18c760(puVar2,param_3,uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar1);
    }
    uVar1 = param_4;
    func_0x00010bf6fd20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c08a3c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar3);
    _objc_release(uVar1);
    if (uVar4 != 0) {
      uVar1 = param_4;
      func_0x00010bf6fd20(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c0692a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c2a5660();
      func_0x00010c2259c0(puVar2,param_3,uVar4);
      _objc_release(uVar3);
      _objc_release(uVar1);
    }
    uVar1 = param_4;
    func_0x00010bf61080();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010bf44300(param_4);
    uVar4 = uVar1;
    func_0x00010c09df20(uVar1,param_3,uVar3);
    if (param_5 != 0) {
      func_0x00010bf885a0(param_5);
      param_1 = (double)uVar4 / param_1;
      func_0x00010c219900(puVar2,param_3,(long)param_1);
    }
    func_0x00010c19bb60(puVar2,param_3,uVar4);
    func_0x00010c19bba0(puVar2,param_3,uVar10);
    uVar3 = uVar1;
    func_0x00010bdc3540(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181f40(puVar2,param_3,uVar3);
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c26f500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 != 0) {
      puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c26f500(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380(puVar6,param_3,uVar3);
      param_1 = (double)(long)(param_1 * 10.0) / 10.0;
      func_0x00010c214d60(param_1,puVar2);
      _objc_release(uVar3);
      _objc_release(puVar6);
    }
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c1603a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(puVar6,param_3,uVar3);
    _objc_release(uVar3);
    _objc_release(puVar6);
    func_0x00010c214d80((double)(long)(param_1 * 10.0) / 10.0,puVar2);
    if (param_6 != 0) {
      FUN_105a35278(param_6);
      func_0x00010c2098c0(puVar2,param_3,param_6);
    }
    puVar6 = PTR_PTR_1126c1540;
    func_0x00010c249960(PTR_PTR_1126c1540);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010bf6fd20(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_2;
    func_0x00010be75a80(param_2,param_3,puVar6,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010bf35520();
    if (uVar3 < 3) {
      uVar9 = *(undefined8 *)(&UNK_10ddc9c90 + uVar3 * 8);
    }
    else {
      uVar9 = 0xffffffffffffffff;
    }
    lVar8 = param_2;
    func_0x00010be75aa0(param_2,param_3,lVar7,uVar10,uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    uVar10 = *(undefined8 *)(param_2 + 8);
    func_0x00010c248ac0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar10);
    uVar10 = *(undefined8 *)(param_2 + 8);
    func_0x00010c248ac0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9180();
    _objc_release(uVar10);
    uVar10 = *(undefined8 *)(param_2 + 8);
    func_0x00010c248ac0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    _objc_release(uVar10);
    func_0x00010c0b2e60(*(undefined8 *)(param_2 + 0x18),param_3,puVar2);
    _objc_release(lVar8);
    _objc_release(uVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a35278; end: 105a35287;  */

ulong FUN_105a35278(long param_1)

{
  ulong uVar1;
  
  uVar1 = param_1 - 1;
  if (7 < uVar1) {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



/* Entry: 105a35288; end: 105a35357; -[SCSpectaclesLogger _popluateFileTransferMetric:withFileType:withTransferChannel:] */

void FUN_105a35288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010bb12930(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110e183d8,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_4);
  func_0x00010bb133a8(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2ac460(uVar1,param_2,&PTR____CFConstantStringClassReference_110e183f8,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105a35358; end: 105a35487; -[SCSpectaclesLogger _popluateFileTransferMetric:withDeviceInfo:] */

void FUN_105a35358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010bfb0d20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_105a35488();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110e15598,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bfd38e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = uVar1;
  func_0x00010bf6e340(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c2ac460(uVar4,param_2,&PTR____CFConstantStringClassReference_110e155b8,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105a35488; end: 105a354eb;  */

void FUN_105a35488(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c08fa60();
  uVar2 = param_1;
  if (uVar1 < 0x41) {
    _objc_retain(param_1);
  }
  else {
    func_0x00010c260c20(param_1,param_2,0x40);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105a354ec; end: 105a357a3; -[SCSpectaclesLogger logMetadataTransferForSession:durationOfThisFileTransfer:fileSize:contentId:] */

void FUN_105a354ec(double param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c1538;
  _objc_retain(param_7);
  _objc_alloc_init(puVar1);
  func_0x00010be761c0(param_2,param_3,puVar1,param_4);
  lVar2 = param_4;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfd53a0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if ((int)lVar4 != 0) {
    lVar2 = param_4;
    func_0x00010bf6fd20(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c06e420();
    func_0x00010c1afe80(puVar1,param_3,lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_4;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf17500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 != 0) {
    lVar2 = param_4;
    func_0x00010bf6fd20(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf17500();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c067fc0();
    func_0x00010c18c760(puVar1,param_3,lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_4;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08a3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 != 0) {
    lVar2 = param_4;
    func_0x00010bf6fd20(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2a5660();
    func_0x00010c2259c0(puVar1,param_3,lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  if (param_5 != 0) {
    func_0x00010bf885a0(param_5);
    func_0x00010c219900(puVar1,param_3,(long)((double)param_6 / param_1));
  }
  func_0x00010c19bb60(puVar1,param_3,param_6);
  func_0x00010c19bba0(puVar1,param_3,2);
  func_0x00010c181f40(puVar1,param_3,param_7);
  _objc_release(param_7);
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 0x18),param_3,puVar1);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a357a4; end: 105a36137; -[SCSpectaclesLogger logContentCaptureForSession:metadata:contentId:] */

void FUN_105a357a4(double param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c1548;
  _objc_retain(param_6);
  _objc_alloc_init(puVar1);
  uVar2 = param_4;
  func_0x00010bf35520();
  if (uVar2 < 3) {
    uVar9 = *(undefined8 *)(&UNK_10ddc9c90 + uVar2 * 8);
  }
  else {
    uVar9 = 0xffffffffffffffff;
  }
  func_0x00010c2197c0(puVar1,param_3,uVar9);
  uVar2 = param_4;
  func_0x00010c27a3a0();
  lVar10 = -(ulong)(uVar2 != 1);
  if (uVar2 == 0) {
    lVar10 = 1;
  }
  func_0x00010c219920(puVar1,param_3,lVar10);
  uVar2 = param_4;
  func_0x00010bf16f40(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2198e0(puVar1,param_3,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2a5340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (uVar4 != 0) {
    uVar2 = param_4;
    func_0x00010bf6fd20(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2a5340();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0b4ca0();
    func_0x00010c2258a0(puVar1,param_3,uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_4;
  func_0x00010bf6fd20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15e740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c9a0(puVar1,param_3,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bf6fd20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a5640(puVar1,param_3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bf6fd20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf40c40();
  FUN_105a345b0();
  func_0x00010c19f260(puVar1,param_3,uVar3);
  _objc_release(uVar2);
  func_0x00010c181f40(puVar1,param_3,param_6);
  _objc_release(param_6);
  lVar10 = param_5;
  func_0x00010bfb0d20(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar10;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19cd80(puVar1,param_3,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar10);
  lVar10 = param_5;
  func_0x00010c26f500(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c214e00(puVar1,param_3,(long)param_1);
  _objc_release(lVar10);
  puVar7 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x00010c09e0c0(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c1552e0();
  func_0x00010c21fbe0(puVar1,param_3,puVar8);
  _objc_release(puVar7);
  lVar10 = param_5;
  func_0x00010bf25840();
  if (lVar10 - 1U < 6) {
    uVar9 = *(undefined8 *)(&UNK_10ddc9a98 + (lVar10 - 1U) * 8);
  }
  else {
    uVar9 = 0;
  }
  func_0x00010c1749c0(puVar1,param_3,uVar9);
  lVar10 = param_5;
  func_0x00010bf176a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar10 != 0) {
    lVar10 = param_5;
    func_0x00010bf176a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar10;
    func_0x00010c0b4ca0();
    func_0x00010c18c760(puVar1,param_3,lVar6);
    _objc_release(lVar10);
  }
  lVar10 = param_5;
  func_0x00010bfd5380();
  if ((int)lVar10 != 0) {
    lVar10 = param_5;
    func_0x00010bf35b20(param_5);
    func_0x00010c1afe80(puVar1,param_3,lVar10);
  }
  lVar10 = param_5;
  func_0x00010c257260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar10 != 0) {
    lVar10 = param_5;
    func_0x00010c257260(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar10;
    func_0x00010c067fc0();
    func_0x00010c18cec0(puVar1,param_3,lVar6);
    _objc_release(lVar10);
  }
  lVar10 = param_5;
  func_0x00010c246060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar10 != 0) {
    lVar10 = param_5;
    func_0x00010c246060(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar10;
    func_0x00010c067fc0();
    func_0x00010c167b20(puVar1,param_3,lVar6);
    _objc_release(lVar10);
  }
  lVar10 = param_5;
  func_0x00010c0db2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar10 != 0) {
    lVar10 = param_5;
    func_0x00010c0db2a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar10;
    func_0x00010c067fc0();
    func_0x00010c1cdb20(puVar1,param_3,lVar6);
    _objc_release(lVar10);
  }
  lVar10 = param_5;
  func_0x00010c2a5660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar10 != 0) {
    lVar10 = param_5;
    func_0x00010c2a5660(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar10;
    func_0x00010c067fc0();
    func_0x00010c2259c0(puVar1,param_3,lVar6);
    _objc_release(lVar10);
  }
  lVar10 = param_5;
  func_0x00010bf02400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar10 != 0) {
    lVar10 = param_5;
    func_0x00010bf02400(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar10;
    func_0x00010c0b4ca0();
    func_0x00010c167b60(puVar1,param_3,lVar6);
    _objc_release(lVar10);
  }
  lVar10 = param_5;
  func_0x00010c15e180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar10 != 0) {
    lVar10 = param_5;
    func_0x00010c15e180(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar10;
    func_0x00010c0b4ca0();
    func_0x00010c1fcc80(puVar1,param_3,lVar6);
    _objc_release(lVar10);
  }
  lVar10 = param_5;
  func_0x00010c15e220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar10 != 0) {
    lVar10 = param_5;
    func_0x00010c15e220(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar10;
    func_0x00010c0b4ca0();
    func_0x00010c1fcce0(puVar1,param_3,lVar6);
    _objc_release(lVar10);
  }
  lVar10 = param_5;
  func_0x00010c15e1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar10 != 0) {
    lVar10 = param_5;
    func_0x00010c15e1e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar10;
    func_0x00010c0b4ca0();
    func_0x00010c1aa980(puVar1,param_3,lVar6);
    _objc_release(lVar10);
  }
  lVar10 = param_5;
  func_0x00010c15e1c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar10 != 0) {
    lVar10 = param_5;
    func_0x00010c15e1c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar10;
    func_0x00010c0b4ca0();
    func_0x00010c1aa960(puVar1,param_3,lVar6);
    _objc_release(lVar10);
  }
  lVar10 = param_5;
  func_0x00010c24eb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar10 != 0) {
    lVar10 = param_5;
    func_0x00010c24eb20(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar10;
    func_0x00010c0b4ca0();
    func_0x00010c1975e0(puVar1,param_3,lVar6);
    _objc_release(lVar10);
  }
  lVar10 = param_5;
  func_0x00010bf94860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar10 != 0) {
    lVar10 = param_5;
    func_0x00010bf94860(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar10;
    func_0x00010c0b4ca0();
    func_0x00010c1975c0(puVar1,param_3,lVar6);
    _objc_release(lVar10);
  }
  lVar10 = param_5;
  func_0x00010bf8aba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar10 != 0) {
    lVar10 = param_5;
    func_0x00010bf8aba0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar10;
    func_0x00010c0b4ca0();
    func_0x00010c1920e0(puVar1,param_3,lVar6);
    _objc_release(lVar10);
  }
  lVar10 = param_5;
  func_0x00010bf8abc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar10 != 0) {
    lVar10 = param_5;
    func_0x00010bf8abc0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar10;
    func_0x00010c0b4ca0();
    func_0x00010c192100(puVar1,param_3,lVar6);
    _objc_release(lVar10);
  }
  lVar10 = param_5;
  func_0x00010c0db260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar10 != 0) {
    lVar10 = param_5;
    func_0x00010c0db260(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar10;
    func_0x00010c0b4ca0();
    func_0x00010c1cdb00(puVar1,param_3,lVar6);
    _objc_release(lVar10);
  }
  lVar10 = param_5;
  func_0x00010bf1ca60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar10 != 0) {
    lVar10 = param_5;
    func_0x00010bf1ca60(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar10;
    func_0x00010bf1f3c0();
    func_0x00010c171920(puVar1,param_3,lVar6);
    _objc_release(lVar10);
  }
  lVar10 = param_5;
  func_0x00010bf4dac0();
  if (lVar10 == 1) {
    func_0x00010c19bba0(puVar1,param_3,6);
  }
  else if (lVar10 == 0) {
    lVar10 = param_5;
    func_0x00010c299d80(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c205880(puVar1);
    _objc_release(lVar10);
    func_0x00010c19bba0(puVar1,param_3,5);
    lVar10 = param_5;
    func_0x00010c0d2900(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c9800(puVar1,param_3,lVar10);
    _objc_release(lVar10);
    lVar10 = param_5;
    func_0x00010c0d2920(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar10;
    func_0x00010c067fc0();
    func_0x00010c1c9820(puVar1,param_3,lVar6);
    _objc_release(lVar10);
    lVar10 = param_5;
    func_0x00010c074a20(param_5);
    func_0x00010c1a7f20(puVar1,param_3,lVar10);
  }
  lVar10 = param_5;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar10 != 0) {
    lVar10 = param_5;
    func_0x00010c09ea00(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar10;
    func_0x00010c2709c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    dVar11 = param_1;
    _objc_release(lVar6);
    _objc_release(lVar10);
    lVar10 = param_5;
    func_0x00010c26f500(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    dVar12 = dVar11;
    _objc_release(lVar10);
    func_0x00010c1a3f40(puVar1,param_3,(long)param_1);
    lVar10 = param_5;
    func_0x00010c09ea00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe4080();
    func_0x00010c1a3f20(puVar1,param_3,(long)dVar12);
    _objc_release(lVar10);
    func_0x00010c1a3f00(puVar1,param_3,(long)(dVar11 - param_1));
  }
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 0x18),param_3,puVar1);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a36138; end: 105a361e7; -[SCSpectaclesLogger logTransferFailureWithTransferChannel:transferBatchID:] */

void FUN_105a36138(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c1550;
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  if (param_3 < 3) {
    func_0x00010c1b7360(puVar1,param_2,*(undefined8 *)(&UNK_10ddc9ac8 + param_3 * 8));
  }
  func_0x00010c176040(puVar1,param_2,2);
  uVar2 = param_4;
  func_0x00010bdc3580(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1b73c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a361e8; end: 105a362a7; -[SCSpectaclesLogger logCorruptContent:device:corruptionSource:] */

void FUN_105a361e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126c1558;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dceed8;
  if (param_5 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dba938;
  if (param_5 != 0) {
    ppuVar2 = ppuVar1;
  }
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar3);
  func_0x00010be760c0(param_1,param_2,puVar3,param_4);
  _objc_release(param_4);
  func_0x00010c181f40(puVar3,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c184560(puVar3,param_2,ppuVar2);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105a362a8; end: 105a3633f; -[SCSpectaclesLogger logDeviceUnpaired:reason:] */

void FUN_105a362a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1560;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be760c0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x000109026a70(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21be60(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a36340; end: 105a363bb; -[SCSpectaclesLogger logNrfUnexpectedResponse:reason:] */

void FUN_105a36340(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1568;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1e8100();
  func_0x00010be760c0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a363bc; end: 105a3671f; -[SCSpectaclesLogger logDebugReport:deviceId:firmwareErrorType:firmwareCrashType:transferSessionId:pairingSessionId:updateSessionId:firmwareVersion:hardwareVersion:frameColor:] */

void FUN_105a363bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11,undefined8 param_12)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  puVar1 = PTR_PTR_1126c1570;
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c184ec0();
  _objc_release(param_3);
  func_0x00010c18c9a0(puVar1,param_2,param_4);
  _objc_release(param_4);
  if (param_5 != 0) {
    _objc_retain(param_5);
    uVar2 = param_5;
    func_0x00010c0720c0(param_5,param_2,&PTR____CFConstantStringClassReference_110e17b78);
    if ((uVar2 & 1) == 0) {
      uVar2 = param_5;
      func_0x00010c0720c0(param_5,param_2,&PTR____CFConstantStringClassReference_110e17b98);
      if ((uVar2 & 1) == 0) {
        uVar2 = param_5;
        func_0x00010c0720c0(param_5,param_2,&PTR____CFConstantStringClassReference_110e17bb8);
        if ((uVar2 & 1) == 0) {
          uVar2 = param_5;
          func_0x00010c0720c0(param_5,param_2,&PTR____CFConstantStringClassReference_110e17bd8);
          if ((uVar2 & 1) == 0) {
            uVar2 = param_5;
            func_0x00010c0720c0(param_5,param_2,&PTR____CFConstantStringClassReference_110e17bf8);
            if ((uVar2 & 1) == 0) {
              uVar2 = param_5;
              func_0x00010c0720c0(param_5,param_2,&PTR____CFConstantStringClassReference_110e17c18);
              if ((uVar2 & 1) == 0) {
                uVar2 = param_5;
                func_0x00010c0720c0(param_5,param_2,&PTR____CFConstantStringClassReference_110e17c38
                                   );
                if ((uVar2 & 1) == 0) {
                  uVar2 = param_5;
                  func_0x00010c0720c0(param_5,param_2,
                                      &PTR____CFConstantStringClassReference_110e17c58);
                  uVar3 = 7;
                  if ((int)uVar2 == 0) {
                    uVar3 = 0xffffffffffffffff;
                  }
                }
                else {
                  uVar3 = 5;
                }
              }
              else {
                uVar3 = 6;
              }
            }
            else {
              uVar3 = 9;
            }
          }
          else {
            uVar3 = 8;
          }
        }
        else {
          uVar3 = 10;
        }
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 2;
    }
    _objc_release(param_5);
    func_0x00010c197380(puVar1,param_2,uVar3);
  }
  if (param_6 != 0) {
    _objc_retain(param_6);
    uVar2 = param_6;
    func_0x00010c0720c0(param_6,param_2,&PTR____CFConstantStringClassReference_110e17c78);
    if ((uVar2 & 1) == 0) {
      uVar2 = param_6;
      func_0x00010c0720c0(param_6,param_2,&PTR____CFConstantStringClassReference_110e17c98);
      if ((((uVar2 & 1) == 0) &&
          (uVar2 = param_6,
          func_0x00010c0720c0(param_6,param_2,&PTR____CFConstantStringClassReference_110e17cb8),
          (uVar2 & 1) == 0)) &&
         (uVar2 = param_6,
         func_0x00010c0720c0(param_6,param_2,&PTR____CFConstantStringClassReference_110e17cd8),
         (uVar2 & 1) == 0)) {
        uVar2 = param_6;
        func_0x00010c0720c0(param_6,param_2,&PTR____CFConstantStringClassReference_110e17cf8);
        if ((uVar2 & 1) == 0) {
          uVar2 = param_6;
          func_0x00010c0720c0(param_6,param_2,&PTR____CFConstantStringClassReference_110e17d18);
          if ((uVar2 & 1) == 0) {
            uVar2 = param_6;
            func_0x00010c0720c0(param_6,param_2,&PTR____CFConstantStringClassReference_110e17d38);
            uVar3 = 3;
            if ((int)uVar2 == 0) {
              uVar3 = 5;
            }
          }
          else {
            uVar3 = 4;
          }
        }
        else {
          uVar3 = 2;
        }
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 0;
    }
    _objc_release(param_6);
    func_0x00010c184fc0(puVar1,param_2,uVar3);
  }
  func_0x00010c2198e0(puVar1,param_2,param_7);
  func_0x00010c1d8d80(puVar1,param_2,param_8);
  _objc_release(param_8);
  func_0x00010c21c780(puVar1,param_2,param_9);
  _objc_release(param_9);
  func_0x00010c19cd80(puVar1,param_2,param_10);
  _objc_release(param_10);
  if (param_11 != 0) {
    func_0x00010c1a5640(puVar1,param_2,param_11);
  }
  FUN_105a345b0(param_12);
  func_0x00010c19f260(puVar1,param_2,param_12);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105a36720; end: 105a367b3; -[SCSpectaclesLogger logContentCaptureErrorForDevice:reason:timeOfCapture:] */

void FUN_105a36720(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1578;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010be76080(param_1,param_2,puVar1,param_3,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a367b4; end: 105a36847; -[SCSpectaclesLogger logSpectaclesConnectionStartForTransfer:] */

void FUN_105a367b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c1580;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c15ffa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2198e0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010be75c60(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a36848; end: 105a368db; -[SCSpectaclesLogger logSpectaclesConnectionSuccessForTransfer:] */

void FUN_105a36848(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c1588;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c15ffa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2198e0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010be75c60(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a368dc; end: 105a36997; -[SCSpectaclesLogger logSpectaclesConnectionFailureForUpdate:failureReason:] */

void FUN_105a368dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c1590;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c15ffa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21c780(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c19a060(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010be75c60(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a36998; end: 105a36bff; -[SCSpectaclesLogger logDeviceStatusUpdate:videoCount:] */

void FUN_105a36998(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  if ((*(long *)(param_2 + 0x10) == 0) || (func_0x00010c26f380(puVar1), 3600.0 < param_1)) {
    _objc_retain(puVar1);
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    *(undefined **)(param_2 + 0x10) = puVar1;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c1598;
    _objc_opt_new(PTR_PTR_1126c1598);
    uVar2 = param_4;
    func_0x00010bfb0d20(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19cd80(puVar3,param_3,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bfd38e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a5640(puVar3,param_3,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf40c40(param_4);
    FUN_105a345b0();
    func_0x00010c19f260(puVar3,param_3,uVar2);
    uVar2 = param_4;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfd53a0();
    _objc_release(uVar2);
    if ((int)uVar4 != 0) {
      uVar2 = param_4;
      func_0x00010c0692a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c06e420();
      func_0x00010c1afe80(puVar3,param_3,uVar4);
      _objc_release(uVar2);
    }
    uVar2 = param_4;
    func_0x00010c0692a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf17500();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c067ec0();
    func_0x00010c18c760(puVar3,param_3,(long)(int)uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0692a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c257160();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c067ec0();
    func_0x00010c18cec0(puVar3,param_3,(long)(int)uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    func_0x00010c221460(puVar3,param_3,param_5);
    uVar2 = param_4;
    func_0x00010c15e740(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c9a0(puVar3,param_3,uVar2);
    _objc_release(uVar2);
    func_0x00010c0b2e60(*(undefined8 *)(param_2 + 0x18),param_3,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a36c00; end: 105a36d97; -[SCSpectaclesLogger _populateOnboardingEventParameters:onboardingSessionInfo:] */

void FUN_105a36c00(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_5;
  func_0x00010c0e8140(param_5);
  func_0x00010c1d4660(param_4,param_3,lVar1 != 0);
  func_0x00010c15fe40(param_5);
  func_0x00010c192ec0((double)(long)(param_1 * 10.0) / 10.0,param_4);
  lVar1 = param_5;
  func_0x00010c0f3420(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8d80(param_4,param_3,lVar1);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010bf70720(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c9a0(param_4,param_3,lVar1);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010bfb0d20(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19cd80(param_4,param_3,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010bfd38e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a5640(param_4,param_3,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010bf700a0(param_5);
  FUN_105a345b0();
  func_0x00010c19f260(param_4,param_3,lVar1);
  lVar1 = param_5;
  func_0x00010c0f0be0();
  _objc_release(param_5);
  if (lVar1 - 1U < 0x10) {
    uVar3 = *(undefined8 *)(&UNK_10ddc9ae0 + (lVar1 - 1U) * 8);
  }
  else {
    uVar3 = 0xffffffffffffffff;
  }
  func_0x00010c1d4620(param_4,param_3,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a36d98; end: 105a36e03; -[SCSpectaclesLogger logOnboardingStart:] */

void FUN_105a36d98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c15a0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be75ea0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a36e04; end: 105a36e6f; -[SCSpectaclesLogger logOnboardingPageChange:] */

void FUN_105a36e04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c15a8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be75ea0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a36e70; end: 105a36ef7; -[SCSpectaclesLogger logOnboardingExit:exitSource:] */

void FUN_105a36e70(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c15b0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be75ea0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  if (param_4 != 2) {
    param_4 = (ulong)(param_4 != 1);
  }
  func_0x00010c1d45a0(puVar1,param_2,param_4);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a36ef8; end: 105a36f47; -[SCSpectaclesLogger _logSpectaclesSettingsActionWithType:] */

void FUN_105a36ef8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c15b8;
  _objc_opt_new(PTR_PTR_1126c15b8);
  func_0x00010c1fe460();
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a36f48; end: 105a36f4f; -[SCSpectaclesLogger _logSpectaclesSettingsDeviceActionWithType:device:] */

void FUN_105a36f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be58df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logSpectaclesSettingsDeviceActi_112573d18,param_3,param_4,
             0xffffffffffffffff);
  return;
}



/* Entry: 105a36f50; end: 105a370ef; -[SCSpectaclesLogger _logSpectaclesSettingsDeviceActionWithType:device:failureReason:] */

void FUN_105a36f50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c06e7e0();
  _objc_release(uVar2);
  ppuVar1 = &PTR_PTR_1126c15c0;
  if ((int)uVar3 == 0) {
    ppuVar1 = &PTR_PTR_1126c15c8;
  }
  puVar4 = *ppuVar1;
  _objc_opt_new(puVar4);
  func_0x00010c1fe460();
  func_0x00010be760c0(param_1,param_2,puVar4,param_4);
  uVar2 = param_4;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd53a0();
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    uVar2 = param_4;
    func_0x00010c0692a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06e420();
    func_0x00010c1afe80(puVar4,param_2,uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_4;
  func_0x00010c0692a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf17500();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c067ec0();
  func_0x00010c18c760(puVar4,param_2,(long)(int)uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c0692a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c257160();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c067ec0();
  func_0x00010c18cec0(puVar4,param_2,(long)(int)uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c19a060(puVar4,param_2,param_5);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a370f0; end: 105a37163; -[SCSpectaclesLogger logUserEnterSettingsPageWithNumDevices:deviceState:] */

void FUN_105a370f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c15b8;
  _objc_opt_new(PTR_PTR_1126c15b8);
  func_0x00010c1cebc0();
  FUN_105a37164(param_4);
  func_0x00010c18ce40(puVar1,param_2,param_4);
  func_0x00010c1fe460(puVar1,param_2,0);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a37164; end: 105a37187;  */

undefined8 FUN_105a37164(long param_1)

{
  if (param_1 - 1U < 0x1b) {
    return *(undefined8 *)(&UNK_10ddc9b60 + (param_1 - 1U) * 8);
  }
  return 1;
}



/* Entry: 105a37188; end: 105a371fb; -[SCSpectaclesLogger logUserExitSettingsPageWithNumDevices:deviceState:] */

void FUN_105a37188(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c15b8;
  _objc_opt_new(PTR_PTR_1126c15b8);
  func_0x00010c1cebc0();
  FUN_105a37164(param_4);
  func_0x00010c18ce40(puVar1,param_2,param_4);
  func_0x00010c1fe460(puVar1,param_2,1);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a371fc; end: 105a37203; -[SCSpectaclesLogger logSettingsUserVisitedNeedHelpPage] */

void FUN_105a371fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be58db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logSpectaclesSettingsActionWith_112573d08,2)
  ;
  return;
}



/* Entry: 105a37204; end: 105a3720b; -[SCSpectaclesLogger logSettingsUserVisitedGettingStartedPage] */

void FUN_105a37204(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be58db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logSpectaclesSettingsActionWith_112573d08,3)
  ;
  return;
}



/* Entry: 105a3720c; end: 105a37217; -[SCSpectaclesLogger logSettingsUserPressedConnectDevice:] */

void FUN_105a3720c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be58dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logSpectaclesSettingsDeviceActi_112573d10,0xe,param_3);
  return;
}



/* Entry: 105a37218; end: 105a37227; -[SCSpectaclesLogger logSettingsUserConnectDeviceFailure:failureReason:] */

void FUN_105a37218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be58df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logSpectaclesSettingsDeviceActi_112573d18,0x10,param_3,param_4);
  return;
}



/* Entry: 105a37228; end: 105a37233; -[SCSpectaclesLogger logSettingsUserConnectDeviceSuccess:] */

void FUN_105a37228(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be58dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logSpectaclesSettingsDeviceActi_112573d10,0xf,param_3);
  return;
}



/* Entry: 105a37234; end: 105a372a7; -[SCSpectaclesLogger logSettingsUserVisitedCommerceWebsiteWithNumDevices:deviceState:] */

void FUN_105a37234(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c15b8;
  _objc_opt_new(PTR_PTR_1126c15b8);
  func_0x00010c1cebc0();
  FUN_105a37164(param_4);
  func_0x00010c18ce40(puVar1,param_2,param_4);
  func_0x00010c1fe460(puVar1,param_2,0x17);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a372a8; end: 105a3737f; -[SCSpectaclesLogger _populateGetHdEventParameters:deviceId:firmwareVersion:hardwareVersion:deviceColor:] */

void FUN_105a372a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c18c9a0(param_3,param_2,param_4);
  uVar1 = param_5;
  func_0x00010bf6e340(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c19cd80(param_3,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_6;
  func_0x00010bf6e340(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010c1a5640(param_3,param_2,uVar1);
  _objc_release(uVar1);
  FUN_105a345b0(param_7);
  func_0x00010c19f260(param_3,param_2,param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a37380; end: 105a374a7; -[SCSpectaclesLogger _populateGetHdEventFlowParameters:getHdSessionInfo:] */

void FUN_105a37380(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_5;
  func_0x00010bf70720(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010bfb0d20(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010bfd38e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010bf700a0(param_5);
  func_0x00010be75dc0(param_2,param_3,param_4,uVar1,uVar2,uVar3,uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c27a320(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2198e0(param_4,param_3,uVar1);
  _objc_release(uVar1);
  func_0x00010bf8b3e0(param_5);
  func_0x00010c192ec0((double)(long)(param_1 * 10.0) / 10.0,param_4);
  uVar1 = param_5;
  func_0x00010c0ddee0(param_5);
  _objc_release(param_5);
  func_0x00010c1ced20(param_4,param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a374a8; end: 105a3760f; -[SCSpectaclesLogger _logHDUntransferredContentSeenByUser:] */

void FUN_105a374a8(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c15d0;
  _objc_opt_new(PTR_PTR_1126c15d0);
  lVar2 = param_4;
  func_0x00010bf6fd20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be760c0(param_2,param_3,puVar1,lVar2);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010bdc3540(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181f40(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010c27dd80();
  if (lVar2 == 1) {
    uVar4 = 6;
  }
  else if (lVar2 == 0) {
    lVar2 = param_4;
    func_0x00010c0c6c20();
    uVar4 = 4;
    if ((int)lVar2 != 2) {
      uVar4 = 5;
    }
  }
  else {
    uVar4 = 0xffffffffffffffff;
  }
  _objc_release(param_4);
  func_0x00010c19bba0(puVar1,param_3,uVar4);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c26f500(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(puVar3,param_3,lVar2);
  func_0x00010c214d60((double)(long)(param_1 * 10.0) / 10.0,puVar1);
  _objc_release(lVar2);
  _objc_release(puVar3);
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 0x18),param_3,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a37610; end: 105a37707; -[SCSpectaclesLogger logSpectaclesHDUntransferredContentSeenByUser:] */

void FUN_105a37610(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar8 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar7 = auStack_c8;
  uVar9 = 0x10;
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_110,puVar7,0x10);
  if (lVar1 != 0) {
    lVar10 = *plStack_100;
    do {
      lVar11 = 0;
      do {
        if (*plStack_100 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010be548e0(param_1,param_2,*(undefined8 *)(lStack_108 + lVar11 * 8));
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      puVar7 = auStack_c8;
      uVar9 = 0x10;
      lVar1 = param_3;
      puVar8 = &uStack_110;
      func_0x00010bf52a60(param_3,param_2,&uStack_110,puVar7,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126c15d8;
  _objc_retain(puVar8);
  _objc_opt_new(puVar2);
  puVar3 = (undefined1 *)puVar8;
  func_0x00010c15e740(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = (undefined1 *)puVar8;
  func_0x00010bfb0d20(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined1 *)puVar8;
  func_0x00010bfd38e0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = (undefined1 *)puVar8;
  func_0x00010bf40c40(puVar8);
  _objc_release(puVar8);
  func_0x00010be75dc0(param_3,param_2,puVar2,puVar3,puVar4,puVar5,puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  FUN_105a35278(uVar9);
  func_0x00010c174a20(puVar2,param_2,uVar9);
  FUN_105a37164(puVar7);
  func_0x00010c18ce40(puVar2,param_2,puVar7);
  func_0x00010c0b2e60(*(undefined8 *)(param_3 + 0x18),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105a37708; end: 105a37827; -[SCSpectaclesLogger logSpectaclesTransferHDButtonPressed:deviceStatusState:fromSource:] */

void FUN_105a37708(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c15d8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c15e740(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bfb0d20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfd38e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf40c40(param_3);
  _objc_release(param_3);
  func_0x00010be75dc0(param_1,param_2,puVar1,uVar2,uVar3,uVar4,uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  FUN_105a35278(param_5);
  func_0x00010c174a20(puVar1,param_2,param_5);
  FUN_105a37164(param_4);
  func_0x00010c18ce40(puVar1,param_2,param_4);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a37828; end: 105a37c3b; -[SCSpectaclesLogger logSpectaclesHDTransferInitiation:] */

void FUN_105a37828(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c15e0;
  _objc_opt_new(PTR_PTR_1126c15e0);
  uVar2 = param_3;
  func_0x00010c250b40(param_3);
  FUN_105a35278();
  func_0x00010c2098c0(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010bf70fe0(param_3);
  FUN_105a37164();
  func_0x00010c18ce40(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c064ea0(param_3);
  func_0x00010c219840(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c27a200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c27a200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c067fc0();
    if (uVar3 < 3) {
      uVar4 = *(undefined8 *)(&UNK_10ddc9c90 + uVar3 * 8);
    }
    else {
      uVar4 = 0xffffffffffffffff;
    }
    func_0x00010c2197c0(puVar1,param_2,uVar4);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c079f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c079f40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    func_0x00010c1b3460(puVar1,param_2,uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c074680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c074680(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    func_0x00010c1b1840(puVar1,param_2,uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010bf06260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010bf06260(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    func_0x00010c169220(puVar1,param_2,uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010bfe4f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010bfe4f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    func_0x00010c1aeec0(puVar1,param_2,uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0db800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0db800(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    func_0x00010c1cdce0(puVar1,param_2,uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0fb140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0fb140(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    func_0x00010c1db260(puVar1,param_2,uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c105b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c105b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    func_0x00010c1df8e0(puVar1,param_2,uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c2a5320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c2a5320(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    func_0x00010c225880(puVar1,param_2,uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0b8580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0b8580(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    func_0x00010c1c1ca0(puVar1,param_2,uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c07f060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c07f060(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    func_0x00010c1b48a0(puVar1,param_2,uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c07f080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c07f080(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    func_0x00010c1b48c0(puVar1,param_2,uVar3);
    _objc_release(uVar2);
  }
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a37c3c; end: 105a37cdf; -[SCSpectaclesLogger logHDFlowStartedWithBatchId:] */

void FUN_105a37c3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c15e8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1d7e80();
  func_0x00010c1d84e0(puVar1,param_2,2);
  func_0x00010c161620(puVar1,param_2,5);
  uVar2 = param_3;
  func_0x00010bdc3580(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1b73c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a37ce0; end: 105a37d63; -[SCSpectaclesLogger logSpectaclesTransferHDFlowStarted:fromSource:] */

void FUN_105a37ce0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c15f0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be75da0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  FUN_105a35278(param_4);
  func_0x00010c2098c0(puVar1,param_2,param_4);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a37d64; end: 105a37de3; -[SCSpectaclesLogger logSpectaclesTransferHDFlowCancelled:fromSource:] */

void FUN_105a37d64(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c15f8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be75da0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c1780e0(puVar1,param_2,param_4 != 0);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a37de4; end: 105a37e17; -[SCSpectaclesLogger logCustomExportStart:source:] */

void FUN_105a37de4(void)

{
  func_0x00010be52200();
  return;
}



/* Entry: 105a37e18; end: 105a37e4b; -[SCSpectaclesLogger logCustomExportCancel:source:cancellationSource:] */

void FUN_105a37e18(void)

{
  func_0x00010be52200();
  return;
}



/* Entry: 105a37e4c; end: 105a37e7b; -[SCSpectaclesLogger logCustomExportForContentId:deviceId:lensInfo:source:action:shareChannel:] */

void FUN_105a37e4c(void)

{
  func_0x00010be52200();
  return;
}



/* Entry: 105a37e7c; end: 105a37f93; -[SCSpectaclesLogger _logCustomExportForContentId:deviceId:lensInfo:action:source:cancellationSource:shareChannel:] */

void FUN_105a37e7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1600;
  _objc_retain(param_9);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c181f40();
  _objc_release(param_3);
  func_0x00010c18c9a0(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1b2700(puVar1,param_2,0);
  func_0x00010c1bbee0(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c1e4c80(puVar1,param_2,param_6);
  func_0x00010c206c40(puVar1,param_2,param_7);
  func_0x00010c178240(puVar1,param_2,param_8);
  func_0x00010c1feb20(puVar1,param_2,param_9);
  _objc_release(param_9);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a37f94; end: 105a380c7; -[SCSpectaclesLogger logNotificationDisplayed:withSystem:] */

void FUN_105a37f94(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c11c420();
  if (lVar2 == 0x3f) {
    ppuVar1 = &PTR_PTR_1126c1608;
    if (param_4 == 0) {
      ppuVar1 = &PTR_PTR_1126c1610;
    }
    puVar3 = *ppuVar1;
    _objc_alloc_init(puVar3);
    puVar4 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc(PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
    lVar2 = param_3;
    func_0x00010c292820(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfeea60(puVar4,param_2,lVar5,0);
    _objc_release(lVar5);
    _objc_release(lVar2);
    func_0x00010c1ec620(puVar4,param_2,0);
    puVar6 = puVar4;
    func_0x00010bf67000(puVar4,param_2,*(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be761a0(param_1,param_2,puVar3,puVar6);
    _objc_release(puVar6);
    func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar3);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a380c8; end: 105a381d3; -[SCSpectaclesLogger _populateSpectaclesTrackedEvent:device:] */

void FUN_105a380c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c15e740(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c9a0(param_3,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bfb0d20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19cd80(param_3,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bfd38e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a5640(param_3,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf40c40(param_4);
  _objc_release(param_4);
  FUN_105a345b0(uVar1);
  func_0x00010c19f260(param_3,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a381d4; end: 105a38227; -[SCSpectaclesLogger _populateAndLogFirmwareUpdateEvent:device:] */

void FUN_105a381d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010be760c0(param_1,param_2,param_3,param_4);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a38228; end: 105a38287; -[SCSpectaclesLogger logFirmwareUpdateChecked:] */

void FUN_105a38228(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1618;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010be75ac0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


