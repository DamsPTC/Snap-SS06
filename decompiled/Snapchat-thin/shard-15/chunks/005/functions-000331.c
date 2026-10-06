/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ba8ac70; end: 10ba8ac93; -[SCAQaLensImagePromptUpload getFieldNumberToFieldDict] */

void FUN_10ba8ac70(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8ac94; end: 10ba8accb; -[SCAQaLensImagePromptUpload addToProtoDictionary] */

void FUN_10ba8ac94(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba8accc; end: 10ba8ad23; -[SCAQaLensImagePromptUpload toProtoWithAllowedFields:] */

void FUN_10ba8accc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba8ad24; end: 10ba8ad2b; -[SCAQaLensImagePromptUpload getPayloadIdentifier] */

undefined8 FUN_10ba8ad24(void)

{
  return 0x1357;
}



/* Entry: 10ba8ad2c; end: 10ba8ad37; -[SCAQaLensImageResponseAbandon getEventName] */

undefined ** FUN_10ba8ad2c(void)

{
  return &PTR____CFConstantStringClassReference_110fdec98;
}



/* Entry: 10ba8ad38; end: 10ba8ad3f; -[SCAQaLensImageResponseAbandon getEventQoS] */

undefined8 FUN_10ba8ad38(void)

{
  return 1;
}



/* Entry: 10ba8ad40; end: 10ba8ad4b; -[SCAQaLensImageResponseAbandon getPerUserSamplingRateV2] */

undefined8 FUN_10ba8ad40(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba8ad4c; end: 10ba8ad63; -[SCAQaLensImageResponseAbandon setLensSessionId:] */

void FUN_10ba8ad4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fae358,3,param_3,0);
  return;
}



/* Entry: 10ba8ad64; end: 10ba8ad7b; -[SCAQaLensImageResponseAbandon setPromptId:] */

void FUN_10ba8ad64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fdec58,4,param_3,0);
  return;
}



/* Entry: 10ba8ad7c; end: 10ba8ad9f; -[SCAQaLensImageResponseAbandon getFieldNumberToFieldDict] */

void FUN_10ba8ad7c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8ada0; end: 10ba8add7; -[SCAQaLensImageResponseAbandon addToProtoDictionary] */

void FUN_10ba8ada0(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba8add8; end: 10ba8ae2f; -[SCAQaLensImageResponseAbandon toProtoWithAllowedFields:] */

void FUN_10ba8add8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba8ae30; end: 10ba8ae37; -[SCAQaLensImageResponseAbandon getPayloadIdentifier] */

undefined8 FUN_10ba8ae30(void)

{
  return 0x1358;
}



/* Entry: 10ba8ae38; end: 10ba8ae43; -[SCAQaLensImageResponseSend getEventName] */

undefined ** FUN_10ba8ae38(void)

{
  return &PTR____CFConstantStringClassReference_110fdecb8;
}



/* Entry: 10ba8ae44; end: 10ba8ae4b; -[SCAQaLensImageResponseSend getEventQoS] */

undefined8 FUN_10ba8ae44(void)

{
  return 1;
}



/* Entry: 10ba8ae4c; end: 10ba8ae9f; -[SCAQaLensImageResponseSend setLatency:] */

void FUN_10ba8ae4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110db8578,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8aea0; end: 10ba8aeb7; -[SCAQaLensImageResponseSend setLensSessionId:] */

void FUN_10ba8aea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fae358,4,param_3,0);
  return;
}



/* Entry: 10ba8aeb8; end: 10ba8aecf; -[SCAQaLensImageResponseSend setPromptId:] */

void FUN_10ba8aeb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fdec58,5,param_3,0);
  return;
}



/* Entry: 10ba8aed0; end: 10ba8af23; -[SCAQaLensImageResponseSend setSuccess:] */

void FUN_10ba8aed0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,6,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8af24; end: 10ba8af47; -[SCAQaLensImageResponseSend getFieldNumberToFieldDict] */

