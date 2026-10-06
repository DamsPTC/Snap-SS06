/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1053780a4; end: 1053782bb; -[SCRegistrationWorkflow _appWillResignActive] */

void FUN_1053780a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0xffffffffffffffff;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c252440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bd8c0();
  _objc_release(uVar1);
  if (puStack_48[3] != -1) {
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ada60();
    _objc_release(uVar1);
  }
  *(undefined8 *)(param_1 + 0x78) = 2;
  func_0x00010be99860(param_1);
  *(undefined8 *)(param_1 + 0x78) = 1;
  __Block_object_dispose(&uStack_50,8);
  return;
}



/* Entry: 1053782bc; end: 10537836f;  */

void FUN_1053782bc(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0x2b;
  return;
}



/* Entry: 105378370; end: 1053783ab;  */

void FUN_105378370(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af998;
  func_0x00010c0f1e80(PTR_PTR_1126af998,param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60));
  *(undefined **)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = puVar1;
  return;
}



/* Entry: 1053783ac; end: 1053783b3;  */

void FUN_1053783ac(void)

{
  return;
}



/* Entry: 1053783b4; end: 1053784d7; -[SCRegistrationWorkflow _logRegistraterDidSucceedWithUserId:preferredVerificationMethod:] */

void FUN_1053783b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c294420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2947c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125d80(*(undefined8 *)(param_1 + 0x50));
  func_0x00010c0add20(uVar3);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b28e0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ae6a0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be52930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logEmailSubmittedIfNeeded_1125723e8);
  return;
}



/* Entry: 1053784d8; end: 10537855f; -[SCRegistrationWorkflow _logEmailSubmittedIfNeeded] */

void FUN_1053784d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c127c40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bd3c0();
  _objc_release(uVar1);
  return;
}



/* Entry: 105378560; end: 105378567;  */

void FUN_105378560(void)

{
  return;
}



/* Entry: 105378568; end: 10537862f;  */

void FUN_105378568(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010bf8d6c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be07520(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0adca0(uVar3);
    _objc_release(uVar4);
    _objc_release(lVar1);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105378630; end: 1053786ff; -[SCRegistrationWorkflow _emailDomain:] */

void FUN_105378630(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  _objc_retain(param_3);
  func_0x00010c2a4be0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_3;
  func_0x00010c25d0a0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  ppuVar3 = ppuVar2;
  func_0x00010c11f420(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110dae4f8);
  ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar3 != (undefined **)0x7fffffffffffffff) {
    ppuVar4 = ppuVar2;
    func_0x00010c260c00(ppuVar2,param_2,(long)ppuVar3 + 1);
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar5 = ppuVar4;
    }
    _objc_retain(ppuVar5);
    _objc_release(ppuVar4);
  }
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 105378700; end: 1053787e7; -[SCRegistrationWorkflow _saveRegistrationData] */

void FUN_105378700(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf51e00(uVar1);
  func_0x00010c1d96e0();
  if (*(long *)(param_1 + 0x78) == 2) {
    puVar3 = PTR_PTR_1126af840;
    _objc_alloc(PTR_PTR_1126af840);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c252440(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03dc20(puVar3,param_2,uVar1,uVar2,*(undefined8 *)(param_1 + 0x60));
    _objc_release(uVar2);
  }
  else {
    puVar3 = (undefined *)0x0;
    if (*(long *)(param_1 + 0x78) == 1) {
      puVar3 = PTR_PTR_1126af840;
      _objc_alloc(PTR_PTR_1126af840);
      func_0x00010c03dc20();
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ed660();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1053787e8; end: 1053787f7; -[SCRegistrationWorkflow _getRegistrationStateConfig] */

void FUN_1053787e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c252510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_stateConfigForState__112672368,
             *(undefined8 *)(param_1 + 0x58));
  return;
}



/* Entry: 1053787f8; end: 105378927; -[SCRegistrationWorkflow _verifyLoginPrefilledUserNameAreAvailable] */

void FUN_1053787f8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c0b5ac0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf37c80(uVar3);
    _objc_release(lVar1);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 105378928; end: 10537896f;  */

void FUN_105378928(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beddac0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105378970; end: 1053789d7; -[SCRegistrationWorkflow _updatePrefilledUsernameSuggestionWithCheckerResult:] */

void FUN_105378970(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1053789d8;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010c0bc9c0(param_3,param_2,&puStack_38,&PTR___NSConcreteGlobalBlock_11087e748,
                      &PTR___NSConcreteGlobalBlock_11087e768);
  return;
}



/* Entry: 1053789d8; end: 105378a63;  */

void FUN_1053789d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126af7c0;
  _objc_alloc();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f860(puVar1,param_2,uVar3,4);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x80) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105378a64; end: 105378a6b;  */

void FUN_105378a64(void)

{
  return;
}



/* Entry: 105378a6c; end: 105378acf; -[SCRegistrationWorkflow _hasPrefilledUsernameFromLoginReroute] */

bool FUN_105378a6c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar3 != 0;
}



/* Entry: 105378ad0; end: 105378b43; -[SCRegistrationWorkflow _insertPrefilledUsernameAsTheFirstSuggestion:] */

void FUN_105378ad0(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x80) == 0) {
    _objc_retain(param_3);
    puVar1 = param_3;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    if (param_3 != (undefined *)0x0) {
      func_0x00010befa160(puVar1,param_2,param_3);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105378b44; end: 105378c57; -[SCRegistrationWorkflow _fetchUsernameSuggestionWhenResumeToBirthday] */

void FUN_105378b44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af858;
  func_0x00010bf1a5c0(PTR_PTR_1126af858);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c071ae0(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0x50);
  func_0x00010c2947a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  if ((int)uVar5 != 0 && lVar4 == 0) {
    lVar4 = *(long *)(param_1 + 0x50);
    func_0x00010bfb18a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x50);
    func_0x00010c089720();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0 || lVar3 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfab420();
      _objc_release(uVar5);
      _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar4);
      return;
    }
  }
  return;
}



