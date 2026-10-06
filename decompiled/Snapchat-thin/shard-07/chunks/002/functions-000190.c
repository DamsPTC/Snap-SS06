/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10537e744; end: 10537e78f; +[SCKoreanUserConsentChecklistItem transferOfPersonalInformationOverseas] */

void FUN_10537e744(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7cb8;
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



/* Entry: 10537e790; end: 10537e7b3; -[SCKoreanUserConsentChecklistItem copyWithZone:] */

undefined8 FUN_10537e790(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10537e7b4; end: 10537e7bb; -[SCKoreanUserConsentChecklistItem hash] */

undefined8 FUN_10537e7b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10537e7bc; end: 10537e7ff; -[SCKoreanUserConsentChecklistItem internalInit] */

void FUN_10537e7bc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e7bb0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10537e800; end: 10537e887; -[SCKoreanUserConsentChecklistItem isEqual:] */

bool FUN_10537e800(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 10537e888; end: 10537e983; -[SCKoreanUserConsentChecklistItem matchSelectAll:termOfUse:colletionAndUseRequiredInformation:disclosureOfPersonalInformation:transferOfPersonalInformationOverseas:] */

void FUN_10537e888(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    lVar1 = param_3;
    if ((lVar2 != 0) && (lVar1 = param_4, lVar2 != 1)) goto LAB_10537e934;
  }
  else {
    lVar1 = param_5;
    if ((lVar2 != 2) && ((lVar1 = param_6, lVar2 != 3 && (lVar1 = param_7, lVar2 != 4))))
    goto LAB_10537e934;
  }
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))();
  }
LAB_10537e934:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10537e984; end: 10537e9f7; -[SCRegistrationPrivacyPolicyViewServices initWithPrivacyPolicyViewFactory:] */

undefined1 * FUN_10537e984(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7bb8;
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



/* Entry: 10537e9f8; end: 10537e9ff; -[SCRegistrationPrivacyPolicyViewServices privacyPolicyViewFactory] */

undefined8 FUN_10537e9f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10537ea00; end: 10537ea0b; -[SCRegistrationPrivacyPolicyViewServices .cxx_destruct] */

void FUN_10537ea00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10537ea0c; end: 10537eaaf; -[SCAppAttestServices initWithRegistrationAppAttestStateManager:logInAppAttestStateManager:] */

undefined1 *
FUN_10537ea0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7bc0;
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



/* Entry: 10537eab0; end: 10537eab7; -[SCAppAttestServices registrationAppAttestStateManager] */

undefined8 FUN_10537eab0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10537eab8; end: 10537eabf; -[SCAppAttestServices loginAppAttestStateManager] */

undefined8 FUN_10537eab8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10537eac0; end: 10537eaef; -[SCAppAttestServices .cxx_destruct] */

void FUN_10537eac0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10537eaf0; end: 10537eaf7; -[SCConfigNullVersionProvider lensCoreVersion] */

undefined8 FUN_10537eaf0(void)

{
  return 0;
}



/* Entry: 10537eaf8; end: 10537ebaf; -[SCUserVerificationEventLogger initWithVerificationFeatureLogger:signupTransitionLogger:] */

undefined1 *
FUN_10537eaf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7bc8;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined ***)((long)puVar1 + 0x18) = &PTR__OBJC_CLASS___NSConstantDictionary_1111744f0;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10537ebb0; end: 10537ebdf; -[SCUserVerificationEventLogger logEmailBegin] */

void FUN_10537ebb0(long param_1,undefined8 param_2)

{
  func_0x00010c0adc80(*(undefined8 *)(param_1 + 8),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010c0abcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_logPageView__112608938,0x20);
  return;
}



/* Entry: 10537ebe0; end: 10537ebe7; -[SCUserVerificationEventLogger logSuggestedEmailSelected] */

void FUN_10537ebe0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a5fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_logFeatureEmailCorrectionUse_1126071f8);
  return;
}