void FUN_10ba8af24(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8af48; end: 10ba8af7f; -[SCAQaLensImageResponseSend addToProtoDictionary] */

void FUN_10ba8af48(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba8af80; end: 10ba8afd7; -[SCAQaLensImageResponseSend toProtoWithAllowedFields:] */

void FUN_10ba8af80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba8afd8; end: 10ba8afdf; -[SCAQaLensImageResponseSend getPayloadIdentifier] */

undefined8 FUN_10ba8afd8(void)

{
  return 0x1359;
}



/* Entry: 10ba8afe0; end: 10ba8afeb; -[SCAQaLensImageResponseView getEventName] */

undefined ** FUN_10ba8afe0(void)

{
  return &PTR____CFConstantStringClassReference_110fdecd8;
}



/* Entry: 10ba8afec; end: 10ba8aff3; -[SCAQaLensImageResponseView getEventQoS] */

undefined8 FUN_10ba8afec(void)

{
  return 1;
}



/* Entry: 10ba8aff4; end: 10ba8b00b; -[SCAQaLensImageResponseView setPromptId:] */

void FUN_10ba8aff4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fdec58,3,param_3,0);
  return;
}



/* Entry: 10ba8b00c; end: 10ba8b023; -[SCAQaLensImageResponseView setResponseId:] */

void FUN_10ba8b00c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fdecf8,4,param_3,0);
  return;
}



/* Entry: 10ba8b024; end: 10ba8b047; -[SCAQaLensImageResponseView getFieldNumberToFieldDict] */

void FUN_10ba8b024(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8b048; end: 10ba8b07f; -[SCAQaLensImageResponseView addToProtoDictionary] */

void FUN_10ba8b048(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba8b080; end: 10ba8b0d7; -[SCAQaLensImageResponseView toProtoWithAllowedFields:] */

void FUN_10ba8b080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba8b0d8; end: 10ba8b0df; -[SCAQaLensImageResponseView getPayloadIdentifier] */

undefined8 FUN_10ba8b0d8(void)

{
  return 0x135a;
}



/* Entry: 10ba8b0e0; end: 10ba8b0eb; -[SCARemoteApiAuthFlowFailed getEventName] */

undefined ** FUN_10ba8b0e0(void)

{
  return &PTR____CFConstantStringClassReference_110fded18;
}



/* Entry: 10ba8b0ec; end: 10ba8b0f3; -[SCARemoteApiAuthFlowFailed getEventQoS] */

undefined8 FUN_10ba8b0ec(void)

{
  return 2;
}



/* Entry: 10ba8b0f4; end: 10ba8b10b; -[SCARemoteApiAuthFlowFailed setApiSpecId:] */

void FUN_10ba8b0f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fded38,2,param_3,0);
  return;
}



/* Entry: 10ba8b10c; end: 10ba8b18b; -[SCARemoteApiAuthFlowFailed setFailureReason:] */

void FUN_10ba8b10c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba7ef54(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dbdcd8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8b18c; end: 10ba8b1af; -[SCARemoteApiAuthFlowFailed getFieldNumberToFieldDict] */

void FUN_10ba8b18c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8b1b0; end: 10ba8b1e7; -[SCARemoteApiAuthFlowFailed addToProtoDictionary] */

void FUN_10ba8b1b0(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba8b1e8; end: 10ba8b23f; -[SCARemoteApiAuthFlowFailed toProtoWithAllowedFields:] */

void FUN_10ba8b1e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba8b240; end: 10ba8b247; -[SCARemoteApiAuthFlowFailed getPayloadIdentifier] */

undefined8 FUN_10ba8b240(void)

{
  return 0xc89;
}



/* Entry: 10ba8b248; end: 10ba8b253; -[SCARemoteApiAuthFlowStarted getEventName] */

undefined ** FUN_10ba8b248(void)

{
  return &PTR____CFConstantStringClassReference_110fded58;
}



/* Entry: 10ba8b254; end: 10ba8b25b; -[SCARemoteApiAuthFlowStarted getEventQoS] */

undefined8 FUN_10ba8b254(void)

{
  return 2;
}



/* Entry: 10ba8b25c; end: 10ba8b273; -[SCARemoteApiAuthFlowStarted setApiSpecId:] */

void FUN_10ba8b25c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fded38,2,param_3,0);
  return;
}



