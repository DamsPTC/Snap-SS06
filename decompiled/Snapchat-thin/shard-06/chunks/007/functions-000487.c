/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104d4d9f4; end: 104d4db2f;  */

void FUN_104d4d9f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x28);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_104d4db30;
  puStack_80 = &UNK_11084cbf0;
  _objc_copyWeak(auStack_58,param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uStack_78 = uVar2;
  _objc_retain(param_3);
  uStack_70 = param_3;
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = param_4;
  _objc_retain(uVar2);
  uStack_60 = uVar2;
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_98);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104d4db30; end: 104d4db67;  */

void FUN_104d4db30(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be73940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d4db68; end: 104d4dc27; -[SCUserVerificationPhoneEntryBusinessLogic phoneEntryDidUpdatePhoneNumber:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4db68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  func_0x00010be54d20(param_1,param_2,param_3);
  puVar1 = PTR_PTR_1126af990;
  _objc_alloc();
  lVar5 = (long)_DAT_112711ca4;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c0fb300(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bf10980(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035aa0(puVar1,param_2,param_3,0,uVar2,uVar3);
  _objc_release(param_3);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d4dc28; end: 104d4dc37; -[SCUserVerificationPhoneEntryBusinessLogic phoneEntryDidSelectPhoneNumber:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4dc28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112711cac),PTR_s_submitPhone_112675718);
  return;
}



/* Entry: 104d4dc38; end: 104d4dc47; -[SCUserVerificationPhoneEntryBusinessLogic phoneEntrySuggestionPromptDidSelectWithSuggestionType:accept:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4dc38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b1530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112711cb4),
             PTR_s_logSuggestedPhoneNumberDialogWit_112609f58);
  return;
}



/* Entry: 104d4dc48; end: 104d4dccf; -[SCUserVerificationPhoneEntryBusinessLogic phoneEntryDidSelectRerouteToLogIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4dc48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112711ca8;
  _objc_retain(param_3);
  param_1 = param_1 + lVar2;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR_PTR_1126af990;
  _objc_alloc(PTR_PTR_1126af990);
  func_0x00010c035aa0();
  _objc_release(param_3);
  func_0x00010c0fae00(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d4dcd0; end: 104d4dd27; -[SCUserVerificationPhoneEntryBusinessLogic phoneEntryDidSelectCountryPicker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4dcd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112711ca8;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0fae40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d4dd28; end: 104d4dd5b; -[SCUserVerificationPhoneEntryBusinessLogic phoneEntryDidEndCountryPicker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4dd28(long param_1)

{
  param_1 = param_1 + _DAT_112711ca8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0fad60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d4dd5c; end: 104d4decf; -[SCUserVerificationPhoneEntryBusinessLogic _logInitialPhoneInputIfNeededWithNewPhoneNumber:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4dd5c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_112711cb8;
  if ((*(byte *)(param_1 + lVar6) & 1) == 0) {
    uVar4 = param_3;
    func_0x00010c0cf3c0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_112711ca4;
    uVar1 = *(ulong *)(param_1 + lVar7);
    func_0x00010c0faf60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0cf3c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar4);
    _objc_retain(uVar2);
    if (uVar4 == uVar2) {
      _objc_release(uVar2);
      _objc_release(uVar4);
      _objc_release(uVar2);
    }
    else {
      if (uVar2 == 0) {
        _objc_release();
        _objc_release(uVar1);
        _objc_release(uVar4);
      }
      else {
        uVar3 = uVar4;
        func_0x00010c071ae0(uVar4,param_2,uVar2);
        _objc_release(uVar2);
        _objc_release(uVar4);
        _objc_release(uVar2);
        _objc_release(uVar1);
        _objc_release(uVar4);
        if ((uVar3 & 1) != 0) goto LAB_104d4deb4;
      }
      *(undefined1 *)(param_1 + lVar6) = 1;
      uVar5 = *(undefined8 *)(param_1 + _DAT_112711cb4);
      uVar4 = *(ulong *)(param_1 + lVar7);
      func_0x00010c0faf60(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar4;
      func_0x00010c0fafc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a8a40(uVar5,param_2,uVar1);
    }
    _objc_release(uVar1);
    _objc_release(uVar4);
  }
LAB_104d4deb4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d4ded0; end: 104d4df3b; -[SCUserVerificationPhoneEntryBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4ded0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112711cb4,0);
  _objc_storeStrong(param_1 + _DAT_112711ca4,0);
  _objc_storeStrong(param_1 + _DAT_112711cb0,0);
  _objc_storeStrong(param_1 + _DAT_112711cac,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112711ca8);
  return;
}



/* Entry: 104d4df3c; end: 104d4e05b;  */

void FUN_104d4df3c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db0a58;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db0a58,
                      &PTR____CFConstantStringClassReference_110db0a78,0);
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



/* Entry: 104d4e05c; end: 104d4e0a7; +[SCUserVerificationEmailAction autofill] */

void FUN_104d4e05c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afc50;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d4e0a8; end: 104d4e0f3; +[SCUserVerificationEmailAction dismissRerouteDialog] */

void FUN_104d4e0a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afc50;
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



/* Entry: 104d4e0f4; end: 104d4e15b; +[SCUserVerificationEmailAction emailDidChangeWithEmail:] */

void FUN_104d4e0f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126afc50;
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



/* Entry: 104d4e15c; end: 104d4e1a7; +[SCUserVerificationEmailAction requestExit] */

void FUN_104d4e15c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afc50;
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



/* Entry: 104d4e1a8; end: 104d4e1f3; +[SCUserVerificationEmailAction rerouteToLoginForExistingEmail] */

void FUN_104d4e1a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afc50;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d4e1f4; end: 104d4e25f; +[SCUserVerificationEmailAction selectedEmailDomainWithEmailDomain:] */

void FUN_104d4e1f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126afc50;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d4e260; end: 104d4e2a7; +[SCUserVerificationEmailAction submit] */

void FUN_104d4e260(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afc50;
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



/* Entry: 104d4e2a8; end: 104d4e2f3; +[SCUserVerificationEmailAction switchToPhone] */

void FUN_104d4e2a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afc50;
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



/* Entry: 104d4e2f4; end: 104d4e33f; +[SCUserVerificationEmailAction useAnotherEmail] */

void FUN_104d4e2f4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afc50;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d4e340; end: 104d4e363; -[SCUserVerificationEmailAction copyWithZone:] */

undefined8 FUN_104d4e340(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104d4e364; end: 104d4e3db; -[SCUserVerificationEmailAction hash] */

void FUN_104d4e364(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126e4028;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d4e3dc; end: 104d4e41f; -[SCUserVerificationEmailAction internalInit] */

void FUN_104d4e3dc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e4028;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d4e420; end: 104d4e4d7; -[SCUserVerificationEmailAction isEqual:] */

long FUN_104d4e420(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104d4e4b0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104d4e4bc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_104d4e4bc;
        }
        goto LAB_104d4e4b0;
      }
    }
    lVar3 = 0;
  }
LAB_104d4e4bc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104d4e4d8; end: 104d4e6bb; -[SCUserVerificationEmailAction matchSubmit:requestExit:switchToPhone:emailDidChange:dismissRerouteDialog:useAnotherEmail:rerouteToLoginForExistingEmail:selectedEmailDomain:autofill:] */

void FUN_104d4e4d8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,long param_11)

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
  _objc_retain(param_10);
  _objc_retain(param_11);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 4) {
    if (lVar2 < 2) {
      if (lVar2 == 0) {
        if (param_3 == 0) goto LAB_104d4e65c;
        pcVar3 = *(code **)(param_3 + 0x10);
        lVar2 = param_3;
      }
      else {
        if ((lVar2 != 1) || (param_4 == 0)) goto LAB_104d4e65c;
        pcVar3 = *(code **)(param_4 + 0x10);
        lVar2 = param_4;
      }
    }
    else {
      if (lVar2 != 2) {
        if ((lVar2 != 3) || (param_6 == 0)) goto LAB_104d4e65c;
        uVar1 = *(undefined8 *)(param_1 + 0x10);
        pcVar3 = *(code **)(param_6 + 0x10);
        lVar2 = param_6;
LAB_104d4e658:
        (*pcVar3)(lVar2,uVar1);
        goto LAB_104d4e65c;
      }
      if (param_5 == 0) goto LAB_104d4e65c;
      pcVar3 = *(code **)(param_5 + 0x10);
      lVar2 = param_5;
    }
  }
  else if (lVar2 < 6) {
    if (lVar2 == 4) {
      if (param_7 == 0) goto LAB_104d4e65c;
      pcVar3 = *(code **)(param_7 + 0x10);
      lVar2 = param_7;
    }
    else {
      if ((lVar2 != 5) || (param_8 == 0)) goto LAB_104d4e65c;
      pcVar3 = *(code **)(param_8 + 0x10);
      lVar2 = param_8;
    }
  }
  else if (lVar2 == 6) {
    if (param_9 == 0) goto LAB_104d4e65c;
    pcVar3 = *(code **)(param_9 + 0x10);
    lVar2 = param_9;
  }
  else {
    if (lVar2 == 7) {
      if (param_10 == 0) goto LAB_104d4e65c;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      pcVar3 = *(code **)(param_10 + 0x10);
      lVar2 = param_10;
      goto LAB_104d4e658;
    }
    if ((lVar2 != 8) || (param_11 == 0)) goto LAB_104d4e65c;
    pcVar3 = *(code **)(param_11 + 0x10);
    lVar2 = param_11;
  }
  (*pcVar3)(lVar2);
