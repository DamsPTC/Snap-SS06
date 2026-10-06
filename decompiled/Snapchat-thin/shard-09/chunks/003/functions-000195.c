/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b8cba8; end: 106b8cc97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8cba8(long param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar3 = *(long *)(param_1 + 0x20);
  lVar4 = (long)_DAT_112759404;
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(lVar3 + lVar4);
  *(undefined8 *)(lVar3 + lVar4) = param_2;
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112759428) = param_3;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6b020(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ee20();
  _objc_release(uVar2);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11275941c) = 0;
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_release(lVar3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bdda0a0();
  if (iVar1 != 0) {
    if (*(char *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127593fc) == '\x01') {
      func_0x00010bec5ec0();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b8cc98; end: 106b8cceb;  */

void FUN_106b8cc98(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bdda0a0();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s__submitCode_11258f158);
    return;
  }
  func_0x00010bdd9b40();
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be92050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__resendCode_1125821b0);
    return;
  }
  return;
}



/* Entry: 106b8ccec; end: 106b8ccf3;  */

void FUN_106b8ccec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be92050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__resendCode_1125821b0);
  return;
}



/* Entry: 106b8ccf4; end: 106b8ce23; -[SCResendableCodeBusinessLogic _submitCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8ccf4(long param_1)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  *(undefined8 *)(param_1 + _DAT_11275941c) = 0;
  *(undefined1 *)(param_1 + _DAT_112759424) = 1;
  lVar1 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c25f040(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106b8ce24; end: 106b8ce8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8ce24(long param_1,undefined8 param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + _DAT_11275941c) = param_2;
    *(undefined1 *)(param_1 + _DAT_112759424) = 0;
    lVar1 = param_1;
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b8ce90; end: 106b8cf97; -[SCResendableCodeBusinessLogic _resendCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8ce90(long param_1)

{
  long lVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  *(undefined8 *)(param_1 + _DAT_112759420) = 0;
  *(undefined1 *)(param_1 + _DAT_112759424) = 1;
  lVar1 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c137dc0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106b8cf98; end: 106b8d013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8cf98(long param_1,long param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(long *)(param_1 + _DAT_112759420) = param_2;
    *(undefined1 *)(param_1 + _DAT_112759424) = 0;
    if (param_2 == 1) {
      func_0x00010bf3eda0();
    }
    else {
      lVar1 = param_1;
      func_0x00010bf8e1a0();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar1 + 0x10))();
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b8d014; end: 106b8d047; -[SCResendableCodeBusinessLogic _codeSubmissionOrResendFailed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106b8d014(long param_1)

{
  if (*(long *)(param_1 + _DAT_11275941c) == 3) {
    return true;
  }
  return *(long *)(param_1 + _DAT_112759420) == 2;
}



/* Entry: 106b8d048; end: 106b8d05f; -[SCResendableCodeBusinessLogic _codeIsUnverified] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106b8d048(long param_1)

{
  return *(long *)(param_1 + _DAT_11275941c) == 0;
}



/* Entry: 106b8d060; end: 106b8d077; -[SCResendableCodeBusinessLogic _codeIsIncorrect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106b8d060(long param_1)

{
  return *(long *)(param_1 + _DAT_11275941c) == 2;
}



/* Entry: 106b8d078; end: 106b8d08f; -[SCResendableCodeBusinessLogic _timerExpired] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106b8d078(long param_1)

{
  return *(long *)(param_1 + _DAT_112759418) == 0;
}



/* Entry: 106b8d090; end: 106b8d0db; -[SCResendableCodeBusinessLogic _canInitiateCodeResend] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8d090(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010becc280();
  if ((int)lVar1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112759404);
    func_0x00010c08fa60();
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bde19b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__codeIsIncorrect_112556008);
      return;
    }
  }
  return;
}



/* Entry: 106b8d0dc; end: 106b8d12f; -[SCResendableCodeBusinessLogic _canSubmitCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106b8d0dc(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112759404);
  func_0x00010c08fa60();
  if (uVar1 < *(ulong *)(param_1 + _DAT_1127593f8)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bde19d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__codeIsUnverified_112556010);
  return param_1;
}



/* Entry: 106b8d130; end: 106b8d1a3; -[SCResendableCodeBusinessLogic _buttonEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106b8d130(ulong param_1)

{
  ulong uVar1;
  
  if ((*(char *)(param_1 + (long)_DAT_112759400) != '\x01') ||
     (uVar1 = param_1, func_0x00010becc280(), (uVar1 & 1) == 0)) {
    if ((*(byte *)(param_1 + (long)_DAT_112759424) & 1) != 0) {
      return 0;
    }
    uVar1 = param_1;
    func_0x00010bdda0a0();
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bde1ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__codeSubmissionOrResendFailed_112556048);
      return param_1;
    }
  }
  return 1;
}



/* Entry: 106b8d1a4; end: 106b8d25b; -[SCResendableCodeBusinessLogic _buttonTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8d1a4(ulong param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  
  lVar2 = *(long *)(param_1 + (long)_DAT_112759404);
  func_0x00010c08fa60();
  if (((lVar2 == 0) ||
      ((uVar3 = param_1, func_0x00010bde19c0(), iVar1 = _DAT_112759408, (uVar3 & 1) == 0 &&
       (uVar3 = param_1, func_0x00010bde19a0(), iVar1 = _DAT_112759408, (uVar3 & 1) != 0)))) &&
     (iVar1 = _DAT_11275940c, *(long *)(param_1 + (long)_DAT_112759418) != 0)) {
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e769f8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = *(undefined **)(param_1 + (long)iVar1);
    _objc_retain(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106b8d25c; end: 106b8d2d3; -[SCResendableCodeBusinessLogic _resendCountdownTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8d25c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000106b8d3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106b8d2d4; end: 106b8d307; -[SCResendableCodeBusinessLogic _resendButtonTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8d2d4(long param_1)

{
  if (*(long *)(param_1 + _DAT_112759418) == 0) {
    func_0x000106b8d3d8();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b8d308; end: 106b8d327; -[SCResendableCodeBusinessLogic delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8d308(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275942c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b8d328; end: 106b8d33b; -[SCResendableCodeBusinessLogic setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8d328(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275942c,param_3);
  return;
}



/* Entry: 106b8d33c; end: 106b8d3a7; -[SCResendableCodeBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8d33c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275942c);
  _objc_storeStrong(param_1 + _DAT_112759404,0);
  _objc_storeStrong(param_1 + _DAT_112759410,0);
  _objc_storeStrong(param_1 + _DAT_11275940c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112759408,0);
  return;
}



/* Entry: 106b8d3a8; end: 106b8d3ef;  */

