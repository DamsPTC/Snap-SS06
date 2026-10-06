/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b9f5b70; end: 10b9f5bf7; -[SCARegistrationUserSignupUsernamePasswordPageview setLastPageviewTs:] */

/* WARNING: Possible PIC construction at 0x00010b9f5bc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b9f5bc4) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_10b9f5b70(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x00010c26f320(param_3);
    func_0x00010c0df720(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa43b8,3,puVar1,5);
  return;
}



/* Entry: 10b9f5bf8; end: 10b9f5c0f; -[SCARegistrationUserSignupUsernamePasswordPageview setLongClientId:] */

void FUN_10b9f5bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa23f8,4,param_3,0);
  return;
}



/* Entry: 10b9f5c10; end: 10b9f5c8f; -[SCARegistrationUserSignupUsernamePasswordPageview setRegistrationVersion:] */

void FUN_10b9f5c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb09878(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa4058,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f5c90; end: 10b9f5ce3; -[SCARegistrationUserSignupUsernamePasswordPageview setRetry:] */

void FUN_10b9f5c90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110db3738,6,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f5ce4; end: 10b9f5d63; -[SCARegistrationUserSignupUsernamePasswordPageview setSource:] */

void FUN_10b9f5ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc9107c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f5d64; end: 10b9f5de3; -[SCARegistrationUserSignupUsernamePasswordPageview setUsernameSource:] */

void FUN_10b9f5d64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9eff48(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb7478,8,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f5de4; end: 10b9f5de7; -[SCARegistrationUserSignupUsernamePasswordPageview getFieldNumberToFieldDict] */

void FUN_10b9f5de4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f5de8; end: 10b9f5df3; -[SCARegistrationUserSignupUsernamePasswordPageview toProtoWithAllowedFields:] */

void FUN_10b9f5de8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9f5df4; end: 10b9f5dfb; -[SCARegistrationUserSignupUsernamePasswordPageview getPayloadIdentifier] */

undefined8 FUN_10b9f5df4(void)

{
  return 0x1282;
}



/* Entry: 10b9f5dfc; end: 10b9f5e07; -[SCARequestLoginCodeAttempt getEventName] */

undefined ** FUN_10b9f5dfc(void)

{
  return &PTR____CFConstantStringClassReference_110fb7498;
}



/* Entry: 10b9f5e08; end: 10b9f5e0f; -[SCARequestLoginCodeAttempt getEventQoS] */

undefined8 FUN_10b9f5e08(void)

{
  return 1;
}



/* Entry: 10b9f5e10; end: 10b9f5e27; -[SCARequestLoginCodeAttempt setClientNetworkRequestId:] */

void FUN_10b9f5e10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa20d8,4,param_3,0);
  return;
}



/* Entry: 10b9f5e28; end: 10b9f5ea7; -[SCARequestLoginCodeAttempt setContext:] */

void FUN_10b9f5e28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9eff88(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae878,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f5ea8; end: 10b9f5f27; -[SCARequestLoginCodeAttempt setDeliveryMechanism:] */

void FUN_10b9f5ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efcf4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb74b8,9,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f5f28; end: 10b9f5f4b; -[SCARequestLoginCodeAttempt getFieldNumberToFieldDict] */

void FUN_10b9f5f28(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f5f4c; end: 10b9f5f83; -[SCARequestLoginCodeAttempt addToProtoDictionary] */

void FUN_10b9f5f4c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9f5f84; end: 10b9f5fdb; -[SCARequestLoginCodeAttempt toProtoWithAllowedFields:] */

void FUN_10b9f5f84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9f5fdc; end: 10b9f5fe3; -[SCARequestLoginCodeAttempt getPayloadIdentifier] */

undefined8 FUN_10b9f5fdc(void)

{
  return 0x1341;
}



/* Entry: 10b9f5fe4; end: 10b9f5fef; -[SCARequestLoginCodeResponse getEventName] */

undefined ** FUN_10b9f5fe4(void)

{
  return &PTR____CFConstantStringClassReference_110fb74d8;
}



/* Entry: 10b9f5ff0; end: 10b9f5ff7; -[SCARequestLoginCodeResponse getEventQoS] */

undefined8 FUN_10b9f5ff0(void)

{
  return 1;
}



/* Entry: 10b9f5ff8; end: 10b9f600f; -[SCARequestLoginCodeResponse setClientNetworkRequestId:] */

void FUN_10b9f5ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa20d8,4,param_3,0);
  return;
}