LAB_104d4e65c:
  _objc_release(param_11);
  _objc_release(param_10);
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



/* Entry: 104d4e6bc; end: 104d4e6eb; -[SCUserVerificationEmailAction .cxx_destruct] */

void FUN_104d4e6bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104d4e6ec; end: 104d4e7df; -[SCUserVerificationEmailViewModel initWithEmail:errorMessage:canContinue:checking:shouldShowReroute:shouldMoveCursorToFront:isEmailValid:shouldShowExampleEmail:] */

undefined1 *
FUN_104d4e6ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined4 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR_PTR_1126e4030;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    *(undefined1 *)((long)puVar1 + 10) = param_7;
    *(undefined1 *)((long)puVar1 + 0xb) = param_8;
    *(undefined1 *)((long)puVar1 + 0xc) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 0xd) = param_9._1_1_;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d4e7e0; end: 104d4e803; -[SCUserVerificationEmailViewModel copyWithZone:] */

undefined8 FUN_104d4e7e0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104d4e804; end: 104d4e8af; -[SCUserVerificationEmailViewModel hash] */

undefined8 * FUN_104d4e804(long param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  ulong uVar11;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
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
  uStack_38 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_30 = (ulong)*(byte *)(param_1 + 0xd);
  puVar4 = &uStack_68;
  uStack_60 = uVar3;
  func_0x000100505190(puVar4,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_104d4e990:
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_104d4e99c;
    puVar7 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if (((((ulong)puVar5 & 1) != 0) &&
        ((((*(char *)(puVar4 + 1) == *(char *)(param_3 + 1) &&
           (*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9))) &&
          (*(char *)((long)puVar4 + 10) == *(char *)((long)param_3 + 10))) &&
         ((*(char *)((long)puVar4 + 0xb) == *(char *)((long)param_3 + 0xb) &&
          (*(char *)((long)puVar4 + 0xc) == *(char *)((long)param_3 + 0xc))))))) &&
       (*(char *)((long)puVar4 + 0xd) == *(char *)((long)param_3 + 0xd))) {
      lVar6 = puVar4[2];
      if ((lVar6 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        puVar7 = (undefined8 *)puVar4[3];
        if (puVar7 != (undefined8 *)param_3[3]) {
          func_0x00010c071ae0();
          goto LAB_104d4e99c;
        }
        goto LAB_104d4e990;
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_104d4e99c:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 104d4e8b0; end: 104d4e9b7; -[SCUserVerificationEmailViewModel isEqual:] */

long FUN_104d4e8b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104d4e990:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104d4e99c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
           (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
          (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
         ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
          (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))))))) &&
       (*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_104d4e99c;
        }
        goto LAB_104d4e990;
      }
    }
    lVar3 = 0;
  }
LAB_104d4e99c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104d4e9b8; end: 104d4e9bf; -[SCUserVerificationEmailViewModel email] */

undefined8 FUN_104d4e9b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104d4e9c0; end: 104d4e9c7; -[SCUserVerificationEmailViewModel errorMessage] */

undefined8 FUN_104d4e9c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104d4e9c8; end: 104d4e9cf; -[SCUserVerificationEmailViewModel canContinue] */

undefined1 FUN_104d4e9c8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104d4e9d0; end: 104d4e9d7; -[SCUserVerificationEmailViewModel checking] */

undefined1 FUN_104d4e9d0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 104d4e9d8; end: 104d4e9df; -[SCUserVerificationEmailViewModel shouldShowReroute] */

