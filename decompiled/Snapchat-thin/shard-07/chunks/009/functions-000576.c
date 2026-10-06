/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105aab52c; end: 105aab533; -[SCSpectaclesPasscodePhase navButtonAction] */

undefined8 FUN_105aab52c(void)

{
  return 1;
}



/* Entry: 105aab534; end: 105aab53b; -[SCSpectaclesPasscodePhase contentSize] */

undefined8 FUN_105aab534(void)

{
  return 0;
}



/* Entry: 105aab53c; end: 105aab56b; -[SCSpectaclesPasscodePhase childViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aab53c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272eab0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105aab56c; end: 105aab573; -[SCSpectaclesPasscodePhase onboardingPage] */

undefined8 FUN_105aab56c(void)

{
  return 0xe;
}



/* Entry: 105aab574; end: 105aab5ab; -[SCSpectaclesPasscodePhase pairingFlowControllerDidTapNavButton] */

void FUN_105aab574(undefined8 param_1)

{
  func_0x00010c0fa9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aab5ac; end: 105aab5e3; -[SCSpectaclesPasscodePhase _settingNewPasscodeDidFail] */

void FUN_105aab5ac(undefined8 param_1)

{
  func_0x00010c0fa9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aab5e4; end: 105aab61b; -[SCSpectaclesPasscodePhase _settingNewPasscodeDidSucceed] */

void FUN_105aab5e4(undefined8 param_1)

{
  func_0x00010c0fa9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aab61c; end: 105aab627; -[SCSpectaclesPasscodePhase spectaclesPasscodePhaseContainerViewController:didUpdateUserSecurityData:error:] */

void FUN_105aab61c(undefined8 param_1)

{
  long in_x4;
  
  if (in_x4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beaa3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__settingNewPasscodeDidFail_112588298);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010beaa3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__settingNewPasscodeDidSucceed_1125882a0);
  return;
}



/* Entry: 105aab628; end: 105aab683; -[SCSpectaclesPasscodePhase spectaclesPasscodePhaseContainerViewController:didUpdateTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aab628(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272eab4);
  *(undefined8 *)(param_1 + _DAT_11272eab4) = param_4;
  _objc_release(uVar1);
  func_0x00010c0fa9e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aab684; end: 105aab687; -[SCSpectaclesPasscodePhase spectaclesPasscodePhaseContainerViewControllerDidFindPasscodeIsSaved:] */

void FUN_105aab684(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beaa3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__settingNewPasscodeDidSucceed_1125882a0);
  return;
}



/* Entry: 105aab688; end: 105aab6c7; -[SCSpectaclesPasscodePhase .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aab688(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272eab4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272eab0,0);
  return;
}



/* Entry: 105aab6c8; end: 105aab71b; -[SCSpectaclesPostPairingPhase title] */

undefined * FUN_105aab6c8(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar9 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar2 = puVar9;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar9);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar9 = puVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar2 = puVar9;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar9);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar9 = puVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar9;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar9);
  _objc_exception_throw();
  _objc_retain(puVar2);
  if (puVar1 == puVar2) {
    puVar9 = (undefined *)0x1;
    goto LAB_105aabae4;
  }
  puVar9 = (undefined *)0x0;
  if ((puVar1 == (undefined *)0x0) || (puVar2 == (undefined *)0x0)) goto LAB_105aabae4;
  puVar9 = puVar1;
  _objc_opt_class(puVar1);
  puVar3 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar9);
  if (((ulong)puVar3 & 1) == 0) {
    puVar9 = (undefined *)0x0;
    goto LAB_105aabae4;
  }
  puVar3 = puVar1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  if (puVar3 == puVar4) {
    _objc_release(puVar4);
    _objc_release(puVar3);
LAB_105aab9a8:
    puVar5 = puVar1;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar5);
    _objc_retain(puVar6);
    if (puVar5 == puVar6) {
      _objc_release(puVar6);
      _objc_release(puVar5);
LAB_105aaba30:
      puVar9 = puVar1;
      func_0x00010c0d5de0();
      puVar7 = puVar2;
      func_0x00010c0d5de0();
      if (puVar9 == puVar7) {
        puVar7 = puVar1;
        func_0x00010bf38e80();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar2;
        func_0x00010bf38e80();
        _objc_retainAutoreleasedReturnValue();
        if (puVar7 == puVar8) {
          func_0x00010bf4d5e0(puVar1);
          puVar9 = puVar2;
          func_0x00010bf4d5e0(puVar2);
          puVar9 = (undefined *)(ulong)(puVar1 == puVar9);
        }
        else {
          puVar9 = (undefined *)0x0;
        }
        _objc_release(puVar8);
LAB_105aababc:
        _objc_release(puVar7);
      }
      else {
        puVar9 = (undefined *)0x0;
      }
    }
    else {
      if (puVar6 == (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
        puVar7 = puVar5;
        goto LAB_105aababc;
      }
      puVar9 = puVar5;
      func_0x00010c071ae0();
      _objc_release(puVar6);
      _objc_release(puVar5);
      if ((int)puVar9 != 0) goto LAB_105aaba30;
    }
    _objc_release(puVar6);
LAB_105aabacc:
    _objc_release(puVar5);
  }
  else {
    if (puVar4 == (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      puVar5 = puVar3;
      goto LAB_105aabacc;
    }
    puVar9 = puVar3;
    func_0x00010c071ae0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    if ((int)puVar9 != 0) goto LAB_105aab9a8;
    puVar9 = (undefined *)0x0;
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
LAB_105aabae4:
  _objc_release(puVar2);
  return puVar9;
}



/* Entry: 105aab71c; end: 105aab76f; -[SCSpectaclesPostPairingPhase subtitle] */

undefined * FUN_105aab71c(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar9 = puVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar2 = puVar9;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar9);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar9 = puVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar9;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar9);
  _objc_exception_throw();
  _objc_retain(puVar2);
  if (puVar1 == puVar2) {
    puVar9 = (undefined *)0x1;
    goto LAB_105aabae4;
  }
  puVar9 = (undefined *)0x0;
  if ((puVar1 == (undefined *)0x0) || (puVar2 == (undefined *)0x0)) goto LAB_105aabae4;
  puVar9 = puVar1;
  _objc_opt_class(puVar1);
  puVar3 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar9);
  if (((ulong)puVar3 & 1) == 0) {
    puVar9 = (undefined *)0x0;
    goto LAB_105aabae4;
  }
  puVar3 = puVar1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  if (puVar3 == puVar4) {
    _objc_release(puVar4);
    _objc_release(puVar3);
LAB_105aab9a8:
    puVar5 = puVar1;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar5);
    _objc_retain(puVar6);
    if (puVar5 == puVar6) {
      _objc_release(puVar6);
      _objc_release(puVar5);
LAB_105aaba30:
      puVar9 = puVar1;
      func_0x00010c0d5de0();
      puVar7 = puVar2;
      func_0x00010c0d5de0();
      if (puVar9 == puVar7) {
        puVar7 = puVar1;
        func_0x00010bf38e80();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar2;
        func_0x00010bf38e80();
        _objc_retainAutoreleasedReturnValue();
        if (puVar7 == puVar8) {
          func_0x00010bf4d5e0(puVar1);
          puVar9 = puVar2;
          func_0x00010bf4d5e0(puVar2);
          puVar9 = (undefined *)(ulong)(puVar1 == puVar9);
        }
        else {
          puVar9 = (undefined *)0x0;
        }
        _objc_release(puVar8);
LAB_105aababc:
        _objc_release(puVar7);
      }
      else {
        puVar9 = (undefined *)0x0;
      }
    }
    else {
      if (puVar6 == (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
        puVar7 = puVar5;
        goto LAB_105aababc;
      }
      puVar9 = puVar5;
      func_0x00010c071ae0();
      _objc_release(puVar6);
      _objc_release(puVar5);
      if ((int)puVar9 != 0) goto LAB_105aaba30;
    }
    _objc_release(puVar6);
LAB_105aabacc:
    _objc_release(puVar5);
  }
  else {
    if (puVar4 == (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      puVar5 = puVar3;
      goto LAB_105aabacc;
    }
    puVar9 = puVar3;
    func_0x00010c071ae0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    if ((int)puVar9 != 0) goto LAB_105aab9a8;
    puVar9 = (undefined *)0x0;
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
LAB_105aabae4:
  _objc_release(puVar2);
  return puVar9;
}



/* Entry: 105aab770; end: 105aab7c3; -[SCSpectaclesPostPairingPhase navButtonAction] */

undefined * FUN_105aab770(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar9 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar2 = puVar9;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar9);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar9 = puVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar9;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar9);
  _objc_exception_throw();
  _objc_retain(puVar2);
  if (puVar1 == puVar2) {
    puVar9 = (undefined *)0x1;
    goto LAB_105aabae4;
  }
  puVar9 = (undefined *)0x0;
  if ((puVar1 == (undefined *)0x0) || (puVar2 == (undefined *)0x0)) goto LAB_105aabae4;
  puVar9 = puVar1;
  _objc_opt_class(puVar1);
  puVar3 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar9);
  if (((ulong)puVar3 & 1) == 0) {
    puVar9 = (undefined *)0x0;
    goto LAB_105aabae4;
  }
  puVar3 = puVar1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  if (puVar3 == puVar4) {
    _objc_release(puVar4);
    _objc_release(puVar3);
LAB_105aab9a8:
    puVar5 = puVar1;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar5);
    _objc_retain(puVar6);
    if (puVar5 == puVar6) {
      _objc_release(puVar6);
      _objc_release(puVar5);
LAB_105aaba30:
      puVar9 = puVar1;
      func_0x00010c0d5de0();
      puVar7 = puVar2;
      func_0x00010c0d5de0();
      if (puVar9 == puVar7) {
        puVar7 = puVar1;
        func_0x00010bf38e80();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar2;
        func_0x00010bf38e80();
        _objc_retainAutoreleasedReturnValue();
        if (puVar7 == puVar8) {
          func_0x00010bf4d5e0(puVar1);
          puVar9 = puVar2;
          func_0x00010bf4d5e0(puVar2);
          puVar9 = (undefined *)(ulong)(puVar1 == puVar9);
        }
        else {
          puVar9 = (undefined *)0x0;
        }
        _objc_release(puVar8);
LAB_105aababc:
        _objc_release(puVar7);
      }
      else {
        puVar9 = (undefined *)0x0;
      }
    }
    else {
      if (puVar6 == (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
        puVar7 = puVar5;
        goto LAB_105aababc;
      }
      puVar9 = puVar5;
      func_0x00010c071ae0();
      _objc_release(puVar6);
      _objc_release(puVar5);
      if ((int)puVar9 != 0) goto LAB_105aaba30;
    }
    _objc_release(puVar6);
LAB_105aabacc:
    _objc_release(puVar5);
  }
  else {
    if (puVar4 == (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      puVar5 = puVar3;
      goto LAB_105aabacc;
    }
    puVar9 = puVar3;
    func_0x00010c071ae0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    if ((int)puVar9 != 0) goto LAB_105aab9a8;
    puVar9 = (undefined *)0x0;
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
LAB_105aabae4:
  _objc_release(puVar2);
  return puVar9;
}



/* Entry: 105aab7c4; end: 105aab817; -[SCSpectaclesPostPairingPhase childViewController] */

undefined * FUN_105aab7c4(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar9 = puVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar9;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar9);
  _objc_exception_throw();
  _objc_retain(puVar2);
  if (puVar1 == puVar2) {
    puVar9 = (undefined *)0x1;
    goto LAB_105aabae4;
  }
  puVar9 = (undefined *)0x0;
  if ((puVar1 == (undefined *)0x0) || (puVar2 == (undefined *)0x0)) goto LAB_105aabae4;
  puVar9 = puVar1;
  _objc_opt_class(puVar1);
  puVar3 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar9);
  if (((ulong)puVar3 & 1) == 0) {
    puVar9 = (undefined *)0x0;
    goto LAB_105aabae4;
  }
  puVar3 = puVar1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  if (puVar3 == puVar4) {
    _objc_release(puVar4);
    _objc_release(puVar3);
LAB_105aab9a8:
    puVar5 = puVar1;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar5);
    _objc_retain(puVar6);
    if (puVar5 == puVar6) {
      _objc_release(puVar6);
      _objc_release(puVar5);
LAB_105aaba30:
      puVar9 = puVar1;
      func_0x00010c0d5de0();
      puVar7 = puVar2;
      func_0x00010c0d5de0();
      if (puVar9 == puVar7) {
        puVar7 = puVar1;
        func_0x00010bf38e80();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar2;
        func_0x00010bf38e80();
        _objc_retainAutoreleasedReturnValue();
        if (puVar7 == puVar8) {
          func_0x00010bf4d5e0(puVar1);
          puVar9 = puVar2;
          func_0x00010bf4d5e0(puVar2);
          puVar9 = (undefined *)(ulong)(puVar1 == puVar9);
        }
        else {
          puVar9 = (undefined *)0x0;
        }
        _objc_release(puVar8);
LAB_105aababc:
        _objc_release(puVar7);
      }
      else {
        puVar9 = (undefined *)0x0;
      }
    }
    else {
      if (puVar6 == (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
        puVar7 = puVar5;
        goto LAB_105aababc;
      }
      puVar9 = puVar5;
      func_0x00010c071ae0();
      _objc_release(puVar6);
      _objc_release(puVar5);
      if ((int)puVar9 != 0) goto LAB_105aaba30;
    }
    _objc_release(puVar6);
LAB_105aabacc:
    _objc_release(puVar5);
  }
  else {
    if (puVar4 == (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      puVar5 = puVar3;
      goto LAB_105aabacc;
    }
    puVar9 = puVar3;
    func_0x00010c071ae0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    if ((int)puVar9 != 0) goto LAB_105aab9a8;
    puVar9 = (undefined *)0x0;
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
LAB_105aabae4:
  _objc_release(puVar2);
  return puVar9;
}



/* Entry: 105aab818; end: 105aab86b; -[SCSpectaclesPostPairingPhase contentSize] */

undefined * FUN_105aab818(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  puVar9 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar9;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar9);
  _objc_exception_throw();
  _objc_retain(puVar8);
  if (puVar1 == puVar8) {
    puVar9 = (undefined *)0x1;
    goto LAB_105aabae4;
  }
  puVar9 = (undefined *)0x0;
  if ((puVar1 == (undefined *)0x0) || (puVar8 == (undefined *)0x0)) goto LAB_105aabae4;
  puVar9 = puVar1;
  _objc_opt_class(puVar1);
  puVar2 = puVar8;
  _objc_opt_isKindOfClass(puVar8,puVar9);
  if (((ulong)puVar2 & 1) == 0) {
    puVar9 = (undefined *)0x0;
    goto LAB_105aabae4;
  }
  puVar2 = puVar1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar8;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  if (puVar2 == puVar3) {
    _objc_release(puVar3);
    _objc_release(puVar2);
LAB_105aab9a8:
    puVar4 = puVar1;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar4);
    _objc_retain(puVar5);
    if (puVar4 == puVar5) {
      _objc_release(puVar5);
      _objc_release(puVar4);
LAB_105aaba30:
      puVar9 = puVar1;
      func_0x00010c0d5de0();
      puVar6 = puVar8;
      func_0x00010c0d5de0();
      if (puVar9 == puVar6) {
        puVar6 = puVar1;
        func_0x00010bf38e80();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar8;
        func_0x00010bf38e80();
        _objc_retainAutoreleasedReturnValue();
        if (puVar6 == puVar7) {
          func_0x00010bf4d5e0(puVar1);
          puVar9 = puVar8;
          func_0x00010bf4d5e0(puVar8);
          puVar9 = (undefined *)(ulong)(puVar1 == puVar9);
        }
        else {
          puVar9 = (undefined *)0x0;
        }
        _objc_release(puVar7);
LAB_105aababc:
        _objc_release(puVar6);
      }
      else {
        puVar9 = (undefined *)0x0;
      }
    }
    else {
      if (puVar5 == (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
        puVar6 = puVar4;
        goto LAB_105aababc;
      }
      puVar9 = puVar4;
      func_0x00010c071ae0();
      _objc_release(puVar5);
      _objc_release(puVar4);
      if ((int)puVar9 != 0) goto LAB_105aaba30;
    }
    _objc_release(puVar5);
LAB_105aabacc:
    _objc_release(puVar4);
  }
  else {
    if (puVar3 == (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      puVar4 = puVar2;
      goto LAB_105aabacc;
    }
    puVar9 = puVar2;
    func_0x00010c071ae0();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if ((int)puVar9 != 0) goto LAB_105aab9a8;
    puVar9 = (undefined *)0x0;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
LAB_105aabae4:
  _objc_release(puVar8);
  return puVar9;
}



/* Entry: 105aab86c; end: 105aab8bf; -[SCSpectaclesPostPairingPhase pairingFlowControllerDidTapNavButton] */

undefined * FUN_105aab86c(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  _objc_retain(puVar8);
  if (puVar1 == puVar8) {
    puVar9 = (undefined *)0x1;
    goto LAB_105aabae4;
  }
  puVar9 = (undefined *)0x0;
  if ((puVar1 == (undefined *)0x0) || (puVar8 == (undefined *)0x0)) goto LAB_105aabae4;
  puVar9 = puVar1;
  _objc_opt_class(puVar1);
  puVar2 = puVar8;
  _objc_opt_isKindOfClass(puVar8,puVar9);
  if (((ulong)puVar2 & 1) == 0) {
    puVar9 = (undefined *)0x0;
    goto LAB_105aabae4;
  }
  puVar2 = puVar1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar8;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  if (puVar2 == puVar3) {
    _objc_release(puVar3);
    _objc_release(puVar2);
LAB_105aab9a8:
    puVar4 = puVar1;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar4);
    _objc_retain(puVar5);
    if (puVar4 == puVar5) {
      _objc_release(puVar5);
      _objc_release(puVar4);
LAB_105aaba30:
      puVar9 = puVar1;
      func_0x00010c0d5de0();
      puVar6 = puVar8;
      func_0x00010c0d5de0();
      if (puVar9 == puVar6) {
        puVar6 = puVar1;
        func_0x00010bf38e80();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar8;
        func_0x00010bf38e80();
        _objc_retainAutoreleasedReturnValue();
        if (puVar6 == puVar7) {
          func_0x00010bf4d5e0(puVar1);
          puVar9 = puVar8;
          func_0x00010bf4d5e0(puVar8);
          puVar9 = (undefined *)(ulong)(puVar1 == puVar9);
        }
        else {
          puVar9 = (undefined *)0x0;
        }
        _objc_release(puVar7);
LAB_105aababc:
        _objc_release(puVar6);
      }
      else {
        puVar9 = (undefined *)0x0;
      }
    }
    else {
      if (puVar5 == (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
        puVar6 = puVar4;
        goto LAB_105aababc;
      }
      puVar9 = puVar4;
      func_0x00010c071ae0();
      _objc_release(puVar5);
      _objc_release(puVar4);
      if ((int)puVar9 != 0) goto LAB_105aaba30;
    }
    _objc_release(puVar5);
LAB_105aabacc:
    _objc_release(puVar4);
  }
  else {
    if (puVar3 == (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      puVar4 = puVar2;
      goto LAB_105aabacc;
    }
    puVar9 = puVar2;
    func_0x00010c071ae0();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if ((int)puVar9 != 0) goto LAB_105aab9a8;
    puVar9 = (undefined *)0x0;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
LAB_105aabae4:
  _objc_release(puVar8);
  return puVar9;
}



/* Entry: 105aab8c0; end: 105aabb0b; -[SCSpectaclesPostPairingPhase isEqual:] */

ulong FUN_105aab8c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar7 = 1;
    goto LAB_105aabae4;
  }
  uVar7 = 0;
  if ((param_1 == 0) || (param_3 == 0)) goto LAB_105aabae4;
  uVar7 = param_1;
  _objc_opt_class(param_1);
  uVar1 = param_3;
  _objc_opt_isKindOfClass(param_3,uVar7);
  if ((uVar1 & 1) == 0) {
    uVar7 = 0;
    goto LAB_105aabae4;
  }
  uVar1 = param_1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  if (uVar1 == uVar2) {
    _objc_release(uVar2);
    _objc_release(uVar1);
LAB_105aab9a8:
    uVar3 = param_1;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar3);
    _objc_retain(uVar4);
    if (uVar3 == uVar4) {
      _objc_release(uVar4);
      _objc_release(uVar3);
LAB_105aaba30:
      uVar7 = param_1;
      func_0x00010c0d5de0();
      uVar5 = param_3;
      func_0x00010c0d5de0();
      if (uVar7 == uVar5) {
        uVar5 = param_1;
        func_0x00010bf38e80();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_3;
        func_0x00010bf38e80();
        _objc_retainAutoreleasedReturnValue();
        if (uVar5 == uVar6) {
          func_0x00010bf4d5e0(param_1);
          uVar7 = param_3;
          func_0x00010bf4d5e0(param_3);
          uVar7 = (ulong)(param_1 == uVar7);
        }
        else {
          uVar7 = 0;
        }
        _objc_release(uVar6);
LAB_105aababc:
        _objc_release(uVar5);
      }
      else {
        uVar7 = 0;
      }
    }
    else {
      if (uVar4 == 0) {
        uVar7 = 0;
        uVar5 = uVar3;
        goto LAB_105aababc;
      }
      uVar7 = uVar3;
      func_0x00010c071ae0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      if ((int)uVar7 != 0) goto LAB_105aaba30;
    }
    _objc_release(uVar4);
LAB_105aabacc:
    _objc_release(uVar3);
  }
  else {
    if (uVar2 == 0) {
      uVar7 = 0;
      uVar3 = uVar1;
      goto LAB_105aabacc;
    }
    uVar7 = uVar1;
    func_0x00010c071ae0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar7 != 0) goto LAB_105aab9a8;
    uVar7 = 0;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
LAB_105aabae4:
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 105aabb0c; end: 105aabb23; -[SCSpectaclesPostPairingPhase phaseDelegate] */

void FUN_105aabb0c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105aabb24; end: 105aabb2f; -[SCSpectaclesPostPairingPhase setPhaseDelegate:] */

void FUN_105aabb24(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 105aabb30; end: 105aabb37; -[SCSpectaclesPostPairingPhase onboardingPage] */

undefined8 FUN_105aabb30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105aabb38; end: 105aabb3f; -[SCSpectaclesPostPairingPhase .cxx_destruct] */

void FUN_105aabb38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105aabb40; end: 105aabcbf; -[SCSpectaclesProximityUnlockPhase initWithDevice:onDemandResourceFetching:playerProvider:lagunaId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105aabb40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126ebb18;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_11272eac0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bfa1c80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf70f40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161e20();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126c1fa8;
    _objc_alloc();
    func_0x00010c031300();
    lVar6 = (long)_DAT_11272eac4;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar5;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar6));
    lVar6 = (long)_DAT_11272eac8;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105aabcc0; end: 105aabcf7; -[SCSpectaclesProximityUnlockPhase proximityUnlockViewControllerDidContinue:] */

void FUN_105aabcc0(undefined8 param_1)

{
  func_0x00010c0fa9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aabcf8; end: 105aabd07; -[SCSpectaclesProximityUnlockPhase title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aabcf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0faa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272eac4),PTR_s_phaseTitle_11261c4a8);
  return;
}



/* Entry: 105aabd08; end: 105aabd17; -[SCSpectaclesProximityUnlockPhase subtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aabd08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0faa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272eac4),PTR_s_phaseSubtitle_11261c4a0);
  return;
}



/* Entry: 105aabd18; end: 105aabd1f; -[SCSpectaclesProximityUnlockPhase navButtonAction] */

undefined8 FUN_105aabd18(void)

{
  return 0;
}



/* Entry: 105aabd20; end: 105aabd27; -[SCSpectaclesProximityUnlockPhase contentSize] */

undefined8 FUN_105aabd20(void)

{
  return 0;
}



/* Entry: 105aabd28; end: 105aabd57; -[SCSpectaclesProximityUnlockPhase childViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aabd28(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272eac4);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105aabd58; end: 105aabd5f; -[SCSpectaclesProximityUnlockPhase onboardingPage] */

undefined8 FUN_105aabd58(void)

{
  return 0;
}



/* Entry: 105aabd60; end: 105aabdaf; -[SCSpectaclesProximityUnlockPhase .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aabd60(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272eac8,0);
  _objc_storeStrong(param_1 + _DAT_11272eac4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272eac0,0);
  return;
}



/* Entry: 105aabdb0; end: 105aabfe3; -[SCSpectaclesWifiSetupPhase initWithWiFiSettingsManager:onDemandResourceFetching:runtime:composerCoreUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105aabdb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126ebb20;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_78,puVar1);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272eacc);
    *(undefined **)((long)puVar1 + (long)_DAT_11272eacc) = puVar2;
    _objc_release(uVar6);
    lVar7 = (long)_DAT_11272ead0;
    _objc_retain(param_6);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_6;
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126b6860;
    _objc_alloc();
    func_0x00010c063000();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272ead4);
    *(undefined **)((long)puVar1 + (long)_DAT_11272ead4) = puVar2;
    _objc_release(uVar6);
    func_0x00010bea9000(puVar1);
    uVar6 = param_3;
    func_0x00010c2a55c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c0e0ea0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar5 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105aabfe4; end: 105aac02b;  */

void FUN_105aabfe4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be33680();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aac02c; end: 105aac163; -[SCSpectaclesWifiSetupPhase _handleWiFiStatusResult:] */

void FUN_105aac02c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105aac164;
  uStack_40 = 0x105aac174;
  uStack_38 = 0;
  func_0x00010c0c0800(param_3);
  lVar1 = puStack_58[5];
  func_0x00010bf48900();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c24cc00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010c0fa9e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c104ae0();
    _objc_release(param_1);
  }
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105aac164; end: 105aac17b;  */