/* Entry: 105378c58; end: 105378dbb; -[SCRegistrationWorkflow _passwordFailedWithError:] */

void FUN_105378c58(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0xc0));
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010c27dd80();
  if ((uVar1 < 9) && ((1L << (uVar1 & 0x3f) & 0x18cU) != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c1429e0(uVar2);
    _objc_destroyWeak(auStack_40);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    func_0x00010c1429e0(uVar2);
  }
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105378dbc; end: 105378e97;  */

void FUN_105378dbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cb140(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010c2373a0(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105378e98; end: 105378f2b;  */

void FUN_105378e98(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c27dd80(uVar2);
  func_0x00010bde6260(lVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105378f2c; end: 105378f2f; -[SCRegistrationWorkflow _confirmedErrorAlert:] */

void FUN_105378f2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f52f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_passwordFailedWithErrorType__11261aed8);
  return;
}



/* Entry: 105378f30; end: 105379017; -[SCRegistrationWorkflow _registrationFinishedWithSuccess:password:optedIn1TL:] */

void FUN_105378f30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bf1faa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e80();
  _objc_release(uVar3);
  func_0x00010c0f5300(param_1,param_2,param_3,param_4,param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105379018; end: 1053790df; -[SCRegistrationWorkflow _registrationFinishedWithError:] */

void FUN_105379018(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c27dd80();
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c125d80(uVar2);
  func_0x00010c0add00(uVar1,param_2,0xffffffffffffffff,uVar2,1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ae6a0();
  _objc_release(uVar1);
  func_0x00010be70960(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053790e0; end: 105379207; -[SCRegistrationWorkflow .cxx_destruct] */

void FUN_1053790e0(long param_1)

{
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
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
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105379208; end: 10537929b; +[SCRegistrationDisplayNameAction inputDisplayNameDidChangeWithFirstNameText:lastNameText:] */

void FUN_105379208(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b7b58;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10537929c; end: 1053792f7; +[SCRegistrationDisplayNameAction koreanUserConsentDidChangeWithAllChecked:] */

void FUN_10537929c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7b58;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  puVar2[0x20] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053792f8; end: 105379363; +[SCRegistrationDisplayNameAction selectLinkWithUrl:] */

void FUN_1053792f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b7b58;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105379364; end: 1053793ab; +[SCRegistrationDisplayNameAction submitDisplayName] */

void FUN_105379364(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7b58;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053793ac; end: 1053793f7; +[SCRegistrationDisplayNameAction tapBackButton] */

void FUN_1053793ac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7b58;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053793f8; end: 10537941b; -[SCRegistrationDisplayNameAction copyWithZone:] */

undefined8 FUN_1053793f8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10537941c; end: 1053794a3; -[SCRegistrationDisplayNameAction hash] */

void FUN_10537941c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126e7b30;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053794a4; end: 1053794e7; -[SCRegistrationDisplayNameAction internalInit] */

void FUN_1053794a4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e7b30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053794e8; end: 1053795c7; -[SCRegistrationDisplayNameAction isEqual:] */

long FUN_1053794e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1053795a0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1053795ac;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(char *)(param_1 + 0x20) == *(char *)(param_3 + 0x20))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if (lVar3 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_1053795ac;
          }
          goto LAB_1053795a0;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1053795ac:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1053795c8; end: 1053796eb; -[SCRegistrationDisplayNameAction matchSubmitDisplayName:tapBackButton:inputDisplayNameDidChange:koreanUserConsentDidChange:selectLink:] */

void FUN_1053795c8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      if (param_3 == 0) goto LAB_1053796b4;
      pcVar2 = *(code **)(param_3 + 0x10);
      lVar1 = param_3;
    }
    else {
      if ((lVar1 != 1) || (param_4 == 0)) goto LAB_1053796b4;
      pcVar2 = *(code **)(param_4 + 0x10);
      lVar1 = param_4;
    }
    (*pcVar2)(lVar1);
  }
  else if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))
                (param_5,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    }
  }
  else if (lVar1 == 3) {
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,*(undefined1 *)(param_1 + 0x20));
    }
  }
  else if ((lVar1 == 4) && (param_7 != 0)) {
    (**(code **)(param_7 + 0x10))(param_7,*(undefined8 *)(param_1 + 0x28));
  }
LAB_1053796b4:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053796ec; end: 105379727; -[SCRegistrationDisplayNameAction .cxx_destruct] */

void FUN_1053796ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105379728; end: 10537984b; -[SCRegistrationDisplayNameViewModel initWithFirstName:firstNameErrorMessage:lastName:lastNameErrorMessage:canContinue:canExit:] */

undefined1 *
FUN_105379728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e7b38;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10537984c; end: 10537986f; -[SCRegistrationDisplayNameViewModel copyWithZone:] */

undefined8 FUN_10537984c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105379870; end: 105379907; -[SCRegistrationDisplayNameViewModel hash] */

undefined8 * FUN_105379870(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  puVar3 = &uStack_58;
  uStack_40 = uVar2;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1053799d8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1053799e4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[5];
            if (puVar6 != (undefined8 *)param_3[5]) {
              func_0x00010c071ae0();
              goto LAB_1053799e4;
            }
            goto LAB_1053799d8;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1053799e4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105379908; end: 1053799ff; -[SCRegistrationDisplayNameViewModel isEqual:] */

long FUN_105379908(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1053799d8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1053799e4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_1053799e4;
            }
            goto LAB_1053799d8;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1053799e4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105379a00; end: 105379a07; -[SCRegistrationDisplayNameViewModel firstName] */

undefined8 FUN_105379a00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105379a08; end: 105379a0f; -[SCRegistrationDisplayNameViewModel firstNameErrorMessage] */

undefined8 FUN_105379a08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105379a10; end: 105379a17; -[SCRegistrationDisplayNameViewModel lastName] */

undefined8 FUN_105379a10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105379a18; end: 105379a1f; -[SCRegistrationDisplayNameViewModel lastNameErrorMessage] */

undefined8 FUN_105379a18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105379a20; end: 105379a27; -[SCRegistrationDisplayNameViewModel canContinue] */

undefined1 FUN_105379a20(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105379a28; end: 105379a2f; -[SCRegistrationDisplayNameViewModel canExit] */

undefined1 FUN_105379a28(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105379a30; end: 105379a77; -[SCRegistrationDisplayNameViewModel .cxx_destruct] */

void FUN_105379a30(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105379a78; end: 105379ac3; +[SCRegistrationPasswordAction errorAlertDidDismiss] */

void FUN_105379a78(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7b68;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105379ac4; end: 105379b0f; +[SCRegistrationPasswordAction exit] */

void FUN_105379ac4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7b68;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105379b10; end: 105379b77; +[SCRegistrationPasswordAction passwordDidChangeWithPassword:] */

void FUN_105379b10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b7b68;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 3;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105379b78; end: 105379be3; +[SCRegistrationPasswordAction selectLinkWithUrl:] */

void FUN_105379b78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b7b68;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105379be4; end: 105379c2b; +[SCRegistrationPasswordAction submit] */

void FUN_105379be4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7b68;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105379c2c; end: 105379c77; +[SCRegistrationPasswordAction togglePasswordVisibility] */

void FUN_105379c2c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7b68;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105379c78; end: 105379cd3; +[SCRegistrationPasswordAction toggled1TLCheckboxWithSelected:] */

void FUN_105379c78(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7b68;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  puVar2[0x18] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105379cd4; end: 105379cf7; -[SCRegistrationPasswordAction copyWithZone:] */

undefined8 FUN_105379cd4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105379cf8; end: 105379d73; -[SCRegistrationPasswordAction hash] */

void FUN_105379cf8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126e7b40;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105379d74; end: 105379db7; -[SCRegistrationPasswordAction internalInit] */

void FUN_105379d74(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e7b40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105379db8; end: 105379e7f; -[SCRegistrationPasswordAction isEqual:] */

long FUN_105379db8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105379e58:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105379e64;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(char *)(param_1 + 0x18) == *(char *)(param_3 + 0x18))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_105379e64;
        }
        goto LAB_105379e58;
      }
    }
    lVar3 = 0;
  }
LAB_105379e64:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105379e80; end: 10537a007; -[SCRegistrationPasswordAction matchSubmit:exit:togglePasswordVisibility:passwordDidChange:errorAlertDidDismiss:toggled1TLCheckbox:selectLink:] */

void FUN_105379e80(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 3) {
    if (lVar2 == 0) {
      if (param_3 == 0) goto LAB_105379fbc;
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
    }
    else if (lVar2 == 1) {
      if (param_4 == 0) goto LAB_105379fbc;
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
    else {
      if ((lVar2 != 2) || (param_5 == 0)) goto LAB_105379fbc;
      pcVar3 = *(code **)(param_5 + 0x10);
      lVar2 = param_5;
    }
LAB_105379fb8:
    (*pcVar3)(lVar2);
  }
  else {
    if (lVar2 < 5) {
      if (lVar2 != 3) {
        if ((lVar2 != 4) || (param_7 == 0)) goto LAB_105379fbc;
        pcVar3 = *(code **)(param_7 + 0x10);
        lVar2 = param_7;
        goto LAB_105379fb8;
      }
      if (param_6 == 0) goto LAB_105379fbc;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      pcVar3 = *(code **)(param_6 + 0x10);
      lVar2 = param_6;
    }
    else {
      if (lVar2 == 5) {
        if (param_8 != 0) {
          (**(code **)(param_8 + 0x10))(param_8,*(undefined1 *)(param_1 + 0x18));
        }
        goto LAB_105379fbc;
      }
      if ((lVar2 != 6) || (param_9 == 0)) goto LAB_105379fbc;
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      pcVar3 = *(code **)(param_9 + 0x10);
      lVar2 = param_9;
    }
    (*pcVar3)(lVar2,uVar1);
  }
LAB_105379fbc:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10537a008; end: 10537a037; -[SCRegistrationPasswordAction .cxx_destruct] */

void FUN_10537a008(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10537a038; end: 10537a16f; -[SCRegistrationPasswordViewModel initWithPassword:canContinue:isRegistering:canHideOrShowPassword:isPasswordHidden:state:errorAlertTitle:errorAlertMessage:] */

undefined1 *
FUN_10537a038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126e7b48;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    *(undefined1 *)((long)puVar1 + 10) = param_6;
    *(undefined1 *)((long)puVar1 + 0xb) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10537a170; end: 10537a193; -[SCRegistrationPasswordViewModel copyWithZone:] */

undefined8 FUN_10537a170(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10537a194; end: 10537a247; -[SCRegistrationPasswordViewModel hash] */

undefined8 * FUN_10537a194(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ushort uVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  ulong uVar11;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar9 = *(undefined4 *)(param_1 + 8);
  uVar10 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar9 >> 0x18),
                                           (uint6)(byte)((uint)uVar9 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar9) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar9 >> 8),(short)uVar10);
  uVar11 = CONCAT44((int)(uVar10 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar10 = CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar10 >> 0x20),(int)uVar11)) &
           0xff01ff01ffffffff;
  uVar8 = (ushort)(uVar10 >> 0x30);
  uStack_60 = (ulong)uVar1 & 0xff;
  uStack_58 = uVar10 >> 0x10 & 0xff;
  uStack_50 = (ulong)CONCAT24(uVar8,(uint)(ushort)(uVar10 >> 0x20)) & 0xffffffff;
  uStack_48 = (ulong)uVar8;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar4 = &uStack_68;
  uStack_30 = uVar3;
  func_0x000100505190(puVar4,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10537a338:
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10537a344;
    puVar7 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((((*(char *)(puVar4 + 1) == *(char *)(param_3 + 1) &&
          (*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9))) &&
         (*(char *)((long)puVar4 + 10) == *(char *)((long)param_3 + 10))) &&
        (*(char *)((long)puVar4 + 0xb) == *(char *)((long)param_3 + 0xb))))) {
      lVar6 = puVar4[2];
      if ((lVar6 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = puVar4[3];
        if ((lVar6 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = puVar4[4];
          if ((lVar6 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            puVar7 = (undefined8 *)puVar4[5];
            if (puVar7 != (undefined8 *)param_3[5]) {
              func_0x00010c071ae0();
              goto LAB_10537a344;
            }
            goto LAB_10537a338;
          }
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_10537a344:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 10537a248; end: 10537a35f; -[SCRegistrationPasswordViewModel isEqual:] */

long FUN_10537a248(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10537a338:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10537a344;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
        (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10537a344;
            }
            goto LAB_10537a338;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10537a344:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10537a360; end: 10537a367; -[SCRegistrationPasswordViewModel password] */

undefined8 FUN_10537a360(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10537a368; end: 10537a36f; -[SCRegistrationPasswordViewModel canContinue] */

undefined1 FUN_10537a368(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10537a370; end: 10537a377; -[SCRegistrationPasswordViewModel isRegistering] */

undefined1 FUN_10537a370(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10537a378; end: 10537a37f; -[SCRegistrationPasswordViewModel canHideOrShowPassword] */

undefined1 FUN_10537a378(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10537a380; end: 10537a387; -[SCRegistrationPasswordViewModel isPasswordHidden] */

undefined1 FUN_10537a380(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10537a388; end: 10537a38f; -[SCRegistrationPasswordViewModel state] */

undefined8 FUN_10537a388(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10537a390; end: 10537a397; -[SCRegistrationPasswordViewModel errorAlertTitle] */

undefined8 FUN_10537a390(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10537a398; end: 10537a39f; -[SCRegistrationPasswordViewModel errorAlertMessage] */

undefined8 FUN_10537a398(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10537a3a0; end: 10537a3e7; -[SCRegistrationPasswordViewModel .cxx_destruct] */

void FUN_10537a3a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10537a3e8; end: 10537a44b; +[SCRegistrationPasswordViewModelState defaultWithMessage:] */

void FUN_10537a3e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b7b78;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10537a44c; end: 10537a4b7; +[SCRegistrationPasswordViewModelState errorWithErrorMessage:] */

void FUN_10537a44c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b7b78;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10537a4b8; end: 10537a523; +[SCRegistrationPasswordViewModelState successWithMessage:] */

void FUN_10537a4b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b7b78;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10537a524; end: 10537a547; -[SCRegistrationPasswordViewModelState copyWithZone:] */

undefined8 FUN_10537a524(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10537a548; end: 10537a5cb; -[SCRegistrationPasswordViewModelState hash] */

void FUN_10537a548(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126e7b50;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10537a5cc; end: 10537a60f; -[SCRegistrationPasswordViewModelState internalInit] */

void FUN_10537a5cc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e7b50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10537a610; end: 10537a6df; -[SCRegistrationPasswordViewModelState isEqual:] */

long FUN_10537a610(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10537a6b8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10537a6c4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10537a6c4;
          }
          goto LAB_10537a6b8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10537a6c4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10537a6e0; end: 10537a78b; -[SCRegistrationPasswordViewModelState matchDefault:success:error:] */

void FUN_10537a6e0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_10537a768;
    lVar2 = 0x20;
    lVar1 = param_5;
  }
  else if (lVar1 == 1) {
    if (param_4 == 0) goto LAB_10537a768;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if ((lVar1 != 0) || (param_3 == 0)) goto LAB_10537a768;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10537a768:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10537a78c; end: 10537a7c7; -[SCRegistrationPasswordViewModelState .cxx_destruct] */

void FUN_10537a78c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10537a7c8; end: 10537a813; +[SCRegistrationSuggestedUsernameAction exited] */

void FUN_10537a7c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7b80;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10537a814; end: 10537a85b; +[SCRegistrationSuggestedUsernameAction submitUsername] */

void FUN_10537a814(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7b80;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10537a85c; end: 10537a8a7; +[SCRegistrationSuggestedUsernameAction switchToUserInput] */

void FUN_10537a85c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7b80;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10537a8a8; end: 10537a903; +[SCRegistrationSuggestedUsernameAction toggled1TLCheckboxWithSelected:] */

void FUN_10537a8a8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7b80;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  puVar2[0x10] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10537a904; end: 10537a927; -[SCRegistrationSuggestedUsernameAction copyWithZone:] */

undefined8 FUN_10537a904(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10537a928; end: 10537a983; -[SCRegistrationSuggestedUsernameAction hash] */

void FUN_10537a928(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uStack_20 = (ulong)*(byte *)(param_1 + 0x10);
  puVar1 = &uStack_28;
  func_0x000100505190(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126e7b58;
  puStack_60 = puVar1;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10537a984; end: 10537a9c7; -[SCRegistrationSuggestedUsernameAction internalInit] */

void FUN_10537a984(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e7b58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10537a9c8; end: 10537aa5f; -[SCRegistrationSuggestedUsernameAction isEqual:] */

bool FUN_10537a9c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10537aa60; end: 10537ab47; -[SCRegistrationSuggestedUsernameAction matchSubmitUsername:exited:switchToUserInput:toggled1TLCheckbox:] */

void FUN_10537aa60(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      if (param_3 == 0) goto LAB_10537ab18;
      pcVar2 = *(code **)(param_3 + 0x10);
      lVar1 = param_3;
    }
    else {
      if ((lVar1 != 1) || (param_4 == 0)) goto LAB_10537ab18;
      pcVar2 = *(code **)(param_4 + 0x10);
      lVar1 = param_4;
    }
  }
  else {
    if (lVar1 != 2) {
      if ((lVar1 == 3) && (param_6 != 0)) {
        (**(code **)(param_6 + 0x10))(param_6,*(undefined1 *)(param_1 + 0x10));
      }
      goto LAB_10537ab18;
    }
    if (param_5 == 0) goto LAB_10537ab18;
    pcVar2 = *(code **)(param_5 + 0x10);
    lVar1 = param_5;
  }
  (*pcVar2)(lVar1);
LAB_10537ab18:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10537ab48; end: 10537abcf; -[SCRegistrationSuggestedUsernameViewModel initWithSuggestedUsername:isRegistering:] */

undefined1 *
FUN_10537ab48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e7b60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10537abd0; end: 10537abf3; -[SCRegistrationSuggestedUsernameViewModel copyWithZone:] */

undefined8 FUN_10537abd0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10537abf4; end: 10537ac5f; -[SCRegistrationSuggestedUsernameViewModel hash] */

undefined8 * FUN_10537abf4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10537ace4;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10537ace4;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10537ace4;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10537ace4:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10537ac60; end: 10537acff; -[SCRegistrationSuggestedUsernameViewModel isEqual:] */

long FUN_10537ac60(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10537ace4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10537ace4;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10537ace4;
    }
  }
  lVar3 = 1;
LAB_10537ace4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10537ad00; end: 10537ad07; -[SCRegistrationSuggestedUsernameViewModel suggestedUsername] */

undefined8 FUN_10537ad00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10537ad08; end: 10537ad0f; -[SCRegistrationSuggestedUsernameViewModel isRegistering] */

undefined1 FUN_10537ad08(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10537ad10; end: 10537ad1b; -[SCRegistrationSuggestedUsernameViewModel .cxx_destruct] */

void FUN_10537ad10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10537ad1c; end: 10537ad77; +[SCRegistrationUsernameAction didSelectUsernameSuggestionWithIndex:] */

void FUN_10537ad1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7b90;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


