/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b9f2c30; end: 10b9f2c37; -[SCALogoutDialogAction getPayloadIdentifier] */

undefined8 FUN_10b9f2c30(void)

{
  return 0x51e;
}



/* Entry: 10b9f2c38; end: 10b9f2c43; -[SCALogoutUpsellPageAction getEventName] */

undefined ** FUN_10b9f2c38(void)

{
  return &PTR____CFConstantStringClassReference_110fb6e58;
}



/* Entry: 10b9f2c44; end: 10b9f2c4b; -[SCALogoutUpsellPageAction getEventQoS] */

undefined8 FUN_10b9f2c44(void)

{
  return 1;
}



/* Entry: 10b9f2c4c; end: 10b9f2ccb; -[SCALogoutUpsellPageAction setAction:] */

void FUN_10b9f2c4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efd5c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf5b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f2ccc; end: 10b9f2ce3; -[SCALogoutUpsellPageAction setImpressionCount:] */

void FUN_10b9f2ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb6e78,3,param_3,0);
  return;
}



/* Entry: 10b9f2ce4; end: 10b9f2cfb; -[SCALogoutUpsellPageAction setLongClientId:] */

void FUN_10b9f2ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa23f8,4,param_3,0);
  return;
}



/* Entry: 10b9f2cfc; end: 10b9f2d7b; -[SCALogoutUpsellPageAction setType:] */

void FUN_10b9f2cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efd7c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dad058,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f2d7c; end: 10b9f2d7f; -[SCALogoutUpsellPageAction getFieldNumberToFieldDict] */

void FUN_10b9f2d7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f2d80; end: 10b9f2d8b; -[SCALogoutUpsellPageAction toProtoWithAllowedFields:] */

void FUN_10b9f2d80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9f2d8c; end: 10b9f2d93; -[SCALogoutUpsellPageAction getPayloadIdentifier] */

undefined8 FUN_10b9f2d8c(void)

{
  return 0x521;
}



/* Entry: 10b9f2d94; end: 10b9f2d9f; -[SCAMagicLoginPadAction getEventName] */

undefined ** FUN_10b9f2d94(void)

{
  return &PTR____CFConstantStringClassReference_110daed78;
}



/* Entry: 10b9f2da0; end: 10b9f2da7; -[SCAMagicLoginPadAction getEventQoS] */

undefined8 FUN_10b9f2da0(void)

{
  return 1;
}



/* Entry: 10b9f2da8; end: 10b9f2e27; -[SCAMagicLoginPadAction setContext:] */

void FUN_10b9f2da8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efd9c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae878,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f2e28; end: 10b9f2e3f; -[SCAMagicLoginPadAction setLoginFlowSessionId:] */

void FUN_10b9f2e28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa2078,3,param_3,0);
  return;
}



/* Entry: 10b9f2e40; end: 10b9f2e57; -[SCAMagicLoginPadAction setLongClientId:] */

void FUN_10b9f2e40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa23f8,4,param_3,0);
  return;
}



/* Entry: 10b9f2e58; end: 10b9f2ed7; -[SCAMagicLoginPadAction setLoginIdentifier:] */

void FUN_10b9f2e58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb00cd0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2498,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f2ed8; end: 10b9f2f57; -[SCAMagicLoginPadAction setLoginSource:] */

void FUN_10b9f2ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb00cf0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2478,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f2f58; end: 10b9f2f5b; -[SCAMagicLoginPadAction getFieldNumberToFieldDict] */