/* Entry: 10ba8b274; end: 10ba8b297; -[SCARemoteApiAuthFlowStarted getFieldNumberToFieldDict] */

void FUN_10ba8b274(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8b298; end: 10ba8b2cf; -[SCARemoteApiAuthFlowStarted addToProtoDictionary] */

void FUN_10ba8b298(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba8b2d0; end: 10ba8b327; -[SCARemoteApiAuthFlowStarted toProtoWithAllowedFields:] */

void FUN_10ba8b2d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba8b328; end: 10ba8b32f; -[SCARemoteApiAuthFlowStarted getPayloadIdentifier] */

undefined8 FUN_10ba8b328(void)

{
  return 0xc8b;
}



/* Entry: 10ba8b330; end: 10ba8b33b; -[SCARemoteApiAuthFlowSucceeded getEventName] */

undefined ** FUN_10ba8b330(void)

{
  return &PTR____CFConstantStringClassReference_110fded78;
}



/* Entry: 10ba8b33c; end: 10ba8b343; -[SCARemoteApiAuthFlowSucceeded getEventQoS] */

undefined8 FUN_10ba8b33c(void)

{
  return 2;
}



/* Entry: 10ba8b344; end: 10ba8b35b; -[SCARemoteApiAuthFlowSucceeded setApiSpecId:] */

void FUN_10ba8b344(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fded38,2,param_3,0);
  return;
}



/* Entry: 10ba8b35c; end: 10ba8b37f; -[SCARemoteApiAuthFlowSucceeded getFieldNumberToFieldDict] */

void FUN_10ba8b35c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8b380; end: 10ba8b3b7; -[SCARemoteApiAuthFlowSucceeded addToProtoDictionary] */

void FUN_10ba8b380(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba8b3b8; end: 10ba8b40f; -[SCARemoteApiAuthFlowSucceeded toProtoWithAllowedFields:] */

void FUN_10ba8b3b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba8b410; end: 10ba8b417; -[SCARemoteApiAuthFlowSucceeded getPayloadIdentifier] */

undefined8 FUN_10ba8b410(void)

{
  return 0xc8c;
}



/* Entry: 10ba8b418; end: 10ba8b423; -[SCARemoteApiAuthTokenError getEventName] */

undefined ** FUN_10ba8b418(void)

{
  return &PTR____CFConstantStringClassReference_110fded98;
}



/* Entry: 10ba8b424; end: 10ba8b42b; -[SCARemoteApiAuthTokenError getEventQoS] */

undefined8 FUN_10ba8b424(void)

{
  return 2;
}



/* Entry: 10ba8b42c; end: 10ba8b443; -[SCARemoteApiAuthTokenError setApiSpecId:] */

void FUN_10ba8b42c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fded38,2,param_3,0);
  return;
}



/* Entry: 10ba8b444; end: 10ba8b4c3; -[SCARemoteApiAuthTokenError setErrorSource:] */

