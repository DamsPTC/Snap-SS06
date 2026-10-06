/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b9f19b4; end: 10b9f19bf; -[SCAAuthenticationFlowPageView toProtoWithAllowedFields:] */

void FUN_10b9f19b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9f19c0; end: 10b9f19c7; -[SCAAuthenticationFlowPageView getPayloadIdentifier] */

undefined8 FUN_10b9f19c0(void)

{
  return 0xc70;
}



/* Entry: 10b9f19c8; end: 10b9f19d3; -[SCAAuthenticationStateTransition getEventName] */

undefined ** FUN_10b9f19c8(void)

{
  return &PTR____CFConstantStringClassReference_110fb6b18;
}



/* Entry: 10b9f19d4; end: 10b9f19db; -[SCAAuthenticationStateTransition getEventQoS] */

undefined8 FUN_10b9f19d4(void)

{
  return 1;
}



/* Entry: 10b9f19dc; end: 10b9f19f3; -[SCAAuthenticationStateTransition setAuthenticationSessionId:] */

void FUN_10b9f19dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb6ab8,2,param_3,0);
  return;
}



/* Entry: 10b9f19f4; end: 10b9f1a73; -[SCAAuthenticationStateTransition setFromState:] */

void FUN_10b9f19f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efc30(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dd15d8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f1a74; end: 10b9f1ac7; -[SCAAuthenticationStateTransition setHasLoggedInBefore:] */

void FUN_10b9f1a74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8b8,4,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f1ac8; end: 10b9f1b1b; -[SCAAuthenticationStateTransition setLatencyMs:] */

void FUN_10b9f1ac8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2198,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f1b1c; end: 10b9f1b33; -[SCAAuthenticationStateTransition setLoginFlowSessionId:] */

void FUN_10b9f1b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa2078,6,param_3,0);
  return;
}



/* Entry: 10b9f1b34; end: 10b9f1b4b; -[SCAAuthenticationStateTransition setLongClientId:] */

void FUN_10b9f1b34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa23f8,7,param_3,0);
  return;
}



/* Entry: 10b9f1b4c; end: 10b9f1bcb; -[SCAAuthenticationStateTransition setPage:] */

void FUN_10b9f1b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc9107c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daedd8,8,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f1bcc; end: 10b9f1be3; -[SCAAuthenticationStateTransition setRegistrationSessionId:] */

void FUN_10b9f1bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa27b8,9,param_3,0);
  return;
}



/* Entry: 10b9f1be4; end: 10b9f1c63; -[SCAAuthenticationStateTransition setToState:] */

void FUN_10b9f1be4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efc30(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dd15f8,10,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f1c64; end: 10b9f1ce3; -[SCAAuthenticationStateTransition setRegistrationApiPath:] */

void FUN_10b9f1c64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb09738(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb6b38,0xb,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f1ce4; end: 10b9f1ce7; -[SCAAuthenticationStateTransition getFieldNumberToFieldDict] */

void FUN_10b9f1ce4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f1ce8; end: 10b9f1cf3; -[SCAAuthenticationStateTransition toProtoWithAllowedFields:] */

void FUN_10b9f1ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,param_3);
  return;
}



/* Entry: 10b9f1cf4; end: 10b9f1cfb; -[SCAAuthenticationStateTransition getPayloadIdentifier] */

undefined8 FUN_10b9f1cf4(void)

{
  return 0xc71;
}



/* Entry: 10b9f1cfc; end: 10b9f1d07; -[SCADisplayLoginRegistrationDialog getEventName] */

undefined ** FUN_10b9f1cfc(void)

{
  return &PTR____CFConstantStringClassReference_110fb6b58;
}



/* Entry: 10b9f1d08; end: 10b9f1d0f; -[SCADisplayLoginRegistrationDialog getEventQoS] */

undefined8 FUN_10b9f1d08(void)

{
  return 1;
}



/* Entry: 10b9f1d10; end: 10b9f1d1b; -[SCADisplayLoginRegistrationDialog getPerUserSamplingRateV2] */

