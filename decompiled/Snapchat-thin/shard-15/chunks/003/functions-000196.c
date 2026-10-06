/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b9bfae0; end: 10b9bfae7; -[SCARegistrationResponseChangeEmail getEventQoS] */

undefined8 FUN_10b9bfae0(void)

{
  return 1;
}



/* Entry: 10b9bfae8; end: 10b9bfaff; -[SCARegistrationResponseChangeEmail setLongClientId:] */

void FUN_10b9bfae8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa23f8,4,param_3,0);
  return;
}



/* Entry: 10b9bfb00; end: 10b9bfb53; -[SCARegistrationResponseChangeEmail setSkipCaptcha:] */

void FUN_10b9bfb00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa3dd8,6,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bfb54; end: 10b9bfb6b; -[SCARegistrationResponseChangeEmail setEmailDomain:] */

void FUN_10b9bfb54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa3df8,0xd,param_3,0);
  return;
}



/* Entry: 10b9bfb6c; end: 10b9bfbeb; -[SCARegistrationResponseChangeEmail setContext:] */

void FUN_10b9bfb6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb1a33c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae878,0xf,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bfbec; end: 10b9bfc0f; -[SCARegistrationResponseChangeEmail getFieldNumberToFieldDict] */

void FUN_10b9bfbec(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9bfc10; end: 10b9bfc47; -[SCARegistrationResponseChangeEmail addToProtoDictionary] */

void FUN_10b9bfc10(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9bfc48; end: 10b9bfc9f; -[SCARegistrationResponseChangeEmail toProtoWithAllowedFields:] */

void FUN_10b9bfc48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,3,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b9bfca0; end: 10b9bfca7; -[SCARegistrationResponseChangeEmail getPayloadIdentifier] */

undefined8 FUN_10b9bfca0(void)

{
  return 0x70c;
}



/* Entry: 10b9bfca8; end: 10b9bfcb3; -[SCARegistrationResponseFindFriends getEventName] */

undefined ** FUN_10b9bfca8(void)

{
  return &PTR____CFConstantStringClassReference_110fa3e18;
}



/* Entry: 10b9bfcb4; end: 10b9bfcbb; -[SCARegistrationResponseFindFriends getEventQoS] */

undefined8 FUN_10b9bfcb4(void)

{
  return 1;
}



/* Entry: 10b9bfcbc; end: 10b9bfd3b; -[SCARegistrationResponseFindFriends setErrorType:] */

void FUN_10b9bfcbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b3c28(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dd6078,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bfd3c; end: 10b9bfd8f; -[SCARegistrationResponseFindFriends setIsTrimmed:] */

void FUN_10b9bfd3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa3e38,4,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bfd90; end: 10b9bfda7; -[SCARegistrationResponseFindFriends setLongClientId:] */

void FUN_10b9bfd90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa23f8,6,param_3,0);
  return;
}



/* Entry: 10b9bfda8; end: 10b9bfe27; -[SCARegistrationResponseFindFriends setSource:] */

void FUN_10b9bfda8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b3c68(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,8,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bfe28; end: 10b9bfe4b; -[SCARegistrationResponseFindFriends getFieldNumberToFieldDict] */

void FUN_10b9bfe28(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9bfe4c; end: 10b9bfe83; -[SCARegistrationResponseFindFriends addToProtoDictionary] */

void FUN_10b9bfe4c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9bfe84; end: 10b9bfedb; -[SCARegistrationResponseFindFriends toProtoWithAllowedFields:] */

void FUN_10b9bfe84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,3,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b9bfedc; end: 10b9bfee3; -[SCARegistrationResponseFindFriends getPayloadIdentifier] */

undefined8 FUN_10b9bfedc(void)

{
  return 0x70d;
}



/* Entry: 10b9bfee4; end: 10b9bfeef; -[SCARegistrationResponseRegister getEventName] */

undefined ** FUN_10b9bfee4(void)

{
  return &PTR____CFConstantStringClassReference_110fa3e58;
}



/* Entry: 10b9bfef0; end: 10b9bfef7; -[SCARegistrationResponseRegister getEventQoS] */

undefined8 FUN_10b9bfef0(void)

{
  return 1;
}



/* Entry: 10b9bfef8; end: 10b9bff77; -[SCARegistrationResponseRegister setErrorSource:] */

void FUN_10b9bfef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b3be8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa3e78,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9bff78; end: 10b9bff8f; -[SCARegistrationResponseRegister setLongClientId:] */

void FUN_10b9bff78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa23f8,5,param_3,0);
  return;
}



/* Entry: 10b9bff90; end: 10b9bffa7; -[SCARegistrationResponseRegister setPreferredVerificationMethod:] */

void FUN_10b9bff90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa3e98,6,param_3,0);
  return;
}