void FUN_10ba8b444(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba7ef74(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa3e78,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8b4c4; end: 10ba8b543; -[SCARemoteApiAuthTokenError setFailureReason:] */

void FUN_10ba8b4c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba7ef98(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dbdcd8,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8b544; end: 10ba8b567; -[SCARemoteApiAuthTokenError getFieldNumberToFieldDict] */

void FUN_10ba8b544(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8b568; end: 10ba8b59f; -[SCARemoteApiAuthTokenError addToProtoDictionary] */

void FUN_10ba8b568(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba8b5a0; end: 10ba8b5f7; -[SCARemoteApiAuthTokenError toProtoWithAllowedFields:] */

void FUN_10ba8b5a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba8b5f8; end: 10ba8b5ff; -[SCARemoteApiAuthTokenError getPayloadIdentifier] */

undefined8 FUN_10ba8b5f8(void)

{
  return 0xc8d;
}



/* Entry: 10ba8b600; end: 10ba8b60b; -[SCARemoteApiAuthTokenFound getEventName] */

undefined ** FUN_10ba8b600(void)

{
  return &PTR____CFConstantStringClassReference_110fdedb8;
}



/* Entry: 10ba8b60c; end: 10ba8b613; -[SCARemoteApiAuthTokenFound getEventQoS] */

undefined8 FUN_10ba8b60c(void)

{
  return 2;
}



/* Entry: 10ba8b614; end: 10ba8b62b; -[SCARemoteApiAuthTokenFound setApiSpecId:] */

void FUN_10ba8b614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fded38,2,param_3,0);
  return;
}



/* Entry: 10ba8b62c; end: 10ba8b67f; -[SCARemoteApiAuthTokenFound setRefreshed:] */

void FUN_10ba8b62c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dac9b8,5,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8b680; end: 10ba8b6a3; -[SCARemoteApiAuthTokenFound getFieldNumberToFieldDict] */

void FUN_10ba8b680(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8b6a4; end: 10ba8b6db; -[SCARemoteApiAuthTokenFound addToProtoDictionary] */

void FUN_10ba8b6a4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba8b6dc; end: 10ba8b733; -[SCARemoteApiAuthTokenFound toProtoWithAllowedFields:] */

void FUN_10ba8b6dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba8b734; end: 10ba8b73b; -[SCARemoteApiAuthTokenFound getPayloadIdentifier] */

undefined8 FUN_10ba8b734(void)

{
  return 0xc90;
}



/* Entry: 10ba8b73c; end: 10ba8b747; -[SCARemoteApiAuthTokenNotAvailable getEventName] */

undefined ** FUN_10ba8b73c(void)

{
  return &PTR____CFConstantStringClassReference_110fdedd8;
}



/* Entry: 10ba8b748; end: 10ba8b74f; -[SCARemoteApiAuthTokenNotAvailable getEventQoS] */

undefined8 FUN_10ba8b748(void)

{
  return 2;
}



/* Entry: 10ba8b750; end: 10ba8b767; -[SCARemoteApiAuthTokenNotAvailable setApiSpecId:] */

void FUN_10ba8b750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fded38,2,param_3,0);
  return;
}



/* Entry: 10ba8b768; end: 10ba8b78b; -[SCARemoteApiAuthTokenNotAvailable getFieldNumberToFieldDict] */

void FUN_10ba8b768(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8b78c; end: 10ba8b7c3; -[SCARemoteApiAuthTokenNotAvailable addToProtoDictionary] */

void FUN_10ba8b78c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba8b7c4; end: 10ba8b81b; -[SCARemoteApiAuthTokenNotAvailable toProtoWithAllowedFields:] */

void FUN_10ba8b7c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba8b81c; end: 10ba8b823; -[SCARemoteApiAuthTokenNotAvailable getPayloadIdentifier] */

undefined8 FUN_10ba8b81c(void)

{
  return 0xc91;
}



/* Entry: 10ba8b824; end: 10ba8b82f; -[SCARemoteApiRequestSent getEventName] */

undefined ** FUN_10ba8b824(void)

{
  return &PTR____CFConstantStringClassReference_110fdedf8;
}



/* Entry: 10ba8b830; end: 10ba8b837; -[SCARemoteApiRequestSent getEventQoS] */

undefined8 FUN_10ba8b830(void)

{
  return 2;
}



/* Entry: 10ba8b838; end: 10ba8b843; -[SCARemoteApiRequestSent getPerUserSamplingRate] */

undefined8 FUN_10ba8b838(void)

{
  return 0x3fa999999999999a;
}



/* Entry: 10ba8b844; end: 10ba8b84f; -[SCARemoteApiRequestSent getPerUserSamplingRateV2] */

undefined8 FUN_10ba8b844(void)

{
  return 0x3fa999999999999a;
}



/* Entry: 10ba8b850; end: 10ba8b867; -[SCARemoteApiRequestSent setApiSpecSetId:] */

void FUN_10ba8b850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fdee18,2,param_3,0);
  return;
}



/* Entry: 10ba8b868; end: 10ba8b87f; -[SCARemoteApiRequestSent setEndpointId:] */

void FUN_10ba8b868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fdee38,3,param_3,0);
  return;
}



