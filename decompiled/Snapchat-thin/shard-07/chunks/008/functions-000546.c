/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a2e19c; end: 105a2e1f3;  */

void FUN_105a2e19c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be56620();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a2e1f4; end: 105a2e28b; -[SCSpectaclesAppInitializationCompleteEntryPoint _logNotification:isSystemNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2e1f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272db7c;
  _objc_retain(param_3);
  param_1 = param_1 + lVar2;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf027a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab020();
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a2e28c; end: 105a2e44f; -[SCSpectaclesAppInitializationCompleteEntryPoint _managerDidLoadDevices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2e28c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + _DAT_11272db7c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beefce0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_48,param_1);
  puVar4 = PTR_PTR_1126b6ae8;
  func_0x00010c22ba80(PTR_PTR_1126b6ae8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae960;
  puVar5 = PTR_PTR_1126c14e8;
  func_0x00010c105280(PTR_PTR_1126c14e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c248480(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ae970;
  func_0x00010c0c7320(PTR_PTR_1126ae970);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c2a14e0(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105a2e450; end: 105a2e47b;  */

void FUN_105a2e450(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be768a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a2e47c; end: 105a2e5cf; -[SCSpectaclesAppInitializationCompleteEntryPoint _postStartupInitialization] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2e47c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1;
  func_0x00010be62740();
  lVar6 = (long)_DAT_11272db7c;
  if ((int)lVar1 != 0) {
    lVar1 = param_1 + lVar6;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c249020();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09b3c0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_1 + lVar6;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c249020();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar5 != 0) {
    param_1 = param_1 + lVar6;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bfb0bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c107ae0();
    _objc_release(lVar6);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105a2e5d0; end: 105a2e69b; -[SCSpectaclesAppInitializationCompleteEntryPoint _needsLoadDevicesFromServer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_105a2e5d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  lVar1 = param_1 + _DAT_11272db8c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfde020();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11272db90;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c293780();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c07c8c0();
    uVar5 = (uint)lVar2 ^ 1;
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  return uVar5;
}



/* Entry: 105a2e69c; end: 105a2e713; -[SCSpectaclesAppInitializationCompleteEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2e69c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272db8c);
  _objc_destroyWeak(param_1 + _DAT_11272db88);
  _objc_destroyWeak(param_1 + _DAT_11272db80);
  _objc_destroyWeak(param_1 + _DAT_11272db7c);
  _objc_destroyWeak(param_1 + _DAT_11272db90);
  _objc_destroyWeak(param_1 + _DAT_11272db94);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272db84,0);
  return;
}



/* Entry: 105a2e714; end: 105a2e78f; -[SCSpectaclesDeviceReportIssueEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2e714(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + _DAT_11272db98;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c253460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be92b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetEventObserver_112582468);
  return;
}



/* Entry: 105a2e790; end: 105a2e9cf; -[SCSpectaclesDeviceReportIssueEntryPoint _resetEventObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2e790(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar9 = param_1 + _DAT_11272db98;
  _objc_loadWeakRetained(lVar9);
  lVar1 = lVar9;
  func_0x00010c253460();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf486e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_11272db9c;
  _objc_storeWeak(param_1 + lVar8,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar9);
  lVar9 = (long)_DAT_11272dba0;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar9));
  puVar4 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar4;
  _objc_release(uVar7);
  _objc_initWeak(auStack_68,param_1);
  param_1 = param_1 + lVar8;
  _objc_loadWeakRetained(param_1);
  lVar9 = param_1;
  func_0x00010bfa1c80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar9;
  func_0x00010bf70e40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c22a400();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0e0ea0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  lVar6 = lVar5;
  func_0x00010c25ff60(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 105a2e9d0; end: 105a2e9fb;  */

void FUN_105a2e9d0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be91860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a2e9fc; end: 105a2eb5b; -[SCSpectaclesDeviceReportIssueEntryPoint _requestShakeToReport] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2e9fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_11272dba4;
  lVar1 = *(long *)(param_1 + lVar7);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  lVar1 = param_1;
  func_0x00010becd7c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar3 = param_1;
    func_0x00010becd7c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40(puVar2,param_2,lVar3,1);
    _objc_release(lVar3);
    puVar4 = PTR_PTR_1126b6798;
    _objc_alloc(PTR_PTR_1126b6798);
    lVar3 = param_1 + _DAT_11272db9c;
    _objc_loadWeakRetained(lVar3);
    _objc_retain();
    lVar5 = lVar3;
    func_0x00010bfd38e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf70e00();
    func_0x00010c058420(puVar4,param_2,puVar2,param_1,2,lVar3,lVar6);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar3);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar7),param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a2eb5c; end: 105a2ec2b; -[SCSpectaclesDeviceReportIssueEntryPoint _topViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2eb5c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11272dba8;
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126c14f0;
  if (lVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    param_1 = param_1 + lVar4;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c1417c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c275160(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105a2ec2c; end: 105a2ec9b; -[SCSpectaclesDeviceReportIssueEntryPoint statusCoordinator:needsToUpdateStateForDevice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2ec2c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11272db9c;
  _objc_retain(param_4);
  lVar1 = param_1 + lVar1;
  _objc_loadWeakRetained();
  _objc_release(param_4);
  _objc_release(lVar1);
  if (param_4 != lVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010be92b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetEventObserver_112582468);
    return;
  }
  return;
}



/* Entry: 105a2ec9c; end: 105a2ed13; -[SCSpectaclesDeviceReportIssueEntryPoint spectaclesReportIssueScopeDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2ec9c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272dba4;
  lVar1 = *(long *)(param_1 + lVar2);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (lVar1 == param_3) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105a2ed14; end: 105a2ed8b; -[SCSpectaclesDeviceReportIssueEntryPoint spectaclesReportIssueScopeWantsToDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2ed14(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272dba4;
  lVar1 = *(long *)(param_1 + lVar2);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (lVar1 == param_3) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105a2ed8c; end: 105a2edfb; -[SCSpectaclesDeviceReportIssueEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2ed8c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272dba4,0);
  _objc_destroyWeak(param_1 + _DAT_11272db98);
  _objc_destroyWeak(param_1 + _DAT_11272dbac);
  _objc_destroyWeak(param_1 + _DAT_11272dba8);
  _objc_storeStrong(param_1 + _DAT_11272dba0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272db9c);
  return;
}



/* Entry: 105a2edfc; end: 105a2f037; -[SCSpectaclesMemoriesCloudSyncEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2edfc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar1 = param_1 + _DAT_11272dbb4;
  _objc_loadWeakRetained(lVar1);
  lVar6 = lVar1;
  func_0x00010c249020();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(lVar1);
  _objc_initWeak(auStack_68,param_1);
  lVar6 = (long)_DAT_11272dbb8;
  lVar1 = param_1 + lVar6;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf72840();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105a2f038;
  puStack_78 = &UNK_110846510;
  _objc_copyWeak(auStack_70,auStack_68);
  lVar4 = lVar3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11272dbbc);
  *(long *)(param_1 + _DAT_11272dbbc) = lVar4;
  _objc_release(uVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar6 = param_1 + lVar6;
  _objc_loadWeakRetained();
  lVar1 = lVar6;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf75dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  lVar3 = lVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11272dbc0);
  *(long *)(param_1 + _DAT_11272dbc0) = lVar3;
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar6);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 105a2f038; end: 105a2f0bb;  */

void FUN_105a2f038(long param_1,undefined8 param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (lVar1 = param_1, func_0x00010c234f60(), (int)lVar1 != 0)) {
    func_0x00010c2014a0(param_1,param_2,0);
    func_0x00010becfae0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a2f0bc; end: 105a2f0ef; -[SCSpectaclesMemoriesCloudSyncEntryPoint spectaclesDevice:didReceiveCloudUploadEvent:] */

void FUN_105a2f0bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 10) {
    func_0x00010c2014a0(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010becfaf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__triggerBackup_112591860);
    return;
  }
  return;
}



/* Entry: 105a2f0f0; end: 105a2f117; -[SCSpectaclesMemoriesCloudSyncEntryPoint spectaclesDeviceDidUpdateBackupStatus:] */

void FUN_105a2f0f0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c2014a0(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010becfaf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__triggerBackup_112591860);
  return;
}



/* Entry: 105a2f118; end: 105a2f1e3; -[SCSpectaclesMemoriesCloudSyncEntryPoint _triggerBackup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2f118(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + _DAT_11272dbc4;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1da0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_11272dbc8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0c7e20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27c2e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a2f1e4; end: 105a2f1f7; -[SCSpectaclesMemoriesCloudSyncEntryPoint shouldTriggerFetchWhenAppBecomesActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_105a2f1e4(long param_1)

{
  return *(byte *)(param_1 + _DAT_11272dbb0) & 1;
}



/* Entry: 105a2f1f8; end: 105a2f207; -[SCSpectaclesMemoriesCloudSyncEntryPoint setShouldTriggerFetchWhenAppBecomesActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2f1f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11272dbb0) = param_3;
  return;
}



/* Entry: 105a2f208; end: 105a2f283; -[SCSpectaclesMemoriesCloudSyncEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2f208(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272dbc4);
  _objc_destroyWeak(param_1 + _DAT_11272dbc8);
  _objc_destroyWeak(param_1 + _DAT_11272dbb4);
  _objc_destroyWeak(param_1 + _DAT_11272dbcc);
  _objc_destroyWeak(param_1 + _DAT_11272dbb8);
  _objc_storeStrong(param_1 + _DAT_11272dbc0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272dbbc,0);
  return;
}



/* Entry: 105a2f284; end: 105a2f2ff; -[SCSpectaclesMyStorySyncEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2f284(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + _DAT_11272dbd0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c253460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bee19b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSyncTimer_112596010);
  return;
}



/* Entry: 105a2f300; end: 105a2f303; -[SCSpectaclesMyStorySyncEntryPoint statusCoordinatorNumberOfDevicesUpdated:] */

void FUN_105a2f300(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee19b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSyncTimer_112596010);
  return;
}



/* Entry: 105a2f304; end: 105a2f37b; -[SCSpectaclesMyStorySyncEntryPoint statusCoordinator:needsToUpdateStateForDevice:] */

void FUN_105a2f304(void)

{
  _dispatch_time(0,5000000000);
  func_0x00010058c530();
  return;
}



/* Entry: 105a2f37c; end: 105a2f383;  */

void FUN_105a2f37c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee19b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateSyncTimer_112596010);
  return;
}



/* Entry: 105a2f384; end: 105a2f4f7; -[SCSpectaclesMyStorySyncEntryPoint _shouldSyncStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105a2f384(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + _DAT_11272dbd0;
  _objc_loadWeakRetained();
  lVar9 = param_1;
  func_0x00010c253460();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar8;
  func_0x00010bf48720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar9);
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  lVar9 = 0;
  if (lVar2 != 0) {
    do {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(lVar1);
        }
        uVar3 = *(ulong *)(lVar9 * 8);
        func_0x00010bfd38e0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c074bc0();
        _objc_release(uVar3);
        if ((uVar4 & 1) != 0) {
          lVar9 = 1;
          goto LAB_105a2f4b4;
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    lVar9 = 0;
  }
LAB_105a2f4b4:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return lVar9;
  }
  ___stack_chk_fail();
  lVar9 = lVar1;
  func_0x00010beb6be0();
  lVar8 = (long)_DAT_11272dbd4;
  if (((int)lVar9 != 0) && (*(long *)(lVar1 + lVar8) == 0)) {
    puVar5 = PTR_PTR_1126bc890;
    func_0x00010c150380(0x404e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(lVar1 + lVar8);
    *(undefined **)(lVar1 + lVar8) = puVar5;
    _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bee0e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s__updateStory_112595d40);
    return lVar1;
  }
  func_0x00010c069d00();
  lVar9 = *(long *)(lVar1 + lVar8);
  *(undefined8 *)(lVar1 + lVar8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return lVar9;
}



/* Entry: 105a2f4f8; end: 105a2f587; -[SCSpectaclesMyStorySyncEntryPoint _updateSyncTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2f4f8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010beb6be0();
  lVar4 = (long)_DAT_11272dbd4;
  if (((int)lVar1 != 0) && (*(long *)(param_1 + lVar4) == 0)) {
    puVar2 = PTR_PTR_1126bc890;
    func_0x00010c150380(0x404e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bee0e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateStory_112595d40);
    return;
  }
  func_0x00010c069d00();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105a2f588; end: 105a2f5ff; -[SCSpectaclesMyStorySyncEntryPoint _updateStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2f588(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_11272dbd8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c258d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa8d40();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a2f600; end: 105a2f653; -[SCSpectaclesMyStorySyncEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2f600(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272dbd8);
  _objc_destroyWeak(param_1 + _DAT_11272dbd0);
  _objc_destroyWeak(param_1 + _DAT_11272dbdc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272dbd4,0);
  return;
}



/* Entry: 105a2f654; end: 105a2f6e7; -[SCSpectaclesNotificationProcessor initWithPreferences:notificationManager:] */

undefined1 *
FUN_105a2f654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eb600;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a2f6e8; end: 105a2f927; -[SCSpectaclesNotificationProcessor processNotification:] */

void FUN_105a2f6e8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c11c420();
  if (lVar1 == 0x78) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c249620(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf4b900(lVar3,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar5 != 0) {
      puVar6 = (undefined *)(param_1 + 8);
      _objc_loadWeakRetained();
      puVar7 = puVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c0d3c80();
      if (puVar9 == (undefined *)0x0) {
        puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar9);
        puVar10 = puVar9;
      }
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      lVar1 = param_3;
      func_0x00010c249620(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360(puVar10,param_2,lVar1);
      _objc_release(lVar1);
      lVar1 = param_1 + 8;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640();
      _objc_release(lVar2);
      _objc_release(lVar1);
      puVar6 = PTR_PTR_1126b1370;
      _objc_alloc(PTR_PTR_1126b1370);
      lVar1 = param_3;
      func_0x00010c249620(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04b080(puVar6,param_2,0x79,lVar1);
      _objc_release(lVar1);
      param_1 = param_1 + 0x10;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa0a0();
      _objc_release(lVar1);
      _objc_release(param_1);
      _objc_release(puVar6);
      _objc_release(puVar10);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a2f928; end: 105a2f92f; -[SCSpectaclesNotificationProcessor shouldFilterNotification:] */

undefined8 FUN_105a2f928(void)

{
  return 0;
}



/* Entry: 105a2f930; end: 105a2f957; -[SCSpectaclesNotificationProcessor .cxx_destruct] */

void FUN_105a2f930(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105a2f958; end: 105a2fa6f; -[SCSpectaclesNotificationProcessorEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2f958(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126c14f8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11272dbe8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_11272dbec;
  lVar4 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0dc6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0381a0(puVar1,param_2,lVar3,lVar5);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11272dbf0);
  *(undefined **)(param_1 + _DAT_11272dbf0) = puVar1;
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + lVar7;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf05c00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befabc0();
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a2fa70; end: 105a2fb2f; -[SCSpectaclesNotificationProcessorEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2fa70(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_50;
  undefined *puStack_48;
  
  lVar1 = param_1 + _DAT_11272dbec;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf05c00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11272dbf0;
  func_0x00010c12dd20();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = 0;
  _objc_release(uVar4);
  puStack_48 = PTR_PTR_1126eb608;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a2fb30; end: 105a2fb83; -[SCSpectaclesNotificationProcessorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2fb30(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272dbec);
  _objc_destroyWeak(param_1 + _DAT_11272dbe8);
  _objc_destroyWeak(param_1 + _DAT_11272dbf4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272dbf0,0);
  return;
}



/* Entry: 105a2fb84; end: 105a2fc3b; -[SCSpectaclesActivateDeviceFlow activateLastConnectedDevice] */

void FUN_105a2fb84(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return;
  }
  uVar1 = param_1;
  func_0x00010c249020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar1 != 0) && (uVar2 = uVar1, func_0x00010c082060(), (uVar2 & 1) == 0)) {
    func_0x00010beef9e0(param_1,param_2,uVar1,0);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105a2fc3c; end: 105a2fd37;  */

long FUN_105a2fc3c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar4 = param_2;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c088780();
  lVar2 = param_3;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c088780();
  _objc_release(lVar2);
  _objc_release(lVar4);
  if (lVar1 < lVar3) {
    lVar4 = 1;
  }
  else {
    lVar4 = param_2;
    func_0x00010c0692a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010c088780();
    lVar2 = param_3;
    func_0x00010c0692a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c088780();
    _objc_release(lVar2);
    _objc_release(lVar4);
    lVar4 = -(ulong)(lVar3 < lVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return lVar4;
}



/* Entry: 105a2fd38; end: 105a2fed3; -[SCSpectaclesActivateDeviceFlow activateDevice:withCompletion:] */

void FUN_105a2fd38(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010c252440();
  if ((lVar2 == 0) || (lVar2 = param_1, func_0x00010c252440(), lVar2 == 2)) {
    func_0x00010c162340(param_1);
    uVar3 = param_3;
    func_0x00010c0692a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f260(puVar1);
    func_0x00010c286e00(uVar3);
    _objc_release(puVar4);
    _objc_release(uVar3);
    func_0x00010c17fb20(param_1);
  }
  else {
    lVar2 = param_1;
    func_0x00010c252440();
    if (lVar2 != 1) {
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))(param_4,0,0);
      }
      goto LAB_105a2fe00;
    }
    func_0x00010c162340(param_1);
    uVar3 = param_3;
    func_0x00010c0692a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f260(puVar1);
    func_0x00010c286e00(uVar3);
    _objc_release(puVar4);
    _objc_release(uVar3);
    func_0x00010c17fb20(param_1);
  }
  func_0x00010becf280(param_1);
LAB_105a2fe00:
  func_0x00010bfd3020(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a2fed4; end: 105a3001b; -[SCSpectaclesActivateDeviceFlow waitForDeviceActivationWithCompletion:] */

void FUN_105a2fed4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bef0140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    (**(code **)(param_3 + 0x10))(param_3,0,0);
  }
  else {
    lVar1 = param_1;
    func_0x00010bf43fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(lVar1);
    func_0x00010c17fb20(param_1);
    _objc_release(lVar1);
    _objc_release(param_3);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105a3001c; end: 105a30023; -[SCSpectaclesActivateDeviceFlow cancel] */

void FUN_105a3001c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0e170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__failActivationWithCancelled__1125611f8,1);
  return;
}



/* Entry: 105a30024; end: 105a3002b; -[SCSpectaclesActivateDeviceFlow deactivateAllDevicesForPairing] */

void FUN_105a30024(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState__112591648,5);
  return;
}



/* Entry: 105a3002c; end: 105a30067; -[SCSpectaclesActivateDeviceFlow reactivateAllDevicesForPairingFailed] */

void FUN_105a3002c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 == 5) {
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState__112591648,0);
    return;
  }
  return;
}



/* Entry: 105a30068; end: 105a300c7; -[SCSpectaclesActivateDeviceFlow activateDeviceForPairingSuccess:] */

void FUN_105a30068(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 == 5) {
    func_0x00010c1626e0(param_1,param_2,param_3);
    func_0x00010becf280(param_1,param_2,1);
    func_0x00010bfd3020(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a300c8; end: 105a300cf; -[SCSpectaclesActivateDeviceFlow freezeActiveDeviceForFirmwareUpdateStarted] */

void FUN_105a300c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState__112591648,6);
  return;
}



/* Entry: 105a300d0; end: 105a3015b; -[SCSpectaclesActivateDeviceFlow unfreezeActiveDeviceForFirmwareUpdateFinished] */

void FUN_105a300d0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_1;
  func_0x00010c252440();
  if (lVar2 == 6) {
    lVar2 = param_1;
    func_0x00010bef07c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf48d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf48920();
    _objc_release(lVar3);
    _objc_release(lVar2);
    uVar1 = 1;
    if ((int)lVar4 == 0) {
      uVar1 = 2;
    }
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState__112591648,uVar1);
    return;
  }
  return;
}