void FUN_105aac164(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105aac17c; end: 105aac1b3;  */

void FUN_105aac17c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105aac1b4; end: 105aac1b7;  */

void FUN_105aac1b4(void)

{
  return;
}



/* Entry: 105aac1b8; end: 105aac1bb; -[SCSpectaclesWifiSetupPhase title] */

void FUN_105aac1b8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f1b5f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f1b5f8,
                      &PTR____CFConstantStringClassReference_110f1b278,0);
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



/* Entry: 105aac1bc; end: 105aac1bf; -[SCSpectaclesWifiSetupPhase subtitle] */

void FUN_105aac1bc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f1b498;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f1b498,
                      &PTR____CFConstantStringClassReference_110f1b278,0);
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



/* Entry: 105aac1c0; end: 105aac1c7; -[SCSpectaclesWifiSetupPhase navButtonAction] */

undefined8 FUN_105aac1c0(void)

{
  return 2;
}



/* Entry: 105aac1c8; end: 105aac1cf; -[SCSpectaclesWifiSetupPhase contentSize] */

undefined8 FUN_105aac1c8(void)

{
  return 0;
}



/* Entry: 105aac1d0; end: 105aac1ff; -[SCSpectaclesWifiSetupPhase childViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aac1d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272ead8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105aac200; end: 105aac237; -[SCSpectaclesWifiSetupPhase pairingFlowControllerDidTapNavButton] */

