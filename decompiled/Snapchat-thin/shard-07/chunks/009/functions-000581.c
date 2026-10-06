/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ac00e0; end: 105ac00e3; -[SCSpectaclesPairingUserEventAnalyticsWrapper pairingDidFindBTPickerDevice] */

void FUN_105ac00e0(void)

{
  return;
}



/* Entry: 105ac00e4; end: 105ac00e7; -[SCSpectaclesPairingUserEventAnalyticsWrapper pairingDidCancelBTPicker] */

void FUN_105ac00e4(void)

{
  return;
}



/* Entry: 105ac00e8; end: 105ac013f; -[SCSpectaclesPairingUserEventAnalyticsWrapper pairingDidSucceedWithDeviceInformation:alreadyPaired:] */

void FUN_105ac00e8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f3440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abfa0(uVar2,param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ac0140; end: 105ac019f; -[SCSpectaclesPairingUserEventAnalyticsWrapper pairingDidFail:] */

void FUN_105ac0140(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f3440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abe60(uVar2,param_2,lVar1,param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ac01a0; end: 105ac01fb; -[SCSpectaclesPairingUserEventAnalyticsWrapper pairingDidFindMismatchUserWithPreviousUserMediaCount:] */

void FUN_105ac01a0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f3440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abe60(uVar2,param_2,lVar1,0x12);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ac01fc; end: 105ac025b; -[SCSpectaclesPairingUserEventAnalyticsWrapper userNamedDevice:changedFromDefault:] */

void FUN_105ac01fc(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_4 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c0f3440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0abf00(uVar2,param_2,lVar1);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105ac025c; end: 105ac02bb; -[SCSpectaclesPairingUserEventAnalyticsWrapper userSetLocationPermissions:] */

void FUN_105ac025c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f3440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abee0(uVar2,param_2,param_3,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ac02bc; end: 105ac0313; -[SCSpectaclesPairingUserEventAnalyticsWrapper userRequestsPairingRetry] */

void FUN_105ac02bc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f3440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abf60(uVar2,param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ac0314; end: 105ac036b; -[SCSpectaclesPairingUserEventAnalyticsWrapper userOpenedTOS] */

void FUN_105ac0314(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f3440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ac000(uVar2,param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ac036c; end: 105ac03c3; -[SCSpectaclesPairingUserEventAnalyticsWrapper userClosedTOS] */

void FUN_105ac036c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f3440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abfe0(uVar2,param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ac03c4; end: 105ac0423; -[SCSpectaclesPairingUserEventAnalyticsWrapper userAcceptedTOSWithIsBIPA:] */

void FUN_105ac03c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f3440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abfc0(uVar2,param_2,lVar1,param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ac0424; end: 105ac047b; -[SCSpectaclesPairingUserEventAnalyticsWrapper userTappedNeedHelp] */

void FUN_105ac0424(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f3440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abf40(uVar2,param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ac047c; end: 105ac04d3; -[SCSpectaclesPairingUserEventAnalyticsWrapper userViewedInactiveAlert] */

void FUN_105ac047c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f3440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abea0(uVar2,param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ac04d4; end: 105ac052b; -[SCSpectaclesPairingUserEventAnalyticsWrapper userTappedKeepPairingFromInactiveAlert] */

void FUN_105ac04d4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f3440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abe80(uVar2,param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ac052c; end: 105ac0583; -[SCSpectaclesPairingUserEventAnalyticsWrapper userTappedSupportFromInactiveAlert] */

void FUN_105ac052c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f3440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abec0(uVar2,param_2,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ac0584; end: 105ac05e3; -[SCSpectaclesPairingUserEventAnalyticsWrapper userCancelledPairing:] */

void FUN_105ac0584(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f3440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abe40(uVar2,param_2,lVar1,param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ac05e4; end: 105ac060f; -[SCSpectaclesPairingUserEventAnalyticsWrapper .cxx_destruct] */

void FUN_105ac05e4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ac0610; end: 105ac088b; -[SCSpectaclesPairingCoordinator initWithSpectaclesManager:pairingDeviceInfo:pairingListeners:userEventListeners:] */

undefined8 *
FUN_105ac0610(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             long param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_178;
  undefined *puStack_170;
  long lStack_68;
  
  puVar6 = &uStack_200;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_170 = PTR_PTR_1126ebc10;
  puVar4 = &uStack_178;
  uStack_178 = param_1;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar1 = puVar4[5];
    puVar4[5] = param_4;
    _objc_release(uVar1);
    _objc_retain(param_3);
    uVar1 = puVar4[3];
    puVar4[3] = param_3;
    _objc_release(uVar1);
    func_0x00010bef9980(puVar4[3]);
    puVar2 = PTR_PTR_1126c2078;
    _objc_alloc_init();
    uVar1 = puVar4[1];
    puVar4[1] = puVar2;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126c2080;
    _objc_alloc_init();
    uVar1 = puVar4[2];
    puVar4[2] = puVar2;
    _objc_release(uVar1);
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    plStack_1b0 = (long *)0x0;
    _objc_retain(param_5);
    lVar3 = param_5;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar7 = *plStack_1b0;
      do {
        lVar8 = 0;
        do {
          if (*plStack_1b0 != lVar7) {
            _objc_enumerationMutation(param_5);
          }
          func_0x00010bef9980(puVar4[1]);
          lVar8 = lVar8 + 1;
        } while (lVar3 != lVar8);
        lVar3 = param_5;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(param_5);
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    plStack_1f0 = (long *)0x0;
    _objc_retain(param_6);
    lVar3 = param_6;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar7 = *plStack_1f0;
      do {
        lVar8 = 0;
        do {
          if (*plStack_1f0 != lVar7) {
            _objc_enumerationMutation(param_6);
          }
          func_0x00010bef9980(puVar4[2]);
          lVar8 = lVar8 + 1;
        } while (lVar3 != lVar8);
        lVar3 = param_6;
        puVar6 = &uStack_200;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(param_6);
    puVar5 = puVar6;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x00010c0f2fc0(param_3[1]);
  if (puVar5 == (undefined8 *)0x2) {
    puVar4 = (undefined8 *)param_3[1];
                    /* WARNING: Could not recover jumptable at 0x00010c0f2db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar4,PTR_s_pairingBeganConnectingBLE_11261a580);
    return puVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c13bf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_restart_11262c9e8);
  return param_3;
}



/* Entry: 105ac088c; end: 105ac08cf; -[SCSpectaclesPairingCoordinator startAnnouncingFromSource:] */

void FUN_105ac088c(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c0f2fc0(*(undefined8 *)(param_1 + 8));
  if (param_3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010c0f2db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_pairingBeganConnectingBLE_11261a580);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c13bf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_restart_11262c9e8);
  return;
}



/* Entry: 105ac08d0; end: 105ac08d7; -[SCSpectaclesPairingCoordinator restart] */

void FUN_105ac08d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f2e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_pairingBeganScanning_11261a598);
  return;
}



/* Entry: 105ac08d8; end: 105ac08e3; -[SCSpectaclesPairingCoordinator timeout] */

void FUN_105ac08d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f2f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_pairingDidFail__11261a5e8,2);
  return;
}



/* Entry: 105ac08e4; end: 105ac094b; -[SCSpectaclesPairingCoordinator userNamedDevice:changedFromDefault:] */

void FUN_105ac08e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c292e40(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c078aa0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0f2df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_pairingBeganRequestingLocation_11261a590);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0f2dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_pairingBeganConnectingBTC_11261a588);
  return;
}



/* Entry: 105ac094c; end: 105ac0953; -[SCSpectaclesPairingCoordinator userSetLocationPermissions:] */

void FUN_105ac094c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c293990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_userSetLocationPermissions__112682888);
  return;
}



/* Entry: 105ac0954; end: 105ac095b; -[SCSpectaclesPairingCoordinator userRequestsPairingRetry] */

void FUN_105ac0954(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2934f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_userRequestsPairingRetry_112682760);
  return;
}



/* Entry: 105ac095c; end: 105ac0963; -[SCSpectaclesPairingCoordinator userOpenedTOS] */

void FUN_105ac095c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c293030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_userOpenedTOS_112682630);
  return;
}



/* Entry: 105ac0964; end: 105ac096b; -[SCSpectaclesPairingCoordinator userClosedTOS] */

void FUN_105ac0964(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2916d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_userClosedTOS_112681fd8);
  return;
}



/* Entry: 105ac096c; end: 105ac0973; -[SCSpectaclesPairingCoordinator userAcceptedTOSWithIsBIPA:] */

void FUN_105ac096c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c291030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_userAcceptedTOSWithIsBIPA__112681e30);
  return;
}



/* Entry: 105ac0974; end: 105ac097b; -[SCSpectaclesPairingCoordinator userTappedNeedHelp] */

void FUN_105ac0974(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c293eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_userTappedNeedHelp_1126829d0);
  return;
}



/* Entry: 105ac097c; end: 105ac0983; -[SCSpectaclesPairingCoordinator userViewedInactiveAlert] */

void FUN_105ac097c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c294210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_userViewedInactiveAlert_112682aa8);
  return;
}



/* Entry: 105ac0984; end: 105ac098b; -[SCSpectaclesPairingCoordinator userTappedSupportFromInactiveAlert] */

void FUN_105ac0984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c293ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_userTappedSupportFromInactiveAle_1126829e0);
  return;
}



/* Entry: 105ac098c; end: 105ac0993; -[SCSpectaclesPairingCoordinator userTappedKeepPairingFromInactiveAlert] */

void FUN_105ac098c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c293e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_userTappedKeepPairingFromInactiv_1126829c8);
  return;
}



/* Entry: 105ac0994; end: 105ac099b; -[SCSpectaclesPairingCoordinator userCancelledPairing:] */

void FUN_105ac0994(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2915d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_userCancelledPairing__112681f98);
  return;
}



/* Entry: 105ac099c; end: 105ac0b77; -[SCSpectaclesPairingCoordinator spectaclesOnPairingStateUpdate:deviceInformation:] */

void FUN_105ac099c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_4;
  _objc_release(uVar1);
  switch(param_3) {
  case 1:
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = 9;
    break;
  case 2:
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = 8;
    break;
  case 3:
    func_0x00010c0f2da0(*(undefined8 *)(param_1 + 8));
    goto LAB_105ac0b64;
  case 4:
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = 0xd;
    break;
  case 5:
    func_0x00010c0f2d80(*(undefined8 *)(param_1 + 8));
  default:
    goto LAB_105ac0b64;
  case 7:
    func_0x00010c0f2f20(*(undefined8 *)(param_1 + 8));
    goto LAB_105ac0b64;
  case 8:
    func_0x00010c0f3000(*(undefined8 *)(param_1 + 8));
    goto LAB_105ac0b64;
  case 9:
    func_0x00010c0f3300(*(undefined8 *)(param_1 + 8));
    goto LAB_105ac0b64;
  case 10:
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = 10;
    break;
  case 0xb:
    func_0x00010c0f2fa0(*(undefined8 *)(param_1 + 8));
    goto LAB_105ac0b64;
  case 0xc:
    func_0x00010c0f2f60(*(undefined8 *)(param_1 + 8));
    goto LAB_105ac0b64;
  case 0xd:
    func_0x00010c0f2f00(*(undefined8 *)(param_1 + 8));
    goto LAB_105ac0b64;
  case 0xe:
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = 0xc;
    break;
  case 0xf:
    func_0x00010c0f2dc0(*(undefined8 *)(param_1 + 8));
    goto LAB_105ac0b64;
  case 0x10:
    func_0x00010c0f2e20(*(undefined8 *)(param_1 + 8));
    goto LAB_105ac0b64;
  case 0x11:
    *(undefined1 *)(param_1 + 0x20) = 1;
    func_0x00010c0f2fe0(*(undefined8 *)(param_1 + 8),param_2,param_4,1);
    goto LAB_105ac0b64;
  case 0x13:
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = 0;
    break;
  case 0x14:
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = 0xe;
    break;
  case 0x15:
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = 5;
    break;
  case 0x16:
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = 6;
    break;
  case 0x17:
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = 7;
    break;
  case 0x18:
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = 4;
    break;
  case 0x19:
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = 0xf;
    break;
  case 0x1a:
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = 0x10;
    break;
  case 0x1b:
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = 0x11;
    break;
  case 0x1c:
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar1 = param_4;
    func_0x00010c112940(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2f80(uVar2,param_2,uVar1);
    _objc_release(uVar1);
    goto LAB_105ac0b64;
  }
  func_0x00010c0f2f40(uVar1,param_2,uVar2);
LAB_105ac0b64:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105ac0b78; end: 105ac0b93; -[SCSpectaclesPairingCoordinator spectaclesDeviceDidPair:] */

void FUN_105ac0b78(long param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c0f2ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_pairingDidSucceedWithDeviceInfor_11261a610,
             *(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 105ac0b94; end: 105ac0bb3; -[SCSpectaclesPairingCoordinator spectaclesOnBluetoothStateUpdate:] */

void FUN_105ac0b94(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 5) && ((*(byte *)(param_1 + 0x20) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c0f2f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_pairingDidFail__11261a5e8,0xb);
    return;
  }
  return;
}



/* Entry: 105ac0bb4; end: 105ac0bbb; -[SCSpectaclesPairingCoordinator pairingDeviceInformation] */

undefined8 FUN_105ac0bb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105ac0bbc; end: 105ac0c03; -[SCSpectaclesPairingCoordinator .cxx_destruct] */

void FUN_105ac0bbc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ac0c04; end: 105ac0cf3; -[SCSpectaclesPairingListenerAnnouncer pairingDidStart] */

undefined1 * FUN_105ac0c04(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar9;
  undefined8 *puVar10;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *puStack_1d20;
  undefined *puStack_1d18;
  undefined1 *puStack_1d10;
  undefined1 *puStack_1d08;
  undefined1 *puStack_1d00;
  undefined1 *puStack_1cf8;
  undefined1 *puStack_1cf0;
  undefined1 *puStack_1ce8;
  undefined8 **ppuStack_1ce0;
  code *pcStack_1cd8;
  undefined8 uStack_1cd0;
  long lStack_1cc8;
  undefined8 *puStack_1cc0;
  undefined8 uStack_1cb8;
  undefined8 uStack_1cb0;
  undefined8 uStack_1ca8;
  undefined8 uStack_1ca0;
  undefined8 uStack_1c98;
  undefined1 auStack_1c88 [128];
  long lStack_1c08;
  undefined1 *puStack_1c00;
  undefined1 *puStack_1bf8;
  undefined1 *puStack_1bf0;
  undefined1 *puStack_1be8;
  undefined1 *puStack_1be0;
  undefined1 *puStack_1bd8;
  undefined8 **ppuStack_1bd0;
  code *pcStack_1bc8;
  undefined8 uStack_1bc0;
  long lStack_1bb8;
  undefined8 *puStack_1bb0;
  undefined8 uStack_1ba8;
  undefined8 uStack_1ba0;
  undefined8 uStack_1b98;
  undefined8 uStack_1b90;
  undefined8 uStack_1b88;
  long lStack_1af8;
  undefined8 **ppuStack_1ac0;
  code *pcStack_1ab8;
  undefined8 uStack_1ab0;
  long lStack_1aa8;
  undefined8 *puStack_1aa0;
  undefined8 uStack_1a98;
  undefined8 uStack_1a90;
  undefined8 uStack_1a88;
  undefined8 uStack_1a80;
  undefined8 uStack_1a78;
  long lStack_19e8;
  undefined8 **ppuStack_19b0;
  code *pcStack_19a8;
  undefined8 uStack_19a0;
  long lStack_1998;
  undefined8 *puStack_1990;
  undefined8 uStack_1988;
  undefined8 uStack_1980;
  undefined8 uStack_1978;
  undefined8 uStack_1970;
  undefined8 uStack_1968;
  long lStack_18d8;
  undefined8 **ppuStack_18a0;
  code *pcStack_1898;
  undefined8 uStack_1890;
  long lStack_1888;
  undefined8 *puStack_1880;
  undefined8 uStack_1878;
  undefined8 uStack_1870;
  undefined8 uStack_1868;
  undefined8 uStack_1860;
  undefined8 uStack_1858;
  long lStack_17c8;
  undefined8 **ppuStack_1790;
  code *pcStack_1788;
  undefined8 uStack_1780;
  long lStack_1778;
  undefined8 *puStack_1770;
  undefined8 uStack_1768;
  undefined8 uStack_1760;
  undefined8 uStack_1758;
  undefined8 uStack_1750;
  undefined8 uStack_1748;
  long lStack_16b8;
  undefined1 *puStack_16b0;
  undefined1 *puStack_16a8;
  undefined1 *puStack_16a0;
  undefined1 *puStack_1698;
  undefined1 *puStack_1690;
  undefined1 *puStack_1688;
  undefined8 **ppuStack_1680;
  code *pcStack_1678;
  undefined8 uStack_1670;
  long lStack_1668;
  undefined8 *puStack_1660;
  undefined8 uStack_1658;
  undefined8 uStack_1650;
  undefined8 uStack_1648;
  undefined8 uStack_1640;
  undefined8 uStack_1638;
  long lStack_15a8;
  undefined8 **ppuStack_1570;
  code *pcStack_1568;
  undefined8 uStack_1560;
  long lStack_1558;
  undefined8 *puStack_1550;
  undefined8 uStack_1548;
  undefined8 uStack_1540;
  undefined8 uStack_1538;
  undefined8 uStack_1530;
  undefined8 uStack_1528;
  long lStack_1498;
  undefined8 **ppuStack_1460;
  code *pcStack_1458;
  undefined8 uStack_1450;
  long lStack_1448;
  undefined8 *puStack_1440;
  undefined8 uStack_1438;
  undefined8 uStack_1430;
  undefined8 uStack_1428;
  undefined8 uStack_1420;
  undefined8 uStack_1418;
  long lStack_1388;
  undefined8 **ppuStack_1350;
  code *pcStack_1348;
  undefined8 uStack_1340;
  long lStack_1338;
  undefined8 *puStack_1330;
  undefined8 uStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  long lStack_1278;
  undefined1 *puStack_1270;
  undefined1 *puStack_1268;
  undefined1 *puStack_1260;
  undefined1 *puStack_1258;
  undefined1 *puStack_1250;
  undefined1 *puStack_1248;
  undefined8 **ppuStack_1240;
  code *pcStack_1238;
  undefined8 uStack_1230;
  long lStack_1228;
  undefined8 *puStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  long lStack_1168;
  undefined8 **ppuStack_1120;
  code *pcStack_1118;
  undefined8 uStack_1110;
  long lStack_1108;
  undefined8 *puStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined1 auStack_10c8 [128];
  long lStack_1048;
  undefined1 *puStack_1040;
  undefined1 *puStack_1038;
  undefined1 *puStack_1030;
  undefined1 *puStack_1028;
  undefined1 *puStack_1020;
  undefined1 *puStack_1018;
  undefined8 **ppuStack_1010;
  code *pcStack_1008;
  undefined8 uStack_1000;
  long lStack_ff8;
  undefined8 *puStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  long lStack_f38;
  undefined1 *puStack_f30;
  undefined1 *puStack_f28;
  undefined1 *puStack_f20;
  undefined1 *puStack_f18;
  undefined1 *puStack_f10;
  undefined1 *puStack_f08;
  undefined8 **ppuStack_f00;
  code *pcStack_ef8;
  undefined8 uStack_ef0;
  long lStack_ee8;
  undefined8 *puStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  undefined8 uStack_ec0;
  undefined8 uStack_eb8;
  long lStack_e28;
  undefined8 **ppuStack_de0;
  code *pcStack_dd8;
  undefined8 uStack_dd0;
  long lStack_dc8;
  long *plStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined1 auStack_d88 [128];
  long lStack_d08;
  undefined8 **ppuStack_cd0;
  code *pcStack_cc8;
  undefined8 uStack_cc0;
  long lStack_cb8;
  long *plStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  long lStack_bf8;
  undefined8 **ppuStack_bc0;
  code *pcStack_bb8;
  undefined8 uStack_bb0;
  long lStack_ba8;
  long *plStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  long lStack_ae8;
  undefined8 **ppuStack_ab0;
  code *pcStack_aa8;
  undefined8 uStack_aa0;
  long lStack_a98;
  long *plStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  long lStack_9d8;
  undefined8 **ppuStack_9a0;
  code *pcStack_998;
  undefined8 uStack_990;
  long lStack_988;
  long *plStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  long lStack_8c8;
  undefined8 **ppuStack_890;
  code *pcStack_888;
  undefined8 uStack_880;
  long lStack_878;
  long *plStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  long lStack_7b8;
  undefined8 **ppuStack_780;
  code *pcStack_778;
  undefined8 uStack_770;
  long lStack_768;
  long *plStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  long lStack_6a8;
  undefined8 **ppuStack_670;
  code *pcStack_668;
  undefined8 uStack_660;
  long lStack_658;
  long *plStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  long lStack_598;
  undefined8 **ppuStack_560;
  code *pcStack_558;
  undefined8 uStack_550;
  long lStack_548;
  long *plStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  long lStack_488;
  undefined8 **ppuStack_450;
  code *pcStack_448;
  undefined8 uStack_440;
  long lStack_438;
  long *plStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_378;
  undefined8 **ppuStack_340;
  code *pcStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_268;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_158;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_100;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_100 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2fc0(*(undefined8 *)(lStack_108 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_105ac0cf4;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_210;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_210 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2e00(*(undefined8 *)(lStack_218 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_105ac0de4;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_230 = &puStack_120;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_320;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_320 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2da0(*(undefined8 *)(lStack_328 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_338 = FUN_105ac0ed4;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_340 = &ppuStack_230;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_438 = 0;
  uStack_440 = 0;
  uStack_428 = 0;
  plStack_430 = (long *)0x0;
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_430;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_430 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f20(*(undefined8 *)(lStack_438 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_448 = FUN_105ac0fc4;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_450 = &ppuStack_340;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  plStack_540 = (long *)0x0;
  uStack_528 = 0;
  uStack_530 = 0;
  uStack_518 = 0;
  uStack_520 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_540;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_540 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f3000(*(undefined8 *)(lStack_548 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_558 = FUN_105ac10b4;
  lStack_598 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_560 = &ppuStack_450;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_658 = 0;
  uStack_660 = 0;
  uStack_648 = 0;
  plStack_650 = (long *)0x0;
  uStack_638 = 0;
  uStack_640 = 0;
  uStack_628 = 0;
  uStack_630 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_650;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_650 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f3300(*(undefined8 *)(lStack_658 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_598) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_668 = FUN_105ac11a4;
  lStack_6a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_670 = &ppuStack_560;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_768 = 0;
  uStack_770 = 0;
  uStack_758 = 0;
  plStack_760 = (long *)0x0;
  uStack_748 = 0;
  uStack_750 = 0;
  uStack_738 = 0;
  uStack_740 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_760;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_760 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2d80(*(undefined8 *)(lStack_768 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6a8) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_778 = FUN_105ac1294;
  lStack_7b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_780 = &ppuStack_670;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_878 = 0;
  uStack_880 = 0;
  uStack_868 = 0;
  plStack_870 = (long *)0x0;
  uStack_858 = 0;
  uStack_860 = 0;
  uStack_848 = 0;
  uStack_850 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_870;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_870 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2de0(*(undefined8 *)(lStack_878 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7b8) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_888 = FUN_105ac1384;
  lStack_8c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_890 = &ppuStack_780;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_988 = 0;
  uStack_990 = 0;
  uStack_978 = 0;
  plStack_980 = (long *)0x0;
  uStack_968 = 0;
  uStack_970 = 0;
  uStack_958 = 0;
  uStack_960 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_980;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_980 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2dc0(*(undefined8 *)(lStack_988 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8c8) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_998 = FUN_105ac1474;
  lStack_9d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_9a0 = &ppuStack_890;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_a98 = 0;
  uStack_aa0 = 0;
  uStack_a88 = 0;
  plStack_a90 = (long *)0x0;
  uStack_a78 = 0;
  uStack_a80 = 0;
  uStack_a68 = 0;
  uStack_a70 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_a90;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_a90 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2e20(*(undefined8 *)(lStack_a98 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9d8) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_aa8 = FUN_105ac1564;
  lStack_ae8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_ab0 = &ppuStack_9a0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ba8 = 0;
  uStack_bb0 = 0;
  uStack_b98 = 0;
  plStack_ba0 = (long *)0x0;
  uStack_b88 = 0;
  uStack_b90 = 0;
  uStack_b78 = 0;
  uStack_b80 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_ba0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_ba0 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2fa0(*(undefined8 *)(lStack_ba8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_ae8) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_bb8 = FUN_105ac1654;
  lStack_bf8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_bc0 = &ppuStack_ab0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_cb8 = 0;
  uStack_cc0 = 0;
  uStack_ca8 = 0;
  plStack_cb0 = (long *)0x0;
  uStack_c98 = 0;
  uStack_ca0 = 0;
  uStack_c88 = 0;
  uStack_c90 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_cb0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_cb0 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f60(*(undefined8 *)(lStack_cb8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_bf8) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_dd0;
  pcStack_cc8 = FUN_105ac1744;
  lStack_d08 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_cd0 = &ppuStack_bc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_dc8 = 0;
  uStack_dd0 = 0;
  uStack_db8 = 0;
  plStack_dc0 = (long *)0x0;
  uStack_da8 = 0;
  uStack_db0 = 0;
  uStack_d98 = 0;
  uStack_da0 = 0;
  puVar1 = auStack_d88;
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    lVar9 = *plStack_dc0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_dc0 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f00(*(undefined8 *)(lStack_dc8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar1 = auStack_d88;
      puVar2 = param_1;
      puVar6 = &uStack_dd0;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d08) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_ef0;
  pcStack_dd8 = FUN_105ac1834;
  lStack_e28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_de0 = &ppuStack_cd0;
  _objc_retain(puVar6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ee8 = 0;
  uStack_ef0 = 0;
  uStack_ed8 = 0;
  puStack_ee0 = (undefined8 *)0x0;
  uStack_ec8 = 0;
  uStack_ed0 = 0;
  uStack_eb8 = 0;
  uStack_ec0 = 0;
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*puStack_ee0;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_ee0 != unaff_x23) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2fe0(*(undefined8 *)(lStack_ee8 + (long)unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (puVar2 != unaff_x24);
      puVar2 = param_1;
      puVar7 = &uStack_ef0;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(param_1);
  puVar2 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e28) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_1000;
  pcStack_ef8 = FUN_105ac1954;
  lStack_f38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f30 = unaff_x24;
  puStack_f28 = unaff_x23;
  puStack_f20 = unaff_x22;
  puStack_f18 = param_1;
  puStack_f10 = puVar1;
  puStack_f08 = (undefined1 *)puVar6;
  ppuStack_f00 = &ppuStack_de0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ff8 = 0;
  uStack_1000 = 0;
  uStack_fe8 = 0;
  puStack_ff0 = (undefined8 *)0x0;
  uStack_fd8 = 0;
  uStack_fe0 = 0;
  uStack_fc8 = 0;
  uStack_fd0 = 0;
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_ff0;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_ff0 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c0f2f40(*(undefined8 *)(lStack_ff8 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar1 != unaff_x23);
      puVar1 = puVar2;
      puVar10 = &uStack_1000;
      func_0x00010bf52a60();
      param_1 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f38) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_1110;
  pcStack_1008 = FUN_105ac1a4c;
  lStack_1048 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1040 = unaff_x24;
  puStack_1038 = unaff_x23;
  puStack_1030 = unaff_x22;
  puStack_1028 = param_1;
  puStack_1020 = puVar2;
  puStack_1018 = (undefined1 *)puVar7;
  ppuStack_1010 = &ppuStack_f00;
  _objc_retain(puVar10);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1108 = 0;
  uStack_1110 = 0;
  uStack_10f8 = 0;
  puStack_1100 = (undefined8 *)0x0;
  uStack_10e8 = 0;
  uStack_10f0 = 0;
  uStack_10d8 = 0;
  uStack_10e0 = 0;
  puVar2 = auStack_10c8;
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_1100;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_1100 != unaff_x22) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c0f2f80(*(undefined8 *)(lStack_1108 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar3 != unaff_x23);
      puVar2 = auStack_10c8;
      puVar3 = puVar1;
      puVar6 = &uStack_1110;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1048) {
    return (undefined1 *)puVar10;
  }
  ___stack_chk_fail();
  pcStack_1118 = FUN_105ac1b5c;
  lStack_1168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1120 = &ppuStack_1010;
  _objc_retain(puVar6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1228 = 0;
  uStack_1230 = 0;
  uStack_1218 = 0;
  puStack_1220 = (undefined8 *)0x0;
  uStack_1208 = 0;
  uStack_1210 = 0;
  uStack_11f8 = 0;
  uStack_1200 = 0;
  puVar1 = (undefined1 *)puVar10;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*puStack_1220;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_1220 != unaff_x23) {
          _objc_enumerationMutation(puVar10);
        }
        func_0x00010c292e40(*(undefined8 *)(lStack_1228 + (long)unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (puVar1 != unaff_x24);
      puVar1 = (undefined1 *)puVar10;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release(puVar10);
  puVar1 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1168) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_1238 = FUN_105ac1c7c;
  lStack_1278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1270 = unaff_x24;
  puStack_1268 = unaff_x23;
  puStack_1260 = unaff_x22;
  puStack_1258 = (undefined1 *)puVar10;
  puStack_1250 = puVar2;
  puStack_1248 = (undefined1 *)puVar6;
  ppuStack_1240 = &ppuStack_1120;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1338 = 0;
  uStack_1340 = 0;
  uStack_1328 = 0;
  puStack_1330 = (undefined8 *)0x0;
  uStack_1318 = 0;
  uStack_1320 = 0;
  uStack_1308 = 0;
  uStack_1310 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_1330;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_1330 != unaff_x22) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293980(*(undefined8 *)(lStack_1338 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar2 != unaff_x23);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1278) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_1348 = FUN_105ac1d74;
  lStack_1388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1350 = &ppuStack_1240;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1448 = 0;
  uStack_1450 = 0;
  uStack_1438 = 0;
  puStack_1440 = (undefined8 *)0x0;
  uStack_1428 = 0;
  uStack_1430 = 0;
  uStack_1418 = 0;
  uStack_1420 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1440;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1440 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2934e0(*(undefined8 *)(lStack_1448 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1388) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_1458 = FUN_105ac1e64;
  lStack_1498 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1460 = &ppuStack_1350;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1558 = 0;
  uStack_1560 = 0;
  uStack_1548 = 0;
  puStack_1550 = (undefined8 *)0x0;
  uStack_1538 = 0;
  uStack_1540 = 0;
  uStack_1528 = 0;
  uStack_1530 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1550;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1550 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c293020(*(undefined8 *)(lStack_1558 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1498) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_1568 = FUN_105ac1f54;
  lStack_15a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1570 = &ppuStack_1460;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1668 = 0;
  uStack_1670 = 0;
  uStack_1658 = 0;
  puStack_1660 = (undefined8 *)0x0;
  uStack_1648 = 0;
  uStack_1650 = 0;
  uStack_1638 = 0;
  uStack_1640 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1660;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1660 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2916c0(*(undefined8 *)(lStack_1668 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_15a8) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_1678 = FUN_105ac2044;
  lStack_16b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_16b0 = unaff_x24;
  puStack_16a8 = unaff_x23;
  puStack_16a0 = unaff_x22;
  puStack_1698 = (undefined1 *)puVar10;
  puStack_1690 = puVar1;
  puStack_1688 = puVar2;
  ppuStack_1680 = &ppuStack_1570;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1778 = 0;
  uStack_1780 = 0;
  uStack_1768 = 0;
  puStack_1770 = (undefined8 *)0x0;
  uStack_1758 = 0;
  uStack_1760 = 0;
  uStack_1748 = 0;
  uStack_1750 = 0;
  puVar1 = puVar3;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_1770;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_1770 != unaff_x22) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010c291020(*(undefined8 *)(lStack_1778 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar1 != unaff_x23);
      puVar1 = puVar3;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_16b8) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_1788 = FUN_105ac213c;
  lStack_17c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1790 = &ppuStack_1680;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1888 = 0;
  uStack_1890 = 0;
  uStack_1878 = 0;
  puStack_1880 = (undefined8 *)0x0;
  uStack_1868 = 0;
  uStack_1870 = 0;
  uStack_1858 = 0;
  uStack_1860 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1880;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1880 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293ea0(*(undefined8 *)(lStack_1888 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_17c8) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_1898 = FUN_105ac222c;
  lStack_18d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_18a0 = &ppuStack_1790;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1998 = 0;
  uStack_19a0 = 0;
  uStack_1988 = 0;
  puStack_1990 = (undefined8 *)0x0;
  uStack_1978 = 0;
  uStack_1980 = 0;
  uStack_1968 = 0;
  uStack_1970 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1990;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1990 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c294200(*(undefined8 *)(lStack_1998 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18d8) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_19a8 = FUN_105ac231c;
  lStack_19e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_19b0 = &ppuStack_18a0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1aa8 = 0;
  uStack_1ab0 = 0;
  uStack_1a98 = 0;
  puStack_1aa0 = (undefined8 *)0x0;
  uStack_1a88 = 0;
  uStack_1a90 = 0;
  uStack_1a78 = 0;
  uStack_1a80 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1aa0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1aa0 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293e80(*(undefined8 *)(lStack_1aa8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_19e8) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_1bc0;
  pcStack_1ab8 = FUN_105ac240c;
  lStack_1af8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1ac0 = &ppuStack_19b0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1bb8 = 0;
  uStack_1bc0 = 0;
  uStack_1ba8 = 0;
  puStack_1bb0 = (undefined8 *)0x0;
  uStack_1b98 = 0;
  uStack_1ba0 = 0;
  uStack_1b88 = 0;
  uStack_1b90 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1bb0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1bb0 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293ee0(*(undefined8 *)(lStack_1bb8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      puVar6 = &uStack_1bc0;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1af8) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_1cd0;
  pcStack_1bc8 = FUN_105ac24fc;
  lStack_1c08 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1c00 = unaff_x24;
  puStack_1bf8 = unaff_x23;
  puStack_1bf0 = unaff_x22;
  puStack_1be8 = (undefined1 *)puVar10;
  puStack_1be0 = puVar3;
  puStack_1bd8 = puVar1;
  ppuStack_1bd0 = &ppuStack_1ac0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1cc8 = 0;
  uStack_1cd0 = 0;
  uStack_1cb8 = 0;
  puStack_1cc0 = (undefined8 *)0x0;
  uStack_1ca8 = 0;
  uStack_1cb0 = 0;
  uStack_1c98 = 0;
  uStack_1ca0 = 0;
  puVar1 = auStack_1c88;
  uVar8 = 0x10;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_1cc0;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_1cc0 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2915c0(*(undefined8 *)(lStack_1cc8 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar3 != unaff_x23);
      puVar1 = auStack_1c88;
      uVar8 = 0x10;
      puVar3 = puVar2;
      puVar7 = &uStack_1cd0;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c08) {
    return puVar3;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_1d20;
  pcStack_1cd8 = FUN_105ac25f4;
  puStack_1d10 = unaff_x24;
  puStack_1d08 = unaff_x23;
  puStack_1d00 = unaff_x22;
  puStack_1cf8 = (undefined1 *)puVar10;
  puStack_1cf0 = puVar2;
  puStack_1ce8 = (undefined1 *)puVar6;
  ppuStack_1ce0 = &ppuStack_1bd0;
  _objc_retain(puVar7);
  _objc_retain(puVar1);
  _objc_retain(in_x6);
  puStack_1d18 = PTR_PTR_1126ebc18;
  puStack_1d20 = puVar3;
  _objc_msgSendSuper2(&puStack_1d20,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined1 **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar4 + 8),puVar7);
    _objc_retain(puVar1);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x10);
    *(undefined1 **)((long)ppuVar4 + 0x10) = puVar1;
    _objc_release(uVar5);
    *(undefined8 *)((long)ppuVar4 + 0x18) = in_x5;
    *(undefined8 *)((long)ppuVar4 + 0x20) = uVar8;
    _objc_retain(in_x6);
    uVar8 = *(undefined8 *)((long)ppuVar4 + 0x28);
    *(undefined8 *)((long)ppuVar4 + 0x28) = in_x6;
    _objc_release(uVar8);
  }
  _objc_release(in_x6);
  _objc_release(puVar1);
  _objc_release(puVar7);
  return (undefined1 *)ppuVar4;
}



/* Entry: 105ac0cf4; end: 105ac0de3; -[SCSpectaclesPairingListenerAnnouncer pairingBeganScanning] */

undefined1 * FUN_105ac0cf4(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar9;
  undefined8 *puVar10;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *puStack_1c10;
  undefined *puStack_1c08;
  undefined1 *puStack_1c00;
  undefined1 *puStack_1bf8;
  undefined1 *puStack_1bf0;
  undefined1 *puStack_1be8;
  undefined1 *puStack_1be0;
  undefined1 *puStack_1bd8;
  undefined8 **ppuStack_1bd0;
  code *pcStack_1bc8;
  undefined8 uStack_1bc0;
  long lStack_1bb8;
  undefined8 *puStack_1bb0;
  undefined8 uStack_1ba8;
  undefined8 uStack_1ba0;
  undefined8 uStack_1b98;
  undefined8 uStack_1b90;
  undefined8 uStack_1b88;
  undefined1 auStack_1b78 [128];
  long lStack_1af8;
  undefined1 *puStack_1af0;
  undefined1 *puStack_1ae8;
  undefined1 *puStack_1ae0;
  undefined1 *puStack_1ad8;
  undefined1 *puStack_1ad0;
  undefined1 *puStack_1ac8;
  undefined8 **ppuStack_1ac0;
  code *pcStack_1ab8;
  undefined8 uStack_1ab0;
  long lStack_1aa8;
  undefined8 *puStack_1aa0;
  undefined8 uStack_1a98;
  undefined8 uStack_1a90;
  undefined8 uStack_1a88;
  undefined8 uStack_1a80;
  undefined8 uStack_1a78;
  long lStack_19e8;
  undefined8 **ppuStack_19b0;
  code *pcStack_19a8;
  undefined8 uStack_19a0;
  long lStack_1998;
  undefined8 *puStack_1990;
  undefined8 uStack_1988;
  undefined8 uStack_1980;
  undefined8 uStack_1978;
  undefined8 uStack_1970;
  undefined8 uStack_1968;
  long lStack_18d8;
  undefined8 **ppuStack_18a0;
  code *pcStack_1898;
  undefined8 uStack_1890;
  long lStack_1888;
  undefined8 *puStack_1880;
  undefined8 uStack_1878;
  undefined8 uStack_1870;
  undefined8 uStack_1868;
  undefined8 uStack_1860;
  undefined8 uStack_1858;
  long lStack_17c8;
  undefined8 **ppuStack_1790;
  code *pcStack_1788;
  undefined8 uStack_1780;
  long lStack_1778;
  undefined8 *puStack_1770;
  undefined8 uStack_1768;
  undefined8 uStack_1760;
  undefined8 uStack_1758;
  undefined8 uStack_1750;
  undefined8 uStack_1748;
  long lStack_16b8;
  undefined8 **ppuStack_1680;
  code *pcStack_1678;
  undefined8 uStack_1670;
  long lStack_1668;
  undefined8 *puStack_1660;
  undefined8 uStack_1658;
  undefined8 uStack_1650;
  undefined8 uStack_1648;
  undefined8 uStack_1640;
  undefined8 uStack_1638;
  long lStack_15a8;
  undefined1 *puStack_15a0;
  undefined1 *puStack_1598;
  undefined1 *puStack_1590;
  undefined1 *puStack_1588;
  undefined1 *puStack_1580;
  undefined1 *puStack_1578;
  undefined8 **ppuStack_1570;
  code *pcStack_1568;
  undefined8 uStack_1560;
  long lStack_1558;
  undefined8 *puStack_1550;
  undefined8 uStack_1548;
  undefined8 uStack_1540;
  undefined8 uStack_1538;
  undefined8 uStack_1530;
  undefined8 uStack_1528;
  long lStack_1498;
  undefined8 **ppuStack_1460;
  code *pcStack_1458;
  undefined8 uStack_1450;
  long lStack_1448;
  undefined8 *puStack_1440;
  undefined8 uStack_1438;
  undefined8 uStack_1430;
  undefined8 uStack_1428;
  undefined8 uStack_1420;
  undefined8 uStack_1418;
  long lStack_1388;
  undefined8 **ppuStack_1350;
  code *pcStack_1348;
  undefined8 uStack_1340;
  long lStack_1338;
  undefined8 *puStack_1330;
  undefined8 uStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  long lStack_1278;
  undefined8 **ppuStack_1240;
  code *pcStack_1238;
  undefined8 uStack_1230;
  long lStack_1228;
  undefined8 *puStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  long lStack_1168;
  undefined1 *puStack_1160;
  undefined1 *puStack_1158;
  undefined1 *puStack_1150;
  undefined1 *puStack_1148;
  undefined1 *puStack_1140;
  undefined1 *puStack_1138;
  undefined8 **ppuStack_1130;
  code *pcStack_1128;
  undefined8 uStack_1120;
  long lStack_1118;
  undefined8 *puStack_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  long lStack_1058;
  undefined8 **ppuStack_1010;
  code *pcStack_1008;
  undefined8 uStack_1000;
  long lStack_ff8;
  undefined8 *puStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined1 auStack_fb8 [128];
  long lStack_f38;
  undefined1 *puStack_f30;
  undefined1 *puStack_f28;
  undefined1 *puStack_f20;
  undefined1 *puStack_f18;
  undefined1 *puStack_f10;
  undefined1 *puStack_f08;
  undefined8 **ppuStack_f00;
  code *pcStack_ef8;
  undefined8 uStack_ef0;
  long lStack_ee8;
  undefined8 *puStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  undefined8 uStack_ec0;
  undefined8 uStack_eb8;
  long lStack_e28;
  undefined1 *puStack_e20;
  undefined1 *puStack_e18;
  undefined1 *puStack_e10;
  undefined1 *puStack_e08;
  undefined1 *puStack_e00;
  undefined1 *puStack_df8;
  undefined8 **ppuStack_df0;
  code *pcStack_de8;
  undefined8 uStack_de0;
  long lStack_dd8;
  undefined8 *puStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  long lStack_d18;
  undefined8 **ppuStack_cd0;
  code *pcStack_cc8;
  undefined8 uStack_cc0;
  long lStack_cb8;
  long *plStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined1 auStack_c78 [128];
  long lStack_bf8;
  undefined8 **ppuStack_bc0;
  code *pcStack_bb8;
  undefined8 uStack_bb0;
  long lStack_ba8;
  long *plStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  long lStack_ae8;
  undefined8 **ppuStack_ab0;
  code *pcStack_aa8;
  undefined8 uStack_aa0;
  long lStack_a98;
  long *plStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  long lStack_9d8;
  undefined8 **ppuStack_9a0;
  code *pcStack_998;
  undefined8 uStack_990;
  long lStack_988;
  long *plStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  long lStack_8c8;
  undefined8 **ppuStack_890;
  code *pcStack_888;
  undefined8 uStack_880;
  long lStack_878;
  long *plStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  long lStack_7b8;
  undefined8 **ppuStack_780;
  code *pcStack_778;
  undefined8 uStack_770;
  long lStack_768;
  long *plStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  long lStack_6a8;
  undefined8 **ppuStack_670;
  code *pcStack_668;
  undefined8 uStack_660;
  long lStack_658;
  long *plStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  long lStack_598;
  undefined8 **ppuStack_560;
  code *pcStack_558;
  undefined8 uStack_550;
  long lStack_548;
  long *plStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  long lStack_488;
  undefined8 **ppuStack_450;
  code *pcStack_448;
  undefined8 uStack_440;
  long lStack_438;
  long *plStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_378;
  undefined8 **ppuStack_340;
  code *pcStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_268;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_158;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_100;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_100 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2e00(*(undefined8 *)(lStack_108 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_105ac0de4;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_210;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_210 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2da0(*(undefined8 *)(lStack_218 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_105ac0ed4;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_230 = &puStack_120;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_320;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_320 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f20(*(undefined8 *)(lStack_328 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_338 = FUN_105ac0fc4;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_340 = &ppuStack_230;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_438 = 0;
  uStack_440 = 0;
  uStack_428 = 0;
  plStack_430 = (long *)0x0;
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_430;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_430 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f3000(*(undefined8 *)(lStack_438 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_448 = FUN_105ac10b4;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_450 = &ppuStack_340;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  plStack_540 = (long *)0x0;
  uStack_528 = 0;
  uStack_530 = 0;
  uStack_518 = 0;
  uStack_520 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_540;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_540 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f3300(*(undefined8 *)(lStack_548 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_558 = FUN_105ac11a4;
  lStack_598 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_560 = &ppuStack_450;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_658 = 0;
  uStack_660 = 0;
  uStack_648 = 0;
  plStack_650 = (long *)0x0;
  uStack_638 = 0;
  uStack_640 = 0;
  uStack_628 = 0;
  uStack_630 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_650;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_650 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2d80(*(undefined8 *)(lStack_658 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_598) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_668 = FUN_105ac1294;
  lStack_6a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_670 = &ppuStack_560;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_768 = 0;
  uStack_770 = 0;
  uStack_758 = 0;
  plStack_760 = (long *)0x0;
  uStack_748 = 0;
  uStack_750 = 0;
  uStack_738 = 0;
  uStack_740 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_760;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_760 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2de0(*(undefined8 *)(lStack_768 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6a8) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_778 = FUN_105ac1384;
  lStack_7b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_780 = &ppuStack_670;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_878 = 0;
  uStack_880 = 0;
  uStack_868 = 0;
  plStack_870 = (long *)0x0;
  uStack_858 = 0;
  uStack_860 = 0;
  uStack_848 = 0;
  uStack_850 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_870;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_870 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2dc0(*(undefined8 *)(lStack_878 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7b8) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_888 = FUN_105ac1474;
  lStack_8c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_890 = &ppuStack_780;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_988 = 0;
  uStack_990 = 0;
  uStack_978 = 0;
  plStack_980 = (long *)0x0;
  uStack_968 = 0;
  uStack_970 = 0;
  uStack_958 = 0;
  uStack_960 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_980;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_980 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2e20(*(undefined8 *)(lStack_988 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8c8) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_998 = FUN_105ac1564;
  lStack_9d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_9a0 = &ppuStack_890;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_a98 = 0;
  uStack_aa0 = 0;
  uStack_a88 = 0;
  plStack_a90 = (long *)0x0;
  uStack_a78 = 0;
  uStack_a80 = 0;
  uStack_a68 = 0;
  uStack_a70 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_a90;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_a90 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2fa0(*(undefined8 *)(lStack_a98 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9d8) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_aa8 = FUN_105ac1654;
  lStack_ae8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_ab0 = &ppuStack_9a0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ba8 = 0;
  uStack_bb0 = 0;
  uStack_b98 = 0;
  plStack_ba0 = (long *)0x0;
  uStack_b88 = 0;
  uStack_b90 = 0;
  uStack_b78 = 0;
  uStack_b80 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_ba0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_ba0 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f60(*(undefined8 *)(lStack_ba8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_ae8) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_cc0;
  pcStack_bb8 = FUN_105ac1744;
  lStack_bf8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_bc0 = &ppuStack_ab0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_cb8 = 0;
  uStack_cc0 = 0;
  uStack_ca8 = 0;
  plStack_cb0 = (long *)0x0;
  uStack_c98 = 0;
  uStack_ca0 = 0;
  uStack_c88 = 0;
  uStack_c90 = 0;
  puVar1 = auStack_c78;
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    lVar9 = *plStack_cb0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_cb0 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f00(*(undefined8 *)(lStack_cb8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar1 = auStack_c78;
      puVar2 = param_1;
      puVar6 = &uStack_cc0;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_bf8) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_de0;
  pcStack_cc8 = FUN_105ac1834;
  lStack_d18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_cd0 = &ppuStack_bc0;
  _objc_retain(puVar6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_dd8 = 0;
  uStack_de0 = 0;
  uStack_dc8 = 0;
  puStack_dd0 = (undefined8 *)0x0;
  uStack_db8 = 0;
  uStack_dc0 = 0;
  uStack_da8 = 0;
  uStack_db0 = 0;
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*puStack_dd0;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_dd0 != unaff_x23) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2fe0(*(undefined8 *)(lStack_dd8 + (long)unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (puVar2 != unaff_x24);
      puVar2 = param_1;
      puVar7 = &uStack_de0;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(param_1);
  puVar2 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d18) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_ef0;
  pcStack_de8 = FUN_105ac1954;
  lStack_e28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e20 = unaff_x24;
  puStack_e18 = unaff_x23;
  puStack_e10 = unaff_x22;
  puStack_e08 = param_1;
  puStack_e00 = puVar1;
  puStack_df8 = (undefined1 *)puVar6;
  ppuStack_df0 = &ppuStack_cd0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ee8 = 0;
  uStack_ef0 = 0;
  uStack_ed8 = 0;
  puStack_ee0 = (undefined8 *)0x0;
  uStack_ec8 = 0;
  uStack_ed0 = 0;
  uStack_eb8 = 0;
  uStack_ec0 = 0;
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_ee0;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_ee0 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c0f2f40(*(undefined8 *)(lStack_ee8 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar1 != unaff_x23);
      puVar1 = puVar2;
      puVar10 = &uStack_ef0;
      func_0x00010bf52a60();
      param_1 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e28) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_1000;
  pcStack_ef8 = FUN_105ac1a4c;
  lStack_f38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f30 = unaff_x24;
  puStack_f28 = unaff_x23;
  puStack_f20 = unaff_x22;
  puStack_f18 = param_1;
  puStack_f10 = puVar2;
  puStack_f08 = (undefined1 *)puVar7;
  ppuStack_f00 = &ppuStack_df0;
  _objc_retain(puVar10);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ff8 = 0;
  uStack_1000 = 0;
  uStack_fe8 = 0;
  puStack_ff0 = (undefined8 *)0x0;
  uStack_fd8 = 0;
  uStack_fe0 = 0;
  uStack_fc8 = 0;
  uStack_fd0 = 0;
  puVar2 = auStack_fb8;
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_ff0;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_ff0 != unaff_x22) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c0f2f80(*(undefined8 *)(lStack_ff8 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar3 != unaff_x23);
      puVar2 = auStack_fb8;
      puVar3 = puVar1;
      puVar6 = &uStack_1000;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f38) {
    return (undefined1 *)puVar10;
  }
  ___stack_chk_fail();
  pcStack_1008 = FUN_105ac1b5c;
  lStack_1058 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1010 = &ppuStack_f00;
  _objc_retain(puVar6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1118 = 0;
  uStack_1120 = 0;
  uStack_1108 = 0;
  puStack_1110 = (undefined8 *)0x0;
  uStack_10f8 = 0;
  uStack_1100 = 0;
  uStack_10e8 = 0;
  uStack_10f0 = 0;
  puVar1 = (undefined1 *)puVar10;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*puStack_1110;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_1110 != unaff_x23) {
          _objc_enumerationMutation(puVar10);
        }
        func_0x00010c292e40(*(undefined8 *)(lStack_1118 + (long)unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (puVar1 != unaff_x24);
      puVar1 = (undefined1 *)puVar10;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release(puVar10);
  puVar1 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1058) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_1128 = FUN_105ac1c7c;
  lStack_1168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1160 = unaff_x24;
  puStack_1158 = unaff_x23;
  puStack_1150 = unaff_x22;
  puStack_1148 = (undefined1 *)puVar10;
  puStack_1140 = puVar2;
  puStack_1138 = (undefined1 *)puVar6;
  ppuStack_1130 = &ppuStack_1010;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1228 = 0;
  uStack_1230 = 0;
  uStack_1218 = 0;
  puStack_1220 = (undefined8 *)0x0;
  uStack_1208 = 0;
  uStack_1210 = 0;
  uStack_11f8 = 0;
  uStack_1200 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_1220;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_1220 != unaff_x22) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293980(*(undefined8 *)(lStack_1228 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar2 != unaff_x23);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1168) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_1238 = FUN_105ac1d74;
  lStack_1278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1240 = &ppuStack_1130;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1338 = 0;
  uStack_1340 = 0;
  uStack_1328 = 0;
  puStack_1330 = (undefined8 *)0x0;
  uStack_1318 = 0;
  uStack_1320 = 0;
  uStack_1308 = 0;
  uStack_1310 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1330;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1330 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2934e0(*(undefined8 *)(lStack_1338 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1278) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_1348 = FUN_105ac1e64;
  lStack_1388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1350 = &ppuStack_1240;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1448 = 0;
  uStack_1450 = 0;
  uStack_1438 = 0;
  puStack_1440 = (undefined8 *)0x0;
  uStack_1428 = 0;
  uStack_1430 = 0;
  uStack_1418 = 0;
  uStack_1420 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1440;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1440 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c293020(*(undefined8 *)(lStack_1448 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1388) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_1458 = FUN_105ac1f54;
  lStack_1498 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1460 = &ppuStack_1350;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1558 = 0;
  uStack_1560 = 0;
  uStack_1548 = 0;
  puStack_1550 = (undefined8 *)0x0;
  uStack_1538 = 0;
  uStack_1540 = 0;
  uStack_1528 = 0;
  uStack_1530 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1550;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1550 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2916c0(*(undefined8 *)(lStack_1558 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1498) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_1568 = FUN_105ac2044;
  lStack_15a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_15a0 = unaff_x24;
  puStack_1598 = unaff_x23;
  puStack_1590 = unaff_x22;
  puStack_1588 = (undefined1 *)puVar10;
  puStack_1580 = puVar1;
  puStack_1578 = puVar2;
  ppuStack_1570 = &ppuStack_1460;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1668 = 0;
  uStack_1670 = 0;
  uStack_1658 = 0;
  puStack_1660 = (undefined8 *)0x0;
  uStack_1648 = 0;
  uStack_1650 = 0;
  uStack_1638 = 0;
  uStack_1640 = 0;
  puVar1 = puVar3;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_1660;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_1660 != unaff_x22) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010c291020(*(undefined8 *)(lStack_1668 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar1 != unaff_x23);
      puVar1 = puVar3;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_15a8) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_1678 = FUN_105ac213c;
  lStack_16b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1680 = &ppuStack_1570;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1778 = 0;
  uStack_1780 = 0;
  uStack_1768 = 0;
  puStack_1770 = (undefined8 *)0x0;
  uStack_1758 = 0;
  uStack_1760 = 0;
  uStack_1748 = 0;
  uStack_1750 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1770;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1770 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293ea0(*(undefined8 *)(lStack_1778 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_16b8) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_1788 = FUN_105ac222c;
  lStack_17c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1790 = &ppuStack_1680;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1888 = 0;
  uStack_1890 = 0;
  uStack_1878 = 0;
  puStack_1880 = (undefined8 *)0x0;
  uStack_1868 = 0;
  uStack_1870 = 0;
  uStack_1858 = 0;
  uStack_1860 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1880;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1880 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c294200(*(undefined8 *)(lStack_1888 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_17c8) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_1898 = FUN_105ac231c;
  lStack_18d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_18a0 = &ppuStack_1790;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1998 = 0;
  uStack_19a0 = 0;
  uStack_1988 = 0;
  puStack_1990 = (undefined8 *)0x0;
  uStack_1978 = 0;
  uStack_1980 = 0;
  uStack_1968 = 0;
  uStack_1970 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1990;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1990 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293e80(*(undefined8 *)(lStack_1998 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18d8) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_1ab0;
  pcStack_19a8 = FUN_105ac240c;
  lStack_19e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_19b0 = &ppuStack_18a0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1aa8 = 0;
  uStack_1ab0 = 0;
  uStack_1a98 = 0;
  puStack_1aa0 = (undefined8 *)0x0;
  uStack_1a88 = 0;
  uStack_1a90 = 0;
  uStack_1a78 = 0;
  uStack_1a80 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1aa0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1aa0 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293ee0(*(undefined8 *)(lStack_1aa8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      puVar6 = &uStack_1ab0;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_19e8) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_1bc0;
  pcStack_1ab8 = FUN_105ac24fc;
  lStack_1af8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1af0 = unaff_x24;
  puStack_1ae8 = unaff_x23;
  puStack_1ae0 = unaff_x22;
  puStack_1ad8 = (undefined1 *)puVar10;
  puStack_1ad0 = puVar3;
  puStack_1ac8 = puVar1;
  ppuStack_1ac0 = &ppuStack_19b0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1bb8 = 0;
  uStack_1bc0 = 0;
  uStack_1ba8 = 0;
  puStack_1bb0 = (undefined8 *)0x0;
  uStack_1b98 = 0;
  uStack_1ba0 = 0;
  uStack_1b88 = 0;
  uStack_1b90 = 0;
  puVar1 = auStack_1b78;
  uVar8 = 0x10;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_1bb0;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_1bb0 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2915c0(*(undefined8 *)(lStack_1bb8 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar3 != unaff_x23);
      puVar1 = auStack_1b78;
      uVar8 = 0x10;
      puVar3 = puVar2;
      puVar7 = &uStack_1bc0;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1af8) {
    return puVar3;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_1c10;
  pcStack_1bc8 = FUN_105ac25f4;
  puStack_1c00 = unaff_x24;
  puStack_1bf8 = unaff_x23;
  puStack_1bf0 = unaff_x22;
  puStack_1be8 = (undefined1 *)puVar10;
  puStack_1be0 = puVar2;
  puStack_1bd8 = (undefined1 *)puVar6;
  ppuStack_1bd0 = &ppuStack_1ac0;
  _objc_retain(puVar7);
  _objc_retain(puVar1);
  _objc_retain(in_x6);
  puStack_1c08 = PTR_PTR_1126ebc18;
  puStack_1c10 = puVar3;
  _objc_msgSendSuper2(&puStack_1c10,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined1 **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar4 + 8),puVar7);
    _objc_retain(puVar1);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x10);
    *(undefined1 **)((long)ppuVar4 + 0x10) = puVar1;
    _objc_release(uVar5);
    *(undefined8 *)((long)ppuVar4 + 0x18) = in_x5;
    *(undefined8 *)((long)ppuVar4 + 0x20) = uVar8;
    _objc_retain(in_x6);
    uVar8 = *(undefined8 *)((long)ppuVar4 + 0x28);
    *(undefined8 *)((long)ppuVar4 + 0x28) = in_x6;
    _objc_release(uVar8);
  }
  _objc_release(in_x6);
  _objc_release(puVar1);
  _objc_release(puVar7);
  return (undefined1 *)ppuVar4;
}



/* Entry: 105ac0de4; end: 105ac0ed3; -[SCSpectaclesPairingListenerAnnouncer pairingBeganConnectingBLE] */

undefined1 * FUN_105ac0de4(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar9;
  undefined8 *puVar10;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *puStack_1b00;
  undefined *puStack_1af8;
  undefined1 *puStack_1af0;
  undefined1 *puStack_1ae8;
  undefined1 *puStack_1ae0;
  undefined1 *puStack_1ad8;
  undefined1 *puStack_1ad0;
  undefined1 *puStack_1ac8;
  undefined8 **ppuStack_1ac0;
  code *pcStack_1ab8;
  undefined8 uStack_1ab0;
  long lStack_1aa8;
  undefined8 *puStack_1aa0;
  undefined8 uStack_1a98;
  undefined8 uStack_1a90;
  undefined8 uStack_1a88;
  undefined8 uStack_1a80;
  undefined8 uStack_1a78;
  undefined1 auStack_1a68 [128];
  long lStack_19e8;
  undefined1 *puStack_19e0;
  undefined1 *puStack_19d8;
  undefined1 *puStack_19d0;
  undefined1 *puStack_19c8;
  undefined1 *puStack_19c0;
  undefined1 *puStack_19b8;
  undefined8 **ppuStack_19b0;
  code *pcStack_19a8;
  undefined8 uStack_19a0;
  long lStack_1998;
  undefined8 *puStack_1990;
  undefined8 uStack_1988;
  undefined8 uStack_1980;
  undefined8 uStack_1978;
  undefined8 uStack_1970;
  undefined8 uStack_1968;
  long lStack_18d8;
  undefined8 **ppuStack_18a0;
  code *pcStack_1898;
  undefined8 uStack_1890;
  long lStack_1888;
  undefined8 *puStack_1880;
  undefined8 uStack_1878;
  undefined8 uStack_1870;
  undefined8 uStack_1868;
  undefined8 uStack_1860;
  undefined8 uStack_1858;
  long lStack_17c8;
  undefined8 **ppuStack_1790;
  code *pcStack_1788;
  undefined8 uStack_1780;
  long lStack_1778;
  undefined8 *puStack_1770;
  undefined8 uStack_1768;
  undefined8 uStack_1760;
  undefined8 uStack_1758;
  undefined8 uStack_1750;
  undefined8 uStack_1748;
  long lStack_16b8;
  undefined8 **ppuStack_1680;
  code *pcStack_1678;
  undefined8 uStack_1670;
  long lStack_1668;
  undefined8 *puStack_1660;
  undefined8 uStack_1658;
  undefined8 uStack_1650;
  undefined8 uStack_1648;
  undefined8 uStack_1640;
  undefined8 uStack_1638;
  long lStack_15a8;
  undefined8 **ppuStack_1570;
  code *pcStack_1568;
  undefined8 uStack_1560;
  long lStack_1558;
  undefined8 *puStack_1550;
  undefined8 uStack_1548;
  undefined8 uStack_1540;
  undefined8 uStack_1538;
  undefined8 uStack_1530;
  undefined8 uStack_1528;
  long lStack_1498;
  undefined1 *puStack_1490;
  undefined1 *puStack_1488;
  undefined1 *puStack_1480;
  undefined1 *puStack_1478;
  undefined1 *puStack_1470;
  undefined1 *puStack_1468;
  undefined8 **ppuStack_1460;
  code *pcStack_1458;
  undefined8 uStack_1450;
  long lStack_1448;
  undefined8 *puStack_1440;
  undefined8 uStack_1438;
  undefined8 uStack_1430;
  undefined8 uStack_1428;
  undefined8 uStack_1420;
  undefined8 uStack_1418;
  long lStack_1388;
  undefined8 **ppuStack_1350;
  code *pcStack_1348;
  undefined8 uStack_1340;
  long lStack_1338;
  undefined8 *puStack_1330;
  undefined8 uStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  long lStack_1278;
  undefined8 **ppuStack_1240;
  code *pcStack_1238;
  undefined8 uStack_1230;
  long lStack_1228;
  undefined8 *puStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  long lStack_1168;
  undefined8 **ppuStack_1130;
  code *pcStack_1128;
  undefined8 uStack_1120;
  long lStack_1118;
  undefined8 *puStack_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  long lStack_1058;
  undefined1 *puStack_1050;
  undefined1 *puStack_1048;
  undefined1 *puStack_1040;
  undefined1 *puStack_1038;
  undefined1 *puStack_1030;
  undefined1 *puStack_1028;
  undefined8 **ppuStack_1020;
  code *pcStack_1018;
  undefined8 uStack_1010;
  long lStack_1008;
  undefined8 *puStack_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  long lStack_f48;
  undefined8 **ppuStack_f00;
  code *pcStack_ef8;
  undefined8 uStack_ef0;
  long lStack_ee8;
  undefined8 *puStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  undefined8 uStack_ec0;
  undefined8 uStack_eb8;
  undefined1 auStack_ea8 [128];
  long lStack_e28;
  undefined1 *puStack_e20;
  undefined1 *puStack_e18;
  undefined1 *puStack_e10;
  undefined1 *puStack_e08;
  undefined1 *puStack_e00;
  undefined1 *puStack_df8;
  undefined8 **ppuStack_df0;
  code *pcStack_de8;
  undefined8 uStack_de0;
  long lStack_dd8;
  undefined8 *puStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  long lStack_d18;
  undefined1 *puStack_d10;
  undefined1 *puStack_d08;
  undefined1 *puStack_d00;
  undefined1 *puStack_cf8;
  undefined1 *puStack_cf0;
  undefined1 *puStack_ce8;
  undefined8 **ppuStack_ce0;
  code *pcStack_cd8;
  undefined8 uStack_cd0;
  long lStack_cc8;
  undefined8 *puStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  long lStack_c08;
  undefined8 **ppuStack_bc0;
  code *pcStack_bb8;
  undefined8 uStack_bb0;
  long lStack_ba8;
  long *plStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined1 auStack_b68 [128];
  long lStack_ae8;
  undefined8 **ppuStack_ab0;
  code *pcStack_aa8;
  undefined8 uStack_aa0;
  long lStack_a98;
  long *plStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  long lStack_9d8;
  undefined8 **ppuStack_9a0;
  code *pcStack_998;
  undefined8 uStack_990;
  long lStack_988;
  long *plStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  long lStack_8c8;
  undefined8 **ppuStack_890;
  code *pcStack_888;
  undefined8 uStack_880;
  long lStack_878;
  long *plStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  long lStack_7b8;
  undefined8 **ppuStack_780;
  code *pcStack_778;
  undefined8 uStack_770;
  long lStack_768;
  long *plStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  long lStack_6a8;
  undefined8 **ppuStack_670;
  code *pcStack_668;
  undefined8 uStack_660;
  long lStack_658;
  long *plStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  long lStack_598;
  undefined8 **ppuStack_560;
  code *pcStack_558;
  undefined8 uStack_550;
  long lStack_548;
  long *plStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  long lStack_488;
  undefined8 **ppuStack_450;
  code *pcStack_448;
  undefined8 uStack_440;
  long lStack_438;
  long *plStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_378;
  undefined8 **ppuStack_340;
  code *pcStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_268;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_158;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_100;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_100 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2da0(*(undefined8 *)(lStack_108 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_105ac0ed4;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_210;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_210 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f20(*(undefined8 *)(lStack_218 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_105ac0fc4;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_230 = &puStack_120;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_320;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_320 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f3000(*(undefined8 *)(lStack_328 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_338 = FUN_105ac10b4;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_340 = &ppuStack_230;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_438 = 0;
  uStack_440 = 0;
  uStack_428 = 0;
  plStack_430 = (long *)0x0;
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_430;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_430 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f3300(*(undefined8 *)(lStack_438 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_448 = FUN_105ac11a4;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_450 = &ppuStack_340;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  plStack_540 = (long *)0x0;
  uStack_528 = 0;
  uStack_530 = 0;
  uStack_518 = 0;
  uStack_520 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_540;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_540 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2d80(*(undefined8 *)(lStack_548 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_558 = FUN_105ac1294;
  lStack_598 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_560 = &ppuStack_450;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_658 = 0;
  uStack_660 = 0;
  uStack_648 = 0;
  plStack_650 = (long *)0x0;
  uStack_638 = 0;
  uStack_640 = 0;
  uStack_628 = 0;
  uStack_630 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_650;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_650 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2de0(*(undefined8 *)(lStack_658 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_598) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_668 = FUN_105ac1384;
  lStack_6a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_670 = &ppuStack_560;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_768 = 0;
  uStack_770 = 0;
  uStack_758 = 0;
  plStack_760 = (long *)0x0;
  uStack_748 = 0;
  uStack_750 = 0;
  uStack_738 = 0;
  uStack_740 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_760;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_760 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2dc0(*(undefined8 *)(lStack_768 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6a8) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_778 = FUN_105ac1474;
  lStack_7b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_780 = &ppuStack_670;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_878 = 0;
  uStack_880 = 0;
  uStack_868 = 0;
  plStack_870 = (long *)0x0;
  uStack_858 = 0;
  uStack_860 = 0;
  uStack_848 = 0;
  uStack_850 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_870;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_870 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2e20(*(undefined8 *)(lStack_878 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7b8) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_888 = FUN_105ac1564;
  lStack_8c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_890 = &ppuStack_780;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_988 = 0;
  uStack_990 = 0;
  uStack_978 = 0;
  plStack_980 = (long *)0x0;
  uStack_968 = 0;
  uStack_970 = 0;
  uStack_958 = 0;
  uStack_960 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_980;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_980 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2fa0(*(undefined8 *)(lStack_988 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8c8) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_998 = FUN_105ac1654;
  lStack_9d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_9a0 = &ppuStack_890;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_a98 = 0;
  uStack_aa0 = 0;
  uStack_a88 = 0;
  plStack_a90 = (long *)0x0;
  uStack_a78 = 0;
  uStack_a80 = 0;
  uStack_a68 = 0;
  uStack_a70 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_a90;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_a90 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f60(*(undefined8 *)(lStack_a98 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9d8) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_bb0;
  pcStack_aa8 = FUN_105ac1744;
  lStack_ae8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_ab0 = &ppuStack_9a0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ba8 = 0;
  uStack_bb0 = 0;
  uStack_b98 = 0;
  plStack_ba0 = (long *)0x0;
  uStack_b88 = 0;
  uStack_b90 = 0;
  uStack_b78 = 0;
  uStack_b80 = 0;
  puVar1 = auStack_b68;
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    lVar9 = *plStack_ba0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_ba0 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f00(*(undefined8 *)(lStack_ba8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar1 = auStack_b68;
      puVar2 = param_1;
      puVar6 = &uStack_bb0;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_ae8) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_cd0;
  pcStack_bb8 = FUN_105ac1834;
  lStack_c08 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_bc0 = &ppuStack_ab0;
  _objc_retain(puVar6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_cc8 = 0;
  uStack_cd0 = 0;
  uStack_cb8 = 0;
  puStack_cc0 = (undefined8 *)0x0;
  uStack_ca8 = 0;
  uStack_cb0 = 0;
  uStack_c98 = 0;
  uStack_ca0 = 0;
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*puStack_cc0;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_cc0 != unaff_x23) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2fe0(*(undefined8 *)(lStack_cc8 + (long)unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (puVar2 != unaff_x24);
      puVar2 = param_1;
      puVar7 = &uStack_cd0;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(param_1);
  puVar2 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c08) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_de0;
  pcStack_cd8 = FUN_105ac1954;
  lStack_d18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d10 = unaff_x24;
  puStack_d08 = unaff_x23;
  puStack_d00 = unaff_x22;
  puStack_cf8 = param_1;
  puStack_cf0 = puVar1;
  puStack_ce8 = (undefined1 *)puVar6;
  ppuStack_ce0 = &ppuStack_bc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_dd8 = 0;
  uStack_de0 = 0;
  uStack_dc8 = 0;
  puStack_dd0 = (undefined8 *)0x0;
  uStack_db8 = 0;
  uStack_dc0 = 0;
  uStack_da8 = 0;
  uStack_db0 = 0;
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_dd0;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_dd0 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c0f2f40(*(undefined8 *)(lStack_dd8 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar1 != unaff_x23);
      puVar1 = puVar2;
      puVar10 = &uStack_de0;
      func_0x00010bf52a60();
      param_1 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d18) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_ef0;
  pcStack_de8 = FUN_105ac1a4c;
  lStack_e28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e20 = unaff_x24;
  puStack_e18 = unaff_x23;
  puStack_e10 = unaff_x22;
  puStack_e08 = param_1;
  puStack_e00 = puVar2;
  puStack_df8 = (undefined1 *)puVar7;
  ppuStack_df0 = &ppuStack_ce0;
  _objc_retain(puVar10);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ee8 = 0;
  uStack_ef0 = 0;
  uStack_ed8 = 0;
  puStack_ee0 = (undefined8 *)0x0;
  uStack_ec8 = 0;
  uStack_ed0 = 0;
  uStack_eb8 = 0;
  uStack_ec0 = 0;
  puVar2 = auStack_ea8;
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_ee0;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_ee0 != unaff_x22) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c0f2f80(*(undefined8 *)(lStack_ee8 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar3 != unaff_x23);
      puVar2 = auStack_ea8;
      puVar3 = puVar1;
      puVar6 = &uStack_ef0;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e28) {
    return (undefined1 *)puVar10;
  }
  ___stack_chk_fail();
  pcStack_ef8 = FUN_105ac1b5c;
  lStack_f48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_f00 = &ppuStack_df0;
  _objc_retain(puVar6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1008 = 0;
  uStack_1010 = 0;
  uStack_ff8 = 0;
  puStack_1000 = (undefined8 *)0x0;
  uStack_fe8 = 0;
  uStack_ff0 = 0;
  uStack_fd8 = 0;
  uStack_fe0 = 0;
  puVar1 = (undefined1 *)puVar10;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*puStack_1000;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_1000 != unaff_x23) {
          _objc_enumerationMutation(puVar10);
        }
        func_0x00010c292e40(*(undefined8 *)(lStack_1008 + (long)unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (puVar1 != unaff_x24);
      puVar1 = (undefined1 *)puVar10;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release(puVar10);
  puVar1 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f48) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_1018 = FUN_105ac1c7c;
  lStack_1058 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1050 = unaff_x24;
  puStack_1048 = unaff_x23;
  puStack_1040 = unaff_x22;
  puStack_1038 = (undefined1 *)puVar10;
  puStack_1030 = puVar2;
  puStack_1028 = (undefined1 *)puVar6;
  ppuStack_1020 = &ppuStack_f00;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1118 = 0;
  uStack_1120 = 0;
  uStack_1108 = 0;
  puStack_1110 = (undefined8 *)0x0;
  uStack_10f8 = 0;
  uStack_1100 = 0;
  uStack_10e8 = 0;
  uStack_10f0 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_1110;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_1110 != unaff_x22) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293980(*(undefined8 *)(lStack_1118 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar2 != unaff_x23);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1058) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_1128 = FUN_105ac1d74;
  lStack_1168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1130 = &ppuStack_1020;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1228 = 0;
  uStack_1230 = 0;
  uStack_1218 = 0;
  puStack_1220 = (undefined8 *)0x0;
  uStack_1208 = 0;
  uStack_1210 = 0;
  uStack_11f8 = 0;
  uStack_1200 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1220;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1220 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2934e0(*(undefined8 *)(lStack_1228 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1168) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_1238 = FUN_105ac1e64;
  lStack_1278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1240 = &ppuStack_1130;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1338 = 0;
  uStack_1340 = 0;
  uStack_1328 = 0;
  puStack_1330 = (undefined8 *)0x0;
  uStack_1318 = 0;
  uStack_1320 = 0;
  uStack_1308 = 0;
  uStack_1310 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1330;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1330 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c293020(*(undefined8 *)(lStack_1338 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1278) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_1348 = FUN_105ac1f54;
  lStack_1388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1350 = &ppuStack_1240;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1448 = 0;
  uStack_1450 = 0;
  uStack_1438 = 0;
  puStack_1440 = (undefined8 *)0x0;
  uStack_1428 = 0;
  uStack_1430 = 0;
  uStack_1418 = 0;
  uStack_1420 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1440;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1440 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2916c0(*(undefined8 *)(lStack_1448 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1388) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_1458 = FUN_105ac2044;
  lStack_1498 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1490 = unaff_x24;
  puStack_1488 = unaff_x23;
  puStack_1480 = unaff_x22;
  puStack_1478 = (undefined1 *)puVar10;
  puStack_1470 = puVar1;
  puStack_1468 = puVar2;
  ppuStack_1460 = &ppuStack_1350;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1558 = 0;
  uStack_1560 = 0;
  uStack_1548 = 0;
  puStack_1550 = (undefined8 *)0x0;
  uStack_1538 = 0;
  uStack_1540 = 0;
  uStack_1528 = 0;
  uStack_1530 = 0;
  puVar1 = puVar3;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_1550;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_1550 != unaff_x22) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010c291020(*(undefined8 *)(lStack_1558 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar1 != unaff_x23);
      puVar1 = puVar3;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1498) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_1568 = FUN_105ac213c;
  lStack_15a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1570 = &ppuStack_1460;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1668 = 0;
  uStack_1670 = 0;
  uStack_1658 = 0;
  puStack_1660 = (undefined8 *)0x0;
  uStack_1648 = 0;
  uStack_1650 = 0;
  uStack_1638 = 0;
  uStack_1640 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1660;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1660 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293ea0(*(undefined8 *)(lStack_1668 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_15a8) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_1678 = FUN_105ac222c;
  lStack_16b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1680 = &ppuStack_1570;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1778 = 0;
  uStack_1780 = 0;
  uStack_1768 = 0;
  puStack_1770 = (undefined8 *)0x0;
  uStack_1758 = 0;
  uStack_1760 = 0;
  uStack_1748 = 0;
  uStack_1750 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1770;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1770 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c294200(*(undefined8 *)(lStack_1778 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_16b8) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_1788 = FUN_105ac231c;
  lStack_17c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1790 = &ppuStack_1680;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1888 = 0;
  uStack_1890 = 0;
  uStack_1878 = 0;
  puStack_1880 = (undefined8 *)0x0;
  uStack_1868 = 0;
  uStack_1870 = 0;
  uStack_1858 = 0;
  uStack_1860 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1880;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1880 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293e80(*(undefined8 *)(lStack_1888 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_17c8) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_19a0;
  pcStack_1898 = FUN_105ac240c;
  lStack_18d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_18a0 = &ppuStack_1790;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1998 = 0;
  uStack_19a0 = 0;
  uStack_1988 = 0;
  puStack_1990 = (undefined8 *)0x0;
  uStack_1978 = 0;
  uStack_1980 = 0;
  uStack_1968 = 0;
  uStack_1970 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1990;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1990 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293ee0(*(undefined8 *)(lStack_1998 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      puVar6 = &uStack_19a0;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18d8) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_1ab0;
  pcStack_19a8 = FUN_105ac24fc;
  lStack_19e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_19e0 = unaff_x24;
  puStack_19d8 = unaff_x23;
  puStack_19d0 = unaff_x22;
  puStack_19c8 = (undefined1 *)puVar10;
  puStack_19c0 = puVar3;
  puStack_19b8 = puVar1;
  ppuStack_19b0 = &ppuStack_18a0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1aa8 = 0;
  uStack_1ab0 = 0;
  uStack_1a98 = 0;
  puStack_1aa0 = (undefined8 *)0x0;
  uStack_1a88 = 0;
  uStack_1a90 = 0;
  uStack_1a78 = 0;
  uStack_1a80 = 0;
  puVar1 = auStack_1a68;
  uVar8 = 0x10;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_1aa0;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_1aa0 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2915c0(*(undefined8 *)(lStack_1aa8 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar3 != unaff_x23);
      puVar1 = auStack_1a68;
      uVar8 = 0x10;
      puVar3 = puVar2;
      puVar7 = &uStack_1ab0;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_19e8) {
    return puVar3;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_1b00;
  pcStack_1ab8 = FUN_105ac25f4;
  puStack_1af0 = unaff_x24;
  puStack_1ae8 = unaff_x23;
  puStack_1ae0 = unaff_x22;
  puStack_1ad8 = (undefined1 *)puVar10;
  puStack_1ad0 = puVar2;
  puStack_1ac8 = (undefined1 *)puVar6;
  ppuStack_1ac0 = &ppuStack_19b0;
  _objc_retain(puVar7);
  _objc_retain(puVar1);
  _objc_retain(in_x6);
  puStack_1af8 = PTR_PTR_1126ebc18;
  puStack_1b00 = puVar3;
  _objc_msgSendSuper2(&puStack_1b00,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined1 **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar4 + 8),puVar7);
    _objc_retain(puVar1);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x10);
    *(undefined1 **)((long)ppuVar4 + 0x10) = puVar1;
    _objc_release(uVar5);
    *(undefined8 *)((long)ppuVar4 + 0x18) = in_x5;
    *(undefined8 *)((long)ppuVar4 + 0x20) = uVar8;
    _objc_retain(in_x6);
    uVar8 = *(undefined8 *)((long)ppuVar4 + 0x28);
    *(undefined8 *)((long)ppuVar4 + 0x28) = in_x6;
    _objc_release(uVar8);
  }
  _objc_release(in_x6);
  _objc_release(puVar1);
  _objc_release(puVar7);
  return (undefined1 *)ppuVar4;
}



/* Entry: 105ac0ed4; end: 105ac0fc3; -[SCSpectaclesPairingListenerAnnouncer pairingDidConnectBLE] */

undefined1 * FUN_105ac0ed4(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar9;
  undefined8 *puVar10;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *puStack_19f0;
  undefined *puStack_19e8;
  undefined1 *puStack_19e0;
  undefined1 *puStack_19d8;
  undefined1 *puStack_19d0;
  undefined1 *puStack_19c8;
  undefined1 *puStack_19c0;
  undefined1 *puStack_19b8;
  undefined8 **ppuStack_19b0;
  code *pcStack_19a8;
  undefined8 uStack_19a0;
  long lStack_1998;
  undefined8 *puStack_1990;
  undefined8 uStack_1988;
  undefined8 uStack_1980;
  undefined8 uStack_1978;
  undefined8 uStack_1970;
  undefined8 uStack_1968;
  undefined1 auStack_1958 [128];
  long lStack_18d8;
  undefined1 *puStack_18d0;
  undefined1 *puStack_18c8;
  undefined1 *puStack_18c0;
  undefined1 *puStack_18b8;
  undefined1 *puStack_18b0;
  undefined1 *puStack_18a8;
  undefined8 **ppuStack_18a0;
  code *pcStack_1898;
  undefined8 uStack_1890;
  long lStack_1888;
  undefined8 *puStack_1880;
  undefined8 uStack_1878;
  undefined8 uStack_1870;
  undefined8 uStack_1868;
  undefined8 uStack_1860;
  undefined8 uStack_1858;
  long lStack_17c8;
  undefined8 **ppuStack_1790;
  code *pcStack_1788;
  undefined8 uStack_1780;
  long lStack_1778;
  undefined8 *puStack_1770;
  undefined8 uStack_1768;
  undefined8 uStack_1760;
  undefined8 uStack_1758;
  undefined8 uStack_1750;
  undefined8 uStack_1748;
  long lStack_16b8;
  undefined8 **ppuStack_1680;
  code *pcStack_1678;
  undefined8 uStack_1670;
  long lStack_1668;
  undefined8 *puStack_1660;
  undefined8 uStack_1658;
  undefined8 uStack_1650;
  undefined8 uStack_1648;
  undefined8 uStack_1640;
  undefined8 uStack_1638;
  long lStack_15a8;
  undefined8 **ppuStack_1570;
  code *pcStack_1568;
  undefined8 uStack_1560;
  long lStack_1558;
  undefined8 *puStack_1550;
  undefined8 uStack_1548;
  undefined8 uStack_1540;
  undefined8 uStack_1538;
  undefined8 uStack_1530;
  undefined8 uStack_1528;
  long lStack_1498;
  undefined8 **ppuStack_1460;
  code *pcStack_1458;
  undefined8 uStack_1450;
  long lStack_1448;
  undefined8 *puStack_1440;
  undefined8 uStack_1438;
  undefined8 uStack_1430;
  undefined8 uStack_1428;
  undefined8 uStack_1420;
  undefined8 uStack_1418;
  long lStack_1388;
  undefined1 *puStack_1380;
  undefined1 *puStack_1378;
  undefined1 *puStack_1370;
  undefined1 *puStack_1368;
  undefined1 *puStack_1360;
  undefined1 *puStack_1358;
  undefined8 **ppuStack_1350;
  code *pcStack_1348;
  undefined8 uStack_1340;
  long lStack_1338;
  undefined8 *puStack_1330;
  undefined8 uStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  long lStack_1278;
  undefined8 **ppuStack_1240;
  code *pcStack_1238;
  undefined8 uStack_1230;
  long lStack_1228;
  undefined8 *puStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  long lStack_1168;
  undefined8 **ppuStack_1130;
  code *pcStack_1128;
  undefined8 uStack_1120;
  long lStack_1118;
  undefined8 *puStack_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  long lStack_1058;
  undefined8 **ppuStack_1020;
  code *pcStack_1018;
  undefined8 uStack_1010;
  long lStack_1008;
  undefined8 *puStack_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  long lStack_f48;
  undefined1 *puStack_f40;
  undefined1 *puStack_f38;
  undefined1 *puStack_f30;
  undefined1 *puStack_f28;
  undefined1 *puStack_f20;
  undefined1 *puStack_f18;
  undefined8 **ppuStack_f10;
  code *pcStack_f08;
  undefined8 uStack_f00;
  long lStack_ef8;
  undefined8 *puStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  long lStack_e38;
  undefined8 **ppuStack_df0;
  code *pcStack_de8;
  undefined8 uStack_de0;
  long lStack_dd8;
  undefined8 *puStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined1 auStack_d98 [128];
  long lStack_d18;
  undefined1 *puStack_d10;
  undefined1 *puStack_d08;
  undefined1 *puStack_d00;
  undefined1 *puStack_cf8;
  undefined1 *puStack_cf0;
  undefined1 *puStack_ce8;
  undefined8 **ppuStack_ce0;
  code *pcStack_cd8;
  undefined8 uStack_cd0;
  long lStack_cc8;
  undefined8 *puStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  long lStack_c08;
  undefined1 *puStack_c00;
  undefined1 *puStack_bf8;
  undefined1 *puStack_bf0;
  undefined1 *puStack_be8;
  undefined1 *puStack_be0;
  undefined1 *puStack_bd8;
  undefined8 **ppuStack_bd0;
  code *pcStack_bc8;
  undefined8 uStack_bc0;
  long lStack_bb8;
  undefined8 *puStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  long lStack_af8;
  undefined8 **ppuStack_ab0;
  code *pcStack_aa8;
  undefined8 uStack_aa0;
  long lStack_a98;
  long *plStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined1 auStack_a58 [128];
  long lStack_9d8;
  undefined8 **ppuStack_9a0;
  code *pcStack_998;
  undefined8 uStack_990;
  long lStack_988;
  long *plStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  long lStack_8c8;
  undefined8 **ppuStack_890;
  code *pcStack_888;
  undefined8 uStack_880;
  long lStack_878;
  long *plStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  long lStack_7b8;
  undefined8 **ppuStack_780;
  code *pcStack_778;
  undefined8 uStack_770;
  long lStack_768;
  long *plStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  long lStack_6a8;
  undefined8 **ppuStack_670;
  code *pcStack_668;
  undefined8 uStack_660;
  long lStack_658;
  long *plStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  long lStack_598;
  undefined8 **ppuStack_560;
  code *pcStack_558;
  undefined8 uStack_550;
  long lStack_548;
  long *plStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  long lStack_488;
  undefined8 **ppuStack_450;
  code *pcStack_448;
  undefined8 uStack_440;
  long lStack_438;
  long *plStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_378;
  undefined8 **ppuStack_340;
  code *pcStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_268;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_158;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_100;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_100 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f20(*(undefined8 *)(lStack_108 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_105ac0fc4;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_210;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_210 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f3000(*(undefined8 *)(lStack_218 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_105ac10b4;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_230 = &puStack_120;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_320;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_320 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f3300(*(undefined8 *)(lStack_328 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_338 = FUN_105ac11a4;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_340 = &ppuStack_230;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_438 = 0;
  uStack_440 = 0;
  uStack_428 = 0;
  plStack_430 = (long *)0x0;
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_430;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_430 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2d80(*(undefined8 *)(lStack_438 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_448 = FUN_105ac1294;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_450 = &ppuStack_340;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  plStack_540 = (long *)0x0;
  uStack_528 = 0;
  uStack_530 = 0;
  uStack_518 = 0;
  uStack_520 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_540;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_540 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2de0(*(undefined8 *)(lStack_548 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_558 = FUN_105ac1384;
  lStack_598 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_560 = &ppuStack_450;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_658 = 0;
  uStack_660 = 0;
  uStack_648 = 0;
  plStack_650 = (long *)0x0;
  uStack_638 = 0;
  uStack_640 = 0;
  uStack_628 = 0;
  uStack_630 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_650;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_650 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2dc0(*(undefined8 *)(lStack_658 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_598) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_668 = FUN_105ac1474;
  lStack_6a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_670 = &ppuStack_560;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_768 = 0;
  uStack_770 = 0;
  uStack_758 = 0;
  plStack_760 = (long *)0x0;
  uStack_748 = 0;
  uStack_750 = 0;
  uStack_738 = 0;
  uStack_740 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_760;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_760 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2e20(*(undefined8 *)(lStack_768 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6a8) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_778 = FUN_105ac1564;
  lStack_7b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_780 = &ppuStack_670;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_878 = 0;
  uStack_880 = 0;
  uStack_868 = 0;
  plStack_870 = (long *)0x0;
  uStack_858 = 0;
  uStack_860 = 0;
  uStack_848 = 0;
  uStack_850 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_870;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_870 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2fa0(*(undefined8 *)(lStack_878 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7b8) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_888 = FUN_105ac1654;
  lStack_8c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_890 = &ppuStack_780;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_988 = 0;
  uStack_990 = 0;
  uStack_978 = 0;
  plStack_980 = (long *)0x0;
  uStack_968 = 0;
  uStack_970 = 0;
  uStack_958 = 0;
  uStack_960 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_980;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_980 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f60(*(undefined8 *)(lStack_988 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8c8) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_aa0;
  pcStack_998 = FUN_105ac1744;
  lStack_9d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_9a0 = &ppuStack_890;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_a98 = 0;
  uStack_aa0 = 0;
  uStack_a88 = 0;
  plStack_a90 = (long *)0x0;
  uStack_a78 = 0;
  uStack_a80 = 0;
  uStack_a68 = 0;
  uStack_a70 = 0;
  puVar1 = auStack_a58;
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    lVar9 = *plStack_a90;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_a90 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f00(*(undefined8 *)(lStack_a98 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar1 = auStack_a58;
      puVar2 = param_1;
      puVar6 = &uStack_aa0;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9d8) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_bc0;
  pcStack_aa8 = FUN_105ac1834;
  lStack_af8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_ab0 = &ppuStack_9a0;
  _objc_retain(puVar6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_bb8 = 0;
  uStack_bc0 = 0;
  uStack_ba8 = 0;
  puStack_bb0 = (undefined8 *)0x0;
  uStack_b98 = 0;
  uStack_ba0 = 0;
  uStack_b88 = 0;
  uStack_b90 = 0;
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*puStack_bb0;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_bb0 != unaff_x23) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2fe0(*(undefined8 *)(lStack_bb8 + (long)unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (puVar2 != unaff_x24);
      puVar2 = param_1;
      puVar7 = &uStack_bc0;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(param_1);
  puVar2 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_af8) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_cd0;
  pcStack_bc8 = FUN_105ac1954;
  lStack_c08 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c00 = unaff_x24;
  puStack_bf8 = unaff_x23;
  puStack_bf0 = unaff_x22;
  puStack_be8 = param_1;
  puStack_be0 = puVar1;
  puStack_bd8 = (undefined1 *)puVar6;
  ppuStack_bd0 = &ppuStack_ab0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_cc8 = 0;
  uStack_cd0 = 0;
  uStack_cb8 = 0;
  puStack_cc0 = (undefined8 *)0x0;
  uStack_ca8 = 0;
  uStack_cb0 = 0;
  uStack_c98 = 0;
  uStack_ca0 = 0;
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_cc0;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_cc0 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c0f2f40(*(undefined8 *)(lStack_cc8 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar1 != unaff_x23);
      puVar1 = puVar2;
      puVar10 = &uStack_cd0;
      func_0x00010bf52a60();
      param_1 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c08) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_de0;
  pcStack_cd8 = FUN_105ac1a4c;
  lStack_d18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d10 = unaff_x24;
  puStack_d08 = unaff_x23;
  puStack_d00 = unaff_x22;
  puStack_cf8 = param_1;
  puStack_cf0 = puVar2;
  puStack_ce8 = (undefined1 *)puVar7;
  ppuStack_ce0 = &ppuStack_bd0;
  _objc_retain(puVar10);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_dd8 = 0;
  uStack_de0 = 0;
  uStack_dc8 = 0;
  puStack_dd0 = (undefined8 *)0x0;
  uStack_db8 = 0;
  uStack_dc0 = 0;
  uStack_da8 = 0;
  uStack_db0 = 0;
  puVar2 = auStack_d98;
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_dd0;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_dd0 != unaff_x22) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c0f2f80(*(undefined8 *)(lStack_dd8 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar3 != unaff_x23);
      puVar2 = auStack_d98;
      puVar3 = puVar1;
      puVar6 = &uStack_de0;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d18) {
    return (undefined1 *)puVar10;
  }
  ___stack_chk_fail();
  pcStack_de8 = FUN_105ac1b5c;
  lStack_e38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_df0 = &ppuStack_ce0;
  _objc_retain(puVar6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ef8 = 0;
  uStack_f00 = 0;
  uStack_ee8 = 0;
  puStack_ef0 = (undefined8 *)0x0;
  uStack_ed8 = 0;
  uStack_ee0 = 0;
  uStack_ec8 = 0;
  uStack_ed0 = 0;
  puVar1 = (undefined1 *)puVar10;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*puStack_ef0;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_ef0 != unaff_x23) {
          _objc_enumerationMutation(puVar10);
        }
        func_0x00010c292e40(*(undefined8 *)(lStack_ef8 + (long)unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (puVar1 != unaff_x24);
      puVar1 = (undefined1 *)puVar10;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release(puVar10);
  puVar1 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e38) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_f08 = FUN_105ac1c7c;
  lStack_f48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f40 = unaff_x24;
  puStack_f38 = unaff_x23;
  puStack_f30 = unaff_x22;
  puStack_f28 = (undefined1 *)puVar10;
  puStack_f20 = puVar2;
  puStack_f18 = (undefined1 *)puVar6;
  ppuStack_f10 = &ppuStack_df0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1008 = 0;
  uStack_1010 = 0;
  uStack_ff8 = 0;
  puStack_1000 = (undefined8 *)0x0;
  uStack_fe8 = 0;
  uStack_ff0 = 0;
  uStack_fd8 = 0;
  uStack_fe0 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_1000;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_1000 != unaff_x22) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293980(*(undefined8 *)(lStack_1008 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar2 != unaff_x23);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f48) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_1018 = FUN_105ac1d74;
  lStack_1058 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1020 = &ppuStack_f10;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1118 = 0;
  uStack_1120 = 0;
  uStack_1108 = 0;
  puStack_1110 = (undefined8 *)0x0;
  uStack_10f8 = 0;
  uStack_1100 = 0;
  uStack_10e8 = 0;
  uStack_10f0 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1110;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1110 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2934e0(*(undefined8 *)(lStack_1118 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1058) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_1128 = FUN_105ac1e64;
  lStack_1168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1130 = &ppuStack_1020;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1228 = 0;
  uStack_1230 = 0;
  uStack_1218 = 0;
  puStack_1220 = (undefined8 *)0x0;
  uStack_1208 = 0;
  uStack_1210 = 0;
  uStack_11f8 = 0;
  uStack_1200 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1220;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1220 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c293020(*(undefined8 *)(lStack_1228 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1168) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_1238 = FUN_105ac1f54;
  lStack_1278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1240 = &ppuStack_1130;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1338 = 0;
  uStack_1340 = 0;
  uStack_1328 = 0;
  puStack_1330 = (undefined8 *)0x0;
  uStack_1318 = 0;
  uStack_1320 = 0;
  uStack_1308 = 0;
  uStack_1310 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1330;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1330 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2916c0(*(undefined8 *)(lStack_1338 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1278) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_1348 = FUN_105ac2044;
  lStack_1388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1380 = unaff_x24;
  puStack_1378 = unaff_x23;
  puStack_1370 = unaff_x22;
  puStack_1368 = (undefined1 *)puVar10;
  puStack_1360 = puVar1;
  puStack_1358 = puVar2;
  ppuStack_1350 = &ppuStack_1240;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1448 = 0;
  uStack_1450 = 0;
  uStack_1438 = 0;
  puStack_1440 = (undefined8 *)0x0;
  uStack_1428 = 0;
  uStack_1430 = 0;
  uStack_1418 = 0;
  uStack_1420 = 0;
  puVar1 = puVar3;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_1440;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_1440 != unaff_x22) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010c291020(*(undefined8 *)(lStack_1448 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar1 != unaff_x23);
      puVar1 = puVar3;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1388) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_1458 = FUN_105ac213c;
  lStack_1498 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1460 = &ppuStack_1350;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1558 = 0;
  uStack_1560 = 0;
  uStack_1548 = 0;
  puStack_1550 = (undefined8 *)0x0;
  uStack_1538 = 0;
  uStack_1540 = 0;
  uStack_1528 = 0;
  uStack_1530 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1550;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1550 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293ea0(*(undefined8 *)(lStack_1558 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1498) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_1568 = FUN_105ac222c;
  lStack_15a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1570 = &ppuStack_1460;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1668 = 0;
  uStack_1670 = 0;
  uStack_1658 = 0;
  puStack_1660 = (undefined8 *)0x0;
  uStack_1648 = 0;
  uStack_1650 = 0;
  uStack_1638 = 0;
  uStack_1640 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1660;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1660 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c294200(*(undefined8 *)(lStack_1668 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_15a8) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_1678 = FUN_105ac231c;
  lStack_16b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1680 = &ppuStack_1570;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1778 = 0;
  uStack_1780 = 0;
  uStack_1768 = 0;
  puStack_1770 = (undefined8 *)0x0;
  uStack_1758 = 0;
  uStack_1760 = 0;
  uStack_1748 = 0;
  uStack_1750 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1770;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1770 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293e80(*(undefined8 *)(lStack_1778 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_16b8) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_1890;
  pcStack_1788 = FUN_105ac240c;
  lStack_17c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1790 = &ppuStack_1680;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1888 = 0;
  uStack_1890 = 0;
  uStack_1878 = 0;
  puStack_1880 = (undefined8 *)0x0;
  uStack_1868 = 0;
  uStack_1870 = 0;
  uStack_1858 = 0;
  uStack_1860 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1880;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1880 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293ee0(*(undefined8 *)(lStack_1888 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      puVar6 = &uStack_1890;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_17c8) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_19a0;
  pcStack_1898 = FUN_105ac24fc;
  lStack_18d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_18d0 = unaff_x24;
  puStack_18c8 = unaff_x23;
  puStack_18c0 = unaff_x22;
  puStack_18b8 = (undefined1 *)puVar10;
  puStack_18b0 = puVar3;
  puStack_18a8 = puVar1;
  ppuStack_18a0 = &ppuStack_1790;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1998 = 0;
  uStack_19a0 = 0;
  uStack_1988 = 0;
  puStack_1990 = (undefined8 *)0x0;
  uStack_1978 = 0;
  uStack_1980 = 0;
  uStack_1968 = 0;
  uStack_1970 = 0;
  puVar1 = auStack_1958;
  uVar8 = 0x10;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_1990;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_1990 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2915c0(*(undefined8 *)(lStack_1998 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar3 != unaff_x23);
      puVar1 = auStack_1958;
      uVar8 = 0x10;
      puVar3 = puVar2;
      puVar7 = &uStack_19a0;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18d8) {
    return puVar3;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_19f0;
  pcStack_19a8 = FUN_105ac25f4;
  puStack_19e0 = unaff_x24;
  puStack_19d8 = unaff_x23;
  puStack_19d0 = unaff_x22;
  puStack_19c8 = (undefined1 *)puVar10;
  puStack_19c0 = puVar2;
  puStack_19b8 = (undefined1 *)puVar6;
  ppuStack_19b0 = &ppuStack_18a0;
  _objc_retain(puVar7);
  _objc_retain(puVar1);
  _objc_retain(in_x6);
  puStack_19e8 = PTR_PTR_1126ebc18;
  puStack_19f0 = puVar3;
  _objc_msgSendSuper2(&puStack_19f0,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined1 **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar4 + 8),puVar7);
    _objc_retain(puVar1);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x10);
    *(undefined1 **)((long)ppuVar4 + 0x10) = puVar1;
    _objc_release(uVar5);
    *(undefined8 *)((long)ppuVar4 + 0x18) = in_x5;
    *(undefined8 *)((long)ppuVar4 + 0x20) = uVar8;
    _objc_retain(in_x6);
    uVar8 = *(undefined8 *)((long)ppuVar4 + 0x28);
    *(undefined8 *)((long)ppuVar4 + 0x28) = in_x6;
    _objc_release(uVar8);
  }
  _objc_release(in_x6);
  _objc_release(puVar1);
  _objc_release(puVar7);
  return (undefined1 *)ppuVar4;
}



/* Entry: 105ac0fc4; end: 105ac10b3; -[SCSpectaclesPairingListenerAnnouncer pairingDidSyncBLE] */

undefined1 * FUN_105ac0fc4(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar9;
  undefined8 *puVar10;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *puStack_18e0;
  undefined *puStack_18d8;
  undefined1 *puStack_18d0;
  undefined1 *puStack_18c8;
  undefined1 *puStack_18c0;
  undefined1 *puStack_18b8;
  undefined1 *puStack_18b0;
  undefined1 *puStack_18a8;
  undefined8 **ppuStack_18a0;
  code *pcStack_1898;
  undefined8 uStack_1890;
  long lStack_1888;
  undefined8 *puStack_1880;
  undefined8 uStack_1878;
  undefined8 uStack_1870;
  undefined8 uStack_1868;
  undefined8 uStack_1860;
  undefined8 uStack_1858;
  undefined1 auStack_1848 [128];
  long lStack_17c8;
  undefined1 *puStack_17c0;
  undefined1 *puStack_17b8;
  undefined1 *puStack_17b0;
  undefined1 *puStack_17a8;
  undefined1 *puStack_17a0;
  undefined1 *puStack_1798;
  undefined8 **ppuStack_1790;
  code *pcStack_1788;
  undefined8 uStack_1780;
  long lStack_1778;
  undefined8 *puStack_1770;
  undefined8 uStack_1768;
  undefined8 uStack_1760;
  undefined8 uStack_1758;
  undefined8 uStack_1750;
  undefined8 uStack_1748;
  long lStack_16b8;
  undefined8 **ppuStack_1680;
  code *pcStack_1678;
  undefined8 uStack_1670;
  long lStack_1668;
  undefined8 *puStack_1660;
  undefined8 uStack_1658;
  undefined8 uStack_1650;
  undefined8 uStack_1648;
  undefined8 uStack_1640;
  undefined8 uStack_1638;
  long lStack_15a8;
  undefined8 **ppuStack_1570;
  code *pcStack_1568;
  undefined8 uStack_1560;
  long lStack_1558;
  undefined8 *puStack_1550;
  undefined8 uStack_1548;
  undefined8 uStack_1540;
  undefined8 uStack_1538;
  undefined8 uStack_1530;
  undefined8 uStack_1528;
  long lStack_1498;
  undefined8 **ppuStack_1460;
  code *pcStack_1458;
  undefined8 uStack_1450;
  long lStack_1448;
  undefined8 *puStack_1440;
  undefined8 uStack_1438;
  undefined8 uStack_1430;
  undefined8 uStack_1428;
  undefined8 uStack_1420;
  undefined8 uStack_1418;
  long lStack_1388;
  undefined8 **ppuStack_1350;
  code *pcStack_1348;
  undefined8 uStack_1340;
  long lStack_1338;
  undefined8 *puStack_1330;
  undefined8 uStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  long lStack_1278;
  undefined1 *puStack_1270;
  undefined1 *puStack_1268;
  undefined1 *puStack_1260;
  undefined1 *puStack_1258;
  undefined1 *puStack_1250;
  undefined1 *puStack_1248;
  undefined8 **ppuStack_1240;
  code *pcStack_1238;
  undefined8 uStack_1230;
  long lStack_1228;
  undefined8 *puStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  long lStack_1168;
  undefined8 **ppuStack_1130;
  code *pcStack_1128;
  undefined8 uStack_1120;
  long lStack_1118;
  undefined8 *puStack_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  long lStack_1058;
  undefined8 **ppuStack_1020;
  code *pcStack_1018;
  undefined8 uStack_1010;
  long lStack_1008;
  undefined8 *puStack_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  long lStack_f48;
  undefined8 **ppuStack_f10;
  code *pcStack_f08;
  undefined8 uStack_f00;
  long lStack_ef8;
  undefined8 *puStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  long lStack_e38;
  undefined1 *puStack_e30;
  undefined1 *puStack_e28;
  undefined1 *puStack_e20;
  undefined1 *puStack_e18;
  undefined1 *puStack_e10;
  undefined1 *puStack_e08;
  undefined8 **ppuStack_e00;
  code *pcStack_df8;
  undefined8 uStack_df0;
  long lStack_de8;
  undefined8 *puStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  long lStack_d28;
  undefined8 **ppuStack_ce0;
  code *pcStack_cd8;
  undefined8 uStack_cd0;
  long lStack_cc8;
  undefined8 *puStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined1 auStack_c88 [128];
  long lStack_c08;
  undefined1 *puStack_c00;
  undefined1 *puStack_bf8;
  undefined1 *puStack_bf0;
  undefined1 *puStack_be8;
  undefined1 *puStack_be0;
  undefined1 *puStack_bd8;
  undefined8 **ppuStack_bd0;
  code *pcStack_bc8;
  undefined8 uStack_bc0;
  long lStack_bb8;
  undefined8 *puStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  long lStack_af8;
  undefined1 *puStack_af0;
  undefined1 *puStack_ae8;
  undefined1 *puStack_ae0;
  undefined1 *puStack_ad8;
  undefined1 *puStack_ad0;
  undefined1 *puStack_ac8;
  undefined8 **ppuStack_ac0;
  code *pcStack_ab8;
  undefined8 uStack_ab0;
  long lStack_aa8;
  undefined8 *puStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  long lStack_9e8;
  undefined8 **ppuStack_9a0;
  code *pcStack_998;
  undefined8 uStack_990;
  long lStack_988;
  long *plStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined1 auStack_948 [128];
  long lStack_8c8;
  undefined8 **ppuStack_890;
  code *pcStack_888;
  undefined8 uStack_880;
  long lStack_878;
  long *plStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  long lStack_7b8;
  undefined8 **ppuStack_780;
  code *pcStack_778;
  undefined8 uStack_770;
  long lStack_768;
  long *plStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  long lStack_6a8;
  undefined8 **ppuStack_670;
  code *pcStack_668;
  undefined8 uStack_660;
  long lStack_658;
  long *plStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  long lStack_598;
  undefined8 **ppuStack_560;
  code *pcStack_558;
  undefined8 uStack_550;
  long lStack_548;
  long *plStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  long lStack_488;
  undefined8 **ppuStack_450;
  code *pcStack_448;
  undefined8 uStack_440;
  long lStack_438;
  long *plStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_378;
  undefined8 **ppuStack_340;
  code *pcStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_268;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_158;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_100;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_100 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f3000(*(undefined8 *)(lStack_108 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_105ac10b4;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_210;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_210 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f3300(*(undefined8 *)(lStack_218 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_105ac11a4;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_230 = &puStack_120;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_320;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_320 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2d80(*(undefined8 *)(lStack_328 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_338 = FUN_105ac1294;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_340 = &ppuStack_230;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_438 = 0;
  uStack_440 = 0;
  uStack_428 = 0;
  plStack_430 = (long *)0x0;
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_430;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_430 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2de0(*(undefined8 *)(lStack_438 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_448 = FUN_105ac1384;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_450 = &ppuStack_340;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  plStack_540 = (long *)0x0;
  uStack_528 = 0;
  uStack_530 = 0;
  uStack_518 = 0;
  uStack_520 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_540;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_540 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2dc0(*(undefined8 *)(lStack_548 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_558 = FUN_105ac1474;
  lStack_598 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_560 = &ppuStack_450;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_658 = 0;
  uStack_660 = 0;
  uStack_648 = 0;
  plStack_650 = (long *)0x0;
  uStack_638 = 0;
  uStack_640 = 0;
  uStack_628 = 0;
  uStack_630 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_650;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_650 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2e20(*(undefined8 *)(lStack_658 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_598) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_668 = FUN_105ac1564;
  lStack_6a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_670 = &ppuStack_560;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_768 = 0;
  uStack_770 = 0;
  uStack_758 = 0;
  plStack_760 = (long *)0x0;
  uStack_748 = 0;
  uStack_750 = 0;
  uStack_738 = 0;
  uStack_740 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_760;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_760 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2fa0(*(undefined8 *)(lStack_768 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6a8) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_778 = FUN_105ac1654;
  lStack_7b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_780 = &ppuStack_670;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_878 = 0;
  uStack_880 = 0;
  uStack_868 = 0;
  plStack_870 = (long *)0x0;
  uStack_858 = 0;
  uStack_860 = 0;
  uStack_848 = 0;
  uStack_850 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_870;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_870 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f60(*(undefined8 *)(lStack_878 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7b8) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_990;
  pcStack_888 = FUN_105ac1744;
  lStack_8c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_890 = &ppuStack_780;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_988 = 0;
  uStack_990 = 0;
  uStack_978 = 0;
  plStack_980 = (long *)0x0;
  uStack_968 = 0;
  uStack_970 = 0;
  uStack_958 = 0;
  uStack_960 = 0;
  puVar1 = auStack_948;
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    lVar9 = *plStack_980;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_980 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f00(*(undefined8 *)(lStack_988 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar1 = auStack_948;
      puVar2 = param_1;
      puVar6 = &uStack_990;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8c8) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_ab0;
  pcStack_998 = FUN_105ac1834;
  lStack_9e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_9a0 = &ppuStack_890;
  _objc_retain(puVar6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_aa8 = 0;
  uStack_ab0 = 0;
  uStack_a98 = 0;
  puStack_aa0 = (undefined8 *)0x0;
  uStack_a88 = 0;
  uStack_a90 = 0;
  uStack_a78 = 0;
  uStack_a80 = 0;
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*puStack_aa0;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_aa0 != unaff_x23) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2fe0(*(undefined8 *)(lStack_aa8 + (long)unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (puVar2 != unaff_x24);
      puVar2 = param_1;
      puVar7 = &uStack_ab0;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(param_1);
  puVar2 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9e8) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_bc0;
  pcStack_ab8 = FUN_105ac1954;
  lStack_af8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_af0 = unaff_x24;
  puStack_ae8 = unaff_x23;
  puStack_ae0 = unaff_x22;
  puStack_ad8 = param_1;
  puStack_ad0 = puVar1;
  puStack_ac8 = (undefined1 *)puVar6;
  ppuStack_ac0 = &ppuStack_9a0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_bb8 = 0;
  uStack_bc0 = 0;
  uStack_ba8 = 0;
  puStack_bb0 = (undefined8 *)0x0;
  uStack_b98 = 0;
  uStack_ba0 = 0;
  uStack_b88 = 0;
  uStack_b90 = 0;
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_bb0;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_bb0 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c0f2f40(*(undefined8 *)(lStack_bb8 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar1 != unaff_x23);
      puVar1 = puVar2;
      puVar10 = &uStack_bc0;
      func_0x00010bf52a60();
      param_1 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_af8) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_cd0;
  pcStack_bc8 = FUN_105ac1a4c;
  lStack_c08 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c00 = unaff_x24;
  puStack_bf8 = unaff_x23;
  puStack_bf0 = unaff_x22;
  puStack_be8 = param_1;
  puStack_be0 = puVar2;
  puStack_bd8 = (undefined1 *)puVar7;
  ppuStack_bd0 = &ppuStack_ac0;
  _objc_retain(puVar10);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_cc8 = 0;
  uStack_cd0 = 0;
  uStack_cb8 = 0;
  puStack_cc0 = (undefined8 *)0x0;
  uStack_ca8 = 0;
  uStack_cb0 = 0;
  uStack_c98 = 0;
  uStack_ca0 = 0;
  puVar2 = auStack_c88;
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_cc0;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_cc0 != unaff_x22) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c0f2f80(*(undefined8 *)(lStack_cc8 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar3 != unaff_x23);
      puVar2 = auStack_c88;
      puVar3 = puVar1;
      puVar6 = &uStack_cd0;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c08) {
    return (undefined1 *)puVar10;
  }
  ___stack_chk_fail();
  pcStack_cd8 = FUN_105ac1b5c;
  lStack_d28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_ce0 = &ppuStack_bd0;
  _objc_retain(puVar6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_de8 = 0;
  uStack_df0 = 0;
  uStack_dd8 = 0;
  puStack_de0 = (undefined8 *)0x0;
  uStack_dc8 = 0;
  uStack_dd0 = 0;
  uStack_db8 = 0;
  uStack_dc0 = 0;
  puVar1 = (undefined1 *)puVar10;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*puStack_de0;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_de0 != unaff_x23) {
          _objc_enumerationMutation(puVar10);
        }
        func_0x00010c292e40(*(undefined8 *)(lStack_de8 + (long)unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (puVar1 != unaff_x24);
      puVar1 = (undefined1 *)puVar10;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release(puVar10);
  puVar1 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d28) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_df8 = FUN_105ac1c7c;
  lStack_e38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e30 = unaff_x24;
  puStack_e28 = unaff_x23;
  puStack_e20 = unaff_x22;
  puStack_e18 = (undefined1 *)puVar10;
  puStack_e10 = puVar2;
  puStack_e08 = (undefined1 *)puVar6;
  ppuStack_e00 = &ppuStack_ce0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ef8 = 0;
  uStack_f00 = 0;
  uStack_ee8 = 0;
  puStack_ef0 = (undefined8 *)0x0;
  uStack_ed8 = 0;
  uStack_ee0 = 0;
  uStack_ec8 = 0;
  uStack_ed0 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_ef0;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_ef0 != unaff_x22) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293980(*(undefined8 *)(lStack_ef8 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar2 != unaff_x23);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e38) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_f08 = FUN_105ac1d74;
  lStack_f48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_f10 = &ppuStack_e00;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1008 = 0;
  uStack_1010 = 0;
  uStack_ff8 = 0;
  puStack_1000 = (undefined8 *)0x0;
  uStack_fe8 = 0;
  uStack_ff0 = 0;
  uStack_fd8 = 0;
  uStack_fe0 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1000;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1000 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2934e0(*(undefined8 *)(lStack_1008 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f48) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_1018 = FUN_105ac1e64;
  lStack_1058 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1020 = &ppuStack_f10;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1118 = 0;
  uStack_1120 = 0;
  uStack_1108 = 0;
  puStack_1110 = (undefined8 *)0x0;
  uStack_10f8 = 0;
  uStack_1100 = 0;
  uStack_10e8 = 0;
  uStack_10f0 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1110;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1110 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c293020(*(undefined8 *)(lStack_1118 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1058) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_1128 = FUN_105ac1f54;
  lStack_1168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1130 = &ppuStack_1020;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1228 = 0;
  uStack_1230 = 0;
  uStack_1218 = 0;
  puStack_1220 = (undefined8 *)0x0;
  uStack_1208 = 0;
  uStack_1210 = 0;
  uStack_11f8 = 0;
  uStack_1200 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1220;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1220 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2916c0(*(undefined8 *)(lStack_1228 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1168) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_1238 = FUN_105ac2044;
  lStack_1278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1270 = unaff_x24;
  puStack_1268 = unaff_x23;
  puStack_1260 = unaff_x22;
  puStack_1258 = (undefined1 *)puVar10;
  puStack_1250 = puVar1;
  puStack_1248 = puVar2;
  ppuStack_1240 = &ppuStack_1130;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1338 = 0;
  uStack_1340 = 0;
  uStack_1328 = 0;
  puStack_1330 = (undefined8 *)0x0;
  uStack_1318 = 0;
  uStack_1320 = 0;
  uStack_1308 = 0;
  uStack_1310 = 0;
  puVar1 = puVar3;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_1330;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_1330 != unaff_x22) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010c291020(*(undefined8 *)(lStack_1338 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar1 != unaff_x23);
      puVar1 = puVar3;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1278) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_1348 = FUN_105ac213c;
  lStack_1388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1350 = &ppuStack_1240;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1448 = 0;
  uStack_1450 = 0;
  uStack_1438 = 0;
  puStack_1440 = (undefined8 *)0x0;
  uStack_1428 = 0;
  uStack_1430 = 0;
  uStack_1418 = 0;
  uStack_1420 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1440;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1440 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293ea0(*(undefined8 *)(lStack_1448 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1388) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_1458 = FUN_105ac222c;
  lStack_1498 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1460 = &ppuStack_1350;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1558 = 0;
  uStack_1560 = 0;
  uStack_1548 = 0;
  puStack_1550 = (undefined8 *)0x0;
  uStack_1538 = 0;
  uStack_1540 = 0;
  uStack_1528 = 0;
  uStack_1530 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1550;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1550 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c294200(*(undefined8 *)(lStack_1558 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1498) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_1568 = FUN_105ac231c;
  lStack_15a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1570 = &ppuStack_1460;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1668 = 0;
  uStack_1670 = 0;
  uStack_1658 = 0;
  puStack_1660 = (undefined8 *)0x0;
  uStack_1648 = 0;
  uStack_1650 = 0;
  uStack_1638 = 0;
  uStack_1640 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1660;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1660 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293e80(*(undefined8 *)(lStack_1668 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_15a8) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_1780;
  pcStack_1678 = FUN_105ac240c;
  lStack_16b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1680 = &ppuStack_1570;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1778 = 0;
  uStack_1780 = 0;
  uStack_1768 = 0;
  puStack_1770 = (undefined8 *)0x0;
  uStack_1758 = 0;
  uStack_1760 = 0;
  uStack_1748 = 0;
  uStack_1750 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1770;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1770 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293ee0(*(undefined8 *)(lStack_1778 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      puVar6 = &uStack_1780;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_16b8) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_1890;
  pcStack_1788 = FUN_105ac24fc;
  lStack_17c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_17c0 = unaff_x24;
  puStack_17b8 = unaff_x23;
  puStack_17b0 = unaff_x22;
  puStack_17a8 = (undefined1 *)puVar10;
  puStack_17a0 = puVar3;
  puStack_1798 = puVar1;
  ppuStack_1790 = &ppuStack_1680;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1888 = 0;
  uStack_1890 = 0;
  uStack_1878 = 0;
  puStack_1880 = (undefined8 *)0x0;
  uStack_1868 = 0;
  uStack_1870 = 0;
  uStack_1858 = 0;
  uStack_1860 = 0;
  puVar1 = auStack_1848;
  uVar8 = 0x10;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_1880;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_1880 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2915c0(*(undefined8 *)(lStack_1888 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar3 != unaff_x23);
      puVar1 = auStack_1848;
      uVar8 = 0x10;
      puVar3 = puVar2;
      puVar7 = &uStack_1890;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_17c8) {
    return puVar3;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_18e0;
  pcStack_1898 = FUN_105ac25f4;
  puStack_18d0 = unaff_x24;
  puStack_18c8 = unaff_x23;
  puStack_18c0 = unaff_x22;
  puStack_18b8 = (undefined1 *)puVar10;
  puStack_18b0 = puVar2;
  puStack_18a8 = (undefined1 *)puVar6;
  ppuStack_18a0 = &ppuStack_1790;
  _objc_retain(puVar7);
  _objc_retain(puVar1);
  _objc_retain(in_x6);
  puStack_18d8 = PTR_PTR_1126ebc18;
  puStack_18e0 = puVar3;
  _objc_msgSendSuper2(&puStack_18e0,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined1 **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar4 + 8),puVar7);
    _objc_retain(puVar1);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x10);
    *(undefined1 **)((long)ppuVar4 + 0x10) = puVar1;
    _objc_release(uVar5);
    *(undefined8 *)((long)ppuVar4 + 0x18) = in_x5;
    *(undefined8 *)((long)ppuVar4 + 0x20) = uVar8;
    _objc_retain(in_x6);
    uVar8 = *(undefined8 *)((long)ppuVar4 + 0x28);
    *(undefined8 *)((long)ppuVar4 + 0x28) = in_x6;
    _objc_release(uVar8);
  }
  _objc_release(in_x6);
  _objc_release(puVar1);
  _objc_release(puVar7);
  return (undefined1 *)ppuVar4;
}



/* Entry: 105ac10b4; end: 105ac11a3; -[SCSpectaclesPairingListenerAnnouncer pairingRequestsUnpair] */

undefined1 * FUN_105ac10b4(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar9;
  undefined8 *puVar10;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *puStack_17d0;
  undefined *puStack_17c8;
  undefined1 *puStack_17c0;
  undefined1 *puStack_17b8;
  undefined1 *puStack_17b0;
  undefined1 *puStack_17a8;
  undefined1 *puStack_17a0;
  undefined1 *puStack_1798;
  undefined8 **ppuStack_1790;
  code *pcStack_1788;
  undefined8 uStack_1780;
  long lStack_1778;
  undefined8 *puStack_1770;
  undefined8 uStack_1768;
  undefined8 uStack_1760;
  undefined8 uStack_1758;
  undefined8 uStack_1750;
  undefined8 uStack_1748;
  undefined1 auStack_1738 [128];
  long lStack_16b8;
  undefined1 *puStack_16b0;
  undefined1 *puStack_16a8;
  undefined1 *puStack_16a0;
  undefined1 *puStack_1698;
  undefined1 *puStack_1690;
  undefined1 *puStack_1688;
  undefined8 **ppuStack_1680;
  code *pcStack_1678;
  undefined8 uStack_1670;
  long lStack_1668;
  undefined8 *puStack_1660;
  undefined8 uStack_1658;
  undefined8 uStack_1650;
  undefined8 uStack_1648;
  undefined8 uStack_1640;
  undefined8 uStack_1638;
  long lStack_15a8;
  undefined8 **ppuStack_1570;
  code *pcStack_1568;
  undefined8 uStack_1560;
  long lStack_1558;
  undefined8 *puStack_1550;
  undefined8 uStack_1548;
  undefined8 uStack_1540;
  undefined8 uStack_1538;
  undefined8 uStack_1530;
  undefined8 uStack_1528;
  long lStack_1498;
  undefined8 **ppuStack_1460;
  code *pcStack_1458;
  undefined8 uStack_1450;
  long lStack_1448;
  undefined8 *puStack_1440;
  undefined8 uStack_1438;
  undefined8 uStack_1430;
  undefined8 uStack_1428;
  undefined8 uStack_1420;
  undefined8 uStack_1418;
  long lStack_1388;
  undefined8 **ppuStack_1350;
  code *pcStack_1348;
  undefined8 uStack_1340;
  long lStack_1338;
  undefined8 *puStack_1330;
  undefined8 uStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  long lStack_1278;
  undefined8 **ppuStack_1240;
  code *pcStack_1238;
  undefined8 uStack_1230;
  long lStack_1228;
  undefined8 *puStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  long lStack_1168;
  undefined1 *puStack_1160;
  undefined1 *puStack_1158;
  undefined1 *puStack_1150;
  undefined1 *puStack_1148;
  undefined1 *puStack_1140;
  undefined1 *puStack_1138;
  undefined8 **ppuStack_1130;
  code *pcStack_1128;
  undefined8 uStack_1120;
  long lStack_1118;
  undefined8 *puStack_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  long lStack_1058;
  undefined8 **ppuStack_1020;
  code *pcStack_1018;
  undefined8 uStack_1010;
  long lStack_1008;
  undefined8 *puStack_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  long lStack_f48;
  undefined8 **ppuStack_f10;
  code *pcStack_f08;
  undefined8 uStack_f00;
  long lStack_ef8;
  undefined8 *puStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  long lStack_e38;
  undefined8 **ppuStack_e00;
  code *pcStack_df8;
  undefined8 uStack_df0;
  long lStack_de8;
  undefined8 *puStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  long lStack_d28;
  undefined1 *puStack_d20;
  undefined1 *puStack_d18;
  undefined1 *puStack_d10;
  undefined1 *puStack_d08;
  undefined1 *puStack_d00;
  undefined1 *puStack_cf8;
  undefined8 **ppuStack_cf0;
  code *pcStack_ce8;
  undefined8 uStack_ce0;
  long lStack_cd8;
  undefined8 *puStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  long lStack_c18;
  undefined8 **ppuStack_bd0;
  code *pcStack_bc8;
  undefined8 uStack_bc0;
  long lStack_bb8;
  undefined8 *puStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined1 auStack_b78 [128];
  long lStack_af8;
  undefined1 *puStack_af0;
  undefined1 *puStack_ae8;
  undefined1 *puStack_ae0;
  undefined1 *puStack_ad8;
  undefined1 *puStack_ad0;
  undefined1 *puStack_ac8;
  undefined8 **ppuStack_ac0;
  code *pcStack_ab8;
  undefined8 uStack_ab0;
  long lStack_aa8;
  undefined8 *puStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  long lStack_9e8;
  undefined1 *puStack_9e0;
  undefined1 *puStack_9d8;
  undefined1 *puStack_9d0;
  undefined1 *puStack_9c8;
  undefined1 *puStack_9c0;
  undefined1 *puStack_9b8;
  undefined8 **ppuStack_9b0;
  code *pcStack_9a8;
  undefined8 uStack_9a0;
  long lStack_998;
  undefined8 *puStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  long lStack_8d8;
  undefined8 **ppuStack_890;
  code *pcStack_888;
  undefined8 uStack_880;
  long lStack_878;
  long *plStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined1 auStack_838 [128];
  long lStack_7b8;
  undefined8 **ppuStack_780;
  code *pcStack_778;
  undefined8 uStack_770;
  long lStack_768;
  long *plStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  long lStack_6a8;
  undefined8 **ppuStack_670;
  code *pcStack_668;
  undefined8 uStack_660;
  long lStack_658;
  long *plStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  long lStack_598;
  undefined8 **ppuStack_560;
  code *pcStack_558;
  undefined8 uStack_550;
  long lStack_548;
  long *plStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  long lStack_488;
  undefined8 **ppuStack_450;
  code *pcStack_448;
  undefined8 uStack_440;
  long lStack_438;
  long *plStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_378;
  undefined8 **ppuStack_340;
  code *pcStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_268;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_158;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_100;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_100 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f3300(*(undefined8 *)(lStack_108 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_105ac11a4;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_210;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_210 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2d80(*(undefined8 *)(lStack_218 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_105ac1294;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_230 = &puStack_120;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_320;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_320 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2de0(*(undefined8 *)(lStack_328 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_338 = FUN_105ac1384;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_340 = &ppuStack_230;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_438 = 0;
  uStack_440 = 0;
  uStack_428 = 0;
  plStack_430 = (long *)0x0;
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_430;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_430 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2dc0(*(undefined8 *)(lStack_438 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_448 = FUN_105ac1474;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_450 = &ppuStack_340;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  plStack_540 = (long *)0x0;
  uStack_528 = 0;
  uStack_530 = 0;
  uStack_518 = 0;
  uStack_520 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_540;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_540 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2e20(*(undefined8 *)(lStack_548 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_558 = FUN_105ac1564;
  lStack_598 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_560 = &ppuStack_450;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_658 = 0;
  uStack_660 = 0;
  uStack_648 = 0;
  plStack_650 = (long *)0x0;
  uStack_638 = 0;
  uStack_640 = 0;
  uStack_628 = 0;
  uStack_630 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_650;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_650 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2fa0(*(undefined8 *)(lStack_658 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_598) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_668 = FUN_105ac1654;
  lStack_6a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_670 = &ppuStack_560;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_768 = 0;
  uStack_770 = 0;
  uStack_758 = 0;
  plStack_760 = (long *)0x0;
  uStack_748 = 0;
  uStack_750 = 0;
  uStack_738 = 0;
  uStack_740 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_760;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_760 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f60(*(undefined8 *)(lStack_768 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6a8) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_880;
  pcStack_778 = FUN_105ac1744;
  lStack_7b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_780 = &ppuStack_670;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_878 = 0;
  uStack_880 = 0;
  uStack_868 = 0;
  plStack_870 = (long *)0x0;
  uStack_858 = 0;
  uStack_860 = 0;
  uStack_848 = 0;
  uStack_850 = 0;
  puVar1 = auStack_838;
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    lVar9 = *plStack_870;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_870 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f00(*(undefined8 *)(lStack_878 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar1 = auStack_838;
      puVar2 = param_1;
      puVar6 = &uStack_880;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7b8) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_9a0;
  pcStack_888 = FUN_105ac1834;
  lStack_8d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_890 = &ppuStack_780;
  _objc_retain(puVar6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_998 = 0;
  uStack_9a0 = 0;
  uStack_988 = 0;
  puStack_990 = (undefined8 *)0x0;
  uStack_978 = 0;
  uStack_980 = 0;
  uStack_968 = 0;
  uStack_970 = 0;
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*puStack_990;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_990 != unaff_x23) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2fe0(*(undefined8 *)(lStack_998 + (long)unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (puVar2 != unaff_x24);
      puVar2 = param_1;
      puVar7 = &uStack_9a0;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(param_1);
  puVar2 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8d8) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_ab0;
  pcStack_9a8 = FUN_105ac1954;
  lStack_9e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_9e0 = unaff_x24;
  puStack_9d8 = unaff_x23;
  puStack_9d0 = unaff_x22;
  puStack_9c8 = param_1;
  puStack_9c0 = puVar1;
  puStack_9b8 = (undefined1 *)puVar6;
  ppuStack_9b0 = &ppuStack_890;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_aa8 = 0;
  uStack_ab0 = 0;
  uStack_a98 = 0;
  puStack_aa0 = (undefined8 *)0x0;
  uStack_a88 = 0;
  uStack_a90 = 0;
  uStack_a78 = 0;
  uStack_a80 = 0;
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_aa0;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_aa0 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c0f2f40(*(undefined8 *)(lStack_aa8 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar1 != unaff_x23);
      puVar1 = puVar2;
      puVar10 = &uStack_ab0;
      func_0x00010bf52a60();
      param_1 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9e8) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_bc0;
  pcStack_ab8 = FUN_105ac1a4c;
  lStack_af8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_af0 = unaff_x24;
  puStack_ae8 = unaff_x23;
  puStack_ae0 = unaff_x22;
  puStack_ad8 = param_1;
  puStack_ad0 = puVar2;
  puStack_ac8 = (undefined1 *)puVar7;
  ppuStack_ac0 = &ppuStack_9b0;
  _objc_retain(puVar10);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_bb8 = 0;
  uStack_bc0 = 0;
  uStack_ba8 = 0;
  puStack_bb0 = (undefined8 *)0x0;
  uStack_b98 = 0;
  uStack_ba0 = 0;
  uStack_b88 = 0;
  uStack_b90 = 0;
  puVar2 = auStack_b78;
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_bb0;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_bb0 != unaff_x22) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c0f2f80(*(undefined8 *)(lStack_bb8 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar3 != unaff_x23);
      puVar2 = auStack_b78;
      puVar3 = puVar1;
      puVar6 = &uStack_bc0;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_af8) {
    return (undefined1 *)puVar10;
  }
  ___stack_chk_fail();
  pcStack_bc8 = FUN_105ac1b5c;
  lStack_c18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_bd0 = &ppuStack_ac0;
  _objc_retain(puVar6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_cd8 = 0;
  uStack_ce0 = 0;
  uStack_cc8 = 0;
  puStack_cd0 = (undefined8 *)0x0;
  uStack_cb8 = 0;
  uStack_cc0 = 0;
  uStack_ca8 = 0;
  uStack_cb0 = 0;
  puVar1 = (undefined1 *)puVar10;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*puStack_cd0;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_cd0 != unaff_x23) {
          _objc_enumerationMutation(puVar10);
        }
        func_0x00010c292e40(*(undefined8 *)(lStack_cd8 + (long)unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (puVar1 != unaff_x24);
      puVar1 = (undefined1 *)puVar10;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release(puVar10);
  puVar1 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c18) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_ce8 = FUN_105ac1c7c;
  lStack_d28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d20 = unaff_x24;
  puStack_d18 = unaff_x23;
  puStack_d10 = unaff_x22;
  puStack_d08 = (undefined1 *)puVar10;
  puStack_d00 = puVar2;
  puStack_cf8 = (undefined1 *)puVar6;
  ppuStack_cf0 = &ppuStack_bd0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_de8 = 0;
  uStack_df0 = 0;
  uStack_dd8 = 0;
  puStack_de0 = (undefined8 *)0x0;
  uStack_dc8 = 0;
  uStack_dd0 = 0;
  uStack_db8 = 0;
  uStack_dc0 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_de0;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_de0 != unaff_x22) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293980(*(undefined8 *)(lStack_de8 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar2 != unaff_x23);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d28) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_df8 = FUN_105ac1d74;
  lStack_e38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_e00 = &ppuStack_cf0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ef8 = 0;
  uStack_f00 = 0;
  uStack_ee8 = 0;
  puStack_ef0 = (undefined8 *)0x0;
  uStack_ed8 = 0;
  uStack_ee0 = 0;
  uStack_ec8 = 0;
  uStack_ed0 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_ef0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_ef0 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2934e0(*(undefined8 *)(lStack_ef8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e38) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_f08 = FUN_105ac1e64;
  lStack_f48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_f10 = &ppuStack_e00;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1008 = 0;
  uStack_1010 = 0;
  uStack_ff8 = 0;
  puStack_1000 = (undefined8 *)0x0;
  uStack_fe8 = 0;
  uStack_ff0 = 0;
  uStack_fd8 = 0;
  uStack_fe0 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1000;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1000 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c293020(*(undefined8 *)(lStack_1008 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f48) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_1018 = FUN_105ac1f54;
  lStack_1058 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1020 = &ppuStack_f10;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1118 = 0;
  uStack_1120 = 0;
  uStack_1108 = 0;
  puStack_1110 = (undefined8 *)0x0;
  uStack_10f8 = 0;
  uStack_1100 = 0;
  uStack_10e8 = 0;
  uStack_10f0 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1110;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1110 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2916c0(*(undefined8 *)(lStack_1118 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1058) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_1128 = FUN_105ac2044;
  lStack_1168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1160 = unaff_x24;
  puStack_1158 = unaff_x23;
  puStack_1150 = unaff_x22;
  puStack_1148 = (undefined1 *)puVar10;
  puStack_1140 = puVar1;
  puStack_1138 = puVar2;
  ppuStack_1130 = &ppuStack_1020;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1228 = 0;
  uStack_1230 = 0;
  uStack_1218 = 0;
  puStack_1220 = (undefined8 *)0x0;
  uStack_1208 = 0;
  uStack_1210 = 0;
  uStack_11f8 = 0;
  uStack_1200 = 0;
  puVar1 = puVar3;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_1220;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_1220 != unaff_x22) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010c291020(*(undefined8 *)(lStack_1228 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar1 != unaff_x23);
      puVar1 = puVar3;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1168) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_1238 = FUN_105ac213c;
  lStack_1278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1240 = &ppuStack_1130;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1338 = 0;
  uStack_1340 = 0;
  uStack_1328 = 0;
  puStack_1330 = (undefined8 *)0x0;
  uStack_1318 = 0;
  uStack_1320 = 0;
  uStack_1308 = 0;
  uStack_1310 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1330;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1330 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293ea0(*(undefined8 *)(lStack_1338 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1278) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_1348 = FUN_105ac222c;
  lStack_1388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1350 = &ppuStack_1240;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1448 = 0;
  uStack_1450 = 0;
  uStack_1438 = 0;
  puStack_1440 = (undefined8 *)0x0;
  uStack_1428 = 0;
  uStack_1430 = 0;
  uStack_1418 = 0;
  uStack_1420 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1440;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1440 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c294200(*(undefined8 *)(lStack_1448 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1388) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_1458 = FUN_105ac231c;
  lStack_1498 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1460 = &ppuStack_1350;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1558 = 0;
  uStack_1560 = 0;
  uStack_1548 = 0;
  puStack_1550 = (undefined8 *)0x0;
  uStack_1538 = 0;
  uStack_1540 = 0;
  uStack_1528 = 0;
  uStack_1530 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1550;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1550 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293e80(*(undefined8 *)(lStack_1558 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1498) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_1670;
  pcStack_1568 = FUN_105ac240c;
  lStack_15a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1570 = &ppuStack_1460;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1668 = 0;
  uStack_1670 = 0;
  uStack_1658 = 0;
  puStack_1660 = (undefined8 *)0x0;
  uStack_1648 = 0;
  uStack_1650 = 0;
  uStack_1638 = 0;
  uStack_1640 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1660;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1660 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293ee0(*(undefined8 *)(lStack_1668 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      puVar6 = &uStack_1670;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_15a8) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_1780;
  pcStack_1678 = FUN_105ac24fc;
  lStack_16b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_16b0 = unaff_x24;
  puStack_16a8 = unaff_x23;
  puStack_16a0 = unaff_x22;
  puStack_1698 = (undefined1 *)puVar10;
  puStack_1690 = puVar3;
  puStack_1688 = puVar1;
  ppuStack_1680 = &ppuStack_1570;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1778 = 0;
  uStack_1780 = 0;
  uStack_1768 = 0;
  puStack_1770 = (undefined8 *)0x0;
  uStack_1758 = 0;
  uStack_1760 = 0;
  uStack_1748 = 0;
  uStack_1750 = 0;
  puVar1 = auStack_1738;
  uVar8 = 0x10;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_1770;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_1770 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2915c0(*(undefined8 *)(lStack_1778 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar3 != unaff_x23);
      puVar1 = auStack_1738;
      uVar8 = 0x10;
      puVar3 = puVar2;
      puVar7 = &uStack_1780;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_16b8) {
    return puVar3;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_17d0;
  pcStack_1788 = FUN_105ac25f4;
  puStack_17c0 = unaff_x24;
  puStack_17b8 = unaff_x23;
  puStack_17b0 = unaff_x22;
  puStack_17a8 = (undefined1 *)puVar10;
  puStack_17a0 = puVar2;
  puStack_1798 = (undefined1 *)puVar6;
  ppuStack_1790 = &ppuStack_1680;
  _objc_retain(puVar7);
  _objc_retain(puVar1);
  _objc_retain(in_x6);
  puStack_17c8 = PTR_PTR_1126ebc18;
  puStack_17d0 = puVar3;
  _objc_msgSendSuper2(&puStack_17d0,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined1 **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar4 + 8),puVar7);
    _objc_retain(puVar1);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x10);
    *(undefined1 **)((long)ppuVar4 + 0x10) = puVar1;
    _objc_release(uVar5);
    *(undefined8 *)((long)ppuVar4 + 0x18) = in_x5;
    *(undefined8 *)((long)ppuVar4 + 0x20) = uVar8;
    _objc_retain(in_x6);
    uVar8 = *(undefined8 *)((long)ppuVar4 + 0x28);
    *(undefined8 *)((long)ppuVar4 + 0x28) = in_x6;
    _objc_release(uVar8);
  }
  _objc_release(in_x6);
  _objc_release(puVar1);
  _objc_release(puVar7);
  return (undefined1 *)ppuVar4;
}



/* Entry: 105ac11a4; end: 105ac1293; -[SCSpectaclesPairingListenerAnnouncer pairingBeganChoosingName] */

undefined1 * FUN_105ac11a4(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar9;
  undefined8 *puVar10;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *puStack_16c0;
  undefined *puStack_16b8;
  undefined1 *puStack_16b0;
  undefined1 *puStack_16a8;
  undefined1 *puStack_16a0;
  undefined1 *puStack_1698;
  undefined1 *puStack_1690;
  undefined1 *puStack_1688;
  undefined8 **ppuStack_1680;
  code *pcStack_1678;
  undefined8 uStack_1670;
  long lStack_1668;
  undefined8 *puStack_1660;
  undefined8 uStack_1658;
  undefined8 uStack_1650;
  undefined8 uStack_1648;
  undefined8 uStack_1640;
  undefined8 uStack_1638;
  undefined1 auStack_1628 [128];
  long lStack_15a8;
  undefined1 *puStack_15a0;
  undefined1 *puStack_1598;
  undefined1 *puStack_1590;
  undefined1 *puStack_1588;
  undefined1 *puStack_1580;
  undefined1 *puStack_1578;
  undefined8 **ppuStack_1570;
  code *pcStack_1568;
  undefined8 uStack_1560;
  long lStack_1558;
  undefined8 *puStack_1550;
  undefined8 uStack_1548;
  undefined8 uStack_1540;
  undefined8 uStack_1538;
  undefined8 uStack_1530;
  undefined8 uStack_1528;
  long lStack_1498;
  undefined8 **ppuStack_1460;
  code *pcStack_1458;
  undefined8 uStack_1450;
  long lStack_1448;
  undefined8 *puStack_1440;
  undefined8 uStack_1438;
  undefined8 uStack_1430;
  undefined8 uStack_1428;
  undefined8 uStack_1420;
  undefined8 uStack_1418;
  long lStack_1388;
  undefined8 **ppuStack_1350;
  code *pcStack_1348;
  undefined8 uStack_1340;
  long lStack_1338;
  undefined8 *puStack_1330;
  undefined8 uStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  long lStack_1278;
  undefined8 **ppuStack_1240;
  code *pcStack_1238;
  undefined8 uStack_1230;
  long lStack_1228;
  undefined8 *puStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  long lStack_1168;
  undefined8 **ppuStack_1130;
  code *pcStack_1128;
  undefined8 uStack_1120;
  long lStack_1118;
  undefined8 *puStack_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  long lStack_1058;
  undefined1 *puStack_1050;
  undefined1 *puStack_1048;
  undefined1 *puStack_1040;
  undefined1 *puStack_1038;
  undefined1 *puStack_1030;
  undefined1 *puStack_1028;
  undefined8 **ppuStack_1020;
  code *pcStack_1018;
  undefined8 uStack_1010;
  long lStack_1008;
  undefined8 *puStack_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  long lStack_f48;
  undefined8 **ppuStack_f10;
  code *pcStack_f08;
  undefined8 uStack_f00;
  long lStack_ef8;
  undefined8 *puStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  long lStack_e38;
  undefined8 **ppuStack_e00;
  code *pcStack_df8;
  undefined8 uStack_df0;
  long lStack_de8;
  undefined8 *puStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  long lStack_d28;
  undefined8 **ppuStack_cf0;
  code *pcStack_ce8;
  undefined8 uStack_ce0;
  long lStack_cd8;
  undefined8 *puStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  long lStack_c18;
  undefined1 *puStack_c10;
  undefined1 *puStack_c08;
  undefined1 *puStack_c00;
  undefined1 *puStack_bf8;
  undefined1 *puStack_bf0;
  undefined1 *puStack_be8;
  undefined8 **ppuStack_be0;
  code *pcStack_bd8;
  undefined8 uStack_bd0;
  long lStack_bc8;
  undefined8 *puStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  long lStack_b08;
  undefined8 **ppuStack_ac0;
  code *pcStack_ab8;
  undefined8 uStack_ab0;
  long lStack_aa8;
  undefined8 *puStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined1 auStack_a68 [128];
  long lStack_9e8;
  undefined1 *puStack_9e0;
  undefined1 *puStack_9d8;
  undefined1 *puStack_9d0;
  undefined1 *puStack_9c8;
  undefined1 *puStack_9c0;
  undefined1 *puStack_9b8;
  undefined8 **ppuStack_9b0;
  code *pcStack_9a8;
  undefined8 uStack_9a0;
  long lStack_998;
  undefined8 *puStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  long lStack_8d8;
  undefined1 *puStack_8d0;
  undefined1 *puStack_8c8;
  undefined1 *puStack_8c0;
  undefined1 *puStack_8b8;
  undefined1 *puStack_8b0;
  undefined1 *puStack_8a8;
  undefined8 **ppuStack_8a0;
  code *pcStack_898;
  undefined8 uStack_890;
  long lStack_888;
  undefined8 *puStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  long lStack_7c8;
  undefined8 **ppuStack_780;
  code *pcStack_778;
  undefined8 uStack_770;
  long lStack_768;
  long *plStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined1 auStack_728 [128];
  long lStack_6a8;
  undefined8 **ppuStack_670;
  code *pcStack_668;
  undefined8 uStack_660;
  long lStack_658;
  long *plStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  long lStack_598;
  undefined8 **ppuStack_560;
  code *pcStack_558;
  undefined8 uStack_550;
  long lStack_548;
  long *plStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  long lStack_488;
  undefined8 **ppuStack_450;
  code *pcStack_448;
  undefined8 uStack_440;
  long lStack_438;
  long *plStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_378;
  undefined8 **ppuStack_340;
  code *pcStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_268;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_158;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_100;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_100 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2d80(*(undefined8 *)(lStack_108 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_105ac1294;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_210;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_210 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2de0(*(undefined8 *)(lStack_218 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_105ac1384;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_230 = &puStack_120;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_320;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_320 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2dc0(*(undefined8 *)(lStack_328 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_338 = FUN_105ac1474;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_340 = &ppuStack_230;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_438 = 0;
  uStack_440 = 0;
  uStack_428 = 0;
  plStack_430 = (long *)0x0;
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_430;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_430 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2e20(*(undefined8 *)(lStack_438 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_448 = FUN_105ac1564;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_450 = &ppuStack_340;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  plStack_540 = (long *)0x0;
  uStack_528 = 0;
  uStack_530 = 0;
  uStack_518 = 0;
  uStack_520 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_540;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_540 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2fa0(*(undefined8 *)(lStack_548 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_558 = FUN_105ac1654;
  lStack_598 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_560 = &ppuStack_450;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_658 = 0;
  uStack_660 = 0;
  uStack_648 = 0;
  plStack_650 = (long *)0x0;
  uStack_638 = 0;
  uStack_640 = 0;
  uStack_628 = 0;
  uStack_630 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_650;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_650 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f60(*(undefined8 *)(lStack_658 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_598) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_770;
  pcStack_668 = FUN_105ac1744;
  lStack_6a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_670 = &ppuStack_560;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_768 = 0;
  uStack_770 = 0;
  uStack_758 = 0;
  plStack_760 = (long *)0x0;
  uStack_748 = 0;
  uStack_750 = 0;
  uStack_738 = 0;
  uStack_740 = 0;
  puVar1 = auStack_728;
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    lVar9 = *plStack_760;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_760 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f00(*(undefined8 *)(lStack_768 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar1 = auStack_728;
      puVar2 = param_1;
      puVar6 = &uStack_770;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6a8) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_890;
  pcStack_778 = FUN_105ac1834;
  lStack_7c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_780 = &ppuStack_670;
  _objc_retain(puVar6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_888 = 0;
  uStack_890 = 0;
  uStack_878 = 0;
  puStack_880 = (undefined8 *)0x0;
  uStack_868 = 0;
  uStack_870 = 0;
  uStack_858 = 0;
  uStack_860 = 0;
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*puStack_880;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_880 != unaff_x23) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2fe0(*(undefined8 *)(lStack_888 + (long)unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (puVar2 != unaff_x24);
      puVar2 = param_1;
      puVar7 = &uStack_890;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(param_1);
  puVar2 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7c8) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_9a0;
  pcStack_898 = FUN_105ac1954;
  lStack_8d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_8d0 = unaff_x24;
  puStack_8c8 = unaff_x23;
  puStack_8c0 = unaff_x22;
  puStack_8b8 = param_1;
  puStack_8b0 = puVar1;
  puStack_8a8 = (undefined1 *)puVar6;
  ppuStack_8a0 = &ppuStack_780;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_998 = 0;
  uStack_9a0 = 0;
  uStack_988 = 0;
  puStack_990 = (undefined8 *)0x0;
  uStack_978 = 0;
  uStack_980 = 0;
  uStack_968 = 0;
  uStack_970 = 0;
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_990;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_990 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c0f2f40(*(undefined8 *)(lStack_998 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar1 != unaff_x23);
      puVar1 = puVar2;
      puVar10 = &uStack_9a0;
      func_0x00010bf52a60();
      param_1 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8d8) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_ab0;
  pcStack_9a8 = FUN_105ac1a4c;
  lStack_9e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_9e0 = unaff_x24;
  puStack_9d8 = unaff_x23;
  puStack_9d0 = unaff_x22;
  puStack_9c8 = param_1;
  puStack_9c0 = puVar2;
  puStack_9b8 = (undefined1 *)puVar7;
  ppuStack_9b0 = &ppuStack_8a0;
  _objc_retain(puVar10);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_aa8 = 0;
  uStack_ab0 = 0;
  uStack_a98 = 0;
  puStack_aa0 = (undefined8 *)0x0;
  uStack_a88 = 0;
  uStack_a90 = 0;
  uStack_a78 = 0;
  uStack_a80 = 0;
  puVar2 = auStack_a68;
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_aa0;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_aa0 != unaff_x22) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c0f2f80(*(undefined8 *)(lStack_aa8 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar3 != unaff_x23);
      puVar2 = auStack_a68;
      puVar3 = puVar1;
      puVar6 = &uStack_ab0;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9e8) {
    return (undefined1 *)puVar10;
  }
  ___stack_chk_fail();
  pcStack_ab8 = FUN_105ac1b5c;
  lStack_b08 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_ac0 = &ppuStack_9b0;
  _objc_retain(puVar6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_bc8 = 0;
  uStack_bd0 = 0;
  uStack_bb8 = 0;
  puStack_bc0 = (undefined8 *)0x0;
  uStack_ba8 = 0;
  uStack_bb0 = 0;
  uStack_b98 = 0;
  uStack_ba0 = 0;
  puVar1 = (undefined1 *)puVar10;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*puStack_bc0;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_bc0 != unaff_x23) {
          _objc_enumerationMutation(puVar10);
        }
        func_0x00010c292e40(*(undefined8 *)(lStack_bc8 + (long)unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (puVar1 != unaff_x24);
      puVar1 = (undefined1 *)puVar10;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release(puVar10);
  puVar1 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b08) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_bd8 = FUN_105ac1c7c;
  lStack_c18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c10 = unaff_x24;
  puStack_c08 = unaff_x23;
  puStack_c00 = unaff_x22;
  puStack_bf8 = (undefined1 *)puVar10;
  puStack_bf0 = puVar2;
  puStack_be8 = (undefined1 *)puVar6;
  ppuStack_be0 = &ppuStack_ac0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_cd8 = 0;
  uStack_ce0 = 0;
  uStack_cc8 = 0;
  puStack_cd0 = (undefined8 *)0x0;
  uStack_cb8 = 0;
  uStack_cc0 = 0;
  uStack_ca8 = 0;
  uStack_cb0 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_cd0;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_cd0 != unaff_x22) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293980(*(undefined8 *)(lStack_cd8 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar2 != unaff_x23);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c18) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_ce8 = FUN_105ac1d74;
  lStack_d28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_cf0 = &ppuStack_be0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_de8 = 0;
  uStack_df0 = 0;
  uStack_dd8 = 0;
  puStack_de0 = (undefined8 *)0x0;
  uStack_dc8 = 0;
  uStack_dd0 = 0;
  uStack_db8 = 0;
  uStack_dc0 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_de0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_de0 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2934e0(*(undefined8 *)(lStack_de8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d28) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_df8 = FUN_105ac1e64;
  lStack_e38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_e00 = &ppuStack_cf0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ef8 = 0;
  uStack_f00 = 0;
  uStack_ee8 = 0;
  puStack_ef0 = (undefined8 *)0x0;
  uStack_ed8 = 0;
  uStack_ee0 = 0;
  uStack_ec8 = 0;
  uStack_ed0 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_ef0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_ef0 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c293020(*(undefined8 *)(lStack_ef8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e38) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_f08 = FUN_105ac1f54;
  lStack_f48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_f10 = &ppuStack_e00;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1008 = 0;
  uStack_1010 = 0;
  uStack_ff8 = 0;
  puStack_1000 = (undefined8 *)0x0;
  uStack_fe8 = 0;
  uStack_ff0 = 0;
  uStack_fd8 = 0;
  uStack_fe0 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1000;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1000 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2916c0(*(undefined8 *)(lStack_1008 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f48) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_1018 = FUN_105ac2044;
  lStack_1058 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1050 = unaff_x24;
  puStack_1048 = unaff_x23;
  puStack_1040 = unaff_x22;
  puStack_1038 = (undefined1 *)puVar10;
  puStack_1030 = puVar1;
  puStack_1028 = puVar2;
  ppuStack_1020 = &ppuStack_f10;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1118 = 0;
  uStack_1120 = 0;
  uStack_1108 = 0;
  puStack_1110 = (undefined8 *)0x0;
  uStack_10f8 = 0;
  uStack_1100 = 0;
  uStack_10e8 = 0;
  uStack_10f0 = 0;
  puVar1 = puVar3;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_1110;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_1110 != unaff_x22) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010c291020(*(undefined8 *)(lStack_1118 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar1 != unaff_x23);
      puVar1 = puVar3;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1058) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_1128 = FUN_105ac213c;
  lStack_1168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1130 = &ppuStack_1020;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1228 = 0;
  uStack_1230 = 0;
  uStack_1218 = 0;
  puStack_1220 = (undefined8 *)0x0;
  uStack_1208 = 0;
  uStack_1210 = 0;
  uStack_11f8 = 0;
  uStack_1200 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1220;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1220 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293ea0(*(undefined8 *)(lStack_1228 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1168) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_1238 = FUN_105ac222c;
  lStack_1278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1240 = &ppuStack_1130;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1338 = 0;
  uStack_1340 = 0;
  uStack_1328 = 0;
  puStack_1330 = (undefined8 *)0x0;
  uStack_1318 = 0;
  uStack_1320 = 0;
  uStack_1308 = 0;
  uStack_1310 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1330;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1330 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c294200(*(undefined8 *)(lStack_1338 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1278) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_1348 = FUN_105ac231c;
  lStack_1388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1350 = &ppuStack_1240;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1448 = 0;
  uStack_1450 = 0;
  uStack_1438 = 0;
  puStack_1440 = (undefined8 *)0x0;
  uStack_1428 = 0;
  uStack_1430 = 0;
  uStack_1418 = 0;
  uStack_1420 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1440;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1440 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293e80(*(undefined8 *)(lStack_1448 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1388) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_1560;
  pcStack_1458 = FUN_105ac240c;
  lStack_1498 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1460 = &ppuStack_1350;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1558 = 0;
  uStack_1560 = 0;
  uStack_1548 = 0;
  puStack_1550 = (undefined8 *)0x0;
  uStack_1538 = 0;
  uStack_1540 = 0;
  uStack_1528 = 0;
  uStack_1530 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1550;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1550 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293ee0(*(undefined8 *)(lStack_1558 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      puVar6 = &uStack_1560;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1498) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_1670;
  pcStack_1568 = FUN_105ac24fc;
  lStack_15a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_15a0 = unaff_x24;
  puStack_1598 = unaff_x23;
  puStack_1590 = unaff_x22;
  puStack_1588 = (undefined1 *)puVar10;
  puStack_1580 = puVar3;
  puStack_1578 = puVar1;
  ppuStack_1570 = &ppuStack_1460;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1668 = 0;
  uStack_1670 = 0;
  uStack_1658 = 0;
  puStack_1660 = (undefined8 *)0x0;
  uStack_1648 = 0;
  uStack_1650 = 0;
  uStack_1638 = 0;
  uStack_1640 = 0;
  puVar1 = auStack_1628;
  uVar8 = 0x10;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_1660;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_1660 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2915c0(*(undefined8 *)(lStack_1668 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar3 != unaff_x23);
      puVar1 = auStack_1628;
      uVar8 = 0x10;
      puVar3 = puVar2;
      puVar7 = &uStack_1670;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_15a8) {
    return puVar3;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_16c0;
  pcStack_1678 = FUN_105ac25f4;
  puStack_16b0 = unaff_x24;
  puStack_16a8 = unaff_x23;
  puStack_16a0 = unaff_x22;
  puStack_1698 = (undefined1 *)puVar10;
  puStack_1690 = puVar2;
  puStack_1688 = (undefined1 *)puVar6;
  ppuStack_1680 = &ppuStack_1570;
  _objc_retain(puVar7);
  _objc_retain(puVar1);
  _objc_retain(in_x6);
  puStack_16b8 = PTR_PTR_1126ebc18;
  puStack_16c0 = puVar3;
  _objc_msgSendSuper2(&puStack_16c0,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined1 **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar4 + 8),puVar7);
    _objc_retain(puVar1);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x10);
    *(undefined1 **)((long)ppuVar4 + 0x10) = puVar1;
    _objc_release(uVar5);
    *(undefined8 *)((long)ppuVar4 + 0x18) = in_x5;
    *(undefined8 *)((long)ppuVar4 + 0x20) = uVar8;
    _objc_retain(in_x6);
    uVar8 = *(undefined8 *)((long)ppuVar4 + 0x28);
    *(undefined8 *)((long)ppuVar4 + 0x28) = in_x6;
    _objc_release(uVar8);
  }
  _objc_release(in_x6);
  _objc_release(puVar1);
  _objc_release(puVar7);
  return (undefined1 *)ppuVar4;
}



/* Entry: 105ac1294; end: 105ac1383; -[SCSpectaclesPairingListenerAnnouncer pairingBeganRequestingLocation] */

undefined1 * FUN_105ac1294(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar9;
  undefined8 *puVar10;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *puStack_15b0;
  undefined *puStack_15a8;
  undefined1 *puStack_15a0;
  undefined1 *puStack_1598;
  undefined1 *puStack_1590;
  undefined1 *puStack_1588;
  undefined1 *puStack_1580;
  undefined1 *puStack_1578;
  undefined8 **ppuStack_1570;
  code *pcStack_1568;
  undefined8 uStack_1560;
  long lStack_1558;
  undefined8 *puStack_1550;
  undefined8 uStack_1548;
  undefined8 uStack_1540;
  undefined8 uStack_1538;
  undefined8 uStack_1530;
  undefined8 uStack_1528;
  undefined1 auStack_1518 [128];
  long lStack_1498;
  undefined1 *puStack_1490;
  undefined1 *puStack_1488;
  undefined1 *puStack_1480;
  undefined1 *puStack_1478;
  undefined1 *puStack_1470;
  undefined1 *puStack_1468;
  undefined8 **ppuStack_1460;
  code *pcStack_1458;
  undefined8 uStack_1450;
  long lStack_1448;
  undefined8 *puStack_1440;
  undefined8 uStack_1438;
  undefined8 uStack_1430;
  undefined8 uStack_1428;
  undefined8 uStack_1420;
  undefined8 uStack_1418;
  long lStack_1388;
  undefined8 **ppuStack_1350;
  code *pcStack_1348;
  undefined8 uStack_1340;
  long lStack_1338;
  undefined8 *puStack_1330;
  undefined8 uStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  long lStack_1278;
  undefined8 **ppuStack_1240;
  code *pcStack_1238;
  undefined8 uStack_1230;
  long lStack_1228;
  undefined8 *puStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  long lStack_1168;
  undefined8 **ppuStack_1130;
  code *pcStack_1128;
  undefined8 uStack_1120;
  long lStack_1118;
  undefined8 *puStack_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  long lStack_1058;
  undefined8 **ppuStack_1020;
  code *pcStack_1018;
  undefined8 uStack_1010;
  long lStack_1008;
  undefined8 *puStack_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  long lStack_f48;
  undefined1 *puStack_f40;
  undefined1 *puStack_f38;
  undefined1 *puStack_f30;
  undefined1 *puStack_f28;
  undefined1 *puStack_f20;
  undefined1 *puStack_f18;
  undefined8 **ppuStack_f10;
  code *pcStack_f08;
  undefined8 uStack_f00;
  long lStack_ef8;
  undefined8 *puStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  long lStack_e38;
  undefined8 **ppuStack_e00;
  code *pcStack_df8;
  undefined8 uStack_df0;
  long lStack_de8;
  undefined8 *puStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  long lStack_d28;
  undefined8 **ppuStack_cf0;
  code *pcStack_ce8;
  undefined8 uStack_ce0;
  long lStack_cd8;
  undefined8 *puStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  long lStack_c18;
  undefined8 **ppuStack_be0;
  code *pcStack_bd8;
  undefined8 uStack_bd0;
  long lStack_bc8;
  undefined8 *puStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  long lStack_b08;
  undefined1 *puStack_b00;
  undefined1 *puStack_af8;
  undefined1 *puStack_af0;
  undefined1 *puStack_ae8;
  undefined1 *puStack_ae0;
  undefined1 *puStack_ad8;
  undefined8 **ppuStack_ad0;
  code *pcStack_ac8;
  undefined8 uStack_ac0;
  long lStack_ab8;
  undefined8 *puStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  long lStack_9f8;
  undefined8 **ppuStack_9b0;
  code *pcStack_9a8;
  undefined8 uStack_9a0;
  long lStack_998;
  undefined8 *puStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined1 auStack_958 [128];
  long lStack_8d8;
  undefined1 *puStack_8d0;
  undefined1 *puStack_8c8;
  undefined1 *puStack_8c0;
  undefined1 *puStack_8b8;
  undefined1 *puStack_8b0;
  undefined1 *puStack_8a8;
  undefined8 **ppuStack_8a0;
  code *pcStack_898;
  undefined8 uStack_890;
  long lStack_888;
  undefined8 *puStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  long lStack_7c8;
  undefined1 *puStack_7c0;
  undefined1 *puStack_7b8;
  undefined1 *puStack_7b0;
  undefined1 *puStack_7a8;
  undefined1 *puStack_7a0;
  undefined1 *puStack_798;
  undefined8 **ppuStack_790;
  code *pcStack_788;
  undefined8 uStack_780;
  long lStack_778;
  undefined8 *puStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  long lStack_6b8;
  undefined8 **ppuStack_670;
  code *pcStack_668;
  undefined8 uStack_660;
  long lStack_658;
  long *plStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined1 auStack_618 [128];
  long lStack_598;
  undefined8 **ppuStack_560;
  code *pcStack_558;
  undefined8 uStack_550;
  long lStack_548;
  long *plStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  long lStack_488;
  undefined8 **ppuStack_450;
  code *pcStack_448;
  undefined8 uStack_440;
  long lStack_438;
  long *plStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_378;
  undefined8 **ppuStack_340;
  code *pcStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_268;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_158;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_100;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_100 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2de0(*(undefined8 *)(lStack_108 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_105ac1384;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_210;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_210 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2dc0(*(undefined8 *)(lStack_218 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_105ac1474;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_230 = &puStack_120;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_320;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_320 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2e20(*(undefined8 *)(lStack_328 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_338 = FUN_105ac1564;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_340 = &ppuStack_230;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_438 = 0;
  uStack_440 = 0;
  uStack_428 = 0;
  plStack_430 = (long *)0x0;
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_430;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_430 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2fa0(*(undefined8 *)(lStack_438 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_448 = FUN_105ac1654;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_450 = &ppuStack_340;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  plStack_540 = (long *)0x0;
  uStack_528 = 0;
  uStack_530 = 0;
  uStack_518 = 0;
  uStack_520 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_540;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_540 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f60(*(undefined8 *)(lStack_548 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_660;
  pcStack_558 = FUN_105ac1744;
  lStack_598 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_560 = &ppuStack_450;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_658 = 0;
  uStack_660 = 0;
  uStack_648 = 0;
  plStack_650 = (long *)0x0;
  uStack_638 = 0;
  uStack_640 = 0;
  uStack_628 = 0;
  uStack_630 = 0;
  puVar1 = auStack_618;
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    lVar9 = *plStack_650;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_650 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f00(*(undefined8 *)(lStack_658 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar1 = auStack_618;
      puVar2 = param_1;
      puVar6 = &uStack_660;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_598) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_780;
  pcStack_668 = FUN_105ac1834;
  lStack_6b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_670 = &ppuStack_560;
  _objc_retain(puVar6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_778 = 0;
  uStack_780 = 0;
  uStack_768 = 0;
  puStack_770 = (undefined8 *)0x0;
  uStack_758 = 0;
  uStack_760 = 0;
  uStack_748 = 0;
  uStack_750 = 0;
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*puStack_770;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_770 != unaff_x23) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2fe0(*(undefined8 *)(lStack_778 + (long)unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (puVar2 != unaff_x24);
      puVar2 = param_1;
      puVar7 = &uStack_780;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(param_1);
  puVar2 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6b8) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_890;
  pcStack_788 = FUN_105ac1954;
  lStack_7c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_7c0 = unaff_x24;
  puStack_7b8 = unaff_x23;
  puStack_7b0 = unaff_x22;
  puStack_7a8 = param_1;
  puStack_7a0 = puVar1;
  puStack_798 = (undefined1 *)puVar6;
  ppuStack_790 = &ppuStack_670;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_888 = 0;
  uStack_890 = 0;
  uStack_878 = 0;
  puStack_880 = (undefined8 *)0x0;
  uStack_868 = 0;
  uStack_870 = 0;
  uStack_858 = 0;
  uStack_860 = 0;
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_880;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_880 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c0f2f40(*(undefined8 *)(lStack_888 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar1 != unaff_x23);
      puVar1 = puVar2;
      puVar10 = &uStack_890;
      func_0x00010bf52a60();
      param_1 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7c8) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_9a0;
  pcStack_898 = FUN_105ac1a4c;
  lStack_8d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_8d0 = unaff_x24;
  puStack_8c8 = unaff_x23;
  puStack_8c0 = unaff_x22;
  puStack_8b8 = param_1;
  puStack_8b0 = puVar2;
  puStack_8a8 = (undefined1 *)puVar7;
  ppuStack_8a0 = &ppuStack_790;
  _objc_retain(puVar10);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_998 = 0;
  uStack_9a0 = 0;
  uStack_988 = 0;
  puStack_990 = (undefined8 *)0x0;
  uStack_978 = 0;
  uStack_980 = 0;
  uStack_968 = 0;
  uStack_970 = 0;
  puVar2 = auStack_958;
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_990;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_990 != unaff_x22) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c0f2f80(*(undefined8 *)(lStack_998 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar3 != unaff_x23);
      puVar2 = auStack_958;
      puVar3 = puVar1;
      puVar6 = &uStack_9a0;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8d8) {
    return (undefined1 *)puVar10;
  }
  ___stack_chk_fail();
  pcStack_9a8 = FUN_105ac1b5c;
  lStack_9f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_9b0 = &ppuStack_8a0;
  _objc_retain(puVar6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ab8 = 0;
  uStack_ac0 = 0;
  uStack_aa8 = 0;
  puStack_ab0 = (undefined8 *)0x0;
  uStack_a98 = 0;
  uStack_aa0 = 0;
  uStack_a88 = 0;
  uStack_a90 = 0;
  puVar1 = (undefined1 *)puVar10;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*puStack_ab0;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_ab0 != unaff_x23) {
          _objc_enumerationMutation(puVar10);
        }
        func_0x00010c292e40(*(undefined8 *)(lStack_ab8 + (long)unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (puVar1 != unaff_x24);
      puVar1 = (undefined1 *)puVar10;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release(puVar10);
  puVar1 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9f8) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_ac8 = FUN_105ac1c7c;
  lStack_b08 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b00 = unaff_x24;
  puStack_af8 = unaff_x23;
  puStack_af0 = unaff_x22;
  puStack_ae8 = (undefined1 *)puVar10;
  puStack_ae0 = puVar2;
  puStack_ad8 = (undefined1 *)puVar6;
  ppuStack_ad0 = &ppuStack_9b0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_bc8 = 0;
  uStack_bd0 = 0;
  uStack_bb8 = 0;
  puStack_bc0 = (undefined8 *)0x0;
  uStack_ba8 = 0;
  uStack_bb0 = 0;
  uStack_b98 = 0;
  uStack_ba0 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_bc0;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_bc0 != unaff_x22) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293980(*(undefined8 *)(lStack_bc8 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar2 != unaff_x23);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b08) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_bd8 = FUN_105ac1d74;
  lStack_c18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_be0 = &ppuStack_ad0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_cd8 = 0;
  uStack_ce0 = 0;
  uStack_cc8 = 0;
  puStack_cd0 = (undefined8 *)0x0;
  uStack_cb8 = 0;
  uStack_cc0 = 0;
  uStack_ca8 = 0;
  uStack_cb0 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_cd0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_cd0 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2934e0(*(undefined8 *)(lStack_cd8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c18) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_ce8 = FUN_105ac1e64;
  lStack_d28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_cf0 = &ppuStack_be0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_de8 = 0;
  uStack_df0 = 0;
  uStack_dd8 = 0;
  puStack_de0 = (undefined8 *)0x0;
  uStack_dc8 = 0;
  uStack_dd0 = 0;
  uStack_db8 = 0;
  uStack_dc0 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_de0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_de0 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c293020(*(undefined8 *)(lStack_de8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d28) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_df8 = FUN_105ac1f54;
  lStack_e38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_e00 = &ppuStack_cf0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ef8 = 0;
  uStack_f00 = 0;
  uStack_ee8 = 0;
  puStack_ef0 = (undefined8 *)0x0;
  uStack_ed8 = 0;
  uStack_ee0 = 0;
  uStack_ec8 = 0;
  uStack_ed0 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_ef0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_ef0 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2916c0(*(undefined8 *)(lStack_ef8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e38) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_f08 = FUN_105ac2044;
  lStack_f48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f40 = unaff_x24;
  puStack_f38 = unaff_x23;
  puStack_f30 = unaff_x22;
  puStack_f28 = (undefined1 *)puVar10;
  puStack_f20 = puVar1;
  puStack_f18 = puVar2;
  ppuStack_f10 = &ppuStack_e00;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1008 = 0;
  uStack_1010 = 0;
  uStack_ff8 = 0;
  puStack_1000 = (undefined8 *)0x0;
  uStack_fe8 = 0;
  uStack_ff0 = 0;
  uStack_fd8 = 0;
  uStack_fe0 = 0;
  puVar1 = puVar3;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_1000;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_1000 != unaff_x22) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010c291020(*(undefined8 *)(lStack_1008 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar1 != unaff_x23);
      puVar1 = puVar3;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f48) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_1018 = FUN_105ac213c;
  lStack_1058 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1020 = &ppuStack_f10;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1118 = 0;
  uStack_1120 = 0;
  uStack_1108 = 0;
  puStack_1110 = (undefined8 *)0x0;
  uStack_10f8 = 0;
  uStack_1100 = 0;
  uStack_10e8 = 0;
  uStack_10f0 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1110;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1110 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293ea0(*(undefined8 *)(lStack_1118 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1058) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_1128 = FUN_105ac222c;
  lStack_1168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1130 = &ppuStack_1020;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1228 = 0;
  uStack_1230 = 0;
  uStack_1218 = 0;
  puStack_1220 = (undefined8 *)0x0;
  uStack_1208 = 0;
  uStack_1210 = 0;
  uStack_11f8 = 0;
  uStack_1200 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1220;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1220 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c294200(*(undefined8 *)(lStack_1228 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1168) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_1238 = FUN_105ac231c;
  lStack_1278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1240 = &ppuStack_1130;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1338 = 0;
  uStack_1340 = 0;
  uStack_1328 = 0;
  puStack_1330 = (undefined8 *)0x0;
  uStack_1318 = 0;
  uStack_1320 = 0;
  uStack_1308 = 0;
  uStack_1310 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1330;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1330 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293e80(*(undefined8 *)(lStack_1338 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1278) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_1450;
  pcStack_1348 = FUN_105ac240c;
  lStack_1388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1350 = &ppuStack_1240;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1448 = 0;
  uStack_1450 = 0;
  uStack_1438 = 0;
  puStack_1440 = (undefined8 *)0x0;
  uStack_1428 = 0;
  uStack_1430 = 0;
  uStack_1418 = 0;
  uStack_1420 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1440;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1440 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293ee0(*(undefined8 *)(lStack_1448 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      puVar6 = &uStack_1450;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1388) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_1560;
  pcStack_1458 = FUN_105ac24fc;
  lStack_1498 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1490 = unaff_x24;
  puStack_1488 = unaff_x23;
  puStack_1480 = unaff_x22;
  puStack_1478 = (undefined1 *)puVar10;
  puStack_1470 = puVar3;
  puStack_1468 = puVar1;
  ppuStack_1460 = &ppuStack_1350;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1558 = 0;
  uStack_1560 = 0;
  uStack_1548 = 0;
  puStack_1550 = (undefined8 *)0x0;
  uStack_1538 = 0;
  uStack_1540 = 0;
  uStack_1528 = 0;
  uStack_1530 = 0;
  puVar1 = auStack_1518;
  uVar8 = 0x10;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_1550;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_1550 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2915c0(*(undefined8 *)(lStack_1558 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar3 != unaff_x23);
      puVar1 = auStack_1518;
      uVar8 = 0x10;
      puVar3 = puVar2;
      puVar7 = &uStack_1560;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1498) {
    return puVar3;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_15b0;
  pcStack_1568 = FUN_105ac25f4;
  puStack_15a0 = unaff_x24;
  puStack_1598 = unaff_x23;
  puStack_1590 = unaff_x22;
  puStack_1588 = (undefined1 *)puVar10;
  puStack_1580 = puVar2;
  puStack_1578 = (undefined1 *)puVar6;
  ppuStack_1570 = &ppuStack_1460;
  _objc_retain(puVar7);
  _objc_retain(puVar1);
  _objc_retain(in_x6);
  puStack_15a8 = PTR_PTR_1126ebc18;
  puStack_15b0 = puVar3;
  _objc_msgSendSuper2(&puStack_15b0,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined1 **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar4 + 8),puVar7);
    _objc_retain(puVar1);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x10);
    *(undefined1 **)((long)ppuVar4 + 0x10) = puVar1;
    _objc_release(uVar5);
    *(undefined8 *)((long)ppuVar4 + 0x18) = in_x5;
    *(undefined8 *)((long)ppuVar4 + 0x20) = uVar8;
    _objc_retain(in_x6);
    uVar8 = *(undefined8 *)((long)ppuVar4 + 0x28);
    *(undefined8 *)((long)ppuVar4 + 0x28) = in_x6;
    _objc_release(uVar8);
  }
  _objc_release(in_x6);
  _objc_release(puVar1);
  _objc_release(puVar7);
  return (undefined1 *)ppuVar4;
}



/* Entry: 105ac1384; end: 105ac1473; -[SCSpectaclesPairingListenerAnnouncer pairingBeganConnectingBTC] */

undefined1 * FUN_105ac1384(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar9;
  undefined8 *puVar10;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *puStack_14a0;
  undefined *puStack_1498;
  undefined1 *puStack_1490;
  undefined1 *puStack_1488;
  undefined1 *puStack_1480;
  undefined1 *puStack_1478;
  undefined1 *puStack_1470;
  undefined1 *puStack_1468;
  undefined8 **ppuStack_1460;
  code *pcStack_1458;
  undefined8 uStack_1450;
  long lStack_1448;
  undefined8 *puStack_1440;
  undefined8 uStack_1438;
  undefined8 uStack_1430;
  undefined8 uStack_1428;
  undefined8 uStack_1420;
  undefined8 uStack_1418;
  undefined1 auStack_1408 [128];
  long lStack_1388;
  undefined1 *puStack_1380;
  undefined1 *puStack_1378;
  undefined1 *puStack_1370;
  undefined1 *puStack_1368;
  undefined1 *puStack_1360;
  undefined1 *puStack_1358;
  undefined8 **ppuStack_1350;
  code *pcStack_1348;
  undefined8 uStack_1340;
  long lStack_1338;
  undefined8 *puStack_1330;
  undefined8 uStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  long lStack_1278;
  undefined8 **ppuStack_1240;
  code *pcStack_1238;
  undefined8 uStack_1230;
  long lStack_1228;
  undefined8 *puStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  long lStack_1168;
  undefined8 **ppuStack_1130;
  code *pcStack_1128;
  undefined8 uStack_1120;
  long lStack_1118;
  undefined8 *puStack_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  long lStack_1058;
  undefined8 **ppuStack_1020;
  code *pcStack_1018;
  undefined8 uStack_1010;
  long lStack_1008;
  undefined8 *puStack_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  long lStack_f48;
  undefined8 **ppuStack_f10;
  code *pcStack_f08;
  undefined8 uStack_f00;
  long lStack_ef8;
  undefined8 *puStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  long lStack_e38;
  undefined1 *puStack_e30;
  undefined1 *puStack_e28;
  undefined1 *puStack_e20;
  undefined1 *puStack_e18;
  undefined1 *puStack_e10;
  undefined1 *puStack_e08;
  undefined8 **ppuStack_e00;
  code *pcStack_df8;
  undefined8 uStack_df0;
  long lStack_de8;
  undefined8 *puStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  long lStack_d28;
  undefined8 **ppuStack_cf0;
  code *pcStack_ce8;
  undefined8 uStack_ce0;
  long lStack_cd8;
  undefined8 *puStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  long lStack_c18;
  undefined8 **ppuStack_be0;
  code *pcStack_bd8;
  undefined8 uStack_bd0;
  long lStack_bc8;
  undefined8 *puStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  long lStack_b08;
  undefined8 **ppuStack_ad0;
  code *pcStack_ac8;
  undefined8 uStack_ac0;
  long lStack_ab8;
  undefined8 *puStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  long lStack_9f8;
  undefined1 *puStack_9f0;
  undefined1 *puStack_9e8;
  undefined1 *puStack_9e0;
  undefined1 *puStack_9d8;
  undefined1 *puStack_9d0;
  undefined1 *puStack_9c8;
  undefined8 **ppuStack_9c0;
  code *pcStack_9b8;
  undefined8 uStack_9b0;
  long lStack_9a8;
  undefined8 *puStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  long lStack_8e8;
  undefined8 **ppuStack_8a0;
  code *pcStack_898;
  undefined8 uStack_890;
  long lStack_888;
  undefined8 *puStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined1 auStack_848 [128];
  long lStack_7c8;
  undefined1 *puStack_7c0;
  undefined1 *puStack_7b8;
  undefined1 *puStack_7b0;
  undefined1 *puStack_7a8;
  undefined1 *puStack_7a0;
  undefined1 *puStack_798;
  undefined8 **ppuStack_790;
  code *pcStack_788;
  undefined8 uStack_780;
  long lStack_778;
  undefined8 *puStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  long lStack_6b8;
  undefined1 *puStack_6b0;
  undefined1 *puStack_6a8;
  undefined1 *puStack_6a0;
  undefined1 *puStack_698;
  undefined1 *puStack_690;
  undefined1 *puStack_688;
  undefined8 **ppuStack_680;
  code *pcStack_678;
  undefined8 uStack_670;
  long lStack_668;
  undefined8 *puStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  long lStack_5a8;
  undefined8 **ppuStack_560;
  code *pcStack_558;
  undefined8 uStack_550;
  long lStack_548;
  long *plStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined1 auStack_508 [128];
  long lStack_488;
  undefined8 **ppuStack_450;
  code *pcStack_448;
  undefined8 uStack_440;
  long lStack_438;
  long *plStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_378;
  undefined8 **ppuStack_340;
  code *pcStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_268;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_158;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_100;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_100 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2dc0(*(undefined8 *)(lStack_108 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_105ac1474;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_210;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_210 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2e20(*(undefined8 *)(lStack_218 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_105ac1564;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_230 = &puStack_120;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_320;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_320 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2fa0(*(undefined8 *)(lStack_328 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_338 = FUN_105ac1654;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_340 = &ppuStack_230;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_438 = 0;
  uStack_440 = 0;
  uStack_428 = 0;
  plStack_430 = (long *)0x0;
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_430;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_430 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f60(*(undefined8 *)(lStack_438 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_550;
  pcStack_448 = FUN_105ac1744;
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_450 = &ppuStack_340;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  plStack_540 = (long *)0x0;
  uStack_528 = 0;
  uStack_530 = 0;
  uStack_518 = 0;
  uStack_520 = 0;
  puVar1 = auStack_508;
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    lVar9 = *plStack_540;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_540 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f00(*(undefined8 *)(lStack_548 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar1 = auStack_508;
      puVar2 = param_1;
      puVar6 = &uStack_550;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_670;
  pcStack_558 = FUN_105ac1834;
  lStack_5a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_560 = &ppuStack_450;
  _objc_retain(puVar6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_668 = 0;
  uStack_670 = 0;
  uStack_658 = 0;
  puStack_660 = (undefined8 *)0x0;
  uStack_648 = 0;
  uStack_650 = 0;
  uStack_638 = 0;
  uStack_640 = 0;
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*puStack_660;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_660 != unaff_x23) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2fe0(*(undefined8 *)(lStack_668 + (long)unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (puVar2 != unaff_x24);
      puVar2 = param_1;
      puVar7 = &uStack_670;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(param_1);
  puVar2 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5a8) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_780;
  pcStack_678 = FUN_105ac1954;
  lStack_6b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_6b0 = unaff_x24;
  puStack_6a8 = unaff_x23;
  puStack_6a0 = unaff_x22;
  puStack_698 = param_1;
  puStack_690 = puVar1;
  puStack_688 = (undefined1 *)puVar6;
  ppuStack_680 = &ppuStack_560;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_778 = 0;
  uStack_780 = 0;
  uStack_768 = 0;
  puStack_770 = (undefined8 *)0x0;
  uStack_758 = 0;
  uStack_760 = 0;
  uStack_748 = 0;
  uStack_750 = 0;
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_770;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_770 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c0f2f40(*(undefined8 *)(lStack_778 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar1 != unaff_x23);
      puVar1 = puVar2;
      puVar10 = &uStack_780;
      func_0x00010bf52a60();
      param_1 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6b8) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_890;
  pcStack_788 = FUN_105ac1a4c;
  lStack_7c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_7c0 = unaff_x24;
  puStack_7b8 = unaff_x23;
  puStack_7b0 = unaff_x22;
  puStack_7a8 = param_1;
  puStack_7a0 = puVar2;
  puStack_798 = (undefined1 *)puVar7;
  ppuStack_790 = &ppuStack_680;
  _objc_retain(puVar10);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_888 = 0;
  uStack_890 = 0;
  uStack_878 = 0;
  puStack_880 = (undefined8 *)0x0;
  uStack_868 = 0;
  uStack_870 = 0;
  uStack_858 = 0;
  uStack_860 = 0;
  puVar2 = auStack_848;
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_880;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_880 != unaff_x22) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c0f2f80(*(undefined8 *)(lStack_888 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar3 != unaff_x23);
      puVar2 = auStack_848;
      puVar3 = puVar1;
      puVar6 = &uStack_890;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7c8) {
    return (undefined1 *)puVar10;
  }
  ___stack_chk_fail();
  pcStack_898 = FUN_105ac1b5c;
  lStack_8e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_8a0 = &ppuStack_790;
  _objc_retain(puVar6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_9a8 = 0;
  uStack_9b0 = 0;
  uStack_998 = 0;
  puStack_9a0 = (undefined8 *)0x0;
  uStack_988 = 0;
  uStack_990 = 0;
  uStack_978 = 0;
  uStack_980 = 0;
  puVar1 = (undefined1 *)puVar10;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*puStack_9a0;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_9a0 != unaff_x23) {
          _objc_enumerationMutation(puVar10);
        }
        func_0x00010c292e40(*(undefined8 *)(lStack_9a8 + (long)unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (puVar1 != unaff_x24);
      puVar1 = (undefined1 *)puVar10;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release(puVar10);
  puVar1 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8e8) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_9b8 = FUN_105ac1c7c;
  lStack_9f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_9f0 = unaff_x24;
  puStack_9e8 = unaff_x23;
  puStack_9e0 = unaff_x22;
  puStack_9d8 = (undefined1 *)puVar10;
  puStack_9d0 = puVar2;
  puStack_9c8 = (undefined1 *)puVar6;
  ppuStack_9c0 = &ppuStack_8a0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ab8 = 0;
  uStack_ac0 = 0;
  uStack_aa8 = 0;
  puStack_ab0 = (undefined8 *)0x0;
  uStack_a98 = 0;
  uStack_aa0 = 0;
  uStack_a88 = 0;
  uStack_a90 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_ab0;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_ab0 != unaff_x22) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293980(*(undefined8 *)(lStack_ab8 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar2 != unaff_x23);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9f8) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_ac8 = FUN_105ac1d74;
  lStack_b08 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_ad0 = &ppuStack_9c0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_bc8 = 0;
  uStack_bd0 = 0;
  uStack_bb8 = 0;
  puStack_bc0 = (undefined8 *)0x0;
  uStack_ba8 = 0;
  uStack_bb0 = 0;
  uStack_b98 = 0;
  uStack_ba0 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_bc0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_bc0 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2934e0(*(undefined8 *)(lStack_bc8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b08) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_bd8 = FUN_105ac1e64;
  lStack_c18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_be0 = &ppuStack_ad0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_cd8 = 0;
  uStack_ce0 = 0;
  uStack_cc8 = 0;
  puStack_cd0 = (undefined8 *)0x0;
  uStack_cb8 = 0;
  uStack_cc0 = 0;
  uStack_ca8 = 0;
  uStack_cb0 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_cd0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_cd0 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c293020(*(undefined8 *)(lStack_cd8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c18) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_ce8 = FUN_105ac1f54;
  lStack_d28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_cf0 = &ppuStack_be0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_de8 = 0;
  uStack_df0 = 0;
  uStack_dd8 = 0;
  puStack_de0 = (undefined8 *)0x0;
  uStack_dc8 = 0;
  uStack_dd0 = 0;
  uStack_db8 = 0;
  uStack_dc0 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_de0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_de0 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2916c0(*(undefined8 *)(lStack_de8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d28) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_df8 = FUN_105ac2044;
  lStack_e38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e30 = unaff_x24;
  puStack_e28 = unaff_x23;
  puStack_e20 = unaff_x22;
  puStack_e18 = (undefined1 *)puVar10;
  puStack_e10 = puVar1;
  puStack_e08 = puVar2;
  ppuStack_e00 = &ppuStack_cf0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ef8 = 0;
  uStack_f00 = 0;
  uStack_ee8 = 0;
  puStack_ef0 = (undefined8 *)0x0;
  uStack_ed8 = 0;
  uStack_ee0 = 0;
  uStack_ec8 = 0;
  uStack_ed0 = 0;
  puVar1 = puVar3;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_ef0;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_ef0 != unaff_x22) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010c291020(*(undefined8 *)(lStack_ef8 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar1 != unaff_x23);
      puVar1 = puVar3;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e38) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_f08 = FUN_105ac213c;
  lStack_f48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_f10 = &ppuStack_e00;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1008 = 0;
  uStack_1010 = 0;
  uStack_ff8 = 0;
  puStack_1000 = (undefined8 *)0x0;
  uStack_fe8 = 0;
  uStack_ff0 = 0;
  uStack_fd8 = 0;
  uStack_fe0 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1000;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1000 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293ea0(*(undefined8 *)(lStack_1008 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f48) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_1018 = FUN_105ac222c;
  lStack_1058 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1020 = &ppuStack_f10;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1118 = 0;
  uStack_1120 = 0;
  uStack_1108 = 0;
  puStack_1110 = (undefined8 *)0x0;
  uStack_10f8 = 0;
  uStack_1100 = 0;
  uStack_10e8 = 0;
  uStack_10f0 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1110;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1110 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c294200(*(undefined8 *)(lStack_1118 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1058) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_1128 = FUN_105ac231c;
  lStack_1168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1130 = &ppuStack_1020;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1228 = 0;
  uStack_1230 = 0;
  uStack_1218 = 0;
  puStack_1220 = (undefined8 *)0x0;
  uStack_1208 = 0;
  uStack_1210 = 0;
  uStack_11f8 = 0;
  uStack_1200 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1220;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1220 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293e80(*(undefined8 *)(lStack_1228 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1168) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_1340;
  pcStack_1238 = FUN_105ac240c;
  lStack_1278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1240 = &ppuStack_1130;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1338 = 0;
  uStack_1340 = 0;
  uStack_1328 = 0;
  puStack_1330 = (undefined8 *)0x0;
  uStack_1318 = 0;
  uStack_1320 = 0;
  uStack_1308 = 0;
  uStack_1310 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1330;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1330 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293ee0(*(undefined8 *)(lStack_1338 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      puVar6 = &uStack_1340;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1278) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_1450;
  pcStack_1348 = FUN_105ac24fc;
  lStack_1388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1380 = unaff_x24;
  puStack_1378 = unaff_x23;
  puStack_1370 = unaff_x22;
  puStack_1368 = (undefined1 *)puVar10;
  puStack_1360 = puVar3;
  puStack_1358 = puVar1;
  ppuStack_1350 = &ppuStack_1240;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1448 = 0;
  uStack_1450 = 0;
  uStack_1438 = 0;
  puStack_1440 = (undefined8 *)0x0;
  uStack_1428 = 0;
  uStack_1430 = 0;
  uStack_1418 = 0;
  uStack_1420 = 0;
  puVar1 = auStack_1408;
  uVar8 = 0x10;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_1440;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_1440 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2915c0(*(undefined8 *)(lStack_1448 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar3 != unaff_x23);
      puVar1 = auStack_1408;
      uVar8 = 0x10;
      puVar3 = puVar2;
      puVar7 = &uStack_1450;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1388) {
    return puVar3;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_14a0;
  pcStack_1458 = FUN_105ac25f4;
  puStack_1490 = unaff_x24;
  puStack_1488 = unaff_x23;
  puStack_1480 = unaff_x22;
  puStack_1478 = (undefined1 *)puVar10;
  puStack_1470 = puVar2;
  puStack_1468 = (undefined1 *)puVar6;
  ppuStack_1460 = &ppuStack_1350;
  _objc_retain(puVar7);
  _objc_retain(puVar1);
  _objc_retain(in_x6);
  puStack_1498 = PTR_PTR_1126ebc18;
  puStack_14a0 = puVar3;
  _objc_msgSendSuper2(&puStack_14a0,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined1 **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar4 + 8),puVar7);
    _objc_retain(puVar1);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x10);
    *(undefined1 **)((long)ppuVar4 + 0x10) = puVar1;
    _objc_release(uVar5);
    *(undefined8 *)((long)ppuVar4 + 0x18) = in_x5;
    *(undefined8 *)((long)ppuVar4 + 0x20) = uVar8;
    _objc_retain(in_x6);
    uVar8 = *(undefined8 *)((long)ppuVar4 + 0x28);
    *(undefined8 *)((long)ppuVar4 + 0x28) = in_x6;
    _objc_release(uVar8);
  }
  _objc_release(in_x6);
  _objc_release(puVar1);
  _objc_release(puVar7);
  return (undefined1 *)ppuVar4;
}



/* Entry: 105ac1474; end: 105ac1563; -[SCSpectaclesPairingListenerAnnouncer pairingBeganSettingUpBTC] */

undefined1 * FUN_105ac1474(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar9;
  undefined8 *puVar10;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *puStack_1390;
  undefined *puStack_1388;
  undefined1 *puStack_1380;
  undefined1 *puStack_1378;
  undefined1 *puStack_1370;
  undefined1 *puStack_1368;
  undefined1 *puStack_1360;
  undefined1 *puStack_1358;
  undefined8 **ppuStack_1350;
  code *pcStack_1348;
  undefined8 uStack_1340;
  long lStack_1338;
  undefined8 *puStack_1330;
  undefined8 uStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  undefined1 auStack_12f8 [128];
  long lStack_1278;
  undefined1 *puStack_1270;
  undefined1 *puStack_1268;
  undefined1 *puStack_1260;
  undefined1 *puStack_1258;
  undefined1 *puStack_1250;
  undefined1 *puStack_1248;
  undefined8 **ppuStack_1240;
  code *pcStack_1238;
  undefined8 uStack_1230;
  long lStack_1228;
  undefined8 *puStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  long lStack_1168;
  undefined8 **ppuStack_1130;
  code *pcStack_1128;
  undefined8 uStack_1120;
  long lStack_1118;
  undefined8 *puStack_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  long lStack_1058;
  undefined8 **ppuStack_1020;
  code *pcStack_1018;
  undefined8 uStack_1010;
  long lStack_1008;
  undefined8 *puStack_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  long lStack_f48;
  undefined8 **ppuStack_f10;
  code *pcStack_f08;
  undefined8 uStack_f00;
  long lStack_ef8;
  undefined8 *puStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  long lStack_e38;
  undefined8 **ppuStack_e00;
  code *pcStack_df8;
  undefined8 uStack_df0;
  long lStack_de8;
  undefined8 *puStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  long lStack_d28;
  undefined1 *puStack_d20;
  undefined1 *puStack_d18;
  undefined1 *puStack_d10;
  undefined1 *puStack_d08;
  undefined1 *puStack_d00;
  undefined1 *puStack_cf8;
  undefined8 **ppuStack_cf0;
  code *pcStack_ce8;
  undefined8 uStack_ce0;
  long lStack_cd8;
  undefined8 *puStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  long lStack_c18;
  undefined8 **ppuStack_be0;
  code *pcStack_bd8;
  undefined8 uStack_bd0;
  long lStack_bc8;
  undefined8 *puStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  long lStack_b08;
  undefined8 **ppuStack_ad0;
  code *pcStack_ac8;
  undefined8 uStack_ac0;
  long lStack_ab8;
  undefined8 *puStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  long lStack_9f8;
  undefined8 **ppuStack_9c0;
  code *pcStack_9b8;
  undefined8 uStack_9b0;
  long lStack_9a8;
  undefined8 *puStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  long lStack_8e8;
  undefined1 *puStack_8e0;
  undefined1 *puStack_8d8;
  undefined1 *puStack_8d0;
  undefined1 *puStack_8c8;
  undefined1 *puStack_8c0;
  undefined1 *puStack_8b8;
  undefined8 **ppuStack_8b0;
  code *pcStack_8a8;
  undefined8 uStack_8a0;
  long lStack_898;
  undefined8 *puStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  long lStack_7d8;
  undefined8 **ppuStack_790;
  code *pcStack_788;
  undefined8 uStack_780;
  long lStack_778;
  undefined8 *puStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined1 auStack_738 [128];
  long lStack_6b8;
  undefined1 *puStack_6b0;
  undefined1 *puStack_6a8;
  undefined1 *puStack_6a0;
  undefined1 *puStack_698;
  undefined1 *puStack_690;
  undefined1 *puStack_688;
  undefined8 **ppuStack_680;
  code *pcStack_678;
  undefined8 uStack_670;
  long lStack_668;
  undefined8 *puStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  long lStack_5a8;
  undefined1 *puStack_5a0;
  undefined1 *puStack_598;
  undefined1 *puStack_590;
  undefined1 *puStack_588;
  undefined1 *puStack_580;
  undefined1 *puStack_578;
  undefined8 **ppuStack_570;
  code *pcStack_568;
  undefined8 uStack_560;
  long lStack_558;
  undefined8 *puStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  long lStack_498;
  undefined8 **ppuStack_450;
  code *pcStack_448;
  undefined8 uStack_440;
  long lStack_438;
  long *plStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined1 auStack_3f8 [128];
  long lStack_378;
  undefined8 **ppuStack_340;
  code *pcStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_268;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_158;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_100;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_100 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2e20(*(undefined8 *)(lStack_108 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_105ac1564;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_210;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_210 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2fa0(*(undefined8 *)(lStack_218 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_105ac1654;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_230 = &puStack_120;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_320;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_320 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f60(*(undefined8 *)(lStack_328 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_440;
  pcStack_338 = FUN_105ac1744;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_340 = &ppuStack_230;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_438 = 0;
  uStack_440 = 0;
  uStack_428 = 0;
  plStack_430 = (long *)0x0;
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  puVar1 = auStack_3f8;
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    lVar9 = *plStack_430;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_430 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f00(*(undefined8 *)(lStack_438 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar1 = auStack_3f8;
      puVar2 = param_1;
      puVar6 = &uStack_440;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_560;
  pcStack_448 = FUN_105ac1834;
  lStack_498 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_450 = &ppuStack_340;
  _objc_retain(puVar6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_558 = 0;
  uStack_560 = 0;
  uStack_548 = 0;
  puStack_550 = (undefined8 *)0x0;
  uStack_538 = 0;
  uStack_540 = 0;
  uStack_528 = 0;
  uStack_530 = 0;
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*puStack_550;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_550 != unaff_x23) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2fe0(*(undefined8 *)(lStack_558 + (long)unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (puVar2 != unaff_x24);
      puVar2 = param_1;
      puVar7 = &uStack_560;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(param_1);
  puVar2 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_498) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_670;
  pcStack_568 = FUN_105ac1954;
  lStack_5a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_5a0 = unaff_x24;
  puStack_598 = unaff_x23;
  puStack_590 = unaff_x22;
  puStack_588 = param_1;
  puStack_580 = puVar1;
  puStack_578 = (undefined1 *)puVar6;
  ppuStack_570 = &ppuStack_450;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_668 = 0;
  uStack_670 = 0;
  uStack_658 = 0;
  puStack_660 = (undefined8 *)0x0;
  uStack_648 = 0;
  uStack_650 = 0;
  uStack_638 = 0;
  uStack_640 = 0;
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_660;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_660 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c0f2f40(*(undefined8 *)(lStack_668 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar1 != unaff_x23);
      puVar1 = puVar2;
      puVar10 = &uStack_670;
      func_0x00010bf52a60();
      param_1 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5a8) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_780;
  pcStack_678 = FUN_105ac1a4c;
  lStack_6b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_6b0 = unaff_x24;
  puStack_6a8 = unaff_x23;
  puStack_6a0 = unaff_x22;
  puStack_698 = param_1;
  puStack_690 = puVar2;
  puStack_688 = (undefined1 *)puVar7;
  ppuStack_680 = &ppuStack_570;
  _objc_retain(puVar10);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_778 = 0;
  uStack_780 = 0;
  uStack_768 = 0;
  puStack_770 = (undefined8 *)0x0;
  uStack_758 = 0;
  uStack_760 = 0;
  uStack_748 = 0;
  uStack_750 = 0;
  puVar2 = auStack_738;
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_770;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_770 != unaff_x22) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c0f2f80(*(undefined8 *)(lStack_778 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar3 != unaff_x23);
      puVar2 = auStack_738;
      puVar3 = puVar1;
      puVar6 = &uStack_780;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6b8) {
    return (undefined1 *)puVar10;
  }
  ___stack_chk_fail();
  pcStack_788 = FUN_105ac1b5c;
  lStack_7d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_790 = &ppuStack_680;
  _objc_retain(puVar6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_898 = 0;
  uStack_8a0 = 0;
  uStack_888 = 0;
  puStack_890 = (undefined8 *)0x0;
  uStack_878 = 0;
  uStack_880 = 0;
  uStack_868 = 0;
  uStack_870 = 0;
  puVar1 = (undefined1 *)puVar10;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*puStack_890;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_890 != unaff_x23) {
          _objc_enumerationMutation(puVar10);
        }
        func_0x00010c292e40(*(undefined8 *)(lStack_898 + (long)unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (puVar1 != unaff_x24);
      puVar1 = (undefined1 *)puVar10;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release(puVar10);
  puVar1 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7d8) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_8a8 = FUN_105ac1c7c;
  lStack_8e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_8e0 = unaff_x24;
  puStack_8d8 = unaff_x23;
  puStack_8d0 = unaff_x22;
  puStack_8c8 = (undefined1 *)puVar10;
  puStack_8c0 = puVar2;
  puStack_8b8 = (undefined1 *)puVar6;
  ppuStack_8b0 = &ppuStack_790;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_9a8 = 0;
  uStack_9b0 = 0;
  uStack_998 = 0;
  puStack_9a0 = (undefined8 *)0x0;
  uStack_988 = 0;
  uStack_990 = 0;
  uStack_978 = 0;
  uStack_980 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_9a0;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_9a0 != unaff_x22) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293980(*(undefined8 *)(lStack_9a8 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar2 != unaff_x23);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8e8) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_9b8 = FUN_105ac1d74;
  lStack_9f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_9c0 = &ppuStack_8b0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ab8 = 0;
  uStack_ac0 = 0;
  uStack_aa8 = 0;
  puStack_ab0 = (undefined8 *)0x0;
  uStack_a98 = 0;
  uStack_aa0 = 0;
  uStack_a88 = 0;
  uStack_a90 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_ab0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_ab0 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2934e0(*(undefined8 *)(lStack_ab8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9f8) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_ac8 = FUN_105ac1e64;
  lStack_b08 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_ad0 = &ppuStack_9c0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_bc8 = 0;
  uStack_bd0 = 0;
  uStack_bb8 = 0;
  puStack_bc0 = (undefined8 *)0x0;
  uStack_ba8 = 0;
  uStack_bb0 = 0;
  uStack_b98 = 0;
  uStack_ba0 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_bc0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_bc0 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c293020(*(undefined8 *)(lStack_bc8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b08) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_bd8 = FUN_105ac1f54;
  lStack_c18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_be0 = &ppuStack_ad0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_cd8 = 0;
  uStack_ce0 = 0;
  uStack_cc8 = 0;
  puStack_cd0 = (undefined8 *)0x0;
  uStack_cb8 = 0;
  uStack_cc0 = 0;
  uStack_ca8 = 0;
  uStack_cb0 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_cd0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_cd0 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2916c0(*(undefined8 *)(lStack_cd8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c18) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_ce8 = FUN_105ac2044;
  lStack_d28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d20 = unaff_x24;
  puStack_d18 = unaff_x23;
  puStack_d10 = unaff_x22;
  puStack_d08 = (undefined1 *)puVar10;
  puStack_d00 = puVar1;
  puStack_cf8 = puVar2;
  ppuStack_cf0 = &ppuStack_be0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_de8 = 0;
  uStack_df0 = 0;
  uStack_dd8 = 0;
  puStack_de0 = (undefined8 *)0x0;
  uStack_dc8 = 0;
  uStack_dd0 = 0;
  uStack_db8 = 0;
  uStack_dc0 = 0;
  puVar1 = puVar3;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_de0;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_de0 != unaff_x22) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010c291020(*(undefined8 *)(lStack_de8 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar1 != unaff_x23);
      puVar1 = puVar3;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d28) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_df8 = FUN_105ac213c;
  lStack_e38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_e00 = &ppuStack_cf0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ef8 = 0;
  uStack_f00 = 0;
  uStack_ee8 = 0;
  puStack_ef0 = (undefined8 *)0x0;
  uStack_ed8 = 0;
  uStack_ee0 = 0;
  uStack_ec8 = 0;
  uStack_ed0 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_ef0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_ef0 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293ea0(*(undefined8 *)(lStack_ef8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e38) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_f08 = FUN_105ac222c;
  lStack_f48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_f10 = &ppuStack_e00;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1008 = 0;
  uStack_1010 = 0;
  uStack_ff8 = 0;
  puStack_1000 = (undefined8 *)0x0;
  uStack_fe8 = 0;
  uStack_ff0 = 0;
  uStack_fd8 = 0;
  uStack_fe0 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1000;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1000 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c294200(*(undefined8 *)(lStack_1008 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f48) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_1018 = FUN_105ac231c;
  lStack_1058 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1020 = &ppuStack_f10;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1118 = 0;
  uStack_1120 = 0;
  uStack_1108 = 0;
  puStack_1110 = (undefined8 *)0x0;
  uStack_10f8 = 0;
  uStack_1100 = 0;
  uStack_10e8 = 0;
  uStack_10f0 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1110;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1110 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293e80(*(undefined8 *)(lStack_1118 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1058) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_1230;
  pcStack_1128 = FUN_105ac240c;
  lStack_1168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1130 = &ppuStack_1020;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1228 = 0;
  uStack_1230 = 0;
  uStack_1218 = 0;
  puStack_1220 = (undefined8 *)0x0;
  uStack_1208 = 0;
  uStack_1210 = 0;
  uStack_11f8 = 0;
  uStack_1200 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1220;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1220 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293ee0(*(undefined8 *)(lStack_1228 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      puVar6 = &uStack_1230;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1168) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_1340;
  pcStack_1238 = FUN_105ac24fc;
  lStack_1278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1270 = unaff_x24;
  puStack_1268 = unaff_x23;
  puStack_1260 = unaff_x22;
  puStack_1258 = (undefined1 *)puVar10;
  puStack_1250 = puVar3;
  puStack_1248 = puVar1;
  ppuStack_1240 = &ppuStack_1130;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1338 = 0;
  uStack_1340 = 0;
  uStack_1328 = 0;
  puStack_1330 = (undefined8 *)0x0;
  uStack_1318 = 0;
  uStack_1320 = 0;
  uStack_1308 = 0;
  uStack_1310 = 0;
  puVar1 = auStack_12f8;
  uVar8 = 0x10;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_1330;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_1330 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2915c0(*(undefined8 *)(lStack_1338 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar3 != unaff_x23);
      puVar1 = auStack_12f8;
      uVar8 = 0x10;
      puVar3 = puVar2;
      puVar7 = &uStack_1340;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1278) {
    return puVar3;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_1390;
  pcStack_1348 = FUN_105ac25f4;
  puStack_1380 = unaff_x24;
  puStack_1378 = unaff_x23;
  puStack_1370 = unaff_x22;
  puStack_1368 = (undefined1 *)puVar10;
  puStack_1360 = puVar2;
  puStack_1358 = (undefined1 *)puVar6;
  ppuStack_1350 = &ppuStack_1240;
  _objc_retain(puVar7);
  _objc_retain(puVar1);
  _objc_retain(in_x6);
  puStack_1388 = PTR_PTR_1126ebc18;
  puStack_1390 = puVar3;
  _objc_msgSendSuper2(&puStack_1390,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined1 **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar4 + 8),puVar7);
    _objc_retain(puVar1);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x10);
    *(undefined1 **)((long)ppuVar4 + 0x10) = puVar1;
    _objc_release(uVar5);
    *(undefined8 *)((long)ppuVar4 + 0x18) = in_x5;
    *(undefined8 *)((long)ppuVar4 + 0x20) = uVar8;
    _objc_retain(in_x6);
    uVar8 = *(undefined8 *)((long)ppuVar4 + 0x28);
    *(undefined8 *)((long)ppuVar4 + 0x28) = in_x6;
    _objc_release(uVar8);
  }
  _objc_release(in_x6);
  _objc_release(puVar1);
  _objc_release(puVar7);
  return (undefined1 *)ppuVar4;
}



/* Entry: 105ac1564; end: 105ac1653; -[SCSpectaclesPairingListenerAnnouncer pairingDidShowBTPicker] */

undefined1 * FUN_105ac1564(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar9;
  undefined8 *puVar10;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *puStack_1280;
  undefined *puStack_1278;
  undefined1 *puStack_1270;
  undefined1 *puStack_1268;
  undefined1 *puStack_1260;
  undefined1 *puStack_1258;
  undefined1 *puStack_1250;
  undefined1 *puStack_1248;
  undefined8 **ppuStack_1240;
  code *pcStack_1238;
  undefined8 uStack_1230;
  long lStack_1228;
  undefined8 *puStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  undefined1 auStack_11e8 [128];
  long lStack_1168;
  undefined1 *puStack_1160;
  undefined1 *puStack_1158;
  undefined1 *puStack_1150;
  undefined1 *puStack_1148;
  undefined1 *puStack_1140;
  undefined1 *puStack_1138;
  undefined8 **ppuStack_1130;
  code *pcStack_1128;
  undefined8 uStack_1120;
  long lStack_1118;
  undefined8 *puStack_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  long lStack_1058;
  undefined8 **ppuStack_1020;
  code *pcStack_1018;
  undefined8 uStack_1010;
  long lStack_1008;
  undefined8 *puStack_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  long lStack_f48;
  undefined8 **ppuStack_f10;
  code *pcStack_f08;
  undefined8 uStack_f00;
  long lStack_ef8;
  undefined8 *puStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  long lStack_e38;
  undefined8 **ppuStack_e00;
  code *pcStack_df8;
  undefined8 uStack_df0;
  long lStack_de8;
  undefined8 *puStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  long lStack_d28;
  undefined8 **ppuStack_cf0;
  code *pcStack_ce8;
  undefined8 uStack_ce0;
  long lStack_cd8;
  undefined8 *puStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  long lStack_c18;
  undefined1 *puStack_c10;
  undefined1 *puStack_c08;
  undefined1 *puStack_c00;
  undefined1 *puStack_bf8;
  undefined1 *puStack_bf0;
  undefined1 *puStack_be8;
  undefined8 **ppuStack_be0;
  code *pcStack_bd8;
  undefined8 uStack_bd0;
  long lStack_bc8;
  undefined8 *puStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  long lStack_b08;
  undefined8 **ppuStack_ad0;
  code *pcStack_ac8;
  undefined8 uStack_ac0;
  long lStack_ab8;
  undefined8 *puStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  long lStack_9f8;
  undefined8 **ppuStack_9c0;
  code *pcStack_9b8;
  undefined8 uStack_9b0;
  long lStack_9a8;
  undefined8 *puStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  long lStack_8e8;
  undefined8 **ppuStack_8b0;
  code *pcStack_8a8;
  undefined8 uStack_8a0;
  long lStack_898;
  undefined8 *puStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  long lStack_7d8;
  undefined1 *puStack_7d0;
  undefined1 *puStack_7c8;
  undefined1 *puStack_7c0;
  undefined1 *puStack_7b8;
  undefined1 *puStack_7b0;
  undefined1 *puStack_7a8;
  undefined8 **ppuStack_7a0;
  code *pcStack_798;
  undefined8 uStack_790;
  long lStack_788;
  undefined8 *puStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  long lStack_6c8;
  undefined8 **ppuStack_680;
  code *pcStack_678;
  undefined8 uStack_670;
  long lStack_668;
  undefined8 *puStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined1 auStack_628 [128];
  long lStack_5a8;
  undefined1 *puStack_5a0;
  undefined1 *puStack_598;
  undefined1 *puStack_590;
  undefined1 *puStack_588;
  undefined1 *puStack_580;
  undefined1 *puStack_578;
  undefined8 **ppuStack_570;
  code *pcStack_568;
  undefined8 uStack_560;
  long lStack_558;
  undefined8 *puStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  long lStack_498;
  undefined1 *puStack_490;
  undefined1 *puStack_488;
  undefined1 *puStack_480;
  undefined1 *puStack_478;
  undefined1 *puStack_470;
  undefined1 *puStack_468;
  undefined8 **ppuStack_460;
  code *pcStack_458;
  undefined8 uStack_450;
  long lStack_448;
  undefined8 *puStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_388;
  undefined8 **ppuStack_340;
  code *pcStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2e8 [128];
  long lStack_268;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_158;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_100;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_100 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2fa0(*(undefined8 *)(lStack_108 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_105ac1654;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_210;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_210 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f60(*(undefined8 *)(lStack_218 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_330;
  pcStack_228 = FUN_105ac1744;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_230 = &puStack_120;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  puVar1 = auStack_2e8;
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    lVar9 = *plStack_320;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_320 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f00(*(undefined8 *)(lStack_328 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar1 = auStack_2e8;
      puVar2 = param_1;
      puVar6 = &uStack_330;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_450;
  pcStack_338 = FUN_105ac1834;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_340 = &ppuStack_230;
  _objc_retain(puVar6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_448 = 0;
  uStack_450 = 0;
  uStack_438 = 0;
  puStack_440 = (undefined8 *)0x0;
  uStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*puStack_440;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_440 != unaff_x23) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2fe0(*(undefined8 *)(lStack_448 + (long)unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (puVar2 != unaff_x24);
      puVar2 = param_1;
      puVar7 = &uStack_450;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(param_1);
  puVar2 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_560;
  pcStack_458 = FUN_105ac1954;
  lStack_498 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_490 = unaff_x24;
  puStack_488 = unaff_x23;
  puStack_480 = unaff_x22;
  puStack_478 = param_1;
  puStack_470 = puVar1;
  puStack_468 = (undefined1 *)puVar6;
  ppuStack_460 = &ppuStack_340;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_558 = 0;
  uStack_560 = 0;
  uStack_548 = 0;
  puStack_550 = (undefined8 *)0x0;
  uStack_538 = 0;
  uStack_540 = 0;
  uStack_528 = 0;
  uStack_530 = 0;
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_550;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_550 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c0f2f40(*(undefined8 *)(lStack_558 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar1 != unaff_x23);
      puVar1 = puVar2;
      puVar10 = &uStack_560;
      func_0x00010bf52a60();
      param_1 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_498) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_670;
  pcStack_568 = FUN_105ac1a4c;
  lStack_5a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_5a0 = unaff_x24;
  puStack_598 = unaff_x23;
  puStack_590 = unaff_x22;
  puStack_588 = param_1;
  puStack_580 = puVar2;
  puStack_578 = (undefined1 *)puVar7;
  ppuStack_570 = &ppuStack_460;
  _objc_retain(puVar10);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_668 = 0;
  uStack_670 = 0;
  uStack_658 = 0;
  puStack_660 = (undefined8 *)0x0;
  uStack_648 = 0;
  uStack_650 = 0;
  uStack_638 = 0;
  uStack_640 = 0;
  puVar2 = auStack_628;
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_660;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_660 != unaff_x22) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c0f2f80(*(undefined8 *)(lStack_668 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar3 != unaff_x23);
      puVar2 = auStack_628;
      puVar3 = puVar1;
      puVar6 = &uStack_670;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5a8) {
    return (undefined1 *)puVar10;
  }
  ___stack_chk_fail();
  pcStack_678 = FUN_105ac1b5c;
  lStack_6c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_680 = &ppuStack_570;
  _objc_retain(puVar6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_788 = 0;
  uStack_790 = 0;
  uStack_778 = 0;
  puStack_780 = (undefined8 *)0x0;
  uStack_768 = 0;
  uStack_770 = 0;
  uStack_758 = 0;
  uStack_760 = 0;
  puVar1 = (undefined1 *)puVar10;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*puStack_780;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_780 != unaff_x23) {
          _objc_enumerationMutation(puVar10);
        }
        func_0x00010c292e40(*(undefined8 *)(lStack_788 + (long)unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (puVar1 != unaff_x24);
      puVar1 = (undefined1 *)puVar10;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release(puVar10);
  puVar1 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6c8) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_798 = FUN_105ac1c7c;
  lStack_7d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_7d0 = unaff_x24;
  puStack_7c8 = unaff_x23;
  puStack_7c0 = unaff_x22;
  puStack_7b8 = (undefined1 *)puVar10;
  puStack_7b0 = puVar2;
  puStack_7a8 = (undefined1 *)puVar6;
  ppuStack_7a0 = &ppuStack_680;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_898 = 0;
  uStack_8a0 = 0;
  uStack_888 = 0;
  puStack_890 = (undefined8 *)0x0;
  uStack_878 = 0;
  uStack_880 = 0;
  uStack_868 = 0;
  uStack_870 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_890;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_890 != unaff_x22) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293980(*(undefined8 *)(lStack_898 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar2 != unaff_x23);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7d8) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_8a8 = FUN_105ac1d74;
  lStack_8e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_8b0 = &ppuStack_7a0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_9a8 = 0;
  uStack_9b0 = 0;
  uStack_998 = 0;
  puStack_9a0 = (undefined8 *)0x0;
  uStack_988 = 0;
  uStack_990 = 0;
  uStack_978 = 0;
  uStack_980 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_9a0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_9a0 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2934e0(*(undefined8 *)(lStack_9a8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8e8) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_9b8 = FUN_105ac1e64;
  lStack_9f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_9c0 = &ppuStack_8b0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ab8 = 0;
  uStack_ac0 = 0;
  uStack_aa8 = 0;
  puStack_ab0 = (undefined8 *)0x0;
  uStack_a98 = 0;
  uStack_aa0 = 0;
  uStack_a88 = 0;
  uStack_a90 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_ab0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_ab0 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c293020(*(undefined8 *)(lStack_ab8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9f8) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_ac8 = FUN_105ac1f54;
  lStack_b08 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_ad0 = &ppuStack_9c0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_bc8 = 0;
  uStack_bd0 = 0;
  uStack_bb8 = 0;
  puStack_bc0 = (undefined8 *)0x0;
  uStack_ba8 = 0;
  uStack_bb0 = 0;
  uStack_b98 = 0;
  uStack_ba0 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_bc0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_bc0 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2916c0(*(undefined8 *)(lStack_bc8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b08) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_bd8 = FUN_105ac2044;
  lStack_c18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c10 = unaff_x24;
  puStack_c08 = unaff_x23;
  puStack_c00 = unaff_x22;
  puStack_bf8 = (undefined1 *)puVar10;
  puStack_bf0 = puVar1;
  puStack_be8 = puVar2;
  ppuStack_be0 = &ppuStack_ad0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_cd8 = 0;
  uStack_ce0 = 0;
  uStack_cc8 = 0;
  puStack_cd0 = (undefined8 *)0x0;
  uStack_cb8 = 0;
  uStack_cc0 = 0;
  uStack_ca8 = 0;
  uStack_cb0 = 0;
  puVar1 = puVar3;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_cd0;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_cd0 != unaff_x22) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010c291020(*(undefined8 *)(lStack_cd8 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar1 != unaff_x23);
      puVar1 = puVar3;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c18) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_ce8 = FUN_105ac213c;
  lStack_d28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_cf0 = &ppuStack_be0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_de8 = 0;
  uStack_df0 = 0;
  uStack_dd8 = 0;
  puStack_de0 = (undefined8 *)0x0;
  uStack_dc8 = 0;
  uStack_dd0 = 0;
  uStack_db8 = 0;
  uStack_dc0 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_de0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_de0 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293ea0(*(undefined8 *)(lStack_de8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d28) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_df8 = FUN_105ac222c;
  lStack_e38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_e00 = &ppuStack_cf0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ef8 = 0;
  uStack_f00 = 0;
  uStack_ee8 = 0;
  puStack_ef0 = (undefined8 *)0x0;
  uStack_ed8 = 0;
  uStack_ee0 = 0;
  uStack_ec8 = 0;
  uStack_ed0 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_ef0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_ef0 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c294200(*(undefined8 *)(lStack_ef8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e38) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_f08 = FUN_105ac231c;
  lStack_f48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_f10 = &ppuStack_e00;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1008 = 0;
  uStack_1010 = 0;
  uStack_ff8 = 0;
  puStack_1000 = (undefined8 *)0x0;
  uStack_fe8 = 0;
  uStack_ff0 = 0;
  uStack_fd8 = 0;
  uStack_fe0 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1000;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1000 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293e80(*(undefined8 *)(lStack_1008 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f48) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_1120;
  pcStack_1018 = FUN_105ac240c;
  lStack_1058 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1020 = &ppuStack_f10;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1118 = 0;
  uStack_1120 = 0;
  uStack_1108 = 0;
  puStack_1110 = (undefined8 *)0x0;
  uStack_10f8 = 0;
  uStack_1100 = 0;
  uStack_10e8 = 0;
  uStack_10f0 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1110;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1110 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293ee0(*(undefined8 *)(lStack_1118 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      puVar6 = &uStack_1120;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1058) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_1230;
  pcStack_1128 = FUN_105ac24fc;
  lStack_1168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1160 = unaff_x24;
  puStack_1158 = unaff_x23;
  puStack_1150 = unaff_x22;
  puStack_1148 = (undefined1 *)puVar10;
  puStack_1140 = puVar3;
  puStack_1138 = puVar1;
  ppuStack_1130 = &ppuStack_1020;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1228 = 0;
  uStack_1230 = 0;
  uStack_1218 = 0;
  puStack_1220 = (undefined8 *)0x0;
  uStack_1208 = 0;
  uStack_1210 = 0;
  uStack_11f8 = 0;
  uStack_1200 = 0;
  puVar1 = auStack_11e8;
  uVar8 = 0x10;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_1220;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_1220 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2915c0(*(undefined8 *)(lStack_1228 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar3 != unaff_x23);
      puVar1 = auStack_11e8;
      uVar8 = 0x10;
      puVar3 = puVar2;
      puVar7 = &uStack_1230;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1168) {
    return puVar3;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_1280;
  pcStack_1238 = FUN_105ac25f4;
  puStack_1270 = unaff_x24;
  puStack_1268 = unaff_x23;
  puStack_1260 = unaff_x22;
  puStack_1258 = (undefined1 *)puVar10;
  puStack_1250 = puVar2;
  puStack_1248 = (undefined1 *)puVar6;
  ppuStack_1240 = &ppuStack_1130;
  _objc_retain(puVar7);
  _objc_retain(puVar1);
  _objc_retain(in_x6);
  puStack_1278 = PTR_PTR_1126ebc18;
  puStack_1280 = puVar3;
  _objc_msgSendSuper2(&puStack_1280,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined1 **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar4 + 8),puVar7);
    _objc_retain(puVar1);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x10);
    *(undefined1 **)((long)ppuVar4 + 0x10) = puVar1;
    _objc_release(uVar5);
    *(undefined8 *)((long)ppuVar4 + 0x18) = in_x5;
    *(undefined8 *)((long)ppuVar4 + 0x20) = uVar8;
    _objc_retain(in_x6);
    uVar8 = *(undefined8 *)((long)ppuVar4 + 0x28);
    *(undefined8 *)((long)ppuVar4 + 0x28) = in_x6;
    _objc_release(uVar8);
  }
  _objc_release(in_x6);
  _objc_release(puVar1);
  _objc_release(puVar7);
  return (undefined1 *)ppuVar4;
}



/* Entry: 105ac1654; end: 105ac1743; -[SCSpectaclesPairingListenerAnnouncer pairingDidFindBTPickerDevice] */

undefined1 * FUN_105ac1654(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar9;
  undefined8 *puVar10;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *puStack_1170;
  undefined *puStack_1168;
  undefined1 *puStack_1160;
  undefined1 *puStack_1158;
  undefined1 *puStack_1150;
  undefined1 *puStack_1148;
  undefined1 *puStack_1140;
  undefined1 *puStack_1138;
  undefined8 **ppuStack_1130;
  code *pcStack_1128;
  undefined8 uStack_1120;
  long lStack_1118;
  undefined8 *puStack_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  undefined1 auStack_10d8 [128];
  long lStack_1058;
  undefined1 *puStack_1050;
  undefined1 *puStack_1048;
  undefined1 *puStack_1040;
  undefined1 *puStack_1038;
  undefined1 *puStack_1030;
  undefined1 *puStack_1028;
  undefined8 **ppuStack_1020;
  code *pcStack_1018;
  undefined8 uStack_1010;
  long lStack_1008;
  undefined8 *puStack_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  long lStack_f48;
  undefined8 **ppuStack_f10;
  code *pcStack_f08;
  undefined8 uStack_f00;
  long lStack_ef8;
  undefined8 *puStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  long lStack_e38;
  undefined8 **ppuStack_e00;
  code *pcStack_df8;
  undefined8 uStack_df0;
  long lStack_de8;
  undefined8 *puStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  long lStack_d28;
  undefined8 **ppuStack_cf0;
  code *pcStack_ce8;
  undefined8 uStack_ce0;
  long lStack_cd8;
  undefined8 *puStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  long lStack_c18;
  undefined8 **ppuStack_be0;
  code *pcStack_bd8;
  undefined8 uStack_bd0;
  long lStack_bc8;
  undefined8 *puStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  long lStack_b08;
  undefined1 *puStack_b00;
  undefined1 *puStack_af8;
  undefined1 *puStack_af0;
  undefined1 *puStack_ae8;
  undefined1 *puStack_ae0;
  undefined1 *puStack_ad8;
  undefined8 **ppuStack_ad0;
  code *pcStack_ac8;
  undefined8 uStack_ac0;
  long lStack_ab8;
  undefined8 *puStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  long lStack_9f8;
  undefined8 **ppuStack_9c0;
  code *pcStack_9b8;
  undefined8 uStack_9b0;
  long lStack_9a8;
  undefined8 *puStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  long lStack_8e8;
  undefined8 **ppuStack_8b0;
  code *pcStack_8a8;
  undefined8 uStack_8a0;
  long lStack_898;
  undefined8 *puStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  long lStack_7d8;
  undefined8 **ppuStack_7a0;
  code *pcStack_798;
  undefined8 uStack_790;
  long lStack_788;
  undefined8 *puStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  long lStack_6c8;
  undefined1 *puStack_6c0;
  undefined1 *puStack_6b8;
  undefined1 *puStack_6b0;
  undefined1 *puStack_6a8;
  undefined1 *puStack_6a0;
  undefined1 *puStack_698;
  undefined8 **ppuStack_690;
  code *pcStack_688;
  undefined8 uStack_680;
  long lStack_678;
  undefined8 *puStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  long lStack_5b8;
  undefined8 **ppuStack_570;
  code *pcStack_568;
  undefined8 uStack_560;
  long lStack_558;
  undefined8 *puStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined1 auStack_518 [128];
  long lStack_498;
  undefined1 *puStack_490;
  undefined1 *puStack_488;
  undefined1 *puStack_480;
  undefined1 *puStack_478;
  undefined1 *puStack_470;
  undefined1 *puStack_468;
  undefined8 **ppuStack_460;
  code *pcStack_458;
  undefined8 uStack_450;
  long lStack_448;
  undefined8 *puStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_388;
  undefined1 *puStack_380;
  undefined1 *puStack_378;
  undefined1 *puStack_370;
  undefined1 *puStack_368;
  undefined1 *puStack_360;
  undefined1 *puStack_358;
  undefined8 **ppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  long lStack_338;
  undefined8 *puStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long lStack_278;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [128];
  long lStack_158;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_100;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_100 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f60(*(undefined8 *)(lStack_108 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = param_1;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_220;
  pcStack_118 = FUN_105ac1744;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  puVar1 = auStack_1d8;
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    lVar9 = *plStack_210;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_210 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f00(*(undefined8 *)(lStack_218 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar1 = auStack_1d8;
      puVar2 = param_1;
      puVar6 = &uStack_220;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_340;
  pcStack_228 = FUN_105ac1834;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_230 = &puStack_120;
  _objc_retain(puVar6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  puStack_330 = (undefined8 *)0x0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*puStack_330;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_330 != unaff_x23) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2fe0(*(undefined8 *)(lStack_338 + (long)unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (puVar2 != unaff_x24);
      puVar2 = param_1;
      puVar7 = &uStack_340;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(param_1);
  puVar2 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_450;
  pcStack_348 = FUN_105ac1954;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_380 = unaff_x24;
  puStack_378 = unaff_x23;
  puStack_370 = unaff_x22;
  puStack_368 = param_1;
  puStack_360 = puVar1;
  puStack_358 = (undefined1 *)puVar6;
  ppuStack_350 = &ppuStack_230;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_448 = 0;
  uStack_450 = 0;
  uStack_438 = 0;
  puStack_440 = (undefined8 *)0x0;
  uStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_440;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_440 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c0f2f40(*(undefined8 *)(lStack_448 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar1 != unaff_x23);
      puVar1 = puVar2;
      puVar10 = &uStack_450;
      func_0x00010bf52a60();
      param_1 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_560;
  pcStack_458 = FUN_105ac1a4c;
  lStack_498 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_490 = unaff_x24;
  puStack_488 = unaff_x23;
  puStack_480 = unaff_x22;
  puStack_478 = param_1;
  puStack_470 = puVar2;
  puStack_468 = (undefined1 *)puVar7;
  ppuStack_460 = &ppuStack_350;
  _objc_retain(puVar10);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_558 = 0;
  uStack_560 = 0;
  uStack_548 = 0;
  puStack_550 = (undefined8 *)0x0;
  uStack_538 = 0;
  uStack_540 = 0;
  uStack_528 = 0;
  uStack_530 = 0;
  puVar2 = auStack_518;
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_550;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_550 != unaff_x22) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c0f2f80(*(undefined8 *)(lStack_558 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar3 != unaff_x23);
      puVar2 = auStack_518;
      puVar3 = puVar1;
      puVar6 = &uStack_560;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_498) {
    return (undefined1 *)puVar10;
  }
  ___stack_chk_fail();
  pcStack_568 = FUN_105ac1b5c;
  lStack_5b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_570 = &ppuStack_460;
  _objc_retain(puVar6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_678 = 0;
  uStack_680 = 0;
  uStack_668 = 0;
  puStack_670 = (undefined8 *)0x0;
  uStack_658 = 0;
  uStack_660 = 0;
  uStack_648 = 0;
  uStack_650 = 0;
  puVar1 = (undefined1 *)puVar10;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*puStack_670;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_670 != unaff_x23) {
          _objc_enumerationMutation(puVar10);
        }
        func_0x00010c292e40(*(undefined8 *)(lStack_678 + (long)unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (puVar1 != unaff_x24);
      puVar1 = (undefined1 *)puVar10;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release(puVar10);
  puVar1 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5b8) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_688 = FUN_105ac1c7c;
  lStack_6c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_6c0 = unaff_x24;
  puStack_6b8 = unaff_x23;
  puStack_6b0 = unaff_x22;
  puStack_6a8 = (undefined1 *)puVar10;
  puStack_6a0 = puVar2;
  puStack_698 = (undefined1 *)puVar6;
  ppuStack_690 = &ppuStack_570;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_788 = 0;
  uStack_790 = 0;
  uStack_778 = 0;
  puStack_780 = (undefined8 *)0x0;
  uStack_768 = 0;
  uStack_770 = 0;
  uStack_758 = 0;
  uStack_760 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_780;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_780 != unaff_x22) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293980(*(undefined8 *)(lStack_788 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar2 != unaff_x23);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6c8) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_798 = FUN_105ac1d74;
  lStack_7d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_7a0 = &ppuStack_690;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_898 = 0;
  uStack_8a0 = 0;
  uStack_888 = 0;
  puStack_890 = (undefined8 *)0x0;
  uStack_878 = 0;
  uStack_880 = 0;
  uStack_868 = 0;
  uStack_870 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_890;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_890 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2934e0(*(undefined8 *)(lStack_898 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7d8) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_8a8 = FUN_105ac1e64;
  lStack_8e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_8b0 = &ppuStack_7a0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_9a8 = 0;
  uStack_9b0 = 0;
  uStack_998 = 0;
  puStack_9a0 = (undefined8 *)0x0;
  uStack_988 = 0;
  uStack_990 = 0;
  uStack_978 = 0;
  uStack_980 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_9a0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_9a0 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c293020(*(undefined8 *)(lStack_9a8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8e8) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_9b8 = FUN_105ac1f54;
  lStack_9f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_9c0 = &ppuStack_8b0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ab8 = 0;
  uStack_ac0 = 0;
  uStack_aa8 = 0;
  puStack_ab0 = (undefined8 *)0x0;
  uStack_a98 = 0;
  uStack_aa0 = 0;
  uStack_a88 = 0;
  uStack_a90 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_ab0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_ab0 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2916c0(*(undefined8 *)(lStack_ab8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9f8) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_ac8 = FUN_105ac2044;
  lStack_b08 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b00 = unaff_x24;
  puStack_af8 = unaff_x23;
  puStack_af0 = unaff_x22;
  puStack_ae8 = (undefined1 *)puVar10;
  puStack_ae0 = puVar1;
  puStack_ad8 = puVar2;
  ppuStack_ad0 = &ppuStack_9c0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_bc8 = 0;
  uStack_bd0 = 0;
  uStack_bb8 = 0;
  puStack_bc0 = (undefined8 *)0x0;
  uStack_ba8 = 0;
  uStack_bb0 = 0;
  uStack_b98 = 0;
  uStack_ba0 = 0;
  puVar1 = puVar3;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_bc0;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_bc0 != unaff_x22) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010c291020(*(undefined8 *)(lStack_bc8 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar1 != unaff_x23);
      puVar1 = puVar3;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b08) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_bd8 = FUN_105ac213c;
  lStack_c18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_be0 = &ppuStack_ad0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_cd8 = 0;
  uStack_ce0 = 0;
  uStack_cc8 = 0;
  puStack_cd0 = (undefined8 *)0x0;
  uStack_cb8 = 0;
  uStack_cc0 = 0;
  uStack_ca8 = 0;
  uStack_cb0 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_cd0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_cd0 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293ea0(*(undefined8 *)(lStack_cd8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c18) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_ce8 = FUN_105ac222c;
  lStack_d28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_cf0 = &ppuStack_be0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_de8 = 0;
  uStack_df0 = 0;
  uStack_dd8 = 0;
  puStack_de0 = (undefined8 *)0x0;
  uStack_dc8 = 0;
  uStack_dd0 = 0;
  uStack_db8 = 0;
  uStack_dc0 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_de0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_de0 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c294200(*(undefined8 *)(lStack_de8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d28) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_df8 = FUN_105ac231c;
  lStack_e38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_e00 = &ppuStack_cf0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ef8 = 0;
  uStack_f00 = 0;
  uStack_ee8 = 0;
  puStack_ef0 = (undefined8 *)0x0;
  uStack_ed8 = 0;
  uStack_ee0 = 0;
  uStack_ec8 = 0;
  uStack_ed0 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_ef0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_ef0 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293e80(*(undefined8 *)(lStack_ef8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e38) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_1010;
  pcStack_f08 = FUN_105ac240c;
  lStack_f48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_f10 = &ppuStack_e00;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1008 = 0;
  uStack_1010 = 0;
  uStack_ff8 = 0;
  puStack_1000 = (undefined8 *)0x0;
  uStack_fe8 = 0;
  uStack_ff0 = 0;
  uStack_fd8 = 0;
  uStack_fe0 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_1000;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_1000 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293ee0(*(undefined8 *)(lStack_1008 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      puVar6 = &uStack_1010;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f48) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_1120;
  pcStack_1018 = FUN_105ac24fc;
  lStack_1058 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1050 = unaff_x24;
  puStack_1048 = unaff_x23;
  puStack_1040 = unaff_x22;
  puStack_1038 = (undefined1 *)puVar10;
  puStack_1030 = puVar3;
  puStack_1028 = puVar1;
  ppuStack_1020 = &ppuStack_f10;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1118 = 0;
  uStack_1120 = 0;
  uStack_1108 = 0;
  puStack_1110 = (undefined8 *)0x0;
  uStack_10f8 = 0;
  uStack_1100 = 0;
  uStack_10e8 = 0;
  uStack_10f0 = 0;
  puVar1 = auStack_10d8;
  uVar8 = 0x10;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_1110;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_1110 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2915c0(*(undefined8 *)(lStack_1118 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar3 != unaff_x23);
      puVar1 = auStack_10d8;
      uVar8 = 0x10;
      puVar3 = puVar2;
      puVar7 = &uStack_1120;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1058) {
    return puVar3;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_1170;
  pcStack_1128 = FUN_105ac25f4;
  puStack_1160 = unaff_x24;
  puStack_1158 = unaff_x23;
  puStack_1150 = unaff_x22;
  puStack_1148 = (undefined1 *)puVar10;
  puStack_1140 = puVar2;
  puStack_1138 = (undefined1 *)puVar6;
  ppuStack_1130 = &ppuStack_1020;
  _objc_retain(puVar7);
  _objc_retain(puVar1);
  _objc_retain(in_x6);
  puStack_1168 = PTR_PTR_1126ebc18;
  puStack_1170 = puVar3;
  _objc_msgSendSuper2(&puStack_1170,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined1 **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar4 + 8),puVar7);
    _objc_retain(puVar1);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x10);
    *(undefined1 **)((long)ppuVar4 + 0x10) = puVar1;
    _objc_release(uVar5);
    *(undefined8 *)((long)ppuVar4 + 0x18) = in_x5;
    *(undefined8 *)((long)ppuVar4 + 0x20) = uVar8;
    _objc_retain(in_x6);
    uVar8 = *(undefined8 *)((long)ppuVar4 + 0x28);
    *(undefined8 *)((long)ppuVar4 + 0x28) = in_x6;
    _objc_release(uVar8);
  }
  _objc_release(in_x6);
  _objc_release(puVar1);
  _objc_release(puVar7);
  return (undefined1 *)ppuVar4;
}



/* Entry: 105ac1744; end: 105ac1833; -[SCSpectaclesPairingListenerAnnouncer pairingDidCancelBTPicker] */

undefined1 * FUN_105ac1744(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar9;
  undefined8 *puVar10;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *puStack_1060;
  undefined *puStack_1058;
  undefined1 *puStack_1050;
  undefined1 *puStack_1048;
  undefined1 *puStack_1040;
  undefined1 *puStack_1038;
  undefined1 *puStack_1030;
  undefined1 *puStack_1028;
  undefined8 **ppuStack_1020;
  code *pcStack_1018;
  undefined8 uStack_1010;
  long lStack_1008;
  undefined8 *puStack_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  undefined1 auStack_fc8 [128];
  long lStack_f48;
  undefined1 *puStack_f40;
  undefined1 *puStack_f38;
  undefined1 *puStack_f30;
  undefined1 *puStack_f28;
  undefined1 *puStack_f20;
  undefined1 *puStack_f18;
  undefined8 **ppuStack_f10;
  code *pcStack_f08;
  undefined8 uStack_f00;
  long lStack_ef8;
  undefined8 *puStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  long lStack_e38;
  undefined8 **ppuStack_e00;
  code *pcStack_df8;
  undefined8 uStack_df0;
  long lStack_de8;
  undefined8 *puStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  long lStack_d28;
  undefined8 **ppuStack_cf0;
  code *pcStack_ce8;
  undefined8 uStack_ce0;
  long lStack_cd8;
  undefined8 *puStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  long lStack_c18;
  undefined8 **ppuStack_be0;
  code *pcStack_bd8;
  undefined8 uStack_bd0;
  long lStack_bc8;
  undefined8 *puStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  long lStack_b08;
  undefined8 **ppuStack_ad0;
  code *pcStack_ac8;
  undefined8 uStack_ac0;
  long lStack_ab8;
  undefined8 *puStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  long lStack_9f8;
  undefined1 *puStack_9f0;
  undefined1 *puStack_9e8;
  undefined1 *puStack_9e0;
  undefined1 *puStack_9d8;
  undefined1 *puStack_9d0;
  undefined1 *puStack_9c8;
  undefined8 **ppuStack_9c0;
  code *pcStack_9b8;
  undefined8 uStack_9b0;
  long lStack_9a8;
  undefined8 *puStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  long lStack_8e8;
  undefined8 **ppuStack_8b0;
  code *pcStack_8a8;
  undefined8 uStack_8a0;
  long lStack_898;
  undefined8 *puStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  long lStack_7d8;
  undefined8 **ppuStack_7a0;
  code *pcStack_798;
  undefined8 uStack_790;
  long lStack_788;
  undefined8 *puStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  long lStack_6c8;
  undefined8 **ppuStack_690;
  code *pcStack_688;
  undefined8 uStack_680;
  long lStack_678;
  undefined8 *puStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  long lStack_5b8;
  undefined1 *puStack_5b0;
  undefined1 *puStack_5a8;
  undefined1 *puStack_5a0;
  undefined1 *puStack_598;
  undefined1 *puStack_590;
  undefined1 *puStack_588;
  undefined8 **ppuStack_580;
  code *pcStack_578;
  undefined8 uStack_570;
  long lStack_568;
  undefined8 *puStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  long lStack_4a8;
  undefined8 **ppuStack_460;
  code *pcStack_458;
  undefined8 uStack_450;
  long lStack_448;
  undefined8 *puStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined1 auStack_408 [128];
  long lStack_388;
  undefined1 *puStack_380;
  undefined1 *puStack_378;
  undefined1 *puStack_370;
  undefined1 *puStack_368;
  undefined1 *puStack_360;
  undefined1 *puStack_358;
  undefined8 **ppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  long lStack_338;
  undefined8 *puStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long lStack_278;
  undefined1 *puStack_270;
  undefined1 *puStack_268;
  undefined1 *puStack_260;
  undefined1 *puStack_258;
  undefined1 *puStack_250;
  undefined1 *puStack_248;
  undefined1 **ppuStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_168;
  undefined1 *puStack_120;
  code *pcStack_118;
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
  
  puVar6 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar2 = auStack_c8;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar9 = *plStack_100;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_100 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f00(*(undefined8 *)(lStack_108 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar2 = auStack_c8;
      puVar1 = param_1;
      puVar6 = &uStack_110;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_230;
  pcStack_118 = FUN_105ac1834;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  puStack_220 = (undefined8 *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*puStack_220;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_220 != unaff_x23) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2fe0(*(undefined8 *)(lStack_228 + (long)unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (puVar1 != unaff_x24);
      puVar1 = param_1;
      puVar7 = &uStack_230;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release(param_1);
  puVar1 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_340;
  pcStack_238 = FUN_105ac1954;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_270 = unaff_x24;
  puStack_268 = unaff_x23;
  puStack_260 = unaff_x22;
  puStack_258 = param_1;
  puStack_250 = puVar2;
  puStack_248 = (undefined1 *)puVar6;
  ppuStack_240 = &puStack_120;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  puStack_330 = (undefined8 *)0x0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_330;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_330 != unaff_x22) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c0f2f40(*(undefined8 *)(lStack_338 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar2 != unaff_x23);
      puVar2 = puVar1;
      puVar10 = &uStack_340;
      func_0x00010bf52a60();
      param_1 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_450;
  pcStack_348 = FUN_105ac1a4c;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_380 = unaff_x24;
  puStack_378 = unaff_x23;
  puStack_370 = unaff_x22;
  puStack_368 = param_1;
  puStack_360 = puVar1;
  puStack_358 = (undefined1 *)puVar7;
  ppuStack_350 = &ppuStack_240;
  _objc_retain(puVar10);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_448 = 0;
  uStack_450 = 0;
  uStack_438 = 0;
  puStack_440 = (undefined8 *)0x0;
  uStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  puVar1 = auStack_408;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_440;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_440 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c0f2f80(*(undefined8 *)(lStack_448 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar3 != unaff_x23);
      puVar1 = auStack_408;
      puVar3 = puVar2;
      puVar6 = &uStack_450;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return (undefined1 *)puVar10;
  }
  ___stack_chk_fail();
  pcStack_458 = FUN_105ac1b5c;
  lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_460 = &ppuStack_350;
  _objc_retain(puVar6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_568 = 0;
  uStack_570 = 0;
  uStack_558 = 0;
  puStack_560 = (undefined8 *)0x0;
  uStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  uStack_540 = 0;
  puVar2 = (undefined1 *)puVar10;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*puStack_560;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_560 != unaff_x23) {
          _objc_enumerationMutation(puVar10);
        }
        func_0x00010c292e40(*(undefined8 *)(lStack_568 + (long)unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (puVar2 != unaff_x24);
      puVar2 = (undefined1 *)puVar10;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(puVar10);
  puVar2 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a8) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_578 = FUN_105ac1c7c;
  lStack_5b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_5b0 = unaff_x24;
  puStack_5a8 = unaff_x23;
  puStack_5a0 = unaff_x22;
  puStack_598 = (undefined1 *)puVar10;
  puStack_590 = puVar1;
  puStack_588 = (undefined1 *)puVar6;
  ppuStack_580 = &ppuStack_460;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_678 = 0;
  uStack_680 = 0;
  uStack_668 = 0;
  puStack_670 = (undefined8 *)0x0;
  uStack_658 = 0;
  uStack_660 = 0;
  uStack_648 = 0;
  uStack_650 = 0;
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_670;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_670 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c293980(*(undefined8 *)(lStack_678 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar1 != unaff_x23);
      puVar1 = puVar2;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5b8) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_688 = FUN_105ac1d74;
  lStack_6c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_690 = &ppuStack_580;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_788 = 0;
  uStack_790 = 0;
  uStack_778 = 0;
  puStack_780 = (undefined8 *)0x0;
  uStack_768 = 0;
  uStack_770 = 0;
  uStack_758 = 0;
  uStack_760 = 0;
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_780;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_780 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c2934e0(*(undefined8 *)(lStack_788 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar1;
      func_0x00010bf52a60();
      puVar2 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6c8) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_798 = FUN_105ac1e64;
  lStack_7d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_7a0 = &ppuStack_690;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_898 = 0;
  uStack_8a0 = 0;
  uStack_888 = 0;
  puStack_890 = (undefined8 *)0x0;
  uStack_878 = 0;
  uStack_880 = 0;
  uStack_868 = 0;
  uStack_870 = 0;
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_890;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_890 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293020(*(undefined8 *)(lStack_898 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar1;
      func_0x00010bf52a60();
      puVar2 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7d8) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_8a8 = FUN_105ac1f54;
  lStack_8e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_8b0 = &ppuStack_7a0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_9a8 = 0;
  uStack_9b0 = 0;
  uStack_998 = 0;
  puStack_9a0 = (undefined8 *)0x0;
  uStack_988 = 0;
  uStack_990 = 0;
  uStack_978 = 0;
  uStack_980 = 0;
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_9a0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_9a0 != puVar10) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c2916c0(*(undefined8 *)(lStack_9a8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar1;
      func_0x00010bf52a60();
      puVar2 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8e8) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_9b8 = FUN_105ac2044;
  lStack_9f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_9f0 = unaff_x24;
  puStack_9e8 = unaff_x23;
  puStack_9e0 = unaff_x22;
  puStack_9d8 = (undefined1 *)puVar10;
  puStack_9d0 = puVar2;
  puStack_9c8 = puVar1;
  ppuStack_9c0 = &ppuStack_8b0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ab8 = 0;
  uStack_ac0 = 0;
  uStack_aa8 = 0;
  puStack_ab0 = (undefined8 *)0x0;
  uStack_a98 = 0;
  uStack_aa0 = 0;
  uStack_a88 = 0;
  uStack_a90 = 0;
  puVar2 = puVar3;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_ab0;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_ab0 != unaff_x22) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010c291020(*(undefined8 *)(lStack_ab8 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar2 != unaff_x23);
      puVar2 = puVar3;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9f8) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_ac8 = FUN_105ac213c;
  lStack_b08 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_ad0 = &ppuStack_9c0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_bc8 = 0;
  uStack_bd0 = 0;
  uStack_bb8 = 0;
  puStack_bc0 = (undefined8 *)0x0;
  uStack_ba8 = 0;
  uStack_bb0 = 0;
  uStack_b98 = 0;
  uStack_ba0 = 0;
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_bc0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_bc0 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c293ea0(*(undefined8 *)(lStack_bc8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = puVar2;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b08) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_bd8 = FUN_105ac222c;
  lStack_c18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_be0 = &ppuStack_ad0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_cd8 = 0;
  uStack_ce0 = 0;
  uStack_cc8 = 0;
  puStack_cd0 = (undefined8 *)0x0;
  uStack_cb8 = 0;
  uStack_cc0 = 0;
  uStack_ca8 = 0;
  uStack_cb0 = 0;
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_cd0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_cd0 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c294200(*(undefined8 *)(lStack_cd8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = puVar2;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c18) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_ce8 = FUN_105ac231c;
  lStack_d28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_cf0 = &ppuStack_be0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_de8 = 0;
  uStack_df0 = 0;
  uStack_dd8 = 0;
  puStack_de0 = (undefined8 *)0x0;
  uStack_dc8 = 0;
  uStack_dd0 = 0;
  uStack_db8 = 0;
  uStack_dc0 = 0;
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_de0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_de0 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c293e80(*(undefined8 *)(lStack_de8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = puVar2;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d28) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_f00;
  pcStack_df8 = FUN_105ac240c;
  lStack_e38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_e00 = &ppuStack_cf0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ef8 = 0;
  uStack_f00 = 0;
  uStack_ee8 = 0;
  puStack_ef0 = (undefined8 *)0x0;
  uStack_ed8 = 0;
  uStack_ee0 = 0;
  uStack_ec8 = 0;
  uStack_ed0 = 0;
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    puVar10 = (undefined8 *)*puStack_ef0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_ef0 != puVar10) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c293ee0(*(undefined8 *)(lStack_ef8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = puVar2;
      puVar6 = &uStack_f00;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e38) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_1010;
  pcStack_f08 = FUN_105ac24fc;
  lStack_f48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f40 = unaff_x24;
  puStack_f38 = unaff_x23;
  puStack_f30 = unaff_x22;
  puStack_f28 = (undefined1 *)puVar10;
  puStack_f20 = puVar3;
  puStack_f18 = puVar2;
  ppuStack_f10 = &ppuStack_e00;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1008 = 0;
  uStack_1010 = 0;
  uStack_ff8 = 0;
  puStack_1000 = (undefined8 *)0x0;
  uStack_fe8 = 0;
  uStack_ff0 = 0;
  uStack_fd8 = 0;
  uStack_fe0 = 0;
  puVar2 = auStack_fc8;
  uVar8 = 0x10;
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_1000;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_1000 != unaff_x22) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c2915c0(*(undefined8 *)(lStack_1008 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar3 != unaff_x23);
      puVar2 = auStack_fc8;
      uVar8 = 0x10;
      puVar3 = puVar1;
      puVar7 = &uStack_1010;
      func_0x00010bf52a60();
      puVar10 = (undefined8 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f48) {
    return puVar3;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_1060;
  pcStack_1018 = FUN_105ac25f4;
  puStack_1050 = unaff_x24;
  puStack_1048 = unaff_x23;
  puStack_1040 = unaff_x22;
  puStack_1038 = (undefined1 *)puVar10;
  puStack_1030 = puVar1;
  puStack_1028 = (undefined1 *)puVar6;
  ppuStack_1020 = &ppuStack_f10;
  _objc_retain(puVar7);
  _objc_retain(puVar2);
  _objc_retain(in_x6);
  puStack_1058 = PTR_PTR_1126ebc18;
  puStack_1060 = puVar3;
  _objc_msgSendSuper2(&puStack_1060,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined1 **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar4 + 8),puVar7);
    _objc_retain(puVar2);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x10);
    *(undefined1 **)((long)ppuVar4 + 0x10) = puVar2;
    _objc_release(uVar5);
    *(undefined8 *)((long)ppuVar4 + 0x18) = in_x5;
    *(undefined8 *)((long)ppuVar4 + 0x20) = uVar8;
    _objc_retain(in_x6);
    uVar8 = *(undefined8 *)((long)ppuVar4 + 0x28);
    *(undefined8 *)((long)ppuVar4 + 0x28) = in_x6;
    _objc_release(uVar8);
  }
  _objc_release(in_x6);
  _objc_release(puVar2);
  _objc_release(puVar7);
  return (undefined1 *)ppuVar4;
}



/* Entry: 105ac1834; end: 105ac1953; -[SCSpectaclesPairingListenerAnnouncer pairingDidSucceedWithDeviceInformation:alreadyPaired:] */

undefined1 *
FUN_105ac1834(undefined1 *param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *puStack_f50;
  undefined *puStack_f48;
  undefined1 *puStack_f40;
  undefined1 *puStack_f38;
  undefined1 *puStack_f30;
  undefined1 *puStack_f28;
  undefined1 *puStack_f20;
  undefined1 *puStack_f18;
  undefined8 **ppuStack_f10;
  code *pcStack_f08;
  undefined8 uStack_f00;
  long lStack_ef8;
  undefined8 *puStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  undefined1 auStack_eb8 [128];
  long lStack_e38;
  undefined1 *puStack_e30;
  undefined1 *puStack_e28;
  undefined1 *puStack_e20;
  undefined1 *puStack_e18;
  undefined1 *puStack_e10;
  undefined1 *puStack_e08;
  undefined8 **ppuStack_e00;
  code *pcStack_df8;
  undefined8 uStack_df0;
  long lStack_de8;
  undefined8 *puStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  long lStack_d28;
  undefined8 **ppuStack_cf0;
  code *pcStack_ce8;
  undefined8 uStack_ce0;
  long lStack_cd8;
  undefined8 *puStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  long lStack_c18;
  undefined8 **ppuStack_be0;
  code *pcStack_bd8;
  undefined8 uStack_bd0;
  long lStack_bc8;
  undefined8 *puStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  long lStack_b08;
  undefined8 **ppuStack_ad0;
  code *pcStack_ac8;
  undefined8 uStack_ac0;
  long lStack_ab8;
  undefined8 *puStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  long lStack_9f8;
  undefined8 **ppuStack_9c0;
  code *pcStack_9b8;
  undefined8 uStack_9b0;
  long lStack_9a8;
  undefined8 *puStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  long lStack_8e8;
  undefined1 *puStack_8e0;
  undefined1 *puStack_8d8;
  undefined1 *puStack_8d0;
  undefined1 *puStack_8c8;
  undefined1 *puStack_8c0;
  undefined1 *puStack_8b8;
  undefined8 **ppuStack_8b0;
  code *pcStack_8a8;
  undefined8 uStack_8a0;
  long lStack_898;
  undefined8 *puStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  long lStack_7d8;
  undefined8 **ppuStack_7a0;
  code *pcStack_798;
  undefined8 uStack_790;
  long lStack_788;
  undefined8 *puStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  long lStack_6c8;
  undefined8 **ppuStack_690;
  code *pcStack_688;
  undefined8 uStack_680;
  long lStack_678;
  undefined8 *puStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  long lStack_5b8;
  undefined8 **ppuStack_580;
  code *pcStack_578;
  undefined8 uStack_570;
  long lStack_568;
  undefined8 *puStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  long lStack_4a8;
  undefined1 *puStack_4a0;
  undefined1 *puStack_498;
  undefined1 *puStack_490;
  undefined1 *puStack_488;
  undefined1 *puStack_480;
  undefined1 *puStack_478;
  undefined8 **ppuStack_470;
  code *pcStack_468;
  undefined8 uStack_460;
  long lStack_458;
  undefined8 *puStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long lStack_398;
  undefined8 **ppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  long lStack_338;
  undefined8 *puStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 auStack_2f8 [128];
  long lStack_278;
  undefined1 *puStack_270;
  undefined1 *puStack_268;
  undefined1 *puStack_260;
  undefined1 *puStack_258;
  undefined1 *puStack_250;
  undefined1 *puStack_248;
  undefined1 **ppuStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_168;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined8 uStack_140;
  undefined1 *puStack_138;
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
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  puStack_110 = (undefined8 *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*puStack_110;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_110 != unaff_x23) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2fe0(*(undefined8 *)(lStack_118 + (long)unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (puVar1 != unaff_x24);
      puVar1 = param_1;
      puVar6 = &uStack_120;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release(param_1);
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar9 = &uStack_230;
  pcStack_128 = FUN_105ac1954;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = unaff_x22;
  puStack_148 = param_1;
  uStack_140 = param_4;
  puStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  puStack_220 = (undefined8 *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_220;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_220 != unaff_x22) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c0f2f40(*(undefined8 *)(lStack_228 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar2 != unaff_x23);
      puVar2 = puVar1;
      puVar9 = &uStack_230;
      func_0x00010bf52a60();
      param_1 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_340;
  pcStack_238 = FUN_105ac1a4c;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_270 = unaff_x24;
  puStack_268 = unaff_x23;
  puStack_260 = unaff_x22;
  puStack_258 = param_1;
  puStack_250 = puVar1;
  puStack_248 = (undefined1 *)puVar6;
  ppuStack_240 = &puStack_130;
  _objc_retain(puVar9);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  puStack_330 = (undefined8 *)0x0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  puVar1 = auStack_2f8;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_330;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_330 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c0f2f80(*(undefined8 *)(lStack_338 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar3 != unaff_x23);
      puVar1 = auStack_2f8;
      puVar3 = puVar2;
      puVar7 = &uStack_340;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return (undefined1 *)puVar9;
  }
  ___stack_chk_fail();
  pcStack_348 = FUN_105ac1b5c;
  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_350 = &ppuStack_240;
  _objc_retain(puVar7);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_458 = 0;
  uStack_460 = 0;
  uStack_448 = 0;
  puStack_450 = (undefined8 *)0x0;
  uStack_438 = 0;
  uStack_440 = 0;
  uStack_428 = 0;
  uStack_430 = 0;
  puVar2 = (undefined1 *)puVar9;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*puStack_450;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_450 != unaff_x23) {
          _objc_enumerationMutation(puVar9);
        }
        func_0x00010c292e40(*(undefined8 *)(lStack_458 + (long)unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (puVar2 != unaff_x24);
      puVar2 = (undefined1 *)puVar9;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(puVar9);
  puVar2 = (undefined1 *)puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_398) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_468 = FUN_105ac1c7c;
  lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_4a0 = unaff_x24;
  puStack_498 = unaff_x23;
  puStack_490 = unaff_x22;
  puStack_488 = (undefined1 *)puVar9;
  puStack_480 = puVar1;
  puStack_478 = (undefined1 *)puVar7;
  ppuStack_470 = &ppuStack_350;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_568 = 0;
  uStack_570 = 0;
  uStack_558 = 0;
  puStack_560 = (undefined8 *)0x0;
  uStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  uStack_540 = 0;
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_560;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_560 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c293980(*(undefined8 *)(lStack_568 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar1 != unaff_x23);
      puVar1 = puVar2;
      func_0x00010bf52a60();
      puVar9 = (undefined8 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a8) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_578 = FUN_105ac1d74;
  lStack_5b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_580 = &ppuStack_470;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_678 = 0;
  uStack_680 = 0;
  uStack_668 = 0;
  puStack_670 = (undefined8 *)0x0;
  uStack_658 = 0;
  uStack_660 = 0;
  uStack_648 = 0;
  uStack_650 = 0;
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar9 = (undefined8 *)*puStack_670;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_670 != puVar9) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c2934e0(*(undefined8 *)(lStack_678 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar1;
      func_0x00010bf52a60();
      puVar2 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5b8) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_688 = FUN_105ac1e64;
  lStack_6c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_690 = &ppuStack_580;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_788 = 0;
  uStack_790 = 0;
  uStack_778 = 0;
  puStack_780 = (undefined8 *)0x0;
  uStack_768 = 0;
  uStack_770 = 0;
  uStack_758 = 0;
  uStack_760 = 0;
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar9 = (undefined8 *)*puStack_780;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_780 != puVar9) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293020(*(undefined8 *)(lStack_788 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar1;
      func_0x00010bf52a60();
      puVar2 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6c8) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_798 = FUN_105ac1f54;
  lStack_7d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_7a0 = &ppuStack_690;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_898 = 0;
  uStack_8a0 = 0;
  uStack_888 = 0;
  puStack_890 = (undefined8 *)0x0;
  uStack_878 = 0;
  uStack_880 = 0;
  uStack_868 = 0;
  uStack_870 = 0;
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar9 = (undefined8 *)*puStack_890;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_890 != puVar9) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c2916c0(*(undefined8 *)(lStack_898 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar1;
      func_0x00010bf52a60();
      puVar2 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7d8) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_8a8 = FUN_105ac2044;
  lStack_8e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_8e0 = unaff_x24;
  puStack_8d8 = unaff_x23;
  puStack_8d0 = unaff_x22;
  puStack_8c8 = (undefined1 *)puVar9;
  puStack_8c0 = puVar2;
  puStack_8b8 = puVar1;
  ppuStack_8b0 = &ppuStack_7a0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_9a8 = 0;
  uStack_9b0 = 0;
  uStack_998 = 0;
  puStack_9a0 = (undefined8 *)0x0;
  uStack_988 = 0;
  uStack_990 = 0;
  uStack_978 = 0;
  uStack_980 = 0;
  puVar1 = puVar3;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_9a0;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_9a0 != unaff_x22) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010c291020(*(undefined8 *)(lStack_9a8 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar1 != unaff_x23);
      puVar1 = puVar3;
      func_0x00010bf52a60();
      puVar9 = (undefined8 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8e8) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_9b8 = FUN_105ac213c;
  lStack_9f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_9c0 = &ppuStack_8b0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ab8 = 0;
  uStack_ac0 = 0;
  uStack_aa8 = 0;
  puStack_ab0 = (undefined8 *)0x0;
  uStack_a98 = 0;
  uStack_aa0 = 0;
  uStack_a88 = 0;
  uStack_a90 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar9 = (undefined8 *)*puStack_ab0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_ab0 != puVar9) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293ea0(*(undefined8 *)(lStack_ab8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9f8) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_ac8 = FUN_105ac222c;
  lStack_b08 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_ad0 = &ppuStack_9c0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_bc8 = 0;
  uStack_bd0 = 0;
  uStack_bb8 = 0;
  puStack_bc0 = (undefined8 *)0x0;
  uStack_ba8 = 0;
  uStack_bb0 = 0;
  uStack_b98 = 0;
  uStack_ba0 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar9 = (undefined8 *)*puStack_bc0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_bc0 != puVar9) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c294200(*(undefined8 *)(lStack_bc8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b08) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_bd8 = FUN_105ac231c;
  lStack_c18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_be0 = &ppuStack_ad0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_cd8 = 0;
  uStack_ce0 = 0;
  uStack_cc8 = 0;
  puStack_cd0 = (undefined8 *)0x0;
  uStack_cb8 = 0;
  uStack_cc0 = 0;
  uStack_ca8 = 0;
  uStack_cb0 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar9 = (undefined8 *)*puStack_cd0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_cd0 != puVar9) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293e80(*(undefined8 *)(lStack_cd8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c18) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_df0;
  pcStack_ce8 = FUN_105ac240c;
  lStack_d28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_cf0 = &ppuStack_be0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_de8 = 0;
  uStack_df0 = 0;
  uStack_dd8 = 0;
  puStack_de0 = (undefined8 *)0x0;
  uStack_dc8 = 0;
  uStack_dd0 = 0;
  uStack_db8 = 0;
  uStack_dc0 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar9 = (undefined8 *)*puStack_de0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_de0 != puVar9) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293ee0(*(undefined8 *)(lStack_de8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      puVar6 = &uStack_df0;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d28) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_f00;
  pcStack_df8 = FUN_105ac24fc;
  lStack_e38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e30 = unaff_x24;
  puStack_e28 = unaff_x23;
  puStack_e20 = unaff_x22;
  puStack_e18 = (undefined1 *)puVar9;
  puStack_e10 = puVar3;
  puStack_e08 = puVar1;
  ppuStack_e00 = &ppuStack_cf0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ef8 = 0;
  uStack_f00 = 0;
  uStack_ee8 = 0;
  puStack_ef0 = (undefined8 *)0x0;
  uStack_ed8 = 0;
  uStack_ee0 = 0;
  uStack_ec8 = 0;
  uStack_ed0 = 0;
  puVar1 = auStack_eb8;
  uVar8 = 0x10;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_ef0;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_ef0 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2915c0(*(undefined8 *)(lStack_ef8 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar3 != unaff_x23);
      puVar1 = auStack_eb8;
      uVar8 = 0x10;
      puVar3 = puVar2;
      puVar7 = &uStack_f00;
      func_0x00010bf52a60();
      puVar9 = (undefined8 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e38) {
    return puVar3;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_f50;
  pcStack_f08 = FUN_105ac25f4;
  puStack_f40 = unaff_x24;
  puStack_f38 = unaff_x23;
  puStack_f30 = unaff_x22;
  puStack_f28 = (undefined1 *)puVar9;
  puStack_f20 = puVar2;
  puStack_f18 = (undefined1 *)puVar6;
  ppuStack_f10 = &ppuStack_e00;
  _objc_retain(puVar7);
  _objc_retain(puVar1);
  _objc_retain(param_7);
  puStack_f48 = PTR_PTR_1126ebc18;
  puStack_f50 = puVar3;
  _objc_msgSendSuper2(&puStack_f50,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined1 **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar4 + 8),puVar7);
    _objc_retain(puVar1);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x10);
    *(undefined1 **)((long)ppuVar4 + 0x10) = puVar1;
    _objc_release(uVar5);
    *(undefined8 *)((long)ppuVar4 + 0x18) = param_6;
    *(undefined8 *)((long)ppuVar4 + 0x20) = uVar8;
    _objc_retain(param_7);
    uVar8 = *(undefined8 *)((long)ppuVar4 + 0x28);
    *(undefined8 *)((long)ppuVar4 + 0x28) = param_7;
    _objc_release(uVar8);
  }
  _objc_release(param_7);
  _objc_release(puVar1);
  _objc_release(puVar7);
  return (undefined1 *)ppuVar4;
}



/* Entry: 105ac1954; end: 105ac1a4b; -[SCSpectaclesPairingListenerAnnouncer pairingDidFail:] */

undefined1 * FUN_105ac1954(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 *puVar9;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *puStack_e30;
  undefined *puStack_e28;
  undefined1 *puStack_e20;
  undefined1 *puStack_e18;
  undefined1 *puStack_e10;
  undefined1 *puStack_e08;
  undefined1 *puStack_e00;
  undefined1 *puStack_df8;
  undefined8 **ppuStack_df0;
  code *pcStack_de8;
  undefined8 uStack_de0;
  long lStack_dd8;
  undefined8 *puStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined1 auStack_d98 [128];
  long lStack_d18;
  undefined1 *puStack_d10;
  undefined1 *puStack_d08;
  undefined1 *puStack_d00;
  undefined1 *puStack_cf8;
  undefined1 *puStack_cf0;
  undefined1 *puStack_ce8;
  undefined8 **ppuStack_ce0;
  code *pcStack_cd8;
  undefined8 uStack_cd0;
  long lStack_cc8;
  undefined8 *puStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  long lStack_c08;
  undefined8 **ppuStack_bd0;
  code *pcStack_bc8;
  undefined8 uStack_bc0;
  long lStack_bb8;
  undefined8 *puStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  long lStack_af8;
  undefined8 **ppuStack_ac0;
  code *pcStack_ab8;
  undefined8 uStack_ab0;
  long lStack_aa8;
  undefined8 *puStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  long lStack_9e8;
  undefined8 **ppuStack_9b0;
  code *pcStack_9a8;
  undefined8 uStack_9a0;
  long lStack_998;
  undefined8 *puStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  long lStack_8d8;
  undefined8 **ppuStack_8a0;
  code *pcStack_898;
  undefined8 uStack_890;
  long lStack_888;
  undefined8 *puStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  long lStack_7c8;
  undefined1 *puStack_7c0;
  undefined1 *puStack_7b8;
  undefined1 *puStack_7b0;
  undefined1 *puStack_7a8;
  undefined1 *puStack_7a0;
  undefined1 *puStack_798;
  undefined8 **ppuStack_790;
  code *pcStack_788;
  undefined8 uStack_780;
  long lStack_778;
  undefined8 *puStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  long lStack_6b8;
  undefined8 **ppuStack_680;
  code *pcStack_678;
  undefined8 uStack_670;
  long lStack_668;
  undefined8 *puStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  long lStack_5a8;
  undefined8 **ppuStack_570;
  code *pcStack_568;
  undefined8 uStack_560;
  long lStack_558;
  undefined8 *puStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  long lStack_498;
  undefined8 **ppuStack_460;
  code *pcStack_458;
  undefined8 uStack_450;
  long lStack_448;
  undefined8 *puStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_388;
  undefined1 *puStack_380;
  undefined1 *puStack_378;
  undefined1 *puStack_370;
  undefined1 *puStack_368;
  undefined1 *puStack_360;
  undefined1 *puStack_358;
  undefined8 **ppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  long lStack_338;
  undefined8 *puStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long lStack_278;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [128];
  long lStack_158;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar9 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  puStack_100 = (undefined8 *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_100;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_100 != unaff_x22) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f40(*(undefined8 *)(lStack_108 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar1 != unaff_x23);
      puVar1 = param_1;
      puVar9 = &uStack_110;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_220;
  pcStack_118 = FUN_105ac1a4c;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  puStack_210 = (undefined8 *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  puVar1 = auStack_1d8;
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_210;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_210 != unaff_x22) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f80(*(undefined8 *)(lStack_218 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar2 != unaff_x23);
      puVar1 = auStack_1d8;
      puVar2 = param_1;
      puVar6 = &uStack_220;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return (undefined1 *)puVar9;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_105ac1b5c;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_230 = &puStack_120;
  _objc_retain(puVar6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  puStack_330 = (undefined8 *)0x0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  puVar2 = (undefined1 *)puVar9;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*puStack_330;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_330 != unaff_x23) {
          _objc_enumerationMutation(puVar9);
        }
        func_0x00010c292e40(*(undefined8 *)(lStack_338 + (long)unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (puVar2 != unaff_x24);
      puVar2 = (undefined1 *)puVar9;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(puVar9);
  puVar2 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_348 = FUN_105ac1c7c;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_380 = unaff_x24;
  puStack_378 = unaff_x23;
  puStack_370 = unaff_x22;
  puStack_368 = (undefined1 *)puVar9;
  puStack_360 = puVar1;
  puStack_358 = (undefined1 *)puVar6;
  ppuStack_350 = &ppuStack_230;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_448 = 0;
  uStack_450 = 0;
  uStack_438 = 0;
  puStack_440 = (undefined8 *)0x0;
  uStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_440;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_440 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c293980(*(undefined8 *)(lStack_448 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar1 != unaff_x23);
      puVar1 = puVar2;
      func_0x00010bf52a60();
      puVar9 = (undefined8 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_458 = FUN_105ac1d74;
  lStack_498 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_460 = &ppuStack_350;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_558 = 0;
  uStack_560 = 0;
  uStack_548 = 0;
  puStack_550 = (undefined8 *)0x0;
  uStack_538 = 0;
  uStack_540 = 0;
  uStack_528 = 0;
  uStack_530 = 0;
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar9 = (undefined8 *)*puStack_550;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_550 != puVar9) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c2934e0(*(undefined8 *)(lStack_558 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar1;
      func_0x00010bf52a60();
      puVar2 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_498) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_568 = FUN_105ac1e64;
  lStack_5a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_570 = &ppuStack_460;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_668 = 0;
  uStack_670 = 0;
  uStack_658 = 0;
  puStack_660 = (undefined8 *)0x0;
  uStack_648 = 0;
  uStack_650 = 0;
  uStack_638 = 0;
  uStack_640 = 0;
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar9 = (undefined8 *)*puStack_660;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_660 != puVar9) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293020(*(undefined8 *)(lStack_668 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar1;
      func_0x00010bf52a60();
      puVar2 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5a8) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_678 = FUN_105ac1f54;
  lStack_6b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_680 = &ppuStack_570;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_778 = 0;
  uStack_780 = 0;
  uStack_768 = 0;
  puStack_770 = (undefined8 *)0x0;
  uStack_758 = 0;
  uStack_760 = 0;
  uStack_748 = 0;
  uStack_750 = 0;
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    puVar9 = (undefined8 *)*puStack_770;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_770 != puVar9) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c2916c0(*(undefined8 *)(lStack_778 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar1;
      func_0x00010bf52a60();
      puVar2 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6b8) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_788 = FUN_105ac2044;
  lStack_7c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_7c0 = unaff_x24;
  puStack_7b8 = unaff_x23;
  puStack_7b0 = unaff_x22;
  puStack_7a8 = (undefined1 *)puVar9;
  puStack_7a0 = puVar2;
  puStack_798 = puVar1;
  ppuStack_790 = &ppuStack_680;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_888 = 0;
  uStack_890 = 0;
  uStack_878 = 0;
  puStack_880 = (undefined8 *)0x0;
  uStack_868 = 0;
  uStack_870 = 0;
  uStack_858 = 0;
  uStack_860 = 0;
  puVar1 = puVar3;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_880;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_880 != unaff_x22) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010c291020(*(undefined8 *)(lStack_888 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar1 != unaff_x23);
      puVar1 = puVar3;
      func_0x00010bf52a60();
      puVar9 = (undefined8 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7c8) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_898 = FUN_105ac213c;
  lStack_8d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_8a0 = &ppuStack_790;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_998 = 0;
  uStack_9a0 = 0;
  uStack_988 = 0;
  puStack_990 = (undefined8 *)0x0;
  uStack_978 = 0;
  uStack_980 = 0;
  uStack_968 = 0;
  uStack_970 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar9 = (undefined8 *)*puStack_990;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_990 != puVar9) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293ea0(*(undefined8 *)(lStack_998 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8d8) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_9a8 = FUN_105ac222c;
  lStack_9e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_9b0 = &ppuStack_8a0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_aa8 = 0;
  uStack_ab0 = 0;
  uStack_a98 = 0;
  puStack_aa0 = (undefined8 *)0x0;
  uStack_a88 = 0;
  uStack_a90 = 0;
  uStack_a78 = 0;
  uStack_a80 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar9 = (undefined8 *)*puStack_aa0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_aa0 != puVar9) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c294200(*(undefined8 *)(lStack_aa8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9e8) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_ab8 = FUN_105ac231c;
  lStack_af8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_ac0 = &ppuStack_9b0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_bb8 = 0;
  uStack_bc0 = 0;
  uStack_ba8 = 0;
  puStack_bb0 = (undefined8 *)0x0;
  uStack_b98 = 0;
  uStack_ba0 = 0;
  uStack_b88 = 0;
  uStack_b90 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar9 = (undefined8 *)*puStack_bb0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_bb0 != puVar9) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293e80(*(undefined8 *)(lStack_bb8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_af8) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_cd0;
  pcStack_bc8 = FUN_105ac240c;
  lStack_c08 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_bd0 = &ppuStack_ac0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_cc8 = 0;
  uStack_cd0 = 0;
  uStack_cb8 = 0;
  puStack_cc0 = (undefined8 *)0x0;
  uStack_ca8 = 0;
  uStack_cb0 = 0;
  uStack_c98 = 0;
  uStack_ca0 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    puVar9 = (undefined8 *)*puStack_cc0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined8 *)*puStack_cc0 != puVar9) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293ee0(*(undefined8 *)(lStack_cc8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar2 != unaff_x22);
      puVar2 = puVar1;
      puVar6 = &uStack_cd0;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c08) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_de0;
  pcStack_cd8 = FUN_105ac24fc;
  lStack_d18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d10 = unaff_x24;
  puStack_d08 = unaff_x23;
  puStack_d00 = unaff_x22;
  puStack_cf8 = (undefined1 *)puVar9;
  puStack_cf0 = puVar3;
  puStack_ce8 = puVar1;
  ppuStack_ce0 = &ppuStack_bd0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_dd8 = 0;
  uStack_de0 = 0;
  uStack_dc8 = 0;
  puStack_dd0 = (undefined8 *)0x0;
  uStack_db8 = 0;
  uStack_dc0 = 0;
  uStack_da8 = 0;
  uStack_db0 = 0;
  puVar1 = auStack_d98;
  uVar8 = 0x10;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_dd0;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_dd0 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2915c0(*(undefined8 *)(lStack_dd8 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar3 != unaff_x23);
      puVar1 = auStack_d98;
      uVar8 = 0x10;
      puVar3 = puVar2;
      puVar7 = &uStack_de0;
      func_0x00010bf52a60();
      puVar9 = (undefined8 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d18) {
    return puVar3;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_e30;
  pcStack_de8 = FUN_105ac25f4;
  puStack_e20 = unaff_x24;
  puStack_e18 = unaff_x23;
  puStack_e10 = unaff_x22;
  puStack_e08 = (undefined1 *)puVar9;
  puStack_e00 = puVar2;
  puStack_df8 = (undefined1 *)puVar6;
  ppuStack_df0 = &ppuStack_ce0;
  _objc_retain(puVar7);
  _objc_retain(puVar1);
  _objc_retain(in_x6);
  puStack_e28 = PTR_PTR_1126ebc18;
  puStack_e30 = puVar3;
  _objc_msgSendSuper2(&puStack_e30,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined1 **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar4 + 8),puVar7);
    _objc_retain(puVar1);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x10);
    *(undefined1 **)((long)ppuVar4 + 0x10) = puVar1;
    _objc_release(uVar5);
    *(undefined8 *)((long)ppuVar4 + 0x18) = in_x5;
    *(undefined8 *)((long)ppuVar4 + 0x20) = uVar8;
    _objc_retain(in_x6);
    uVar8 = *(undefined8 *)((long)ppuVar4 + 0x28);
    *(undefined8 *)((long)ppuVar4 + 0x28) = in_x6;
    _objc_release(uVar8);
  }
  _objc_release(in_x6);
  _objc_release(puVar1);
  _objc_release(puVar7);
  return (undefined1 *)ppuVar4;
}



/* Entry: 105ac1a4c; end: 105ac1b5b; -[SCSpectaclesPairingListenerAnnouncer pairingDidFindMismatchUserWithPreviousUserMediaCount:] */

undefined1 *
FUN_105ac1a4c(undefined1 *param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *puStack_d20;
  undefined *puStack_d18;
  undefined1 *puStack_d10;
  undefined1 *puStack_d08;
  undefined1 *puStack_d00;
  undefined1 *puStack_cf8;
  undefined1 *puStack_cf0;
  undefined1 *puStack_ce8;
  undefined8 **ppuStack_ce0;
  code *pcStack_cd8;
  undefined8 uStack_cd0;
  long lStack_cc8;
  undefined8 *puStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined1 auStack_c88 [128];
  long lStack_c08;
  undefined1 *puStack_c00;
  undefined1 *puStack_bf8;
  undefined1 *puStack_bf0;
  undefined1 *puStack_be8;
  undefined1 *puStack_be0;
  undefined1 *puStack_bd8;
  undefined8 **ppuStack_bd0;
  code *pcStack_bc8;
  undefined8 uStack_bc0;
  long lStack_bb8;
  long *plStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  long lStack_af8;
  undefined8 **ppuStack_ac0;
  code *pcStack_ab8;
  undefined8 uStack_ab0;
  long lStack_aa8;
  long *plStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  long lStack_9e8;
  undefined8 **ppuStack_9b0;
  code *pcStack_9a8;
  undefined8 uStack_9a0;
  long lStack_998;
  long *plStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  long lStack_8d8;
  undefined8 **ppuStack_8a0;
  code *pcStack_898;
  undefined8 uStack_890;
  long lStack_888;
  long *plStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  long lStack_7c8;
  undefined8 **ppuStack_790;
  code *pcStack_788;
  undefined8 uStack_780;
  long lStack_778;
  undefined8 *puStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  long lStack_6b8;
  undefined1 *puStack_6b0;
  undefined1 *puStack_6a8;
  undefined1 *puStack_6a0;
  undefined1 *puStack_698;
  undefined1 *puStack_690;
  undefined1 *puStack_688;
  undefined8 **ppuStack_680;
  code *pcStack_678;
  undefined8 uStack_670;
  long lStack_668;
  long *plStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  long lStack_5a8;
  undefined8 **ppuStack_570;
  code *pcStack_568;
  undefined8 uStack_560;
  long lStack_558;
  long *plStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  long lStack_498;
  undefined8 **ppuStack_460;
  code *pcStack_458;
  undefined8 uStack_450;
  long lStack_448;
  long *plStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_388;
  undefined8 **ppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  long lStack_338;
  undefined8 *puStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long lStack_278;
  undefined1 *puStack_270;
  undefined1 *puStack_268;
  undefined1 *puStack_260;
  undefined1 *puStack_258;
  undefined1 *puStack_250;
  undefined1 *puStack_248;
  undefined1 **ppuStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_168;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar6 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  puStack_100 = (undefined8 *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar2 = auStack_c8;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_100;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_100 != unaff_x22) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c0f2f80(*(undefined8 *)(lStack_108 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar1 != unaff_x23);
      puVar2 = auStack_c8;
      puVar1 = param_1;
      puVar6 = &uStack_110;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_3;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_105ac1b5c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  puStack_220 = (undefined8 *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  puVar1 = param_3;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    unaff_x23 = (undefined1 *)*puStack_220;
    do {
      unaff_x24 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_220 != unaff_x23) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010c292e40(*(undefined8 *)(lStack_228 + (long)unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (puVar1 != unaff_x24);
      puVar1 = param_3;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release(param_3);
  puVar1 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_238 = FUN_105ac1c7c;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_270 = unaff_x24;
  puStack_268 = unaff_x23;
  puStack_260 = unaff_x22;
  puStack_258 = param_3;
  puStack_250 = puVar2;
  puStack_248 = (undefined1 *)puVar6;
  ppuStack_240 = &puStack_120;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  puStack_330 = (undefined8 *)0x0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_330;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_330 != unaff_x22) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c293980(*(undefined8 *)(lStack_338 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar2 != unaff_x23);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      param_3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_348 = FUN_105ac1d74;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_350 = &ppuStack_240;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_448 = 0;
  uStack_450 = 0;
  uStack_438 = 0;
  plStack_440 = (long *)0x0;
  uStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    param_3 = (undefined1 *)*plStack_440;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*plStack_440 != param_3) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2934e0(*(undefined8 *)(lStack_448 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_458 = FUN_105ac1e64;
  lStack_498 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_460 = &ppuStack_350;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_558 = 0;
  uStack_560 = 0;
  uStack_548 = 0;
  plStack_550 = (long *)0x0;
  uStack_538 = 0;
  uStack_540 = 0;
  uStack_528 = 0;
  uStack_530 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    param_3 = (undefined1 *)*plStack_550;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*plStack_550 != param_3) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c293020(*(undefined8 *)(lStack_558 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_498) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_568 = FUN_105ac1f54;
  lStack_5a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_570 = &ppuStack_460;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_668 = 0;
  uStack_670 = 0;
  uStack_658 = 0;
  plStack_660 = (long *)0x0;
  uStack_648 = 0;
  uStack_650 = 0;
  uStack_638 = 0;
  uStack_640 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    param_3 = (undefined1 *)*plStack_660;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*plStack_660 != param_3) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c2916c0(*(undefined8 *)(lStack_668 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar1 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5a8) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_678 = FUN_105ac2044;
  lStack_6b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_6b0 = unaff_x24;
  puStack_6a8 = unaff_x23;
  puStack_6a0 = unaff_x22;
  puStack_698 = param_3;
  puStack_690 = puVar1;
  puStack_688 = puVar2;
  ppuStack_680 = &ppuStack_570;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_778 = 0;
  uStack_780 = 0;
  uStack_768 = 0;
  puStack_770 = (undefined8 *)0x0;
  uStack_758 = 0;
  uStack_760 = 0;
  uStack_748 = 0;
  uStack_750 = 0;
  puVar2 = puVar3;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_770;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_770 != unaff_x22) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010c291020(*(undefined8 *)(lStack_778 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar2 != unaff_x23);
      puVar2 = puVar3;
      func_0x00010bf52a60();
      param_3 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6b8) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_788 = FUN_105ac213c;
  lStack_7c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_790 = &ppuStack_680;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_888 = 0;
  uStack_890 = 0;
  uStack_878 = 0;
  plStack_880 = (long *)0x0;
  uStack_868 = 0;
  uStack_870 = 0;
  uStack_858 = 0;
  uStack_860 = 0;
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    param_3 = (undefined1 *)*plStack_880;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*plStack_880 != param_3) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c293ea0(*(undefined8 *)(lStack_888 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = puVar2;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7c8) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_898 = FUN_105ac222c;
  lStack_8d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_8a0 = &ppuStack_790;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_998 = 0;
  uStack_9a0 = 0;
  uStack_988 = 0;
  plStack_990 = (long *)0x0;
  uStack_978 = 0;
  uStack_980 = 0;
  uStack_968 = 0;
  uStack_970 = 0;
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    param_3 = (undefined1 *)*plStack_990;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*plStack_990 != param_3) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c294200(*(undefined8 *)(lStack_998 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = puVar2;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8d8) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_9a8 = FUN_105ac231c;
  lStack_9e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_9b0 = &ppuStack_8a0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_aa8 = 0;
  uStack_ab0 = 0;
  uStack_a98 = 0;
  plStack_aa0 = (long *)0x0;
  uStack_a88 = 0;
  uStack_a90 = 0;
  uStack_a78 = 0;
  uStack_a80 = 0;
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    param_3 = (undefined1 *)*plStack_aa0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*plStack_aa0 != param_3) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c293e80(*(undefined8 *)(lStack_aa8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = puVar2;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9e8) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_bc0;
  pcStack_ab8 = FUN_105ac240c;
  lStack_af8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_ac0 = &ppuStack_9b0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_bb8 = 0;
  uStack_bc0 = 0;
  uStack_ba8 = 0;
  plStack_bb0 = (long *)0x0;
  uStack_b98 = 0;
  uStack_ba0 = 0;
  uStack_b88 = 0;
  uStack_b90 = 0;
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    param_3 = (undefined1 *)*plStack_bb0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*plStack_bb0 != param_3) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c293ee0(*(undefined8 *)(lStack_bb8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar1 != unaff_x22);
      puVar1 = puVar2;
      puVar6 = &uStack_bc0;
      func_0x00010bf52a60();
      puVar3 = (undefined1 *)0x0;
    } while (puVar1 != (undefined1 *)0x0);
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_af8) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_cd0;
  pcStack_bc8 = FUN_105ac24fc;
  lStack_c08 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c00 = unaff_x24;
  puStack_bf8 = unaff_x23;
  puStack_bf0 = unaff_x22;
  puStack_be8 = param_3;
  puStack_be0 = puVar3;
  puStack_bd8 = puVar2;
  ppuStack_bd0 = &ppuStack_ac0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_cc8 = 0;
  uStack_cd0 = 0;
  uStack_cb8 = 0;
  puStack_cc0 = (undefined8 *)0x0;
  uStack_ca8 = 0;
  uStack_cb0 = 0;
  uStack_c98 = 0;
  uStack_ca0 = 0;
  puVar2 = auStack_c88;
  uVar8 = 0x10;
  puVar3 = puVar1;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*puStack_cc0;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_cc0 != unaff_x22) {
          _objc_enumerationMutation(puVar1);
        }
        func_0x00010c2915c0(*(undefined8 *)(lStack_cc8 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar3 != unaff_x23);
      puVar2 = auStack_c88;
      uVar8 = 0x10;
      puVar3 = puVar1;
      puVar7 = &uStack_cd0;
      func_0x00010bf52a60();
      param_3 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c08) {
    return puVar3;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_d20;
  pcStack_cd8 = FUN_105ac25f4;
  puStack_d10 = unaff_x24;
  puStack_d08 = unaff_x23;
  puStack_d00 = unaff_x22;
  puStack_cf8 = param_3;
  puStack_cf0 = puVar1;
  puStack_ce8 = (undefined1 *)puVar6;
  ppuStack_ce0 = &ppuStack_bd0;
  _objc_retain(puVar7);
  _objc_retain(puVar2);
  _objc_retain(param_7);
  puStack_d18 = PTR_PTR_1126ebc18;
  puStack_d20 = puVar3;
  _objc_msgSendSuper2(&puStack_d20,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined1 **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar4 + 8),puVar7);
    _objc_retain(puVar2);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 0x10);
    *(undefined1 **)((long)ppuVar4 + 0x10) = puVar2;
    _objc_release(uVar5);
    *(undefined8 *)((long)ppuVar4 + 0x18) = param_6;
    *(undefined8 *)((long)ppuVar4 + 0x20) = uVar8;
    _objc_retain(param_7);
    uVar8 = *(undefined8 *)((long)ppuVar4 + 0x28);
    *(undefined8 *)((long)ppuVar4 + 0x28) = param_7;
    _objc_release(uVar8);
  }
  _objc_release(param_7);
  _objc_release(puVar2);
  _objc_release(puVar7);
  return (undefined1 *)ppuVar4;
}



/* Entry: 105ac1b5c; end: 105ac1c7b; -[SCSpectaclesPairingUserEventListenerAnnouncer userNamedDevice:changedFromDefault:] */

undefined1 *
FUN_105ac1b5c(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  long unaff_x24;
  undefined1 *puStack_c10;
  undefined *puStack_c08;
  long lStack_c00;
  undefined1 *puStack_bf8;
  undefined1 *puStack_bf0;
  long lStack_be8;
  undefined1 *puStack_be0;
  undefined1 *puStack_bd8;
  undefined8 **ppuStack_bd0;
  code *pcStack_bc8;
  undefined8 uStack_bc0;
  long lStack_bb8;
  long *plStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined1 auStack_b78 [128];
  long lStack_af8;
  long lStack_af0;
  undefined1 *puStack_ae8;
  undefined1 *puStack_ae0;
  long lStack_ad8;
  undefined1 *puStack_ad0;
  undefined1 *puStack_ac8;
  undefined8 **ppuStack_ac0;
  code *pcStack_ab8;
  undefined8 uStack_ab0;
  long lStack_aa8;
  long *plStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  long lStack_9e8;
  undefined8 **ppuStack_9b0;
  code *pcStack_9a8;
  undefined8 uStack_9a0;
  long lStack_998;
  long *plStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  long lStack_8d8;
  undefined8 **ppuStack_8a0;
  code *pcStack_898;
  undefined8 uStack_890;
  long lStack_888;
  long *plStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  long lStack_7c8;
  undefined8 **ppuStack_790;
  code *pcStack_788;
  undefined8 uStack_780;
  long lStack_778;
  long *plStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  long lStack_6b8;
  undefined8 **ppuStack_680;
  code *pcStack_678;
  undefined8 uStack_670;
  long lStack_668;
  long *plStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  long lStack_5a8;
  long lStack_5a0;
  undefined1 *puStack_598;
  undefined1 *puStack_590;
  long lStack_588;
  undefined1 *puStack_580;
  undefined1 *puStack_578;
  undefined8 **ppuStack_570;
  code *pcStack_568;
  undefined8 uStack_560;
  long lStack_558;
  long *plStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  long lStack_498;
  undefined8 **ppuStack_460;
  code *pcStack_458;
  undefined8 uStack_450;
  long lStack_448;
  long *plStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_388;
  undefined8 **ppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long lStack_278;
  undefined1 **ppuStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_168;
  long lStack_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined1 *puStack_138;
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
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_1;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    unaff_x23 = (undefined1 *)*plStack_110;
    do {
      unaff_x24 = 0;
      do {
        if ((undefined1 *)*plStack_110 != unaff_x23) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c292e40(*(undefined8 *)(lStack_118 + unaff_x24 * 8));
        unaff_x24 = unaff_x24 + 1;
      } while (lVar1 != unaff_x24);
      lVar1 = param_1;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (lVar1 != 0);
  }
  _objc_release(param_1);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_105ac1c7c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = unaff_x22;
  lStack_148 = param_1;
  uStack_140 = param_4;
  puStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*plStack_220;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*plStack_220 != unaff_x22) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c293980(*(undefined8 *)(lStack_228 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar3 != unaff_x23);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      param_1 = 0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_238 = FUN_105ac1d74;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_240 = &puStack_130;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  plStack_330 = (long *)0x0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined1 *)0x0) {
    param_1 = *plStack_330;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_330 != param_1) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010c2934e0(*(undefined8 *)(lStack_338 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar4 != unaff_x22);
      puVar4 = puVar3;
      func_0x00010bf52a60();
      puVar2 = (undefined1 *)0x0;
    } while (puVar4 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_348 = FUN_105ac1e64;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_350 = &ppuStack_240;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_448 = 0;
  uStack_450 = 0;
  uStack_438 = 0;
  plStack_440 = (long *)0x0;
  uStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined1 *)0x0) {
    param_1 = *plStack_440;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_440 != param_1) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010c293020(*(undefined8 *)(lStack_448 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar4 != unaff_x22);
      puVar4 = puVar3;
      func_0x00010bf52a60();
      puVar2 = (undefined1 *)0x0;
    } while (puVar4 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return puVar3;
  }
  ___stack_chk_fail();
  pcStack_458 = FUN_105ac1f54;
  lStack_498 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_460 = &ppuStack_350;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_558 = 0;
  uStack_560 = 0;
  uStack_548 = 0;
  plStack_550 = (long *)0x0;
  uStack_538 = 0;
  uStack_540 = 0;
  uStack_528 = 0;
  uStack_530 = 0;
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined1 *)0x0) {
    param_1 = *plStack_550;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_550 != param_1) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010c2916c0(*(undefined8 *)(lStack_558 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar4 != unaff_x22);
      puVar4 = puVar3;
      func_0x00010bf52a60();
      puVar2 = (undefined1 *)0x0;
    } while (puVar4 != (undefined1 *)0x0);
  }
  puVar4 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_498) {
    return puVar4;
  }
  ___stack_chk_fail();
  pcStack_568 = FUN_105ac2044;
  lStack_5a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_5a0 = unaff_x24;
  puStack_598 = unaff_x23;
  puStack_590 = unaff_x22;
  lStack_588 = param_1;
  puStack_580 = puVar2;
  puStack_578 = puVar3;
  ppuStack_570 = &ppuStack_460;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_668 = 0;
  uStack_670 = 0;
  uStack_658 = 0;
  plStack_660 = (long *)0x0;
  uStack_648 = 0;
  uStack_650 = 0;
  uStack_638 = 0;
  uStack_640 = 0;
  puVar2 = puVar4;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*plStack_660;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*plStack_660 != unaff_x22) {
          _objc_enumerationMutation(puVar4);
        }
        func_0x00010c291020(*(undefined8 *)(lStack_668 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar2 != unaff_x23);
      puVar2 = puVar4;
      func_0x00010bf52a60();
      param_1 = 0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5a8) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_678 = FUN_105ac213c;
  lStack_6b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_680 = &ppuStack_570;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_778 = 0;
  uStack_780 = 0;
  uStack_768 = 0;
  plStack_770 = (long *)0x0;
  uStack_758 = 0;
  uStack_760 = 0;
  uStack_748 = 0;
  uStack_750 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    param_1 = *plStack_770;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_770 != param_1) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c293ea0(*(undefined8 *)(lStack_778 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar4 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6b8) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_788 = FUN_105ac222c;
  lStack_7c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_790 = &ppuStack_680;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_888 = 0;
  uStack_890 = 0;
  uStack_878 = 0;
  plStack_880 = (long *)0x0;
  uStack_868 = 0;
  uStack_870 = 0;
  uStack_858 = 0;
  uStack_860 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    param_1 = *plStack_880;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_880 != param_1) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c294200(*(undefined8 *)(lStack_888 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar4 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7c8) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_898 = FUN_105ac231c;
  lStack_8d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_8a0 = &ppuStack_790;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_998 = 0;
  uStack_9a0 = 0;
  uStack_988 = 0;
  plStack_990 = (long *)0x0;
  uStack_978 = 0;
  uStack_980 = 0;
  uStack_968 = 0;
  uStack_970 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    param_1 = *plStack_990;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_990 != param_1) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c293e80(*(undefined8 *)(lStack_998 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puVar4 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8d8) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_ab0;
  pcStack_9a8 = FUN_105ac240c;
  lStack_9e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_9b0 = &ppuStack_8a0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_aa8 = 0;
  uStack_ab0 = 0;
  uStack_a98 = 0;
  plStack_aa0 = (long *)0x0;
  uStack_a88 = 0;
  uStack_a90 = 0;
  uStack_a78 = 0;
  uStack_a80 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    param_1 = *plStack_aa0;
    do {
      unaff_x22 = (undefined1 *)0x0;
      do {
        if (*plStack_aa0 != param_1) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c293ee0(*(undefined8 *)(lStack_aa8 + (long)unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (puVar3 != unaff_x22);
      puVar3 = puVar2;
      puVar7 = &uStack_ab0;
      func_0x00010bf52a60();
      puVar4 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9e8) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_bc0;
  pcStack_ab8 = FUN_105ac24fc;
  lStack_af8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_af0 = unaff_x24;
  puStack_ae8 = unaff_x23;
  puStack_ae0 = unaff_x22;
  lStack_ad8 = param_1;
  puStack_ad0 = puVar4;
  puStack_ac8 = puVar2;
  ppuStack_ac0 = &ppuStack_9b0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_bb8 = 0;
  uStack_bc0 = 0;
  uStack_ba8 = 0;
  plStack_bb0 = (long *)0x0;
  uStack_b98 = 0;
  uStack_ba0 = 0;
  uStack_b88 = 0;
  uStack_b90 = 0;
  puVar2 = auStack_b78;
  uVar9 = 0x10;
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined1 *)0x0) {
    unaff_x22 = (undefined1 *)*plStack_bb0;
    do {
      unaff_x23 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*plStack_bb0 != unaff_x22) {
          _objc_enumerationMutation(puVar3);
        }
        func_0x00010c2915c0(*(undefined8 *)(lStack_bb8 + (long)unaff_x23 * 8));
        unaff_x23 = unaff_x23 + 1;
      } while (puVar4 != unaff_x23);
      puVar2 = auStack_b78;
      uVar9 = 0x10;
      puVar4 = puVar3;
      puVar8 = &uStack_bc0;
      func_0x00010bf52a60();
      param_1 = 0;
    } while (puVar4 != (undefined1 *)0x0);
  }
  puVar4 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_af8) {
    return puVar4;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_c10;
  pcStack_bc8 = FUN_105ac25f4;
  lStack_c00 = unaff_x24;
  puStack_bf8 = unaff_x23;
  puStack_bf0 = unaff_x22;
  lStack_be8 = param_1;
  puStack_be0 = puVar3;
  puStack_bd8 = (undefined1 *)puVar7;
  ppuStack_bd0 = &ppuStack_ac0;
  _objc_retain(puVar8);
  _objc_retain(puVar2);
  _objc_retain(param_7);
  puStack_c08 = PTR_PTR_1126ebc18;
  puStack_c10 = puVar4;
  _objc_msgSendSuper2(&puStack_c10,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined1 **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar5 + 8),puVar8);
    _objc_retain(puVar2);
    uVar6 = *(undefined8 *)((long)ppuVar5 + 0x10);
    *(undefined1 **)((long)ppuVar5 + 0x10) = puVar2;
    _objc_release(uVar6);
    *(undefined8 *)((long)ppuVar5 + 0x18) = param_6;
    *(undefined8 *)((long)ppuVar5 + 0x20) = uVar9;
    _objc_retain(param_7);
    uVar9 = *(undefined8 *)((long)ppuVar5 + 0x28);
    *(undefined8 *)((long)ppuVar5 + 0x28) = param_7;
    _objc_release(uVar9);
  }
  _objc_release(param_7);
  _objc_release(puVar2);
  _objc_release(puVar8);
  return (undefined1 *)ppuVar5;
}



/* Entry: 105ac1c7c; end: 105ac1d73; -[SCSpectaclesPairingUserEventListenerAnnouncer userSetLocationPermissions:] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000105ac228c */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined1 * FUN_105ac1c7c(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puStack_af0;
  undefined *puStack_ae8;
  undefined8 uStack_aa0;
  long lStack_a98;
  long *plStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined1 auStack_a58 [128];
  long lStack_9d8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c293980(*(undefined8 *)((long)puVar7 * 8));
      puVar7 = puVar7 + 1;
    } while (puVar8 != puVar7);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c2934e0(*(undefined8 *)((long)puVar7 * 8));
      puVar7 = puVar7 + 1;
    } while (puVar8 != puVar7);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c293020(*(undefined8 *)((long)puVar7 * 8));
      puVar7 = puVar7 + 1;
    } while (puVar8 != puVar7);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c2916c0(*(undefined8 *)((long)puVar7 * 8));
      puVar7 = puVar7 + 1;
    } while (puVar8 != puVar7);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c291020(*(undefined8 *)((long)puVar7 * 8));
      puVar7 = puVar7 + 1;
    } while (puVar8 != puVar7);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c293ea0(*(undefined8 *)((long)puVar7 * 8));
      puVar7 = puVar7 + 1;
    } while (puVar8 != puVar7);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c294200(*(undefined8 *)((long)puVar7 * 8));
      puVar7 = puVar7 + 1;
    } while (puVar8 != puVar7);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x00010c09a480();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_1;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    while (puVar8 != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)0x0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c293e80(*(undefined8 *)((long)puVar7 * 8));
        puVar7 = puVar7 + 1;
      } while (puVar8 != puVar7);
      puVar8 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x00010c09a480();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_1;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    while (puVar8 != (undefined1 *)0x0) {
      puVar7 = (undefined1 *)0x0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c293ee0(*(undefined8 *)((long)puVar7 * 8));
        puVar7 = puVar7 + 1;
      } while (puVar8 != puVar7);
      puVar8 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    puVar3 = &uStack_aa0;
    lStack_9d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x00010c09a480();
    _objc_retainAutoreleasedReturnValue();
    lStack_a98 = 0;
    uStack_aa0 = 0;
    uStack_a88 = 0;
    plStack_a90 = (long *)0x0;
    uStack_a78 = 0;
    uStack_a80 = 0;
    uStack_a68 = 0;
    uStack_a70 = 0;
    puVar8 = auStack_a58;
    uVar4 = 0x10;
    puVar7 = param_1;
    func_0x00010bf52a60();
    if (puVar7 != (undefined1 *)0x0) {
      lVar6 = *plStack_a90;
      do {
        puVar8 = (undefined1 *)0x0;
        do {
          if (*plStack_a90 != lVar6) {
            _objc_enumerationMutation(param_1);
          }
          func_0x00010c2915c0(*(undefined8 *)(lStack_a98 + (long)puVar8 * 8));
          puVar8 = puVar8 + 1;
        } while (puVar7 != puVar8);
        puVar8 = auStack_a58;
        uVar4 = 0x10;
        puVar7 = param_1;
        puVar3 = &uStack_aa0;
        func_0x00010bf52a60();
      } while (puVar7 != (undefined1 *)0x0);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9d8) {
      return param_1;
    }
    ___stack_chk_fail();
    ppuVar1 = &puStack_af0;
    _objc_retain(puVar3);
    _objc_retain(puVar8);
    _objc_retain(in_x6);
    puStack_ae8 = PTR_PTR_1126ebc18;
    puStack_af0 = param_1;
    _objc_msgSendSuper2(&puStack_af0,PTR_s_init_1125d9248);
    if (ppuVar1 != (undefined1 **)0x0) {
      _objc_storeWeak((undefined1 *)((long)ppuVar1 + 8),puVar3);
      _objc_retain(puVar8);
      uVar2 = *(undefined8 *)((long)ppuVar1 + 0x10);
      *(undefined1 **)((long)ppuVar1 + 0x10) = puVar8;
      _objc_release(uVar2);
      *(undefined8 *)((long)ppuVar1 + 0x18) = in_x5;
      *(undefined8 *)((long)ppuVar1 + 0x20) = uVar4;
      _objc_retain(in_x6);
      uVar4 = *(undefined8 *)((long)ppuVar1 + 0x28);
      *(undefined8 *)((long)ppuVar1 + 0x28) = in_x6;
      _objc_release(uVar4);
    }
    _objc_release(in_x6);
    _objc_release(puVar8);
    _objc_release(puVar3);
    return (undefined1 *)ppuVar1;
  }
  return param_1;
}



/* Entry: 105ac1d74; end: 105ac1e63; -[SCSpectaclesPairingUserEventListenerAnnouncer userRequestsPairingRetry] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000105ac228c */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined1 * FUN_105ac1d74(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puStack_9e0;
  undefined *puStack_9d8;
  undefined8 uStack_990;
  long lStack_988;
  long *plStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined1 auStack_948 [128];
  long lStack_8c8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c2934e0(*(undefined8 *)((long)puVar6 * 8));
      puVar6 = puVar6 + 1;
    } while (puVar8 != puVar6);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c293020(*(undefined8 *)((long)puVar6 * 8));
      puVar6 = puVar6 + 1;
    } while (puVar8 != puVar6);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c2916c0(*(undefined8 *)((long)puVar6 * 8));
      puVar6 = puVar6 + 1;
    } while (puVar8 != puVar6);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c291020(*(undefined8 *)((long)puVar6 * 8));
      puVar6 = puVar6 + 1;
    } while (puVar8 != puVar6);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c293ea0(*(undefined8 *)((long)puVar6 * 8));
      puVar6 = puVar6 + 1;
    } while (puVar8 != puVar6);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c294200(*(undefined8 *)((long)puVar6 * 8));
      puVar6 = puVar6 + 1;
    } while (puVar8 != puVar6);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c293e80(*(undefined8 *)((long)puVar6 * 8));
      puVar6 = puVar6 + 1;
    } while (puVar8 != puVar6);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c293ee0(*(undefined8 *)((long)puVar6 * 8));
      puVar6 = puVar6 + 1;
    } while (puVar8 != puVar6);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_990;
  lStack_8c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_988 = 0;
  uStack_990 = 0;
  uStack_978 = 0;
  plStack_980 = (long *)0x0;
  uStack_968 = 0;
  uStack_970 = 0;
  uStack_958 = 0;
  uStack_960 = 0;
  puVar8 = auStack_948;
  uVar4 = 0x10;
  puVar6 = param_1;
  func_0x00010bf52a60();
  if (puVar6 != (undefined1 *)0x0) {
    lVar7 = *plStack_980;
    do {
      puVar8 = (undefined1 *)0x0;
      do {
        if (*plStack_980 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c2915c0(*(undefined8 *)(lStack_988 + (long)puVar8 * 8));
        puVar8 = puVar8 + 1;
      } while (puVar6 != puVar8);
      puVar8 = auStack_948;
      uVar4 = 0x10;
      puVar6 = param_1;
      puVar3 = &uStack_990;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8c8) {
    return param_1;
  }
  ___stack_chk_fail();
  ppuVar1 = &puStack_9e0;
  _objc_retain(puVar3);
  _objc_retain(puVar8);
  _objc_retain(in_x6);
  puStack_9d8 = PTR_PTR_1126ebc18;
  puStack_9e0 = param_1;
  _objc_msgSendSuper2(&puStack_9e0,PTR_s_init_1125d9248);
  if (ppuVar1 != (undefined1 **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar1 + 8),puVar3);
    _objc_retain(puVar8);
    uVar2 = *(undefined8 *)((long)ppuVar1 + 0x10);
    *(undefined1 **)((long)ppuVar1 + 0x10) = puVar8;
    _objc_release(uVar2);
    *(undefined8 *)((long)ppuVar1 + 0x18) = in_x5;
    *(undefined8 *)((long)ppuVar1 + 0x20) = uVar4;
    _objc_retain(in_x6);
    uVar4 = *(undefined8 *)((long)ppuVar1 + 0x28);
    *(undefined8 *)((long)ppuVar1 + 0x28) = in_x6;
    _objc_release(uVar4);
  }
  _objc_release(in_x6);
  _objc_release(puVar8);
  _objc_release(puVar3);
  return (undefined1 *)ppuVar1;
}



/* Entry: 105ac1e64; end: 105ac1f53; -[SCSpectaclesPairingUserEventListenerAnnouncer userOpenedTOS] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000105ac228c */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined1 * FUN_105ac1e64(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puStack_8d0;
  undefined *puStack_8c8;
  undefined8 uStack_880;
  long lStack_878;
  long *plStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined1 auStack_838 [128];
  long lStack_7b8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c293020(*(undefined8 *)((long)puVar6 * 8));
      puVar6 = puVar6 + 1;
    } while (puVar8 != puVar6);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c2916c0(*(undefined8 *)((long)puVar6 * 8));
      puVar6 = puVar6 + 1;
    } while (puVar8 != puVar6);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c291020(*(undefined8 *)((long)puVar6 * 8));
      puVar6 = puVar6 + 1;
    } while (puVar8 != puVar6);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c293ea0(*(undefined8 *)((long)puVar6 * 8));
      puVar6 = puVar6 + 1;
    } while (puVar8 != puVar6);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c294200(*(undefined8 *)((long)puVar6 * 8));
      puVar6 = puVar6 + 1;
    } while (puVar8 != puVar6);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x00010c09a480();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_1;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    while (puVar8 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)0x0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c293e80(*(undefined8 *)((long)puVar6 * 8));
        puVar6 = puVar6 + 1;
      } while (puVar8 != puVar6);
      puVar8 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x00010c09a480();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_1;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    while (puVar8 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)0x0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c293ee0(*(undefined8 *)((long)puVar6 * 8));
        puVar6 = puVar6 + 1;
      } while (puVar8 != puVar6);
      puVar8 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    puVar3 = &uStack_880;
    lStack_7b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x00010c09a480();
    _objc_retainAutoreleasedReturnValue();
    lStack_878 = 0;
    uStack_880 = 0;
    uStack_868 = 0;
    plStack_870 = (long *)0x0;
    uStack_858 = 0;
    uStack_860 = 0;
    uStack_848 = 0;
    uStack_850 = 0;
    puVar8 = auStack_838;
    uVar4 = 0x10;
    puVar6 = param_1;
    func_0x00010bf52a60();
    if (puVar6 != (undefined1 *)0x0) {
      lVar7 = *plStack_870;
      do {
        puVar8 = (undefined1 *)0x0;
        do {
          if (*plStack_870 != lVar7) {
            _objc_enumerationMutation(param_1);
          }
          func_0x00010c2915c0(*(undefined8 *)(lStack_878 + (long)puVar8 * 8));
          puVar8 = puVar8 + 1;
        } while (puVar6 != puVar8);
        puVar8 = auStack_838;
        uVar4 = 0x10;
        puVar6 = param_1;
        puVar3 = &uStack_880;
        func_0x00010bf52a60();
      } while (puVar6 != (undefined1 *)0x0);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7b8) {
      return param_1;
    }
    ___stack_chk_fail();
    ppuVar1 = &puStack_8d0;
    _objc_retain(puVar3);
    _objc_retain(puVar8);
    _objc_retain(in_x6);
    puStack_8c8 = PTR_PTR_1126ebc18;
    puStack_8d0 = param_1;
    _objc_msgSendSuper2(&puStack_8d0,PTR_s_init_1125d9248);
    if (ppuVar1 != (undefined1 **)0x0) {
      _objc_storeWeak((undefined1 *)((long)ppuVar1 + 8),puVar3);
      _objc_retain(puVar8);
      uVar2 = *(undefined8 *)((long)ppuVar1 + 0x10);
      *(undefined1 **)((long)ppuVar1 + 0x10) = puVar8;
      _objc_release(uVar2);
      *(undefined8 *)((long)ppuVar1 + 0x18) = in_x5;
      *(undefined8 *)((long)ppuVar1 + 0x20) = uVar4;
      _objc_retain(in_x6);
      uVar4 = *(undefined8 *)((long)ppuVar1 + 0x28);
      *(undefined8 *)((long)ppuVar1 + 0x28) = in_x6;
      _objc_release(uVar4);
    }
    _objc_release(in_x6);
    _objc_release(puVar8);
    _objc_release(puVar3);
    return (undefined1 *)ppuVar1;
  }
  return param_1;
}



/* Entry: 105ac1f54; end: 105ac2043; -[SCSpectaclesPairingUserEventListenerAnnouncer userClosedTOS] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000105ac228c */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined1 * FUN_105ac1f54(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puStack_7c0;
  undefined *puStack_7b8;
  undefined8 uStack_770;
  long lStack_768;
  long *plStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined1 auStack_728 [128];
  long lStack_6a8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c2916c0(*(undefined8 *)((long)puVar6 * 8));
      puVar6 = puVar6 + 1;
    } while (puVar8 != puVar6);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c291020(*(undefined8 *)((long)puVar6 * 8));
      puVar6 = puVar6 + 1;
    } while (puVar8 != puVar6);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c293ea0(*(undefined8 *)((long)puVar6 * 8));
      puVar6 = puVar6 + 1;
    } while (puVar8 != puVar6);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x00010c09a480();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_1;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    while (puVar8 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)0x0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c294200(*(undefined8 *)((long)puVar6 * 8));
        puVar6 = puVar6 + 1;
      } while (puVar8 != puVar6);
      puVar8 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x00010c09a480();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_1;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    while (puVar8 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)0x0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c293e80(*(undefined8 *)((long)puVar6 * 8));
        puVar6 = puVar6 + 1;
      } while (puVar8 != puVar6);
      puVar8 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x00010c09a480();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_1;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    while (puVar8 != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)0x0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c293ee0(*(undefined8 *)((long)puVar6 * 8));
        puVar6 = puVar6 + 1;
      } while (puVar8 != puVar6);
      puVar8 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
      ___stack_chk_fail();
      puVar3 = &uStack_770;
      lStack_6a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      func_0x00010c09a480();
      _objc_retainAutoreleasedReturnValue();
      lStack_768 = 0;
      uStack_770 = 0;
      uStack_758 = 0;
      plStack_760 = (long *)0x0;
      uStack_748 = 0;
      uStack_750 = 0;
      uStack_738 = 0;
      uStack_740 = 0;
      puVar8 = auStack_728;
      uVar4 = 0x10;
      puVar6 = param_1;
      func_0x00010bf52a60();
      if (puVar6 != (undefined1 *)0x0) {
        lVar7 = *plStack_760;
        do {
          puVar8 = (undefined1 *)0x0;
          do {
            if (*plStack_760 != lVar7) {
              _objc_enumerationMutation(param_1);
            }
            func_0x00010c2915c0(*(undefined8 *)(lStack_768 + (long)puVar8 * 8));
            puVar8 = puVar8 + 1;
          } while (puVar6 != puVar8);
          puVar8 = auStack_728;
          uVar4 = 0x10;
          puVar6 = param_1;
          puVar3 = &uStack_770;
          func_0x00010bf52a60();
        } while (puVar6 != (undefined1 *)0x0);
      }
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6a8) {
        return param_1;
      }
      ___stack_chk_fail();
      ppuVar1 = &puStack_7c0;
      _objc_retain(puVar3);
      _objc_retain(puVar8);
      _objc_retain(in_x6);
      puStack_7b8 = PTR_PTR_1126ebc18;
      puStack_7c0 = param_1;
      _objc_msgSendSuper2(&puStack_7c0,PTR_s_init_1125d9248);
      if (ppuVar1 != (undefined1 **)0x0) {
        _objc_storeWeak((undefined1 *)((long)ppuVar1 + 8),puVar3);
        _objc_retain(puVar8);
        uVar2 = *(undefined8 *)((long)ppuVar1 + 0x10);
        *(undefined1 **)((long)ppuVar1 + 0x10) = puVar8;
        _objc_release(uVar2);
        *(undefined8 *)((long)ppuVar1 + 0x18) = in_x5;
        *(undefined8 *)((long)ppuVar1 + 0x20) = uVar4;
        _objc_retain(in_x6);
        uVar4 = *(undefined8 *)((long)ppuVar1 + 0x28);
        *(undefined8 *)((long)ppuVar1 + 0x28) = in_x6;
        _objc_release(uVar4);
      }
      _objc_release(in_x6);
      _objc_release(puVar8);
      _objc_release(puVar3);
      return (undefined1 *)ppuVar1;
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 105ac2044; end: 105ac213b; -[SCSpectaclesPairingUserEventListenerAnnouncer userAcceptedTOSWithIsBIPA:] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000105ac228c */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined1 * FUN_105ac2044(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puStack_6b0;
  undefined *puStack_6a8;
  undefined8 uStack_660;
  long lStack_658;
  long *plStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined1 auStack_618 [128];
  long lStack_598;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c291020(*(undefined8 *)((long)puVar7 * 8));
      puVar7 = puVar7 + 1;
    } while (puVar8 != puVar7);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c293ea0(*(undefined8 *)((long)puVar7 * 8));
      puVar7 = puVar7 + 1;
    } while (puVar8 != puVar7);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c294200(*(undefined8 *)((long)puVar7 * 8));
      puVar7 = puVar7 + 1;
    } while (puVar8 != puVar7);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c293e80(*(undefined8 *)((long)puVar7 * 8));
      puVar7 = puVar7 + 1;
    } while (puVar8 != puVar7);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar7 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c293ee0(*(undefined8 *)((long)puVar7 * 8));
      puVar7 = puVar7 + 1;
    } while (puVar8 != puVar7);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_660;
  lStack_598 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_658 = 0;
  uStack_660 = 0;
  uStack_648 = 0;
  plStack_650 = (long *)0x0;
  uStack_638 = 0;
  uStack_640 = 0;
  uStack_628 = 0;
  uStack_630 = 0;
  puVar8 = auStack_618;
  uVar4 = 0x10;
  puVar7 = param_1;
  func_0x00010bf52a60();
  if (puVar7 != (undefined1 *)0x0) {
    lVar6 = *plStack_650;
    do {
      puVar8 = (undefined1 *)0x0;
      do {
        if (*plStack_650 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c2915c0(*(undefined8 *)(lStack_658 + (long)puVar8 * 8));
        puVar8 = puVar8 + 1;
      } while (puVar7 != puVar8);
      puVar8 = auStack_618;
      uVar4 = 0x10;
      puVar7 = param_1;
      puVar3 = &uStack_660;
      func_0x00010bf52a60();
    } while (puVar7 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_598) {
    return param_1;
  }
  ___stack_chk_fail();
  ppuVar1 = &puStack_6b0;
  _objc_retain(puVar3);
  _objc_retain(puVar8);
  _objc_retain(in_x6);
  puStack_6a8 = PTR_PTR_1126ebc18;
  puStack_6b0 = param_1;
  _objc_msgSendSuper2(&puStack_6b0,PTR_s_init_1125d9248);
  if (ppuVar1 != (undefined1 **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar1 + 8),puVar3);
    _objc_retain(puVar8);
    uVar2 = *(undefined8 *)((long)ppuVar1 + 0x10);
    *(undefined1 **)((long)ppuVar1 + 0x10) = puVar8;
    _objc_release(uVar2);
    *(undefined8 *)((long)ppuVar1 + 0x18) = in_x5;
    *(undefined8 *)((long)ppuVar1 + 0x20) = uVar4;
    _objc_retain(in_x6);
    uVar4 = *(undefined8 *)((long)ppuVar1 + 0x28);
    *(undefined8 *)((long)ppuVar1 + 0x28) = in_x6;
    _objc_release(uVar4);
  }
  _objc_release(in_x6);
  _objc_release(puVar8);
  _objc_release(puVar3);
  return (undefined1 *)ppuVar1;
}



/* Entry: 105ac213c; end: 105ac222b; -[SCSpectaclesPairingUserEventListenerAnnouncer userTappedNeedHelp] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000105ac228c */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined1 * FUN_105ac213c(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puStack_5a0;
  undefined *puStack_598;
  undefined8 uStack_550;
  long lStack_548;
  long *plStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined1 auStack_508 [128];
  long lStack_488;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c293ea0(*(undefined8 *)((long)puVar6 * 8));
      puVar6 = puVar6 + 1;
    } while (puVar8 != puVar6);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c294200(*(undefined8 *)((long)puVar6 * 8));
      puVar6 = puVar6 + 1;
    } while (puVar8 != puVar6);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c293e80(*(undefined8 *)((long)puVar6 * 8));
      puVar6 = puVar6 + 1;
    } while (puVar8 != puVar6);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c293ee0(*(undefined8 *)((long)puVar6 * 8));
      puVar6 = puVar6 + 1;
    } while (puVar8 != puVar6);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    puVar3 = &uStack_550;
    lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x00010c09a480();
    _objc_retainAutoreleasedReturnValue();
    lStack_548 = 0;
    uStack_550 = 0;
    uStack_538 = 0;
    plStack_540 = (long *)0x0;
    uStack_528 = 0;
    uStack_530 = 0;
    uStack_518 = 0;
    uStack_520 = 0;
    puVar8 = auStack_508;
    uVar4 = 0x10;
    puVar6 = param_1;
    func_0x00010bf52a60();
    if (puVar6 != (undefined1 *)0x0) {
      lVar7 = *plStack_540;
      do {
        puVar8 = (undefined1 *)0x0;
        do {
          if (*plStack_540 != lVar7) {
            _objc_enumerationMutation(param_1);
          }
          func_0x00010c2915c0(*(undefined8 *)(lStack_548 + (long)puVar8 * 8));
          puVar8 = puVar8 + 1;
        } while (puVar6 != puVar8);
        puVar8 = auStack_508;
        uVar4 = 0x10;
        puVar6 = param_1;
        puVar3 = &uStack_550;
        func_0x00010bf52a60();
      } while (puVar6 != (undefined1 *)0x0);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
      return param_1;
    }
    ___stack_chk_fail();
    ppuVar1 = &puStack_5a0;
    _objc_retain(puVar3);
    _objc_retain(puVar8);
    _objc_retain(in_x6);
    puStack_598 = PTR_PTR_1126ebc18;
    puStack_5a0 = param_1;
    _objc_msgSendSuper2(&puStack_5a0,PTR_s_init_1125d9248);
    if (ppuVar1 != (undefined1 **)0x0) {
      _objc_storeWeak((undefined1 *)((long)ppuVar1 + 8),puVar3);
      _objc_retain(puVar8);
      uVar2 = *(undefined8 *)((long)ppuVar1 + 0x10);
      *(undefined1 **)((long)ppuVar1 + 0x10) = puVar8;
      _objc_release(uVar2);
      *(undefined8 *)((long)ppuVar1 + 0x18) = in_x5;
      *(undefined8 *)((long)ppuVar1 + 0x20) = uVar4;
      _objc_retain(in_x6);
      uVar4 = *(undefined8 *)((long)ppuVar1 + 0x28);
      *(undefined8 *)((long)ppuVar1 + 0x28) = in_x6;
      _objc_release(uVar4);
    }
    _objc_release(in_x6);
    _objc_release(puVar8);
    _objc_release(puVar3);
    return (undefined1 *)ppuVar1;
  }
  return param_1;
}



/* Entry: 105ac222c; end: 105ac231b; -[SCSpectaclesPairingUserEventListenerAnnouncer userViewedInactiveAlert] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000105ac228c */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined1 * FUN_105ac222c(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puStack_490;
  undefined *puStack_488;
  undefined8 uStack_440;
  long lStack_438;
  long *plStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined1 auStack_3f8 [128];
  long lStack_378;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c294200(*(undefined8 *)((long)puVar6 * 8));
      puVar6 = puVar6 + 1;
    } while (puVar8 != puVar6);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c293e80(*(undefined8 *)((long)puVar6 * 8));
      puVar6 = puVar6 + 1;
    } while (puVar8 != puVar6);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c293ee0(*(undefined8 *)((long)puVar6 * 8));
      puVar6 = puVar6 + 1;
    } while (puVar8 != puVar6);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_440;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_438 = 0;
  uStack_440 = 0;
  uStack_428 = 0;
  plStack_430 = (long *)0x0;
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  puVar8 = auStack_3f8;
  uVar4 = 0x10;
  puVar6 = param_1;
  func_0x00010bf52a60();
  if (puVar6 != (undefined1 *)0x0) {
    lVar7 = *plStack_430;
    do {
      puVar8 = (undefined1 *)0x0;
      do {
        if (*plStack_430 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c2915c0(*(undefined8 *)(lStack_438 + (long)puVar8 * 8));
        puVar8 = puVar8 + 1;
      } while (puVar6 != puVar8);
      puVar8 = auStack_3f8;
      uVar4 = 0x10;
      puVar6 = param_1;
      puVar3 = &uStack_440;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
    return param_1;
  }
  ___stack_chk_fail();
  ppuVar1 = &puStack_490;
  _objc_retain(puVar3);
  _objc_retain(puVar8);
  _objc_retain(in_x6);
  puStack_488 = PTR_PTR_1126ebc18;
  puStack_490 = param_1;
  _objc_msgSendSuper2(&puStack_490,PTR_s_init_1125d9248);
  if (ppuVar1 != (undefined1 **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar1 + 8),puVar3);
    _objc_retain(puVar8);
    uVar2 = *(undefined8 *)((long)ppuVar1 + 0x10);
    *(undefined1 **)((long)ppuVar1 + 0x10) = puVar8;
    _objc_release(uVar2);
    *(undefined8 *)((long)ppuVar1 + 0x18) = in_x5;
    *(undefined8 *)((long)ppuVar1 + 0x20) = uVar4;
    _objc_retain(in_x6);
    uVar4 = *(undefined8 *)((long)ppuVar1 + 0x28);
    *(undefined8 *)((long)ppuVar1 + 0x28) = in_x6;
    _objc_release(uVar4);
  }
  _objc_release(in_x6);
  _objc_release(puVar8);
  _objc_release(puVar3);
  return (undefined1 *)ppuVar1;
}



/* Entry: 105ac231c; end: 105ac240b; -[SCSpectaclesPairingUserEventListenerAnnouncer userTappedKeepPairingFromInactiveAlert] */

undefined1 * FUN_105ac231c(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puStack_380;
  undefined *puStack_378;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2e8 [128];
  long lStack_268;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c293e80(*(undefined8 *)((long)puVar6 * 8));
      puVar6 = puVar6 + 1;
    } while (puVar8 != puVar6);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c293ee0(*(undefined8 *)((long)puVar6 * 8));
      puVar6 = puVar6 + 1;
    } while (puVar8 != puVar6);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_330;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  puVar8 = auStack_2e8;
  uVar4 = 0x10;
  puVar6 = param_1;
  func_0x00010bf52a60();
  if (puVar6 != (undefined1 *)0x0) {
    lVar7 = *plStack_320;
    do {
      puVar8 = (undefined1 *)0x0;
      do {
        if (*plStack_320 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c2915c0(*(undefined8 *)(lStack_328 + (long)puVar8 * 8));
        puVar8 = puVar8 + 1;
      } while (puVar6 != puVar8);
      puVar8 = auStack_2e8;
      uVar4 = 0x10;
      puVar6 = param_1;
      puVar3 = &uStack_330;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return param_1;
  }
  ___stack_chk_fail();
  ppuVar1 = &puStack_380;
  _objc_retain(puVar3);
  _objc_retain(puVar8);
  _objc_retain(in_x6);
  puStack_378 = PTR_PTR_1126ebc18;
  puStack_380 = param_1;
  _objc_msgSendSuper2(&puStack_380,PTR_s_init_1125d9248);
  if (ppuVar1 != (undefined1 **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar1 + 8),puVar3);
    _objc_retain(puVar8);
    uVar2 = *(undefined8 *)((long)ppuVar1 + 0x10);
    *(undefined1 **)((long)ppuVar1 + 0x10) = puVar8;
    _objc_release(uVar2);
    *(undefined8 *)((long)ppuVar1 + 0x18) = in_x5;
    *(undefined8 *)((long)ppuVar1 + 0x20) = uVar4;
    _objc_retain(in_x6);
    uVar4 = *(undefined8 *)((long)ppuVar1 + 0x28);
    *(undefined8 *)((long)ppuVar1 + 0x28) = in_x6;
    _objc_release(uVar4);
  }
  _objc_release(in_x6);
  _objc_release(puVar8);
  _objc_release(puVar3);
  return (undefined1 *)ppuVar1;
}



/* Entry: 105ac240c; end: 105ac24fb; -[SCSpectaclesPairingUserEventListenerAnnouncer userTappedSupportFromInactiveAlert] */

undefined1 * FUN_105ac240c(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puStack_270;
  undefined *puStack_268;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [128];
  long lStack_158;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar8 != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c293ee0(*(undefined8 *)((long)puVar6 * 8));
      puVar6 = puVar6 + 1;
    } while (puVar8 != puVar6);
    puVar8 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_220;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  puVar8 = auStack_1d8;
  uVar4 = 0x10;
  puVar6 = param_1;
  func_0x00010bf52a60();
  if (puVar6 != (undefined1 *)0x0) {
    lVar7 = *plStack_210;
    do {
      puVar8 = (undefined1 *)0x0;
      do {
        if (*plStack_210 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c2915c0(*(undefined8 *)(lStack_218 + (long)puVar8 * 8));
        puVar8 = puVar8 + 1;
      } while (puVar6 != puVar8);
      puVar8 = auStack_1d8;
      uVar4 = 0x10;
      puVar6 = param_1;
      puVar3 = &uStack_220;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return param_1;
  }
  ___stack_chk_fail();
  ppuVar1 = &puStack_270;
  _objc_retain(puVar3);
  _objc_retain(puVar8);
  _objc_retain(in_x6);
  puStack_268 = PTR_PTR_1126ebc18;
  puStack_270 = param_1;
  _objc_msgSendSuper2(&puStack_270,PTR_s_init_1125d9248);
  if (ppuVar1 != (undefined1 **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar1 + 8),puVar3);
    _objc_retain(puVar8);
    uVar2 = *(undefined8 *)((long)ppuVar1 + 0x10);
    *(undefined1 **)((long)ppuVar1 + 0x10) = puVar8;
    _objc_release(uVar2);
    *(undefined8 *)((long)ppuVar1 + 0x18) = in_x5;
    *(undefined8 *)((long)ppuVar1 + 0x20) = uVar4;
    _objc_retain(in_x6);
    uVar4 = *(undefined8 *)((long)ppuVar1 + 0x28);
    *(undefined8 *)((long)ppuVar1 + 0x28) = in_x6;
    _objc_release(uVar4);
  }
  _objc_release(in_x6);
  _objc_release(puVar8);
  _objc_release(puVar3);
  return (undefined1 *)ppuVar1;
}



/* Entry: 105ac24fc; end: 105ac25f3; -[SCSpectaclesPairingUserEventListenerAnnouncer userCancelledPairing:] */

undefined1 * FUN_105ac24fc(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 **ppuVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puStack_160;
  undefined *puStack_158;
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
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar7 = auStack_c8;
  uVar5 = 0x10;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar6 = *plStack_100;
    do {
      puVar7 = (undefined1 *)0x0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c2915c0(*(undefined8 *)(lStack_108 + (long)puVar7 * 8));
        puVar7 = puVar7 + 1;
      } while (puVar1 != puVar7);
      puVar7 = auStack_c8;
      uVar5 = 0x10;
      puVar1 = param_1;
      puVar4 = &uStack_110;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  ppuVar2 = &puStack_160;
  _objc_retain(puVar4);
  _objc_retain(puVar7);
  _objc_retain(in_x6);
  puStack_158 = PTR_PTR_1126ebc18;
  puStack_160 = param_1;
  _objc_msgSendSuper2(&puStack_160,PTR_s_init_1125d9248);
  if (ppuVar2 != (undefined1 **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar2 + 8),puVar4);
    _objc_retain(puVar7);
    uVar3 = *(undefined8 *)((long)ppuVar2 + 0x10);
    *(undefined1 **)((long)ppuVar2 + 0x10) = puVar7;
    _objc_release(uVar3);
    *(undefined8 *)((long)ppuVar2 + 0x18) = in_x5;
    *(undefined8 *)((long)ppuVar2 + 0x20) = uVar5;
    _objc_retain(in_x6);
    uVar5 = *(undefined8 *)((long)ppuVar2 + 0x28);
    *(undefined8 *)((long)ppuVar2 + 0x28) = in_x6;
    _objc_release(uVar5);
  }
  _objc_release(in_x6);
  _objc_release(puVar7);
  _objc_release(puVar4);
  return (undefined1 *)ppuVar2;
}



/* Entry: 105ac25f4; end: 105ac26cb; -[SCSpectaclesPairingScopeV2 initWithDelegate:uiContainer:deviceProductType:pairingSource:postPairingInfo:] */

undefined1 *
FUN_105ac25f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ebc18;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ac26cc; end: 105ac26e3; -[SCSpectaclesPairingScopeV2 delegate] */

void FUN_105ac26cc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ac26e4; end: 105ac26eb; -[SCSpectaclesPairingScopeV2 uiContainer] */

undefined8 FUN_105ac26e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105ac26ec; end: 105ac26f3; -[SCSpectaclesPairingScopeV2 pairingSource] */

undefined8 FUN_105ac26ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105ac26f4; end: 105ac26fb; -[SCSpectaclesPairingScopeV2 deviceProductType] */

undefined8 FUN_105ac26f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105ac26fc; end: 105ac2703; -[SCSpectaclesPairingScopeV2 postPairingInfo] */

undefined8 FUN_105ac26fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105ac2704; end: 105ac273b; -[SCSpectaclesPairingScopeV2 .cxx_destruct] */

void FUN_105ac2704(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105ac273c; end: 105ac28af;  */

void FUN_105ac273c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aed70;
  _objc_retain(param_2);
  uVar1 = param_1;
  _objc_retain(param_1);
  func_0x0001090250c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_3 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105ac28bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105ac28b0; end: 105ac28c3;  */

void FUN_105ac28b0(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105ac28bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105ac28c4; end: 105ac2abf;  */

void FUN_105ac28c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126aed70;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aed70;
  _objc_retain(param_7);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_5 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105ac2acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_5 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105ac2ac0; end: 105ac2ae7;  */

void FUN_105ac2ac0(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105ac2acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105ac2ae8; end: 105ac2b8f;  */

void FUN_105ac2ae8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 == 1) {
    func_0x000109026740();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
  }
  else if (param_1 == 0) {
    func_0x000105ac34a4();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
  }
  else {
    uVar3 = 0;
  }
  func_0x000105ac348c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_105ac273c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105ac2b90; end: 105ac2c8b;  */

void FUN_105ac2b90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = param_2;
  _objc_retain(param_2);
  func_0x000105ac3504();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar3);
  if (param_1 == 1) {
    func_0x000109025f78();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_1 == 0) {
    func_0x000105ac351c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = 0;
  }
  puVar2 = puVar1;
  FUN_105ac273c(puVar1,uVar3,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105ac2c8c; end: 105ac304f;  */

void FUN_105ac2c8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 == 1) {
    func_0x000109025f90();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
  }
  else if (param_1 == 0) {
    func_0x000105ac354c();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
  }
  else {
    uVar3 = 0;
  }
  func_0x000105ac34ec();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_105ac273c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105ac3050; end: 105ac31cb;  */

void FUN_105ac3050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar2 = param_1;
  _objc_retain(param_1);
  func_0x000109025ff0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000105ac34bc();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x0001090250c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105ac31cc;
  puStack_80 = &UNK_11084e500;
  uVar5 = param_2;
  uStack_78 = param_2;
  _objc_retain(param_2);
  func_0x000105ac34d4();
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x105ac31e0;
  puStack_a8 = &UNK_11084e500;
  uStack_a0 = param_3;
  _objc_retain(param_3);
  uVar6 = uVar3;
  FUN_105ac28c4(uVar3,uVar2,uVar4,param_1,&puStack_98,uVar5,&puStack_c0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uStack_a0);
  _objc_release(uVar5);
  _objc_release(uStack_78);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 105ac31cc; end: 105ac31f3;  */

void FUN_105ac31cc(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105ac31d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105ac31f4; end: 105ac33c7;  */

void FUN_105ac31f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_1;
  _objc_retain();
  puVar1 = PTR_PTR_1126aed70;
  func_0x000109026410();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000109025078();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar4 = puVar3;
  func_0x0001090263f8();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000109026260();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(&PTR____CFConstantStringClassReference_110e1c3b8);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  func_0x00010bf84b00(param_2);
  lVar7 = *(long *)(param_1 + 0x28);
  if (lVar7 != 0) {
    (**(code **)(lVar7 + 0x10))(lVar7,param_2);
  }
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ac33c8; end: 105ac347b;  */

void FUN_105ac33c8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  func_0x00010bf84b00(param_2);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ac347c; end: 105ac35f3;  */

void FUN_105ac347c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105ac35f4; end: 105ac372f; -[SCSpectaclesDeviceNameEditingView initWithFrame:emoji:displayNameWithoutEmoji:deviceNameLengthLimit:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105ac35f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  puStack_78 = PTR_PTR_1126ebc20;
  uStack_80 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_80,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11272ee14;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11272ee18;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272ee1c) = param_9;
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11272ee20),param_10);
    func_0x00010be3a5a0(puVar1);
    func_0x00010be39ac0(puVar1);
    func_0x00010be3a800(puVar1);
  }
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 105ac3730; end: 105ac39c7; -[SCSpectaclesDeviceNameEditingView _initStackView] */

/* WARNING: Possible PIC construction at 0x000105ac3b2c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ac3730(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined4 uVar16;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc_init();
  lVar13 = (long)_DAT_11272ee24;
  uVar12 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar1;
  _objc_release(uVar12);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar13));
  func_0x00010c166c00(*(undefined8 *)(param_1 + lVar13));
  func_0x00010c190b80(*(undefined8 *)(param_1 + lVar13));
  func_0x00010c207380(0x4014000000000000,*(undefined8 *)(param_1 + lVar13));
  func_0x00010befbb60(param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar13));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar13);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar2;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar3;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar8);
  _objc_release(uVar10);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar9);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar12);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar2 + _DAT_11272ee14) == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
      return;
    }
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126af260;
    _objc_alloc_init();
    lVar14 = (long)_DAT_11272ee2c;
    uVar12 = *(undefined8 *)(lVar2 + lVar14);
    *(undefined **)(lVar2 + lVar14) = puVar1;
    _objc_release(uVar12);
    func_0x00010c16d0c0(*(undefined8 *)(lVar2 + lVar14));
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(lVar2 + lVar14));
    _objc_release(puVar1);
    uVar12 = *(undefined8 *)(lVar2 + lVar14);
    func_0x00010c234280(uVar12);
    func_0x0001090264d0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dc9c0(*(undefined8 *)(lVar2 + lVar14));
    _objc_release(uVar12);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(lVar2 + lVar14));
    _objc_release(puVar1);
    func_0x00010c16cc00(*(undefined8 *)(lVar2 + lVar14));
    func_0x00010c212f20(*(undefined8 *)(lVar2 + lVar14));
    func_0x00010c1edbe0(*(undefined8 *)(lVar2 + lVar14));
    func_0x00010c12ea40(*(undefined8 *)(lVar2 + lVar14));
    func_0x00010c18b5e0(*(undefined8 *)(lVar2 + lVar14));
    func_0x00010bef6d60(*(undefined8 *)(lVar2 + _DAT_11272ee24));
    func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar14));
    uVar12 = *(undefined8 *)(lVar2 + lVar14);
    uVar16 = 0x437a0000;
  }
  else {
    puVar1 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar15 = (long)_DAT_11272ee28;
    uVar12 = *(undefined8 *)(lVar2 + lVar15);
    *(undefined **)(lVar2 + lVar15) = puVar1;
    _objc_release(uVar12);
    func_0x00010c212f20(*(undefined8 *)(lVar2 + lVar15));
    func_0x00010c165e20(*(undefined8 *)(lVar2 + lVar15));
    func_0x00010c213040(*(undefined8 *)(lVar2 + lVar15));
    lVar14 = (long)_DAT_11272ee24;
    func_0x00010bef6d60(*(undefined8 *)(lVar2 + lVar14));
    func_0x00010c219b60(*(undefined8 *)(lVar2 + lVar15));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar9 = *(undefined8 *)(lVar2 + lVar15);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(lVar2 + lVar14);
    func_0x00010bfe0660(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar8);
    _objc_release(uVar12);
    _objc_release(uVar10);
    _objc_release(uVar9);
    uVar12 = *(undefined8 *)(lVar2 + lVar15);
    uVar16 = 0x443b8000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c181f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar16,uVar12,PTR_s_setContentHuggingPriority_forAxi_11263e1e0,0);
  return;
}



/* Entry: 105ac39c8; end: 105ac3b67; -[SCSpectaclesDeviceNameEditingView _initEmojiLabelIfNecessary] */

/* WARNING: Possible PIC construction at 0x000105ac3b2c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ac39c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  
  if (*(long *)(param_1 + _DAT_11272ee14) == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
      return;
    }
    ___stack_chk_fail();
    puVar4 = PTR_PTR_1126af260;
    _objc_alloc_init();
    lVar6 = (long)_DAT_11272ee2c;
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar4;
    _objc_release(uVar5);
    func_0x00010c16d0c0(*(undefined8 *)(param_1 + lVar6));
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar6));
    _objc_release(puVar4);
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c234280(uVar5);
    func_0x0001090264d0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dc9c0(*(undefined8 *)(param_1 + lVar6));
    _objc_release(uVar5);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar6));
    _objc_release(puVar4);
    func_0x00010c16cc00(*(undefined8 *)(param_1 + lVar6));
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar6));
    func_0x00010c1edbe0(*(undefined8 *)(param_1 + lVar6));
    func_0x00010c12ea40(*(undefined8 *)(param_1 + lVar6));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar6));
    func_0x00010bef6d60(*(undefined8 *)(param_1 + _DAT_11272ee24));
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar6));
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    uVar8 = 0x437a0000;
  }
  else {
    puVar4 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar7 = (long)_DAT_11272ee28;
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar4;
    _objc_release(uVar5);
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar7));
    func_0x00010c165e20(*(undefined8 *)(param_1 + lVar7));
    func_0x00010c213040(*(undefined8 *)(param_1 + lVar7));
    lVar6 = (long)_DAT_11272ee24;
    func_0x00010bef6d60(*(undefined8 *)(param_1 + lVar6));
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar7));
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar1 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bfe0660(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    uVar8 = 0x443b8000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c181f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar8,uVar5,PTR_s_setContentHuggingPriority_forAxi_11263e1e0,0);
  return;
}



/* Entry: 105ac3b68; end: 105ac3cbb; -[SCSpectaclesDeviceNameEditingView _initTextView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ac3b68(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af260;
  _objc_alloc_init();
  lVar3 = (long)_DAT_11272ee2c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c16d0c0(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c234280(uVar2);
  func_0x0001090264d0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc9c0(*(undefined8 *)(param_1 + lVar3));
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  func_0x00010c16cc00(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1edbe0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c12ea40(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010bef6d60(*(undefined8 *)(param_1 + _DAT_11272ee24));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c181f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x437a0000,*(undefined8 *)(param_1 + lVar3),
             PTR_s_setContentHuggingPriority_forAxi_11263e1e0,0);
  return;
}



/* Entry: 105ac3cbc; end: 105ac3cd7; -[SCSpectaclesDeviceNameEditingView reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ac3cbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272ee2c),PTR_s_setText__1126625f0,
             *(undefined8 *)(param_1 + _DAT_11272ee18));
  return;
}



/* Entry: 105ac3cd8; end: 105ac3ce7; -[SCSpectaclesDeviceNameEditingView currentText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ac3cd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272ee2c),PTR_s_text_1126787e8);
  return;
}



/* Entry: 105ac3ce8; end: 105ac3d53; -[SCSpectaclesDeviceNameEditingView currentTextWithEmoji] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ac3ce8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_11272ee14);
  lVar1 = *(long *)(param_1 + _DAT_11272ee2c);
  func_0x00010c26b700(lVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010c25ce40(lVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105ac3d54; end: 105ac3d9f; -[SCSpectaclesDeviceNameEditingView isCurrentTextEmpty] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105ac3d54(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11272ee2c);
  func_0x00010c26b700(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  return lVar2 == 0;
}



/* Entry: 105ac3da0; end: 105ac3dff; -[SCSpectaclesDeviceNameEditingView isCurrentTextUnchanged] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ac3da0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272ee2c);
  func_0x00010c26b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105ac3e00; end: 105ac3e0f; -[SCSpectaclesDeviceNameEditingView becomeFirstResponder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ac3e00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf179b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272ee2c),PTR_s_becomeFirstResponder_1125a3810);
  return;
}



/* Entry: 105ac3e10; end: 105ac3e5f; -[SCSpectaclesDeviceNameEditingView resignFirstResponder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ac3e10(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ebc20;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_resignFirstResponder_11262c258);
  func_0x00010c13a0e0(*(undefined8 *)(param_1 + _DAT_11272ee2c));
  return;
}



/* Entry: 105ac3e60; end: 105ac3edb; -[SCSpectaclesDeviceNameEditingView textViewDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ac3e60(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11272ee20;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c26bb80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105ac3edc; end: 105ac3f1b; -[SCSpectaclesDeviceNameEditingView textViewShouldBeginEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105ac3edc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11272ee20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c22e320();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 105ac3f1c; end: 105ac3f9b; -[SCSpectaclesDeviceNameEditingView textViewShouldReturn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105ac3f1c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11272ee20;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 1;
  }
  else {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c26cc60();
    _objc_release(param_1);
  }
  return lVar3;
}



/* Entry: 105ac3f9c; end: 105ac409f; -[SCSpectaclesDeviceNameEditingView textField:shouldChangeCharactersInRange:replacementString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105ac3f9c(long param_1,undefined8 param_2,ulong param_3,long param_4,long param_5,
                  long param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar1 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  _objc_release(uVar1);
  if (uVar2 < (ulong)(param_5 + param_4)) {
    bVar4 = false;
  }
  else {
    lVar3 = param_6;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      bVar4 = true;
    }
    else {
      uVar1 = param_3;
      func_0x00010c26b700(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c08fac0();
      lVar3 = param_6;
      func_0x00010c08fac0(param_6,param_2,4);
      _objc_release(uVar1);
      bVar4 = (uVar2 - param_5) + lVar3 <= *(ulong *)(param_1 + _DAT_11272ee1c);
    }
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return bVar4;
}



/* Entry: 105ac40a0; end: 105ac411b; -[SCSpectaclesDeviceNameEditingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ac40a0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272ee20);
  _objc_storeStrong(param_1 + _DAT_11272ee18,0);
  _objc_storeStrong(param_1 + _DAT_11272ee14,0);
  _objc_storeStrong(param_1 + _DAT_11272ee28,0);
  _objc_storeStrong(param_1 + _DAT_11272ee2c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272ee24,0);
  return;
}



/* Entry: 105ac411c; end: 105ac41df; -[SCSpectaclesPostPairingScope initWithUIContainer:scopeDelegate:postPairingInfo:] */

undefined1 *
FUN_105ac411c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ebc28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