void FUN_106b8d3a8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e76a18;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e76a18,
                      &PTR____CFConstantStringClassReference_110e76a38,0);
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



/* Entry: 106b8d3f0; end: 106b8d43b; +[SCResendableCodeAction resendCode] */

void FUN_106b8d3f0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af440;
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



/* Entry: 106b8d43c; end: 106b8d487; +[SCResendableCodeAction submitCode] */

void FUN_106b8d43c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af440;
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



/* Entry: 106b8d488; end: 106b8d4f3; +[SCResendableCodeAction updateVerificationCodeWithCode:wasAutofilled:] */

void FUN_106b8d488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af440;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
  puVar2[0x18] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b8d4f4; end: 106b8d517; -[SCResendableCodeAction copyWithZone:] */

undefined8 FUN_106b8d4f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b8d518; end: 106b8d587; -[SCResendableCodeAction hash] */

void FUN_106b8d518(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126f54c8;
  puStack_70 = (undefined1 *)puVar2;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b8d588; end: 106b8d5cb; -[SCResendableCodeAction internalInit] */

void FUN_106b8d588(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f54c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b8d5cc; end: 106b8d67b; -[SCResendableCodeAction isEqual:] */

long FUN_106b8d5cc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b8d660;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(char *)(param_1 + 0x18) != *(char *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_106b8d660;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106b8d660;
    }
  }
  lVar3 = 1;
LAB_106b8d660:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106b8d67c; end: 106b8d72b; -[SCResendableCodeAction matchUpdateVerificationCode:submitCode:resendCode:] */

void FUN_106b8d67c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_106b8d708;
    pcVar2 = *(code **)(param_5 + 0x10);
    lVar1 = param_5;
  }
  else {
    if (lVar1 != 1) {
      if ((lVar1 == 0) && (param_3 != 0)) {
        (**(code **)(param_3 + 0x10))
                  (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x18));
      }
      goto LAB_106b8d708;
    }
    if (param_4 == 0) goto LAB_106b8d708;
    pcVar2 = *(code **)(param_4 + 0x10);
    lVar1 = param_4;
  }
  (*pcVar2)(lVar1);