undefined1 FUN_104d4e9d8(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 104d4e9e0; end: 104d4e9e7; -[SCUserVerificationEmailViewModel shouldMoveCursorToFront] */

undefined1 FUN_104d4e9e0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 104d4e9e8; end: 104d4e9ef; -[SCUserVerificationEmailViewModel isEmailValid] */

undefined1 FUN_104d4e9e8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 104d4e9f0; end: 104d4e9f7; -[SCUserVerificationEmailViewModel shouldShowExampleEmail] */

undefined1 FUN_104d4e9f0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 104d4e9f8; end: 104d4ea27; -[SCUserVerificationEmailViewModel .cxx_destruct] */

void FUN_104d4e9f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104d4ea28; end: 104d4ea6f; +[SCUserVerificationPhoneEntryAction requestExit] */

void FUN_104d4ea28(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afc60;
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



/* Entry: 104d4ea70; end: 104d4ead7; +[SCUserVerificationPhoneEntryAction selectLinkWithUrl:] */

void FUN_104d4ea70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126afc60;
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



/* Entry: 104d4ead8; end: 104d4eb23; +[SCUserVerificationPhoneEntryAction skip] */

void FUN_104d4ead8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afc60;
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



/* Entry: 104d4eb24; end: 104d4eb6f; +[SCUserVerificationPhoneEntryAction switchToEmail] */

void FUN_104d4eb24(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afc60;
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



/* Entry: 104d4eb70; end: 104d4eb93; -[SCUserVerificationPhoneEntryAction copyWithZone:] */

undefined8 FUN_104d4eb70(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104d4eb94; end: 104d4ebf3; -[SCUserVerificationPhoneEntryAction hash] */

void FUN_104d4eb94(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126e4038;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d4ebf4; end: 104d4ec37; -[SCUserVerificationPhoneEntryAction internalInit] */

void FUN_104d4ebf4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e4038;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d4ec38; end: 104d4ecd7; -[SCUserVerificationPhoneEntryAction isEqual:] */

long FUN_104d4ec38(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104d4ecbc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_104d4ecbc;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_104d4ecbc;
    }
  }
  lVar3 = 1;
LAB_104d4ecbc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104d4ecd8; end: 104d4edbf; -[SCUserVerificationPhoneEntryAction matchRequestExit:skip:switchToEmail:selectLink:] */

void FUN_104d4ecd8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
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
      if (param_3 == 0) goto LAB_104d4ed90;
      pcVar2 = *(code **)(param_3 + 0x10);
      lVar1 = param_3;
    }
    else {
      if ((lVar1 != 1) || (param_4 == 0)) goto LAB_104d4ed90;
      pcVar2 = *(code **)(param_4 + 0x10);
      lVar1 = param_4;
    }
  }
  else {
    if (lVar1 != 2) {
      if ((lVar1 == 3) && (param_6 != 0)) {
        (**(code **)(param_6 + 0x10))(param_6,*(undefined8 *)(param_1 + 0x10));
      }
      goto LAB_104d4ed90;
    }
    if (param_5 == 0) goto LAB_104d4ed90;
    pcVar2 = *(code **)(param_5 + 0x10);
    lVar1 = param_5;
  }
  (*pcVar2)(lVar1);
LAB_104d4ed90:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d4edc0; end: 104d4edcb; -[SCUserVerificationPhoneEntryAction .cxx_destruct] */

void FUN_104d4edc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104d4edcc; end: 104d4eedf; -[SCBirthdayPageDeepLinkProcessingPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4edcc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126afc70;
  _objc_alloc(PTR_PTR_1126afc70);
  lVar6 = (long)_DAT_112711cf0;
  lVar2 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112711cf4;
  _objc_loadWeakRetained(lVar5);
  lVar6 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c02e5c0(puVar1,param_2,lVar4,lVar5,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_112711cf8;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d4eee0; end: 104d4ef2f; -[SCBirthdayPageDeepLinkProcessingPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d4eee0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112711cf4);
  _objc_destroyWeak(param_1 + _DAT_112711cf0);
  _objc_destroyWeak(param_1 + _DAT_112711cfc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112711cf8);
  return;
}



/* Entry: 104d4ef30; end: 104d4f00f; -[SCBirthdayPageDeepLinkProcessor initWithNavigationDelegate:birthdayPageServices:navigationServices:] */

undefined1 *
FUN_104d4ef30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e4040;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126afc78;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d4f010; end: 104d4f123; -[SCBirthdayPageDeepLinkProcessor handleOpenURL:sourceApplication:additionalInfo:delegate:] */

ulong FUN_104d4f010(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_retain(param_5);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  FUN_104d4f428(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a4b60(*(undefined8 *)(param_1 + 0x20),param_2,uVar2);
  uVar1 = param_1;
  func_0x00010be2be40(param_1,param_2,param_3,param_5,param_6);
  _objc_release(param_5);
  if ((uVar1 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110db0c18,
                        &PTR____CFConstantStringClassReference_110db0c38,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  func_0x00010be80c20(param_1,param_2,puVar3,param_6);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 104d4f124; end: 104d4f1c7; -[SCBirthdayPageDeepLinkProcessor _processDeeplinkDelegateEventsWithError:delegate:] */

void FUN_104d4f124(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_4);
  _objc_retain(param_3);
  FUN_104d4f428(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c0a4b20(*(undefined8 *)(param_1 + 0x20),param_2,uVar1);
  }
  else {
    func_0x00010c0a4b00();
  }
  func_0x00010c0a5fe0(param_4,param_2,param_3);
  func_0x00010c0a6880(param_4,param_2,param_3);
  func_0x00010bf94720(param_4,param_2,param_3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d4f1c8; end: 104d4f28b; -[SCBirthdayPageDeepLinkProcessor _handleMainPageForURL:additionalInfo:delegate:] */

bool FUN_104d4f1c8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0cf9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf1a780(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10b3e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(lVar3);
  return lVar3 != 0;
}



/* Entry: 104d4f28c; end: 104d4f29f; -[SCBirthdayPageDeepLinkProcessor identifier] */

void FUN_104d4f28c(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 104d4f2a0; end: 104d4f2a7; -[SCBirthdayPageDeepLinkProcessor priority] */

undefined8 FUN_104d4f2a0(void)

{
  return 1000;
}



/* Entry: 104d4f2a8; end: 104d4f2bb; -[SCBirthdayPageDeepLinkProcessor canProvideProcessorForFeature:] */

void FUN_104d4f2a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110db0bf8);
  return;
}



/* Entry: 104d4f2bc; end: 104d4f307; -[SCBirthdayPageDeepLinkProcessor isValidDeepLink:] */

undefined8 FUN_104d4f2bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfa1820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2d2a0(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 104d4f308; end: 104d4f30b; -[SCBirthdayPageDeepLinkProcessor makeDeepLinkProcessor] */

void FUN_104d4f308(void)

{
  return;
}



/* Entry: 104d4f30c; end: 104d4f3cb; -[SCBirthdayPageDeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_104d4f30c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  if (param_4 != (undefined *)0x0) {
    puVar1 = param_4;
  }
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0d3c80(puVar1);
  func_0x00010c1d0640();
  uVar2 = param_3;
  func_0x00010c2475e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1c40(param_1,param_2,param_3,uVar2,puVar1,param_5);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d4f3cc; end: 104d4f3d3; -[SCBirthdayPageDeepLinkProcessor shouldForceNavigation] */

undefined8 FUN_104d4f3cc(void)

{
  return 0;
}



/* Entry: 104d4f3d4; end: 104d4f3d7; -[SCBirthdayPageDeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_104d4f3d4(void)

{
  return;
}



/* Entry: 104d4f3d8; end: 104d4f427; -[SCBirthdayPageDeepLinkProcessor .cxx_destruct] */

void FUN_104d4f3d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104d4f428; end: 104d4f4ab;  */

void FUN_104d4f428(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x00010c0f5820(param_1,param_2,1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104d4f4ac; end: 104d4f50f; -[SCBirthdayPageDeeplinkLogger init] */

undefined1 * FUN_104d4f4ac(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e4048;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126afc80;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104d4f510; end: 104d4f51f; -[SCBirthdayPageDeeplinkLogger logDeeplinkReceivedWith:] */

undefined8 *****
FUN_104d4f510(long param_1,undefined8 param_2,undefined8 *****param_3,undefined8 ****param_4,
             undefined8 ****param_5,undefined8 ****param_6)

{
  long lVar1;
  char *pcVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined *puVar5;
  undefined8 *****pppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  undefined1 auStack_228 [8];
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [8];
  undefined8 ****ppppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 **ppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  ppppuVar7 = (undefined8 ****)0x1;
  ppppuVar11 = (undefined8 ****)&ppuStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar4 = param_3;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar10 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *****)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    ppuStack_80 = (undefined8 ***)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&ppuStack_80,auStack_60,&lStack_48,1);
    pppppuVar4 = (undefined8 *****)&UNK_11084cc58;
    param_4 = (undefined8 ****)0x1;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    puStack_68 = (undefined1 *)&ppuStack_80;
    func_0x00010007e5dc(&puStack_68);
    ppppuVar7 = ppppuVar11;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      ppppuVar7 = ppppuVar11;
    }
  }
  pppppuVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppuVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  ppppuVar8 = (undefined8 ****)&ppuStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar6 = pppppuVar4;
  ppppuVar11 = ppppuVar7;
  _objc_retain(pppppuVar4);
  if (pppppuVar3 != (undefined8 *****)0x0) {
    ppppuVar11 = pppppuVar3[1];
    _objc_retain(pppppuVar4);
    if (pppppuVar4 == (undefined8 *****)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)pppppuVar4;
      _objc_retainAutorelease(pppppuVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar4);
    func_0x00010002b838(auStack_e0,pcVar2);
    ppuStack_100 = (undefined8 ***)0x0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&ppuStack_100,auStack_e0,&lStack_c8,1);
    pppppuVar6 = (undefined8 *****)&UNK_11084cca8;
    (*(code *)(*ppppuVar11)[3])(ppppuVar11);
    puStack_e8 = (undefined1 *)&ppuStack_100;
    func_0x00010007e5dc(&puStack_e8);
    ppppuVar11 = ppppuVar8;
    param_4 = ppppuVar7;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      ppppuVar11 = ppppuVar8;
      param_4 = ppppuVar7;
    }
  }
  pppppuVar3 = pppppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pppppuVar3;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar4);
  _objc_release(pppppuVar4);
  __Unwind_Resume();
  ppppuVar8 = (undefined8 ****)&ppuStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar7 = ppppuVar11;
  _objc_retain(pppppuVar6);
  if (pppppuVar3 != (undefined8 *****)0x0) {
    ppppuVar7 = pppppuVar3[1];
    _objc_retain(pppppuVar6);
    if (pppppuVar6 == (undefined8 *****)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)pppppuVar6;
      _objc_retainAutorelease(pppppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar6);
    func_0x00010002b838(auStack_160,pcVar2);
    ppuStack_180 = (undefined8 ***)0x0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&ppuStack_180,auStack_160,&lStack_148,1);
    (*(code *)(*ppppuVar7)[3])(ppppuVar7,&UNK_11084ccf8,&ppuStack_180);
    puStack_168 = (undefined1 *)&ppuStack_180;
    func_0x00010007e5dc(&puStack_168);
    ppppuVar7 = ppppuVar8;
    param_4 = ppppuVar11;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      ppppuVar7 = ppppuVar8;
      param_4 = ppppuVar11;
    }
  }
  pppppuVar4 = pppppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pppppuVar4;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar6);
  _objc_release(pppppuVar6);
  __Unwind_Resume();
  _objc_retain(ppppuVar7);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_1e8 = PTR_PTR_1126e4058;
  pppppuVar3 = &ppppuStack_1f0;
  ppppuStack_1f0 = pppppuVar4;
  _objc_msgSendSuper2(pppppuVar3,PTR_s_init_1125d9248);
  if (pppppuVar3 != (undefined8 *****)0x0) {
    _objc_storeWeak(pppppuVar3 + 8,ppppuVar7);
    _objc_retain(param_5);
    ppppuVar11 = pppppuVar3[9];
    pppppuVar3[9] = param_5;
    _objc_release(ppppuVar11);
    _objc_retain(param_6);
    ppppuVar11 = pppppuVar3[10];
    pppppuVar3[10] = param_6;
    _objc_release(ppppuVar11);
    ppppuVar11 = (undefined8 ****)PTR_PTR_1126aeae0;
    func_0x00010c15f9e0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar8 = pppppuVar3[1];
    pppppuVar3[1] = ppppuVar11;
    _objc_release(ppppuVar8);
    ppppuVar11 = (undefined8 ****)PTR_PTR_1126ae820;
    _objc_opt_new();
    ppppuVar8 = pppppuVar3[3];
    pppppuVar3[3] = ppppuVar11;
    _objc_release(ppppuVar8);
    ppppuVar11 = pppppuVar3[9];
    func_0x00010bfd46e0();
    if (((ulong)ppppuVar11 & 1) == 0) {
      ppppuVar11 = pppppuVar3[3];
      puVar5 = PTR_PTR_1126ae750;
      func_0x00010c0ec800(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(ppppuVar11);
      _objc_release(puVar5);
    }
    ppppuVar11 = pppppuVar3[3];
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar8 = pppppuVar3[4];
    pppppuVar3[4] = ppppuVar11;
    _objc_release(ppppuVar8);
    _objc_initWeak(auStack_1f8,pppppuVar3);
    ppppuVar8 = pppppuVar3[9];
    func_0x00010bf12ee0();
    _objc_retainAutoreleasedReturnValue();
    puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_218 = 0xc2000000;
    pcStack_210 = FUN_104d4fcd4;
    puStack_208 = &UNK_110843540;
    _objc_copyWeak(auStack_200,auStack_1f8);
    ppppuVar11 = ppppuVar8;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar9 = pppppuVar3[7];
    pppppuVar3[7] = ppppuVar11;
    _objc_release(ppppuVar9);
    _objc_release(ppppuVar8);
    _objc_copyWeak(auStack_228,auStack_1f8);
    ppppuVar11 = param_4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar8 = pppppuVar3[6];
    pppppuVar3[6] = ppppuVar11;
    _objc_release(ppppuVar8);
    _objc_destroyWeak(auStack_228);
    _objc_destroyWeak(auStack_200);
    _objc_destroyWeak(auStack_1f8);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(ppppuVar7);
  return pppppuVar3;
}



/* Entry: 104d4f520; end: 104d4f52f; -[SCBirthdayPageDeeplinkLogger logDeeplinkProcessedWith:] */

undefined8 *****
FUN_104d4f520(long param_1,undefined8 param_2,undefined8 *****param_3,undefined8 ****param_4,
             undefined8 ****param_5,undefined8 ****param_6)

{
  long lVar1;
  char *pcVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined *puVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  long *plVar9;
  undefined8 ****ppppuVar10;
  undefined1 auStack_1a8 [8];
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined8 ****ppppuStack_170;
  undefined *puStack_168;
  undefined8 **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  ppppuVar6 = (undefined8 ****)0x1;
  ppppuVar10 = (undefined8 ****)&ppuStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar4 = param_3;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar9 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *****)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    ppuStack_80 = (undefined8 ***)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&ppuStack_80,auStack_60,&lStack_48,1);
    pppppuVar4 = (undefined8 *****)&UNK_11084cca8;
    param_4 = (undefined8 ****)0x1;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_68 = (undefined1 *)&ppuStack_80;
    func_0x00010007e5dc(&puStack_68);
    ppppuVar6 = ppppuVar10;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      ppppuVar6 = ppppuVar10;
    }
  }
  pppppuVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppuVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  ppppuVar7 = (undefined8 ****)&ppuStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar10 = ppppuVar6;
  _objc_retain(pppppuVar4);
  if (pppppuVar3 != (undefined8 *****)0x0) {
    ppppuVar10 = pppppuVar3[1];
    _objc_retain(pppppuVar4);
    if (pppppuVar4 == (undefined8 *****)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)pppppuVar4;
      _objc_retainAutorelease(pppppuVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar4);
    func_0x00010002b838(auStack_e0,pcVar2);
    ppuStack_100 = (undefined8 ***)0x0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&ppuStack_100,auStack_e0,&lStack_c8,1);
    (*(code *)(*ppppuVar10)[3])(ppppuVar10,&UNK_11084ccf8,&ppuStack_100);
    puStack_e8 = (undefined1 *)&ppuStack_100;
    func_0x00010007e5dc(&puStack_e8);
    ppppuVar10 = ppppuVar7;
    param_4 = ppppuVar6;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      ppppuVar10 = ppppuVar7;
      param_4 = ppppuVar6;
    }
  }
  pppppuVar3 = pppppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pppppuVar3;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar4);
  _objc_release(pppppuVar4);
  __Unwind_Resume();
  _objc_retain(ppppuVar10);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_168 = PTR_PTR_1126e4058;
  pppppuVar4 = &ppppuStack_170;
  ppppuStack_170 = pppppuVar3;
  _objc_msgSendSuper2(pppppuVar4,PTR_s_init_1125d9248);
  if (pppppuVar4 != (undefined8 *****)0x0) {
    _objc_storeWeak(pppppuVar4 + 8,ppppuVar10);
    _objc_retain(param_5);
    ppppuVar6 = pppppuVar4[9];
    pppppuVar4[9] = param_5;
    _objc_release(ppppuVar6);
    _objc_retain(param_6);
    ppppuVar6 = pppppuVar4[10];
    pppppuVar4[10] = param_6;
    _objc_release(ppppuVar6);
    ppppuVar6 = (undefined8 ****)PTR_PTR_1126aeae0;
    func_0x00010c15f9e0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar7 = pppppuVar4[1];
    pppppuVar4[1] = ppppuVar6;
    _objc_release(ppppuVar7);
    ppppuVar6 = (undefined8 ****)PTR_PTR_1126ae820;
    _objc_opt_new();
    ppppuVar7 = pppppuVar4[3];
    pppppuVar4[3] = ppppuVar6;
    _objc_release(ppppuVar7);
    ppppuVar6 = pppppuVar4[9];
    func_0x00010bfd46e0();
    if (((ulong)ppppuVar6 & 1) == 0) {
      ppppuVar6 = pppppuVar4[3];
      puVar5 = PTR_PTR_1126ae750;
      func_0x00010c0ec800(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(ppppuVar6);
      _objc_release(puVar5);
    }
    ppppuVar6 = pppppuVar4[3];
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar7 = pppppuVar4[4];
    pppppuVar4[4] = ppppuVar6;
    _objc_release(ppppuVar7);
    _objc_initWeak(auStack_178,pppppuVar4);
    ppppuVar7 = pppppuVar4[9];
    func_0x00010bf12ee0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_198 = 0xc2000000;
    pcStack_190 = FUN_104d4fcd4;
    puStack_188 = &UNK_110843540;
    _objc_copyWeak(auStack_180,auStack_178);
    ppppuVar6 = ppppuVar7;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar8 = pppppuVar4[7];
    pppppuVar4[7] = ppppuVar6;
    _objc_release(ppppuVar8);
    _objc_release(ppppuVar7);
    _objc_copyWeak(auStack_1a8,auStack_178);
    ppppuVar6 = param_4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar7 = pppppuVar4[6];
    pppppuVar4[6] = ppppuVar6;
    _objc_release(ppppuVar7);
    _objc_destroyWeak(auStack_1a8);
    _objc_destroyWeak(auStack_180);
    _objc_destroyWeak(auStack_178);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(ppppuVar10);
  return pppppuVar4;
}



/* Entry: 104d4f530; end: 104d4f53f; -[SCBirthdayPageDeeplinkLogger logDeeplinkFailedWith:] */

undefined8 ***
FUN_104d4f530(long param_1,undefined8 param_2,undefined8 ***param_3,undefined8 **param_4,
             undefined8 **param_5,undefined8 **param_6)

{
  long lVar1;
  char *pcVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  long *plVar11;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined8 **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  puVar7 = (undefined1 *)0x1;
  puVar8 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar11 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined8 ***)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    param_4 = (undefined8 **)0x1;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11084ccf8,&uStack_80);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar7 = (undefined1 *)puVar8;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = (undefined1 *)puVar8;
    }
  }
  pppuVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppuVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar7);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_e8 = PTR_PTR_1126e4058;
  pppuVar4 = &ppuStack_f0;
  ppuStack_f0 = pppuVar3;
  _objc_msgSendSuper2(pppuVar4,PTR_s_init_1125d9248);
  if (pppuVar4 != (undefined8 ***)0x0) {
    _objc_storeWeak(pppuVar4 + 8,puVar7);
    _objc_retain(param_5);
    ppuVar5 = pppuVar4[9];
    pppuVar4[9] = param_5;
    _objc_release(ppuVar5);
    _objc_retain(param_6);
    ppuVar5 = pppuVar4[10];
    pppuVar4[10] = param_6;
    _objc_release(ppuVar5);
    ppuVar5 = (undefined8 **)PTR_PTR_1126aeae0;
    func_0x00010c15f9e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = pppuVar4[1];
    pppuVar4[1] = ppuVar5;
    _objc_release(ppuVar9);
    ppuVar5 = (undefined8 **)PTR_PTR_1126ae820;
    _objc_opt_new();
    ppuVar9 = pppuVar4[3];
    pppuVar4[3] = ppuVar5;
    _objc_release(ppuVar9);
    ppuVar5 = pppuVar4[9];
    func_0x00010bfd46e0();
    if (((ulong)ppuVar5 & 1) == 0) {
      ppuVar5 = pppuVar4[3];
      puVar6 = PTR_PTR_1126ae750;
      func_0x00010c0ec800(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(ppuVar5);
      _objc_release(puVar6);
    }
    ppuVar5 = pppuVar4[3];
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = pppuVar4[4];
    pppuVar4[4] = ppuVar5;
    _objc_release(ppuVar9);
    _objc_initWeak(auStack_f8,pppuVar4);
    ppuVar9 = pppuVar4[9];
    func_0x00010bf12ee0();
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_104d4fcd4;
    puStack_108 = &UNK_110843540;
    _objc_copyWeak(auStack_100,auStack_f8);
    ppuVar5 = ppuVar9;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = pppuVar4[7];
    pppuVar4[7] = ppuVar5;
    _objc_release(ppuVar10);
    _objc_release(ppuVar9);
    _objc_copyWeak(auStack_128,auStack_f8);
    ppuVar5 = param_4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = pppuVar4[6];
    pppuVar4[6] = ppuVar5;
    _objc_release(ppuVar9);
    _objc_destroyWeak(auStack_128);
    _objc_destroyWeak(auStack_100);
    _objc_destroyWeak(auStack_f8);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar7);
  return pppuVar4;
}