/* Entry: 10b9f6010; end: 10b9f608f; -[SCARequestLoginCodeResponse setContext:] */

void FUN_10b9f6010(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9eff88(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae878,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f6090; end: 10b9f60e3; -[SCARequestLoginCodeResponse setGrpcStatusCode:] */

void FUN_10b9f6090(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2578,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f60e4; end: 10b9f6137; -[SCARequestLoginCodeResponse setLatencyMs:] */

void FUN_10b9f60e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2198,8,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f6138; end: 10b9f618b; -[SCARequestLoginCodeResponse setProtoStatusCode:] */

void FUN_10b9f6138(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa21b8,10,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f618c; end: 10b9f61df; -[SCARequestLoginCodeResponse setSuccess:] */

void FUN_10b9f618c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,0xc,puVar1,1)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f61e0; end: 10b9f625f; -[SCARequestLoginCodeResponse setDeliveryMechanism:] */

void FUN_10b9f61e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efcf4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb74b8,0xd,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f6260; end: 10b9f6283; -[SCARequestLoginCodeResponse getFieldNumberToFieldDict] */

void FUN_10b9f6260(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f6284; end: 10b9f62bb; -[SCARequestLoginCodeResponse addToProtoDictionary] */

void FUN_10b9f6284(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9f62bc; end: 10b9f6313; -[SCARequestLoginCodeResponse toProtoWithAllowedFields:] */

void FUN_10b9f62bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9f6314; end: 10b9f631b; -[SCARequestLoginCodeResponse getPayloadIdentifier] */

undefined8 FUN_10b9f6314(void)

{
  return 0x1343;
}



/* Entry: 10b9f631c; end: 10b9f6327; -[SCARerouteFromLoginToRegistrationDialog getEventName] */

undefined ** FUN_10b9f631c(void)

{
  return &PTR____CFConstantStringClassReference_110fb6258;
}



/* Entry: 10b9f6328; end: 10b9f632f; -[SCARerouteFromLoginToRegistrationDialog getEventQoS] */

undefined8 FUN_10b9f6328(void)

{
  return 1;
}



/* Entry: 10b9f6330; end: 10b9f63af; -[SCARerouteFromLoginToRegistrationDialog setAction:] */

void FUN_10b9f6330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9eff9c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf5b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f63b0; end: 10b9f642f; -[SCARerouteFromLoginToRegistrationDialog setInputType:] */

void FUN_10b9f63b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb09778(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb6b78,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f6430; end: 10b9f6453; -[SCARerouteFromLoginToRegistrationDialog getFieldNumberToFieldDict] */

void FUN_10b9f6430(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f6454; end: 10b9f648b; -[SCARerouteFromLoginToRegistrationDialog addToProtoDictionary] */

void FUN_10b9f6454(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9f648c; end: 10b9f64e3; -[SCARerouteFromLoginToRegistrationDialog toProtoWithAllowedFields:] */

void FUN_10b9f648c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9f64e4; end: 10b9f64eb; -[SCARerouteFromLoginToRegistrationDialog getPayloadIdentifier] */

undefined8 FUN_10b9f64e4(void)

{
  return 0x1170;
}



/* Entry: 10b9f64ec; end: 10b9f64f7; -[SCASeamlessDataVerification getEventName] */

undefined ** FUN_10b9f64ec(void)

{
  return &PTR____CFConstantStringClassReference_110fb74f8;
}



/* Entry: 10b9f64f8; end: 10b9f64ff; -[SCASeamlessDataVerification getEventQoS] */

undefined8 FUN_10b9f64f8(void)

{
  return 1;
}



/* Entry: 10b9f6500; end: 10b9f657f; -[SCASeamlessDataVerification setAction:] */

void FUN_10b9f6500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9effbc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf5b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f6580; end: 10b9f6597; -[SCASeamlessDataVerification setReason:] */

void FUN_10b9f6580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110daf558,3,param_3,0);
  return;
}



/* Entry: 10b9f6598; end: 10b9f65af; -[SCASeamlessDataVerification setAutoFilledCountryCode:] */

void FUN_10b9f6598(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb7518,6,param_3,0);
  return;
}



/* Entry: 10b9f65b0; end: 10b9f65c7; -[SCASeamlessDataVerification setCountryCode:] */

void FUN_10b9f65b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110de3598,7,param_3,0);
  return;
}



/* Entry: 10b9f65c8; end: 10b9f65df; -[SCASeamlessDataVerification setSeamlessStatus:] */

void FUN_10b9f65c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb7538,8,param_3,0);
  return;
}



/* Entry: 10b9f65e0; end: 10b9f65f7; -[SCASeamlessDataVerification setSeamlessUrl:] */

void FUN_10b9f65e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb7558,9,param_3,0);
  return;
}



