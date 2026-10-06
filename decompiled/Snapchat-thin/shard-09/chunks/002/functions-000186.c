/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b6cd74; end: 106b6cdbf; +[SCPhoneEntryAction continueRegistrationWithVerifiedPhoneNumber] */

void FUN_106b6cd74(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af280;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b6cdc0; end: 106b6ce6b; +[SCPhoneEntryAction countryCodeDidChangeWithCurrentCountryCode:newCountryCode:range:] */

void FUN_106b6cdc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126af280;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
  *(undefined8 *)(puVar2 + 0x48) = param_5;
  *(undefined8 *)(puVar2 + 0x50) = param_6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b6ce6c; end: 106b6ceb7; +[SCPhoneEntryAction countryCodeExited] */

void FUN_106b6ce6c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af280;
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



/* Entry: 106b6ceb8; end: 106b6cf1f; +[SCPhoneEntryAction countryCodeUpdatedWithCountryCode:] */

void FUN_106b6ceb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af280;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b6cf20; end: 106b6cf6b; +[SCPhoneEntryAction dismissRerouteToLogInDialog] */

void FUN_106b6cf20(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af280;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b6cf6c; end: 106b6d017; +[SCPhoneEntryAction phoneDidChangeWithCurrentPhone:newPhone:range:] */

void FUN_106b6cf6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126af280;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b6d018; end: 106b6d063; +[SCPhoneEntryAction submit] */

void FUN_106b6d018(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af280;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xb;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b6d064; end: 106b6d0af; +[SCPhoneEntryAction submitWithSuggestedPhoneNumber] */

void FUN_106b6d064(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af280;
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



/* Entry: 106b6d0b0; end: 106b6d0f7; +[SCPhoneEntryAction updateCountryCode] */

void FUN_106b6d0b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af280;
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



/* Entry: 106b6d0f8; end: 106b6d11b; -[SCPhoneEntryAction copyWithZone:] */

undefined8 FUN_106b6d0f8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b6d11c; end: 106b6d1c7; -[SCPhoneEntryAction hash] */

void FUN_106b6d11c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uStack_50 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x50);
  uStack_38 = *(undefined8 *)(param_1 + 0x48);
  puVar3 = &uStack_78;
  uStack_40 = uVar2;
  func_0x000100505190(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_a8 = PTR_PTR_1126f5258;
  puStack_b0 = puVar3;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b6d1c8; end: 106b6d20b; -[SCPhoneEntryAction internalInit] */

void FUN_106b6d1c8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f5258;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b6d20c; end: 106b6d353; -[SCPhoneEntryAction isEqual:] */

long FUN_106b6d20c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106b6d32c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b6d338;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = 0;
      if ((((*(long *)(param_1 + 0x28) != *(long *)(param_3 + 0x28)) ||
           (*(long *)(param_1 + 0x30) != *(long *)(param_3 + 0x30))) ||
          (lVar3 = 0, *(long *)(param_1 + 0x48) != *(long *)(param_3 + 0x48))) ||
         (*(long *)(param_1 + 0x50) != *(long *)(param_3 + 0x50))) goto LAB_106b6d338;
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x38);
            if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x40);
              if (lVar3 != *(long *)(param_3 + 0x40)) {
                func_0x00010c071ae0();
                goto LAB_106b6d338;
              }
              goto LAB_106b6d32c;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106b6d338:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106b6d354; end: 106b6d593; -[SCPhoneEntryAction matchUpdateCountryCode:countryCodeUpdated:countryCodeExited:phoneDidChange:countryCodeDidChange:submitWithSuggestedPhoneNumber:cancelUpdateSuggestedPhoneNumber:confirmToExitDialogAndUpdatePhoneNumber:confirmRerouteToLogIn:continueRegistrationWithVerifiedPhoneNumber:dismissRerouteToLogInDialog:submit:] */

void FUN_106b6d354(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                  long param_12,long param_13,long param_14)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  
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
  switch(*(undefined8 *)(param_1 + 8)) {
  case 0:
    if (param_3 == 0) goto LAB_106b6d518;
    pcVar6 = *(code **)(param_3 + 0x10);
    lVar1 = param_3;
    break;
  case 1:
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x10));
    }
    goto LAB_106b6d518;
  case 2:
    if (param_5 == 0) goto LAB_106b6d518;
    pcVar6 = *(code **)(param_5 + 0x10);
    lVar1 = param_5;
    break;
  case 3:
    if (param_6 == 0) goto LAB_106b6d518;
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    pcVar6 = *(code **)(param_6 + 0x10);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    lVar1 = param_6;
    goto code_r0x000106b6d4a4;
  case 4:
    if (param_7 == 0) goto LAB_106b6d518;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    pcVar6 = *(code **)(param_7 + 0x10);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    lVar1 = param_7;
