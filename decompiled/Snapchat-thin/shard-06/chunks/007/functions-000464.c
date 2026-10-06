/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104ce1e20; end: 104ce1e3f; -[SCLogInUIRouteActions dismissWebBrowser] */

void FUN_104ce1e20(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x98));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104ce1e40; end: 104ce1fe7; -[SCLogInUIRouteActions showMagicCodeEntryScreenWithAdaptor:usernameOrEmail:optedIn1TL:delegate:] */

void FUN_104ce1e40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126af310;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c08d700(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af318;
  _objc_opt_new(PTR_PTR_1126af318);
  func_0x00010c00a900(puVar1,param_2,param_6,uVar2,param_3,param_4,param_5,puVar3,
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x38));
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined **)(param_1 + 0xc0) = puVar3;
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126af320;
  _objc_alloc(PTR_PTR_1126af320);
  uVar2 = param_3;
  func_0x00010c0ddda0(param_3);
  _objc_release(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c150e00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c760(puVar3,param_2,uVar2,uVar4,*(undefined8 *)(param_1 + 0x100));
  _objc_release(uVar4);
  func_0x00010c1c8b80(puVar3,param_2,5);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(uVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ce1fe8; end: 104ce202f; -[SCLogInUIRouteActions removeMagicCodeEntryScreen] */

void FUN_104ce1fe8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ce2030; end: 104ce20b3; -[SCLogInUIRouteActions cancelMagicCodeEntryWithErrorMessage:] */

void FUN_104ce2030(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c12d060(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10ec80(uVar1,param_2,uVar2,param_3);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ce20b4; end: 104ce213b; -[SCLogInUIRouteActions showPasswordRecoveryWithDelegate:usernameOrEmail:] */

void FUN_104ce20b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x68);
  func_0x00010c071800();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126af328;
    _objc_alloc(PTR_PTR_1126af328);
    func_0x00010c00b1c0();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x68),param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ce213c; end: 104ce2173; -[SCLogInUIRouteActions removePasswordRecovery] */

void FUN_104ce213c(long param_1,undefined8 param_2)

{
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x10),param_2,0);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x68));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104ce2174; end: 104ce2193; -[SCLogInUIRouteActions cancelPasswordRecovery] */

void FUN_104ce2174(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x68));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104ce2194; end: 104ce223f; -[SCLogInUIRouteActions showAppealWithDelegate:appealableLockData:] */

void FUN_104ce2194(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af330;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0582e0(puVar1,param_2,uVar2,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0xa0),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ce2240; end: 104ce228f; -[SCLogInUIRouteActions removeInAppAppeal] */

void FUN_104ce2240(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar1);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xa0));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104ce2290; end: 104ce2317; -[SCLogInUIRouteActions showCountryCodePickerWithDelegate:] */

void FUN_104ce2290(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104ce2318;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104ce2318; end: 104ce23df;  */

void FUN_104ce2318(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20) + 200;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar1 = *(long *)(param_1 + 0x20) + 200;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c038f40(puVar2,param_2,lVar1,1);
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90);
    func_0x00010bf23d40(uVar3,param_2,puVar2,*(undefined8 *)(param_1 + 0x28),1,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88),param_2,uVar3);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 104ce23e0; end: 104ce245b; -[SCLogInUIRouteActions removeCountryCodePicker] */