/* Entry: 10b9f65f8; end: 10b9f660f; -[SCASeamlessDataVerification setCarrierName:] */

void FUN_10b9f65f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb1438,0xe,param_3,0);
  return;
}



/* Entry: 10b9f6610; end: 10b9f6627; -[SCASeamlessDataVerification setMccString:] */

void FUN_10b9f6610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb7578,0xf,param_3,0);
  return;
}



/* Entry: 10b9f6628; end: 10b9f663f; -[SCASeamlessDataVerification setMncString:] */

void FUN_10b9f6628(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb7598,0x10,param_3,0);
  return;
}



/* Entry: 10b9f6640; end: 10b9f6663; -[SCASeamlessDataVerification getFieldNumberToFieldDict] */

void FUN_10b9f6640(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f6664; end: 10b9f669b; -[SCASeamlessDataVerification addToProtoDictionary] */

void FUN_10b9f6664(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9f669c; end: 10b9f66f3; -[SCASeamlessDataVerification toProtoWithAllowedFields:] */

void FUN_10b9f669c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9f66f4; end: 10b9f66fb; -[SCASeamlessDataVerification getPayloadIdentifier] */

undefined8 FUN_10b9f66f4(void)

{
  return 0xea8;
}



/* Entry: 10b9f66fc; end: 10b9f6707; -[SCATosClientSyncEvent getEventName] */

undefined ** FUN_10b9f66fc(void)

{
  return &PTR____CFConstantStringClassReference_110fb75b8;
}



/* Entry: 10b9f6708; end: 10b9f670f; -[SCATosClientSyncEvent getEventQoS] */

undefined8 FUN_10b9f6708(void)

{
  return 1;
}



/* Entry: 10b9f6710; end: 10b9f678f; -[SCATosClientSyncEvent setAuthFlow:] */

void FUN_10b9f6710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bae9d28(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb75d8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f6790; end: 10b9f67a7; -[SCATosClientSyncEvent setError:] */

void FUN_10b9f6790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110daeeb8,3,param_3,0);
  return;
}



/* Entry: 10b9f67a8; end: 10b9f67fb; -[SCATosClientSyncEvent setLastAcceptedTosVersion:] */

void FUN_10b9f67a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fb75f8,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f67fc; end: 10b9f684f; -[SCATosClientSyncEvent setSyncSucceeded:] */

void FUN_10b9f67fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fb7618,5,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f6850; end: 10b9f6853; -[SCATosClientSyncEvent getFieldNumberToFieldDict] */

void FUN_10b9f6850(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f6854; end: 10b9f685f; -[SCATosClientSyncEvent toProtoWithAllowedFields:] */

void FUN_10b9f6854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9f6860; end: 10b9f6867; -[SCATosClientSyncEvent getPayloadIdentifier] */

undefined8 FUN_10b9f6860(void)

{
  return 0x138d;
}



/* Entry: 10b9f6868; end: 10b9f698f; -[SCAUserSessionScopeStart getFieldNumberToFieldDict] */

void FUN_10b9f6868(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f6990; end: 10b9f699b; -[SCABitmojiAvatarShareOutfitSend getEventName] */

undefined ** FUN_10b9f6990(void)

{
  return &PTR____CFConstantStringClassReference_110fb77f8;
}



/* Entry: 10b9f699c; end: 10b9f69a3; -[SCABitmojiAvatarShareOutfitSend getEventQoS] */

undefined8 FUN_10b9f699c(void)

{
  return 1;
}



/* Entry: 10b9f69a4; end: 10b9f69bb; -[SCABitmojiAvatarShareOutfitSend setAvatarOptionIds:] */

void FUN_10b9f69a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb7818,2,param_3,0);
  return;
}



/* Entry: 10b9f69bc; end: 10b9f69d3; -[SCABitmojiAvatarShareOutfitSend setRecipientList:] */

void FUN_10b9f69bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb7838,3,param_3,0);
  return;
}