code_r0x000106b6d4a4:
    (*pcVar6)(lVar1,uVar2,uVar3,uVar4,uVar5);
    goto LAB_106b6d518;
  case 5:
    if (param_8 == 0) goto LAB_106b6d518;
    pcVar6 = *(code **)(param_8 + 0x10);
    lVar1 = param_8;
    break;
  case 6:
    if (param_9 == 0) goto LAB_106b6d518;
    pcVar6 = *(code **)(param_9 + 0x10);
    lVar1 = param_9;
    break;
  case 7:
    if (param_10 == 0) goto LAB_106b6d518;
    pcVar6 = *(code **)(param_10 + 0x10);
    lVar1 = param_10;
    break;
  case 8:
    if (param_11 == 0) goto LAB_106b6d518;
    pcVar6 = *(code **)(param_11 + 0x10);
    lVar1 = param_11;
    break;
  case 9:
    if (param_12 == 0) goto LAB_106b6d518;
    pcVar6 = *(code **)(param_12 + 0x10);
    lVar1 = param_12;
    break;
  case 10:
    if (param_13 == 0) goto LAB_106b6d518;
    pcVar6 = *(code **)(param_13 + 0x10);
    lVar1 = param_13;
    break;
  case 0xb:
    if (param_14 == 0) goto LAB_106b6d518;
    pcVar6 = *(code **)(param_14 + 0x10);
    lVar1 = param_14;
    break;
  default:
    goto LAB_106b6d518;
  }
  (*pcVar6)(lVar1);
LAB_106b6d518:
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b6d594; end: 106b6d5e7; -[SCPhoneEntryAction .cxx_destruct] */