/* Entry: 105a3015c; end: 105a30257; -[SCSpectaclesActivateDeviceFlow _failActivationWithCancelled:] */

/* WARNING: Possible PIC construction at 0x000105a30210: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105a30214) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_105a3015c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c162340(param_1,param_2,0);
  lVar1 = param_1;
  func_0x00010bf43fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf43fe0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    _objc_release(lVar1);
  }
  func_0x00010c17fb20(param_1);
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 == 4) {
    uVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c252440();
    if (lVar1 != 3) {
      return;
    }
    uVar2 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState__112591648,uVar2);
  return;
}



/* Entry: 105a30258; end: 105a303b7; -[SCSpectaclesActivateDeviceFlow _deactivateDevicesExcept:] */

/* WARNING: Possible PIC construction at 0x000105a30584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105a30788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105a30588) */
/* WARNING: Removing unreachable block (ram,0x000105a3078c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_105a30258(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined1 *unaff_x23;
  long unaff_x24;
  long lVar10;
  long unaff_x25;
  undefined1 *puVar11;
  long unaff_x26;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined1 auStack_2e0 [48];
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  code *pcStack_2a0;
  undefined *puStack_298;
  undefined1 auStack_290 [8];
  undefined1 auStack_288 [8];
  long lStack_280;
  undefined1 *puStack_278;
  undefined1 *puStack_270;
  undefined1 *puStack_268;
  undefined1 **ppuStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined1 *puStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined1 *puStack_148;
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
  long lStack_68;
  
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
  lVar9 = param_1;
  func_0x00010c249020();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar1 = lVar10;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    unaff_x25 = *plStack_120;
    do {
      unaff_x26 = 0;
      do {
        if (*plStack_120 != unaff_x25) {
          _objc_enumerationMutation(lVar10);
        }
        unaff_x23 = *(undefined1 **)(lStack_128 + unaff_x26 * 8);
        if (unaff_x23 != param_3) {
          unaff_x24 = param_1;
          func_0x00010c249020();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf65c80();
          _objc_release(unaff_x24);
        }
        unaff_x26 = unaff_x26 + 1;
      } while (lVar1 != unaff_x26);
      lVar1 = lVar10;
      func_0x00010bf52a60();
      lVar9 = 0;
    } while (lVar1 != 0);
  }
  _objc_release(lVar10);
  puVar7 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_250;
  pcStack_138 = FUN_105a303b8;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  puVar11 = puVar7;
  lStack_180 = unaff_x26;
  lStack_178 = unaff_x25;
  lStack_170 = unaff_x24;
  puStack_168 = unaff_x23;
  lStack_160 = lVar9;
  lStack_158 = lVar10;
  lStack_150 = param_1;
  puStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010c249020();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar11;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    lVar10 = *plStack_240;
    do {
      puVar11 = (undefined1 *)0x0;
      do {
        if (*plStack_240 != lVar10) {
          _objc_enumerationMutation(puVar2);
        }
        lVar9 = *(long *)(lStack_248 + (long)puVar11 * 8);
        puVar4 = puVar7;
        func_0x00010c249020(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef9c0();
        _objc_release(puVar4);
        puVar11 = puVar11 + 1;
      } while (puVar3 != puVar11);
      puVar3 = puVar2;
      puVar6 = &uStack_250;
      func_0x00010bf52a60();
      puVar11 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_300;
  pcStack_258 = FUN_105a304f0;
  puVar4 = puVar3;
  lStack_280 = lVar9;
  puStack_278 = puVar11;
  puStack_270 = puVar2;
  puStack_268 = puVar7;
  ppuStack_260 = &puStack_140;
  func_0x00010c252440();
  if ((undefined8 *)puVar4 == puVar6) {
    return;
  }
  puVar7 = puVar3;
  func_0x00010c252860(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069d00();
  _objc_release(puVar7);
  func_0x00010c20a1a0(puVar3);
  func_0x00010c209fc0(puVar3);
  if ((long)puVar6 < 3) {
    if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010be86250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(puVar3,PTR_s__reactivateAllDevices_11257f230);
      return;
    }
    if (puVar6 != (undefined8 *)0x1) {
      if (puVar6 != (undefined8 *)0x2) {
        return;
      }
      _objc_initWeak(auStack_288,puVar3);
      puVar5 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
      puStack_2b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2a8 = 0xc2000000;
      pcStack_2a0 = FUN_105a308f4;
      puStack_298 = &UNK_1108b0900;
      ppuVar8 = &puStack_2b0;
      _objc_copyWeak(auStack_290,auStack_288);
      func_0x00010c150360(0x4034000000000000,puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20a1a0(puVar3);
LAB_105a3087c:
      _objc_release(puVar5);
      _objc_destroyWeak(ppuVar8 + 4);
      _objc_destroyWeak(auStack_288);
      return;
    }
  }
  else {
    if ((long)puVar6 < 5) {
      if (puVar6 == (undefined8 *)0x3) {
        puVar7 = puVar3;
        func_0x00010c249020(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar3;
        func_0x00010bef0140(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef9c0(puVar7);
        _objc_release(puVar11);
        _objc_release(puVar7);
        _objc_initWeak(auStack_288,puVar3);
        puVar5 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
        puStack_300 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_2f8 = 0xc2000000;
        uStack_2f0 = 0x105a309b8;
        puStack_2e8 = &UNK_1108b0900;
        _objc_copyWeak(auStack_2e0,auStack_288);
        func_0x00010c150360(0x4024000000000000,puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20a1a0(puVar3);
        goto LAB_105a3087c;
      }
      if (puVar6 != (undefined8 *)0x4) {
        return;
      }
      func_0x00010c1626e0(puVar3);
      puVar7 = (undefined1 *)0x0;
      goto code_r0x00010bdf82e0;
    }
    if (puVar6 == (undefined8 *)0x5) {
      func_0x00010c1626e0(puVar3);
      puVar7 = (undefined1 *)0x0;
      goto code_r0x00010bdf82e0;
    }
    if (puVar6 != (undefined8 *)0x6) {
      return;
    }
    puVar7 = puVar3;
    func_0x00010bef0140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar7 != (undefined1 *)0x0) {
      func_0x00010c162340(puVar3);
      puVar7 = puVar3;
      func_0x00010bf43fe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar7 != (undefined1 *)0x0) {
        puVar7 = puVar3;
        func_0x00010bf43fe0();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(puVar7 + 0x10))();
        _objc_release(puVar7);
        func_0x00010c17fb20(puVar3);
      }
    }
  }
  puVar7 = puVar3;
  func_0x00010bef07c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
code_r0x00010bdf82e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdf82f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar3,PTR_s__deactivateDevicesExcept__11255ba58,puVar7);
  return;
}



/* Entry: 105a303b8; end: 105a304ef; -[SCSpectaclesActivateDeviceFlow _reactivateAllDevices] */