/* Entry: 10ba8b880; end: 10ba8b8a3; -[SCARemoteApiRequestSent getFieldNumberToFieldDict] */

void FUN_10ba8b880(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8b8a4; end: 10ba8b8db; -[SCARemoteApiRequestSent addToProtoDictionary] */

void FUN_10ba8b8a4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba8b8dc; end: 10ba8b933; -[SCARemoteApiRequestSent toProtoWithAllowedFields:] */

void FUN_10ba8b8dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba8b934; end: 10ba8b93b; -[SCARemoteApiRequestSent getPayloadIdentifier] */

undefined8 FUN_10ba8b934(void)

{
  return 0xd2b;
}



/* Entry: 10ba8b93c; end: 10ba8b947; -[SCARemoteApiResponseFailed getEventName] */

undefined ** FUN_10ba8b93c(void)

{
  return &PTR____CFConstantStringClassReference_110fdee58;
}



/* Entry: 10ba8b948; end: 10ba8b94f; -[SCARemoteApiResponseFailed getEventQoS] */

undefined8 FUN_10ba8b948(void)

{
  return 2;
}



/* Entry: 10ba8b950; end: 10ba8b95b; -[SCARemoteApiResponseFailed getPerUserSamplingRate] */

undefined8 FUN_10ba8b950(void)

{
  return 0x3fa999999999999a;
}



/* Entry: 10ba8b95c; end: 10ba8b967; -[SCARemoteApiResponseFailed getPerUserSamplingRateV2] */

undefined8 FUN_10ba8b95c(void)

{
  return 0x3fa999999999999a;
}



/* Entry: 10ba8b968; end: 10ba8b97f; -[SCARemoteApiResponseFailed setApiSpecSetId:] */

void FUN_10ba8b968(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fdee18,2,param_3,0);
  return;
}



/* Entry: 10ba8b980; end: 10ba8b997; -[SCARemoteApiResponseFailed setEndpointId:] */

void FUN_10ba8b980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fdee38,3,param_3,0);
  return;
}



/* Entry: 10ba8b998; end: 10ba8b9eb; -[SCARemoteApiResponseFailed setServiceErrorCode:] */

void FUN_10ba8b998(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fdee78,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8b9ec; end: 10ba8ba3f; -[SCARemoteApiResponseFailed setLatencyMs:] */

void FUN_10ba8b9ec(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10ba8ba40; end: 10ba8babf; -[SCARemoteApiResponseFailed setFeatureType:] */

void FUN_10ba8ba40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba7efb8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fdee98,9,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8bac0; end: 10ba8bae3; -[SCARemoteApiResponseFailed getFieldNumberToFieldDict] */

void FUN_10ba8bac0(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8bae4; end: 10ba8bb1b; -[SCARemoteApiResponseFailed addToProtoDictionary] */

void FUN_10ba8bae4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba8bb1c; end: 10ba8bb73; -[SCARemoteApiResponseFailed toProtoWithAllowedFields:] */

void FUN_10ba8bb1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba8bb74; end: 10ba8bb7b; -[SCARemoteApiResponseFailed getPayloadIdentifier] */

undefined8 FUN_10ba8bb74(void)

{
  return 0xd2c;
}