void FUN_106b6d594(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106b6d5e8; end: 106b6d62f; +[SCPhoneEntryContext credentialEntry] */

void FUN_106b6d5e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af2e0;
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



/* Entry: 106b6d630; end: 106b6d67b; +[SCPhoneEntryContext recoverPassword] */

void FUN_106b6d630(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af2e0;
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



/* Entry: 106b6d67c; end: 106b6d6c7; +[SCPhoneEntryContext userVerification] */

void FUN_106b6d67c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af2e0;
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



/* Entry: 106b6d6c8; end: 106b6d6eb; -[SCPhoneEntryContext copyWithZone:] */

undefined8 FUN_106b6d6c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b6d6ec; end: 106b6d6f3; -[SCPhoneEntryContext hash] */

undefined8 FUN_106b6d6ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b6d6f4; end: 106b6d737; -[SCPhoneEntryContext internalInit] */

void FUN_106b6d6f4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f5260;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b6d738; end: 106b6d7bf; -[SCPhoneEntryContext isEqual:] */

bool FUN_106b6d738(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106b6d7c0; end: 106b6d85b; -[SCPhoneEntryContext matchCredentialEntry:userVerification:recoverPassword:] */

void FUN_106b6d7c0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = param_5;
  if ((((lVar2 == 2) || (lVar1 = param_4, lVar2 == 1)) || (lVar1 = param_3, lVar2 == 0)) &&
     (lVar1 != 0)) {
    (**(code **)(lVar1 + 0x10))();
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b6d85c; end: 106b6da47; -[SCPhoneEntryViewModel initWithFormattedCountryName:formattedCountryCode:formattedPhoneNumber:formattedSuggestedPhoneNumber:countryCode:canContinue:isLoading:shouldShowReroute:errorMessage:phoneSubmitErrorAction:countryCodes:] */

undefined8 *
FUN_106b6d85c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

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
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126f5268;
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
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_8;
    *(undefined1 *)((long)puVar1 + 9) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 10) = param_9._1_1_;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106b6da48; end: 106b6da6b; -[SCPhoneEntryViewModel copyWithZone:] */

undefined8 FUN_106b6da48(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b6da6c; end: 106b6db37; -[SCPhoneEntryViewModel hash] */

undefined8 * FUN_106b6da6c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uStack_58 = (ulong)*(byte *)(param_1 + 8);
  uStack_50 = (ulong)*(byte *)(param_1 + 9);
  uStack_48 = (ulong)*(byte *)(param_1 + 10);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106b6dc78:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106b6dc84;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))
        && (*(char *)((long)puVar3 + 10) == param_3[10])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x30);
              if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x38);
                if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x40);
                  if ((lVar5 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    puVar6 = *(undefined1 **)((long)puVar3 + 0x48);
                    if (puVar6 != *(undefined1 **)(param_3 + 0x48)) {
                      func_0x00010c071ae0();
                      goto LAB_106b6dc84;
                    }
                    goto LAB_106b6dc78;
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106b6dc84:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106b6db38; end: 106b6dc9f; -[SCPhoneEntryViewModel isEqual:] */

long FUN_106b6db38(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106b6dc78:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b6dc84;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x48);
                    if (lVar3 != *(long *)(param_3 + 0x48)) {
                      func_0x00010c071ae0();
                      goto LAB_106b6dc84;
                    }
                    goto LAB_106b6dc78;
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106b6dc84:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106b6dca0; end: 106b6dca7; -[SCPhoneEntryViewModel formattedCountryName] */

undefined8 FUN_106b6dca0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b6dca8; end: 106b6dcaf; -[SCPhoneEntryViewModel formattedCountryCode] */

undefined8 FUN_106b6dca8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106b6dcb0; end: 106b6dcb7; -[SCPhoneEntryViewModel formattedPhoneNumber] */

undefined8 FUN_106b6dcb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106b6dcb8; end: 106b6dcbf; -[SCPhoneEntryViewModel formattedSuggestedPhoneNumber] */

undefined8 FUN_106b6dcb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106b6dcc0; end: 106b6dcc7; -[SCPhoneEntryViewModel countryCode] */

undefined8 FUN_106b6dcc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106b6dcc8; end: 106b6dccf; -[SCPhoneEntryViewModel canContinue] */

undefined1 FUN_106b6dcc8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106b6dcd0; end: 106b6dcd7; -[SCPhoneEntryViewModel isLoading] */

undefined1 FUN_106b6dcd0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106b6dcd8; end: 106b6dcdf; -[SCPhoneEntryViewModel shouldShowReroute] */

undefined1 FUN_106b6dcd8(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106b6dce0; end: 106b6dce7; -[SCPhoneEntryViewModel errorMessage] */

undefined8 FUN_106b6dce0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106b6dce8; end: 106b6dcef; -[SCPhoneEntryViewModel phoneSubmitErrorAction] */

undefined8 FUN_106b6dce8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106b6dcf0; end: 106b6dcf7; -[SCPhoneEntryViewModel countryCodes] */

undefined8 FUN_106b6dcf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106b6dcf8; end: 106b6dd6f; -[SCPhoneEntryViewModel .cxx_destruct] */

void FUN_106b6dcf8(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106b6dd70; end: 106b6de1b; -[SCPhoneNumberSuggestionInfo initWithSuggestedFullPhoneNumber:suggestionType:] */

undefined1 *
FUN_106b6dd70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5270;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b6de1c; end: 106b6de3f; -[SCPhoneNumberSuggestionInfo copyWithZone:] */

undefined8 FUN_106b6de1c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b6de40; end: 106b6deb3; -[SCPhoneNumberSuggestionInfo hash] */

undefined8 * FUN_106b6de40(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106b6df34:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106b6df40;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_106b6df40;
        }
        goto LAB_106b6df34;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106b6df40:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106b6deb4; end: 106b6df5b; -[SCPhoneNumberSuggestionInfo isEqual:] */

long FUN_106b6deb4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106b6df34:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b6df40;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_106b6df40;
        }
        goto LAB_106b6df34;
      }
    }
    lVar3 = 0;
  }
LAB_106b6df40:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106b6df5c; end: 106b6df63; -[SCPhoneNumberSuggestionInfo suggestedFullPhoneNumber] */

undefined8 FUN_106b6df5c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b6df64; end: 106b6df6b; -[SCPhoneNumberSuggestionInfo suggestionType] */

undefined8 FUN_106b6df64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b6df6c; end: 106b6df9b; -[SCPhoneNumberSuggestionInfo .cxx_destruct] */

void FUN_106b6df6c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b6df9c; end: 106b6e007; +[SCPhoneSubmitErrorAction loginCodeWithMagicCodeAdaptor:] */

