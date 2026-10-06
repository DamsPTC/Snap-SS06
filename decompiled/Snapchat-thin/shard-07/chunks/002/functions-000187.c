/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105374024; end: 10537419f; -[SCRegistrationUIRouteActions showUsernamePageWithUsername:viewConfig:delegate:usernameSuggestions:] */

void FUN_105374024(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126af728;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c03dbc0();
  puVar2 = PTR_PTR_1126b7c38;
  _objc_alloc(PTR_PTR_1126b7c38);
  func_0x00010c05f780();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar3;
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126b7c40;
  _objc_alloc(PTR_PTR_1126b7c40);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c150e00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0425a0(puVar3,param_2,uVar4,param_4,*(undefined8 *)(param_1 + 0xb8));
  _objc_release(param_4);
  _objc_release(uVar4);
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x88),param_2,0);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x88),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053741a0; end: 1053742bb; -[SCRegistrationUIRouteActions showSuggestedUsernamePageWithDelegate:viewConfig:usernameSuggestions:] */

void FUN_1053741a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b7c48;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c00b2c0();
  _objc_release(param_5);
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar2;
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126b7c50;
  _objc_alloc(PTR_PTR_1126b7c50);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c150e00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0425a0(puVar2,param_2,uVar3,param_4,*(undefined8 *)(param_1 + 0xb8));
  _objc_release(param_4);
  _objc_release(uVar3);
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x88),param_2,0);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x88),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053742bc; end: 105374477; -[SCRegistrationUIRouteActions showWebBrowserWithUrl:browsingDelegate:] */

void FUN_1053742bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae630;
  _objc_retain(param_4);
  func_0x00010bfe6000(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new(PTR_PTR_1126ae560);
  puVar3 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105374478;
  puStack_60 = &UNK_110842308;
  uVar4 = param_3;
  uStack_58 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar3,param_2,&puStack_78,uVar4);
  _objc_release(uVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar5 = PTR_PTR_1126ae638;
  _objc_opt_new(PTR_PTR_1126ae638);
  puVar6 = puVar5;
  func_0x00010bf22ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar5);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0xa8),param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  return;
}



/* Entry: 105374478; end: 10537448f;  */

void FUN_105374478(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c09c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s_loadURL__112604b58,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 105374490; end: 1053744af; -[SCRegistrationUIRouteActions dismissWebBrowser] */

void FUN_105374490(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xa8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1053744b0; end: 1053746d7; -[SCRegistrationUIRouteActions showChallenge:viewConfig:delegate:registrationUser:] */

void FUN_1053744b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = param_3;
  func_0x00010c127a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf10980();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf3d3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_6;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = param_6;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  uVar7 = uVar5;
  func_0x00010c0faf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_1053746d8;
  puStack_c0 = &UNK_11087e428;
  uStack_b8 = param_1;
  uStack_b0 = uVar3;
  uStack_a8 = uVar4;
  uStack_a0 = uVar6;
  uStack_98 = uVar7;
  uStack_90 = param_3;
  uStack_88 = param_4;
  _objc_retain(param_5);
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_1053747e8;
  puStack_e8 = &UNK_11087e458;
  uStack_e0 = param_5;
  uStack_80 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(uVar7);
  _objc_retain(uVar6);
  func_0x00010c0c1260(uVar2,param_2,&puStack_d8,&puStack_100);
  _objc_release(uStack_e0);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1053746d8; end: 1053747e7;  */

void FUN_1053746d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb0);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c073da0();
  func_0x000106b8bbfc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf602a0();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c276d00(uVar3);
  func_0x000106b8a178(uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf048a0(uVar4);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1053747e8; end: 1053747f3;  */

void FUN_1053747e8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc11b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_COSChallengeCompletedWithBootStr_11254de08,
             param_2);
  return;
}



/* Entry: 1053747f4; end: 105374853; -[SCRegistrationUIRouteActions showErrorNotification:] */