void FUN_104ce23e0(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x104ce2438;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 104ce245c; end: 104ce258b; -[SCLogInUIRouteActions startPasskeyLoginWithDelegate:trigger:] */

void FUN_104ce245c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0xa8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bec0f20(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c12e1c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,auStack_38);
    _objc_retain(param_3);
    uStack_40 = param_4;
    func_0x00010c2a4ae0(uVar2);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104ce258c; end: 104ce25cb;  */

void FUN_104ce258c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bec0f20(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ce25cc; end: 104ce26db; -[SCLogInUIRouteActions _startPasskeyLoginWithDelegate:trigger:] */

void FUN_104ce25cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126af338;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c027c80();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 200;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar6 = PTR_PTR_1126af340;
  _objc_alloc(PTR_PTR_1126af340);
  func_0x00010c00a8e0();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0xa8),param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ce26dc; end: 104ce26fb; -[SCLogInUIRouteActions removePasskeyLogin] */

void FUN_104ce26dc(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xa8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104ce26fc; end: 104ce27c7; -[SCLogInUIRouteActions showCOSChallenge:authSessionPayload:clientRequestId:delegate:] */

void FUN_104ce26fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf048a0();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ce27c8; end: 104ce281f; -[SCLogInUIRouteActions _createModalUIContainer] */

void FUN_104ce27c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  param_1 = param_1 + 200;
  _objc_loadWeakRetained(param_1);
  func_0x00010c038f40(puVar1,param_2,param_1,1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ce2820; end: 104ce287b; -[SCLogInUIRouteActions _getPhoneNumberDefaultFormatter] */

void FUN_104ce2820(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0xd0);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126af348;
    _objc_alloc();
    func_0x00010c05a560();
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined **)(param_1 + 0xd0) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0xd0);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104ce287c; end: 104ce2a0f; -[SCLogInUIRouteActions .cxx_destruct] */

void FUN_104ce287c(long param_1)

{
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_destroyWeak(param_1 + 200);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ce2a10; end: 104ce2bab; -[SCLogInWorkflow initWithRouter:delegate:loginStateTransitionLogger:lastLoginUsername:lastLoginPhoneNumber:authenticationOrchestrator:loginLogger:legacyAuthFlowProxy:] */

undefined1 *
FUN_104ce2a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  puStack_68 = PTR_PTR_1126e3bf0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_9;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_10);
    *(undefined2 *)((long)puVar1 + 0x68) = 0;
  }
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



/* Entry: 104ce2bac; end: 104ce2be3; -[SCLogInWorkflow beginWorkflow] */

void FUN_104ce2bac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf05f00();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beb8810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showCredentialsEntryScreen_11258bba8);
  return;
}



/* Entry: 104ce2be4; end: 104ce2cbf; -[SCLogInWorkflow credentialsEntryNeedsMagicCodeWithAdaptor:usernameOrEmail:optedIn1TL:] */

void FUN_104ce2be4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_4;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104ce2cc0;
  puStack_68 = &UNK_110848cd8;
  uStack_60 = param_3;
  uStack_58 = param_4;
  lStack_50 = param_1;
  uStack_48 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c1429e0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ce2cc0; end: 104ce2cd3;  */

void FUN_104ce2cc0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c238430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showMagicCodeEntryScreenWithAdap_11266bb30,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined1 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 104ce2cd4; end: 104ce2cff; -[SCLogInWorkflow credentialsEntryExited] */

void FUN_104ce2cd4(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0a8280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ce2d00; end: 104ce2d8f; -[SCLogInWorkflow credentialsEntryNeedsPasswordRecovery:] */

void FUN_104ce2d00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104ce2d90;
  puStack_48 = &UNK_110848d08;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c1429e0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104ce2d90; end: 104ce2d9b;  */

void FUN_104ce2d90(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c238ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showPasswordRecoveryWithDelegate_11266bdd8,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104ce2d9c; end: 104ce2de3; -[SCLogInWorkflow credentialsEntryNeedsRegisterAccount:] */

void FUN_104ce2d9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0a82a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ce2de4; end: 104ce2ed3; -[SCLogInWorkflow credentialsEntryFinishedWithUsernameOrEmail:password:wasPasswordAutofilled:isPasswordSecured:optedIn1TL:loginSuccess:loginSource:] */

void FUN_104ce2de4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_retain(param_8);
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x28) = param_9;
  *(undefined1 *)(param_1 + 0x30) = param_5;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x31) = param_6;
  *(undefined1 *)(param_1 + 0x32) = param_7;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c250460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010be0e9c0(param_1,param_2,param_8,uVar1);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ce2ed4; end: 104ce2f5b; -[SCLogInWorkflow credentialsEntrySelectedCountryCodePickerWithDelegate:] */

void FUN_104ce2ed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104ce2f5c;
  puStack_30 = &UNK_110848d38;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c1429e0(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104ce2f5c; end: 104ce2f67;  */

void FUN_104ce2f5c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c236d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showCountryCodePickerWithDelegat_11266b570,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104ce2f68; end: 104ce2f7f; -[SCLogInWorkflow credentialsEntryFinishedCountryCodePicker] */

void FUN_104ce2f68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1429f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_runRouteWithAction__11262e498,
             &PTR___NSConcreteGlobalBlock_110848d88);
  return;
}