/* WARNING: Possible PIC construction at 0x000105a30584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105a30788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105a30588) */
/* WARNING: Removing unreachable block (ram,0x000105a3078c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_105a303b8(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined8 unaff_x22;
  long lVar7;
  undefined1 *puVar8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined1 auStack_1b0 [48];
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
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
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar8 = param_1;
  func_0x00010c249020();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar8;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    lVar7 = *plStack_110;
    do {
      puVar8 = (undefined1 *)0x0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(puVar1);
        }
        unaff_x22 = *(undefined8 *)(lStack_118 + (long)puVar8 * 8);
        puVar3 = param_1;
        func_0x00010c249020(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef9c0();
        _objc_release(puVar3);
        puVar8 = puVar8 + 1;
      } while (puVar2 != puVar8);
      puVar2 = puVar1;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
      puVar8 = (undefined1 *)0x0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_1d0;
  pcStack_128 = FUN_105a304f0;
  puVar3 = puVar2;
  uStack_150 = unaff_x22;
  puStack_148 = puVar8;
  puStack_140 = puVar1;
  puStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x00010c252440();
  if ((undefined8 *)puVar3 == puVar5) {
    return;
  }
  puVar8 = puVar2;
  func_0x00010c252860(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069d00();
  _objc_release(puVar8);
  func_0x00010c20a1a0(puVar2);
  func_0x00010c209fc0(puVar2);
  if ((long)puVar5 < 3) {
    if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010be86250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(puVar2,PTR_s__reactivateAllDevices_11257f230);
      return;
    }
    if (puVar5 != (undefined8 *)0x1) {
      if (puVar5 != (undefined8 *)0x2) {
        return;
      }
      _objc_initWeak(auStack_158,puVar2);
      puVar4 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
      puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_178 = 0xc2000000;
      pcStack_170 = FUN_105a308f4;
      puStack_168 = &UNK_1108b0900;
      ppuVar6 = &puStack_180;
      _objc_copyWeak(auStack_160,auStack_158);
      func_0x00010c150360(0x4034000000000000,puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20a1a0(puVar2);
LAB_105a3087c:
      _objc_release(puVar4);
      _objc_destroyWeak(ppuVar6 + 4);
      _objc_destroyWeak(auStack_158);
      return;
    }
  }
  else {
    if ((long)puVar5 < 5) {
      if (puVar5 == (undefined8 *)0x3) {
        puVar8 = puVar2;
        func_0x00010c249020(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar2;
        func_0x00010bef0140(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef9c0(puVar8);
        _objc_release(puVar1);
        _objc_release(puVar8);
        _objc_initWeak(auStack_158,puVar2);
        puVar4 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
        puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1c8 = 0xc2000000;
        uStack_1c0 = 0x105a309b8;
        puStack_1b8 = &UNK_1108b0900;
        _objc_copyWeak(auStack_1b0,auStack_158);
        func_0x00010c150360(0x4024000000000000,puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20a1a0(puVar2);
        goto LAB_105a3087c;
      }
      if (puVar5 != (undefined8 *)0x4) {
        return;
      }
      func_0x00010c1626e0(puVar2);
      puVar8 = (undefined1 *)0x0;
      goto code_r0x00010bdf82e0;
    }
    if (puVar5 == (undefined8 *)0x5) {
      func_0x00010c1626e0(puVar2);
      puVar8 = (undefined1 *)0x0;
      goto code_r0x00010bdf82e0;
    }
    if (puVar5 != (undefined8 *)0x6) {
      return;
    }
    puVar8 = puVar2;
    func_0x00010bef0140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar8 != (undefined1 *)0x0) {
      func_0x00010c162340(puVar2);
      puVar8 = puVar2;
      func_0x00010bf43fe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar8 != (undefined1 *)0x0) {
        puVar8 = puVar2;
        func_0x00010bf43fe0();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(puVar8 + 0x10))();
        _objc_release(puVar8);
        func_0x00010c17fb20(puVar2);
      }
    }
  }
  puVar8 = puVar2;
  func_0x00010bef07c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
code_r0x00010bdf82e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdf82f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar2,PTR_s__deactivateDevicesExcept__11255ba58,puVar8);
  return;
}



/* Entry: 105a304f0; end: 105a308f3; -[SCSpectaclesActivateDeviceFlow _transitionToState:] */