void FUN_10b9f2f58(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f2f5c; end: 10b9f2f67; -[SCAMagicLoginPadAction toProtoWithAllowedFields:] */

void FUN_10b9f2f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9f2f68; end: 10b9f2f6f; -[SCAMagicLoginPadAction getPayloadIdentifier] */

undefined8 FUN_10b9f2f68(void)

{
  return 0xc7b;
}



/* Entry: 10b9f2f70; end: 10b9f2f7b; -[SCAMultiselectPhoneNumberUI getEventName] */

undefined ** FUN_10b9f2f70(void)

{
  return &PTR____CFConstantStringClassReference_110fb6e98;
}



/* Entry: 10b9f2f7c; end: 10b9f2f83; -[SCAMultiselectPhoneNumberUI getEventQoS] */

undefined8 FUN_10b9f2f7c(void)

{
  return 1;
}



/* Entry: 10b9f2f84; end: 10b9f2f8f; -[SCAMultiselectPhoneNumberUI getPerUserSamplingRateV2] */

undefined8 FUN_10b9f2f84(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10b9f2f90; end: 10b9f300f; -[SCAMultiselectPhoneNumberUI setAction:] */

void FUN_10b9f2f90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efdbc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf5b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f3010; end: 10b9f308f; -[SCAMultiselectPhoneNumberUI setAutofillSource:] */

void FUN_10b9f3010(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb09758(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa24b8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f3090; end: 10b9f30b3; -[SCAMultiselectPhoneNumberUI getFieldNumberToFieldDict] */

void FUN_10b9f3090(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f30b4; end: 10b9f30eb; -[SCAMultiselectPhoneNumberUI addToProtoDictionary] */

void FUN_10b9f30b4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9f30ec; end: 10b9f3143; -[SCAMultiselectPhoneNumberUI toProtoWithAllowedFields:] */

void FUN_10b9f30ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9f3144; end: 10b9f314b; -[SCAMultiselectPhoneNumberUI getPayloadIdentifier] */

undefined8 FUN_10b9f3144(void)

{
  return 0x1153;
}



/* Entry: 10b9f314c; end: 10b9f3157; -[SCANGOPreferredVerificationMethodResult getEventName] */

undefined ** FUN_10b9f314c(void)

{
  return &PTR____CFConstantStringClassReference_110fb6eb8;
}



/* Entry: 10b9f3158; end: 10b9f315f; -[SCANGOPreferredVerificationMethodResult getEventQoS] */

undefined8 FUN_10b9f3158(void)

{
  return 1;
}



/* Entry: 10b9f3160; end: 10b9f31df; -[SCANGOPreferredVerificationMethodResult setSource:] */

void FUN_10b9f3160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efddc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,9,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f31e0; end: 10b9f3203; -[SCANGOPreferredVerificationMethodResult getFieldNumberToFieldDict] */

void FUN_10b9f31e0(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f3204; end: 10b9f323b; -[SCANGOPreferredVerificationMethodResult addToProtoDictionary] */

void FUN_10b9f3204(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9f323c; end: 10b9f3293; -[SCANGOPreferredVerificationMethodResult toProtoWithAllowedFields:] */

void FUN_10b9f323c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9f3294; end: 10b9f329b; -[SCANGOPreferredVerificationMethodResult getPayloadIdentifier] */

undefined8 FUN_10b9f3294(void)

{
  return 0x1434;
}



/* Entry: 10b9f329c; end: 10b9f32a7; -[SCAOneTapLoginBitmojiUsernameOnlyOptIn getEventName] */

undefined ** FUN_10b9f329c(void)

{
  return &PTR____CFConstantStringClassReference_110fb6ed8;
}



/* Entry: 10b9f32a8; end: 10b9f32af; -[SCAOneTapLoginBitmojiUsernameOnlyOptIn getEventQoS] */

undefined8 FUN_10b9f32a8(void)

{
  return 1;
}



/* Entry: 10b9f32b0; end: 10b9f32bb; -[SCAOneTapLoginBitmojiUsernameOnlyOptIn getPerUserSamplingRateV2] */

undefined8 FUN_10b9f32b0(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10b9f32bc; end: 10b9f32d3; -[SCAOneTapLoginBitmojiUsernameOnlyOptIn setExperimentId:] */

void FUN_10b9f32bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e6e738,2,param_3,0);
  return;
}



/* Entry: 10b9f32d4; end: 10b9f3327; -[SCAOneTapLoginBitmojiUsernameOnlyOptIn setOneTapLoginFullOptedInUserIdsCount:] */

void FUN_10b9f32d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fb6ef8,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f3328; end: 10b9f337b; -[SCAOneTapLoginBitmojiUsernameOnlyOptIn setOneTapLoginUserIdsCount:] */

void FUN_10b9f3328(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fb6f18,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f337c; end: 10b9f3393; -[SCAOneTapLoginBitmojiUsernameOnlyOptIn setStudyName:] */

void FUN_10b9f337c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dce678,5,param_3,0);
  return;
}



/* Entry: 10b9f3394; end: 10b9f3397; -[SCAOneTapLoginBitmojiUsernameOnlyOptIn getFieldNumberToFieldDict] */

void FUN_10b9f3394(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f3398; end: 10b9f33a3; -[SCAOneTapLoginBitmojiUsernameOnlyOptIn toProtoWithAllowedFields:] */

void FUN_10b9f3398(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9f33a4; end: 10b9f33ab; -[SCAOneTapLoginBitmojiUsernameOnlyOptIn getPayloadIdentifier] */

undefined8 FUN_10b9f33a4(void)

{
  return 0x151a;
}



/* Entry: 10b9f33ac; end: 10b9f33b7; -[SCAOneTapLoginFailure getEventName] */

undefined ** FUN_10b9f33ac(void)

{
  return &PTR____CFConstantStringClassReference_110fb6f38;
}



/* Entry: 10b9f33b8; end: 10b9f33bf; -[SCAOneTapLoginFailure getEventQoS] */

undefined8 FUN_10b9f33b8(void)

{
  return 1;
}



/* Entry: 10b9f33c0; end: 10b9f3413; -[SCAOneTapLoginFailure setPosition:] */

void FUN_10b9f33c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110daf598,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f3414; end: 10b9f342b; -[SCAOneTapLoginFailure setLoginUserGuid:] */

void FUN_10b9f3414(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa37d8,3,param_3,0);
  return;
}



/* Entry: 10b9f342c; end: 10b9f34ab; -[SCAOneTapLoginFailure setSource:] */

void FUN_10b9f342c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb05530(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f34ac; end: 10b9f34c3; -[SCAOneTapLoginFailure setClientNetworkRequestId:] */

void FUN_10b9f34ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa20d8,9,param_3,0);
  return;
}



/* Entry: 10b9f34c4; end: 10b9f3517; -[SCAOneTapLoginFailure setOneTapVersion:] */

void FUN_10b9f34c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa37f8,0xb,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f3518; end: 10b9f353b; -[SCAOneTapLoginFailure getFieldNumberToFieldDict] */

void FUN_10b9f3518(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f353c; end: 10b9f3573; -[SCAOneTapLoginFailure addToProtoDictionary] */

void FUN_10b9f353c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9f3574; end: 10b9f35cb; -[SCAOneTapLoginFailure toProtoWithAllowedFields:] */

void FUN_10b9f3574(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9f35cc; end: 10b9f35d3; -[SCAOneTapLoginFailure getPayloadIdentifier] */

undefined8 FUN_10b9f35cc(void)

{
  return 0xb93;
}



/* Entry: 10b9f35d4; end: 10b9f35df; -[SCAOneTapLoginFailureDialog getEventName] */

undefined ** FUN_10b9f35d4(void)

{
  return &PTR____CFConstantStringClassReference_110fb6f58;
}



/* Entry: 10b9f35e0; end: 10b9f35e7; -[SCAOneTapLoginFailureDialog getEventQoS] */

undefined8 FUN_10b9f35e0(void)

{
  return 1;
}



/* Entry: 10b9f35e8; end: 10b9f3667; -[SCAOneTapLoginFailureDialog setAction:] */

void FUN_10b9f35e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efdfc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf5b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f3668; end: 10b9f367f; -[SCAOneTapLoginFailureDialog setLoginUserGuid:] */

void FUN_10b9f3668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa37d8,3,param_3,0);
  return;
}



/* Entry: 10b9f3680; end: 10b9f36d3; -[SCAOneTapLoginFailureDialog setPosition:] */

void FUN_10b9f3680(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110daf598,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f36d4; end: 10b9f36d7; -[SCAOneTapLoginFailureDialog getFieldNumberToFieldDict] */

void FUN_10b9f36d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f36d8; end: 10b9f36e3; -[SCAOneTapLoginFailureDialog toProtoWithAllowedFields:] */

void FUN_10b9f36d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9f36e4; end: 10b9f36eb; -[SCAOneTapLoginFailureDialog getPayloadIdentifier] */

undefined8 FUN_10b9f36e4(void)

{
  return 0xbaa;
}



/* Entry: 10b9f36ec; end: 10b9f36f7; -[SCAOneTapLoginOptIn getEventName] */

undefined ** FUN_10b9f36ec(void)

{
  return &PTR____CFConstantStringClassReference_110fb6f78;
}



/* Entry: 10b9f36f8; end: 10b9f36ff; -[SCAOneTapLoginOptIn getEventQoS] */

undefined8 FUN_10b9f36f8(void)

{
  return 1;
}



/* Entry: 10b9f3700; end: 10b9f377f; -[SCAOneTapLoginOptIn setAction:] */

void FUN_10b9f3700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efe20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf5b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f3780; end: 10b9f37ff; -[SCAOneTapLoginOptIn setSource:] */

void FUN_10b9f3780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb05530(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f3800; end: 10b9f3803; -[SCAOneTapLoginOptIn getFieldNumberToFieldDict] */

void FUN_10b9f3800(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f3804; end: 10b9f380f; -[SCAOneTapLoginOptIn toProtoWithAllowedFields:] */

void FUN_10b9f3804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9f3810; end: 10b9f3817; -[SCAOneTapLoginOptIn getPayloadIdentifier] */

undefined8 FUN_10b9f3810(void)

{
  return 0xd4c;
}



/* Entry: 10b9f3818; end: 10b9f3823; -[SCAOneTapLoginOptInDialog getEventName] */

undefined ** FUN_10b9f3818(void)

{
  return &PTR____CFConstantStringClassReference_110fb6f98;
}



/* Entry: 10b9f3824; end: 10b9f382b; -[SCAOneTapLoginOptInDialog getEventQoS] */

undefined8 FUN_10b9f3824(void)

{
  return 1;
}



/* Entry: 10b9f382c; end: 10b9f38ab; -[SCAOneTapLoginOptInDialog setAction:] */

void FUN_10b9f382c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efe40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf5b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f38ac; end: 10b9f38c3; -[SCAOneTapLoginOptInDialog setLongClientId:] */

void FUN_10b9f38ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa23f8,3,param_3,0);
  return;
}



/* Entry: 10b9f38c4; end: 10b9f38c7; -[SCAOneTapLoginOptInDialog getFieldNumberToFieldDict] */

void FUN_10b9f38c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f38c8; end: 10b9f38d3; -[SCAOneTapLoginOptInDialog toProtoWithAllowedFields:] */

void FUN_10b9f38c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9f38d4; end: 10b9f38db; -[SCAOneTapLoginOptInDialog getPayloadIdentifier] */

undefined8 FUN_10b9f38d4(void)

{
  return 0x5f6;
}



/* Entry: 10b9f38dc; end: 10b9f38e7; -[SCAOneTapLoginPersistentBlockstoreLoadLatency getEventName] */

undefined ** FUN_10b9f38dc(void)

{
  return &PTR____CFConstantStringClassReference_110fb6fb8;
}



/* Entry: 10b9f38e8; end: 10b9f38ef; -[SCAOneTapLoginPersistentBlockstoreLoadLatency getEventQoS] */

undefined8 FUN_10b9f38e8(void)

{
  return 1;
}



/* Entry: 10b9f38f0; end: 10b9f38fb; -[SCAOneTapLoginPersistentBlockstoreLoadLatency getPerUserSamplingRate] */

undefined8 FUN_10b9f38f0(void)

{
  return 0x3f847ae147ae147b;
}



/* Entry: 10b9f38fc; end: 10b9f3907; -[SCAOneTapLoginPersistentBlockstoreLoadLatency getPerUserSamplingRateV2] */

undefined8 FUN_10b9f38fc(void)

{
  return 0x3f847ae147ae147b;
}



/* Entry: 10b9f3908; end: 10b9f395b; -[SCAOneTapLoginPersistentBlockstoreLoadLatency setLatencyMs:] */

void FUN_10b9f3908(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2198,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f395c; end: 10b9f395f; -[SCAOneTapLoginPersistentBlockstoreLoadLatency getFieldNumberToFieldDict] */

void FUN_10b9f395c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f3960; end: 10b9f396b; -[SCAOneTapLoginPersistentBlockstoreLoadLatency toProtoWithAllowedFields:] */

void FUN_10b9f3960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9f396c; end: 10b9f3973; -[SCAOneTapLoginPersistentBlockstoreLoadLatency getPayloadIdentifier] */

undefined8 FUN_10b9f396c(void)

{
  return 0x13bc;
}



/* Entry: 10b9f3974; end: 10b9f397f; -[SCAOneTapLoginPersistentLoadAttempt getEventName] */

undefined ** FUN_10b9f3974(void)

{
  return &PTR____CFConstantStringClassReference_110fb6fd8;
}



/* Entry: 10b9f3980; end: 10b9f3987; -[SCAOneTapLoginPersistentLoadAttempt getEventQoS] */

undefined8 FUN_10b9f3980(void)

{
  return 1;
}



/* Entry: 10b9f3988; end: 10b9f3993; -[SCAOneTapLoginPersistentLoadAttempt getPerUserSamplingRate] */

undefined8 FUN_10b9f3988(void)

{
  return 0x3f847ae147ae147b;
}



/* Entry: 10b9f3994; end: 10b9f399f; -[SCAOneTapLoginPersistentLoadAttempt getPerUserSamplingRateV2] */

undefined8 FUN_10b9f3994(void)

{
  return 0x3f847ae147ae147b;
}



/* Entry: 10b9f39a0; end: 10b9f39b7; -[SCAOneTapLoginPersistentLoadAttempt setBlockstoreEntryName:] */

void FUN_10b9f39a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb6ff8,2,param_3,0);
  return;
}



/* Entry: 10b9f39b8; end: 10b9f3a0b; -[SCAOneTapLoginPersistentLoadAttempt setIsFirstSessionForInstall:] */

void FUN_10b9f39b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa27d8,3,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f3a0c; end: 10b9f3a0f; -[SCAOneTapLoginPersistentLoadAttempt getFieldNumberToFieldDict] */

void FUN_10b9f3a0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f3a10; end: 10b9f3a1b; -[SCAOneTapLoginPersistentLoadAttempt toProtoWithAllowedFields:] */

void FUN_10b9f3a10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9f3a1c; end: 10b9f3a23; -[SCAOneTapLoginPersistentLoadAttempt getPayloadIdentifier] */

undefined8 FUN_10b9f3a1c(void)

{
  return 0x13f4;
}



/* Entry: 10b9f3a24; end: 10b9f3a2f; -[SCAOneTapLoginPersistentLoadError getEventName] */

undefined ** FUN_10b9f3a24(void)

{
  return &PTR____CFConstantStringClassReference_110fb7018;
}



/* Entry: 10b9f3a30; end: 10b9f3a37; -[SCAOneTapLoginPersistentLoadError getEventQoS] */

undefined8 FUN_10b9f3a30(void)

{
  return 1;
}



/* Entry: 10b9f3a38; end: 10b9f3a43; -[SCAOneTapLoginPersistentLoadError getPerUserSamplingRate] */

undefined8 FUN_10b9f3a38(void)

{
  return 0x3f847ae147ae147b;
}



/* Entry: 10b9f3a44; end: 10b9f3a4f; -[SCAOneTapLoginPersistentLoadError getPerUserSamplingRateV2] */

undefined8 FUN_10b9f3a44(void)

{
  return 0x3f847ae147ae147b;
}