/* Entry: 10b9bffa8; end: 10b9bffcb; -[SCARegistrationResponseRegister getFieldNumberToFieldDict] */

void FUN_10b9bffa8(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9bffcc; end: 10b9c0003; -[SCARegistrationResponseRegister addToProtoDictionary] */

void FUN_10b9bffcc(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9c0004; end: 10b9c005b; -[SCARegistrationResponseRegister toProtoWithAllowedFields:] */

void FUN_10b9c0004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,3,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b9c005c; end: 10b9c0063; -[SCARegistrationResponseRegister getPayloadIdentifier] */

undefined8 FUN_10b9c005c(void)

{
  return 0x70f;
}



/* Entry: 10b9c0064; end: 10b9c006f; -[SCARegistrationResponseSetPhone getEventName] */

undefined ** FUN_10b9c0064(void)

{
  return &PTR____CFConstantStringClassReference_110fa3eb8;
}



/* Entry: 10b9c0070; end: 10b9c0077; -[SCARegistrationResponseSetPhone getEventQoS] */

undefined8 FUN_10b9c0070(void)

{
  return 1;
}



/* Entry: 10b9c0078; end: 10b9c008f; -[SCARegistrationResponseSetPhone setLongClientId:] */

void FUN_10b9c0078(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa23f8,4,param_3,0);
  return;
}



/* Entry: 10b9c0090; end: 10b9c00a7; -[SCARegistrationResponseSetPhone setPhoneNumberCountryCode:] */

void FUN_10b9c0090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa3ed8,0xd,param_3,0);
  return;
}



/* Entry: 10b9c00a8; end: 10b9c0127; -[SCARegistrationResponseSetPhone setStrategy:] */

void FUN_10b9c00a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf5e4c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e753d8,0xf,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c0128; end: 10b9c017b; -[SCARegistrationResponseSetPhone setIsCos:] */