LAB_106b8d708:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b8d72c; end: 106b8d737; -[SCResendableCodeAction .cxx_destruct] */

void FUN_106b8d72c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106b8d738; end: 106b8d85b; -[SCResendableCodeViewModel initWithTitle:resendCountdown:resendButtonTitle:enteredCode:enabled:inProgress:] */

undefined1 *
FUN_106b8d738(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126f54d0;
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



/* Entry: 106b8d85c; end: 106b8d87f; -[SCResendableCodeViewModel copyWithZone:] */

undefined8 FUN_106b8d85c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b8d880; end: 106b8d917; -[SCResendableCodeViewModel hash] */

undefined8 * FUN_106b8d880(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_106b8d9e8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106b8d9f4;
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
              goto LAB_106b8d9f4;
            }
            goto LAB_106b8d9e8;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106b8d9f4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106b8d918; end: 106b8da0f; -[SCResendableCodeViewModel isEqual:] */

long FUN_106b8d918(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106b8d9e8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b8d9f4;
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
              goto LAB_106b8d9f4;
            }
            goto LAB_106b8d9e8;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106b8d9f4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106b8da10; end: 106b8da17; -[SCResendableCodeViewModel title] */

undefined8 FUN_106b8da10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b8da18; end: 106b8da1f; -[SCResendableCodeViewModel resendCountdown] */

undefined8 FUN_106b8da18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106b8da20; end: 106b8da27; -[SCResendableCodeViewModel resendButtonTitle] */

undefined8 FUN_106b8da20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106b8da28; end: 106b8da2f; -[SCResendableCodeViewModel enteredCode] */

undefined8 FUN_106b8da28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106b8da30; end: 106b8da37; -[SCResendableCodeViewModel enabled] */

undefined1 FUN_106b8da30(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106b8da38; end: 106b8da3f; -[SCResendableCodeViewModel inProgress] */

undefined1 FUN_106b8da38(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106b8da40; end: 106b8da87; -[SCResendableCodeViewModel .cxx_destruct] */

void FUN_106b8da40(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106b8da88; end: 106b8dadf; -[SCResendableCodeCountdownTimer initWithInitialValue:updateInterval:] */

void FUN_106b8da88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f54d8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
  }
  return;
}



/* Entry: 106b8dae0; end: 106b8dae7; -[SCResendableCodeCountdownTimer initialCounter] */

undefined8 FUN_106b8dae0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106b8dae8; end: 106b8dbbf; -[SCResendableCodeCountdownTimer startCountdownWithBlock:] */

void FUN_106b8dae8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106b8dbc0;
  puStack_40 = &UNK_110848708;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106b8dbc0; end: 106b8dbfb;  */

void FUN_106b8dbc0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be9b860(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b8dbfc; end: 106b8dd0f; -[SCResendableCodeCountdownTimer _scheduleTimerWithBlock:] */

void FUN_106b8dbfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010c069d00();
  }
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010c150360(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106b8dd10; end: 106b8dd93;  */

void FUN_106b8dd10(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 8) == param_2)) {
    lVar2 = *(long *)(lVar1 + 0x10) + -1;
    *(long *)(lVar1 + 0x10) = lVar2;
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
      lVar2 = *(long *)(lVar1 + 0x10);
    }
    if (lVar2 == 0) {
      func_0x00010bf2e180(lVar1);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b8dd94; end: 106b8ddc7; -[SCResendableCodeCountdownTimer cancelCountdown] */

void FUN_106b8dd94(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 106b8ddc8; end: 106b8ddd3; -[SCResendableCodeCountdownTimer .cxx_destruct] */

void FUN_106b8ddc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b8ddd4; end: 106b8de87; -[SCPinCodeInputField initWithDigits:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106b8ddd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f54e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112759464) = param_3;
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112759468),param_4);
    puVar2 = PTR_PTR_1126af258;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275946c);
    *(undefined **)((long)puVar1 + (long)_DAT_11275946c) = puVar2;
    _objc_release(uVar3);
    func_0x00010beaa4c0(puVar1);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106b8de88; end: 106b8de8b; -[SCPinCodeInputField setBorderColor:] */

void FUN_106b8de88(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea1c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setAllColor__1125860a8);
  return;
}