void FUN_105aac200(undefined8 param_1)

{
  func_0x00010c0fa9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aac238; end: 105aac23f; -[SCSpectaclesWifiSetupPhase onboardingPage] */

undefined8 FUN_105aac238(void)

{
  return 0xd;
}



/* Entry: 105aac240; end: 105aac357; -[SCSpectaclesWifiSetupPhase _setUpComposerWiFiSelectorViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aac240(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c1fb0;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c225920();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0x4050000000000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2b20(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  lVar3 = param_1;
  func_0x00010bdea980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166b20(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  puVar2 = PTR_PTR_1126c1fb8;
  _objc_alloc(PTR_PTR_1126c1fb8);
  func_0x00010c061d40();
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126c1fc0;
  _objc_alloc();
  func_0x00010c003f40();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11272ead8);
  *(undefined **)(param_1 + _DAT_11272ead8) = puVar4;
  _objc_release(uVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105aac358; end: 105aac4df; -[SCSpectaclesWifiSetupPhase _createAlertPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aac358(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272ead0);
  func_0x00010beff660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_58,param_1);
  puVar3 = PTR_PTR_1126aeaf8;
  _objc_alloc();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105aac4e0;
  puStack_68 = &UNK_110849680;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010c0311a0();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272eadc);
  *(undefined **)(param_1 + _DAT_11272eadc) = puVar3;
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c0b7600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105aac4e0; end: 105aac5c3;  */

void FUN_105aac4e0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdd0140();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105aac5c4; end: 105aac5e3; -[SCSpectaclesWifiSetupPhase _attachAlertViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aac5c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + _DAT_11272ead8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c10edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_11272ead8),PTR_s_presentViewController_animated_c_112621588,
               param_3,0,0);
    return;
  }
  return;
}