void FUN_106b6df9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126afc68;
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



/* Entry: 106b6e008; end: 106b6e09b; +[SCPhoneSubmitErrorAction showErrorDialogWithPrimaryAction:secondaryAction:] */

void FUN_106b6e008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126afc68;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
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



/* Entry: 106b6e09c; end: 106b6e0e3; +[SCPhoneSubmitErrorAction showErrorMessage] */

void FUN_106b6e09c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afc68;
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



/* Entry: 106b6e0e4; end: 106b6e14f; +[SCPhoneSubmitErrorAction showPhoneNumberSuggestionDialogWithPhoneNumberSuggestionInfo:] */

void FUN_106b6e0e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126afc68;
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



/* Entry: 106b6e150; end: 106b6e19b; +[SCPhoneSubmitErrorAction showRerouteToLoginDialog] */

void FUN_106b6e150(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afc68;
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



/* Entry: 106b6e19c; end: 106b6e1bf; -[SCPhoneSubmitErrorAction copyWithZone:] */

undefined8 FUN_106b6e19c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b6e1c0; end: 106b6e24f; -[SCPhoneSubmitErrorAction hash] */

void FUN_106b6e1c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
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
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126f5278;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b6e250; end: 106b6e293; -[SCPhoneSubmitErrorAction internalInit] */

void FUN_106b6e250(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f5278;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b6e294; end: 106b6e37b; -[SCPhoneSubmitErrorAction isEqual:] */

long FUN_106b6e294(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106b6e354:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b6e360;
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
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_106b6e360;
            }
            goto LAB_106b6e354;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106b6e360:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106b6e37c; end: 106b6e49b; -[SCPhoneSubmitErrorAction matchShowErrorMessage:showErrorDialog:showPhoneNumberSuggestionDialog:showRerouteToLoginDialog:loginCode:] */

void FUN_106b6e37c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 != 0) {
      if ((lVar2 == 1) && (param_4 != 0)) {
        (**(code **)(param_4 + 0x10))
                  (param_4,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
      }
      goto LAB_106b6e464;
    }
    if (param_3 == 0) goto LAB_106b6e464;
    pcVar3 = *(code **)(param_3 + 0x10);
    lVar2 = param_3;
LAB_106b6e460:
    (*pcVar3)(lVar2);
  }
  else {
    if (lVar2 == 2) {
      if (param_5 == 0) goto LAB_106b6e464;
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      pcVar3 = *(code **)(param_5 + 0x10);
      lVar2 = param_5;
    }
    else {
      if (lVar2 == 3) {
        if (param_6 == 0) goto LAB_106b6e464;
        pcVar3 = *(code **)(param_6 + 0x10);
        lVar2 = param_6;
        goto LAB_106b6e460;
      }
      if ((lVar2 != 4) || (param_7 == 0)) goto LAB_106b6e464;
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      pcVar3 = *(code **)(param_7 + 0x10);
      lVar2 = param_7;
    }
    (*pcVar3)(lVar2,uVar1);
  }
LAB_106b6e464:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b6e49c; end: 106b6e4e3; -[SCPhoneSubmitErrorAction .cxx_destruct] */

void FUN_106b6e49c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106b6e4e4; end: 106b6e52b; +[SCPhoneSubmitErrorDialogButtonAction skip] */

void FUN_106b6e4e4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0ca0;
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



/* Entry: 106b6e52c; end: 106b6e577; +[SCPhoneSubmitErrorDialogButtonAction updatePhoneNumber] */

void FUN_106b6e52c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0ca0;
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



/* Entry: 106b6e578; end: 106b6e59b; -[SCPhoneSubmitErrorDialogButtonAction copyWithZone:] */

undefined8 FUN_106b6e578(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b6e59c; end: 106b6e5a3; -[SCPhoneSubmitErrorDialogButtonAction hash] */

undefined8 FUN_106b6e59c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b6e5a4; end: 106b6e5e7; -[SCPhoneSubmitErrorDialogButtonAction internalInit] */

void FUN_106b6e5a4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f5280;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b6e5e8; end: 106b6e66f; -[SCPhoneSubmitErrorDialogButtonAction isEqual:] */

bool FUN_106b6e5e8(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106b6e670; end: 106b6e6e7; -[SCPhoneSubmitErrorDialogButtonAction matchSkip:updatePhoneNumber:] */

void FUN_106b6e670(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    lVar1 = param_4;
    if (param_4 == 0) goto LAB_106b6e6b8;
  }
  else {
    lVar1 = param_3;
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_106b6e6b8;
  }
  (**(code **)(lVar1 + 0x10))();
LAB_106b6e6b8:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b6e6e8; end: 106b6e76b; -[SCRegistrationUserInitialInputLogger initWithRegistrationLogger:onPage:] */

undefined1 *
FUN_106b6e6e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f5288;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b6e76c; end: 106b6e7c3; -[SCRegistrationUserInitialInputLogger logUserInitialInputIfNeededWithField:] */

void FUN_106b6e76c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_106b6e7c4;
  puStack_28 = &UNK_110848c48;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_40);
  return;
}



/* Entry: 106b6e7c4; end: 106b6e81f;  */

void FUN_106b6e7c4(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 1) == 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0add40();
    _objc_release(uVar1);
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x18) = 1;
  }
  return;
}