/* Entry: 106b8de8c; end: 106b8decf; -[SCPinCodeInputField resetBorderColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8de8c(long param_1)

{
  int iVar1;
  
  func_0x00010bed1100();
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112759470);
  func_0x00010c071800();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be36130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__highlightNextPosition_11256b1e8);
    return;
  }
  return;
}



/* Entry: 106b8ded0; end: 106b8dedf; -[SCPinCodeInputField setAccessibilityIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8ded0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759470),PTR_s_setAccessibilityIdentifier__112635e10);
  return;
}



/* Entry: 106b8dee0; end: 106b8df0f; -[SCPinCodeInputField intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106b8dee0(long param_1)

{
  return (double)(*(ulong *)(param_1 + _DAT_112759464) - 1) * 4.0 +
         (double)*(ulong *)(param_1 + _DAT_112759464) * 40.0;
}



/* Entry: 106b8df10; end: 106b8df1f; -[SCPinCodeInputField becomeFirstResponder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8df10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf179b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759470),PTR_s_becomeFirstResponder_1125a3810);
  return;
}



/* Entry: 106b8df20; end: 106b8df2f; -[SCPinCodeInputField resignFirstResponder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8df20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13a0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759470),PTR_s_resignFirstResponder_11262c258);
  return;
}



/* Entry: 106b8df30; end: 106b8df3f; -[SCPinCodeInputField touchesBegan:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8df30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf179b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759470),PTR_s_becomeFirstResponder_1125a3810);
  return;
}



/* Entry: 106b8df40; end: 106b8df4f; -[SCPinCodeInputField text] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8df40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759470),PTR_s_text_1126787e8);
  return;
}



/* Entry: 106b8df50; end: 106b8dfd3; -[SCPinCodeInputField setText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8df50(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112759470;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,param_3);
    func_0x00010be8e000(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b8dfd4; end: 106b8dfe3; -[SCPinCodeInputField isEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8dfd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112759470),PTR_s_isEnabled_1125fa010);
  return;
}



/* Entry: 106b8dfe4; end: 106b8e027; -[SCPinCodeInputField setEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8dfe4(long param_1,undefined8 param_2,int param_3)

{
  func_0x00010c195460(*(undefined8 *)(param_1 + _DAT_112759470));
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be36130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__highlightNextPosition_11256b1e8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed1110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__unhighlightAll_112591de8);
  return;
}



/* Entry: 106b8e028; end: 106b8e14b; -[SCPinCodeInputField _textFieldDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8e028(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112759468;
  uVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c0fbfa0();
    _objc_release(lVar3);
  }
  uVar1 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  uVar5 = *(ulong *)(param_1 + _DAT_112759464);
  _objc_release(uVar1);
  if (uVar5 <= uVar2) {
    uVar1 = param_1 + lVar4;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      lVar4 = param_1 + lVar4;
      _objc_loadWeakRetained(lVar4);
      func_0x00010c0fbfc0();
      _objc_release(lVar4);
    }
  }
  func_0x00010be8e000(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b8e14c; end: 106b8e247; -[SCPinCodeInputField textField:shouldChangeCharactersInRange:replacementString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106b8e14c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar5 = *(undefined8 *)(param_1 + _DAT_11275946c);
  lVar7 = (long)_DAT_112759464;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c078f00(uVar5,param_2,param_4,param_5,uVar6);
  *(char *)(param_1 + _DAT_112759474) = (char)uVar5;
  uVar1 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c25cf80(uVar1,param_2,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  uVar3 = uVar2;
  func_0x00010c08fa60(uVar2);
  uVar4 = *(ulong *)(param_1 + lVar7);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3 <= uVar4;
}



/* Entry: 106b8e248; end: 106b8e25f; -[SCPinCodeInputField textFieldShouldBeginEditing:] */

undefined8 FUN_106b8e248(void)

{
  func_0x00010be36120();
  return 1;
}



/* Entry: 106b8e260; end: 106b8e277; -[SCPinCodeInputField textFieldShouldEndEditing:] */

undefined8 FUN_106b8e260(void)

{
  func_0x00010bed1100();
  return 1;
}



/* Entry: 106b8e278; end: 106b8e2a3; -[SCPinCodeInputField _setup] */

void FUN_106b8e278(undefined8 param_1)