/* Entry: 104ce2f80; end: 104ce300f; -[SCLogInWorkflow credentialsEntrySelectedLink:] */

void FUN_104ce2f80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104ce3010;
  puStack_48 = &UNK_110848d08;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c1429e0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 104ce3010; end: 104ce301b;  */

void FUN_104ce3010(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showWebBrowserWithUrl_browsingDe_11266c568,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104ce301c; end: 104ce317f; -[SCLogInWorkflow credentialsEntryBeginPasskeyLogin:delegate:] */

void FUN_104ce301c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104ce3180;
  puStack_78 = &UNK_110842a68;
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_4);
  ppuVar1 = &puStack_90;
  uStack_70 = param_4;
  lStack_60 = param_3;
  _objc_retainBlock();
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar1);
    func_0x00010c08b500(uVar2);
    _objc_release(uVar2);
    _objc_release(ppuVar1);
  }
  else {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  return;
}



/* Entry: 104ce3180; end: 104ce321b;  */

void FUN_104ce3180(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_104ce321c;
    puStack_48 = &UNK_110848da8;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uStack_38 = *(undefined8 *)(param_1 + 0x30);
    uStack_40 = uVar3;
    func_0x00010c1429e0(uVar2,param_2,&puStack_60);
    _objc_release(uStack_40);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 104ce321c; end: 104ce323b;  */

void FUN_104ce321c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24fd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_startPasskeyLoginWithDelegate_tr_112671970,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104ce323c; end: 104ce33cb; -[SCLogInWorkflow credentialsEntryFinishedPasskeyLogin:] */

void FUN_104ce323c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c250460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6960();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c0c0940(param_3);
  func_0x00010c142680(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf10bc0();
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 104ce33cc; end: 104ce33d3;  */

void FUN_104ce33cc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_removePasskeyLogin_112629028);
  return;
}



/* Entry: 104ce33d4; end: 104ce3523;  */