/* WARNING: Possible PIC construction at 0x000105a30584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105a30788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105a30588) */
/* WARNING: Removing unreachable block (ram,0x000105a3078c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_105a304f0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [48];
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar4 = &puStack_b0;
  lVar3 = param_1;
  func_0x00010c252440();
  if (lVar3 == param_3) {
    return;
  }
  lVar3 = param_1;
  func_0x00010c252860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069d00();
  _objc_release(lVar3);
  func_0x00010c20a1a0(param_1);
  func_0x00010c209fc0(param_1);
  if (param_3 < 3) {
    if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be86250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reactivateAllDevices_11257f230);
      return;
    }
    if (param_3 != 1) {
      if (param_3 != 2) {
        return;
      }
      _objc_initWeak(auStack_38,param_1);
      puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_105a308f4;
      puStack_48 = &UNK_1108b0900;
      ppuVar4 = &puStack_60;
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010c150360(0x4034000000000000,puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20a1a0(param_1);
LAB_105a3087c:
      _objc_release(puVar1);
      _objc_destroyWeak(ppuVar4 + 4);
      _objc_destroyWeak(auStack_38);
      return;
    }
  }
  else {
    if (param_3 < 5) {
      if (param_3 == 3) {
        lVar3 = param_1;
        func_0x00010c249020(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_1;
        func_0x00010bef0140(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef9c0(lVar3);
        _objc_release(lVar2);
        _objc_release(lVar3);
        _objc_initWeak(auStack_38,param_1);
        puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0xc2000000;
        uStack_a0 = 0x105a309b8;
        puStack_98 = &UNK_1108b0900;
        _objc_copyWeak(auStack_90,auStack_38);
        func_0x00010c150360(0x4024000000000000,puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20a1a0(param_1);
        goto LAB_105a3087c;
      }
      if (param_3 != 4) {
        return;
      }
      func_0x00010c1626e0(param_1);
      lVar3 = 0;
      goto code_r0x00010bdf82e0;
    }
    if (param_3 == 5) {
      func_0x00010c1626e0(param_1);
      lVar3 = 0;
      goto code_r0x00010bdf82e0;
    }
    if (param_3 != 6) {
      return;
    }
    lVar3 = param_1;
    func_0x00010bef0140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      func_0x00010c162340(param_1);
      lVar3 = param_1;
      func_0x00010bf43fe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        lVar3 = param_1;
        func_0x00010bf43fe0();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar3 + 0x10))();
        _objc_release(lVar3);
        func_0x00010c17fb20(param_1);
      }
    }
  }
  lVar3 = param_1;
  func_0x00010bef07c0(param_1);
  _objc_retainAutoreleasedReturnValue();
code_r0x00010bdf82e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdf82f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__deactivateDevicesExcept__11255ba58,lVar3);
  return;
}



/* Entry: 105a308f4; end: 105a30a13;  */