{
  func_0x00010beab000();
  func_0x00010beb0680(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010beaebb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupPasteSupport_112589490);
  return;
}



/* Entry: 106b8e2a4; end: 106b8e3ab; -[SCPinCodeInputField _setupTextField] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8e2a4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (lRam00000001136c6c80 != -1) {
    func_0x00010002a2fc(0x1136c6c80,&PTR___NSConcreteGlobalBlock_110964670);
  }
  if ((bRam00000001136c6c78 & 1) == 0) {
    uVar4 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar3 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  }
  else {
    uVar3 = 0x3ff0000000000000;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0x3ff0000000000000;
  }
  puVar1 = PTR__OBJC_CLASS___UITextField_1126af060;
  _objc_alloc();
  func_0x00010c013de0(uVar4,uVar5,uVar3,uVar6);
  lVar2 = (long)_DAT_112759470;
  uVar3 = *(undefined8 *)(param_1 + lVar2);
  *(undefined **)(param_1 + lVar2) = puVar1;
  _objc_release(uVar3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c1b6ec0(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c213240(*(undefined8 *)(param_1 + lVar2));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar2));
  return;
}



/* Entry: 106b8e3ac; end: 106b8e6b3; -[SCPinCodeInputField _setupBlocks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8e3ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  ulong uVar18;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  func_0x00010c16e060();
  func_0x00010c190b80(puVar1,param_2,1);
  func_0x00010c207380(0x4010000000000000,puVar1);
  func_0x00010c166c00(puVar1,param_2,0);
  func_0x00010befbb60(param_1,param_2,puVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  lVar17 = (long)_DAT_112759464;
  func_0x00010bffc4a0();
  if (*(long *)(param_1 + lVar17) != 0) {
    uVar18 = 0;
    do {
      lVar3 = param_1;
      func_0x00010be1d500(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_2,lVar3);
      func_0x00010bef6d60(puVar1,param_2,lVar3);
      _objc_release(lVar3);
      uVar18 = uVar18 + 1;
    } while (uVar18 < *(ulong *)(param_1 + lVar17));
  }
  func_0x00010c219b60(puVar1,param_2,0);
  puVar16 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf493a0(puVar4,param_2,lVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  puStack_88 = puVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf493a0(puVar6,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  puStack_80 = puVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf493a0(puVar8,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1;
  puStack_78 = puVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010bf493a0(puVar11,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar16,param_2,puVar14);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(lVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(lVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(lVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar17);
  _objc_release(puVar4);
  uVar15 = *(undefined8 *)(param_1 + _DAT_112759478);
  *(undefined **)(param_1 + _DAT_112759478) = puVar2;
  _objc_release(uVar15);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new(PTR_PTR_1126aea58);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c21ad00(puVar1,param_2,0x1f);
  func_0x00010c213040(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4028000000000000);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xae);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar16 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(puVar16);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106b8e6b4; end: 106b8e817; -[SCPinCodeInputField _getBlock] */

void FUN_106b8e6b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new(PTR_PTR_1126aea58);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c21ad00(puVar1,param_2,0x1f);
  func_0x00010c213040(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4028000000000000);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xae);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3ff0000000000000);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106b8e818; end: 106b8e83f; -[SCPinCodeInputField _isRTL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106b8e818(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112759470);
  func_0x00010bf8d060(lVar1);
  return lVar1 == 1;
}