void FUN_104ce33d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  puVar1 = PTR_PTR_1126af350;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c027a80();
  lVar2 = *(long *)(param_1 + 0x20) + 0x10;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0a82e0();
  _objc_release(param_2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ce3524; end: 104ce353b;  */

void FUN_104ce3524(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb8830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + 0x20),PTR_s__showCredentialsEntryScreenWithR_11258bbb0,param_2,
             *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 104ce353c; end: 104ce35cb;  */

void FUN_104ce353c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bef6960(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 104ce35cc; end: 104ce35d7;  */

void FUN_104ce35cc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c235e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showAppealWithDelegate_appealabl_11266b1a8,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104ce35d8; end: 104ce369b;  */

void FUN_104ce35d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x68) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bef6960(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104ce369c; end: 104ce370b;  */

void FUN_104ce369c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  _objc_retain(param_2);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c236440(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ce370c; end: 104ce3763; -[SCLogInWorkflow logInWithOAuthSelectedWithOAuthType:optedIn1TL:] */

void FUN_104ce370c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0a87a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ce3764; end: 104ce37bb; -[SCLogInWorkflow recoverPasswordExited] */

void FUN_104ce3764(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104ce37bc;
  puStack_20 = &UNK_110848d38;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 104ce37bc; end: 104ce3807;  */

void FUN_104ce37bc(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c12d860(param_2);
  func_0x00010beb8820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ce3808; end: 104ce383f; -[SCLogInWorkflow passwordRecoveredWithRetrievedUsername:] */

void FUN_104ce3808(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c124070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_recoverPasswordExited_112626a38);
  return;
}



/* Entry: 104ce3840; end: 104ce38f7; -[SCLogInWorkflow recoverPasswordFinishedWithLoginSuccess:optedIn1TL:loginSource:loginIdentifier:] */

void FUN_104ce3840(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  *(undefined1 *)(param_1 + 0x32) = param_4;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_6;
  *(undefined8 *)(param_1 + 0x28) = param_5;
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c250460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010bef6960(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110848eb8);
  *(undefined1 *)(param_1 + 0x68) = 1;
  func_0x00010be0e9c0(param_1,param_2,param_3,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ce38f8; end: 104ce38ff;  */

void FUN_104ce38f8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_removePasswordRecovery_112629038);
  return;
}



/* Entry: 104ce3900; end: 104ce3917; -[SCLogInWorkflow recoverPasswordCancelled] */

void FUN_104ce3900(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1429f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_runRouteWithAction__11262e498,
             &PTR___NSConcreteGlobalBlock_110848ed8);
  return;
}



/* Entry: 104ce3918; end: 104ce3987; -[SCLogInWorkflow channelVerificationFinishedWithLoginSuccess:] */

void FUN_104ce3918(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c250460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6960();
  func_0x00010be0e9c0(param_1,param_2,param_3,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ce3988; end: 104ce398f;  */

void FUN_104ce3988(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12b6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_removeChannelVerification_1126287d0);
  return;
}



/* Entry: 104ce3990; end: 104ce39e7; -[SCLogInWorkflow channelVerificationExited] */

void FUN_104ce3990(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104ce39e8;
  puStack_20 = &UNK_110848d38;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 104ce39e8; end: 104ce3a33;  */

void FUN_104ce39e8(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c12b6c0(param_2);
  func_0x00010beb8820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ce3a34; end: 104ce3aa3; -[SCLogInWorkflow odlvFinishedWithLoginSuccess:] */

void FUN_104ce3a34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c250460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6960();
  func_0x00010be0e9c0(param_1,param_2,param_3,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ce3aa4; end: 104ce3aab;  */

void FUN_104ce3aa4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_removeOdlv_112628fa0);
  return;
}



/* Entry: 104ce3aac; end: 104ce3b03; -[SCLogInWorkflow odlvExited] */

void FUN_104ce3aac(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104ce3b04;
  puStack_20 = &UNK_110848d38;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 104ce3b04; end: 104ce3b4f;  */

void FUN_104ce3b04(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c12d600(param_2);
  func_0x00010beb8820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ce3b50; end: 104ce3bbf; -[SCLogInWorkflow twoFAFinishedWithLoginSuccess:] */

void FUN_104ce3b50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c250460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6960();
  func_0x00010be0e9c0(param_1,param_2,param_3,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ce3bc0; end: 104ce3bc7;  */

void FUN_104ce3bc0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12ed90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_removeTwoFAVerification_112629580);
  return;
}



/* Entry: 104ce3bc8; end: 104ce3c7f; -[SCLogInWorkflow twoFAExited] */

void FUN_104ce3bc8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104ce3c34;
  puStack_30 = &UNK_110848d38;
  lStack_28 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_48);
  return;
}



/* Entry: 104ce3c80; end: 104ce3d33; -[SCLogInWorkflow credentialsEntryNeedsAppeal:delegate:] */

void FUN_104ce3c80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104ce3d34;
  puStack_48 = &UNK_110848d08;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c1429e0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 104ce3d34; end: 104ce3d3f;  */

void FUN_104ce3d34(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c235e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showAppealWithDelegate_appealabl_11266b1a8,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104ce3d40; end: 104ce3d57; -[SCLogInWorkflow appealScopeDidCompleteWithSuccess:] */

void FUN_104ce3d40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1429f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_runRouteWithAction__11262e498,
             &PTR___NSConcreteGlobalBlock_110848f58);
  return;
}



/* Entry: 104ce3d58; end: 104ce3daf; -[SCLogInWorkflow _showCredentialsEntryScreen] */

void FUN_104ce3d58(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104ce3db0;
  puStack_20 = &UNK_110848d38;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 104ce3db0; end: 104ce3dc7;  */

void FUN_104ce3db0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb8830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__showCredentialsEntryScreenWithR_11258bbb0,
             param_2,0,0,0);
  return;
}



/* Entry: 104ce3dc8; end: 104ce3e0b; -[SCLogInWorkflow _showCredentialsEntryScreenWithRouteActions:password:reactivationStatus:reactivationAccountIdentifier:] */

void FUN_104ce3dc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x00010c236e20(param_3,param_2,param_1,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x38),param_4,param_5,param_6,param_1 + 0x69);
  return;
}



/* Entry: 104ce3e0c; end: 104ce4023; -[SCLogInWorkflow _featureScreenFinishedWithLoginSuccess:route:] */