void FUN_1053747f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126afde0;
  func_0x00010bf55ce0(PTR_PTR_1126afde0,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105374854; end: 1053749e3; -[SCRegistrationUIRouteActions showErrorDialog:completion:] */

void FUN_105374854(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126aed70;
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000108b9a8dc();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c4e0(puVar3);
  _objc_release(param_3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  func_0x00010bf0c980();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,
             *(undefined8 *)(param_4 + 0x20));
  return;
}



/* Entry: 1053749e4; end: 1053749f3;  */

void FUN_1053749e4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1053749f4; end: 105374a23; -[SCRegistrationUIRouteActions _usernameValidationService] */

void FUN_1053749f4(void)

{
  _objc_alloc(PTR_PTR_1126b7c58);
  func_0x00010c05f8a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105374a24; end: 105374b73; -[SCRegistrationUIRouteActions .cxx_destruct] */

void FUN_105374a24(long param_1)

{
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
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



/* Entry: 105374b74; end: 105374d07; -[SCRegistrationInitialData initWithRegistrationScope:resumeRegistrationData:circumstanceEngine:oAuthLoginABRetriever:shouldSkipUsernameIfPossible:shouldCombineDisplayNameAndBirthday:] */

undefined1 *
FUN_105374b74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e7b18;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    uVar2 = param_7;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010c127dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c127c40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105374d08; end: 105374d0b; -[SCRegistrationInitialData initialRegistrationUser] */

void FUN_105374d08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf2430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__createRegistrationUserIfNecessa_11255a2a8);
  return;
}



/* Entry: 105374d0c; end: 105374d0f; -[SCRegistrationInitialData initialRegistrationStateTransition] */

void FUN_105374d0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf2410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__createRegistrationStateTransiti_11255a2a0);
  return;
}



/* Entry: 105374d10; end: 105374df7; -[SCRegistrationInitialData initialRegistrationState] */