/* Entry: 106b8e840; end: 106b8e917; -[SCPinCodeInputField _render] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8e840(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112759470;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  _objc_release(uVar1);
  if (*(ulong *)(param_1 + _DAT_112759464) < uVar2) {
    return;
  }
  func_0x00010be92140(param_1);
  if (uVar2 != 0) {
    uVar1 = 0;
    do {
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c26b700(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf35920();
      _objc_release(uVar3);
      func_0x00010be8e0a0(param_1);
      uVar1 = uVar1 + 1;
    } while (uVar2 != uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be36130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__highlightNextPosition_11256b1e8);
  return;
}



/* Entry: 106b8e918; end: 106b8e9a3; -[SCPinCodeInputField _reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8e918(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010bed1100();
  lVar3 = (long)_DAT_112759464;
  if (*(long *)(param_1 + lVar3) != 0) {
    uVar2 = 0;
    lVar4 = (long)_DAT_112759478;
    do {
      uVar1 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c0dfd40(uVar1,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
      _objc_release(uVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ulong *)(param_1 + lVar3));
  }
  return;
}



/* Entry: 106b8e9a4; end: 106b8ea7b; -[SCPinCodeInputField _renderChar:atIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8e9a4(long param_1,undefined8 param_2,undefined2 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined2 uStack_32;
  
  if (param_4 < *(ulong *)(param_1 + _DAT_112759464)) {
    lVar1 = param_1;
    uStack_32 = param_3;
    func_0x00010be43140();
    if ((int)lVar1 != 0) {
      lVar2 = *(long *)(param_1 + _DAT_112759470);
      func_0x00010c26b700(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010c08fa60();
      param_4 = lVar1 + ~param_4;
      _objc_release(lVar2);
    }
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d920(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&uStack_32,1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_112759478);
    func_0x00010c0dfd40(uVar4,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  return;
}



/* Entry: 106b8ea7c; end: 106b8eba7; -[SCPinCodeInputField _highlightNextPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8ea7c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar1 = param_1;
  func_0x00010be43140();
  if ((int)lVar1 == 0) {
    uVar3 = *(ulong *)(param_1 + _DAT_112759470);
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c08fa60();
    _objc_release(uVar3);
    uVar3 = *(long *)(param_1 + _DAT_112759464) - 1;
    if (uVar3 <= uVar4) {
      uVar4 = uVar3;
    }
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xaf);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112759478);
    func_0x00010c0dfd40(uVar2,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xaf);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112759478);
    func_0x00010bfb1920(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar6 = uVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar6);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 106b8eba8; end: 106b8ebaf; -[SCPinCodeInputField _unhighlightAll] */

void FUN_106b8eba8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea1c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setAllColor__1125860a8,0xae);
  return;
}



/* Entry: 106b8ebb0; end: 106b8ed0b; -[SCPinCodeInputField _setAllColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8ebb0(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + _DAT_112759478);
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar6);
      }
      uVar7 = *(undefined8 *)(lVar8 * 8);
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      func_0x00010c08c0e0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c173280();
      _objc_release(uVar7);
      _objc_release(puVar4);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 != 0) {
    puVar4 = PTR__OBJC_CLASS___UIEditMenuInteraction_1126d0d28;
    _objc_alloc();
    func_0x00010c00a2c0();
    uVar7 = *(undefined8 *)(lVar6 + _DAT_11275947c);
    *(undefined **)(lVar6 + _DAT_11275947c) = puVar4;
    _objc_release(uVar7);
    func_0x00010bef9440(lVar6);
    puVar4 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
    func_0x00010c050900();
    func_0x00010c178280();
    func_0x00010bef9040(lVar6);
    func_0x00010bea9800(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 106b8ed0c; end: 106b8edc3; -[SCPinCodeInputField _setupPasteSupport] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8ed0c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIEditMenuInteraction_1126d0d28;
    _objc_alloc();
    func_0x00010c00a2c0();
    uVar3 = *(undefined8 *)(param_1 + _DAT_11275947c);
    *(undefined **)(param_1 + _DAT_11275947c) = puVar2;
    _objc_release(uVar3);
    func_0x00010bef9440(param_1);
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
    func_0x00010c050900();
    func_0x00010c178280();
    func_0x00010bef9040(param_1);
    func_0x00010bea9800(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106b8edc4; end: 106b8ee9b; -[SCPinCodeInputField _handleLongPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8edc4(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010c252440();
  if (lVar4 == 1) {
    lVar4 = (long)_DAT_112759470;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
    func_0x00010c071800();
    if (iVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
      func_0x00010bfbedc0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bfdcd60();
      _objc_release(puVar2);
      if ((int)puVar3 != 0) {
        func_0x00010bf179a0(*(undefined8 *)(param_1 + lVar4));
        func_0x00010c09ef00(param_3,param_2,param_1);
        puVar2 = PTR__OBJC_CLASS___UIEditMenuConfiguration_1126d0d30;
        func_0x00010bf46960(PTR__OBJC_CLASS___UIEditMenuConfiguration_1126d0d30,param_2,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c10bf80(*(undefined8 *)(param_1 + _DAT_11275947c),param_2,puVar2);
        _objc_release(puVar2);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b8ee9c; end: 106b8f003; -[SCPinCodeInputField _setUpPasteAccessibilityAction] */