/* Entry: 10537ebe8; end: 10537ebef; -[SCUserVerificationEventLogger logEmailRerouteDialogWithAction:] */

void FUN_10537ebe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b2790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_logUserActionOnEmailRerouteDialo_11260a3f0);
  return;
}



/* Entry: 10537ebf0; end: 10537ebff; -[SCUserVerificationEventLogger logRegistrationUserEmailFail:] */

void FUN_10537ebf0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0adc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_logRegistrationUserEmailFailWith_112609128,1,param_3
            );
  return;
}



/* Entry: 10537ec00; end: 10537ec3b; -[SCUserVerificationEventLogger logSubmitEmail] */

void FUN_10537ec00(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10537ec3c; end: 10537ecc3; -[SCUserVerificationEventLogger logEmailSubmitted:] */

void FUN_10537ec3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar1);
  func_0x00010c0adca0(*(undefined8 *)(param_1 + 8),param_2,param_3);
  func_0x00010c0b2d20(*(undefined8 *)(param_1 + 8),param_2,param_3);
  func_0x00010c0ae640(*(undefined8 *)(param_1 + 8),param_2,5,1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10537ecc4; end: 10537ed1f; -[SCUserVerificationEventLogger logEmailSubmitFailed:] */

void FUN_10537ecc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0adc60(uVar1,param_2,0,param_3);
  func_0x00010c0ae640(*(undefined8 *)(param_1 + 8),param_2,5,0,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10537ed20; end: 10537ed27; -[SCUserVerificationEventLogger logUserSelectsEmailDomain:] */

void FUN_10537ed20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b2cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_logUserSelectsEmailDomain__11260a548);
  return;
}



/* Entry: 10537ed28; end: 10537edc7; -[SCUserVerificationEventLogger logPhoneEntryBegin] */

void FUN_10537ed28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010c0adde0(*(undefined8 *)(param_1 + 8),param_2,1,*(undefined8 *)(param_1 + 0x18),
                      0xffffffffffffffff);
  func_0x00010c0abca0(*(undefined8 *)(param_1 + 8));
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (puVar2 != (undefined *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0a5fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_logFeatureFieldAutofill__112607200,4);
    return;
  }
  return;
}



/* Entry: 10537edc8; end: 10537edd3; -[SCUserVerificationEventLogger logPhoneNumberAutoFill] */

void FUN_10537edc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a5fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_logFeatureFieldAutofill__112607200,5);
  return;
}



/* Entry: 10537edd4; end: 10537eddf; -[SCUserVerificationEventLogger logEmailAutoFill] */

void FUN_10537edd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a5fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_logFeatureFieldAutofill__112607200,3);
  return;
}



/* Entry: 10537ede0; end: 10537edeb; -[SCUserVerificationEventLogger logPhoneEntryContinue] */

void FUN_10537ede0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0abcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_logPageView__112608938,0x2d);
  return;
}



/* Entry: 10537edec; end: 10537edf7; -[SCUserVerificationEventLogger logCountryCodePageView] */

void FUN_10537edec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0abcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_logPageView__112608938,0x68);
  return;
}



/* Entry: 10537edf8; end: 10537eecf; -[SCUserVerificationEventLogger logSubmitPhoneWithPhoneNumber:] */

void FUN_10537edf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c0fafc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0adda0(uVar3,param_2,1,uVar1,uVar2,uVar4);
  _objc_release(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0920();
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = param_3;
  func_0x00010c0fafc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0adce0(uVar4,param_2,uVar2,uVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10537eed0; end: 10537eee7; -[SCUserVerificationEventLogger logSkipPhoneEntryWithPhoneNumberCountryCode:] */

void FUN_10537eed0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ade10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_logRegistrationUserPhoneSkipWith_112609190,1,
             *(undefined8 *)(param_1 + 0x18),param_3);
  return;
}