void FUN_105a308f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (uVar1 = param_2, func_0x00010c082b20(), (int)uVar1 != 0)) {
    func_0x00010c1626e0(param_1);
    func_0x00010becf280(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a30a14; end: 105a30c2f; -[SCSpectaclesActivateDeviceFlow handleUpdatedState:] */

void FUN_105a30a14(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c252440();
  uVar2 = param_1;
  if ((long)uVar1 < 3) {
    if (uVar1 == 0) {
      uVar1 = param_3;
      func_0x00010bf48d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf48940();
      _objc_release(uVar1);
      if ((int)uVar2 == 0) goto LAB_105a30bdc;
      func_0x00010c1626e0(param_1);
    }
    else if (uVar1 == 1) {
      func_0x00010bef07c0();
      _objc_retainAutoreleasedReturnValue();
      if (param_3 != uVar2) {
LAB_105a30bd4:
        _objc_release(uVar2);
        goto LAB_105a30bdc;
      }
      uVar1 = param_3;
      func_0x00010bf48d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bf48940();
      _objc_release(uVar1);
      _objc_release(uVar2);
      if ((uVar3 & 1) != 0) goto LAB_105a30bdc;
    }
    else {
      if (uVar1 != 2) goto LAB_105a30bdc;
      func_0x00010bef07c0();
      _objc_retainAutoreleasedReturnValue();
      if (param_3 != uVar2) goto LAB_105a30bd4;
      uVar1 = param_3;
      func_0x00010bf48d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bf48940();
      _objc_release(uVar1);
      _objc_release(uVar2);
      if ((int)uVar3 == 0) goto LAB_105a30bdc;
    }
  }
  else {
    if (1 < uVar1 - 3) goto LAB_105a30bdc;
    func_0x00010bef0140();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 != uVar2) goto LAB_105a30bd4;
    uVar1 = param_3;
    func_0x00010bf48d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf48940();
    _objc_release(uVar1);
    _objc_release(uVar2);
    if ((int)uVar3 == 0) goto LAB_105a30bdc;
    func_0x00010c162340(param_1);
    func_0x00010c1626e0(param_1);
    uVar1 = param_1;
    func_0x00010bf43fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      uVar1 = param_1;
      func_0x00010bf43fe0();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(uVar1 + 0x10))();
      _objc_release(uVar1);
    }
    func_0x00010c17fb20(param_1);
  }
  func_0x00010becf280(param_1);