/* Entry: 105aac5e4; end: 105aac6b3; -[SCSpectaclesWifiSetupPhase _detachAlertViewControllerWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aac5e4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11272ead8;
  lVar1 = *(long *)(param_1 + lVar3);
  if (lVar1 != 0) {
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_105aac6b4;
      puStack_40 = &UNK_110849530;
      _objc_retain(param_3);
      lStack_38 = param_3;
      func_0x00010bf84b00(uVar2,param_2,0,&puStack_58);
      _objc_release(lStack_38);
      goto LAB_105aac698;
    }
  }
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
LAB_105aac698:
  _objc_release(param_3);
  return;
}



/* Entry: 105aac6b4; end: 105aac6c7;  */

void FUN_105aac6b4(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105aac6c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105aac6c8; end: 105aac737; -[SCSpectaclesWifiSetupPhase .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105aac6c8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272eadc,0);
  _objc_storeStrong(param_1 + _DAT_11272ead0,0);
  _objc_storeStrong(param_1 + _DAT_11272ead4,0);
  _objc_storeStrong(param_1 + _DAT_11272eacc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272ead8,0);
  return;
}



/* Entry: 105aac738; end: 105aac7c7;  */

void FUN_105aac738(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1b778;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e1b778,
                      &PTR____CFConstantStringClassReference_110e1b798,0);
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