/* Entry: 10537eee8; end: 10537ef63; -[SCUserVerificationEventLogger logPhoneSubmissionSuccessWithPhoneNumberCountryCode:] */

void FUN_10537eee8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar1);
  func_0x00010c0b2d40(*(undefined8 *)(param_1 + 8),param_2,param_3);
  func_0x00010c0ae6c0(*(undefined8 *)(param_1 + 8),param_2,5,1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10537ef64; end: 10537ef83; -[SCUserVerificationEventLogger logPhoneSubmissionFailureWithPhoneNumberCountryCode:] */

void FUN_10537ef64(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010c0ae6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_logResponseSetPhone_success_phon_1126093c0,5,0,
             param_3);
  return;
}



/* Entry: 10537ef84; end: 10537ef8b; -[SCUserVerificationEventLogger logSuggestedPhoneNumberDialogWithSuggestionType:accept:] */

void FUN_10537ef84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b27d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_logUserActionOnSuggestedPhoneNum_11260a400);
  return;
}



/* Entry: 10537ef8c; end: 10537ef93; -[SCUserVerificationEventLogger logPhoneRerouteDialogWithAction:] */

void FUN_10537ef8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b27b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_logUserActionOnPhoneRerouteDialo_11260a3f8);
  return;
}



/* Entry: 10537ef94; end: 10537f02f; -[SCUserVerificationEventLogger logPhoneVerificationStartWithAutofill:] */

void FUN_10537ef94(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0920();
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0920();
  _objc_release(uVar1);
  func_0x00010c0ade40(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c0add90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_logRegistrationUserPhoneAttemptW_112609170,
             *(undefined8 *)(param_1 + 0x18),1);
  return;
}



/* Entry: 10537f030; end: 10537f0d3; -[SCUserVerificationEventLogger logPhoneVerificationSuccessWithAutofill:] */

void FUN_10537f030(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0900();
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar1);
  func_0x00010c0ade20(*(undefined8 *)(param_1 + 8));
  func_0x00010c0b2ec0(*(undefined8 *)(param_1 + 8));
  func_0x00010c0ae720(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c0b2b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_logUserPhoneVerificationPhoneSuc_11260a4f0,
             *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30),0x2e);
  return;
}



/* Entry: 10537f0d4; end: 10537f113; -[SCUserVerificationEventLogger logPhoneVerificationFailure] */

void FUN_10537f0d4(long param_1,undefined8 param_2)

{
  func_0x00010c0addc0(*(undefined8 *)(param_1 + 8),param_2,1,*(undefined8 *)(param_1 + 0x18),
                      *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010c0ae730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_logResponseVerifyPhone_success__1126093d8,5,0);
  return;
}



/* Entry: 10537f114; end: 10537f11f; -[SCUserVerificationEventLogger logResendCode] */

void FUN_10537f114(long param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 10537f120; end: 10537f12b; -[SCUserVerificationEventLogger logVerificationCodeAutoFill] */

void FUN_10537f120(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a5fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_logFeatureFieldAutofill__112607200,6);
  return;
}



/* Entry: 10537f12c; end: 10537f133; -[SCUserVerificationEventLogger logPageViewAndReach:] */

void FUN_10537f12c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0abcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_logPageView__112608938);
  return;
}



/* Entry: 10537f134; end: 10537f13b; -[SCUserVerificationEventLogger logRegistrationFlowEvent:pageType:] */

void FUN_10537f134(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ada70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_logRegistrationFlowEvent_pageTyp_1126090a8);
  return;
}



/* Entry: 10537f13c; end: 10537f17f; -[SCUserVerificationEventLogger logRegistrationUserSuccess:] */

void FUN_10537f13c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0adea0(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10537f180; end: 10537f187; -[SCUserVerificationEventLogger logInitialPhoneInputWithPhoneNumberCountryCode:] */

void FUN_10537f180(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a8a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_logInitialPhoneInputWithPhoneNum_112607ca0);
  return;
}