LAB_105a30bdc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a30c30; end: 105a30c33; -[SCSpectaclesActivateDeviceFlow spectaclesDeviceDidUpdateState:] */

void FUN_105a30c30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd3030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_handleUpdatedState__1125d25b0);
  return;
}



/* Entry: 105a30c34; end: 105a30c3b; -[SCSpectaclesActivateDeviceFlow spectaclesManager] */

undefined8 FUN_105a30c34(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105a30c3c; end: 105a30c6b; -[SCSpectaclesActivateDeviceFlow setSpectaclesManager:] */

void FUN_105a30c3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a30c6c; end: 105a30c73; -[SCSpectaclesActivateDeviceFlow state] */

undefined8 FUN_105a30c6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a30c74; end: 105a30c7b; -[SCSpectaclesActivateDeviceFlow setState:] */

void FUN_105a30c74(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 105a30c7c; end: 105a30c83; -[SCSpectaclesActivateDeviceFlow stateTransitionTimer] */

undefined8 FUN_105a30c7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105a30c84; end: 105a30cb3; -[SCSpectaclesActivateDeviceFlow setStateTransitionTimer:] */

void FUN_105a30c84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a30cb4; end: 105a30cbb; -[SCSpectaclesActivateDeviceFlow activeDevice] */

undefined8 FUN_105a30cb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105a30cbc; end: 105a30ceb; -[SCSpectaclesActivateDeviceFlow setActiveDevice:] */

void FUN_105a30cbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a30cec; end: 105a30cf3; -[SCSpectaclesActivateDeviceFlow activatingDevice] */

undefined8 FUN_105a30cec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105a30cf4; end: 105a30d23; -[SCSpectaclesActivateDeviceFlow setActivatingDevice:] */

void FUN_105a30cf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a30d24; end: 105a30d2b; -[SCSpectaclesActivateDeviceFlow completion] */

undefined8 FUN_105a30d24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105a30d2c; end: 105a30d33; -[SCSpectaclesActivateDeviceFlow setCompletion:] */

void FUN_105a30d2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105a30d34; end: 105a30dcf; -[SCSpectaclesActivateDeviceFlow .cxx_destruct] */

void FUN_105a30d34(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a30dd0; end: 105a30e97; -[SCSpectaclesHomeWifiManager startMfiShareWifiCredentials] */

void FUN_105a30dd0(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105a30e98; end: 105a30ed3;  */

void FUN_105a30e98(long param_1,undefined8 param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 == 0) {
    func_0x00010becf280(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a30ed4; end: 105a30f9b; -[SCSpectaclesHomeWifiManager cancelMfiShareWifiCredentials] */

void FUN_105a30ed4(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105a30f9c; end: 105a30fcb;  */

void FUN_105a30f9c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becf280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a30fcc; end: 105a310c3; -[SCSpectaclesHomeWifiManager removeWifiNetwork:] */

void FUN_105a30fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105a310c4; end: 105a312a3;  */

void FUN_105a310c4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar2 = lVar1;
  func_0x00010c2a5200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105a312a4;
  puStack_68 = &UNK_1108ceb30;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
  uStack_60 = uVar5;
  _objc_retain(puVar3);
  puStack_58 = puVar3;
  func_0x00010bf97f00(puVar3);
  func_0x00010c225780(lVar1);
  lVar2 = lVar1;
  func_0x00010bf04760(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf6fd20(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c087bc0(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010c249020(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf6fd20(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,param_1 + 0x28);
  func_0x00010c2257a0(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_88);
  _objc_release(puStack_58);
  _objc_release(uStack_60);
  _objc_release(puVar3);
  _objc_release(lVar1);
  return;
}



/* Entry: 105a312a4; end: 105a3137f;  */

void FUN_105a312a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c24cc00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12d3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_removeObjectAtIndex__112628f10,param_3);
    return;
  }
  return;
}



/* Entry: 105a31380; end: 105a31527; -[SCSpectaclesHomeWifiManager alreadyAddedCurrentNetwork] */

ulong FUN_105a31380(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong unaff_x21;
  undefined8 unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  long lVar7;
  ulong uVar8;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
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
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = param_1;
  func_0x00010bf60d80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar8;
  _objc_release();
  uVar6 = 0;
  if (uVar8 != 0) {
    uVar6 = param_1;
    func_0x00010c2a5200();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = uVar6;
    func_0x00010bf529e0();
    uVar1 = uVar6;
    _objc_release();
    if (unaff_x21 != 0) {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uVar6 = param_1;
      func_0x00010c2a5200();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010bf52a60();
      if (uVar8 != 0) {
        lVar7 = *plStack_120;
        unaff_x21 = uVar8;
        do {
          uVar8 = 0;
          do {
            if (*plStack_120 != lVar7) {
              _objc_enumerationMutation(uVar6);
            }
            unaff_x22 = *(undefined8 *)(lStack_128 + uVar8 * 8);
            unaff_x23 = param_1;
            func_0x00010bf60d80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c24cc00();
            _objc_retainAutoreleasedReturnValue();
            unaff_x24 = unaff_x23;
            func_0x00010c0720c0(unaff_x23,param_2,unaff_x22);
            _objc_release(unaff_x22);
            _objc_release(unaff_x23);
            if ((unaff_x24 & 1) != 0) {
              uVar8 = 1;
              goto LAB_105a314e0;
            }
            uVar8 = uVar8 + 1;
          } while (unaff_x21 != uVar8);
          unaff_x21 = uVar6;
          func_0x00010bf52a60(uVar6,param_2,&uStack_130,auStack_e8,0x10);
        } while (unaff_x21 != 0);
      }
      uVar8 = 0;
LAB_105a314e0:
      uVar1 = uVar6;
      _objc_release();
      goto LAB_105a314e8;
    }
  }
  uVar8 = 0;
LAB_105a314e8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar8;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_240;
  pcStack_138 = FUN_105a31528;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uVar2 = uVar1;
  uStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  uStack_160 = unaff_x22;
  uStack_158 = unaff_x21;
  uStack_150 = uVar6;
  uStack_148 = uVar8;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010c2a5200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf52a60();
  if (uVar6 != 0) {
    lVar7 = *plStack_230;
    do {
      uVar8 = 0;
      do {
        if (*plStack_230 != lVar7) {
          _objc_enumerationMutation(uVar2);
        }
        puVar5 = *(undefined8 **)(lStack_238 + uVar8 * 8);
        uVar3 = uVar1;
        func_0x00010c2a5220(uVar1,param_2,puVar5);
        if ((uVar3 & 1) != 0) {
          uVar6 = 1;
          goto LAB_105a315f4;
        }
        uVar8 = uVar8 + 1;
      } while (uVar6 != uVar8);
      uVar6 = uVar2;
      puVar5 = &uStack_240;
      func_0x00010bf52a60(uVar2,param_2,&uStack_240,auStack_1f8,0x10);
    } while (uVar6 != 0);
  }
  uVar6 = 0;
LAB_105a315f4:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return uVar6;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  func_0x00010c2483e0();
  if ((uVar2 & 1) == 0) {
    puVar4 = (undefined1 *)puVar5;
    func_0x00010c252440(puVar5);
    uVar6 = (ulong)(puVar4 != (undefined1 *)0x1);
  }
  else {
    uVar6 = 1;
  }
  _objc_release(puVar5);
  return uVar6;
}



/* Entry: 105a31528; end: 105a31633; -[SCSpectaclesHomeWifiManager hasWifiNetworkRequiringCredentialsUpdate] */

bool FUN_105a31528(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
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
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uVar2 = param_1;
  func_0x00010c2a5200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf52a60();
  if (uVar3 != 0) {
    lVar7 = *plStack_100;
    do {
      uVar8 = 0;
      do {
        if (*plStack_100 != lVar7) {
          _objc_enumerationMutation(uVar2);
        }
        puVar6 = *(undefined8 **)(lStack_108 + uVar8 * 8);
        uVar4 = param_1;
        func_0x00010c2a5220(param_1,param_2,puVar6);
        if ((uVar4 & 1) != 0) {
          bVar1 = true;
          goto LAB_105a315f4;
        }
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
      uVar3 = uVar2;
      puVar6 = &uStack_110;
      func_0x00010bf52a60(uVar2,param_2,&uStack_110,auStack_c8,0x10);
    } while (uVar3 != 0);
  }
  bVar1 = false;
LAB_105a315f4:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return bVar1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  func_0x00010c2483e0();
  if ((uVar2 & 1) == 0) {
    puVar5 = (undefined1 *)puVar6;
    func_0x00010c252440(puVar6);
    bVar1 = puVar5 != (undefined1 *)0x1;
  }
  else {
    bVar1 = true;
  }
  _objc_release(puVar6);
  return bVar1;
}



/* Entry: 105a31634; end: 105a3168b; -[SCSpectaclesHomeWifiManager wifiAPNeedsCredentialsUpdate:] */

bool FUN_105a31634(ulong param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c2483e0();
  if ((param_1 & 1) == 0) {
    lVar2 = param_3;
    func_0x00010c252440(param_3);
    bVar1 = lVar2 != 1;
  }
  else {
    bVar1 = true;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105a3168c; end: 105a31707; -[SCSpectaclesHomeWifiManager currentFlowIsResharingCredentials] */

long FUN_105a3168c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf60d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010beeaea0(param_1,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010c2a5220(param_1,param_2,lVar2);
  }
  _objc_release(lVar2);
  return param_1;
}



/* Entry: 105a31708; end: 105a31757; -[SCSpectaclesHomeWifiManager addListener:] */

void FUN_105a31708(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf04760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a31758; end: 105a317a7; -[SCSpectaclesHomeWifiManager removeListener:] */

void FUN_105a31758(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf04760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a317a8; end: 105a317cf; +[SCSpectaclesHomeWifiManager homeWifiStateToString:] */

undefined ** FUN_105a317a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 3) {
    return (undefined **)(&PTR_PTR_1108ceb60)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110e17a18;
}



/* Entry: 105a317d0; end: 105a318c7; -[SCSpectaclesHomeWifiManager spectaclesDeviceDidUpdateState:] */

void FUN_105a317d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105a318c8; end: 105a319e3;  */

void FUN_105a318c8(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf48920();
  _objc_release(uVar3);
  lVar5 = lVar2;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(param_1 + 0x20);
  _objc_release();
  bVar1 = lVar5 != lVar7;
  if ((int)uVar4 == 0) {
    if ((!bVar1) && (lVar5 = lVar2, func_0x00010c252440(), lVar5 != 0)) {
      lVar5 = lVar2;
      func_0x00010bf04760(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar2;
      func_0x00010bf6fd20(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010bf60d80(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c087ba0(lVar5,param_2,4,lVar7,lVar6);
      _objc_release(lVar6);
      _objc_release(lVar7);
      _objc_release(lVar5);
      func_0x00010becf280(lVar2,param_2,0);
    }
  }
  else if (bVar1) {
    func_0x00010c18c700(lVar2,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105a319e4; end: 105a31ae3; -[SCSpectaclesHomeWifiManager spectaclesDevice:didReceiveCloudUploadEvent:] */

void FUN_105a319e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105a31ae4; end: 105a31f63;  */

void FUN_105a31ae4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(param_1 + 0x20);
  _objc_release();
  if (lVar2 != lVar7) goto LAB_105a31f50;
  lVar2 = lVar1;
  lVar7 = lVar1;
  switch(*(undefined8 *)(param_1 + 0x30)) {
  case 1:
    func_0x00010c252440();
    if (lVar2 == 1) {
      uVar6 = 2;
    }
    else {
code_r0x000105a31e0c:
      uVar6 = 0;
    }
    goto code_r0x000105a31e14;
  case 2:
    func_0x00010c252440();
    if (lVar2 != 2) goto code_r0x000105a31e0c;
    uVar6 = 3;
code_r0x000105a31e14:
    func_0x00010becf280(lVar1,param_2,uVar6);
    goto LAB_105a31f50;
  case 3:
    func_0x00010bf026c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6fd20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0;
    break;
  case 4:
    lVar3 = lVar1;
    func_0x00010c252440();
    if (lVar3 == 0) goto LAB_105a31f50;
    lVar3 = lVar1;
    func_0x00010bf04760(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf6fd20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010bf60d80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c087ba0(lVar3,param_2,6,lVar4,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    func_0x00010becf280(lVar1,param_2,0);
    func_0x00010bf026c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6fd20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 1;
    break;
  case 5:
    lVar3 = lVar1;
    func_0x00010c252440();
    if (lVar3 == 0) goto LAB_105a31f50;
    lVar3 = lVar1;
    func_0x00010bf04760(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf6fd20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010bf60d80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c087ba0(lVar3,param_2,7,lVar4,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    func_0x00010becf280(lVar1,param_2,0);
    func_0x00010bf026c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6fd20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 2;
    break;
  case 6:
    func_0x00010bf026c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6fd20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 3;
    break;
  case 7:
    func_0x00010bf026c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6fd20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 4;
    break;
  case 8:
    func_0x00010bf026c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6fd20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 5;
    break;
  case 9:
    func_0x00010bf026c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6fd20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 6;
    break;
  case 10:
    func_0x00010bf026c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6fd20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 7;
    break;
  case 0xb:
    func_0x00010bf026c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6fd20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 8;
    break;
  case 0xc:
    func_0x00010bf026c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6fd20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 9;
    break;
  case 0xd:
    func_0x00010bf026c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6fd20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 10;
    break;
  case 0xe:
    func_0x00010be91340(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    func_0x00010bf026c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6fd20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0xb;
    break;
  default:
    goto LAB_105a31f50;
  }
  func_0x00010c0a7d80(lVar2,param_2,lVar7,uVar6);
  _objc_release(lVar7);
  _objc_release(lVar2);
LAB_105a31f50:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a31f64; end: 105a32093; -[SCSpectaclesHomeWifiManager spectaclesDevice:didReceiveClientId:requestAuthzCode:] */

void FUN_105a31f64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a32094; end: 105a321b3;  */

void FUN_105a32094(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (*(char *)(param_1 + 0x38) == '\x01') {
    lVar2 = lVar1;
    func_0x00010c252440();
    if (lVar2 == 0) {
      func_0x00010c207600(lVar1,param_2,1);
      lVar2 = lVar1;
      func_0x00010bf04760(lVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      lVar4 = lVar1;
      func_0x00010bf60d80(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c087ba0(lVar2,param_2,9,uVar3,lVar4);
      _objc_release(lVar4);
      _objc_release(lVar2);
      lVar2 = lVar1;
      func_0x00010bf026c0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010bf6fd20(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a7cc0(lVar2,param_2,lVar4);
      _objc_release(lVar4);
      _objc_release(lVar2);
    }
    else {
      lVar2 = lVar1;
      func_0x00010bf6fd20();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(param_1 + 0x20);
      _objc_release();
      if (lVar2 == lVar4) {
        func_0x00010c24dec0(*(undefined8 *)(lVar1 + 8),param_2,*(undefined8 *)(param_1 + 0x20),
                            *(undefined8 *)(param_1 + 0x28));
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a321b4; end: 105a322d3; -[SCSpectaclesHomeWifiManager spectaclesDevice:didReceiveWifiAPList:] */

void FUN_105a321b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a322d4; end: 105a3235b;  */

void FUN_105a322d4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      *(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225780(lVar1,param_2,puVar2);
  _objc_release(puVar2);
  lVar3 = lVar1;
  func_0x00010bf04760(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c087bc0();
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a3235c; end: 105a32453; -[SCSpectaclesHomeWifiManager _handleSsidChange:] */

void FUN_105a3235c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105a32454; end: 105a32503;  */

void FUN_105a32454(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010becf280();
  func_0x00010c188100(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  lVar2 = lVar1;
  func_0x00010bf04760(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf6fd20(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf60d80(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c087ba0(lVar2,param_2,8,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a32504; end: 105a32507; -[SCSpectaclesHomeWifiManager authorizationFailed:] */

void FUN_105a32504(void)

{
  return;
}



/* Entry: 105a32508; end: 105a3262f; -[SCSpectaclesHomeWifiManager dataFlowsRequest:executedTask:] */

void FUN_105a32508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f8240(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a32630; end: 105a32753;  */

void FUN_105a32630(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x20) == *(long *)(lVar1 + 0x10))) {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010c27dd80();
    if (lVar2 == 0xf) {
      lVar2 = lVar1 + 0x38;
      _objc_loadWeakRetained();
      puVar3 = PTR_PTR_1126c1508;
      _objc_alloc_init();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      param_4 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
      param_3 = puVar4;
      func_0x00010befbe00(lVar2);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(lVar2);
    }
    else {
      lVar2 = *(long *)(param_1 + 0x28);
      func_0x00010c27dd80();
      if (lVar2 == 0x10) {
        param_3 = *(undefined **)(param_1 + 0x28);
        func_0x00010be31e80(lVar1);
      }
    }
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_98,lVar1);
  func_0x00010c0f98a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a0,auStack_98);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(lVar1);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a32754; end: 105a3288f; -[SCSpectaclesHomeWifiManager dataFlowsRequest:failedToExecutedTask:error:] */

void FUN_105a32754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a32890; end: 105a328fb;  */

void FUN_105a32890(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x20) == *(long *)(lVar1 + 0x10))) {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010c27dd80();
    if (lVar2 != 0xf) {
      lVar2 = *(long *)(param_1 + 0x28);
      func_0x00010c27dd80();
      if (lVar2 != 0x10) goto LAB_105a328ec;
    }
    func_0x00010be31ec0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  }
LAB_105a328ec:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a328fc; end: 105a329f3; -[SCSpectaclesHomeWifiManager dataFlowsRequestCompleted:] */

void FUN_105a328fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105a329f4; end: 105a32a3b;  */

void FUN_105a329f4(long param_1)

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