void FUN_105374d10(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  func_0x00010c0642c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c127a20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c127c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = *(ulong *)(param_1 + 0x38);
  if ((uVar4 == 0) || (func_0x00010c07ce60(uVar4,param_2,uVar3), (uVar4 & 1) != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c127d80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c082e60(uVar1,param_2,uVar2);
    _objc_release(uVar2);
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x10);
      func_0x00010c127d80(uVar4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105374dcc;
    }
  }
  uVar4 = uVar1;
  func_0x00010c064480(uVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_105374dcc:
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105374df8; end: 105374e83; -[SCRegistrationInitialData _credentialNameExisits:] */

bool FUN_105374df8(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bfb18a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    lVar3 = param_3;
    func_0x00010c089720(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    bVar1 = lVar4 != 0;
    _objc_release(lVar3);
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105374e84; end: 105374fdb; -[SCRegistrationInitialData _createRegistrationUserIfNecessary] */

void FUN_105374e84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = *(undefined **)(param_1 + 0x10);
  func_0x00010c127dc0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126af968;
    _objc_opt_new();
  }
  else {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c127a20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c127c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e98e0(puVar2,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c127a20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c127c40();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105374fe4;
  puStack_48 = &UNK_11084b5a0;
  lStack_40 = param_1;
  _objc_retain(puVar2);
  puStack_38 = puVar2;
  func_0x00010c0bd3c0(uVar4,param_2,&PTR___NSConcreteGlobalBlock_11087e488,
                      &PTR___NSConcreteGlobalBlock_11087e4a8,&puStack_60);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar1 = puStack_38;
  _objc_retain(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105374fdc; end: 105374fe3;  */

void FUN_105374fdc(void)

{
  return;
}



/* Entry: 105374fe4; end: 105375077;  */

void FUN_105374fe4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bdf6180();
  if (iVar1 != 0) {
    uVar2 = param_2;
    func_0x00010bfb18a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19d320(*(undefined8 *)(param_1 + 0x28));
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010c089720(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b8360(*(undefined8 *)(param_1 + 0x28));
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105375078; end: 1053751e3; -[SCRegistrationInitialData _createRegistrationStateTransition] */

void FUN_105375078(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_1053751e4;
  uStack_50 = 0x1053751f4;
  uStack_48 = 0;
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c127a20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c127c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bd3c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = puStack_68[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1053751e4; end: 1053751fb;  */

void FUN_1053751e4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1053751fc; end: 10537530b;  */

void FUN_1053751fc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    puVar1 = PTR_PTR_1126b7c60;
    _objc_alloc();
    func_0x00010c0167a0();
  }
  else {
    puVar1 = PTR_PTR_1126b7c68;
    _objc_alloc();
    func_0x00010c016780();
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain();
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10537530c; end: 105375423;  */

void FUN_10537530c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  _objc_retain(param_2);
  iVar5 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  uVar3 = param_2;
  func_0x00010c27dd80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2349e0();
  _objc_release(uVar3);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    puVar2 = PTR_PTR_1126b7c60;
    _objc_alloc();
    func_0x00010c0167a0();
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010bdf6180();
    if (iVar1 == 0) {
      puVar2 = PTR_PTR_1126b7c80;
      if (iVar5 == 0) {
        puVar2 = PTR_PTR_1126b7c68;
        _objc_alloc();
        func_0x00010c016780();
        goto LAB_1053753f8;
      }
    }
    else {
      puVar2 = PTR_PTR_1126b7c78;
      if (iVar5 != 0) {
        puVar2 = PTR_PTR_1126b7c70;
      }
    }
    _objc_alloc();
    func_0x00010c046260();
  }
LAB_1053753f8:
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105375424; end: 105375427; -[SCRegistrationInitialData prefillMockDataFor:] */

void FUN_105375424(void)

{
  return;
}



/* Entry: 105375428; end: 105375493; -[SCRegistrationInitialData .cxx_destruct] */

void FUN_105375428(long param_1)

{
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



/* Entry: 105375494; end: 105375517; -[SCRegistrationValidationDebouncer initWithDebounceInterval:performQueue:] */

undefined1 *
FUN_105375494(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7b20;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105375518; end: 105375587; -[SCRegistrationValidationDebouncer debounceRequestWithCompletion:] */

void FUN_105375518(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c069d00(uVar2);
  puVar1 = PTR_PTR_1126ae888;
  _objc_alloc();
  func_0x00010c0522e0(*(undefined8 *)(param_1 + 8));
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105375588; end: 1053755b7; -[SCRegistrationValidationDebouncer .cxx_destruct] */

void FUN_105375588(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1053755b8; end: 1053759e3; -[SCRegistrationWorkflow initWithRouter:changeUsernameStorageService:resumeRegistrationStorage:registrationUser:registrationChallenge:redirectToRegInfoProvider:usernameAvailabilityChecker:delegate:stateTransition:initialRegistrationState:usernameSuggestionFetcher:applicationLifecycleEvents:registrationFeatureLogger:shouldSkipUsernameIfPossible:registrationVerificationLogger:signupTransitionLogger:registrationService:registrationRequestPublisher:] */

undefined8 *
FUN_1053755b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  puStack_70 = PTR_PTR_1126e7b28;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_10);
    _objc_retain(param_11);
    uVar2 = puVar1[3];
    puVar1[3] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[7];
    puVar1[7] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    puVar3 = puVar1;
    func_0x00010be220c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[10];
    puVar1[10] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[6];
    puVar1[6] = param_13;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar4;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_15;
    _objc_release(uVar2);
    uVar2 = param_16;
    _objc_retainBlock();
    uVar5 = puVar1[0x16];
    puVar1[0x16] = uVar2;
    _objc_release(uVar5);
    puVar1[0xf] = 1;
    _objc_retain(param_17);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_20;
    _objc_release(uVar2);
    func_0x00010be153e0(puVar1);
    func_0x00010bee8620(puVar1);
  }
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
  return puVar1;
}



/* Entry: 1053759e4; end: 105375adb; -[SCRegistrationWorkflow beginWorkflow] */

void FUN_1053759e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c2a6a00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010be7cca0(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105375adc; end: 105375b07;  */

void FUN_105375adc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdccf00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105375b08; end: 105375b77; -[SCRegistrationWorkflow subscreenExited] */

void FUN_105375b08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c252440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc80a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be7ccb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentNextScreen_11257ccc8);
  return;
}



/* Entry: 105375b78; end: 105375c73; -[SCRegistrationWorkflow birthdaySubmitted:optedIn1TL:] */

void FUN_105375b78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010c170380(*(undefined8 *)(param_1 + 0x50));
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d5d00(*(undefined8 *)(param_1 + 0x50),param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2947a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be3c7c0(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c21f880(*(undefined8 *)(param_1 + 0x50),param_2,lVar4);
  lVar5 = *(long *)(param_1 + 0xb0);
  (**(code **)(lVar5 + 0x10))();
  if ((int)lVar5 != 0) {
    lVar5 = lVar4;
    func_0x00010bfb1920(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21f760(*(undefined8 *)(param_1 + 0x50),param_2,lVar5);
    _objc_release(lVar5);
  }
  func_0x00010bde89a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105375c74; end: 105375f07; -[SCRegistrationWorkflow _continueOrDone] */

void FUN_105375c74(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  iVar5 = (int)*(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c252440(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078b60();
  _objc_release(uVar2);
  if (iVar5 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0xc0));
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0920();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c125d80(uVar2);
    func_0x00010c1e96e0(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010bf51e00();
    _objc_initWeak(auStack_58,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0xb8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105375f08;
    puStack_70 = &UNK_11087e528;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(uVar2);
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105375fa0;
    puStack_a0 = &UNK_11087e558;
    uStack_68 = uVar2;
    _objc_copyWeak(auStack_90,auStack_58);
    _objc_retain(uVar2);
    uStack_98 = uVar2;
    _objc_copyWeak(auStack_c0,auStack_58);
    func_0x00010c127740(uVar3);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_c0);
    _objc_release(uStack_98);
    _objc_destroyWeak(auStack_90);
    _objc_release(uStack_68);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar2);
    return;
  }
  func_0x00010be8b7c0(param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c252440(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc80a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be7ccb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentNextScreen_11257ccc8);
  return;
}



/* Entry: 105375f08; end: 105375f9f;  */

void FUN_105375f08(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0f5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0ebfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010be8a0c0(lVar1);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105375fa0; end: 10537604f;  */

void FUN_105375fa0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0ebfa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010be7e040(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105376050; end: 105376097;  */

void FUN_105376050(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8a0a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105376098; end: 1053760f3; -[SCRegistrationWorkflow suggestedUsernameFinishedWithUsername:optedIn1TL:] */

void FUN_105376098(long param_1)

{
  undefined *puVar1;
  
  func_0x00010c21f760(*(undefined8 *)(param_1 + 0x50));
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d5d00(*(undefined8 *)(param_1 + 0x50));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bde89b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__continueOrDone_112557c08);
  return;
}



/* Entry: 1053760f4; end: 10537615b; -[SCRegistrationWorkflow displayNameFinishedWithFirstName:lastName:] */

void FUN_1053760f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(param_4);
  func_0x00010c19d320(uVar1);
  func_0x00010c1b8360(*(undefined8 *)(param_1 + 0x50));
  _objc_release(param_4);
  func_0x00010c21f760(*(undefined8 *)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bde89b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__continueOrDone_112557c08);
  return;
}



/* Entry: 10537615c; end: 1053761eb; -[SCRegistrationWorkflow displayNameSelectedLink:] */

void FUN_10537615c(long param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_50 = FUN_1053761ec;
  puStack_48 = &UNK_11087e5b8;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c1429e0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 1053761ec; end: 1053761f7;  */

void FUN_1053761ec(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showWebBrowserWithUrl_browsingDe_11266c568,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1053761f8; end: 105376253; -[SCRegistrationWorkflow usernameFinishedWithUsername:optedIn1TL:] */

void FUN_1053761f8(long param_1)

{
  undefined *puVar1;
  
  func_0x00010c21f760(*(undefined8 *)(param_1 + 0x50));
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d5d00(*(undefined8 *)(param_1 + 0x50));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bde89b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__continueOrDone_112557c08);
  return;
}



/* Entry: 105376254; end: 1053763c7; -[SCRegistrationWorkflow passwordFinishedWithRegistrationSuccess:password:optedIn1TL:] */

void FUN_105376254(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf1faa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf1faa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c293a60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010c298400();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c106f80();
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar2);
  func_0x00010be57900(param_1,param_2,uVar3,uVar5);
  func_0x00010be80380(param_1,param_2,param_3,param_4,param_5);
  _objc_release(param_3);
  puVar1 = PTR_PTR_1126b7c88;
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c294420(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c2947c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befb440(puVar1,param_2,uVar2,param_4);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1053763c8; end: 105376427; -[SCRegistrationWorkflow _markUserSkippedUsernameWhenRegIfNeeded:] */

void FUN_1053763c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0xb0);
  (**(code **)(lVar1 + 0x10))();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bbd20();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105376428; end: 10537659b; -[SCRegistrationWorkflow _proceedPasswordFinishedWithRegistrationSuccess:password:optedIn1TL:] */

void FUN_105376428(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d5d00(*(undefined8 *)(param_1 + 0x50),param_2,puVar1);
  _objc_release(puVar1);
  uVar4 = param_3;
  func_0x00010bf1faa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010be5d9c0(param_1,param_2,uVar2);
  func_0x00010be8b7c0(param_1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0xc0),param_2,PTR____kCFBooleanFalse_11034ab60);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c252440(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc80a0(uVar5,param_2,uVar4,1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar4);
  func_0x00010be7cca0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10537659c; end: 105376753; -[SCRegistrationWorkflow passwordFailedWithErrorType:] */

void FUN_10537659c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (6 < param_3) {
    if (param_3 == 7) {
      *(undefined8 *)(param_1 + 0x78) = 0;
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      puVar1 = PTR_PTR_1126af858;
      func_0x00010bf9b400(PTR_PTR_1126af858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c252500();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = uVar3;
      _objc_release(uVar2);
      _objc_release(puVar1);
      func_0x00010be99860(param_1);
      param_1 = param_1 + 0x10;
      _objc_loadWeakRetained(param_1);
      func_0x00010c127ae0();
    }
    else {
      if (param_3 != 8) {
        return;
      }
      func_0x00010be99860(param_1);
      param_1 = param_1 + 0x10;
      _objc_loadWeakRetained(param_1);
      func_0x00010c127b00();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  if (param_3 == 2) {
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126af858;
    func_0x00010bf85da0(PTR_PTR_1126af858);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c071ae0();
    _objc_release(puVar1);
    _objc_release(uVar2);
    if ((int)uVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1a670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s_birthdayExitedWithUserUnderageEr_1125a4340);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bf85dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_displayNameBirthdayExitedWithUse_1125bf118)
    ;
    return;
  }
  if (param_3 != 3) {
    return;
  }
  func_0x00010be8b7c0(param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126af858;
  func_0x00010c2945c0(PTR_PTR_1126af858);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252500();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be7ccb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentNextScreen_11257ccc8);
  return;
}



/* Entry: 105376754; end: 1053767e3; -[SCRegistrationWorkflow passwordLinkSelectedWithURL:] */

void FUN_105376754(long param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_50 = FUN_1053767e4;
  puStack_48 = &UNK_11087e5b8;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c1429e0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 1053767e4; end: 1053767ef;  */

void FUN_1053767e4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showWebBrowserWithUrl_browsingDe_11266c568,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1053767f0; end: 105376953; -[SCRegistrationWorkflow _presentRegistrationChallengeWithChallengeData:authSessionPayload:clientRequestId:optedIn1TL:] */

void FUN_1053767f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0xc0);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0d9840(uVar4,param_2,PTR____kCFBooleanFalse_11034ab60);
  func_0x00010be57900(param_1,param_2,&PTR____CFConstantStringClassReference_110daafd8,0);
  puVar1 = PTR_PTR_1126b7c90;
  func_0x00010c291680(PTR_PTR_1126b7c90,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b7c98;
  _objc_alloc();
  func_0x00010c03dae0();
  _objc_release(param_5);
  _objc_release(param_4);
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar2;
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d5d00(*(undefined8 *)(param_1 + 0x50),param_2,puVar2);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puVar2 = PTR_PTR_1126af858;
  func_0x00010bf34d00(PTR_PTR_1126af858);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252500(uVar4,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  _objc_release(uVar3);
  _objc_release(puVar2);
  func_0x00010be7cca0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105376954; end: 105376a17; -[SCRegistrationWorkflow passwordChallenged:authSessionPayload:clientRequestId:password:optedIn1TL:] */

void FUN_105376954(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_6);
  func_0x00010be7e040(param_1,param_2,param_3,param_4,param_5,param_7);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c294420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2947c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010befb440(PTR_PTR_1126b7c88,param_2,uVar2,param_6);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105376a18; end: 105376a1b; -[SCRegistrationWorkflow passwordChallengeFinishedWithRegistrationSuccess:password:optedIn1TL:] */

void FUN_105376a18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be80390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__proceedPasswordFinishedWithRegi_11257da80);
  return;
}



/* Entry: 105376a1c; end: 105376a1f; -[SCRegistrationWorkflow passwordChallengeFailedWithErrorType:] */

void FUN_105376a1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f52f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_passwordFailedWithErrorType__11261aed8);
  return;
}



/* Entry: 105376a20; end: 105376b17; -[SCRegistrationWorkflow passwordChallengeAbandonedWithIsFromResumedData:] */

void FUN_105376a20(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = uVar2;
  if (param_3 == 0) {
    puVar1 = PTR_PTR_1126af858;
    func_0x00010c0f53a0(PTR_PTR_1126af858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c082e60();
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    if ((int)uVar2 != 0) {
      puVar1 = PTR_PTR_1126af858;
      func_0x00010c0f53a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c252500();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = uVar3;
      _objc_release(uVar2);
      _objc_release(puVar1);
      goto LAB_105376b00;
    }
  }
  puVar1 = PTR_PTR_1126af858;
  func_0x00010bf9b400(PTR_PTR_1126af858);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252500();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  _objc_release(uVar2);
  _objc_release(puVar1);
  *(undefined8 *)(param_1 + 0x78) = 1;
LAB_105376b00:
                    /* WARNING: Could not recover jumptable at 0x00010be7ccb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentNextScreen_11257ccc8);
  return;
}



/* Entry: 105376b18; end: 105376bab; -[SCRegistrationWorkflow birthdayExitedWithUserUnderageError] */

void FUN_105376b18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x78) = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126af858;
  func_0x00010bf9b400(PTR_PTR_1126af858);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252500(uVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010be8b800(param_1);
  func_0x00010be99860(param_1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c127b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105376bac; end: 105376bcf; -[SCRegistrationWorkflow birthdayScreenExited] */

void FUN_105376bac(undefined8 param_1)

{
  func_0x00010be8b800();
                    /* WARNING: Could not recover jumptable at 0x00010c25fb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_subscreenExited_112675908);
  return;
}



/* Entry: 105376bd0; end: 105376be7; -[SCRegistrationWorkflow _removeBirthdayScreen] */

void FUN_105376bd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1429f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_runRouteWithAction__11262e498,
             &PTR___NSConcreteGlobalBlock_11087e608);
  return;
}



/* Entry: 105376be8; end: 105376c5f; -[SCRegistrationWorkflow birthdayExitSignUp] */

void FUN_105376be8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126af858;
  func_0x00010bf9b400(PTR_PTR_1126af858);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252500();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010be8b800(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be7ccb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentNextScreen_11257ccc8);
  return;
}



/* Entry: 105376c60; end: 105376cef; -[SCRegistrationWorkflow birthdaySelectedLink:] */

void FUN_105376c60(long param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_50 = FUN_105376cf0;
  puStack_48 = &UNK_11087e5b8;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c1429e0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 105376cf0; end: 105376cfb;  */

void FUN_105376cf0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showWebBrowserWithUrl_browsingDe_11266c568,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105376cfc; end: 105376df3; -[SCRegistrationWorkflow _removeBirthdayBearingScreenIfNeeded] */

void FUN_105376cfc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af858;
  func_0x00010bf1a5c0(PTR_PTR_1126af858);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c071ae0();
  _objc_release(puVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be8b810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeBirthdayScreen_1125807a0);
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af858;
  func_0x00010bf85da0(PTR_PTR_1126af858);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c071ae0();
  _objc_release(puVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be8be50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeDisplayNameBirthdayScreen_112580930)
    ;
    return;
  }
  return;
}



/* Entry: 105376df4; end: 105376e83; -[SCRegistrationWorkflow displayNameBirthdaySubmittedWithFirstName:lastName:birthday:optedIn1TL:] */

void FUN_105376df4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c19d320(uVar1,param_2,param_3);
  func_0x00010c1b8360(*(undefined8 *)(param_1 + 0x50),param_2,param_4);
  _objc_release(param_4);
  func_0x00010c21f760(*(undefined8 *)(param_1 + 0x50),param_2,0);
  func_0x00010bf1a8e0(param_1,param_2,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105376e84; end: 105376f17; -[SCRegistrationWorkflow displayNameBirthdayExitedWithUserUnderageError] */

void FUN_105376e84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x78) = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126af858;
  func_0x00010bf9b400(PTR_PTR_1126af858);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252500(uVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010be8be40(param_1);
  func_0x00010be99860(param_1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c127b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105376f18; end: 105376f3b; -[SCRegistrationWorkflow displayNameBirthdayScreenExited] */

void FUN_105376f18(undefined8 param_1)

{
  func_0x00010be8be40();
                    /* WARNING: Could not recover jumptable at 0x00010c25fb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_subscreenExited_112675908);
  return;
}



/* Entry: 105376f3c; end: 105376fb3; -[SCRegistrationWorkflow displayNameBirthdayExitSignUp] */

void FUN_105376f3c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126af858;
  func_0x00010bf9b400(PTR_PTR_1126af858);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252500();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010be8be40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be7ccb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentNextScreen_11257ccc8);
  return;
}



/* Entry: 105376fb4; end: 105377043; -[SCRegistrationWorkflow displayNameBirthdaySelectedLink:] */

void FUN_105376fb4(long param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_50 = FUN_105377044;
  puStack_48 = &UNK_11087e5b8;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c1429e0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 105377044; end: 10537704f;  */

void FUN_105377044(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showWebBrowserWithUrl_browsingDe_11266c568,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105377050; end: 105377067; -[SCRegistrationWorkflow _removeDisplayNameBirthdayScreen] */

void FUN_105377050(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1429f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_runRouteWithAction__11262e498,
             &PTR___NSConcreteGlobalBlock_11087e628);
  return;
}



/* Entry: 105377068; end: 1053770df; -[SCRegistrationWorkflow suggestedUsernameSwitchToUsernameWithUsernameSuggestions:] */

void FUN_105377068(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c21f880(*(undefined8 *)(param_1 + 0x50));
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c252440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc80a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be7ccb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentNextScreen_11257ccc8);
  return;
}



/* Entry: 1053770e0; end: 1053770f7; -[SCRegistrationWorkflow webBrowserDidDismiss:] */

void FUN_1053770e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1429f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_runRouteWithAction__11262e498,
             &PTR___NSConcreteGlobalBlock_11087e648);
  return;
}



/* Entry: 1053770f8; end: 10537728f; -[SCRegistrationWorkflow _presentNextScreen] */

void FUN_1053770f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c252440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bd8c0();
  _objc_release(uVar1);
  return;
}



/* Entry: 105377290; end: 1053772e7;  */

void FUN_105377290(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(param_1 + 0x20);
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1053772e8;
  puStack_20 = &UNK_11087e668;
  func_0x00010c1429e0(*(undefined8 *)(lStack_18 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 1053772e8; end: 10537739f;  */

void FUN_1053772e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  _objc_retain(param_2);
  func_0x00010bfb18a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c089720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x00010c29c000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237180(param_2);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1053773a0; end: 1053773f7;  */

void FUN_1053773a0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(param_1 + 0x20);
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1053773f8;
  puStack_20 = &UNK_11087e668;
  func_0x00010c1429e0(*(undefined8 *)(lStack_18 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 1053773f8; end: 105377483;  */

void FUN_1053773f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  _objc_retain(param_2);
  func_0x00010bf1a5c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x00010c29c000(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2361e0(param_2);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105377484; end: 1053774db;  */

void FUN_105377484(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(param_1 + 0x20);
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1053774dc;
  puStack_20 = &UNK_11087e668;
  func_0x00010c1429e0(*(undefined8 *)(lStack_18 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 1053774dc; end: 1053775b7;  */

void FUN_1053774dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  _objc_retain(param_2);
  func_0x00010bfb18a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c089720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010bf1a5c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x00010c29c000(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237140(param_2);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1053775b8; end: 10537760f;  */

void FUN_1053775b8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(param_1 + 0x20);
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105377610;
  puStack_20 = &UNK_11087e668;
  func_0x00010c1429e0(*(undefined8 *)(lStack_18 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 105377610; end: 10537769b;  */

void FUN_105377610(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  _objc_retain(param_2);
  func_0x00010c29c000(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c2947a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23a5a0(param_2);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10537769c; end: 1053776f3;  */

void FUN_10537769c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(param_1 + 0x20);
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1053776f4;
  puStack_20 = &UNK_11087e668;
  func_0x00010c1429e0(*(undefined8 *)(lStack_18 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 1053776f4; end: 105377783;  */

void FUN_1053776f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  _objc_retain(param_2);
  func_0x00010c294420(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x00010c29c000(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23aba0(param_2);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105377784; end: 1053777db;  */

void FUN_105377784(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(param_1 + 0x20);
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1053777dc;
  puStack_20 = &UNK_11087e668;
  func_0x00010c1429e0(*(undefined8 *)(lStack_18 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 1053777dc; end: 105377893;  */

void FUN_1053777dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  _objc_retain(param_2);
  func_0x00010c294420(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x00010c29c000(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c2947a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23aba0(param_2);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105377894; end: 1053778eb;  */

void FUN_105377894(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(param_1 + 0x20);
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1053778ec;
  puStack_20 = &UNK_11087e668;
  func_0x00010c1429e0(*(undefined8 *)(lStack_18 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 1053778ec; end: 10537795b;  */

void FUN_1053778ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  _objc_retain(param_2);
  func_0x00010c29c000(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238ea0(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10537795c; end: 1053779b3;  */

void FUN_10537795c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(param_1 + 0x20);
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1053779b4;
  puStack_20 = &UNK_11087e668;
  func_0x00010c1429e0(*(undefined8 *)(lStack_18 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 1053779b4; end: 105377a23;  */

void FUN_1053779b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  _objc_retain(param_2);
  func_0x00010c29c000(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238ea0(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105377a24; end: 105377a7b;  */

void FUN_105377a24(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)(param_1 + 0x20);
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105377a7c;
  puStack_20 = &UNK_11087e668;
  func_0x00010c1429e0(*(undefined8 *)(lStack_18 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 105377a7c; end: 105377aeb;  */

void FUN_105377a7c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  _objc_retain(param_2);
  func_0x00010c29c000(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238ea0(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105377aec; end: 105377b63;  */

void FUN_105377aec(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78) = 2;
  func_0x00010be99860(*(undefined8 *)(param_1 + 0x20));
  lStack_28 = *(long *)(param_1 + 0x20);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105377b64;
  puStack_30 = &UNK_11087e668;
  func_0x00010c1429e0(*(undefined8 *)(lStack_28 + 8),param_2,&puStack_48);
  return;
}



/* Entry: 105377b64; end: 105377bd7;  */

void FUN_105377b64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  _objc_retain(param_2);
  func_0x00010c29c000(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c236800(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105377bd8; end: 105377c13;  */

void FUN_105377bd8(long param_1)

{
  long lVar1;
  
  func_0x00010be99860(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x20) + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c127ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105377c14; end: 105377c87;  */

void FUN_105377c14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar3 = *(long *)(param_1 + 0x20) + 0x10;
  _objc_loadWeakRetained(lVar3);
  lVar6 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(lVar6 + 0x68);
  uVar2 = *(undefined8 *)(lVar6 + 0x70);
  uVar4 = *(undefined8 *)(lVar6 + 0x50);
  func_0x00010c0ebfa0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1f3c0();
  func_0x00010c127980(lVar3,param_2,uVar1,uVar2,uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105377c88; end: 105377cb3; -[SCRegistrationWorkflow COSChallengeAbandoned] */

void FUN_105377c88(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c073da0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0f51d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_passwordChallengeAbandonedWithIs_11261ae90,uVar1);
  return;
}



/* Entry: 105377cb4; end: 105377cbb; -[SCRegistrationWorkflow COSChallengeErrorWithError:] */

void FUN_105377cb4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f51f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_passwordChallengeFailedWithError_11261ae98,7)
  ;
  return;
}



/* Entry: 105377cbc; end: 105377d4b; -[SCRegistrationWorkflow COSChallengeCompletedWithBootStrapData:] */

void FUN_105377cbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b7bc8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff92e0();
  _objc_release(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c0ebfa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  func_0x00010c0f5200(param_1,param_2,puVar1,uVar4,uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105377d4c; end: 105377d53; -[SCRegistrationWorkflow logOnCOSChallengeReceivedWithChallengeType:] */

void FUN_105377d4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a2bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x88),PTR_s_logChallengeReceived__1126064f8);
  return;
}



/* Entry: 105377d54; end: 105377d5b; -[SCRegistrationWorkflow logOnCOSChallengeAttemptedWithChallengeType:loggingData:] */

void FUN_105377d54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a2b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x88),PTR_s_logChallengeAttemptedWithChallen_1126064f0);
  return;
}



/* Entry: 105377d5c; end: 1053780a3; -[SCRegistrationWorkflow logOnCOSChallengeResultedWithChallengeType:grpcStatusCode:protoStatusCode:challengeStatusCode:loggingData:] */

void FUN_105377d5c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_7);
  lVar3 = param_7;
  if (param_3 < 4) {
    if (param_3 == 1) {
      func_0x00010c0faf60();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c08fa60();
      if (lVar4 != 0) {
        lVar4 = param_7;
        func_0x00010bf53280();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar4;
        func_0x00010c08fa60();
        _objc_release(lVar4);
        _objc_release(lVar3);
        if (lVar1 == 0) goto LAB_105378074;
        puVar5 = PTR_PTR_1126af990;
        _objc_alloc(PTR_PTR_1126af990);
        puVar2 = PTR_PTR_1126af2d8;
        _objc_alloc(PTR_PTR_1126af2d8);
        lVar3 = param_7;
        func_0x00010c0faf60(param_7);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_7;
        func_0x00010bf53280(param_7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c02c420(puVar2,param_2,lVar3,lVar4);
        func_0x00010c035aa0(puVar5,param_2,puVar2,1,0,0);
        func_0x00010c1db1c0(*(undefined8 *)(param_1 + 0x50),param_2,puVar5);
        _objc_release(puVar5);
        _objc_release(puVar2);
        _objc_release(lVar4);
      }
LAB_105378070:
      _objc_release(lVar3);
      goto LAB_105378074;
    }
    if (param_3 != 2) goto LAB_105378074;
    func_0x00010beed4c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    if (lVar4 == 0) goto LAB_105378074;
    puVar5 = PTR_PTR_1126af990;
    _objc_alloc(PTR_PTR_1126af990);
    puVar2 = PTR_PTR_1126af2d8;
    _objc_alloc(PTR_PTR_1126af2d8);
    lVar3 = param_7;
    func_0x00010beed4c0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02c420(puVar2,param_2,lVar3,0);
    func_0x00010c035aa0(puVar5,param_2,puVar2,2,0,0);
    func_0x00010c1db1c0(*(undefined8 *)(param_1 + 0x50),param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(lVar3);
    *(undefined8 *)(param_1 + 0x78) = 2;
  }
  else {
    if (param_3 != 5) {
      if (param_3 != 4) goto LAB_105378074;
      lVar4 = param_7;
      func_0x00010bf8d6c0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar4;
      func_0x00010c08fa60();
      _objc_release(lVar4);
      if (lVar1 == 0) goto LAB_105378074;
      puVar5 = PTR_PTR_1126af988;
      _objc_alloc(PTR_PTR_1126af988);
      func_0x00010bf8d6c0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00f420(puVar5,param_2,lVar3,1);
      func_0x00010c194080(*(undefined8 *)(param_1 + 0x50),param_2,puVar5);
      _objc_release(puVar5);
      goto LAB_105378070;
    }
    func_0x00010beed4c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    if (lVar4 == 0) goto LAB_105378074;
    puVar5 = PTR_PTR_1126af988;
    _objc_alloc(PTR_PTR_1126af988);
    lVar3 = param_7;
    func_0x00010beed4c0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00f420(puVar5,param_2,lVar3,2);
    func_0x00010c194080(*(undefined8 *)(param_1 + 0x50),param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(lVar3);
    *(undefined8 *)(param_1 + 0x78) = 2;
  }
  func_0x00010be99860(param_1);
LAB_105378074:
  func_0x00010c0a2bc0(*(undefined8 *)(param_1 + 0x88),param_2,param_3,param_6,param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}