/* Entry: 105aac7c8; end: 105aac7d3; +[SCComposerSpectaclesWiFiListView componentPath] */

undefined ** FUN_105aac7c8(void)

{
  return &PTR____CFConstantStringClassReference_110e1b858;
}



/* Entry: 105aac7d4; end: 105aac807; -[SCComposerSpectaclesWiFiListView initWithViewModel:componentContext:runtime:] */

void FUN_105aac7d4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ebb28;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105aac808; end: 105aac857; -[SCComposerSpectaclesWiFiListView setViewModel:] */

void FUN_105aac808(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105aac858; end: 105aac89b; -[SCComposerSpectaclesWiFiListView viewModel] */

void FUN_105aac858(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105aac89c; end: 105aac8eb; -[SCComposerSpectaclesWiFiListContext initWithWifiSettingManager:alertPresenter:] */

void FUN_105aac89c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ebb30;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105aac8ec; end: 105aac913; +[SCComposerSpectaclesWiFiListContext valdiMarshallableObjectDescriptor] */

void FUN_105aac8ec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108d2f08;
  param_1[1] = &PTR_DAT_1108d2fc8;
  param_1[2] = &PTR_s_ob_v_1108d2ed8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105aac914; end: 105aac93b;  */

undefined8 FUN_105aac914(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 105aac93c; end: 105aac9bb;  */

void FUN_105aac93c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105aac9bc;
  puStack_30 = &UNK_110842508;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105aac9bc; end: 105aac9eb;  */

void FUN_105aac9bc(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105aac9ec; end: 105aaca5f; -[SCComposerSpectaclesProxyManager initWithManager:] */

undefined1 * FUN_105aac9ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ebb38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105aaca60; end: 105aaca6b; -[SCComposerSpectaclesProxyManager pushToValdiMarshaller:] */

undefined * FUN_105aaca60(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1fe0;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x000105aada3c();
  func_0x000105aada58();
  return puVar1;
}



/* Entry: 105aaca6c; end: 105aaca9f; -[SCComposerSpectaclesProxyManager startProxyManualControl] */

void FUN_105aaca6c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2500c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105aacaa0; end: 105aacad3; -[SCComposerSpectaclesProxyManager stopProxyManualControl] */

void FUN_105aacaa0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2566c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105aacad4; end: 105aacb13; -[SCComposerSpectaclesProxyManager isProxyConnectionActive] */

undefined8 FUN_105aacad4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07b6e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105aacb14; end: 105aacb1f; -[SCComposerSpectaclesProxyManager .cxx_destruct] */

void FUN_105aacb14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105aacb20; end: 105aacc93; -[SCComposerSpectaclesWiFiNetwork initWithValue:] */

undefined * FUN_105aacb20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126c1fc8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c2a53e0(param_3);
  uVar3 = param_3;
  func_0x00010c0f5520(param_3);
  func_0x00010c0631c0(puVar1,param_2,uVar2,uVar3);
  uVar2 = param_3;
  func_0x00010c24cc00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c208f60(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010bf60e80(param_3);
  func_0x00010c0df6e0(puVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188140(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010c118ec0(param_3);
  func_0x00010c0df6e0(puVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5160(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  uVar2 = param_3;
  func_0x00010c06afe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aeee0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf872a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c190be0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 105aacc94; end: 105aacd5b; -[SCComposerSpectaclesWiFiStatus initWithValue:] */

undefined * FUN_105aacc94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c1fd0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c2a5300(param_3);
  func_0x00010c063180(puVar1,param_2,uVar2);
  puVar3 = PTR_PTR_1126c1fc8;
  _objc_alloc(PTR_PTR_1126c1fc8);
  uVar2 = param_3;
  func_0x00010bf48900(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c060400(puVar3,param_2,uVar2);
  func_0x00010c180da0(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 105aacd5c; end: 105aad15b; -[SCComposerSpectaclesWiFiSettingsManager initWithWiFiManager:] */

undefined8 * FUN_105aacd5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  puStack_80 = PTR_PTR_1126ebb40;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar4 = puVar1[6];
    puVar1[6] = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_3);
    uVar4 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar4 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar4 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar4 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = puVar1[5];
    puVar1[5] = puVar2;
    _objc_release(uVar4);
    _objc_initWeak(auStack_90,puVar1);
    uVar3 = puVar1[1];
    func_0x00010bf48ae0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105aad15c;
    puStack_a0 = &UNK_1108d2fe0;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = puVar1[1];
    func_0x00010c2a55c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar2;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_105aad1d4;
    puStack_c8 = &UNK_11084a018;
    _objc_copyWeak(auStack_c0,auStack_90);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = puVar1[1];
    func_0x00010c2a5420(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar2;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_105aad3a8;
    puStack_f0 = &UNK_11084a018;
    _objc_copyWeak(auStack_e8,auStack_90);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = puVar1[1];
    func_0x00010bf48460(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = puVar2;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_105aad5ac;
    puStack_118 = &UNK_11084fd28;
    _objc_copyWeak(auStack_110,auStack_90);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = puVar1[1];
    func_0x00010bfb5660(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_138,auStack_90);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_138);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105aad15c; end: 105aad1d3;  */

void FUN_105aad15c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = param_2;
    func_0x00010bf60ea0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105aad1d4; end: 105aad2af;  */

void FUN_105aad1d4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_1);
    _objc_retain(param_1);
    func_0x00010c0c0800(param_2);
    _objc_release(param_1);
    _objc_release(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105aad2b0; end: 105aad3a7;  */

void FUN_105aad2b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c1fd0;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c060400();
  _objc_release(param_2);
  func_0x00010c0d9840(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105aad3a8; end: 105aad483;  */

void FUN_105aad3a8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_1);
    _objc_retain(param_1);
    func_0x00010c0c0800(param_2);
    _objc_release(param_1);
    _objc_release(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105aad484; end: 105aad51b;  */

void FUN_105aad484(long param_1,undefined8 param_2)

{
  func_0x00010c0b8600(param_2,param_2,&PTR___NSConcreteGlobalBlock_1108d3030);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105aad51c; end: 105aad5ab;  */

void FUN_105aad51c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c1fd8;
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bf6e340(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c055d40(puVar1);
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105aad5ac; end: 105aad703;  */

void FUN_105aad5ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    puVar1 = PTR_PTR_1126c1fd8;
    _objc_alloc(PTR_PTR_1126c1fd8);
    uVar2 = param_2;
    func_0x00010bf6e340(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c055d40(puVar1);
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105aad704; end: 105aad70f; -[SCComposerSpectaclesWiFiSettingsManager pushToValdiMarshaller:] */

undefined * FUN_105aad704(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1fe8;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x000105aada3c();
  func_0x000105aada58();
  return puVar1;
}



/* Entry: 105aad710; end: 105aad717; -[SCComposerSpectaclesWiFiSettingsManager currentPhoneWiFiSSID] */

void FUN_105aad710(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5f9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_currentPhoneWiFiSSID_1125b5810);
  return;
}



/* Entry: 105aad718; end: 105aad71f; -[SCComposerSpectaclesWiFiSettingsManager connectedDeviceWiFiSSID] */

void FUN_105aad718(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf48710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_connectedDeviceWiFiSSID_1125afb68);
  return;
}



/* Entry: 105aad720; end: 105aad727; -[SCComposerSpectaclesWiFiSettingsManager requestAvailableWiFiNetworksAsync] */

void FUN_105aad720(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c134b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_requestAvailableWiFiNetworksAsyn_11262acf0);
  return;
}



/* Entry: 105aad728; end: 105aad72f; -[SCComposerSpectaclesWiFiSettingsManager requestWiFiNetworkStatusAsync] */

void FUN_105aad728(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c136ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_requestWiFiNetworkStatusAsync_11262b618);
  return;
}



/* Entry: 105aad730; end: 105aad737; -[SCComposerSpectaclesWiFiSettingsManager canForgetWiFi] */

void FUN_105aad730(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2ca50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_canForgetWiFi_1125a8c38)
  ;
  return;
}



/* Entry: 105aad738; end: 105aad73f; -[SCComposerSpectaclesWiFiSettingsManager supportProxyNetwork] */

void FUN_105aad738(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c262f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_supportProxyNetwork_112676600);
  return;
}



/* Entry: 105aad740; end: 105aad747; -[SCComposerSpectaclesWiFiSettingsManager wifiStatus] */

void FUN_105aad740(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_toSCBridgeObservable_11267a270);
  return;
}



/* Entry: 105aad748; end: 105aad74f; -[SCComposerSpectaclesWiFiSettingsManager wifiNetworkList] */

void FUN_105aad748(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_toSCBridgeObservable_11267a270);
  return;
}



/* Entry: 105aad750; end: 105aad757; -[SCComposerSpectaclesWiFiSettingsManager connectingWiFiSSID] */

void FUN_105aad750(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_toSCBridgeObservable_11267a270);
  return;
}



/* Entry: 105aad758; end: 105aad75f; -[SCComposerSpectaclesWiFiSettingsManager error] */

void FUN_105aad758(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_toSCBridgeObservable_11267a270);
  return;
}



/* Entry: 105aad760; end: 105aad7df; -[SCComposerSpectaclesWiFiSettingsManager wifiNetworkWithSsid:] */

void FUN_105aad760(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c1fc8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2a5400(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c060400(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105aad7e0; end: 105aad7e7; -[SCComposerSpectaclesWiFiSettingsManager connectWiFiWithSsid:password:] */

void FUN_105aad7e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf48490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_connectWiFiWithSSID_password__1125afac8);
  return;
}



/* Entry: 105aad7e8; end: 105aad7ef; -[SCComposerSpectaclesWiFiSettingsManager enableSpectaclesWiFiSettingsWithEnable:] */

void FUN_105aad7e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf91c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_enableSpectaclesWiFiSettings__1125c20a8);
  return;
}



/* Entry: 105aad7f0; end: 105aad7f7; -[SCComposerSpectaclesWiFiSettingsManager forgetWiFiWithSsid:] */

void FUN_105aad7f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb5690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_forgetWiFiWithSSID__1125caf48);
  return;
}



/* Entry: 105aad7f8; end: 105aad857; -[SCComposerSpectaclesWiFiSettingsManager .cxx_destruct] */

void FUN_105aad7f8(long param_1)

{
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



/* Entry: 105aad858; end: 105aad873; +[SCComposerSpectaclesBluetoothStateProviding valdiMarshallableObjectDescriptor] */

void FUN_105aad858(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108d3050;
  param_1[1] = &PTR_s_SCBridgeObservable_1108d3080;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105aad874; end: 105aad88f; +[SCComposerSpectaclesPowerManaging valdiMarshallableObjectDescriptor] */

void FUN_105aad874(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108d3098;
  param_1[1] = &PTR_s_SCBridgeObservable_1108d30f8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105aad890; end: 105aad8a3; +[SCComposerSpectaclesProxyManaging valdiMarshallableObjectDescriptor] */

void FUN_105aad890(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108d3110;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105aad8a4; end: 105aad8eb;  */

undefined * FUN_105aad8a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1fe0;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x000105aada3c();
  func_0x000105aada58();
  return puVar1;
}



/* Entry: 105aad8ec; end: 105aad90f; +[SCComposerSpectaclesWiFiSettingsManaging valdiMarshallableObjectDescriptor] */

void FUN_105aad8ec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108d31a0;
  param_1[1] = &PTR_s_SCBridgeObservable_1108d3308;
  param_1[2] = &PTR_s_oob_v_1108d3170;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105aad910; end: 105aad93b;  */

undefined8 FUN_105aad910(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(uint *)(param_2 + 2) & 1);
  return 0;
}



/* Entry: 105aad93c; end: 105aad9b7;  */

void FUN_105aad93c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105aada00;
  puStack_30 = &UNK_110858448;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  func_0x000105aada58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}