/* Entry: 10b9f69d4; end: 10b9f6a27; -[SCABitmojiAvatarShareOutfitSend setTotalUniqueUserRecipientCount:] */

void FUN_10b9f69d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fb34f8,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f6a28; end: 10b9f6aa7; -[SCABitmojiAvatarShareOutfitSend setSource:] */

void FUN_10b9f6a28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc9107c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f6aa8; end: 10b9f6abf; -[SCABitmojiAvatarShareOutfitSend setBitmojiAvatarBuilderSessionId:] */

void FUN_10b9f6aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb7858,6,param_3,0);
  return;
}



/* Entry: 10b9f6ac0; end: 10b9f6ad7; -[SCABitmojiAvatarShareOutfitSend setChatId:] */

void FUN_10b9f6ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb7878,7,param_3,0);
  return;
}



/* Entry: 10b9f6ad8; end: 10b9f6aef; -[SCABitmojiAvatarShareOutfitSend setFriendmojiCategoryName:] */

void FUN_10b9f6ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb7898,8,param_3,0);
  return;
}



/* Entry: 10b9f6af0; end: 10b9f6b07; -[SCABitmojiAvatarShareOutfitSend setSceneId:] */

void FUN_10b9f6af0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110de1a38,9,param_3,0);
  return;
}



/* Entry: 10b9f6b08; end: 10b9f6b1f; -[SCABitmojiAvatarShareOutfitSend setStorySnapId:] */

void FUN_10b9f6b08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ea2038,10,param_3,0);
  return;
}



/* Entry: 10b9f6b20; end: 10b9f6b37; -[SCABitmojiAvatarShareOutfitSend setProfileSessionId:] */

void FUN_10b9f6b20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb1a98,0xb,param_3,0);
  return;
}



/* Entry: 10b9f6b38; end: 10b9f6b8b; -[SCABitmojiAvatarShareOutfitSend setGroupMembersWithBitmojis:] */

void FUN_10b9f6b38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fb78b8,0xd,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f6b8c; end: 10b9f6c0b; -[SCABitmojiAvatarShareOutfitSend setProfileType:] */

void FUN_10b9f6b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb09328(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dc4318,0xe,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f6c0c; end: 10b9f6c8b; -[SCABitmojiAvatarShareOutfitSend setBitmojiStyle:] */

void FUN_10b9f6c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baed090(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb78d8,0xf,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f6c8c; end: 10b9f6c8f; -[SCABitmojiAvatarShareOutfitSend getFieldNumberToFieldDict] */

void FUN_10b9f6c8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f6c90; end: 10b9f6c9b; -[SCABitmojiAvatarShareOutfitSend toProtoWithAllowedFields:] */

void FUN_10b9f6c90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,param_3);
  return;
}



/* Entry: 10b9f6c9c; end: 10b9f6ca3; -[SCABitmojiAvatarShareOutfitSend getPayloadIdentifier] */

undefined8 FUN_10b9f6c9c(void)