void FUN_104ce3e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010c13ca20(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104ce4024;
  puStack_68 = &UNK_110841f80;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_104ce4198;
  puStack_98 = &UNK_110848f78;
  uStack_90 = param_1;
  uStack_60 = param_3;
  uStack_58 = param_1;
  _objc_retain(param_4);
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_104ce4270;
  puStack_c8 = &UNK_110848fa8;
  uStack_c0 = param_1;
  uStack_88 = param_4;
  _objc_retain(param_4);
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_104ce4358;
  puStack_f8 = &UNK_110848fd8;
  uStack_f0 = param_1;
  uStack_b8 = param_4;
  _objc_retain(param_4);
  puStack_140 = puVar1;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_104ce444c;
  puStack_128 = &UNK_110849008;
  uStack_120 = param_1;
  uStack_e8 = param_4;
  _objc_retain(param_4);
  puStack_170 = puVar1;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_104ce4538;
  puStack_158 = &UNK_110849038;
  uStack_150 = param_1;
  uStack_118 = param_4;
  _objc_retain(param_4);
  puStack_1a0 = puVar1;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_104ce45f4;
  puStack_188 = &UNK_110849098;
  uStack_180 = param_1;
  uStack_178 = param_4;
  uStack_148 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0c07c0(uVar2,param_2,&puStack_80,&puStack_b0,&puStack_e0,&puStack_110,&puStack_140,
                      &puStack_170,&puStack_1a0);
  _objc_release(uStack_178);
  _objc_release(uStack_148);
  _objc_release(uStack_118);
  _objc_release(uStack_e8);
  _objc_release(uStack_b8);
  _objc_release(uStack_88);
  _objc_release(uStack_60);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104ce4024; end: 104ce4197;  */

void FUN_104ce4024(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1faa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  if ((*(byte *)(*(long *)(param_1 + 0x28) + 0x68) & 1) == 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x58);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e80();
    _objc_release(uVar3);
  }
  puVar4 = PTR_PTR_1126af350;
  _objc_alloc(PTR_PTR_1126af350);
  func_0x00010c027a80();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x60);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9d60();
  _objc_release(uVar3);
  lVar5 = *(long *)(param_1 + 0x28) + 0x10;
  _objc_loadWeakRetained(lVar5);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1faa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a82e0(lVar5,param_2,uVar3,*(undefined1 *)(*(long *)(param_1 + 0x28) + 0x32),
                      *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x48),puVar4);
  _objc_release(uVar3);
  _objc_release(lVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104ce4198; end: 104ce4263;  */

void FUN_104ce4198(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x68) = 1;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010bef6960(uVar1);
  func_0x00010c142680(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 104ce4264; end: 104ce426f;  */

void FUN_104ce4264(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c236830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showChannelVerification_verifica_11266b430,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104ce4270; end: 104ce4347;  */

void FUN_104ce4270(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x68) = 1;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bf51e00();
  _objc_release(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50) = uVar2;
  _objc_release(uVar1);
  func_0x00010bef6960(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c142680(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104ce4348; end: 104ce4357;  */

void FUN_104ce4348(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c238c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showOdlv_challenge__11266bd28,*(long *)(param_1 + 0x20),
             *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50));
  return;
}



/* Entry: 104ce4358; end: 104ce443f;  */

void FUN_104ce4358(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x68) = 1;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126af358;
  func_0x00010c0ee1c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bef6960(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c142680(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar1);
  return;
}



/* Entry: 104ce4440; end: 104ce444b;  */

void FUN_104ce4440(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23aa50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showTwoFAVerification_delegate__11266c4b8,*(undefined8 *)(param_1 + 0x20)
             ,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104ce444c; end: 104ce452b;  */

void FUN_104ce444c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x68) = 1;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126af358;
  func_0x00010c23f200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bef6960(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c142680(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar1);
  return;
}



/* Entry: 104ce452c; end: 104ce4537;  */

void FUN_104ce452c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23aa50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showTwoFAVerification_delegate__11266c4b8,*(undefined8 *)(param_1 + 0x20)
             ,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104ce4538; end: 104ce45db;  */

void FUN_104ce4538(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x68) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010bef6960(uVar1);
  func_0x00010c142680(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 104ce45dc; end: 104ce45f3;  */

void FUN_104ce45dc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb8830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + 0x20),PTR_s__showCredentialsEntryScreenWithR_11258bbb0,param_2,
             *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48),*(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 104ce45f4; end: 104ce46eb;  */

void FUN_104ce45f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x68) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bef6960(uVar1);
  func_0x00010c142680(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104ce46ec; end: 104ce46fb;  */

void FUN_104ce46ec(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c236450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showCOSChallenge_authSessionPayl_11266b338,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 104ce46fc; end: 104ce477b; -[SCLogInWorkflow magicCodeEntryFishinedWithLoginSuccess:loginSource:optedIn1TL:] */

void FUN_104ce46fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x28) = param_4;
  *(undefined1 *)(param_1 + 0x32) = param_5;
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c250460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6960();
  *(undefined1 *)(param_1 + 0x68) = 1;
  func_0x00010be0e9c0(param_1,param_2,param_3,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ce477c; end: 104ce4783;  */

void FUN_104ce477c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_removeMagicCodeEntryScreen_112628e38);
  return;
}



/* Entry: 104ce4784; end: 104ce479b; -[SCLogInWorkflow magicCodeEntryExited] */

void FUN_104ce4784(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1429f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_runRouteWithAction__11262e498,
             &PTR___NSConcreteGlobalBlock_1108490e8);
  return;
}



/* Entry: 104ce479c; end: 104ce4823; -[SCLogInWorkflow magicCodeEntryCancelledWithErrorMessage:] */

void FUN_104ce479c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104ce4824;
  puStack_30 = &UNK_110848d38;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c1429e0(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104ce4824; end: 104ce482f;  */

void FUN_104ce4824(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2e710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_cancelMagicCodeEntryWithErrorMes_1125a9368,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104ce4830; end: 104ce4847; -[SCLogInWorkflow webBrowserDidDismiss:] */

void FUN_104ce4830(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1429f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_runRouteWithAction__11262e498,
             &PTR___NSConcreteGlobalBlock_110849108);
  return;
}



/* Entry: 104ce4848; end: 104ce489f; -[SCLogInWorkflow COSChallengeAbandoned] */

void FUN_104ce4848(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104ce48a0;
  puStack_20 = &UNK_110848d38;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 104ce48a0; end: 104ce48b7;  */

void FUN_104ce48a0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb8830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + 0x20),PTR_s__showCredentialsEntryScreenWithR_11258bbb0,param_2,
             *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48),0,0);
  return;
}