/* Entry: 104d4f540; end: 104d4f54b; -[SCBirthdayPageDeeplinkLogger .cxx_destruct] */

void FUN_104d4f540(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d4f54c; end: 104d4f5bf; -[SCGrapheneBirthdayPageDeeplinkMetric2 init] */

undefined1 * FUN_104d4f54c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e4050;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104d4f5c0; end: 104d4f733;  */

undefined8 *****
FUN_104d4f5c0(long param_1,undefined8 *****param_2,undefined8 ****param_3,undefined8 ****param_4,
             undefined8 ****param_5,undefined8 ****param_6)

{
  char *pcVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  undefined *puVar4;
  undefined8 *****pppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  long *plVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined1 auStack_228 [8];
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [8];
  undefined8 ****ppppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 **ppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  ppppuVar9 = (undefined8 ****)&ppuStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar3 = param_2;
  ppppuVar10 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_60,pcVar1);
    ppuStack_80 = (undefined8 ***)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&ppuStack_80,auStack_60,&lStack_48,1);
    pppppuVar3 = (undefined8 *****)&UNK_11084cc58;
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puStack_68 = (undefined1 *)&ppuStack_80;
    func_0x00010007e5dc(&puStack_68);
    ppppuVar10 = ppppuVar9;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      ppppuVar10 = ppppuVar9;
      param_4 = param_3;
    }
  }
  pppppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  ppppuVar6 = (undefined8 ****)&ppuStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar5 = pppppuVar3;
  ppppuVar9 = ppppuVar10;
  _objc_retain(pppppuVar3);
  if (pppppuVar2 != (undefined8 *****)0x0) {
    ppppuVar9 = pppppuVar2[1];
    _objc_retain(pppppuVar3);
    if (pppppuVar3 == (undefined8 *****)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)pppppuVar3;
      _objc_retainAutorelease(pppppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar3);
    func_0x00010002b838(auStack_e0,pcVar1);
    ppuStack_100 = (undefined8 ***)0x0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&ppuStack_100,auStack_e0,&lStack_c8,1);
    pppppuVar5 = (undefined8 *****)&UNK_11084cca8;
    (*(code *)(*ppppuVar9)[3])(ppppuVar9);
    puStack_e8 = (undefined1 *)&ppuStack_100;
    func_0x00010007e5dc(&puStack_e8);
    ppppuVar9 = ppppuVar6;
    param_4 = ppppuVar10;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      ppppuVar9 = ppppuVar6;
      param_4 = ppppuVar10;
    }
  }
  pppppuVar2 = pppppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar3);
  _objc_release(pppppuVar3);
  __Unwind_Resume();
  ppppuVar6 = (undefined8 ****)&ppuStack_180;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar10 = ppppuVar9;
  _objc_retain(pppppuVar5);
  if (pppppuVar2 != (undefined8 *****)0x0) {
    ppppuVar10 = pppppuVar2[1];
    _objc_retain(pppppuVar5);
    if (pppppuVar5 == (undefined8 *****)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)pppppuVar5;
      _objc_retainAutorelease(pppppuVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar5);
    func_0x00010002b838(auStack_160,pcVar1);
    ppuStack_180 = (undefined8 ***)0x0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&ppuStack_180,auStack_160,&lStack_148,1);
    (*(code *)(*ppppuVar10)[3])(ppppuVar10,&UNK_11084ccf8,&ppuStack_180);
    puStack_168 = (undefined1 *)&ppuStack_180;
    func_0x00010007e5dc(&puStack_168);
    ppppuVar10 = ppppuVar6;
    param_4 = ppppuVar9;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      ppppuVar10 = ppppuVar6;
      param_4 = ppppuVar9;
    }
  }
  pppppuVar3 = pppppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pppppuVar3;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar5);
  _objc_release(pppppuVar5);
  __Unwind_Resume();
  _objc_retain(ppppuVar10);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_1e8 = PTR_PTR_1126e4058;
  pppppuVar2 = &ppppuStack_1f0;
  ppppuStack_1f0 = pppppuVar3;
  _objc_msgSendSuper2(pppppuVar2,PTR_s_init_1125d9248);
  if (pppppuVar2 != (undefined8 *****)0x0) {
    _objc_storeWeak(pppppuVar2 + 8,ppppuVar10);
    _objc_retain(param_5);
    ppppuVar9 = pppppuVar2[9];
    pppppuVar2[9] = param_5;
    _objc_release(ppppuVar9);
    _objc_retain(param_6);
    ppppuVar9 = pppppuVar2[10];
    pppppuVar2[10] = param_6;
    _objc_release(ppppuVar9);
    ppppuVar9 = (undefined8 ****)PTR_PTR_1126aeae0;
    func_0x00010c15f9e0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar6 = pppppuVar2[1];
    pppppuVar2[1] = ppppuVar9;
    _objc_release(ppppuVar6);
    ppppuVar9 = (undefined8 ****)PTR_PTR_1126ae820;
    _objc_opt_new();
    ppppuVar6 = pppppuVar2[3];
    pppppuVar2[3] = ppppuVar9;
    _objc_release(ppppuVar6);
    ppppuVar9 = pppppuVar2[9];
    func_0x00010bfd46e0();
    if (((ulong)ppppuVar9 & 1) == 0) {
      ppppuVar9 = pppppuVar2[3];
      puVar4 = PTR_PTR_1126ae750;
      func_0x00010c0ec800(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(ppppuVar9);
      _objc_release(puVar4);
    }
    ppppuVar9 = pppppuVar2[3];
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar6 = pppppuVar2[4];
    pppppuVar2[4] = ppppuVar9;
    _objc_release(ppppuVar6);
    _objc_initWeak(auStack_1f8,pppppuVar2);
    ppppuVar6 = pppppuVar2[9];
    func_0x00010bf12ee0();
    _objc_retainAutoreleasedReturnValue();
    puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_218 = 0xc2000000;
    pcStack_210 = FUN_104d4fcd4;
    puStack_208 = &UNK_110843540;
    _objc_copyWeak(auStack_200,auStack_1f8);
    ppppuVar9 = ppppuVar6;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar7 = pppppuVar2[7];
    pppppuVar2[7] = ppppuVar9;
    _objc_release(ppppuVar7);
    _objc_release(ppppuVar6);
    _objc_copyWeak(auStack_228,auStack_1f8);
    ppppuVar9 = param_4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar6 = pppppuVar2[6];
    pppppuVar2[6] = ppppuVar9;
    _objc_release(ppppuVar6);
    _objc_destroyWeak(auStack_228);
    _objc_destroyWeak(auStack_200);
    _objc_destroyWeak(auStack_1f8);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(ppppuVar10);
  return pppppuVar2;
}



/* Entry: 104d4f734; end: 104d4f8a7;  */

undefined8 *****
FUN_104d4f734(long param_1,undefined8 *****param_2,undefined8 ****param_3,undefined8 ****param_4,
             undefined8 ****param_5,undefined8 ****param_6)

{
  char *pcVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  undefined8 ****ppppuVar4;
  undefined *puVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  long *plVar8;
  undefined8 ****ppppuVar9;
  undefined1 auStack_1a8 [8];
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined8 ****ppppuStack_170;
  undefined *puStack_168;
  undefined8 **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  ppppuVar9 = (undefined8 ****)&ppuStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar3 = param_2;
  ppppuVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_60,pcVar1);
    ppuStack_80 = (undefined8 ***)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&ppuStack_80,auStack_60,&lStack_48,1);
    pppppuVar3 = (undefined8 *****)&UNK_11084cca8;
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puStack_68 = (undefined1 *)&ppuStack_80;
    func_0x00010007e5dc(&puStack_68);
    ppppuVar4 = ppppuVar9;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      ppppuVar4 = ppppuVar9;
      param_4 = param_3;
    }
  }
  pppppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  ppppuVar6 = (undefined8 ****)&ppuStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar9 = ppppuVar4;
  _objc_retain(pppppuVar3);
  if (pppppuVar2 != (undefined8 *****)0x0) {
    ppppuVar9 = pppppuVar2[1];
    _objc_retain(pppppuVar3);
    if (pppppuVar3 == (undefined8 *****)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)pppppuVar3;
      _objc_retainAutorelease(pppppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar3);
    func_0x00010002b838(auStack_e0,pcVar1);
    ppuStack_100 = (undefined8 ***)0x0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&ppuStack_100,auStack_e0,&lStack_c8,1);
    (*(code *)(*ppppuVar9)[3])(ppppuVar9,&UNK_11084ccf8,&ppuStack_100);
    puStack_e8 = (undefined1 *)&ppuStack_100;
    func_0x00010007e5dc(&puStack_e8);
    ppppuVar9 = ppppuVar6;
    param_4 = ppppuVar4;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      ppppuVar9 = ppppuVar6;
      param_4 = ppppuVar4;
    }
  }
  pppppuVar2 = pppppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pppppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar3);
  _objc_release(pppppuVar3);
  __Unwind_Resume();
  _objc_retain(ppppuVar9);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_168 = PTR_PTR_1126e4058;
  pppppuVar3 = &ppppuStack_170;
  ppppuStack_170 = pppppuVar2;
  _objc_msgSendSuper2(pppppuVar3,PTR_s_init_1125d9248);
  if (pppppuVar3 != (undefined8 *****)0x0) {
    _objc_storeWeak(pppppuVar3 + 8,ppppuVar9);
    _objc_retain(param_5);
    ppppuVar4 = pppppuVar3[9];
    pppppuVar3[9] = param_5;
    _objc_release(ppppuVar4);
    _objc_retain(param_6);
    ppppuVar4 = pppppuVar3[10];
    pppppuVar3[10] = param_6;
    _objc_release(ppppuVar4);
    ppppuVar4 = (undefined8 ****)PTR_PTR_1126aeae0;
    func_0x00010c15f9e0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar6 = pppppuVar3[1];
    pppppuVar3[1] = ppppuVar4;
    _objc_release(ppppuVar6);
    ppppuVar4 = (undefined8 ****)PTR_PTR_1126ae820;
    _objc_opt_new();
    ppppuVar6 = pppppuVar3[3];
    pppppuVar3[3] = ppppuVar4;
    _objc_release(ppppuVar6);
    ppppuVar4 = pppppuVar3[9];
    func_0x00010bfd46e0();
    if (((ulong)ppppuVar4 & 1) == 0) {
      ppppuVar4 = pppppuVar3[3];
      puVar5 = PTR_PTR_1126ae750;
      func_0x00010c0ec800(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(ppppuVar4);
      _objc_release(puVar5);
    }
    ppppuVar4 = pppppuVar3[3];
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar6 = pppppuVar3[4];
    pppppuVar3[4] = ppppuVar4;
    _objc_release(ppppuVar6);
    _objc_initWeak(auStack_178,pppppuVar3);
    ppppuVar6 = pppppuVar3[9];
    func_0x00010bf12ee0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_198 = 0xc2000000;
    pcStack_190 = FUN_104d4fcd4;
    puStack_188 = &UNK_110843540;
    _objc_copyWeak(auStack_180,auStack_178);
    ppppuVar4 = ppppuVar6;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar7 = pppppuVar3[7];
    pppppuVar3[7] = ppppuVar4;
    _objc_release(ppppuVar7);
    _objc_release(ppppuVar6);
    _objc_copyWeak(auStack_1a8,auStack_178);
    ppppuVar4 = param_4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar6 = pppppuVar3[6];
    pppppuVar3[6] = ppppuVar4;
    _objc_release(ppppuVar6);
    _objc_destroyWeak(auStack_1a8);
    _objc_destroyWeak(auStack_180);
    _objc_destroyWeak(auStack_178);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(ppppuVar9);
  return pppppuVar3;
}



/* Entry: 104d4f8a8; end: 104d4fa1b;  */

undefined8 ***
FUN_104d4f8a8(long param_1,undefined8 ***param_2,undefined8 **param_3,undefined8 **param_4,
             undefined8 **param_5,undefined8 **param_6)

{
  char *pcVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuVar4;
  undefined *puVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  long *plVar9;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined8 **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  ppuVar4 = (undefined8 **)&uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 ***)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11084ccf8,&uStack_80);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    ppuVar6 = ppuVar4;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      ppuVar6 = ppuVar4;
      param_4 = param_3;
    }
  }
  pppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  _objc_retain(ppuVar6);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_e8 = PTR_PTR_1126e4058;
  pppuVar3 = &ppuStack_f0;
  ppuStack_f0 = pppuVar2;
  _objc_msgSendSuper2(pppuVar3,PTR_s_init_1125d9248);
  if (pppuVar3 != (undefined8 ***)0x0) {
    _objc_storeWeak(pppuVar3 + 8,ppuVar6);
    _objc_retain(param_5);
    ppuVar4 = pppuVar3[9];
    pppuVar3[9] = param_5;
    _objc_release(ppuVar4);
    _objc_retain(param_6);
    ppuVar4 = pppuVar3[10];
    pppuVar3[10] = param_6;
    _objc_release(ppuVar4);
    ppuVar4 = (undefined8 **)PTR_PTR_1126aeae0;
    func_0x00010c15f9e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = pppuVar3[1];
    pppuVar3[1] = ppuVar4;
    _objc_release(ppuVar7);
    ppuVar4 = (undefined8 **)PTR_PTR_1126ae820;
    _objc_opt_new();
    ppuVar7 = pppuVar3[3];
    pppuVar3[3] = ppuVar4;
    _objc_release(ppuVar7);
    ppuVar4 = pppuVar3[9];
    func_0x00010bfd46e0();
    if (((ulong)ppuVar4 & 1) == 0) {
      ppuVar4 = pppuVar3[3];
      puVar5 = PTR_PTR_1126ae750;
      func_0x00010c0ec800(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(ppuVar4);
      _objc_release(puVar5);
    }
    ppuVar4 = pppuVar3[3];
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = pppuVar3[4];
    pppuVar3[4] = ppuVar4;
    _objc_release(ppuVar7);
    _objc_initWeak(auStack_f8,pppuVar3);
    ppuVar7 = pppuVar3[9];
    func_0x00010bf12ee0();
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_104d4fcd4;
    puStack_108 = &UNK_110843540;
    _objc_copyWeak(auStack_100,auStack_f8);
    ppuVar4 = ppuVar7;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = pppuVar3[7];
    pppuVar3[7] = ppuVar4;
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    _objc_copyWeak(auStack_128,auStack_f8);
    ppuVar4 = param_4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = pppuVar3[6];
    pppuVar3[6] = ppuVar4;
    _objc_release(ppuVar7);
    _objc_destroyWeak(auStack_128);
    _objc_destroyWeak(auStack_100);
    _objc_destroyWeak(auStack_f8);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(ppuVar6);
  return pppuVar3;
}



/* Entry: 104d4fa1c; end: 104d4fcd3; -[SCSettingsFriendmojiRowProvider initWithDelegate:friendmojiUserPolicyObservable:bitmojiAvatarProvider:circumstanceEngine:] */

undefined8 *
FUN_104d4fa1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126e4058;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 8,param_3);
    _objc_retain(param_5);
    uVar2 = puVar1[9];
    puVar1[9] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[10];
    puVar1[10] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aeae0;
    func_0x00010c15f9e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    uVar4 = puVar1[9];
    func_0x00010bfd46e0();
    if ((uVar4 & 1) == 0) {
      uVar2 = puVar1[3];
      puVar3 = PTR_PTR_1126ae750;
      func_0x00010c0ec800(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar2);
      _objc_release(puVar3);
    }
    uVar2 = puVar1[3];
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar5);
    _objc_initWeak(auStack_78,puVar1);
    uVar5 = puVar1[9];
    func_0x00010bf12ee0();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_104d4fcd4;
    puStack_88 = &UNK_110843540;
    _objc_copyWeak(auStack_80,auStack_78);
    uVar2 = uVar5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_copyWeak(auStack_a8,auStack_78);
    uVar2 = param_4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104d4fcd4; end: 104d4fd8f;  */