/* Entry: 106b6e820; end: 106b6e82b; -[SCRegistrationUserInitialInputLogger .cxx_destruct] */

void FUN_106b6e820(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b6e82c; end: 106b6e883; -[SCRegistrationLoggerServices initWithRegistrationLogger:] */

long FUN_106b6e82c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bfee200();
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106b6e884; end: 106b6e88b; -[SCRegistrationLoggerServices registrationLogger] */

undefined8 FUN_106b6e884(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b6e88c; end: 106b6e897; -[SCRegistrationLoggerServices .cxx_destruct] */

void FUN_106b6e88c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b6e898; end: 106b6e9d3; -[SCCountryPickerViewController initWithCountryCodes:styleHelper:countrySelected:countryPickerExited:currentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106b6e898(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f5290;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112758fa4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112758fa8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112758fac;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    func_0x00010c184b80(puVar1);
    func_0x00010c184b40(puVar1);
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b6e9d4; end: 106b6e9db; -[SCCountryPickerViewController pageViewName] */

undefined8 FUN_106b6e9d4(void)

{
  return 0x43;
}



/* Entry: 106b6e9dc; end: 106b6ea23; -[SCCountryPickerViewController viewDidLoad] */

void FUN_106b6e9dc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f5290;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010be3a720(param_1);
  return;
}



/* Entry: 106b6ea24; end: 106b6ea83; -[SCCountryPickerViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6ea24(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f5290;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758fac);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar1);
  return;
}



/* Entry: 106b6ea84; end: 106b6eafb; -[SCCountryPickerViewController _initSubviews] */

void FUN_106b6ea84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010be39d20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be3a790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__initTableView_11256c380);
  return;
}



/* Entry: 106b6eafc; end: 106b6ebcf; -[SCCountryPickerViewController _initHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6eafc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126c31a0;
  _objc_alloc();
  func_0x00010bff93a0();
  lVar4 = (long)_DAT_112758fb0;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106b6ebd0;
  puStack_40 = &UNK_1108471b0;
  lStack_38 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106b6ebd0; end: 106b6ecc7;  */

void FUN_106b6ebd0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b6ecc8; end: 106b6edfb; -[SCCountryPickerViewController _initTableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6ecc8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_112758fb4;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,0);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
  func_0x00010c1f7e20(*(undefined8 *)(param_1 + lVar4),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1fce40(*(undefined8 *)(param_1 + lVar4),param_2,1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106b6edfc;
  puStack_40 = &UNK_1108471b0;
  lStack_38 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106b6edfc; end: 106b6ef5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6edfc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112758fb0);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf029c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(lVar6,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106b6ef60; end: 106b6ef63; -[SCCountryPickerViewController titleForHeader:] */

void FUN_106b6ef60(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e75ab8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e75ab8,
                      &PTR____CFConstantStringClassReference_110e75ad8,0);
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



/* Entry: 106b6ef64; end: 106b6ef73; -[SCCountryPickerViewController textColorForHeader:] */

void FUN_106b6ef64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x7b);
  return;
}



/* Entry: 106b6ef74; end: 106b6ef83; -[SCCountryPickerViewController backgroundColorForHeader] */

void FUN_106b6ef74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xd5);
  return;
}