undefined8 FUN_10b9f1d10(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10b9f1d1c; end: 10b9f1d9b; -[SCADisplayLoginRegistrationDialog setInputType:] */

void FUN_10b9f1d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb09778(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb6b78,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f1d9c; end: 10b9f1e1b; -[SCADisplayLoginRegistrationDialog setLoginRegistrationDialogType:] */

void FUN_10b9f1d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efd18(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb6b98,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f1e1c; end: 10b9f1e3f; -[SCADisplayLoginRegistrationDialog getFieldNumberToFieldDict] */

void FUN_10b9f1e1c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f1e40; end: 10b9f1e77; -[SCADisplayLoginRegistrationDialog addToProtoDictionary] */

void FUN_10b9f1e40(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9f1e78; end: 10b9f1ecf; -[SCADisplayLoginRegistrationDialog toProtoWithAllowedFields:] */

void FUN_10b9f1e78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b9f1ed0; end: 10b9f1ed7; -[SCADisplayLoginRegistrationDialog getPayloadIdentifier] */

undefined8 FUN_10b9f1ed0(void)

{
  return 0x116e;
}



/* Entry: 10b9f1ed8; end: 10b9f1ee3; -[SCAEmailDomainSuggestionUse getEventName] */

undefined ** FUN_10b9f1ed8(void)

{
  return &PTR____CFConstantStringClassReference_110fb6bb8;
}



/* Entry: 10b9f1ee4; end: 10b9f1eeb; -[SCAEmailDomainSuggestionUse getEventQoS] */

undefined8 FUN_10b9f1ee4(void)

{
  return 1;
}



/* Entry: 10b9f1eec; end: 10b9f1f03; -[SCAEmailDomainSuggestionUse setEmailDomain:] */

void FUN_10b9f1eec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa3df8,3,param_3,0);
  return;
}



/* Entry: 10b9f1f04; end: 10b9f1f27; -[SCAEmailDomainSuggestionUse getFieldNumberToFieldDict] */

void FUN_10b9f1f04(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f1f28; end: 10b9f1f5f; -[SCAEmailDomainSuggestionUse addToProtoDictionary] */

void FUN_10b9f1f28(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9f1f60; end: 10b9f1fb7; -[SCAEmailDomainSuggestionUse toProtoWithAllowedFields:] */

void FUN_10b9f1f60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b9f1fb8; end: 10b9f1fbf; -[SCAEmailDomainSuggestionUse getPayloadIdentifier] */

undefined8 FUN_10b9f1fb8(void)

{
  return 0x101b;
}



/* Entry: 10b9f1fc0; end: 10b9f1fcb; -[SCAEmailVerificationRerouteDialog getEventName] */

undefined ** FUN_10b9f1fc0(void)

{
  return &PTR____CFConstantStringClassReference_110fb6bd8;
}



/* Entry: 10b9f1fcc; end: 10b9f1fd3; -[SCAEmailVerificationRerouteDialog getEventQoS] */

undefined8 FUN_10b9f1fcc(void)

{
  return 1;
}



/* Entry: 10b9f1fd4; end: 10b9f1fdf; -[SCAEmailVerificationRerouteDialog getPerUserSamplingRateV2] */

undefined8 FUN_10b9f1fd4(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10b9f1fe0; end: 10b9f205f; -[SCAEmailVerificationRerouteDialog setAction:] */

void FUN_10b9f1fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efbd0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf5b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f2060; end: 10b9f2083; -[SCAEmailVerificationRerouteDialog getFieldNumberToFieldDict] */

void FUN_10b9f2060(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f2084; end: 10b9f20bb; -[SCAEmailVerificationRerouteDialog addToProtoDictionary] */

void FUN_10b9f2084(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9f20bc; end: 10b9f2113; -[SCAEmailVerificationRerouteDialog toProtoWithAllowedFields:] */

void FUN_10b9f20bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b9f2114; end: 10b9f211b; -[SCAEmailVerificationRerouteDialog getPayloadIdentifier] */

undefined8 FUN_10b9f2114(void)

{
  return 0x1011;
}



/* Entry: 10b9f211c; end: 10b9f2127; -[SCAGoogleSignUpResult getEventName] */

undefined ** FUN_10b9f211c(void)

{
  return &PTR____CFConstantStringClassReference_110fb6bf8;
}



/* Entry: 10b9f2128; end: 10b9f212f; -[SCAGoogleSignUpResult getEventQoS] */

undefined8 FUN_10b9f2128(void)

{
  return 1;
}



/* Entry: 10b9f2130; end: 10b9f21af; -[SCAGoogleSignUpResult setGoogleSignUpResultType:] */

void FUN_10b9f2130(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efbf0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb6c18,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f21b0; end: 10b9f2203; -[SCAGoogleSignUpResult setExceptionStatusCode:] */

void FUN_10b9f21b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fb6c38,9,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f2204; end: 10b9f221b; -[SCAGoogleSignUpResult setGoogleSignUpErrorMessage:] */

void FUN_10b9f2204(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb6c58,10,param_3,0);
  return;
}



/* Entry: 10b9f221c; end: 10b9f223f; -[SCAGoogleSignUpResult getFieldNumberToFieldDict] */

void FUN_10b9f221c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f2240; end: 10b9f2277; -[SCAGoogleSignUpResult addToProtoDictionary] */

void FUN_10b9f2240(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9f2278; end: 10b9f22cf; -[SCAGoogleSignUpResult toProtoWithAllowedFields:] */

void FUN_10b9f2278(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b9f22d0; end: 10b9f22d7; -[SCAGoogleSignUpResult getPayloadIdentifier] */

undefined8 FUN_10b9f22d0(void)

{
  return 0x1277;
}



/* Entry: 10b9f22d8; end: 10b9f22e3; -[SCAInputValidationError getEventName] */

undefined ** FUN_10b9f22d8(void)

{
  return &PTR____CFConstantStringClassReference_110fb6c78;
}



/* Entry: 10b9f22e4; end: 10b9f22eb; -[SCAInputValidationError getEventQoS] */

undefined8 FUN_10b9f22e4(void)

{
  return 1;
}



/* Entry: 10b9f22ec; end: 10b9f2303; -[SCAInputValidationError setErrorMessage:] */

void FUN_10b9f22ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e0a338,2,param_3,0);
  return;
}



/* Entry: 10b9f2304; end: 10b9f2383; -[SCAInputValidationError setFieldType:] */

void FUN_10b9f2304(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efc70(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb0138,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f2384; end: 10b9f2403; -[SCAInputValidationError setRuleType:] */

void FUN_10b9f2384(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efc94(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb6c98,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f2404; end: 10b9f2407; -[SCAInputValidationError getFieldNumberToFieldDict] */

void FUN_10b9f2404(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f2408; end: 10b9f2413; -[SCAInputValidationError toProtoWithAllowedFields:] */

void FUN_10b9f2408(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9f2414; end: 10b9f241b; -[SCAInputValidationError getPayloadIdentifier] */

undefined8 FUN_10b9f2414(void)

{
  return 0x1801;
}



/* Entry: 10b9f241c; end: 10b9f2427; -[SCAInputValidationFailure getEventName] */

undefined ** FUN_10b9f241c(void)

{
  return &PTR____CFConstantStringClassReference_110fb6cb8;
}



/* Entry: 10b9f2428; end: 10b9f242f; -[SCAInputValidationFailure getEventQoS] */

undefined8 FUN_10b9f2428(void)

{
  return 1;
}



/* Entry: 10b9f2430; end: 10b9f24af; -[SCAInputValidationFailure setFieldType:] */

void FUN_10b9f2430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efc70(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb0138,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f24b0; end: 10b9f252f; -[SCAInputValidationFailure setRuleType:] */

void FUN_10b9f24b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efc94(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb6c98,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f2530; end: 10b9f2533; -[SCAInputValidationFailure getFieldNumberToFieldDict] */

void FUN_10b9f2530(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f2534; end: 10b9f253f; -[SCAInputValidationFailure toProtoWithAllowedFields:] */

void FUN_10b9f2534(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9f2540; end: 10b9f2547; -[SCAInputValidationFailure getPayloadIdentifier] */

undefined8 FUN_10b9f2540(void)

{
  return 0x1802;
}



/* Entry: 10b9f2548; end: 10b9f2553; -[SCALegalComplianceStatus getEventName] */

undefined ** FUN_10b9f2548(void)

{
  return &PTR____CFConstantStringClassReference_110fb6cd8;
}



/* Entry: 10b9f2554; end: 10b9f255b; -[SCALegalComplianceStatus getEventQoS] */

undefined8 FUN_10b9f2554(void)

{
  return 1;
}



/* Entry: 10b9f255c; end: 10b9f25af; -[SCALegalComplianceStatus setComplianceRequirement:] */

void FUN_10b9f255c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fb6cf8,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f25b0; end: 10b9f2603; -[SCALegalComplianceStatus setComplianceStatusCheckCount:] */

void FUN_10b9f25b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fb6d18,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f2604; end: 10b9f2657; -[SCALegalComplianceStatus setIsCompliant:] */

void FUN_10b9f2604(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fb6d38,4,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f2658; end: 10b9f26ab; -[SCALegalComplianceStatus setTosAvailable:] */

void FUN_10b9f2658(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fb6d58,5,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f26ac; end: 10b9f26ff; -[SCALegalComplianceStatus setTosVersion:] */

void FUN_10b9f26ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fb6d78,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f2700; end: 10b9f2703; -[SCALegalComplianceStatus getFieldNumberToFieldDict] */

void FUN_10b9f2700(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f2704; end: 10b9f270f; -[SCALegalComplianceStatus toProtoWithAllowedFields:] */

void FUN_10b9f2704(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9f2710; end: 10b9f2717; -[SCALegalComplianceStatus getPayloadIdentifier] */

undefined8 FUN_10b9f2710(void)

{
  return 0x1485;
}



/* Entry: 10b9f2718; end: 10b9f2723; -[SCALegalPromptEvent getEventName] */

undefined ** FUN_10b9f2718(void)

{
  return &PTR____CFConstantStringClassReference_110fb6d98;
}



/* Entry: 10b9f2724; end: 10b9f272b; -[SCALegalPromptEvent getEventQoS] */

undefined8 FUN_10b9f2724(void)

{
  return 1;
}



/* Entry: 10b9f272c; end: 10b9f27ab; -[SCALegalPromptEvent setLegalPromptAction:] */

void FUN_10b9f272c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efcb4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb6db8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f27ac; end: 10b9f282b; -[SCALegalPromptEvent setLegalPromptType:] */

void FUN_10b9f27ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efcd4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb6dd8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f282c; end: 10b9f287f; -[SCALegalPromptEvent setComplianceRequirement:] */

void FUN_10b9f282c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fb6cf8,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f2880; end: 10b9f28d3; -[SCALegalPromptEvent setTosVersion:] */

void FUN_10b9f2880(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fb6d78,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f28d4; end: 10b9f28d7; -[SCALegalPromptEvent getFieldNumberToFieldDict] */

void FUN_10b9f28d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f28d8; end: 10b9f28e3; -[SCALegalPromptEvent toProtoWithAllowedFields:] */

void FUN_10b9f28d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9f28e4; end: 10b9f28eb; -[SCALegalPromptEvent getPayloadIdentifier] */

undefined8 FUN_10b9f28e4(void)

{
  return 0x4b2;
}



/* Entry: 10b9f28ec; end: 10b9f28f7; -[SCALoginFlowPageView getEventName] */

undefined ** FUN_10b9f28ec(void)

{
  return &PTR____CFConstantStringClassReference_110fb6df8;
}



/* Entry: 10b9f28f8; end: 10b9f28ff; -[SCALoginFlowPageView getEventQoS] */

undefined8 FUN_10b9f28f8(void)

{
  return 1;
}



/* Entry: 10b9f2900; end: 10b9f2947; -[SCALoginFlowPageView setLoginMetadata:] */

void FUN_10b9f2900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa3758,2,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b9f2948; end: 10b9f29c7; -[SCALoginFlowPageView setPage:] */

void FUN_10b9f2948(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc9107c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daedd8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f29c8; end: 10b9f2a47; -[SCALoginFlowPageView setPageFrom:] */

void FUN_10b9f29c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc9107c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb6e18,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f2a48; end: 10b9f2a9b; -[SCALoginFlowPageView setIsCos:] */

void FUN_10b9f2a48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2058,5,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f2a9c; end: 10b9f2b5b; -[SCALoginFlowPageView prepareDictionary:] */

void FUN_10b9f2a9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(param_3);
    lVar2 = lVar1;
    func_0x00010bf0a640(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_11270c348;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10b9f2b5c; end: 10b9f2b5f; -[SCALoginFlowPageView getFieldNumberToFieldDict] */

void FUN_10b9f2b5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f2b60; end: 10b9f2b6b; -[SCALoginFlowPageView toProtoWithAllowedFields:] */

void FUN_10b9f2b60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9f2b6c; end: 10b9f2b73; -[SCALoginFlowPageView getPayloadIdentifier] */

undefined8 FUN_10b9f2b6c(void)

{
  return 0x514;
}



/* Entry: 10b9f2b74; end: 10b9f2b7f; -[SCALogoutDialogAction getEventName] */

undefined ** FUN_10b9f2b74(void)

{
  return &PTR____CFConstantStringClassReference_110fb6e38;
}



/* Entry: 10b9f2b80; end: 10b9f2b87; -[SCALogoutDialogAction getEventQoS] */

undefined8 FUN_10b9f2b80(void)

{
  return 1;
}



/* Entry: 10b9f2b88; end: 10b9f2c07; -[SCALogoutDialogAction setContext:] */

void FUN_10b9f2b88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efd3c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae878,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f2c08; end: 10b9f2c1f; -[SCALogoutDialogAction setLongClientId:] */

void FUN_10b9f2c08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa23f8,3,param_3,0);
  return;
}



/* Entry: 10b9f2c20; end: 10b9f2c23; -[SCALogoutDialogAction getFieldNumberToFieldDict] */

void FUN_10b9f2c20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f2c24; end: 10b9f2c2f; -[SCALogoutDialogAction toProtoWithAllowedFields:] */

void FUN_10b9f2c24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}


