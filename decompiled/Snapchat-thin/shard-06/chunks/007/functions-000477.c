/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104d1bbc4; end: 104d1bc1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d1bbc4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = (long)_DAT_11271148c;
  _objc_retain(param_2);
  lVar1 = lVar1 + lVar2;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf1a880();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d1bc1c; end: 104d1bc2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d1bc1c(long param_1,undefined1 param_2)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127114bc) = param_2;
  return;
}



/* Entry: 104d1bc30; end: 104d1be73; -[SCRegistrationBirthdayBusinessLogic _submit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d1bc30(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112711490);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0920();
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010bee77a0();
  if ((int)lVar2 != 0) {
    lVar3 = *(long *)(param_1 + _DAT_112711494);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c29d560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf1a5c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be1cd80(param_1);
    func_0x00010c0ad980(lVar3);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release();
    func_0x000106bfddfc();
    if (lVar3 != 1) {
      lVar2 = param_1 + _DAT_11271148c;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c29d560(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010bf1a5c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a8e0(lVar2);
      _objc_release(lVar4);
      _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x104d1bddc;
    puStack_50 = &UNK_110842e18;
    lStack_48 = param_1;
    func_0x000100c749e0(0,"APPSTORE",&puStack_68);
  }
  return;
}



/* Entry: 104d1be74; end: 104d1bea7; -[SCRegistrationBirthdayBusinessLogic _backButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d1be74(long param_1)

{
  param_1 = param_1 + _DAT_11271148c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1a860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d1bea8; end: 104d1bfe3; -[SCRegistrationBirthdayBusinessLogic _initViewModelBuilder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d1bea8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af7a0;
  func_0x00010c1279c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_1127114c4;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127114a4);
  func_0x000106b9003c(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b3f80(uVar3,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b3640(uVar2,param_2,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271149c);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c08b300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b24c0(uVar4,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
  if (param_3 != 0) {
    func_0x00010bed23c0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d1bfe4; end: 104d1c123; -[SCRegistrationBirthdayBusinessLogic _update:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d1bfe4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_1127114c8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(long *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  lVar4 = (long)_DAT_1127114c4;
  func_0x00010c2a9320(*(undefined8 *)(param_1 + lVar4),param_2,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127114a8);
  func_0x00010c25d400(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ae4c0(uVar3,param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c2b8cc0(*(undefined8 *)(param_1 + lVar4),param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b8c20(*(undefined8 *)(param_1 + lVar4),param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  lVar2 = param_1;
  func_0x00010bdd99a0(param_1);
  func_0x00010c2a9f60(uVar1,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11271149c);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c082bc0();
    _objc_release(uVar3);
    func_0x00010c2b8c20(*(undefined8 *)(param_1 + lVar4),param_2,(uint)uVar1 ^ 1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d1c124; end: 104d1c1a3; -[SCRegistrationBirthdayBusinessLogic _canConitnue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_104d1c124(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  
  bVar3 = 0;
  if (*(long *)(param_1 + _DAT_1127114c8) != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11271149c);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c082bc0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      bVar3 = 0;
    }
    else {
      bVar3 = *(byte *)(param_1 + _DAT_1127114b8);
    }
  }
  return bVar3 & 1;
}



/* Entry: 104d1c1a4; end: 104d1c20f; -[SCRegistrationBirthdayBusinessLogic _userConsentDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d1c1a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + _DAT_1127114b8) = param_3;
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127114c4);
  lVar1 = param_1;
  func_0x00010bdd99a0();
  func_0x00010c2a9f60(uVar2,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d1c210; end: 104d1c313; -[SCRegistrationBirthdayBusinessLogic _validate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104d1c210(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_1127114c4;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf21f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271149c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1a5c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c081e40(uVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((int)uVar4 != 0) {
    func_0x00010c2b8fc0(*(undefined8 *)(param_1 + lVar5),param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar5 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))();
  _objc_release(lVar5);
  func_0x00010c29d560(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c23ab60();
  _objc_release(param_1);
  _objc_release(uVar1);
  return (uint)lVar5 ^ 1;
}



/* Entry: 104d1c314; end: 104d1c3c3; -[SCRegistrationBirthdayBusinessLogic _clearScheduledIncompleteRegNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d1c314(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127114ac);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104d1c3c4; end: 104d1c49b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d1c3c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127114b0);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_40 = &PTR____CFConstantStringClassReference_110dafd18;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e1a0(uVar1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_11084ac68);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 104d1c49c; end: 104d1c49f;  */

void FUN_104d1c49c(void)

{
  return;
}



/* Entry: 104d1c4a0; end: 104d1c4f3; -[SCRegistrationBirthdayBusinessLogic _birthdayDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d1c4a0(long param_1,undefined8 param_2)

{
  func_0x00010bed23c0();
  func_0x00010c0b2ac0(*(undefined8 *)(param_1 + _DAT_112711498),param_2,7);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d1c4f4; end: 104d1c59f; -[SCRegistrationBirthdayBusinessLogic _getAgeFrom:] */