/* Entry: 10537f188; end: 10537f29b; -[SCUserVerificationEventLogger logInterruptionWithState:] */

void FUN_10537f188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10537f29c;
  puStack_30 = &UNK_110842e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x10537f2a8;
  puStack_58 = &UNK_110842e18;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x10537f2b4;
  puStack_80 = &UNK_110842e18;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x10537f2c0;
  puStack_a8 = &UNK_110842e18;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x10537f2cc;
  puStack_d0 = &UNK_110842e18;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x10537f2d8;
  puStack_f8 = &UNK_110842e18;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x10537f2e4;
  puStack_120 = &UNK_110842e18;
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x10537f2f0;
  puStack_148 = &UNK_110842e18;
  uStack_140 = param_1;
  uStack_118 = param_1;
  uStack_f0 = param_1;
  uStack_c8 = param_1;
  uStack_a0 = param_1;
  uStack_78 = param_1;
  uStack_50 = param_1;
  uStack_28 = param_1;
  func_0x00010c0bda20(param_3,param_2,&puStack_48,&puStack_70,&puStack_98,&puStack_c0,&puStack_e8,
                      &puStack_110,&puStack_138,&puStack_160,0,0);
  return;
}



/* Entry: 10537f29c; end: 10537f2fb;  */

void FUN_10537f29c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be54e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logInterruptionWithPage__112572d20,0x20);
  return;
}



/* Entry: 10537f2fc; end: 10537f30b; -[SCUserVerificationEventLogger _logInterruptionWithPage:] */

void FUN_10537f2fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ada70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_logRegistrationFlowEvent_pageTyp_1126090a8,3,param_3
            );
  return;
}



/* Entry: 10537f30c; end: 10537f347; -[SCUserVerificationEventLogger .cxx_destruct] */

void FUN_10537f30c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10537f348; end: 10537f42f; -[SCVerificationFeatureLogger initWithRegistrationUserNotTrackedLogger:requestManager:loginInfoRepository:unverifiedUserId:verificationFlowContext:] */