/* Entry: 106b6ef84; end: 106b6ef93; -[SCCountryPickerViewController imageForLeftButtonInState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6ef84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08e4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112758fa8),PTR_s_leftButtonImageForState__112601340);
  return;
}



/* Entry: 106b6ef94; end: 106b6ef9b; -[SCCountryPickerViewController imageForRightButtonInState:] */

undefined8 FUN_106b6ef94(void)

{
  return 0;
}



/* Entry: 106b6ef9c; end: 106b6efd7; -[SCCountryPickerViewController leftButtonPressed] */

void FUN_106b6ef9c(long param_1)

{
  func_0x00010bf536c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b6efd8; end: 106b6efe7; -[SCCountryPickerViewController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6efd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112758fa4),PTR_s_count_1125b2420);
  return;
}



/* Entry: 106b6efe8; end: 106b6f0d7; -[SCCountryPickerViewController tableView:cellForRowAtIndexPath:] */

void FUN_106b6efe8(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  func_0x00010bf6e060(param_3,param_2,&PTR____CFConstantStringClassReference_110e756d8);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == (undefined *)0x0) {
    param_3 = PTR__OBJC_CLASS___UITableViewCell_1126afcb8;
    _objc_alloc(PTR__OBJC_CLASS___UITableViewCell_1126afcb8);
    func_0x00010c04ec80();
  }
  func_0x00010be18be0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_3;
  func_0x00010c26c280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(puVar1);
  _objc_release(param_1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_3,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106b6f0d8; end: 106b6f193; -[SCCountryPickerViewController _formattedCountryCodeTextForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6f0d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_112758fa4);
  func_0x00010c142240(param_3);
  func_0x00010c0dfd40(uVar4,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = uVar4;
  func_0x00010bf53640();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf53380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e6f398);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106b6f194; end: 106b6f19f; -[SCCountryPickerViewController tableView:heightForRowAtIndexPath:] */

undefined8 FUN_106b6f194(void)

{
  return 0x4049000000000000;
}



/* Entry: 106b6f1a0; end: 106b6f237; -[SCCountryPickerViewController tableView:didSelectRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6f1a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112758fa4);
  func_0x00010c142240(param_4);
  func_0x00010c0dfd40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf536a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010bf53720();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b6f238; end: 106b6f247; -[SCCountryPickerViewController countrySelectedBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b6f238(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758fb8);
}



/* Entry: 106b6f248; end: 106b6f253; -[SCCountryPickerViewController setCountrySelectedBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6f248(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106b6f254; end: 106b6f263; -[SCCountryPickerViewController countryPickerExitedBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106b6f254(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112758fbc);
}



/* Entry: 106b6f264; end: 106b6f26f; -[SCCountryPickerViewController setCountryPickerExitedBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6f264(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106b6f270; end: 106b6f2ff; -[SCCountryPickerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6f270(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112758fbc,0);
  _objc_storeStrong(param_1 + _DAT_112758fb8,0);
  _objc_storeStrong(param_1 + _DAT_112758fa4,0);
  _objc_storeStrong(param_1 + _DAT_112758fb4,0);
  _objc_storeStrong(param_1 + _DAT_112758fb0,0);
  _objc_storeStrong(param_1 + _DAT_112758fac,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112758fa8,0);
  return;
}



/* Entry: 106b6f300; end: 106b6f307; -[SCPhoneEntryView initWithDelegate:styleHelper:smsExplanationLabelHidden:] */

void FUN_106b6f300(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c00aef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithDelegate_styleHelper_sms_1125e0588);
  return;
}



/* Entry: 106b6f308; end: 106b6f413; -[SCPhoneEntryView initWithDelegate:styleHelper:smsExplanationLabelHidden:phoneLabelHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106b6f308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f5298;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_112758fc0) = param_5;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112758fc4) = param_6;
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112758fc8),param_3);
    lVar4 = (long)_DAT_112758fcc;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126af258;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112758fd0);
    *(undefined **)((long)puVar1 + (long)_DAT_112758fd0) = puVar3;
    _objc_release(uVar2);
    func_0x00010be3a160(puVar1);
    func_0x00010be39920(puVar1);
    func_0x00010be399e0(puVar1);
    func_0x00010be39b00(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b6f414; end: 106b6f453; -[SCPhoneEntryView setPhoneFieldText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6f414(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112758fd4),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b6f454; end: 106b6f49b; -[SCPhoneEntryView phoneFieldText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b6f454(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112758fd4);
  func_0x00010c26b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