undefined * FUN_104d1c4f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  _objc_retain(param_3);
  func_0x00010bf5e300(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  puVar3 = puVar1;
  func_0x00010bf44660(puVar1,param_2,4,param_3,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010c2bedc0(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 104d1c5a0; end: 104d1c5f3; -[SCRegistrationBirthdayBusinessLogic _registrationStatusChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d1c5a0(long param_1)

{
  func_0x00010c2b0d60(*(undefined8 *)(param_1 + _DAT_1127114c4));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d1c5f4; end: 104d1c6ef; -[SCRegistrationBirthdayBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d1c5f4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127114c0,0);
  _objc_storeStrong(param_1 + _DAT_1127114b4,0);
  _objc_storeStrong(param_1 + _DAT_1127114ac,0);
  _objc_storeStrong(param_1 + _DAT_1127114b0,0);
  _objc_storeStrong(param_1 + _DAT_1127114a8,0);
  _objc_storeStrong(param_1 + _DAT_1127114a4,0);
  _objc_storeStrong(param_1 + _DAT_1127114a0,0);
  _objc_storeStrong(param_1 + _DAT_11271149c,0);
  _objc_storeStrong(param_1 + _DAT_112711498,0);
  _objc_storeStrong(param_1 + _DAT_112711494,0);
  _objc_storeStrong(param_1 + _DAT_112711490,0);
  _objc_destroyWeak(param_1 + _DAT_11271148c);
  _objc_storeStrong(param_1 + _DAT_1127114c8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127114c4,0);
  return;
}



/* Entry: 104d1c6f0; end: 104d1c757; +[SCRegistrationBirthdayAction birthdayDidChangeWithBirthday:] */

void FUN_104d1c6f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af790;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d1c758; end: 104d1c7b3; +[SCRegistrationBirthdayAction changeUserConsentSelectionWithAllChecked:] */

void FUN_104d1c758(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af790;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  puVar2[0x18] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d1c7b4; end: 104d1c81f; +[SCRegistrationBirthdayAction selectLinkWithUrl:] */

void FUN_104d1c7b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af790;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d1c820; end: 104d1c867; +[SCRegistrationBirthdayAction submit] */

void FUN_104d1c820(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af790;
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



/* Entry: 104d1c868; end: 104d1c8b3; +[SCRegistrationBirthdayAction tapBackButton] */

void FUN_104d1c868(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af790;
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



/* Entry: 104d1c8b4; end: 104d1c90f; +[SCRegistrationBirthdayAction toggled1TLCheckboxWithSelected:] */

void FUN_104d1c8b4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af790;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  puVar2[0x28] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d1c910; end: 104d1c95b; +[SCRegistrationBirthdayAction userAcknowledgedNotOldEnoughError] */

void FUN_104d1c910(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af790;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d1c95c; end: 104d1c97f; -[SCRegistrationBirthdayAction copyWithZone:] */

undefined8 FUN_104d1c95c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104d1c980; end: 104d1c9ff; -[SCRegistrationBirthdayAction hash] */

void FUN_104d1c980(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126e3e38;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d1ca00; end: 104d1ca43; -[SCRegistrationBirthdayAction internalInit] */

void FUN_104d1ca00(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e3e38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d1ca44; end: 104d1cb1b; -[SCRegistrationBirthdayAction isEqual:] */

long FUN_104d1ca44(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104d1caf4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104d1cb00;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
         (*(char *)(param_1 + 0x18) == *(char *)(param_3 + 0x18))) &&
        (*(char *)(param_1 + 0x28) == *(char *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_104d1cb00;
        }
        goto LAB_104d1caf4;
      }
    }
    lVar3 = 0;
  }
LAB_104d1cb00:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104d1cb1c; end: 104d1cca7; -[SCRegistrationBirthdayAction matchSubmit:tapBackButton:birthdayDidChange:userAcknowledgedNotOldEnoughError:changeUserConsentSelection:selectLink:toggled1TLCheckbox:] */

void FUN_104d1cb1c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 < 3) {
    if (lVar3 == 0) {
      if (param_3 == 0) goto LAB_104d1cc5c;
      pcVar4 = *(code **)(param_3 + 0x10);
      lVar3 = param_3;
    }
    else {
      if (lVar3 != 1) {
        if ((lVar3 != 2) || (param_5 == 0)) goto LAB_104d1cc5c;
        uVar2 = *(undefined8 *)(param_1 + 0x10);
        pcVar4 = *(code **)(param_5 + 0x10);
        lVar3 = param_5;
        goto LAB_104d1cc44;
      }
      if (param_4 == 0) goto LAB_104d1cc5c;
      pcVar4 = *(code **)(param_4 + 0x10);
      lVar3 = param_4;
    }
LAB_104d1cc58:
    (*pcVar4)(lVar3);
  }
  else {
    if (lVar3 < 5) {
      if (lVar3 == 3) {
        if (param_6 == 0) goto LAB_104d1cc5c;
        pcVar4 = *(code **)(param_6 + 0x10);
        lVar3 = param_6;
        goto LAB_104d1cc58;
      }
      if ((lVar3 != 4) || (param_7 == 0)) goto LAB_104d1cc5c;
      uVar1 = *(undefined1 *)(param_1 + 0x18);
      pcVar4 = *(code **)(param_7 + 0x10);
      lVar3 = param_7;
    }
    else {
      if (lVar3 == 5) {
        if (param_8 == 0) goto LAB_104d1cc5c;
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        pcVar4 = *(code **)(param_8 + 0x10);
        lVar3 = param_8;
LAB_104d1cc44:
        (*pcVar4)(lVar3,uVar2);
        goto LAB_104d1cc5c;
      }
      if ((lVar3 != 6) || (param_9 == 0)) goto LAB_104d1cc5c;
      uVar1 = *(undefined1 *)(param_1 + 0x28);
      pcVar4 = *(code **)(param_9 + 0x10);
      lVar3 = param_9;
    }
    (*pcVar4)(lVar3,uVar1);
  }
LAB_104d1cc5c:
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



/* Entry: 104d1cca8; end: 104d1ccd7; -[SCRegistrationBirthdayAction .cxx_destruct] */

void FUN_104d1cca8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104d1ccd8; end: 104d1ce4f; -[SCRegistrationBirthdayViewModel initWithBirthday:minDate:maxDate:latestValidBirthdayDate:canContinue:shouldUpdateText:showUserUnderageError:isLoading:formattedBirthday:shouldShowErrorMessage:] */

undefined8 *
FUN_104d1ccd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e3e40;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    *(undefined1 *)((long)puVar1 + 10) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 0xb) = param_9._1_1_;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xc) = param_12;
  }
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104d1ce50; end: 104d1ce73; -[SCRegistrationBirthdayViewModel copyWithZone:] */

undefined8 FUN_104d1ce50(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104d1ce74; end: 104d1cf3b; -[SCRegistrationBirthdayViewModel hash] */

undefined8 * FUN_104d1ce74(long param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  ulong uVar11;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar2;
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
  uStack_58 = (ulong)uVar1 & 0xff;
  uStack_50 = uVar10 >> 0x10 & 0xff;
  uStack_48 = (ulong)CONCAT24(uVar8,(uint)(ushort)(uVar10 >> 0x20)) & 0xffffffff;
  uStack_40 = (ulong)uVar8;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar3;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 0xc);
  puVar4 = &uStack_78;
  uStack_38 = uVar2;
  func_0x000100505190(puVar4,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_104d1d054:
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_104d1d060;
    puVar7 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((((*(char *)(puVar4 + 1) == *(char *)(param_3 + 1) &&
          (*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9))) &&
         (*(char *)((long)puVar4 + 10) == *(char *)((long)param_3 + 10))) &&
        ((*(char *)((long)puVar4 + 0xb) == *(char *)((long)param_3 + 0xb) &&
         (*(char *)((long)puVar4 + 0xc) == *(char *)((long)param_3 + 0xc))))))) {
      lVar6 = puVar4[2];
      if ((lVar6 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = puVar4[3];
        if ((lVar6 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = puVar4[4];
          if ((lVar6 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            lVar6 = puVar4[5];
            if ((lVar6 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
              puVar7 = (undefined8 *)puVar4[6];
              if (puVar7 != (undefined8 *)param_3[6]) {
                func_0x00010c071ae0();
                goto LAB_104d1d060;
              }
              goto LAB_104d1d054;
            }
          }
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_104d1d060:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 104d1cf3c; end: 104d1d07b; -[SCRegistrationBirthdayViewModel isEqual:] */

long FUN_104d1cf3c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104d1d054:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104d1d060;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
        ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
         (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_104d1d060;
              }
              goto LAB_104d1d054;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_104d1d060:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104d1d07c; end: 104d1d083; -[SCRegistrationBirthdayViewModel birthday] */

undefined8 FUN_104d1d07c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104d1d084; end: 104d1d08b; -[SCRegistrationBirthdayViewModel minDate] */

undefined8 FUN_104d1d084(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104d1d08c; end: 104d1d093; -[SCRegistrationBirthdayViewModel maxDate] */

undefined8 FUN_104d1d08c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104d1d094; end: 104d1d09b; -[SCRegistrationBirthdayViewModel latestValidBirthdayDate] */

undefined8 FUN_104d1d094(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104d1d09c; end: 104d1d0a3; -[SCRegistrationBirthdayViewModel canContinue] */

undefined1 FUN_104d1d09c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104d1d0a4; end: 104d1d0ab; -[SCRegistrationBirthdayViewModel shouldUpdateText] */

undefined1 FUN_104d1d0a4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 104d1d0ac; end: 104d1d0b3; -[SCRegistrationBirthdayViewModel showUserUnderageError] */

undefined1 FUN_104d1d0ac(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 104d1d0b4; end: 104d1d0bb; -[SCRegistrationBirthdayViewModel isLoading] */

undefined1 FUN_104d1d0b4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 104d1d0bc; end: 104d1d0c3; -[SCRegistrationBirthdayViewModel formattedBirthday] */

undefined8 FUN_104d1d0bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104d1d0c4; end: 104d1d0cb; -[SCRegistrationBirthdayViewModel shouldShowErrorMessage] */

undefined1 FUN_104d1d0c4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 104d1d0cc; end: 104d1d11f; -[SCRegistrationBirthdayViewModel .cxx_destruct] */

void FUN_104d1d0cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104d1d120; end: 104d1d13b; +[SCRegistrationBirthdayViewModelBuilder registrationBirthdayViewModel] */

void FUN_104d1d120(void)

{
  _objc_alloc_init(PTR_PTR_1126af7a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d1d13c; end: 104d1d3b7; +[SCRegistrationBirthdayViewModelBuilder registrationBirthdayViewModelFromExistingRegistrationBirthdayViewModel:] */

void FUN_104d1d13c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  
  puVar1 = PTR_PTR_1126af7a0;
  _objc_retain(param_3);
  func_0x00010c1279c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf1a5c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2a9320(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0cd5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b3f80(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0c1fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2b3640(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c08b300(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2b24c0(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bf2c700(param_3);
  puVar11 = puVar9;
  func_0x00010c2a9f60(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c2350e0(param_3);
  puVar12 = puVar11;
  func_0x00010c2b8cc0(puVar11,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c23ab60(param_3);
  puVar13 = puVar12;
  func_0x00010c2b8fc0(puVar12,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c076be0(param_3);
  puVar14 = puVar13;
  func_0x00010c2b0d60(puVar13,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bfb5fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c2ae4c0(puVar14,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010c2336e0(param_3);
  _objc_release(param_3);
  puVar17 = puVar15;
  func_0x00010c2b8c20(puVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  _objc_release(uVar10);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 104d1d3b8; end: 104d1d413; -[SCRegistrationBirthdayViewModelBuilder build] */

void FUN_104d1d3b8(void)

{
  _objc_alloc(PTR_PTR_1126af7a8);
  func_0x00010bff7840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d1d414; end: 104d1d44b; -[SCRegistrationBirthdayViewModelBuilder withBirthday:] */

long FUN_104d1d414(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104d1d44c; end: 104d1d483; -[SCRegistrationBirthdayViewModelBuilder withMinDate:] */

long FUN_104d1d44c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104d1d484; end: 104d1d4bb; -[SCRegistrationBirthdayViewModelBuilder withMaxDate:] */

long FUN_104d1d484(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104d1d4bc; end: 104d1d4f3; -[SCRegistrationBirthdayViewModelBuilder withLatestValidBirthdayDate:] */

long FUN_104d1d4bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104d1d4f4; end: 104d1d4fb; -[SCRegistrationBirthdayViewModelBuilder withCanContinue:] */

void FUN_104d1d4f4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 104d1d4fc; end: 104d1d503; -[SCRegistrationBirthdayViewModelBuilder withShouldUpdateText:] */

void FUN_104d1d4fc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x29) = param_3;
  return;
}



/* Entry: 104d1d504; end: 104d1d50b; -[SCRegistrationBirthdayViewModelBuilder withShowUserUnderageError:] */

void FUN_104d1d504(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x2a) = param_3;
  return;
}



/* Entry: 104d1d50c; end: 104d1d513; -[SCRegistrationBirthdayViewModelBuilder withIsLoading:] */

void FUN_104d1d50c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x2b) = param_3;
  return;
}



/* Entry: 104d1d514; end: 104d1d54b; -[SCRegistrationBirthdayViewModelBuilder withFormattedBirthday:] */

long FUN_104d1d514(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104d1d54c; end: 104d1d553; -[SCRegistrationBirthdayViewModelBuilder withShouldShowErrorMessage:] */

void FUN_104d1d54c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 104d1d554; end: 104d1d5a7; -[SCRegistrationBirthdayViewModelBuilder .cxx_destruct] */

void FUN_104d1d554(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d1d5a8; end: 104d1d61b; -[SCGrapheneDeclaredAgeRangeMetric2 init] */

undefined1 * FUN_104d1d5a8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3e48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104d1d61c; end: 104d1d693;  */

void FUN_104d1d61c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11084ac88,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104d1d694; end: 104d1d8c3;  */

char * FUN_104d1d694(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char **ppcVar2;
  long lVar3;
  long *plVar4;
  char *pcStack_d0;
  undefined *puStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11084acd8,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar3 = 0;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  ppcVar2 = &pcStack_d0;
  pcStack_a8 = FUN_104d1d8c4;
  puStack_c8 = PTR_PTR_1126e3e50;
  pcStack_d0 = pcVar1;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&pcStack_d0,PTR_s_init_1125d9248);
  if (ppcVar2 != (char **)0x0) {
    pcVar1 = (char *)ppcVar2;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar2 + 8) = pcVar1;
  }
  return (char *)ppcVar2;
}



/* Entry: 104d1d8c4; end: 104d1d937; -[SCGrapheneDeclaredAgeVerificationMetric2 init] */

undefined1 * FUN_104d1d8c4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3e50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104d1d938; end: 104d1dbf7;  */

/* WARNING: Removing unreachable block (ram,0x000104d1dbc0) */

undefined8 *****
FUN_104d1d938(long param_1,undefined8 *****param_2,undefined8 ****param_3,char *param_4,
             char *param_5)

{
  char *pcVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  char *pcVar4;
  undefined8 *****pppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  long lVar8;
  undefined8 ****ppppuVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 ***unaff_x24;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined8 ****ppppuStack_1a0;
  undefined *puStack_198;
  undefined8 *puStack_190;
  undefined8 ****ppppuStack_188;
  undefined8 ***pppuStack_180;
  undefined8 ****ppppuStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 **ppuStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 **ppuStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined8 ****ppppuStack_f0;
  char *pcStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 ****ppppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  ppppuVar7 = (undefined8 ****)&ppuStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar5 = param_2;
  ppppuVar6 = param_3;
  pcVar1 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *****)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 ****)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = (char *)param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    ppuStack_c0 = (undefined8 ***)0x0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&ppuStack_c0,auStack_a0,&lStack_58,3);
    pppppuVar5 = (undefined8 *****)&UNK_11084ad48;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11084ad48,&ppuStack_c0,param_5);
    puStack_a8 = (undefined1 *)&ppuStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar8 = 0;
    ppppuVar6 = ppppuVar7;
    pcVar1 = param_5;
    do {
      if ((&cStack_59)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
      unaff_x24 = &ppuStack_c0;
    } while (lVar8 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pppppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puStack_f8 = auStack_a0;
  do {
    unaff_x24 = (undefined8 ***)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (undefined8 ***)puStack_f8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pppppuVar3 = pppppuVar2;
  __Unwind_Resume();
  pcStack_c8 = FUN_104d1dbf8;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar7 = ppppuVar6;
  puStack_100 = (undefined1 *)unaff_x24;
  ppppuStack_f0 = pppppuVar2;
  pcStack_e8 = param_4;
  pppuStack_e0 = param_3;
  ppppuStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pppppuVar5);
  _objc_retain(ppppuVar6);
  puVar10 = (undefined8 *)0x0;
  if (pppppuVar3 != (undefined8 *****)0x0) {
    ppppuVar9 = pppppuVar3[1];
    _objc_retain(pppppuVar5);
    if (pppppuVar5 == (undefined8 *****)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = (char *)pppppuVar5;
      _objc_retainAutorelease(pppppuVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar5);
    func_0x00010002b838(auStack_138,pcVar4);
    _objc_retain(ppppuVar6);
    if (ppppuVar6 == (undefined8 ****)0x0) {
      pcVar4 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar6);
      pcVar4 = (char *)ppppuVar6;
      func_0x00010bdc3520(ppppuVar6);
    }
    _objc_release(ppppuVar6);
    func_0x00010002b838(auStack_120,pcVar4);
    ppuStack_158 = (undefined8 ***)0x0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x00010007e1e8(&ppuStack_158,auStack_138,&lStack_108,2);
    ppppuVar7 = (undefined8 ****)&ppuStack_158;
    (*(code *)(*ppppuVar9)[3])(ppppuVar9,&UNK_11084ad98,ppppuVar7,pcVar1);
    ppuStack_140 = &ppuStack_158;
    func_0x00010007e5dc(&ppuStack_140);
    lVar8 = 0;
    puVar10 = auStack_138;
    do {
      if ((&cStack_109)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  _objc_release(ppppuVar6);
  pppppuVar2 = pppppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(ppppuVar6);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    _objc_release(ppppuVar6);
    _objc_release(pppppuVar5);
    pppppuVar3 = pppppuVar2;
    __Unwind_Resume();
    pcStack_168 = FUN_104d1de28;
    puStack_190 = puVar10;
    ppppuStack_188 = pppppuVar2;
    pppuStack_180 = ppppuVar6;
    ppppuStack_178 = pppppuVar5;
    ppuStack_170 = &puStack_d0;
    _objc_retain(ppppuVar7);
    puStack_198 = PTR_PTR_1126e3e58;
    pppppuVar5 = &ppppuStack_1a0;
    ppppuStack_1a0 = pppppuVar3;
    _objc_msgSendSuper2(pppppuVar5,PTR_s_init_1125d9248);
    if (pppppuVar5 != (undefined8 *****)0x0) {
      _objc_retain(ppppuVar7);
      ppppuVar6 = pppppuVar5[2];
      pppppuVar5[2] = ppppuVar7;
      _objc_release(ppppuVar6);
      _objc_initWeak(auStack_1a8,pppppuVar5);
      ppppuVar6 = (undefined8 ****)PTR_PTR_1126ae720;
      _objc_copyWeak(auStack_1b0,auStack_1a8);
      func_0x00010bf11fe0();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar9 = pppppuVar5[1];
      pppppuVar5[1] = ppppuVar6;
      _objc_release(ppppuVar9);
      _objc_destroyWeak(auStack_1b0);
      _objc_destroyWeak(auStack_1a8);
    }
    _objc_release(ppppuVar7);
    return pppppuVar5;
  }
  return pppppuVar2;
}



/* Entry: 104d1dbf8; end: 104d1de27;  */

undefined8 ****
FUN_104d1dbf8(long param_1,undefined8 ****param_2,undefined8 ***param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined8 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 ***pppuStack_c8;
  undefined8 **ppuStack_c0;
  undefined8 ***pppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar5 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar9 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 ****)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 ***)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = (char *)param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    puStack_98 = (undefined8 **)0x0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&puStack_98,auStack_78,&lStack_48,2);
    pppuVar5 = (undefined8 ***)&puStack_98;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11084ad98,pppuVar5,param_4);
    pcStack_80 = (char *)&puStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar7 = 0;
    puVar9 = auStack_78;
    do {
      if ((&cStack_49)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  _objc_release(param_3);
  ppppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  ppppuVar3 = ppppuVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_104d1de28;
  puStack_d0 = puVar9;
  pppuStack_c8 = ppppuVar2;
  ppuStack_c0 = param_3;
  pppuStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pppuVar5);
  puStack_d8 = PTR_PTR_1126e3e58;
  ppppuVar2 = &pppuStack_e0;
  pppuStack_e0 = ppppuVar3;
  _objc_msgSendSuper2(ppppuVar2,PTR_s_init_1125d9248);
  if (ppppuVar2 != (undefined8 ****)0x0) {
    _objc_retain(pppuVar5);
    pppuVar4 = ppppuVar2[2];
    ppppuVar2[2] = pppuVar5;
    _objc_release(pppuVar4);
    _objc_initWeak(auStack_e8,ppppuVar2);
    pppuVar4 = (undefined8 ***)PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_f0,auStack_e8);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar6 = ppppuVar2[1];
    ppppuVar2[1] = pppuVar4;
    _objc_release(pppuVar6);
    _objc_destroyWeak(auStack_f0);
    _objc_destroyWeak(auStack_e8);
  }
  _objc_release(pppuVar5);
  return ppppuVar2;
}



/* Entry: 104d1de28; end: 104d1df43; -[SCRegistrationClientUsernameSuggester initWithCircumstanceEngine:] */

undefined8 * FUN_104d1de28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e3e58;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_48,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104d1df44; end: 104d1df7b;  */

void FUN_104d1df44(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be634a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104d1df7c; end: 104d1df83; -[SCRegistrationClientUsernameSuggester suggestedUsername] */

void FUN_104d1df7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 104d1df84; end: 104d1dfcb; -[SCRegistrationClientUsernameSuggester _newSuggestedUsername] */

undefined8 FUN_104d1df84(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_104d1f0e8(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_104d1f33c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 104d1dfcc; end: 104d1dffb; -[SCRegistrationClientUsernameSuggester .cxx_destruct] */

void FUN_104d1dfcc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d1dffc; end: 104d1e09f; -[SCRegistrationUsernameAvailabilityCheckerImpl initWithUsernameSuggester:usernameSuggestionLogger:] */

undefined1 *
FUN_104d1dffc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e3e60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d1e0a0; end: 104d1e227; -[SCRegistrationUsernameAvailabilityCheckerImpl checkAvailabilityWithRequestedUsername:completion:] */

void FUN_104d1e0a0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  lVar1 = param_5;
  _objc_retain();
  if (param_5 != 0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0adaa0();
    _objc_release(uVar2);
    _CACurrentMediaTime();
    _objc_initWeak(auStack_58,param_2);
    uVar2 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(lVar1);
    uStack_60 = param_1;
    _objc_retain(param_5);
    func_0x00010c261de0(uVar2);
    _objc_release(uVar2);
    _objc_release(param_5);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
    _objc_release(lVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104d1e228; end: 104d1e27f;  */

void FUN_104d1e228(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdde540(*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d1e280; end: 104d1e547; -[SCRegistrationUsernameAvailabilityCheckerImpl _checkUsernameCompletedWithResponse:requestId:submitRequestTime:completion:] */

void FUN_104d1e280(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != 0) {
    _CACurrentMediaTime();
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_104d1e548;
    uStack_80 = 0x104d1e558;
    uStack_78 = 0;
    puStack_b8 = &uStack_c0;
    uStack_c0 = 0;
    uStack_b0 = 0x2020000000;
    uStack_a8 = 0;
    puStack_e8 = &uStack_f0;
    uStack_f0 = 0;
    uStack_e0 = 0x3032000000;
    pcStack_d8 = FUN_104d1e548;
    uStack_d0 = 0x104d1e558;
    uStack_c8 = 0;
    uVar1 = param_3;
    func_0x00010c13ca20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c0a80();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcfaa0(param_3);
    func_0x00010c119500(param_3);
    func_0x00010c0adac0(uVar1);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ae700();
    _objc_release(uVar1);
    (**(code **)(param_5 + 0x10))(param_5,puStack_98[5]);
    __Block_object_dispose(&uStack_f0,8);
    _objc_release(uStack_c8);
    __Block_object_dispose(&uStack_c0,8);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(uStack_78);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d1e548; end: 104d1e55f;  */

void FUN_104d1e548(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104d1e560; end: 104d1e623;  */

void FUN_104d1e560(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af7b0;
  func_0x00010bf125a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104d1e624; end: 104d1e6d3;  */

void FUN_104d1e624(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_2);
  uVar1 = param_4;
  FUN_104d1f644(param_4,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af7b0;
  func_0x00010c27f400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = param_4;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d1e6d4; end: 104d1e763;  */

void FUN_104d1e6d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af7b0;
  func_0x00010c27f400(PTR_PTR_1126af7b0,param_2,0,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d1e764; end: 104d1e793; -[SCRegistrationUsernameAvailabilityCheckerImpl .cxx_destruct] */

void FUN_104d1e764(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d1e794; end: 104d1e893; -[SCRegistrationUsernameSuggestionFetcherImpl initWithUsernameSuggester:clientUsernameSuggester:usernameSuggestionLogger:transitionMomentLogger:] */

undefined1 *
FUN_104d1e794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e3e68;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x38) = 0;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d1e894; end: 104d1e9af; -[SCRegistrationUsernameSuggestionFetcherImpl usernameSuggestions] */

void FUN_104d1e894(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar5 = &uStack_40;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(param_1 + 0x38);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c262360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_40 = uVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    FUN_104d1f644();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar4);
  }
  else {
    puVar6 = *(undefined **)(param_1 + 0x40);
    _objc_retain(puVar6);
    puVar5 = (undefined8 *)param_3;
  }
  param_1 = param_1 + 0x38;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  _objc_retain(puVar5);
  _os_unfair_lock_lock(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 **)(param_1 + 0x40) = puVar5;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x38);
  return;
}



/* Entry: 104d1e9b0; end: 104d1e9ef; -[SCRegistrationUsernameSuggestionFetcherImpl _updateSuggestions:] */

void FUN_104d1e9b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x38);
  return;
}



/* Entry: 104d1e9f0; end: 104d1ebe3; -[SCRegistrationUsernameSuggestionFetcherImpl fetchUsernameSuggestionWithFirstName:lastName:] */

void FUN_104d1e9f0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = param_4;
  _objc_release(uVar1);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = param_5;
  _objc_release(uVar1);
  lVar2 = param_2;
  func_0x00010bee1700();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0adaa0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar1);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_58,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(lVar2);
  uStack_60 = param_1;
  func_0x00010c261da0(uVar1);
  _objc_release(uVar1);
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104d1ebe4; end: 104d1ec3f;  */

void FUN_104d1ebe4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bec8d40(*(undefined8 *)(param_1 + 0x40));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d1ec40; end: 104d1ef03; -[SCRegistrationUsernameSuggestionFetcherImpl _suggestUsernameCompletedWithResponse:firstName:lastName:requestId:submitRequestTime:] */

void FUN_104d1ec40(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _CACurrentMediaTime();
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_104d1ef04;
  uStack_a0 = 0x104d1ef14;
  puStack_98 = PTR____NSArray0__struct_11034ab48;
  uVar1 = param_3;
  func_0x00010c13ca20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0a80();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcfaa0(param_3);
  func_0x00010c119500(param_3);
  func_0x00010c0adac0(uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ae700();
  _objc_release(uVar1);
  uVar2 = param_1;
  func_0x00010be44980();
  if ((uVar2 & 1) != 0) {
    uVar1 = puStack_b8[5];
    FUN_104d1f644(uVar1,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee1700(param_1);
    _objc_release(uVar1);
    lVar3 = puStack_b8[5];
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b0900();
      _objc_release(uVar1);
    }
  }
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(puStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d1ef04; end: 104d1ef1f;  */

void FUN_104d1ef04(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104d1ef20; end: 104d1ef67;  */

void FUN_104d1ef20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d1ef68; end: 104d1ef6f;  */

void FUN_104d1ef68(void)

{
  return;
}



/* Entry: 104d1ef70; end: 104d1f07b; -[SCRegistrationUsernameSuggestionFetcherImpl _isTheLatestRequest:requestedLastName:] */

long FUN_104d1ef70(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 8);
  _objc_retain(lVar1);
  _objc_retain(param_3);
  if (lVar1 == param_3) {
    _objc_release(param_3);
    _objc_release(lVar1);
LAB_104d1effc:
    lVar1 = *(long *)(param_1 + 0x10);
    _objc_retain(lVar1);
    _objc_retain(param_4);
    if (lVar1 == param_4) {
      lVar2 = 1;
    }
    else if (param_4 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar1;
      func_0x00010c071ae0(lVar1,param_2,param_4);
    }
    _objc_release(param_4);
  }
  else {
    if (param_3 != 0) {
      lVar2 = lVar1;
      func_0x00010c071ae0(lVar1,param_2,param_3);
      _objc_release(param_3);
      _objc_release(lVar1);
      if ((int)lVar2 == 0) {
        lVar2 = 0;
        goto LAB_104d1f054;
      }
      goto LAB_104d1effc;
    }
    lVar2 = 0;
  }
  _objc_release(lVar1);
LAB_104d1f054:
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 104d1f07c; end: 104d1f0e7; -[SCRegistrationUsernameSuggestionFetcherImpl .cxx_destruct] */

void FUN_104d1f07c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 104d1f0e8; end: 104d1f33b;  */

void FUN_104d1f0e8(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  lVar1 = lRam00000001136b8a98;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104d1f6f8;
  puStack_60 = &UNK_110842e18;
  uStack_58 = param_1;
  _objc_retain(param_1);
  uVar8 = param_1;
  if (lVar1 != -1) {
    func_0x00010002a2fc(0x1136b8a98,&puStack_78);
    uVar8 = uStack_58;
  }
  puVar2 = puRam00000001136b8aa0;
  _objc_retain(puRam00000001136b8aa0);
  _objc_release(uVar8);
  _objc_release(param_1);
  puVar3 = puVar2;
  func_0x00010bf3d680();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010beff920();
  _objc_release(puVar3);
  if ((uint)puVar4 < 6) {
    if ((uint)puVar4 == 2) {
      puVar3 = puVar2;
      func_0x00010bf3d680(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c108560();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c108480();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = puVar2;
      func_0x00010bf3d680();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c108560();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c11f140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f120();
      puVar7 = PTR_PTR_1126af7f0;
      _objc_alloc(PTR_PTR_1126af7f0);
      func_0x00010c0df1a0(puVar6);
      func_0x00010c0305a0(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126af7b8;
      func_0x00010c108580(PTR_PTR_1126af7b8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar5);
    }
    else {
      puVar3 = PTR_PTR_1126af7b8;
      func_0x00010c0db140(PTR_PTR_1126af7b8);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d1f33c; end: 104d1f42f;  */

void FUN_104d1f33c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_104d1f430;
  uStack_30 = 0x104d1f440;
  uStack_28 = 0;
  func_0x00010c0bf080(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d1f430; end: 104d1f447;  */

void FUN_104d1f430(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104d1f448; end: 104d1f637;  */

void FUN_104d1f448(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_3);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104d1f88c;
  puStack_70 = &UNK_110842e18;
  _objc_retain(param_3);
  lStack_68 = param_3;
  if (lRam00000001136b8aa8 != -1) {
    func_0x00010002a2fc(0x1136b8aa8,&puStack_88);
  }
  lVar3 = param_3;
  func_0x00010c0df1a0();
  uVar2 = uRam00000001136b8ab0;
  func_0x00010c08fa60(uRam00000001136b8ab0);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_opt_new();
  if (0 < lVar3) {
    do {
      _arc4random_uniform(uVar2);
      func_0x00010bf35920();
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d920(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf070e0(puVar4);
      _objc_release(puVar1);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  puVar1 = puVar4;
  func_0x00010bf51e00();
  _objc_release(puVar4);
  _objc_release(lStack_68);
  _objc_release(param_3);
  puVar4 = puVar1;
  func_0x00010c08fa60();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar4;
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104d1f638; end: 104d1f643;  */

void FUN_104d1f638(void)

{
  return;
}



/* Entry: 104d1f644; end: 104d1f69b;  */

void FUN_104d1f644(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_104d1f69c;
  puStack_20 = &UNK_11084b0a8;
  uStack_18 = param_2;
  func_0x00010c0b8600(param_1,param_2,&puStack_38);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d1f69c; end: 104d1f6f7;  */

void FUN_104d1f69c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af7c0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c05f860();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d1f6f8; end: 104d1f88b;  */

void FUN_104d1f6f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126af7d8;
  _objc_opt_new(PTR_PTR_1126af7d8);
  func_0x00010c1cfea0();
  func_0x00010c1e6f00(puVar1,param_2,2);
  puVar2 = PTR_PTR_1126af7e0;
  _objc_opt_new(PTR_PTR_1126af7e0);
  func_0x00010c1e0740();
  func_0x00010c1e6f20(puVar2,param_2,puVar1);
  puVar3 = PTR_PTR_1126af7e8;
  _objc_opt_new(PTR_PTR_1126af7e8);
  func_0x00010c1e07a0();
  puVar4 = PTR_PTR_1126af7c8;
  _objc_opt_new(PTR_PTR_1126af7c8);
  func_0x00010c17d2e0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126af7d0;
  _objc_opt_new(PTR_PTR_1126af7d0);
  puVar2 = puVar4;
  func_0x00010bf63640(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar4);
  func_0x00010c1195e0(uVar6,param_2,&PTR____CFConstantStringClassReference_110dafe98,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126af7c8;
  _objc_alloc();
  func_0x00010c008360();
  _objc_retain(0);
  uVar6 = puRam00000001136b8aa0;
  puRam00000001136b8aa0 = puVar1;
  _objc_release(uVar6);
  _objc_release(0);
  _objc_release(uVar5);
  return;
}



/* Entry: 104d1f88c; end: 104d1f8cf;  */

void FUN_104d1f88c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c11f120();
  uVar1 = puRam00000001136b8ab0;
  if (lVar2 - 1U < 3) {
    puRam00000001136b8ab0 = (&PTR_PTR_11084b0c8)[lVar2 - 1U];
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 104d1f8d0; end: 104d1f943; -[SCRegistrationUsernameSuggestionLogger initWithRegistrationFeatureLogger:] */

undefined1 * FUN_104d1f8d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e3e70;
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



/* Entry: 104d1f944; end: 104d1f9bb; -[SCRegistrationUsernameSuggestionLogger logResponseSuggestUsername:success:isAvailable:suggestions:] */

void FUN_104d1f944(long param_1)

{
  undefined8 in_x5;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(in_x5);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ae700();
  _objc_release(in_x5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