{
  return 0xd0d;
}



/* Entry: 10b9f6ca4; end: 10b9f6caf; -[SCABitmojiAvatarShareOutfitViewMessage getEventName] */

undefined ** FUN_10b9f6ca4(void)

{
  return &PTR____CFConstantStringClassReference_110fb78f8;
}



/* Entry: 10b9f6cb0; end: 10b9f6cb7; -[SCABitmojiAvatarShareOutfitViewMessage getEventQoS] */

undefined8 FUN_10b9f6cb0(void)

{
  return 1;
}



/* Entry: 10b9f6cb8; end: 10b9f6d0b; -[SCABitmojiAvatarShareOutfitViewMessage setSharedOutfitCompatible:] */

void FUN_10b9f6cb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fb7918,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f6d0c; end: 10b9f6d0f; -[SCABitmojiAvatarShareOutfitViewMessage getFieldNumberToFieldDict] */

void FUN_10b9f6d0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f6d10; end: 10b9f6d1b; -[SCABitmojiAvatarShareOutfitViewMessage toProtoWithAllowedFields:] */

void FUN_10b9f6d10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9f6d1c; end: 10b9f6d23; -[SCABitmojiAvatarShareOutfitViewMessage getPayloadIdentifier] */

undefined8 FUN_10b9f6d1c(void)

{
  return 0xd0f;
}



/* Entry: 10b9f6d24; end: 10b9f6d2f; -[SCABitmojiFashionShareDeeplinkDialogAction getEventName] */

undefined ** FUN_10b9f6d24(void)

{
  return &PTR____CFConstantStringClassReference_110fb7938;
}



/* Entry: 10b9f6d30; end: 10b9f6d37; -[SCABitmojiFashionShareDeeplinkDialogAction getEventQoS] */

undefined8 FUN_10b9f6d30(void)

{
  return 1;
}



/* Entry: 10b9f6d38; end: 10b9f6db7; -[SCABitmojiFashionShareDeeplinkDialogAction setAction:] */

void FUN_10b9f6d38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9f68d0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf5b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f6db8; end: 10b9f6dcf; -[SCABitmojiFashionShareDeeplinkDialogAction setCostumeOverrideID:] */

void FUN_10b9f6db8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb7958,3,param_3,0);
  return;
}



/* Entry: 10b9f6dd0; end: 10b9f6e4f; -[SCABitmojiFashionShareDeeplinkDialogAction setInventoryStatus:] */

void FUN_10b9f6dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9f68b0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb7978,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9f6e50; end: 10b9f6e53; -[SCABitmojiFashionShareDeeplinkDialogAction getFieldNumberToFieldDict] */

void FUN_10b9f6e50(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9f6e54; end: 10b9f6e5f; -[SCABitmojiFashionShareDeeplinkDialogAction toProtoWithAllowedFields:] */

void FUN_10b9f6e54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9f6e60; end: 10b9f6e67; -[SCABitmojiFashionShareDeeplinkDialogAction getPayloadIdentifier] */

undefined8 FUN_10b9f6e60(void)

{
  return 0xe18;
}



/* Entry: 10b9f6e68; end: 10b9f6e73; -[SCABitmojiFashionShareDeeplinkDialogView getEventName] */

undefined ** FUN_10b9f6e68(void)

{
  return &PTR____CFConstantStringClassReference_110fb7998;
}



/* Entry: 10b9f6e74; end: 10b9f6e7b; -[SCABitmojiFashionShareDeeplinkDialogView getEventQoS] */

undefined8 FUN_10b9f6e74(void)

{
  return 1;
}



/* Entry: 10b9f6e7c; end: 10b9f6e87; -[SCABitmojiFashionShareDeeplinkDialogView getPerUserSamplingRateV2] */

undefined8 FUN_10b9f6e7c(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10b9f6e88; end: 10b9f6e9f; -[SCABitmojiFashionShareDeeplinkDialogView setCostumeOverrideID:] */

void FUN_10b9f6e88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb7958,2,param_3,0);
  return;
}