undefined1 * FUN_106b8ee9c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR__OBJC_CLASS___UIAccessibilityCustomAction_1126d0d38;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000108b9a894();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c02d4e0();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160ec0(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  puVar3 = auStack_48;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  __Unwind_Resume();
  puVar3 = puVar3 + 0x20;
  _objc_loadWeakRetained();
  if (puVar3 != (undefined1 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
    func_0x00010bfbedc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfdcd60();
    _objc_release(puVar1);
    if ((int)puVar2 != 0) {
      func_0x00010be70ae0(puVar3);
      puVar4 = (undefined1 *)0x1;
      goto LAB_106b8f064;
    }
  }
  puVar4 = (undefined1 *)0x0;
LAB_106b8f064:
  _objc_release(puVar3);
  return puVar4;
}



/* Entry: 106b8f004; end: 106b8f07f;  */

undefined8 FUN_106b8f004(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
    func_0x00010bfbedc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfdcd60();
    _objc_release(puVar1);
    if ((int)puVar2 != 0) {
      func_0x00010be70ae0(param_1);
      uVar3 = 1;
      goto LAB_106b8f064;
    }
  }
  uVar3 = 0;
LAB_106b8f064:
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 106b8f080; end: 106b8f253; -[SCPinCodeInputField editMenuInteraction:menuForConfiguration:suggestedActions:] */

void FUN_106b8f080(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = auStack_68;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR__OBJC_CLASS___UIAction_1126d0d40;
  func_0x000108b9a894();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010beef300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar4 = PTR__OBJC_CLASS___UIMenu_1126d0d48;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ca960(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume(param_3);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010be70ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b8f254; end: 106b8f27f;  */

void FUN_106b8f254(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be70ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b8f280; end: 106b8f35b; -[SCPinCodeInputField _pasteFromPasteboard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8f280(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112759470;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c071800();
  if (iVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
    func_0x00010bfbedc0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    FUN_106b8f428();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar4;
    func_0x00010c08fa60();
    if (puVar2 != (undefined *)0x0) {
      *(undefined1 *)(param_1 + _DAT_112759474) = 0;
      func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5));
      func_0x00010becb540(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 106b8f35c; end: 106b8f427; -[SCPinCodeInputField .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b8f35c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275947c,0);
  _objc_storeStrong(param_1 + _DAT_11275946c,0);
  _objc_storeStrong(param_1 + _DAT_112759478,0);
  _objc_destroyWeak(param_1 + _DAT_112759468);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112759470,0);
  return;
}



/* Entry: 106b8f428; end: 106b8f563;  */

void FUN_106b8f428(ulong param_1,undefined **param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain();
  uVar6 = param_1;
  func_0x00010c08fa60();
  ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  if ((param_2 != (undefined **)0x0) && (uVar6 != 0)) {
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bf35a20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c08fa60();
    func_0x00010c25d900();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    func_0x00010c08fa60();
    if (uVar6 != 0) {
      uVar6 = 0;
      do {
        ppuVar3 = ppuVar2;
        func_0x00010c08fa60();
        if (param_2 <= ppuVar3) break;
        func_0x00010bf35920();
        puVar4 = puVar1;
        func_0x00010bf359c0();
        if ((int)puVar4 != 0) {
          func_0x00010bf06ba0(ppuVar2);
        }
        uVar6 = uVar6 + 1;
        uVar5 = param_1;
        func_0x00010c08fa60();
      } while (uVar6 < uVar5);
    }
    ppuVar3 = ppuVar2;
    func_0x00010bf51e00(ppuVar2);
    _objc_release(ppuVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 106b8f564; end: 106b8f5f3; -[SCAuthenticationTextFieldAutoFillDetector isAutoFillWithRange:replacementString:] */

ulong FUN_106b8f564(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_6);
  uVar1 = param_2;
  func_0x00010be438e0(param_2,param_3,param_4,param_5);
  if ((uVar1 & 1) == 0) {
    uVar2 = param_2;
    func_0x00010be40740(param_2,param_3,param_4,param_5,param_6);
    if ((int)uVar2 == 0) goto LAB_106b8f5d4;
    lVar3 = 8;
  }
  else {
    lVar3 = 0x10;
  }
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + lVar3) = param_1;
LAB_106b8f5d4:
  _objc_release(param_6);
  return uVar1;
}



/* Entry: 106b8f5f4; end: 106b8f63b; -[SCAuthenticationTextFieldAutoFillDetector isOTPAutoFillWithRange:expectedLength:] */

uint FUN_106b8f5f4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x00010bed5140();
  func_0x00010be3e4c0(param_1);
  return (uint)(param_3 + 1 == param_5) & (uint)param_1;
}



/* Entry: 106b8f63c; end: 106b8f66b; -[SCAuthenticationTextFieldAutoFillDetector isPasswordAutoFillWithRange:replacementString:] */

bool FUN_106b8f63c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  if (param_3 == 0 && param_4 == 0) {
    func_0x00010c08fa60(param_5);
    return 7 < param_5;
  }
  return false;
}



/* Entry: 106b8f66c; end: 106b8f697; -[SCAuthenticationTextFieldAutoFillDetector _isFirstCharacteristicsSignal:replacementString:] */

bool FUN_106b8f66c(void)

{
  long in_x3;
  long in_x4;
  
  if (in_x3 != 0) {
    return false;
  }
  func_0x00010c08fa60(in_x4);
  return in_x4 == 0;
}



/* Entry: 106b8f698; end: 106b8f6db; -[SCAuthenticationTextFieldAutoFillDetector _isSecondCharacteristicsSignal:] */

bool FUN_106b8f698(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  if (param_5 != 0) {
    return false;
  }
  _CACurrentMediaTime();
  return param_1 - *(double *)(param_2 + 8) < 0.1;
}



/* Entry: 106b8f6dc; end: 106b8f737; -[SCAuthenticationTextFieldAutoFillDetector _updateCharacteristicsSignalWhenNecessary:] */

void FUN_106b8f6dc(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_2;
  func_0x00010be43900();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010be40760(param_2,param_3,param_4,param_5);
    if ((int)uVar1 == 0) {
      return;
    }
    lVar2 = 8;
  }
  else {
    lVar2 = 0x10;
  }
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + lVar2) = param_1;
  return;
}



/* Entry: 106b8f738; end: 106b8f73b; -[SCAuthenticationTextFieldAutoFillDetector _isFirstCharacteristicsSignalForOTP:] */

void FUN_106b8f738(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3ecf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isCharacteristicsSignalForOTP__11256d4d8);
  return;
}



/* Entry: 106b8f73c; end: 106b8f77b; -[SCAuthenticationTextFieldAutoFillDetector _isSecondCharacteristicsSignalForOTP:] */

void FUN_106b8f73c(int param_1)

{
  func_0x00010be3ece0();
  if (param_1 != 0) {
    _CACurrentMediaTime();
  }
  return;
}



/* Entry: 106b8f77c; end: 106b8f78b; -[SCAuthenticationTextFieldAutoFillDetector _isCharacteristicsSignalForOTP:] */

bool FUN_106b8f77c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  return param_3 == 0 && param_4 == 0;
}