long FUN_10537f348(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bfee200();
  if (param_1 != 0) {
    _objc_retain(param_6);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_6;
    _objc_release(uVar1);
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_4;
    _objc_release(uVar1);
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_5;
    _objc_release(uVar1);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_3;
    _objc_release(uVar1);
    *(undefined8 *)(param_1 + 0x28) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10537f430; end: 10537f47f; -[SCVerificationFeatureLogger logRegistrationUserEmailPageviewWithVersion:] */

void FUN_10537f430(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7cc0;
  _objc_opt_new(PTR_PTR_1126b7cc0);
  func_0x00010c1e99a0();
  func_0x00010c0ada00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10537f480; end: 10537f4bb; -[SCVerificationFeatureLogger logFeatureEmailCorrectionUse] */

void FUN_10537f480(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7cc8;
  _objc_opt_new(PTR_PTR_1126b7cc8);
  func_0x00010c0ada00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10537f4bc; end: 10537f51f; -[SCVerificationFeatureLogger logRegistrationUserEmailSuccess:] */

void FUN_10537f4bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7b50;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c194140();
  _objc_release(param_3);
  func_0x00010c0ada00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10537f520; end: 10537f61f; -[SCVerificationFeatureLogger logRegistrationUserEmailFailWithLocalValidationError:emailDomain:] */

void FUN_10537f520(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126af378;
  _objc_retain(param_4);
  func_0x00010c23c4c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7ae0();
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126b7cd0;
  _objc_opt_new(PTR_PTR_1126b7cd0);
  func_0x00010c194140();
  _objc_release(param_4);
  func_0x00010c0ada00(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10537f620; end: 10537f66f; -[SCVerificationFeatureLogger logUserActionOnEmailRerouteDialogWithAction:] */

void FUN_10537f620(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7cd8;
  _objc_opt_new(PTR_PTR_1126b7cd8);
  func_0x00010c161620();
  func_0x00010c0ada00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10537f670; end: 10537f6d3; -[SCVerificationFeatureLogger logUserSetEmail:] */

void FUN_10537f670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7ce0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c194140();
  _objc_release(param_3);
  func_0x00010c0ada00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10537f6d4; end: 10537f75f; -[SCVerificationFeatureLogger logResponseChangeEmail:success:emailDomain:] */

void FUN_10537f6d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7ce8;
  _objc_retain(param_5);
  _objc_opt_new(puVar1);
  func_0x00010c194140();
  _objc_release(param_5);
  func_0x00010c1b92e0(puVar1,param_2,param_3);
  func_0x00010c20f8a0(puVar1,param_2,param_4);
  func_0x00010c0ada00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10537f760; end: 10537f81f; -[SCVerificationFeatureLogger logRegistrationUserPhoneAttemptWithVersion:context:attemptCount:phoneNumberCountryCode:] */

void FUN_10537f760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_6);
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110dae878);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0720c0();
  if ((int)uVar1 != 0) {
    puVar2 = PTR_PTR_1126b7cf0;
    _objc_opt_new(PTR_PTR_1126b7cf0);
    func_0x00010c16b460();
    func_0x00010c1db1e0(puVar2,param_2,param_6);
    func_0x00010c1e99a0(puVar2,param_2,param_3);
    func_0x00010c0ada00(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10537f820; end: 10537f8ab; -[SCVerificationFeatureLogger logResponseSetPhone:success:phoneNumberCountryCode:] */

void FUN_10537f820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7cf8;
  _objc_retain(param_5);
  _objc_opt_new(puVar1);
  func_0x00010c1b92e0();
  func_0x00010c20f8a0(puVar1,param_2,param_4);
  func_0x00010c1db1e0(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c0ada00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10537f8ac; end: 10537f95b; -[SCVerificationFeatureLogger logRegistrationUserFocusOnCountry:country:withVersion:] */

void FUN_10537f8ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dae878);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 != 0) {
    puVar2 = PTR_PTR_1126b7d00;
    _objc_opt_new(PTR_PTR_1126b7d00);
    func_0x00010c184920();
    func_0x00010c1e99a0(puVar2,param_2,param_5);
    func_0x00010c0ada00(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10537f95c; end: 10537f9df; -[SCVerificationFeatureLogger logRegistrationUserPhonePageviewWithVersion:context:sourcePageType:] */

void FUN_10537f95c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110dae878);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0720c0();
  if ((int)uVar1 != 0) {
    puVar2 = PTR_PTR_1126b7d08;
    _objc_opt_new(PTR_PTR_1126b7d08);
    func_0x00010c1e99a0();
    func_0x00010c0ada00(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10537f9e0; end: 10537fa93; -[SCVerificationFeatureLogger logRegistrationUserPhoneSkipWithVersion:context:phoneNumberCountryCode:] */

void FUN_10537f9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_5);
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110dae878);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0720c0();
  _objc_release(param_4);
  if ((int)uVar1 != 0) {
    puVar2 = PTR_PTR_1126b7d10;
    _objc_opt_new(PTR_PTR_1126b7d10);
    func_0x00010c1e99a0();
    func_0x00010c1db1e0(puVar2,param_2,param_5);
    func_0x00010c0ada00(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10537fa94; end: 10537fb3f; -[SCVerificationFeatureLogger logUserSetPhoneWithPhoneNumberCountryCode:] */

void FUN_10537fa94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b7d18;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1db1e0();
  _objc_release(param_3);
  func_0x00010c0ada00(param_1,param_2,puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af378;
  func_0x00010c23c520(PTR_PTR_1126af378);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7ae0(uVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10537fb40; end: 10537fbdf; -[SCVerificationFeatureLogger logRegistrationUserPhoneVerifyCodeResend:attemptCount:withVersion:] */

void FUN_10537fb40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dae878);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 != 0) {
    puVar2 = PTR_PTR_1126b7d20;
    _objc_opt_new(PTR_PTR_1126b7d20);
    func_0x00010c16b460();
    func_0x00010c1e99a0(puVar2,param_2,param_5);
    func_0x00010c0ada00(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10537fbe0; end: 10537fc67; -[SCVerificationFeatureLogger logRegistrationUserPhoneAttemptWithCode:withVersion:] */

void FUN_10537fbe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dae878);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 != 0) {
    puVar2 = PTR_PTR_1126b7d28;
    _objc_opt_new(PTR_PTR_1126b7d28);
    func_0x00010c1e99a0();
    func_0x00010c0ada00(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10537fc68; end: 10537fd13; -[SCVerificationFeatureLogger logRegistrationUserPhoneSuccessWithContext:attemptCount:hasResentCode:] */

void FUN_10537fc68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dae878);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 != 0) {
    puVar2 = PTR_PTR_1126b7d30;
    _objc_opt_new(PTR_PTR_1126b7d30);
    func_0x00010c16b460();
    func_0x00010c1a6920(puVar2,param_2,param_5);
    func_0x00010c1e99a0(puVar2,param_2,1);
    func_0x00010c0ada00(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10537fd14; end: 10537fd9f; -[SCVerificationFeatureLogger logUserVerifyPhone] */

void FUN_10537fd14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b7d38;
  _objc_opt_new(PTR_PTR_1126b7d38);
  func_0x00010c0ada00(param_1,param_2,puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af378;
  func_0x00010c23c540(PTR_PTR_1126af378);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7ae0(uVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10537fda0; end: 10537fdff; -[SCVerificationFeatureLogger logResponseVerifyPhone:success:] */

void FUN_10537fda0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7d40;
  _objc_opt_new(PTR_PTR_1126b7d40);
  func_0x00010c1b92e0();
  func_0x00010c20f8a0(puVar1,param_2,param_4);
  func_0x00010c0ada00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10537fe00; end: 10537fe77; -[SCVerificationFeatureLogger logUserPhoneVerificationPhoneSuccess:hasResentCode:sourcePageType:] */

void FUN_10537fe00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afb18;
  _objc_opt_new(PTR_PTR_1126afb18);
  func_0x00010c16b460();
  func_0x00010c1a6920(puVar1,param_2,param_4);
  func_0x00010c206c40(puVar1,param_2,param_5);
  func_0x00010c0ada00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10537fe78; end: 10537ff23; -[SCVerificationFeatureLogger logRegistrationUserPhoneFailWithVersion:context:attemptCount:hasResentCode:] */

void FUN_10537fe78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110dae878);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0720c0();
  if ((int)uVar1 != 0) {
    puVar2 = PTR_PTR_1126b7d48;
    _objc_opt_new(PTR_PTR_1126b7d48);
    func_0x00010c16b460();
    func_0x00010c1a6920(puVar2,param_2,param_6);
    func_0x00010c1e99a0(puVar2,param_2,param_3);
    func_0x00010c0ada00(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10537ff24; end: 10538002b; -[SCVerificationFeatureLogger logRegistrationUserSuccess:] */

void FUN_10537ff24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126af8d8;
  _objc_opt_new(PTR_PTR_1126af8d8);
  puVar2 = PTR_PTR_1126af388;
  func_0x00010bf22380(PTR_PTR_1126af388);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af390;
  func_0x00010bfbb8a0(PTR_PTR_1126af390);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a95a0(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c1ada20(puVar1,param_2,puVar2);
  func_0x00010c1e99a0(puVar1,param_2,1);
  func_0x00010c17aae0(puVar1,param_2,param_3);
  func_0x00010c0ada00(param_1,param_2,puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af378;
  func_0x00010c23c4a0(PTR_PTR_1126af378);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7ae0(uVar4,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10538002c; end: 10538007b; -[SCVerificationFeatureLogger logFeatureFieldAutofill:] */

void FUN_10538002c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7b40;
  _objc_opt_new(PTR_PTR_1126b7b40);
  func_0x00010c19b800();
  func_0x00010c0ada00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10538007c; end: 1053800bf; -[SCVerificationFeatureLogger _updateUserSignatureForVerificationEvent:] */

void FUN_10538007c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c21e4c0(param_3,param_2,*(undefined8 *)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053800c0; end: 1053801cb; -[SCVerificationFeatureLogger logUserActionOnSuggestedPhoneNumberDialogWithSuggestionType:accept:] */

void FUN_1053800c0(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b7d50;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  if (param_4 == 0) {
    func_0x00010c161620();
    puVar2 = PTR_PTR_1126af378;
    func_0x00010c0fb200(PTR_PTR_1126af378);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c161620();
    puVar2 = PTR_PTR_1126af378;
    func_0x00010c0fb1e0(PTR_PTR_1126af378);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c20fbc0(puVar1,param_2,param_3);
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dd5118,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7ae0();
  _objc_release(uVar4);
  func_0x00010c0ada00(param_1,param_2,puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053801cc; end: 10538021b; -[SCVerificationFeatureLogger logUserActionOnPhoneRerouteDialogWithAction:] */

void FUN_1053801cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7d58;
  _objc_opt_new(PTR_PTR_1126b7d58);
  func_0x00010c161620();
  func_0x00010c0ada00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10538021c; end: 10538027f; -[SCVerificationFeatureLogger logUserSelectsEmailDomain:] */

void FUN_10538021c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7d60;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c194140();
  _objc_release(param_3);
  func_0x00010c0ada00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105380280; end: 1053802e7; -[SCVerificationFeatureLogger logRegistrationEvent:] */

void FUN_105380280(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bee3140(param_1,param_2,param_3);
  func_0x00010bea2fe0(param_1,param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ada00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1053802e8; end: 105380333; -[SCVerificationFeatureLogger logPageView:] */

void FUN_1053802e8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abcc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105380334; end: 105380387; -[SCVerificationFeatureLogger logRegistrationFlowEvent:pageType:] */

void FUN_105380334(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ada80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105380388; end: 1053803eb; -[SCVerificationFeatureLogger logInitialPhoneInputWithPhoneNumberCountryCode:] */

void FUN_105380388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7d68;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1db1e0();
  _objc_release(param_3);
  func_0x00010c0ada00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053803ec; end: 1053804af; -[SCVerificationFeatureLogger _setContextForVerificationEvent:] */

void FUN_1053803ec(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_setContext__11263e570);
  if ((uVar1 & 1) != 0) {
    uVar1 = param_3;
    func_0x00010c0cca80(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSInvocation_1126b71d0;
    func_0x00010c06abc0(PTR__OBJC_CLASS___NSInvocation_1126b71d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fbb60();
    func_0x00010c2121a0(puVar2);
    func_0x00010c16a2c0(puVar2);
    func_0x00010c06abe0(puVar2);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053804b0; end: 1053804f7; -[SCVerificationFeatureLogger .cxx_destruct] */

void FUN_1053804b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053804f8; end: 105380543; +[SCUserVerificationState abandonRegistration] */

void FUN_1053804f8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afc48;
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



/* Entry: 105380544; end: 10538058f; +[SCUserVerificationState done] */

void FUN_105380544(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afc48;
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



/* Entry: 105380590; end: 1053805d7; +[SCUserVerificationState emailEntryFromEmailFirstCountry] */

void FUN_105380590(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afc48;
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



/* Entry: 1053805d8; end: 105380623; +[SCUserVerificationState emailEntryFromEmailFirstPhoneBypassed] */

void FUN_1053805d8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afc48;
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



/* Entry: 105380624; end: 10538066f; +[SCUserVerificationState emailEntryFromEmailOnly] */

void FUN_105380624(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afc48;
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



/* Entry: 105380670; end: 1053806bb; +[SCUserVerificationState emailEntryFromPhone] */

void FUN_105380670(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afc48;
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



/* Entry: 1053806bc; end: 105380707; +[SCUserVerificationState phoneEntryFromEmail] */

void FUN_1053806bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afc48;
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



/* Entry: 105380708; end: 105380753; +[SCUserVerificationState phoneEntryFromPhoneFirstCountry] */

void FUN_105380708(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afc48;
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



/* Entry: 105380754; end: 10538079f; +[SCUserVerificationState phoneVerifyFromEmailFirst] */

void FUN_105380754(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afc48;
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



/* Entry: 1053807a0; end: 1053807eb; +[SCUserVerificationState phoneVerifyFromPhoneFirst] */

void FUN_1053807a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afc48;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053807ec; end: 10538080f; -[SCUserVerificationState copyWithZone:] */

undefined8 FUN_1053807ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105380810; end: 105380817; -[SCUserVerificationState hash] */

undefined8 FUN_105380810(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105380818; end: 10538085b; -[SCUserVerificationState internalInit] */

void FUN_105380818(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e7bd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10538085c; end: 1053808e3; -[SCUserVerificationState isEqual:] */

bool FUN_10538085c(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 1053808e4; end: 105380a87; -[SCUserVerificationState matchEmailEntryFromEmailFirstCountry:emailEntryFromEmailFirstPhoneBypassed:emailEntryFromEmailOnly:emailEntryFromPhone:phoneEntryFromEmail:phoneEntryFromPhoneFirstCountry:phoneVerifyFromEmailFirst:phoneVerifyFromPhoneFirst:abandonRegistration:done:] */

void FUN_1053808e4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                  long param_12)

{
  long lVar1;
  
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
  switch(*(undefined8 *)(param_1 + 8)) {
  case 0:
    lVar1 = param_3;
    goto joined_r0x000105380a5c;
  case 1:
    lVar1 = param_4;
joined_r0x000105380a5c:
    if (lVar1 == 0) goto LAB_1053809bc;
    goto code_r0x0001053809b4;
  case 2:
    lVar1 = param_5;
    break;
  case 3:
    lVar1 = param_6;
    break;
  case 4:
    lVar1 = param_7;
    break;
  case 5:
    lVar1 = param_8;
    break;
  case 6:
    lVar1 = param_9;
    break;
  case 7:
    lVar1 = param_10;
    break;
  case 8:
    lVar1 = param_11;
    break;
  case 9:
    lVar1 = param_12;
    break;
  default:
    goto LAB_1053809bc;
  }
  if (lVar1 != 0) {
code_r0x0001053809b4:
    (**(code **)(lVar1 + 0x10))();
  }
LAB_1053809bc:
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



/* Entry: 105380a88; end: 105380b33; -[SCUserVerificationStateConfig initWithState:viewConfig:] */

undefined1 *
FUN_105380a88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7bd8;
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



/* Entry: 105380b34; end: 105380b57; -[SCUserVerificationStateConfig copyWithZone:] */

undefined8 FUN_105380b34(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105380b58; end: 105380bcb; -[SCUserVerificationStateConfig hash] */

undefined8 * FUN_105380b58(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_105380c4c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105380c58;
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
          goto LAB_105380c58;
        }
        goto LAB_105380c4c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105380c58:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105380bcc; end: 105380c73; -[SCUserVerificationStateConfig isEqual:] */

long FUN_105380bcc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105380c4c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105380c58;
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
          goto LAB_105380c58;
        }
        goto LAB_105380c4c;
      }
    }
    lVar3 = 0;
  }
LAB_105380c58:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105380c74; end: 105380c7b; -[SCUserVerificationStateConfig state] */

undefined8 FUN_105380c74(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