void FUN_10b9c0128(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2058,0x10,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c017c; end: 10b9c01fb; -[SCARegistrationResponseSetPhone setContext:] */

void FUN_10b9c017c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb1a33c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae878,0x11,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c01fc; end: 10b9c021f; -[SCARegistrationResponseSetPhone getFieldNumberToFieldDict] */

void FUN_10b9c01fc(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9c0220; end: 10b9c0257; -[SCARegistrationResponseSetPhone addToProtoDictionary] */

void FUN_10b9c0220(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9c0258; end: 10b9c02af; -[SCARegistrationResponseSetPhone toProtoWithAllowedFields:] */

void FUN_10b9c0258(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,3,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b9c02b0; end: 10b9c02b7; -[SCARegistrationResponseSetPhone getPayloadIdentifier] */

undefined8 FUN_10b9c02b0(void)

{
  return 0x710;
}



/* Entry: 10b9c02b8; end: 10b9c02c3; -[SCARegistrationResponseSetSearchability getEventName] */

undefined ** FUN_10b9c02b8(void)

{
  return &PTR____CFConstantStringClassReference_110fa3ef8;
}



/* Entry: 10b9c02c4; end: 10b9c02cb; -[SCARegistrationResponseSetSearchability getEventQoS] */

undefined8 FUN_10b9c02c4(void)

{
  return 1;
}



/* Entry: 10b9c02cc; end: 10b9c02e3; -[SCARegistrationResponseSetSearchability setLongClientId:] */

void FUN_10b9c02cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa23f8,4,param_3,0);
  return;
}



/* Entry: 10b9c02e4; end: 10b9c0337; -[SCARegistrationResponseSetSearchability setSearchable:] */

void FUN_10b9c02e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa3f18,6,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c0338; end: 10b9c035b; -[SCARegistrationResponseSetSearchability getFieldNumberToFieldDict] */

void FUN_10b9c0338(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9c035c; end: 10b9c0393; -[SCARegistrationResponseSetSearchability addToProtoDictionary] */

void FUN_10b9c035c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9c0394; end: 10b9c03eb; -[SCARegistrationResponseSetSearchability toProtoWithAllowedFields:] */

void FUN_10b9c0394(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9c03ec; end: 10b9c03f3; -[SCARegistrationResponseSetSearchability getPayloadIdentifier] */

undefined8 FUN_10b9c03ec(void)

{
  return 0x711;
}



/* Entry: 10b9c03f4; end: 10b9c03ff; -[SCARegistrationResponseSolveCaptcha getEventName] */

undefined ** FUN_10b9c03f4(void)

{
  return &PTR____CFConstantStringClassReference_110fa3f38;
}



/* Entry: 10b9c0400; end: 10b9c0407; -[SCARegistrationResponseSolveCaptcha getEventQoS] */

undefined8 FUN_10b9c0400(void)

{
  return 1;
}



/* Entry: 10b9c0408; end: 10b9c0413; -[SCARegistrationResponseSolveCaptcha getPerUserSamplingRateV2] */

undefined8 FUN_10b9c0408(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10b9c0414; end: 10b9c0467; -[SCARegistrationResponseSolveCaptcha setFindFriendsEnabled:] */

void FUN_10b9c0414(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa3f58,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c0468; end: 10b9c047f; -[SCARegistrationResponseSolveCaptcha setLongClientId:] */

void FUN_10b9c0468(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa23f8,5,param_3,0);
  return;
}



/* Entry: 10b9c0480; end: 10b9c04a3; -[SCARegistrationResponseSolveCaptcha getFieldNumberToFieldDict] */

void FUN_10b9c0480(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9c04a4; end: 10b9c04db; -[SCARegistrationResponseSolveCaptcha addToProtoDictionary] */

void FUN_10b9c04a4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9c04dc; end: 10b9c0533; -[SCARegistrationResponseSolveCaptcha toProtoWithAllowedFields:] */

void FUN_10b9c04dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9c0534; end: 10b9c053b; -[SCARegistrationResponseSolveCaptcha getPayloadIdentifier] */

undefined8 FUN_10b9c0534(void)

{
  return 0x712;
}



/* Entry: 10b9c053c; end: 10b9c0547; -[SCARegistrationResponseVerifyPhone getEventName] */

undefined ** FUN_10b9c053c(void)

{
  return &PTR____CFConstantStringClassReference_110fa3f78;
}



/* Entry: 10b9c0548; end: 10b9c054f; -[SCARegistrationResponseVerifyPhone getEventQoS] */

undefined8 FUN_10b9c0548(void)

{
  return 1;
}



/* Entry: 10b9c0550; end: 10b9c0567; -[SCARegistrationResponseVerifyPhone setLongClientId:] */

void FUN_10b9c0550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa23f8,4,param_3,0);
  return;
}



/* Entry: 10b9c0568; end: 10b9c05e7; -[SCARegistrationResponseVerifyPhone setStrategy:] */

void FUN_10b9c0568(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf5e4c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e753d8,0xd,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c05e8; end: 10b9c0667; -[SCARegistrationResponseVerifyPhone setContext:] */

void FUN_10b9c05e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb1a33c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae878,0xe,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c0668; end: 10b9c068b; -[SCARegistrationResponseVerifyPhone getFieldNumberToFieldDict] */

void FUN_10b9c0668(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9c068c; end: 10b9c06c3; -[SCARegistrationResponseVerifyPhone addToProtoDictionary] */

void FUN_10b9c068c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9c06c4; end: 10b9c071b; -[SCARegistrationResponseVerifyPhone toProtoWithAllowedFields:] */

void FUN_10b9c06c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,3,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b9c071c; end: 10b9c0723; -[SCARegistrationResponseVerifyPhone getPayloadIdentifier] */

undefined8 FUN_10b9c071c(void)

{
  return 0x714;
}



/* Entry: 10b9c0724; end: 10b9c072f; -[SCARegistrationUserAction getEventName] */

undefined ** FUN_10b9c0724(void)

{
  return &PTR____CFConstantStringClassReference_110fa3f98;
}



/* Entry: 10b9c0730; end: 10b9c0737; -[SCARegistrationUserAction getEventQoS] */

undefined8 FUN_10b9c0730(void)

{
  return 1;
}



/* Entry: 10b9c0738; end: 10b9c07b7; -[SCARegistrationUserAction setAction:] */

void FUN_10b9c0738(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b39e4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf5b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c07b8; end: 10b9c0837; -[SCARegistrationUserAction setPage:] */

void FUN_10b9c07b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9c0838; end: 10b9c08b7; -[SCARegistrationUserAction setState:] */

void FUN_10b9c0838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b3cf0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110db9618,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c08b8; end: 10b9c08bb; -[SCARegistrationUserAction getFieldNumberToFieldDict] */

void FUN_10b9c08b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9c08bc; end: 10b9c08c7; -[SCARegistrationUserAction toProtoWithAllowedFields:] */

void FUN_10b9c08bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9c08c8; end: 10b9c08cf; -[SCARegistrationUserAction getPayloadIdentifier] */

undefined8 FUN_10b9c08c8(void)

{
  return 0x717;
}



/* Entry: 10b9c08d0; end: 10b9c08db; -[SCARegistrationUserAddAllFriends getEventName] */

undefined ** FUN_10b9c08d0(void)

{
  return &PTR____CFConstantStringClassReference_110fa3fb8;
}



/* Entry: 10b9c08dc; end: 10b9c08e3; -[SCARegistrationUserAddAllFriends getEventQoS] */

undefined8 FUN_10b9c08dc(void)

{
  return 1;
}



/* Entry: 10b9c08e4; end: 10b9c0937; -[SCARegistrationUserAddAllFriends setFriendsAdded:] */

void FUN_10b9c08e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa3fd8,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c0938; end: 10b9c097f; -[SCARegistrationUserAddAllFriends setInstallSessionMetadata:] */

void FUN_10b9c0938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2458,4,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b9c0980; end: 10b9c0997; -[SCARegistrationUserAddAllFriends setLongClientId:] */

void FUN_10b9c0980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa23f8,5,param_3,0);
  return;
}



/* Entry: 10b9c0998; end: 10b9c0a57; -[SCARegistrationUserAddAllFriends prepareDictionary:] */

void FUN_10b9c0998(undefined8 param_1,undefined8 param_2,long param_3)

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
  puStack_38 = PTR_PTR_11270c218;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10b9c0a58; end: 10b9c0a7b; -[SCARegistrationUserAddAllFriends getFieldNumberToFieldDict] */

void FUN_10b9c0a58(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9c0a7c; end: 10b9c0ab3; -[SCARegistrationUserAddAllFriends addToProtoDictionary] */

void FUN_10b9c0a7c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9c0ab4; end: 10b9c0b0b; -[SCARegistrationUserAddAllFriends toProtoWithAllowedFields:] */

void FUN_10b9c0ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9c0b0c; end: 10b9c0b13; -[SCARegistrationUserAddAllFriends getPayloadIdentifier] */

undefined8 FUN_10b9c0b0c(void)

{
  return 0x719;
}



/* Entry: 10b9c0b14; end: 10b9c0b1f; -[SCARegistrationUserChallengeLatency getEventName] */

undefined ** FUN_10b9c0b14(void)

{
  return &PTR____CFConstantStringClassReference_110fa3ff8;
}



/* Entry: 10b9c0b20; end: 10b9c0b27; -[SCARegistrationUserChallengeLatency getEventQoS] */

undefined8 FUN_10b9c0b20(void)

{
  return 1;
}



/* Entry: 10b9c0b28; end: 10b9c0b3f; -[SCARegistrationUserChallengeLatency setChallengeType:] */

void FUN_10b9c0b28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa2238,2,param_3,0);
  return;
}



/* Entry: 10b9c0b40; end: 10b9c0b93; -[SCARegistrationUserChallengeLatency setIsCos:] */

void FUN_10b9c0b40(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10b9c0b94; end: 10b9c0be7; -[SCARegistrationUserChallengeLatency setLatencyMs:] */

void FUN_10b9c0b94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2198,7,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c0be8; end: 10b9c0bff; -[SCARegistrationUserChallengeLatency setProvider:] */

void FUN_10b9c0be8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa4018,8,param_3,0);
  return;
}



/* Entry: 10b9c0c00; end: 10b9c0c7f; -[SCARegistrationUserChallengeLatency setFlow:] */

void FUN_10b9c0c00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf4684(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dd9218,0xc,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c0c80; end: 10b9c0ca3; -[SCARegistrationUserChallengeLatency getFieldNumberToFieldDict] */

void FUN_10b9c0c80(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9c0ca4; end: 10b9c0cdb; -[SCARegistrationUserChallengeLatency addToProtoDictionary] */

void FUN_10b9c0ca4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9c0cdc; end: 10b9c0d33; -[SCARegistrationUserChallengeLatency toProtoWithAllowedFields:] */

void FUN_10b9c0cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9c0d34; end: 10b9c0d3b; -[SCARegistrationUserChallengeLatency getPayloadIdentifier] */

undefined8 FUN_10b9c0d34(void)

{
  return 0x1344;
}



/* Entry: 10b9c0d3c; end: 10b9c0d47; -[SCARegistrationUserComplete getEventName] */

undefined ** FUN_10b9c0d3c(void)

{
  return &PTR____CFConstantStringClassReference_110fa4038;
}



/* Entry: 10b9c0d48; end: 10b9c0d4f; -[SCARegistrationUserComplete getEventQoS] */

undefined8 FUN_10b9c0d48(void)

{
  return 1;
}



/* Entry: 10b9c0d50; end: 10b9c0d67; -[SCARegistrationUserComplete setChannelId:] */

void FUN_10b9c0d50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dd2098,2,param_3,0);
  return;
}



/* Entry: 10b9c0d68; end: 10b9c0daf; -[SCARegistrationUserComplete setInstallSessionMetadata:] */

void FUN_10b9c0d68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2458,4,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b9c0db0; end: 10b9c0dc7; -[SCARegistrationUserComplete setLongClientId:] */

void FUN_10b9c0db0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa23f8,5,param_3,0);
  return;
}



/* Entry: 10b9c0dc8; end: 10b9c0e47; -[SCARegistrationUserComplete setRegistrationVersion:] */

void FUN_10b9c0dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb09878(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa4058,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