/* Entry: 106b8f78c; end: 106b8f7c3; -[SCAuthenticationTextFieldAutoFillDetector _isAutofilling] */

bool FUN_106b8f78c(double param_1,long param_2)

{
  _CACurrentMediaTime();
  return param_1 - *(double *)(param_2 + 0x10) < 0.1;
}



/* Entry: 106b8f7c4; end: 106b8f7d3; -[SCUnauthenticatedStyleHelperDefault defaultBackgroundColor] */

void FUN_106b8f7c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xd5);
  return;
}



/* Entry: 106b8f7d4; end: 106b8f7db; -[SCUnauthenticatedStyleHelperDefault defaultBackgroundImage] */

undefined8 FUN_106b8f7d4(void)

{
  return 0;
}



/* Entry: 106b8f7dc; end: 106b8f80b; -[SCUnauthenticatedStyleHelperDefault defaultButtonBaseColor] */

void FUN_106b8f7dc(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  uVar2 = 0x88;
  func_0x00010b83340c(0x88);
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_sig_color__11266c8c8,uVar2);
  return;
}



/* Entry: 106b8f80c; end: 106b8f81b; -[SCUnauthenticatedStyleHelperDefault defaultInlineButtonTextColor] */

void FUN_106b8f80c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x88);
  return;
}



/* Entry: 106b8f81c; end: 106b8f82b; -[SCUnauthenticatedStyleHelperDefault defaultAlternateActionLabelColorRegular] */

void FUN_106b8f81c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x88);
  return;
}