void FUN_104d4fcd4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  uVar1 = param_2;
  _objc_retain(param_2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104d4fd90; end: 104d4fe13;  */

void FUN_104d4fd90(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be082c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d4fe14; end: 104d4ff23; -[SCSettingsFriendmojiRowProvider handleWithContext:] */

void FUN_104d4fe14(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  if (param_3 != 0) {
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126aeaf8;
    _objc_alloc(PTR_PTR_1126aeaf8);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_104d4ff24;
    puStack_50 = &UNK_110845c10;
    _objc_retain(param_3);
    puStack_90 = puVar1;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_104d4ff34;
    puStack_78 = &UNK_110841f50;
    lStack_70 = param_3;
    lStack_48 = param_3;
    _objc_retain(param_3);
    func_0x00010c0311a0(puVar2,param_2,&puStack_68,&puStack_90);
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    func_0x00010c228140();
    _objc_release(param_1);
    _objc_release(puVar2);
    _objc_release(lStack_70);
    _objc_release(lStack_48);
    _objc_release(param_3);
  }
  return;
}



/* Entry: 104d4ff24; end: 104d4ff33;  */

void FUN_104d4ff24(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_pushViewController_animated__112624b68,param_2,1)
  ;
  return;
}



/* Entry: 104d4ff34; end: 104d4ff83;  */

void FUN_104d4ff34(long param_1,long param_2)

{
  _objc_retain(param_2);
  func_0x00010c103a00(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_2 != 0) {
    (**(code **)(param_2 + 0x10))(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d4ff84; end: 104d4ffab; -[SCSettingsFriendmojiRowProvider rowViewModel] */

void FUN_104d4ff84(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d4ffac; end: 104d4ffd3; -[SCSettingsFriendmojiRowProvider sectionRow] */

void FUN_104d4ffac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d4ffd4; end: 104d5008f; -[SCSettingsFriendmojiRowProvider _updateViewModel:] */

void FUN_104d4ffd4(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar4 = *(ulong *)(param_1 + 0x10);
  _objc_retain(param_3);
  _objc_retain(uVar4);
  if (param_3 == uVar4) {
    _objc_release(uVar4);
    _objc_release(param_3);
  }
  else {
    if (uVar4 == 0) {
      _objc_release();
    }
    else {
      uVar2 = param_3;
      func_0x00010c071ae0(param_3,param_2,uVar4);
      _objc_release(uVar4);
      _objc_release(param_3);
      if ((uVar2 & 1) != 0) goto LAB_104d5007c;
    }
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(ulong *)(param_1 + 0x10) = param_3;
    _objc_release(uVar3);
    iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
    func_0x00010bfd46e0();
    if (iVar1 != 0) {
      func_0x00010be082c0(param_1);
    }
  }
LAB_104d5007c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d50090; end: 104d5010f; -[SCSettingsFriendmojiRowProvider _emitRowViewModelUpdate] */

void FUN_104d50090(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
  func_0x00010bfd46e0();
  puVar2 = PTR_PTR_1126ae750;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar3);
  func_0x00010c0ec800(puVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4,param_2,puVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104d50110; end: 104d50313; -[SCSettingsFriendmojiRowProvider _policyDidChange:] */

void FUN_104d50110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  
  _objc_retain(param_3);
  puStack_b0 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_104d50314;
  uStack_60 = 0x104d50324;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110daafd8;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104d5032c;
  puStack_90 = &UNK_110847658;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x104d50368;
  puStack_b8 = &UNK_110847658;
  puStack_88 = puStack_b0;
  puStack_78 = puStack_b0;
  func_0x00010c0bf280(param_3);
  puVar1 = PTR_PTR_1126aeaf0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000104d5221c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053b80();
  _objc_release(puVar2);
  puVar3 = auStack_d8;
  _objc_initWeak(puVar3,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_e0,auStack_d8);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(ppuStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 104d50314; end: 104d5032b;  */

void FUN_104d50314(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104d5032c; end: 104d503a3;  */

void FUN_104d5032c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  FUN_104d521ec();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104d503a4; end: 104d503a7;  */

void FUN_104d503a4(void)

{
  return;
}



/* Entry: 104d503a8; end: 104d503e3;  */

void FUN_104d503a8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bee37e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d503e4; end: 104d5046f; -[SCSettingsFriendmojiRowProvider .cxx_destruct] */

void FUN_104d503e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 104d50470; end: 104d5055f; -[SCFriendmojiSettingsFlow initWithFriendmojiPolicyUpdater:] */

undefined1 * FUN_104d50470(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e4060;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = (undefined1 *)puVar1;
    _objc_opt_class(puVar1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d50560; end: 104d50587; -[SCFriendmojiSettingsFlow friendmojiUserPolicyObservable] */

void FUN_104d50560(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d50588; end: 104d50673; -[SCFriendmojiSettingsFlow syncPolicyValue] */

void FUN_104d50588(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb9a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c297260(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104d50674; end: 104d506c3;  */

void FUN_104d50674(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedd7a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d506c4; end: 104d507bb; -[SCFriendmojiSettingsFlow friendmojiUserPolicySetting] */

void FUN_104d506c4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d507bc; end: 104d507f7;  */

void FUN_104d507bc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(lVar1 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d507f8; end: 104d50917; -[SCFriendmojiSettingsFlow didSelectNewPolicy:] */

void FUN_104d507f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d50918; end: 104d5094b;  */

void FUN_104d50918(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d5094c; end: 104d50ad7; -[SCFriendmojiSettingsFlow _didSelectNewPolicy:promise:] */

void FUN_104d5094c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar5);
  _objc_retain(param_3);
  if (lVar5 == param_3) {
    _objc_release(param_3);
    _objc_release(lVar5);
LAB_104d509d8:
    func_0x00010bf43d60(param_4,param_2,param_3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(lVar5);
    }
    else {
      lVar1 = lVar5;
      func_0x00010c071ae0(lVar5,param_2,param_3);
      _objc_release(param_3);
      _objc_release(lVar5);
      if ((int)lVar1 != 0) goto LAB_104d509d8;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar6);
    func_0x00010bedd7a0(param_1,param_2,param_3);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c1a0700();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_104d50ad8;
    puStack_60 = &UNK_11084cdf8;
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uStack_58 = param_4;
    lStack_50 = param_1;
    uStack_48 = uVar6;
    _objc_retain(uVar6);
    func_0x00010c297260(uVar3,param_2,&puStack_78,uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uStack_48);
    _objc_release(uStack_58);
    _objc_release(uVar6);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d50ad8; end: 104d50b17;  */

void FUN_104d50ad8(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
    return;
  }
  func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bedd7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s__updatePolicy__112594f90,
             *(undefined8 *)(param_1 + 0x30));
  return;
}