/* Entry: 104ce48b8; end: 104ce48bb; -[SCLogInWorkflow COSChallengeErrorWithError:] */

void FUN_104ce48b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc1190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_COSChallengeAbandoned_11254de00);
  return;
}



/* Entry: 104ce48bc; end: 104ce4977; -[SCLogInWorkflow COSChallengeCompletedWithBootStrapData:] */

void FUN_104ce48bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126af360;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126af368;
  func_0x00010c261740(PTR_PTR_1126af368);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03fca0(puVar1,param_2,puVar2,param_3,0,0,0);
  _objc_release(param_3);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c250460(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0e9c0(param_1,param_2,puVar1,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ce4978; end: 104ce49bf; -[SCLogInWorkflow logOnCOSChallengeReceivedWithChallengeType:] */

void FUN_104ce4978(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 - 0xbU < 2) {
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 104ce49c0; end: 104ce49c3; -[SCLogInWorkflow logOnCOSChallengeAttemptedWithChallengeType:loggingData:] */

void FUN_104ce49c0(void)

{
  return;
}



/* Entry: 104ce49c4; end: 104ce49c7; -[SCLogInWorkflow logOnCOSChallengeResultedWithChallengeType:grpcStatusCode:protoStatusCode:challengeStatusCode:loggingData:] */

void FUN_104ce49c4(void)

{
  return;
}



/* Entry: 104ce49c8; end: 104ce4a4f; -[SCLogInWorkflow .cxx_destruct] */

void FUN_104ce49c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ce4a50; end: 104ce4c2f;  */

void FUN_104ce4a50(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dae6f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dae6f8,
                      &PTR____CFConstantStringClassReference_110daeaf8,0);
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



/* Entry: 104ce4c30; end: 104ce4c7b; +[SCLogInCredentialsEntryAction autofilledPassword] */

void FUN_104ce4c30(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af278;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0x15;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ce4c7c; end: 104ce4cc7; +[SCLogInCredentialsEntryAction continueButtonTapped] */

void FUN_104ce4c7c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af278;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0x13;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


